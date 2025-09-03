#include "data/samus_data.h"
#include "samus.h"

#include "data/samus/samus_animation_pointers.h"

#include "data/samus/samus_graphics.h"

const struct SamusAnimationData* const sSamusAnimPointers[SPOSE_END][2] = {
    [SPOSE_STANDING] = {
        sSamusAnim_Right_Standing,
        sSamusAnim_Left_Standing
    },
    [SPOSE_TURNING_AROUND] = {
        sSamusAnim_Right_TurningAround,
        sSamusAnim_Left_TurningAround
    },
    [SPOSE_SHOOTING] = {
        sSamusAnim_Right_Shooting,
        sSamusAnim_Left_Shooting
    },
    [SPOSE_RUNNING] = {
        sSamusAnim_Right_Running,
        sSamusAnim_Left_Running
    },
    [SPOSE_MID_AIR] = {
        sSamusAnim_Right_MidAir,
        sSamusAnim_Left_MidAir
    },
    [SPOSE_TURNING_AROUND_MID_AIR] = {
        sSamusAnim_Right_TurningAroundMidAir,
        sSamusAnim_Left_TurningAroundMidAir
    },
    [SPOSE_LANDING] = {
        sSamusAnim_Right_Landing,
        sSamusAnim_Left_Landing
    },
    [SPOSE_CROUCHING] = {
        sSamusAnim_Right_UnusedCrouching,
        sSamusAnim_Left_UnusedCrouching
    },
    [SPOSE_TURNING_AROUND_AND_CROUCHING] = {
        sSamusAnim_Right_TurningAroundAndCrouching,
        sSamusAnim_Left_TurningAroundAndCrouching
    },
    [SPOSE_SHOOTING_AND_CROUCHING] = {
        sSamusAnim_Right_Crouching,
        sSamusAnim_Left_Crouching
    },
    [SPOSE_STARTING_SPIN_JUMP] = {
        sSamusAnim_Right_StartingSpinJump,
        sSamusAnim_Left_StartingSpinJump
    },
    [SPOSE_SPINNING] = {
        sSamusAnim_Right_Spinning,
        sSamusAnim_Left_Spinning
    },
    [SPOSE_MORPHING] = {
        sSamusAnim_Right_Morphing,
        sSamusAnim_Left_Morphing
    },
    [SPOSE_MORPH_BALL] = {
        sSamusAnim_Right_MorphBall,
        sSamusAnim_Left_MorphBall
    },
    [SPOSE_ROLLING] = {
        sSamusAnim_Right_MorphBall,
        sSamusAnim_Left_MorphBall
    },
    [SPOSE_UNMORPHING] = {
        sSamusAnim_Right_Unmorphing,
        sSamusAnim_Left_Unmorphing
    },
    [SPOSE_MORPH_BALL_MID_AIR] = {
        sSamusAnim_Right_MorphBall,
        sSamusAnim_Left_MorphBall
    },
    [SPOSE_GETTING_HURT] = {
        sSamusAnim_Right_MidAir,
        sSamusAnim_Left_MidAir
    },
    [SPOSE_GETTING_HURT_IN_MORPH_BALL] = {
        sSamusAnim_Right_MorphBall,
        sSamusAnim_Left_MorphBall
    },
    [SPOSE_GETTING_KNOCKED_BACK] = {
        sSamusAnim_Right_MidAir,
        sSamusAnim_Left_MidAir
    },
    [SPOSE_GETTING_KNOCKED_BACK_IN_MORPH_BALL] = {
        sSamusAnim_Right_MorphBall,
        sSamusAnim_Left_MorphBall
    },
    [SPOSE_STARTING_WALL_JUMP] = {
        sSamusAnim_Right_StartingWallJump,
        sSamusAnim_Left_StartingWallJump
    },
    [SPOSE_WALL_JUMPING] = {
        sSamusAnim_Right_Spinning,
        sSamusAnim_Left_Spinning
    },
    [SPOSE_USING_AN_ELEVATOR] = {
        sSamusAnim_Right_UsingAnElevator,
        sSamusAnim_Left_UsingAnElevator
    },
    [SPOSE_HANGING_ON_LEDGE] = {
        sSamusAnim_Right_HangingOnLedge,
        sSamusAnim_Left_HangingOnLedge
    },
    [SPOSE_PULLING_YOURSELF_UP_FROM_HANGING] = {
        sSamusAnim_Right_PullingYourselfUpFromHanging,
        sSamusAnim_Left_PullingYourselfUpFromHanging
    },
    [SPOSE_PULLING_YOURSELF_FORWARD_FROM_HANGING] = {
        sSamusAnim_Right_PullingYourselfForwardFromHanging,
        sSamusAnim_Left_PullingYourselfForwardFromHanging
    },
    [SPOSE_PULLING_YOURSELF_INTO_MORPH_BALL_TUNNEL] = {
        sSamusAnim_Right_PullingYourselfIntoMorphBallTunnel,
        sSamusAnim_Left_PullingYourselfIntoMorphBallTunnel
    },
    [SPOSE_PULLING_YOURSELF_DOWN_TO_START_HANGING] = {
        sSamusAnim_Right_PullingYourselfDownToStartHanging,
        sSamusAnim_Left_PullingYourselfDownToStartHanging
    },
    [SPOSE_SPACE_JUMPING] = {
        sSamusAnim_Right_SpaceJumping,
        sSamusAnim_Left_SpaceJumping
    },
    [SPOSE_SCREW_ATTACKING] = {
        sSamusAnim_Right_ScrewAttacking,
        sSamusAnim_Left_ScrewAttacking
    },
    [SPOSE_SKIDDING] = {
        sSamusAnim_Right_Skidding,
        sSamusAnim_Left_Skidding
    },
    [SPOSE_ON_SAVE_PAD] = {
        sSamusAnim_Right_OnSavePad,
        sSamusAnim_Left_OnSavePad
    },
    [SPOSE_ON_RECHARGE_OR_SECURITY_PAD] = {
        sSamusAnim_Right_Standing,
        sSamusAnim_Left_Standing
    },
    [SPOSE_TURNING_AROUND_TO_RECHARGE_OR_UNLOCK_DOORS] = {
        sSamusAnim_Right_TurningAround,
        sSamusAnim_Left_TurningAround
    },
    [SPOSE_DELAY_BEFORE_SHINESPARKING] = {
        sSamusAnim_Right_DelayBeforeShinesparking,
        sSamusAnim_Left_DelayBeforeShinesparking
    },
    [SPOSE_SHINESPARKING] = {
        sSamusAnim_Right_Shinesparking,
        sSamusAnim_Left_Shinesparking
    },
    [SPOSE_DELAY_AFTER_SHINESPARKING] = {
        sSamusAnim_Right_DelayAfterShinesparking,
        sSamusAnim_Left_DelayAfterShinesparking
    },
    [SPOSE_HANGING_FROM_VERTICAL_LADDER] = {
        sSamusAnim_Right_HangingFromVerticalLadder,
        sSamusAnim_Left_HangingFromVerticalLadder
    },
    [SPOSE_STARTING_TO_HOLD_YOUR_ARM_CANNON_OUT_ON_A_VERTICAL_LADDER] = {
        sSamusAnim_Right_StartingToHoldYourArmCannonOutOnAVerticalLadder,
        sSamusAnim_Left_StartingToHoldYourArmCannonOutOnAVerticalLadder
    },
    [SPOSE_HOLDING_YOUR_ARM_CANNON_OUT_ON_A_VERTICAL_LADDER] = {
        sSamusAnim_Right_HoldingYourArmCannonOutOnAVerticalLadder,
        sSamusAnim_Left_HoldingYourArmCannonOutOnAVerticalLadder
    },
    [SPOSE_SHOOTING_ON_VERTICAL_LADDER] = {
        sSamusAnim_Right_ShootingOnVerticalLadder,
        sSamusAnim_Left_ShootingOnVerticalLadder
    },
    [SPOSE_STARTING_TO_PUT_AWAY_YOUR_ARM_CANNON_OUT_ON_A_VERTICAL_LADDER] = {
        sSamusAnim_Right_StartingToPutAwayYourArmCannonOutOnAVerticalLadder,
        sSamusAnim_Left_StartingToPutAwayYourArmCannonOutOnAVerticalLadder
    },
    [SPOSE_HANGING_ON_HORIZONTAL_LADDER] = {
        sSamusAnim_Right_HangingOnHorizontalLadder,
        sSamusAnim_Left_HangingOnHorizontalLadder
    },
    [SPOSE_MOVING_ON_HORIZONTAL_LADDER] = {
        sSamusAnim_Right_MovingOnHorizontalLadder,
        sSamusAnim_Left_MovingOnHorizontalLadder
    },
    [SPOSE_TURNING_AROUND_ON_HORIZONTAL_LADDER] = {
        sSamusAnim_Right_TurningAroundOnHorizontalLadder,
        sSamusAnim_Left_TurningAroundOnHorizontalLadder
    },
    [SPOSE_DELAY_AFTER_SHOOTING_ON_HORIZONTAL_LADDER] = {
        sSamusAnim_Right_HangingOnHorizontalLadder,
        sSamusAnim_Left_HangingOnHorizontalLadder
    },
    [SPOSE_SHOOTING_ON_HORIZONTAL_LADDER] = {
        sSamusAnim_Right_ShootingOnHorizontalLadder,
        sSamusAnim_Left_ShootingOnHorizontalLadder
    },
    [SPOSE_FROZEN] = {
        sSamusAnim_Right_Standing,
        sSamusAnim_Left_Standing
    },
    [SPOSE_FROZEN_AND_FALLING] = {
        sSamusAnim_Right_MidAir,
        sSamusAnim_Left_MidAir
    },
    [SPOSE_FROZEN_IN_MORPH_BALL] = {
        sSamusAnim_Right_MorphBall,
        sSamusAnim_Left_MorphBall
    },
    [SPOSE_FROZEN_IN_MORPH_BALL_AND_FALLING] = {
        sSamusAnim_Right_MorphBall,
        sSamusAnim_Left_MorphBall
    },
    [SPOSE_UNLOCKING_SECURITY] = {
        sSamusAnim_Right_UnlockingSecurity,
        sSamusAnim_Left_UnlockingSecurity
    },
    [SPOSE_SAVING] = {
        sSamusAnim_Saving,
        sSamusAnim_Saving
    },
    [SPOSE_ON_NAVIGATION_PAD] = {
        sSamusAnim_Right_OnNavigationPad,
        sSamusAnim_Left_OnNavigationPad
    },
    [SPOSE_DOWNLOADING_ABILITY] = {
        sSamusAnim_Right_DownloadingAbility,
        sSamusAnim_Left_DownloadingAbility
    },
    [SPOSE_BEING_RECHARGED] = {
        sSamusAnim_Right_BeingRecharged,
        sSamusAnim_Left_BeingRecharged
    },
    [SPOSE_FACING_FOREGROUND] = {
        sSamusAnim_Right_FacingForeground,
        sSamusAnim_Left_FacingForeground
    },
    [SPOSE_FACING_BACKGROUND] = {
        sSamusAnim_Right_FacingBackground,
        sSamusAnim_Left_FacingBackground
    },
    [SPOSE_UNLOCKING_HABITATIONS_DECK] = {
        sSamusAnim_UnlockingHabitationsDeck,
        sSamusAnim_UnlockingHabitationsDeck
    },
    [SPOSE_GRABBED_BY_ZAZABI] = {
        sSamusAnim_Right_MorphBall,
        sSamusAnim_Left_MorphBall
    },
    [SPOSE_LOADING_SAVE] = {
        sSamusAnim_LoadingSave,
        sSamusAnim_LoadingSave
    },
    [SPOSE_DYING] = {
        sSamusAnim_Right_Dying,
        sSamusAnim_Left_Dying
    },
    [SPOSE_HIT_BY_OMEGA_METROID] = {
        sSamusAnim_Right_HitByOmegaMetroid,
        sSamusAnim_Left_HitByOmegaMetroid
    },
    [SPOSE_GRABBED_BY_YAKUZA] = {
        sSamusAnim_Right_Down_MidAir,
        sSamusAnim_Left_Down_MidAir
    }
};

