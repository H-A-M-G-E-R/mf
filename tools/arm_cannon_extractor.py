def ParsePart0(value):
    result = ""

    if value & 0x100:
        result = "OBJ_ROTATION_SCALING"

    if value & 0x200:
        if result != "":
            result += " | OBJ_DOUBLE_SIZE"
        else:
            result = "OBJ_DISABLE"

    if value & 0x400:
        if result != "":
            result += " | "
        result += "OBJ_MODE_SEMI_TRANSPARENT"
    
    if value & 0x1000:
        if result != "":
            result += " | "
        result += "OBJ_MOSAIC"

    if value & 0x2000:
        if result != "":
            result += " | "
        result += "OBJ_COLOR_256_1"

    if value & 0x4000:
        if result != "":
            result += " | "
        result += "OBJ_SHAPE_HORIZONTAL"

    if value & 0x8000:
        if result != "":
            result += " | "
        result += "OBJ_SHAPE_VERTICAL"

    if result != "":
        result += " | "
    
    result += hex(value & 0xFF)

    return result

def ParsePart1(part0, value):
    result = ""
    sizes = ["OBJ_SIZE_16x16", "OBJ_SIZE_32x32", "OBJ_SIZE_64x64"]

    if part0.__contains__("OBJ_ROTATION_SCALING"):
        result = hex(value & 0x3E00)
    else:
        if value & 0x1000:
            result = "OBJ_X_FLIP"
        
        if value & 0x2000:
            if result != "":
                result += " | "
            result += "OBJ_Y_FLIP"

    if part0.__contains__("OBJ_SHAPE_HORIZONTAL"):
        sizes = ["OBJ_SIZE_32x8", "OBJ_SIZE_32x16", "OBJ_SIZE_64x32"]
    elif part0.__contains__("OBJ_SHAPE_VERTICAL"):
        sizes = ["OBJ_SIZE_8x32", "OBJ_SIZE_16x32", "OBJ_SIZE_32x64"]
        
    if value >> 14 & 3 != 0:
        if result != "":
            result += " | "
        result += sizes[(value >> 14 & 3) - 1]


    if result != "":
        result += " | "
    
    result += hex(value & 0x1FF)

    return result

def ParsePart2(value):
    result = ""

    if value >> 12 & 0xF != 0:
        result += f"OBJ_PALETTE_{value >> 12 & 0xF}"
    
    if value >> 10 & 3 != 0:
        if result != "":
            result += " | "
        result += f"OBJ_PRIORITY_{value >> 10 & 3}"

    if result != "":
        result += " | "
    
    result += hex(value & 0x3FF)

    return result

# BUG: missing count in oam 0x28a1a4
def ParseOam(is_28a1a4=False):
    if is_28a1a4:
        result = f"static const u16 sArmCannonOam_{file.tell():x}[] = " + "{\n    "
        part_count = 3
    else:
        part_count = int.from_bytes(file.read(2), "little")
        if part_count & 0xCFFF == 0 or part_count & 0xCFFF > 128:
            raise AssertionError(f"invalid part count at {file.tell()-2:x}: {part_count:x}")
        result = f"static const u16 sArmCannonOam_{file.tell()-2:x}[] = " + "{\n"
        result += f"    {part_count & 0xCFFF}"
        if part_count & 0x2000:
            result += " | ARM_CANNON_OAM_ORDER_IN_FRONT"
        if part_count & 0x1000:
            result += " | ARM_CANNON_OAM_ORDER_BEHIND"
        result += ",\n    "

    part_count &= 0xCFFF
    for x in range(0, part_count):
        part0 = ParsePart0(int.from_bytes(file.read(2), "little"))
        result += part0 + ", "
        result += ParsePart1(part0, int.from_bytes(file.read(2), "little")) + ", "
        result += ParsePart2(int.from_bytes(file.read(2), "little"))
        if x < part_count - 1:
            result += ",\n    "

    if is_28a1a4:
        result += f",\n    {int.from_bytes(file.read(2), "little")}"
    result += "\n};\n\n"

    return result

