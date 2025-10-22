# requires temporarily replacing "static const u16" in the .c file with "/*static*/ const u16" then compiling it to use it
from labels import extract_labels

def parse_entry(part0, part1, part2):
    shape = part0 >> 14
    y = part0 & 0xFF
    if y > 0x80:
        y = y - 0x100

    size = part1 >> 14
    flip = part1 >> 12 & 3
    x = part1 & 0x1FF
    if x > 0x100:
        x = x - 0x200

    palette = part2 >> 12
    priority = part2 >> 10 & 3
    tile = part2 & 0x3FF

    dim_labels = ["OAM_DIMS_8x8", "OAM_DIMS_16x16", "OAM_DIMS_32x32", "OAM_DIMS_64x64",
                  "OAM_DIMS_16x8", "OAM_DIMS_32x8", "OAM_DIMS_32x16", "OAM_DIMS_64x32",
                  "OAM_DIMS_8x16", "OAM_DIMS_8x32", "OAM_DIMS_16x32", "OAM_DIMS_32x64"]

    flip_labels = ["OAM_NO_FLIP", "OAM_X_FLIP", "OAM_Y_FLIP", "OAM_XY_FLIP"]

    return f"OAM_ENTRY({x}, {y}, {dim_labels[shape * 4 + size]}, {flip_labels[flip]}, 0x{tile:x}, {palette}, {priority})"

def parse_oam(label, is_28a1a4=False):
    if is_28a1a4:
        result = f"static const u16 {label}[] = {{\n    "
        part_count = 3
    else:
        part_count = int.from_bytes(file.read(2), "little")
        result = f"static const u16 {label}[] = {{\n"
        if part_count == 0:
            result += f"    0"
        else:
            result += f"    {part_count & 0xCFFF}"
            if part_count & 0x2000:
                result += " | ARM_CANNON_OAM_ORDER_IN_FRONT"
            if part_count & 0x1000:
                result += " | ARM_CANNON_OAM_ORDER_BEHIND"
            result += ",\n    "

    part_count &= 0xCFFF
    for x in range(0, part_count):
        result += parse_entry(int.from_bytes(file.read(2), "little"), int.from_bytes(file.read(2), "little"), int.from_bytes(file.read(2), "little"))
        if x < part_count - 1:
            result += ",\n    "

    if is_28a1a4:
        result += f",\n    {int.from_bytes(file.read(2), "little")}"
    result += "\n};\n"

    return result

def reformat_oam(start):
    result = ""

    file.seek(start & 0x1ffffff)

    frames = set()
    while True:
        current_addr = file.tell()

        if current_addr % 4 != 0:
            file.read(4 - (current_addr % 4)) # align
        pointer = int.from_bytes(file.read(4), 'little')
        if pointer in frames:
            file.seek(file.tell()-4)
            break

        if current_addr | 0x8000000 not in all_labels:
            break

        file.seek(current_addr)
        frames |= {current_addr | 0x8000000}

        result += parse_oam(all_labels[current_addr | 0x8000000], is_28a1a4=current_addr == 0x28a1a4) + "\n"

    return result

if __name__ == "__main__":
    import sys

    file = open("../mf_us_baserom.gba", "rb")
    all_labels = extract_labels()

    print(reformat_oam(int(sys.argv[1], 16)))