const struct SamusAnimationData* const sSamusAnimPointers_Standing[5][2] = {
    [ACD_NONE] = {
        sSamusAnim_Right_Standing,
        sSamusAnim_Left_Standing
    },
    [ACD_FORWARD] = {
        sSamusAnim_Right_Standing,
        sSamusAnim_Left_Standing
    },
    [ACD_DIAGONAL_UP] = {
        sSamusAnim_Right_DiagonalUp_Standing,
        sSamusAnim_Left_DiagonalUp_Standing
    },
    [ACD_DIAGONAL_DOWN] = {
        sSamusAnim_Right_DiagonalDown_Standing,
        sSamusAnim_Left_DiagonalDown_Standing
    },
    [ACD_UP] = {
        sSamusAnim_Right_Up_Standing,
        sSamusAnim_Left_Up_Standing
    },
};

const struct SamusAnimationData* const sSamusAnimPointers_TurningAround[5][2] = {
    [ACD_NONE] = {
        sSamusAnim_Right_TurningAround,
        sSamusAnim_Left_TurningAround
    },
    [ACD_FORWARD] = {
        sSamusAnim_Right_TurningAround,
        sSamusAnim_Left_TurningAround
    },
    [ACD_DIAGONAL_UP] = {
        sSamusAnim_Right_DiagonalUp_TurningAround,
        sSamusAnim_Left_DiagonalUp_TurningAround
    },
    [ACD_DIAGONAL_DOWN] = {
        sSamusAnim_Right_DiagonalDown_TurningAround,
        sSamusAnim_Left_DiagonalDown_TurningAround
    },
    [ACD_UP] = {
        sSamusAnim_Right_Up_TurningAround,
        sSamusAnim_Left_Up_TurningAround
    },
};

