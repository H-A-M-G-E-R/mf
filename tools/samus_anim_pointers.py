from labels import extract_labels

pose_names = [
    "SPOSE_STANDING", # 0
    "SPOSE_TURNING_AROUND", # 1
    "SPOSE_SHOOTING", # 2
    "SPOSE_RUNNING", # 3
    "SPOSE_MID_AIR", # 4
    "SPOSE_TURNING_AROUND_MID_AIR", # 5
    "SPOSE_LANDING", # 6
    "SPOSE_CROUCHING", # 7
    "SPOSE_TURNING_AROUND_AND_CROUCHING", # 8
    "SPOSE_SHOOTING_AND_CROUCHING", # 9
    "SPOSE_STARTING_SPIN_JUMP", # 0xa
    "SPOSE_SPINNING", # 0xb
    "SPOSE_MORPHING", # 0xc
    "SPOSE_MORPH_BALL", # 0xd
    "SPOSE_ROLLING", # 0xe
    "SPOSE_UNMORPHING", # 0xf
    "SPOSE_MORPH_BALL_MID_AIR", # 0x10
    "SPOSE_GETTING_HURT", # 0x11
    "SPOSE_GETTING_HURT_IN_MORPH_BALL", # 0x12
    "SPOSE_GETTING_KNOCKED_BACK", # 0x13
    "SPOSE_GETTING_KNOCKED_BACK_IN_MORPH_BALL", # 0x14
    "SPOSE_STARTING_WALL_JUMP", # 0x15
    "SPOSE_WALL_JUMPING", # 0x16
    "SPOSE_USING_AN_ELEVATOR", # 0x17
    "SPOSE_HANGING_ON_LEDGE", # 0x18
    "SPOSE_PULLING_YOURSELF_UP_FROM_HANGING", # 0x19
    "SPOSE_PULLING_YOURSELF_FORWARD_FROM_HANGING", # 0x1a
    "SPOSE_PULLING_YOURSELF_INTO_MORPH_BALL_TUNNEL", # 0x1b
    "SPOSE_PULLING_YOURSELF_DOWN_TO_START_HANGING", # 0x1c
    "SPOSE_SPACE_JUMPING", # 0x1d
    "SPOSE_SCREW_ATTACKING", # 0x1e
    "SPOSE_SKIDDING", # 0x1f
    "SPOSE_ON_SAVE_PAD", # 0x20
    "SPOSE_ON_RECHARGE_OR_SECURITY_PAD", # 0x21
    "SPOSE_TURNING_AROUND_TO_RECHARGE_OR_UNLOCK_DOORS", # 0x22
    "SPOSE_DELAY_BEFORE_SHINESPARKING", # 0x23
    "SPOSE_SHINESPARKING", # 0x24
    "SPOSE_DELAY_AFTER_SHINESPARKING", # 0x25
    "SPOSE_HANGING_FROM_VERTICAL_LADDER", # 0x26
    "SPOSE_STARTING_TO_HOLD_YOUR_ARM_CANNON_OUT_ON_A_VERTICAL_LADDER", # 0x27
    "SPOSE_HOLDING_YOUR_ARM_CANNON_OUT_ON_A_VERTICAL_LADDER", # 0x28
    "SPOSE_SHOOTING_ON_VERTICAL_LADDER", # 0x29
    "SPOSE_STARTING_TO_PUT_AWAY_YOUR_ARM_CANNON_OUT_ON_A_VERTICAL_LADDER", # 0x2a
    "SPOSE_HANGING_ON_HORIZONTAL_LADDER", # 0x2b
    "SPOSE_MOVING_ON_HORIZONTAL_LADDER", # 0x2c
    "SPOSE_TURNING_AROUND_ON_HORIZONTAL_LADDER", # 0x2d
    "SPOSE_DELAY_AFTER_SHOOTING_ON_HORIZONTAL_LADDER", # 0x2e
    "SPOSE_SHOOTING_ON_HORIZONTAL_LADDER", # 0x2f
    "SPOSE_FROZEN", # 0x30
    "SPOSE_FROZEN_AND_FALLING", # 0x31
    "SPOSE_FROZEN_IN_MORPH_BALL", # 0x32
    "SPOSE_FROZEN_IN_MORPH_BALL_AND_FALLING", # 0x33
    "SPOSE_UNLOCKING_SECURITY", # 0x34
    "SPOSE_SAVING", # 0x35
    "SPOSE_ON_NAVIGATION_PAD", # 0x36
    "SPOSE_DOWNLOADING_ABILITY", # 0x37
    "SPOSE_BEING_RECHARGED", # 0x38
    "SPOSE_FACING_FOREGROUND", # 0x39
    "SPOSE_FACING_BACKGROUND", # 0x3a
    "SPOSE_UNLOCKING_HABITATIONS_DECK", # 0x3b
    "SPOSE_GRABBED_BY_ZAZABI", # 0x3c
    "SPOSE_LOADING_SAVE", # 0x3d
    "SPOSE_DYING", # 0x3e
    "SPOSE_HIT_BY_OMEGA_METROID", # 0x3f
    "SPOSE_GRABBED_BY_YAKUZA" # 0x40
]