def parse_offset():
    y = int.from_bytes(file.read(2), "little")
    x = int.from_bytes(file.read(2), "little")

    result = f"static const s16 sArmCannonOffset_{file.tell()-4:x}[2] = " + "{\n"
    result += f"    C_S8_2_S16({y if y < 0x80 else y - 0x100}),\n"
    result += f"    C_S9_2_S16({x if x < 0x100 else x - 0x200})\n"
    result += "};\n\n"

    return result

def parse_anim(p_end, label):
    p_start = file.tell()

    anim_data = []
    while file.tell() < p_end:
        anim_data.append((int.from_bytes(file.read(4), "little"), int.from_bytes(file.read(4), "little")))

    result = f"const struct ArmCannonAnimationData sArmCannonAnim_{label}[{len(anim_data)}] = " + "{\n    "

    for i in range(len(anim_data)):
        result += f"[{i}] = {{\n"
        result += f"        .pOffset = &sArmCannonOffset_{anim_data[i][0] & 0x1FFFFFF:x},\n"
        if anim_data[i][1] == 0x828998e:
            result += "        .pOam = sSamusOam_Empty\n"
        else:
            result += f"        .pOam = sArmCannonOam_{anim_data[i][1] & 0x1FFFFFF:x}\n"
        result += "    }"
        if i < len(anim_data) - 1:
            result += ",\n    "

    result += "\n};\n\n"

    return result, anim_data