const struct SamusAnimationData* const sSamusAnimPointers_Shooting[5][2] = {
    [ACD_NONE] = {
        sSamusAnim_Right_Shooting,
        sSamusAnim_Left_Shooting
    },
    [ACD_FORWARD] = {
        sSamusAnim_Right_Shooting,
        sSamusAnim_Left_Shooting
    },
    [ACD_DIAGONAL_UP] = {
        sSamusAnim_Right_DiagonalUp_Shooting,
        sSamusAnim_Left_DiagonalUp_Shooting
    },
    [ACD_DIAGONAL_DOWN] = {
        sSamusAnim_Right_DiagonalDown_Shooting,
        sSamusAnim_Left_DiagonalDown_Shooting
    },
    [ACD_UP] = {
        sSamusAnim_Right_Up_Shooting,
        sSamusAnim_Left_Up_Shooting
    },
};

const struct SamusAnimationData* const sSamusAnimPointers_Running[4][2] = {
    [ACD_NONE] = {
        sSamusAnim_Right_Running,
        sSamusAnim_Left_Running
    },
    [ACD_FORWARD] = {
        sSamusAnim_Right_Forward_Running,
        sSamusAnim_Left_Forward_Running
    },
    [ACD_DIAGONAL_UP] = {
        sSamusAnim_Right_DiagonalUp_Running,
        sSamusAnim_Left_DiagonalUp_Running
    },
    [ACD_DIAGONAL_DOWN] = {
        sSamusAnim_Right_DiagonalDown_Running,
        sSamusAnim_Left_DiagonalDown_Running
    },
};

