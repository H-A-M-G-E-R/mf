#ifndef SAMUS_CONSTANTS_H
#define SAMUS_CONSTANTS_H

enum SamusPose {
    SPOSE_STANDING,
    SPOSE_TURNING_AROUND,
    SPOSE_SHOOTING,
    SPOSE_RUNNING,
    SPOSE_MID_AIR,
    SPOSE_TURNING_AROUND_MID_AIR,
    SPOSE_LANDING,
    SPOSE_CROUCHING,
    SPOSE_TURNING_AROUND_AND_CROUCHING,
    SPOSE_SHOOTING_AND_CROUCHING,
    SPOSE_STARTING_SPIN_JUMP,
    SPOSE_SPINNING,
    SPOSE_MORPHING,
    SPOSE_MORPH_BALL,
    SPOSE_ROLLING,
    SPOSE_UNMORPHING,
    SPOSE_MORPH_BALL_MID_AIR,
    SPOSE_GETTING_HURT,
    SPOSE_GETTING_HURT_IN_MORPH_BALL,
    SPOSE_GETTING_KNOCKED_BACK,
    SPOSE_GETTING_KNOCKED_BACK_IN_MORPH_BALL,
    SPOSE_STARTING_WALL_JUMP,
    SPOSE_WALL_JUMPING,
    SPOSE_USING_AN_ELEVATOR,
    SPOSE_HANGING_ON_LEDGE,
    SPOSE_PULLING_YOURSELF_UP_FROM_HANGING,
    SPOSE_PULLING_YOURSELF_FORWARD_FROM_HANGING,
    SPOSE_PULLING_YOURSELF_INTO_MORPH_BALL_TUNNEL,
    SPOSE_PULLING_YOURSELF_DOWN_TO_START_HANGING,
    SPOSE_SPACE_JUMPING,
    SPOSE_SCREW_ATTACKING,
    SPOSE_SKIDDING,
    SPOSE_ON_SAVE_PAD,
    SPOSE_ON_RECHARGE_OR_SECURITY_PAD,
    SPOSE_TURNING_AROUND_TO_RECHARGE_OR_UNLOCK_DOORS,
    SPOSE_DELAY_BEFORE_SHINESPARKING,
    SPOSE_SHINESPARKING,
    SPOSE_DELAY_AFTER_SHINESPARKING,
    SPOSE_HANGING_FROM_VERTICAL_LADDER,
    SPOSE_STARTING_TO_HOLD_YOUR_ARM_CANNON_OUT_ON_A_VERTICAL_LADDER,
    SPOSE_HOLDING_YOUR_ARM_CANNON_OUT_ON_A_VERTICAL_LADDER,
    SPOSE_SHOOTING_ON_VERTICAL_LADDER,
    SPOSE_STARTING_TO_PUT_AWAY_YOUR_ARM_CANNON_OUT_ON_A_VERTICAL_LADDER,
    SPOSE_HANGING_ON_HORIZONTAL_LADDER,
    SPOSE_MOVING_ON_HORIZONTAL_LADDER,
    SPOSE_TURNING_AROUND_ON_HORIZONTAL_LADDER,
    SPOSE_DELAY_AFTER_SHOOTING_ON_HORIZONTAL_LADDER,
    SPOSE_SHOOTING_ON_HORIZONTAL_LADDER,
    SPOSE_FROZEN,
    SPOSE_FROZEN_AND_FALLING,
    SPOSE_FROZEN_IN_MORPH_BALL,
    SPOSE_FROZEN_IN_MORPH_BALL_AND_FALLING,
    SPOSE_UNLOCKING_SECURITY,
    SPOSE_SAVING,
    SPOSE_ON_NAVIGATION_PAD,
    SPOSE_DOWNLOADING_ABILITY,
    SPOSE_BEING_RECHARGED,
    SPOSE_FACING_FOREGROUND,
    SPOSE_FACING_BACKGROUND,
    SPOSE_UNLOCKING_HABITATIONS_DECK,
    SPOSE_GRABBED_BY_ZAZABI,
    SPOSE_LOADING_SAVE,
    SPOSE_DYING,
    SPOSE_HIT_BY_OMEGA_METROID,
    SPOSE_GRABBED_BY_YAKUZA,
    
    SPOSE_END,