group_sizes = [
    5,
    5,
    5,
    4,
    6,
    6,
    5,
    5,
    5,
    5,
    2,
    1,
    2,
    3,
    3,
    6,
    6,
    6,
    6,
    1,
    1,
    2
]

ac_group_sizes = [
    5,
    5,
    5,
    4,
    6,
    6,
    5,
    5,
    5,
    5,
    2,
    3,
    3,
    6,
    6,
    6,
    6
]

acds = [
    "ACD_NONE",
    "ACD_FORWARD",
    "ACD_DIAGONAL_UP",
    "ACD_DIAGONAL_DOWN",
    "ACD_UP",
    "ACD_DOWN"
]

if __name__ == "__main__":
    rom = open("../mf_us_baserom.gba", "rb")
    all_labels = extract_labels()

    rom.seek(0x28d2bc)
    print("const struct SamusAnimationData* const sSamusAnimPointers[SPOSE_END][2] = {")

    for pose_name in pose_names:
        print(f"    [{pose_name}] = {{")
        print(f"        {all_labels[int.from_bytes(rom.read(4), "little")]},")
        print(f"        {all_labels[int.from_bytes(rom.read(4), "little")]}")
        print("    },")

    print("};\n")

    for group_size in group_sizes:
        if group_size == 1:
            print(f"const struct FrameData* const sAnimPointers_{rom.tell():x}[2] = {{")
            print(f"    (struct FrameData*)0x{int.from_bytes(rom.read(4), "little"):x},")
            print(f"    (struct FrameData*)0x{int.from_bytes(rom.read(4), "little"):x}")
            print("};\n")
        else:
            print(f"const struct SamusAnimationData* const sSamusAnimPointers_{rom.tell():x}[{group_size}][2] = {{")
            for i in range(group_size):
                print(f"    [{str(bool(i)).upper() if group_size == 2 else acds[i]}] = {{")
                print(f"        {all_labels[int.from_bytes(rom.read(4), "little")]},")
                print(f"        {all_labels[int.from_bytes(rom.read(4), "little")]}")
                print("    },")

            print("};\n")

    rom.seek(0x28d8dc)
    print("const struct ArmCannonAnimationData* const sArmCannonAnimPointers_All[SPOSE_END][2] = {")

    for pose_name in pose_names:
        print(f"    [{pose_name}] = {{")
        print(f"        {all_labels[int.from_bytes(rom.read(4), "little")]},")
        print(f"        {all_labels[int.from_bytes(rom.read(4), "little")]}")
        print("    },")

    print("};\n")

    for group_size in ac_group_sizes:
        print(f"const struct ArmCannonAnimationData* const sArmCannonAnimPointers_{rom.tell():x}[{group_size}][2] = {{")
        for i in range(group_size):
            print(f"    [{str(bool(i)).upper() if group_size == 2 else acds[i]}] = {{")
            print(f"        {all_labels[int.from_bytes(rom.read(4), "little")]},")
            print(f"        {all_labels[int.from_bytes(rom.read(4), "little")]}")
            print("    },")

        print("};\n")