const struct SamusAnimationData* const sSamusAnimPointers_MidAir[6][2] = {
    [ACD_NONE] = {
        sSamusAnim_Right_MidAir,
        sSamusAnim_Left_MidAir
    },
    [ACD_FORWARD] = {
        sSamusAnim_Right_Forward_MidAir,
        sSamusAnim_Left_Forward_MidAir
    },
    [ACD_DIAGONAL_UP] = {
        sSamusAnim_Right_DiagonalUp_MidAir,
        sSamusAnim_Left_DiagonalUp_MidAir
    },
    [ACD_DIAGONAL_DOWN] = {
        sSamusAnim_Right_DiagonalDown_MidAir,
        sSamusAnim_Left_DiagonalDown_MidAir
    },
    [ACD_UP] = {
        sSamusAnim_Right_Up_MidAir,
        sSamusAnim_Left_Up_MidAir
    },
    [ACD_DOWN] = {
        sSamusAnim_Right_Down_MidAir,
        sSamusAnim_Left_Down_MidAir
    },
};

const struct SamusAnimationData* const sSamusAnimPointers_TurningAroundMidAir[6][2] = {
    [ACD_NONE] = {
        sSamusAnim_Right_TurningAroundMidAir,
        sSamusAnim_Left_TurningAroundMidAir
    },
    [ACD_FORWARD] = {
        sSamusAnim_Right_TurningAroundMidAir,
        sSamusAnim_Left_TurningAroundMidAir
    },
    [ACD_DIAGONAL_UP] = {
        sSamusAnim_Right_DiagonalUp_TurningAroundMidAir,
        sSamusAnim_Left_DiagonalUp_TurningAroundMidAir
    },
    [ACD_DIAGONAL_DOWN] = {
        sSamusAnim_Right_DiagonalDown_TurningAroundMidAir,
        sSamusAnim_Left_DiagonalDown_TurningAroundMidAir
    },
    [ACD_UP] = {
        sSamusAnim_Right_Up_TurningAroundMidAir,
        sSamusAnim_Left_Up_TurningAroundMidAir
    },
    [ACD_DOWN] = {
        sSamusAnim_Right_DiagonalDown_TurningAroundMidAir,
        sSamusAnim_Left_DiagonalDown_TurningAroundMidAir
    },
};