    // Sub frame poses
    SPOSE_F7 = 0xF7,
    SPOSE_F8,
    SPOSE_KNOCKBACK_REQUEST,
    SPOSE_HURT_REQUEST,
    SPOSE_FROZEN_REQUEST,
    SPOSE_FC = 0xFC,
    SPOSE_LANDING_REQUEST,
    SPOSE_MID_AIR_REQUEST,
    SPOSE_NONE
};

enum SamusStandingStatus {
    STANDING_GROUND,
    STANDING_ENEMY,
    STANDING_MID_AIR,
    STANDING_NOT_IN_CONTROL
};

enum SecurityLevel {
    SECURITY_LEVEL_0,
    SECURITY_LEVEL_1,
    SECURITY_LEVEL_2,
    SECURITY_LEVEL_3,
    SECURITY_LEVEL_4,

    SECURITY_LEVEL_END,

    SECURITY_LEVEL_NO_HATCHES = UCHAR_MAX
};

enum ArmCannonDirection {
    ACD_NONE,
    ACD_FORWARD,
    ACD_DIAGONAL_UP,
    ACD_DIAGONAL_DOWN,
    ACD_UP,
    ACD_DOWN,

    ACD_END
};

enum DiagonalAim {
    DIAG_AIM_NONE,
    DIAG_AIM_UP,
    DIAG_AIM_DOWN,

    DIAG_AIM_END
};

// --- Flags ---

#define SMF_HIGH_JUMP (1 << 0)
#define SMF_SPEED_BOOSTER (1 << 1)
#define SMF_SPACE_JUMP (1 << 2)
#define SMF_SCREW_ATTACK (1 << 3)
#define SMF_VARIA_SUIT (1 << 4)
#define SMF_GRAVITY_SUIT (1 << 5)
#define SMF_MORPH_BALL (1 << 6)
#define SMF_SA_X_SUIT (1 << 7)

#define BF_CHARGE_BEAM (1 << 0)
#define BF_WIDE_BEAM (1 << 1)
#define BF_PLASMA_BEAM (1 << 2)
#define BF_WAVE_BEAM (1 << 3)
#define BF_ICE_BEAM (1 << 4)

#define MBF_MISSILES (1 << 0)
#define MBF_SUPER_MISSILES (1 << 1)
#define MBF_ICE_MISSILES (1 << 2)
#define MBF_DIFFUSION_MISSILES (1 << 3)
#define MBF_BOMBS (1 << 4)
#define MBF_POWER_BOMBS (1 << 5)
#define MBF_ANY_MISSILE (MBF_MISSILES | MBF_SUPER_MISSILES | MBF_ICE_MISSILES | MBF_DIFFUSION_MISSILES)

// --- Forced movement ---

#define FORCED_MOVEMENT_UPWARDS_SHINESPARK 0
#define FORCED_MOVEMENT_SIDEWARDS_SHINESPARK 1
#define FORCED_MOVEMENT_DIAGONAL_SHINESPARK 2

#define FORCED_MOVEMENT_MID_AIR_FALL 0
#define FORCED_MOVEMENT_MID_AIR_JUMP 1
#define FORCED_MOVEMENT_MID_AIR_CARRY 2

#define FORCED_MOVEMENT_BOMB_JUMP 0
#define FORCED_MOVEMENT_BOMB_JUMP_RIGHT 10
#define FORCED_MOVEMENT_BOMB_JUMP_UP 11
#define FORCED_MOVEMENT_BOMB_JUMP_LEFT 12
#define FORCED_MOVEMENT_BOMB_JUMP_ABOVE 0x80

// --- Velocity ---

#define SKIDDING_VELOCITY_LOSS (SUB_PIXEL_TO_VELOCITY(ONE_SUB_PIXEL + ONE_SUB_PIXEL / 4.f))

#define HORIZONTAL_LADDER_X_VELOCITY (SUB_PIXEL_TO_VELOCITY(PIXEL_SIZE))

#define KNOCKBACK_Y_VELOCITY (SUB_PIXEL_TO_VELOCITY(PIXEL_SIZE * 2))
#define KNOCKBACK_X_VELOCITY (SUB_PIXEL_TO_VELOCITY(PIXEL_SIZE + PIXEL_SIZE / 2))

// --- Misc ---

// 1000 frames, 16.6 seconds
#define SAMUS_ITEM_PMT (60 * 16 + 60 / 3 * 2)

#endif /* SAMUS_CONSTANTS_H */