anim_names_base = [
    "Standing", # 0
    "TurningAround", # 1
    "Shooting", # 2
    "Running", # 3
    "MidAir", # 4
    "TurningAroundMidAir", # 5
    "Landing", # 6
    "UnusedCrouching", # 7
    "TurningAroundAndCrouching", # 8
    "Crouching", # 9
    "StartingSpinJump", # 0xa
    "Spinning", # 0xb
    "Morphing", # 0xc
    "MorphBall", # 0xd
    "Rolling", # 0xe
    "Unmorphing", # 0xf
    "MorphBallMidAir", # 0x10
    "GettingHurt", # 0x11
    "GettingHurtInMorphBall", # 0x12
    "GettingKnockedBack", # 0x13
    "GettingKnockedBackInMorphBall", # 0x14
    "StartingWallJump", # 0x15
    "WallJumping", # 0x16
    "UsingAnElevator", # 0x17
    "HangingOnLedge", # 0x18
    "PullingYourselfUpFromHanging", # 0x19
    "PullingYourselfForwardFromHanging", # 0x1a
    "PullingYourselfIntoMorphBallTunnel", # 0x1b
    "PullingYourselfDownToStartHanging", # 0x1c
    "SpaceJumping", # 0x1d
    "ScrewAttacking", # 0x1e
    "Skidding", # 0x1f
    "OnSavePad", # 0x20
    "OnRechargeOrSecurityPad", # 0x21
    "TurningAroundToRechargeOrUnlockDoors", # 0x22
    "DelayBeforeShinesparking", # 0x23
    "Shinesparking", # 0x24
    "DelayAfterShinesparking", # 0x25
    "HangingFromVerticalLadder", # 0x26
    "StartingToHoldYourArmCannonOutOnAVerticalLadder", # 0x27
    "HoldingYourArmCannonOutOnAVerticalLadder", # 0x28
    "ShootingOnVerticalLadder", # 0x29
    "StartingToPutAwayYourArmCannonOutOnAVerticalLadder", # 0x2a
    "HangingOnHorizontalLadder", # 0x2b
    "MovingOnHorizontalLadder", # 0x2c
    "TurningAroundOnHorizontalLadder", # 0x2d
    "DelayAfterShootingOnHorizontalLadder", # 0x2e
    "ShootingOnHorizontalLadder", # 0x2f
    "Frozen", # 0x30
    "FrozenAndFalling", # 0x31
    "FrozenInMorphBall", # 0x32
    "FrozenInMorphBallAndFalling", # 0x33
    "UnlockingSecurity", # 0x34
    "Saving", # 0x35
    "OnNavigationPad", # 0x36
    "DownloadingAbility", # 0x37
    "BeingRecharged", # 0x38
    "FacingForeground", # 0x39
    "FacingBackground", # 0x3a
    "UnlockingHabitationsDeck", # 0x3b
    "GrabbedByZazabi", # 0x3c
    "LoadingSave", # 0x3d
    "Dying", # 0x3e
    "HitByOmegaMetroid", # 0x3f
    "Down_MidAir", # "GrabbedByYakuza", # 0x40

    "Standing",
    "Forward_Standing",
    "DiagonalUp_Standing",
    "DiagonalDown_Standing",
    "Up_Standing",

    "TurningAround",
    "Forward_TurningAround",
    "DiagonalUp_TurningAround",
    "DiagonalDown_TurningAround",
    "Up_TurningAround",

    "Shooting",
    "Forward_Shooting",
    "DiagonalUp_Shooting",
    "DiagonalDown_Shooting",
    "Up_Shooting",

    "Running",
    "Forward_Running",
    "DiagonalUp_Running",
    "DiagonalDown_Running",

    "MidAir",
    "Forward_MidAir",
    "DiagonalUp_MidAir",
    "DiagonalDown_MidAir",
    "Up_MidAir",
    "Down_MidAir",

    "TurningAroundMidAir",
    "Forward_TurningAroundMidAir",
    "DiagonalUp_TurningAroundMidAir",
    "DiagonalDown_TurningAroundMidAir",
    "Up_TurningAroundMidAir",
    "Down_TurningAroundMidAir",

    "Landing",
    "Forward_Landing",
    "DiagonalUp_Landing",
    "DiagonalDown_Landing",
    "Up_Landing",

    # unused animations
    "UnusedCrouching",
    "Forward_UnusedCrouching",
    "DiagonalUp_UnusedCrouching",
    "DiagonalDown_UnusedCrouching",
    "Up_UnusedCrouching",

    "TurningAroundAndCrouching",
    "Forward_TurningAroundAndCrouching",
    "DiagonalUp_TurningAroundAndCrouching",
    "DiagonalDown_TurningAroundAndCrouching",
    "Up_TurningAroundAndCrouching",

    "Crouching",
    "Forward_Crouching",
    "DiagonalUp_Crouching",
    "DiagonalDown_Crouching",
    "Up_Crouching",

    "HangingOnLedge",
    "ReadyToJump_HangingOnLedge",

    "Shinesparking",
    "Sidewards_Shinesparking",
    "DiagonalUp_Shinesparking",

    "DelayAfterShinesparking",
    "Sidewards_DelayAfterShinesparking",
    "DiagonalUp_DelayAfterShinesparking",

    "HoldingYourArmCannonOutOnAVerticalLadder",
    "Forward_HoldingYourArmCannonOutOnAVerticalLadder",
    "DiagonalUp_HoldingYourArmCannonOutOnAVerticalLadder",
    "DiagonalDown_HoldingYourArmCannonOutOnAVerticalLadder",
    "Up_HoldingYourArmCannonOutOnAVerticalLadder",
    "Down_HoldingYourArmCannonOutOnAVerticalLadder",

    "ShootingOnVerticalLadder",
    "Forward_ShootingOnVerticalLadder",
    "DiagonalUp_ShootingOnVerticalLadder",
    "DiagonalDown_ShootingOnVerticalLadder",
    "Up_ShootingOnVerticalLadder",
    "Down_ShootingOnVerticalLadder",

    "DelayAfterShootingOnHorizontalLadder",
    "Forward_DelayAfterShootingOnHorizontalLadder",
    "DiagonalUp_DelayAfterShootingOnHorizontalLadder",
    "DiagonalDown_HangingOnHorizontalLadder",
    "Up_DelayAfterShootingOnHorizontalLadder",
    "Down_DelayAfterShootingOnHorizontalLadder",

    "ShootingOnHorizontalLadder",
    "Forward_ShootingOnHorizontalLadder",
    "DiagonalUp_ShootingOnHorizontalLadder",
    "DiagonalDown_ShootingOnHorizontalLadder",
    "Up_ShootingOnHorizontalLadder",
    "Down_ShootingOnHorizontalLadder"
]