const struct SamusAnimationData* const sSamusAnimPointers_Landing[5][2] = {
    [ACD_NONE] = {
        sSamusAnim_Right_Landing,
        sSamusAnim_Left_Landing
    },
    [ACD_FORWARD] = {
        sSamusAnim_Right_Forward_Landing,
        sSamusAnim_Left_Forward_Landing
    },
    [ACD_DIAGONAL_UP] = {
        sSamusAnim_Right_DiagonalUp_Landing,
        sSamusAnim_Left_DiagonalUp_Landing
    },
    [ACD_DIAGONAL_DOWN] = {
        sSamusAnim_Right_DiagonalDown_Landing,
        sSamusAnim_Left_DiagonalDown_Landing
    },
    [ACD_UP] = {
        sSamusAnim_Right_Up_Landing,
        sSamusAnim_Left_Up_Landing
    },
};

const struct SamusAnimationData* const sSamusAnimPointers_UnusedCrouching[5][2] = {
    [ACD_NONE] = {
        sSamusAnim_Right_UnusedCrouching,
        sSamusAnim_Left_UnusedCrouching
    },
    [ACD_FORWARD] = {
        sSamusAnim_Right_UnusedCrouching,
        sSamusAnim_Left_UnusedCrouching
    },
    [ACD_DIAGONAL_UP] = {
        sSamusAnim_Right_DiagonalUp_UnusedCrouching,
        sSamusAnim_Left_DiagonalUp_UnusedCrouching
    },
    [ACD_DIAGONAL_DOWN] = {
        sSamusAnim_Right_DiagonalDown_UnusedCrouching,
        sSamusAnim_Left_DiagonalDown_UnusedCrouching
    },
    [ACD_UP] = {
        sSamusAnim_Right_Up_UnusedCrouching,
        sSamusAnim_Left_Up_UnusedCrouching
    },
};

const struct SamusAnimationData* const sSamusAnimPointers_TurningAroundAndCrouching[5][2] = {
    [ACD_NONE] = {
        sSamusAnim_Right_TurningAroundAndCrouching,
        sSamusAnim_Left_TurningAroundAndCrouching
    },
    [ACD_FORWARD] = {
        sSamusAnim_Right_TurningAroundAndCrouching,
        sSamusAnim_Left_TurningAroundAndCrouching
    },
    [ACD_DIAGONAL_UP] = {
        sSamusAnim_Right_DiagonalUp_TurningAroundAndCrouching,
        sSamusAnim_Left_DiagonalUp_TurningAroundAndCrouching
    },
    [ACD_DIAGONAL_DOWN] = {
        sSamusAnim_Right_DiagonalDown_TurningAroundAndCrouching,
        sSamusAnim_Left_DiagonalDown_TurningAroundAndCrouching
    },
    [ACD_UP] = {
        sSamusAnim_Right_Up_TurningAroundAndCrouching,
        sSamusAnim_Left_Up_TurningAroundAndCrouching
    },
};

const struct SamusAnimationData* const sSamusAnimPointers_Crouching[5][2] = {
    [ACD_NONE] = {
        sSamusAnim_Right_Crouching,
        sSamusAnim_Left_Crouching
    },
    [ACD_FORWARD] = {
        sSamusAnim_Right_Crouching,
        sSamusAnim_Left_Crouching
    },
    [ACD_DIAGONAL_UP] = {
        sSamusAnim_Right_DiagonalUp_Crouching,
        sSamusAnim_Left_DiagonalUp_Crouching
    },
    [ACD_DIAGONAL_DOWN] = {
        sSamusAnim_Right_DiagonalDown_Crouching,
        sSamusAnim_Left_DiagonalDown_Crouching
    },
    [ACD_UP] = {
        sSamusAnim_Right_Up_Crouching,
        sSamusAnim_Left_Up_Crouching
    },
};

const struct SamusAnimationData* const sSamusAnimPointers_HangingOnLedge[2][2] = {
    [FALSE] = {
        sSamusAnim_Right_HangingOnLedge,
        sSamusAnim_Left_HangingOnLedge
    },
    [TRUE] = {
        sSamusAnim_Right_ReadyToJump_HangingOnLedge,
        sSamusAnim_Left_ReadyToJump_HangingOnLedge
    },
};

// FIXME oam
const struct FrameData* const sSamusScrewAttackElectricityAnimPointers[2] = {
    (struct FrameData*)0x828cb14,
    (struct FrameData*)0x828caec
};

const struct SamusAnimationData* const sSamusAnimPointers_Skidding[2][2] = {
    [FALSE] = {
        sSamusAnim_Right_Skidding,
        sSamusAnim_Left_Skidding
    },
    [TRUE] = {
        sSamusAnim_Right_Armed_Skidding,
        sSamusAnim_Left_Armed_Skidding
    },
};

const struct SamusAnimationData* const sSamusAnimPointers_Shinesparking[3][2] = {
    [ACD_NONE] = {
        sSamusAnim_Right_Shinesparking,
        sSamusAnim_Left_Shinesparking
    },
    [ACD_FORWARD] = {
        sSamusAnim_Right_Sidewards_Shinesparking,
        sSamusAnim_Left_Sidewards_Shinesparking
    },
    [ACD_DIAGONAL_UP] = {
        sSamusAnim_Right_Sidewards_Shinesparking,
        sSamusAnim_Left_Sidewards_Shinesparking
    },
};

const struct SamusAnimationData* const sSamusAnimPointers_DelayAfterShinesparking[3][2] = {
    [ACD_NONE] = {
        sSamusAnim_Right_DelayAfterShinesparking,
        sSamusAnim_Left_DelayAfterShinesparking
    },
    [ACD_FORWARD] = {
        sSamusAnim_Right_Sidewards_DelayAfterShinesparking,
        sSamusAnim_Left_Sidewards_DelayAfterShinesparking
    },
    [ACD_DIAGONAL_UP] = {
        sSamusAnim_Right_Sidewards_DelayAfterShinesparking,
        sSamusAnim_Left_Sidewards_DelayAfterShinesparking
    },
};

const struct SamusAnimationData* const sSamusAnimPointers_HoldingYourArmCannonOutOnAVerticalLadder[6][2] = {
    [ACD_NONE] = {
        sSamusAnim_Right_HoldingYourArmCannonOutOnAVerticalLadder,
        sSamusAnim_Left_HoldingYourArmCannonOutOnAVerticalLadder
    },
    [ACD_FORWARD] = {
        sSamusAnim_Right_HoldingYourArmCannonOutOnAVerticalLadder,
        sSamusAnim_Left_HoldingYourArmCannonOutOnAVerticalLadder
    },
    [ACD_DIAGONAL_UP] = {
        sSamusAnim_Right_DiagonalUp_HoldingYourArmCannonOutOnAVerticalLadder,
        sSamusAnim_Left_DiagonalUp_HoldingYourArmCannonOutOnAVerticalLadder
    },
    [ACD_DIAGONAL_DOWN] = {
        sSamusAnim_Right_DiagonalDown_HoldingYourArmCannonOutOnAVerticalLadder,
        sSamusAnim_Left_DiagonalDown_HoldingYourArmCannonOutOnAVerticalLadder
    },
    [ACD_UP] = {
        sSamusAnim_Right_Up_HoldingYourArmCannonOutOnAVerticalLadder,
        sSamusAnim_Left_Up_HoldingYourArmCannonOutOnAVerticalLadder
    },
    [ACD_DOWN] = {
        sSamusAnim_Right_Down_HoldingYourArmCannonOutOnAVerticalLadder,
        sSamusAnim_Left_Down_HoldingYourArmCannonOutOnAVerticalLadder
    },
};

const struct SamusAnimationData* const sSamusAnimPointers_ShootingOnVerticalLadder[6][2] = {
    [ACD_NONE] = {
        sSamusAnim_Right_ShootingOnVerticalLadder,
        sSamusAnim_Left_ShootingOnVerticalLadder
    },
    [ACD_FORWARD] = {
        sSamusAnim_Right_ShootingOnVerticalLadder,
        sSamusAnim_Left_ShootingOnVerticalLadder
    },
    [ACD_DIAGONAL_UP] = {
        sSamusAnim_Right_DiagonalUp_ShootingOnVerticalLadder,
        sSamusAnim_Left_DiagonalUp_ShootingOnVerticalLadder
    },
    [ACD_DIAGONAL_DOWN] = {
        sSamusAnim_Right_DiagonalDown_ShootingOnVerticalLadder,
        sSamusAnim_Left_DiagonalDown_ShootingOnVerticalLadder
    },
    [ACD_UP] = {
        sSamusAnim_Right_Up_ShootingOnVerticalLadder,
        sSamusAnim_Left_Up_ShootingOnVerticalLadder
    },
    [ACD_DOWN] = {
        sSamusAnim_Right_Down_ShootingOnVerticalLadder,
        sSamusAnim_Left_Down_ShootingOnVerticalLadder
    },
};