def make_p_anim_labels():
    file.seek(0x28d8dc)
    labels = {}

    for anim_name in anim_names_base:
        right = int.from_bytes(file.read(4), "little") & 0x1FFFFFF
        left = int.from_bytes(file.read(4), "little") & 0x1FFFFFF
        if right == left:
            if right not in labels:
                labels[right] = f"{anim_name}"
        else:
            if right not in labels:
                labels[right] = f"Right_{anim_name}"
            if left not in labels:
                labels[left] = f"Left_{anim_name}"

    labels[0x28a99c] = "end"
    labels[0x28b6ac] = "end"
    labels[0x28bf78] = "end"
    labels[0x28c8e0] = "end"
    labels[0x28ca64] = "end"
    labels[0x28ccb4] = "end"
    return labels

def parse_anims(labels):
    out = ''
    anims_data = []

    file.read((4 - (file.tell() % 4)) % 4) # align
    while labels[file.tell()] != "end":
        current_p_anim = file.tell()
        next_p_anim = sorted_p_anims[sorted_p_anims.index(file.tell()) + 1]
        text, anim_data = parse_anim(next_p_anim, labels[file.tell()])
        out += text
        anims_data.append((labels[current_p_anim], anim_data))

    return out, anims_data

file = open("../mf_us_baserom.gba", "rb")
out = ''

p_anim_labels = make_p_anim_labels()

sorted_p_anims = sorted(p_anim_labels.keys())

anims_data = []

file.seek(0x289994)

while file.tell() < 0x28a1e0:
    out += ParseOam(is_28a1a4=file.tell() == 0x28a1a4)

while file.tell() < 0x28a37c:
    out += parse_offset()

text, new_anims_data = parse_anims(p_anim_labels)
out += text
anims_data += new_anims_data

while file.tell() < 0x28afa8:
    out += ParseOam()

while file.tell() < 0x28b14c:
    out += parse_offset()

text, new_anims_data = parse_anims(p_anim_labels)
out += text
anims_data += new_anims_data

while file.tell() < 0x28b80e:
    out += ParseOam()

while file.tell() < 0x28b906:
    out += parse_offset()

text, new_anims_data = parse_anims(p_anim_labels)
out += text
anims_data += new_anims_data

out += "// using an elevator effect oam is at 28bf78-28bfc0\n\n"

file.seek(0x28bfc0)
while file.tell() < 0x28c204:
    out += ParseOam()

while file.tell() < 0x28c370:
    out += parse_offset()

text, new_anims_data = parse_anims(p_anim_labels)
out += text
anims_data += new_anims_data

while file.tell() < 0x28c8e4:
    out += parse_offset()

text, new_anims_data = parse_anims(p_anim_labels)
out += text
anims_data += new_anims_data

out += "// screw attacking effect oam is at 28ca64-28cb3c\n\n"

file.seek(0x28cb3c)
while file.tell() < 0x28cb44:
    out += parse_offset()

text, new_anims_data = parse_anims(p_anim_labels)
out += text
anims_data += new_anims_data

# dying effect oam is at 28ccb4-28cdf0
# loading save effect oam is at 28cdf0-28d014
# 28d014-28d258 are unused i think

for anim_data in anims_data:
    for i, (p_offset, p_oam) in enumerate(anim_data[1]):
        out = out.replace(f"sArmCannonOffset_{p_offset & 0x1FFFFFF:x}", f"sArmCannonOffset_{anim_data[0]}_Frame{i}")
        out = out.replace(f"sArmCannonOam_{p_oam & 0x1FFFFFF:x}", f"sArmCannonOam_{anim_data[0]}_Frame{i}")
    out += f"extern const struct ArmCannonAnimationData sArmCannonAnim_{anim_data[0]}[{len(anim_data[1])}];\n"

print(out)