const struct SamusAnimationData* const sSamusAnimPointers_HangingOnHorizontalLadder[6][2] = {
    [ACD_NONE] = {
        sSamusAnim_Right_HangingOnHorizontalLadder,
        sSamusAnim_Left_HangingOnHorizontalLadder
    },
    [ACD_FORWARD] = {
        sSamusAnim_Right_HangingOnHorizontalLadder,
        sSamusAnim_Left_HangingOnHorizontalLadder
    },
    [ACD_DIAGONAL_UP] = {
        sSamusAnim_Right_HangingOnHorizontalLadder,
        sSamusAnim_Left_HangingOnHorizontalLadder
    },
    [ACD_DIAGONAL_DOWN] = {
        sSamusAnim_Right_DiagonalDown_HangingOnHorizontalLadder,
        sSamusAnim_Left_DiagonalDown_HangingOnHorizontalLadder
    },
    [ACD_UP] = {
        sSamusAnim_Right_HangingOnHorizontalLadder,
        sSamusAnim_Left_HangingOnHorizontalLadder
    },
    [ACD_DOWN] = {
        sSamusAnim_Right_Down_DelayAfterShootingOnHorizontalLadder,
        sSamusAnim_Left_Down_DelayAfterShootingOnHorizontalLadder
    },
};

const struct SamusAnimationData* const sSamusAnimPointers_ShootingOnHorizontalLadder[6][2] = {
    [ACD_NONE] = {
        sSamusAnim_Right_ShootingOnHorizontalLadder,
        sSamusAnim_Left_ShootingOnHorizontalLadder
    },
    [ACD_FORWARD] = {
        sSamusAnim_Right_ShootingOnHorizontalLadder,
        sSamusAnim_Left_ShootingOnHorizontalLadder
    },
    [ACD_DIAGONAL_UP] = {
        sSamusAnim_Right_ShootingOnHorizontalLadder,
        sSamusAnim_Left_ShootingOnHorizontalLadder
    },
    [ACD_DIAGONAL_DOWN] = {
        sSamusAnim_Right_DiagonalDown_ShootingOnHorizontalLadder,
        sSamusAnim_Left_DiagonalDown_ShootingOnHorizontalLadder
    },
    [ACD_UP] = {
        sSamusAnim_Right_ShootingOnHorizontalLadder,
        sSamusAnim_Left_ShootingOnHorizontalLadder
    },
    [ACD_DOWN] = {
        sSamusAnim_Right_Down_ShootingOnHorizontalLadder,
        sSamusAnim_Left_Down_ShootingOnHorizontalLadder
    },
};

const struct FrameData* const sSamusUnlockingSecurityEffectAnimPointers[2] = {
    (struct FrameData*)0x82e481c,
    (struct FrameData*)0x82e4754
};

const struct FrameData* const sSamusDyingEffectAnimPointers[2] = {
    (struct FrameData*)0x828cdb8,
    (struct FrameData*)0x828cd80
};

const struct SamusAnimationData* const sSamusAnimPointers_HitByOmegaMetroid[2][2] = {
    [FALSE] = {
        sSamusAnim_Right_HitByOmegaMetroid,
        sSamusAnim_Left_HitByOmegaMetroid
    },
    [TRUE] = {
        sSamusAnim_Right_LookingUp_HitByOmegaMetroid,
        sSamusAnim_Left_LookingUp_HitByOmegaMetroid
    },
};

static const u8 sBlob_28d794_28fd04[] = INCBIN_U8("data/Blob_28d794_28fd04.bin");

const SamusSetPose_T sSamusSetPoseFunctionPointer[1] = {
    SamusSetPose
};

static const u8 sBlob_28fd08_28ff60[] = INCBIN_U8("data/Blob_28fd08_28ff60.bin");
