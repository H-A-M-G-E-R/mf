#ifndef SAMUS_GRAPHICS_DATA_H
#define SAMUS_GRAPHICS_DATA_H

#include "types.h"
#include "structs/samus.h"

#include "macros.h"

#define SAMUS_GFX_PART_SIZE 32
#define SAMUS_GFX_SIZE(size1, size2) (2 + size1 * SAMUS_GFX_PART_SIZE + size2 * SAMUS_GFX_PART_SIZE)

extern const struct SamusAnimationData sSamusAnim_Left_Running[11];
extern const struct SamusAnimationData sSamusAnim_Left_DiagonalUp_Running[11];
extern const struct SamusAnimationData sSamusAnim_Left_Forward_Running[11];
extern const struct SamusAnimationData sSamusAnim_Left_DiagonalDown_Running[11];
extern const struct SamusAnimationData sSamusAnim_Left_Up_Standing[4];
extern const struct SamusAnimationData sSamusAnim_Left_Up_Shooting[3];
extern const struct SamusAnimationData sSamusAnim_Left_DiagonalUp_Standing[4];
extern const struct SamusAnimationData sSamusAnim_Left_DiagonalUp_Shooting[3];
extern const struct SamusAnimationData sSamusAnim_Left_Standing[4];
extern const struct SamusAnimationData sSamusAnim_Left_Shooting[3];
extern const struct SamusAnimationData sSamusAnim_Left_DiagonalDown_Standing[4];
extern const struct SamusAnimationData sSamusAnim_Left_DiagonalDown_Shooting[3];
extern const struct SamusAnimationData sSamusAnim_Left_Up_Crouching[3];
extern const struct SamusAnimationData sSamusAnim_Left_DiagonalUp_Crouching[3];
extern const struct SamusAnimationData sSamusAnim_Left_Crouching[3];
extern const struct SamusAnimationData sSamusAnim_Left_DiagonalDown_Crouching[3];
extern const struct SamusAnimationData sSamusAnim_Right_Running[11];
extern const struct SamusAnimationData sSamusAnim_Right_DiagonalUp_Running[11];
extern const struct SamusAnimationData sSamusAnim_Right_Forward_Running[11];
extern const struct SamusAnimationData sSamusAnim_Right_DiagonalDown_Running[11];
extern const struct SamusAnimationData sSamusAnim_Right_Up_Standing[4];
extern const struct SamusAnimationData sSamusAnim_Right_Up_Shooting[3];
extern const struct SamusAnimationData sSamusAnim_Right_DiagonalUp_Standing[4];
extern const struct SamusAnimationData sSamusAnim_Right_DiagonalUp_Shooting[3];
extern const struct SamusAnimationData sSamusAnim_Right_Standing[4];
extern const struct SamusAnimationData sSamusAnim_Right_Shooting[3];
extern const struct SamusAnimationData sSamusAnim_Right_DiagonalDown_Standing[4];
extern const struct SamusAnimationData sSamusAnim_Right_DiagonalDown_Shooting[3];
extern const struct SamusAnimationData sSamusAnim_Right_Up_Crouching[3];
extern const struct SamusAnimationData sSamusAnim_Right_DiagonalUp_Crouching[3];
extern const struct SamusAnimationData sSamusAnim_Right_Crouching[3];
extern const struct SamusAnimationData sSamusAnim_Right_DiagonalDown_Crouching[3];
extern const struct SamusAnimationData sSamusAnim_2bdb68[11];
extern const struct SamusAnimationData sSamusAnim_2bdc18[11];
extern const struct SamusAnimationData sSamusAnim_2bdcc8[11];
extern const struct SamusAnimationData sSamusAnim_2bdd78[11];
extern const struct SamusAnimationData sSamusAnim_Left_Skidding[2];
extern const struct SamusAnimationData sSamusAnim_Left_Armed_Skidding[2];
extern const struct SamusAnimationData sSamusAnim_Right_Skidding[2];
extern const struct SamusAnimationData sSamusAnim_Right_Armed_Skidding[2];
extern const struct SamusAnimationData sSamusAnim_Left_HitByOmegaMetroid[5];
extern const struct SamusAnimationData sSamusAnim_Left_LookingUp_HitByOmegaMetroid[5];
extern const struct SamusAnimationData sSamusAnim_Right_HitByOmegaMetroid[5];
extern const struct SamusAnimationData sSamusAnim_Right_LookingUp_HitByOmegaMetroid[5];
extern const struct SamusAnimationData sSamusAnim_Left_MidAir[7];
extern const struct SamusAnimationData sSamusAnim_Left_Landing[3];
extern const struct SamusAnimationData sSamusAnim_Left_Up_MidAir[7];
extern const struct SamusAnimationData sSamusAnim_Left_Up_Landing[3];
extern const struct SamusAnimationData sSamusAnim_Left_DiagonalUp_MidAir[7];
extern const struct SamusAnimationData sSamusAnim_Left_DiagonalUp_Landing[3];
extern const struct SamusAnimationData sSamusAnim_Left_Forward_MidAir[7];
extern const struct SamusAnimationData sSamusAnim_Left_Forward_Landing[3];
extern const struct SamusAnimationData sSamusAnim_Left_DiagonalDown_MidAir[7];
extern const struct SamusAnimationData sSamusAnim_Left_DiagonalDown_Landing[3];
extern const struct SamusAnimationData sSamusAnim_2c42a8[2];
extern const struct SamusAnimationData sSamusAnim_2c42c8[2];
extern const struct SamusAnimationData sSamusAnim_2c42e8[2];
extern const struct SamusAnimationData sSamusAnim_2c4308[2];
extern const struct SamusAnimationData sSamusAnim_2c4328[2];
extern const struct SamusAnimationData sSamusAnim_Right_MidAir[7];
extern const struct SamusAnimationData sSamusAnim_Right_Landing[3];
extern const struct SamusAnimationData sSamusAnim_Right_Up_MidAir[7];
extern const struct SamusAnimationData sSamusAnim_Right_Up_Landing[3];
extern const struct SamusAnimationData sSamusAnim_Right_DiagonalUp_MidAir[7];
extern const struct SamusAnimationData sSamusAnim_Right_DiagonalUp_Landing[3];
extern const struct SamusAnimationData sSamusAnim_Right_Forward_MidAir[7];
extern const struct SamusAnimationData sSamusAnim_Right_Forward_Landing[3];
extern const struct SamusAnimationData sSamusAnim_Right_DiagonalDown_MidAir[7];
extern const struct SamusAnimationData sSamusAnim_Right_DiagonalDown_Landing[3];
extern const struct SamusAnimationData sSamusAnim_2c4668[2];
extern const struct SamusAnimationData sSamusAnim_2c4688[2];
extern const struct SamusAnimationData sSamusAnim_2c46a8[2];
extern const struct SamusAnimationData sSamusAnim_2c46c8[2];
extern const struct SamusAnimationData sSamusAnim_2c46e8[2];
extern const struct SamusAnimationData sSamusAnim_Left_GrabbedByYakuza[7];
extern const struct SamusAnimationData sSamusAnim_Right_GrabbedByYakuza[7];
extern const struct SamusAnimationData sSamusAnim_Left_Spinning[9];
extern const struct SamusAnimationData sSamusAnim_Right_Spinning[9];
extern const struct SamusAnimationData sSamusAnim_Left_StartingSpinJump[2];
extern const struct SamusAnimationData sSamusAnim_Right_StartingSpinJump[2];
extern const struct SamusAnimationData sSamusAnim_Left_DelayBeforeShinesparking[5];
extern const struct SamusAnimationData sSamusAnim_Left_Shinesparking[3];
extern const struct SamusAnimationData sSamusAnim_Right_DelayBeforeShinesparking[5];
extern const struct SamusAnimationData sSamusAnim_Right_Shinesparking[3];
extern const struct SamusAnimationData sSamusAnim_Left_Sidewards_Shinesparking[3];
extern const struct SamusAnimationData sSamusAnim_Right_Sidewards_Shinesparking[3];
extern const struct SamusAnimationData sSamusAnim_Left_DelayAfterShinesparking[10];
extern const struct SamusAnimationData sSamusAnim_Right_DelayAfterShinesparking[10];
extern const struct SamusAnimationData sSamusAnim_Left_Sidewards_DelayAfterShinesparking[10];
extern const struct SamusAnimationData sSamusAnim_Right_Sidewards_DelayAfterShinesparking[10];
extern const struct SamusAnimationData sSamusAnim_Left_Up_TurningAround[3];
extern const struct SamusAnimationData sSamusAnim_Right_Up_TurningAround[3];
extern const struct SamusAnimationData sSamusAnim_Left_DiagonalUp_TurningAround[3];
extern const struct SamusAnimationData sSamusAnim_Right_DiagonalUp_TurningAround[3];
extern const struct SamusAnimationData sSamusAnim_Left_TurningAround[3];
extern const struct SamusAnimationData sSamusAnim_Right_TurningAround[3];
extern const struct SamusAnimationData sSamusAnim_Left_DiagonalDown_TurningAround[3];
extern const struct SamusAnimationData sSamusAnim_Right_DiagonalDown_TurningAround[3];
extern const struct SamusAnimationData sSamusAnim_Left_Up_TurningAroundAndCrouching[3];
extern const struct SamusAnimationData sSamusAnim_Right_Up_TurningAroundAndCrouching[3];
extern const struct SamusAnimationData sSamusAnim_Left_DiagonalUp_TurningAroundAndCrouching[3];
extern const struct SamusAnimationData sSamusAnim_Right_DiagonalUp_TurningAroundAndCrouching[3];
extern const struct SamusAnimationData sSamusAnim_Left_TurningAroundAndCrouching[3];
extern const struct SamusAnimationData sSamusAnim_Right_TurningAroundAndCrouching[3];
extern const struct SamusAnimationData sSamusAnim_Left_DiagonalDown_TurningAroundAndCrouching[3];
extern const struct SamusAnimationData sSamusAnim_Right_DiagonalDown_TurningAroundAndCrouching[3];
extern const struct SamusAnimationData sSamusAnim_Left_Up_TurningAroundMidAir[3];
extern const struct SamusAnimationData sSamusAnim_Right_Up_TurningAroundMidAir[3];
extern const struct SamusAnimationData sSamusAnim_Left_DiagonalUp_TurningAroundMidAir[3];
extern const struct SamusAnimationData sSamusAnim_Right_DiagonalUp_TurningAroundMidAir[3];
extern const struct SamusAnimationData sSamusAnim_Left_TurningAroundMidAir[3];
extern const struct SamusAnimationData sSamusAnim_Right_TurningAroundMidAir[3];
extern const struct SamusAnimationData sSamusAnim_Left_DiagonalDown_TurningAroundMidAir[3];
extern const struct SamusAnimationData sSamusAnim_Right_DiagonalDown_TurningAroundMidAir[3];
extern const struct SamusAnimationData sSamusAnim_Left_Up_UnusedCrouching[2];
extern const struct SamusAnimationData sSamusAnim_Right_Up_UnusedCrouching[2];
extern const struct SamusAnimationData sSamusAnim_Left_DiagonalUp_UnusedCrouching[2];
extern const struct SamusAnimationData sSamusAnim_Right_DiagonalUp_UnusedCrouching[2];
extern const struct SamusAnimationData sSamusAnim_Left_UnusedCrouching[2];
extern const struct SamusAnimationData sSamusAnim_Right_UnusedCrouching[2];
extern const struct SamusAnimationData sSamusAnim_Left_DiagonalDown_UnusedCrouching[2];
extern const struct SamusAnimationData sSamusAnim_Right_DiagonalDown_UnusedCrouching[2];
extern const struct SamusAnimationData sSamusAnim_Left_Morphing[4];
extern const struct SamusAnimationData sSamusAnim_Left_MorphBall[9];
extern const struct SamusAnimationData sSamusAnim_Left_Unmorphing[4];
extern const struct SamusAnimationData sSamusAnim_Right_Morphing[4];
extern const struct SamusAnimationData sSamusAnim_Right_MorphBall[9];
extern const struct SamusAnimationData sSamusAnim_Right_Unmorphing[4];
extern const struct SamusAnimationData sSamusAnim_Left_OnSavePad[5];
extern const struct SamusAnimationData sSamusAnim_Right_OnSavePad[5];
extern const struct SamusAnimationData sSamusAnim_Left_FacingForeground[5];
extern const struct SamusAnimationData sSamusAnim_Right_FacingForeground[5];
extern const struct SamusAnimationData sSamusAnim_Left_OnNavigationPad[17];
extern const struct SamusAnimationData sSamusAnim_Left_FacingBackground[5];
extern const struct SamusAnimationData sSamusAnim_Right_OnNavigationPad[17];
extern const struct SamusAnimationData sSamusAnim_Right_FacingBackground[5];
extern const struct SamusAnimationData sSamusAnim_Left_UsingAnElevator[6];
extern const struct SamusAnimationData sSamusAnim_Right_UsingAnElevator[6];
extern const struct SamusAnimationData sSamusAnim_Left_DownloadingAbility[17];
extern const struct SamusAnimationData sSamusAnim_Right_DownloadingAbility[17];
extern const struct SamusAnimationData sSamusAnim_Left_BeingRecharged[9];
extern const struct SamusAnimationData sSamusAnim_Right_BeingRecharged[9];
extern const struct SamusAnimationData sSamusAnim_Left_UnlockingSecurity[2];
extern const struct SamusAnimationData sSamusAnim_Right_UnlockingSecurity[2];
extern const struct SamusAnimationData sSamusAnim_UnlockingHabitationsDeck[7];
extern const struct SamusAnimationData sSamusAnim_Left_HangingFromVerticalLadder[8];
extern const struct SamusAnimationData sSamusAnim_Right_HangingFromVerticalLadder[8];
extern const struct SamusAnimationData sSamusAnim_2d617c[7];
extern const struct SamusAnimationData sSamusAnim_2d61ec[7];
extern const struct SamusAnimationData sSamusAnim_Left_StartingToHoldYourArmCannonOutOnAVerticalLadder[3];
extern const struct SamusAnimationData sSamusAnim_Left_StartingToPutAwayYourArmCannonOutOnAVerticalLadder[3];
extern const struct SamusAnimationData sSamusAnim_Left_DiagonalUp_HoldingYourArmCannonOutOnAVerticalLadder[2];
extern const struct SamusAnimationData sSamusAnim_Left_DiagonalUp_ShootingOnVerticalLadder[3];
extern const struct SamusAnimationData sSamusAnim_Left_HoldingYourArmCannonOutOnAVerticalLadder[2];
extern const struct SamusAnimationData sSamusAnim_Left_ShootingOnVerticalLadder[3];
extern const struct SamusAnimationData sSamusAnim_Left_DiagonalDown_HoldingYourArmCannonOutOnAVerticalLadder[2];
extern const struct SamusAnimationData sSamusAnim_Left_DiagonalDown_ShootingOnVerticalLadder[3];
extern const struct SamusAnimationData sSamusAnim_Right_StartingToHoldYourArmCannonOutOnAVerticalLadder[3];
extern const struct SamusAnimationData sSamusAnim_Right_StartingToPutAwayYourArmCannonOutOnAVerticalLadder[3];
extern const struct SamusAnimationData sSamusAnim_Right_DiagonalUp_HoldingYourArmCannonOutOnAVerticalLadder[2];
extern const struct SamusAnimationData sSamusAnim_Right_DiagonalUp_ShootingOnVerticalLadder[3];
extern const struct SamusAnimationData sSamusAnim_Right_HoldingYourArmCannonOutOnAVerticalLadder[2];
extern const struct SamusAnimationData sSamusAnim_Right_ShootingOnVerticalLadder[3];
extern const struct SamusAnimationData sSamusAnim_Right_DiagonalDown_HoldingYourArmCannonOutOnAVerticalLadder[2];
extern const struct SamusAnimationData sSamusAnim_Right_DiagonalDown_ShootingOnVerticalLadder[3];
extern const struct SamusAnimationData sSamusAnim_Left_StartingWallJump[3];
extern const struct SamusAnimationData sSamusAnim_Right_StartingWallJump[3];
extern const struct SamusAnimationData sSamusAnim_Left_HangingOnLedge[8];
extern const struct SamusAnimationData sSamusAnim_Left_PullingYourselfUpFromHanging[4];
extern const struct SamusAnimationData sSamusAnim_Left_PullingYourselfForwardFromHanging[5];
extern const struct SamusAnimationData sSamusAnim_Left_PullingYourselfIntoMorphBallTunnel[2];
extern const struct SamusAnimationData sSamusAnim_Right_HangingOnLedge[8];
extern const struct SamusAnimationData sSamusAnim_Right_PullingYourselfUpFromHanging[4];
extern const struct SamusAnimationData sSamusAnim_Right_PullingYourselfForwardFromHanging[5];
extern const struct SamusAnimationData sSamusAnim_Right_PullingYourselfIntoMorphBallTunnel[2];
extern const struct SamusAnimationData sSamusAnim_2d67bc[5];
extern const struct SamusAnimationData sSamusAnim_Left_MovingOnHorizontalLadder[11];
extern const struct SamusAnimationData sSamusAnim_Left_TurningAroundOnHorizontalLadder[3];
extern const struct SamusAnimationData sSamusAnim_Right_TurningAroundOnHorizontalLadder[3];
extern const struct SamusAnimationData sSamusAnim_2d691c[5];
extern const struct SamusAnimationData sSamusAnim_Right_MovingOnHorizontalLadder[11];
extern const struct SamusAnimationData sSamusAnim_Left_HangingOnHorizontalLadder[2];
extern const struct SamusAnimationData sSamusAnim_Left_ShootingOnHorizontalLadder[3];
extern const struct SamusAnimationData sSamusAnim_Left_DiagonalDown_DelayAfterShootingOnHorizontalLadder[2];
extern const struct SamusAnimationData sSamusAnim_Left_DiagonalDown_ShootingOnHorizontalLadder[3];
extern const struct SamusAnimationData sSamusAnim_Left_Down_DelayAfterShootingOnHorizontalLadder[2];
extern const struct SamusAnimationData sSamusAnim_Left_Down_ShootingOnHorizontalLadder[3];
extern const struct SamusAnimationData sSamusAnim_Right_HangingOnHorizontalLadder[2];
extern const struct SamusAnimationData sSamusAnim_Right_ShootingOnHorizontalLadder[3];
extern const struct SamusAnimationData sSamusAnim_Right_DiagonalDown_DelayAfterShootingOnHorizontalLadder[2];
extern const struct SamusAnimationData sSamusAnim_Right_DiagonalDown_ShootingOnHorizontalLadder[3];
extern const struct SamusAnimationData sSamusAnim_Right_Down_DelayAfterShootingOnHorizontalLadder[2];
extern const struct SamusAnimationData sSamusAnim_Right_Down_ShootingOnHorizontalLadder[3];
extern const struct SamusAnimationData sSamusAnim_Left_PullingYourselfDownToStartHanging[3];
extern const struct SamusAnimationData sSamusAnim_Right_PullingYourselfDownToStartHanging[3];
extern const struct SamusAnimationData sSamusAnim_2d6c5c[8];
extern const struct SamusAnimationData sSamusAnim_2d6cdc[8];
extern const struct SamusAnimationData sSamusAnim_Right_Up_HoldingYourArmCannonOutOnAVerticalLadder[2];
extern const struct SamusAnimationData sSamusAnim_Right_Up_ShootingOnVerticalLadder[3];
extern const struct SamusAnimationData sSamusAnim_Right_Down_HoldingYourArmCannonOutOnAVerticalLadder[2];
extern const struct SamusAnimationData sSamusAnim_Right_Down_ShootingOnVerticalLadder[3];
extern const struct SamusAnimationData sSamusAnim_Left_Up_HoldingYourArmCannonOutOnAVerticalLadder[2];
extern const struct SamusAnimationData sSamusAnim_Left_Up_ShootingOnVerticalLadder[3];
extern const struct SamusAnimationData sSamusAnim_Left_Down_HoldingYourArmCannonOutOnAVerticalLadder[2];
extern const struct SamusAnimationData sSamusAnim_Left_Down_ShootingOnVerticalLadder[3];
extern const struct SamusAnimationData sSamusAnim_Left_ReadyToJump_HangingOnLedge[8];
extern const struct SamusAnimationData sSamusAnim_Right_ReadyToJump_HangingOnLedge[8];
extern const struct SamusAnimationData sSamusAnim_Left_SpaceJumping[9];
extern const struct SamusAnimationData sSamusAnim_Right_SpaceJumping[9];
extern const struct SamusAnimationData sSamusAnim_Left_ScrewAttacking[17];
extern const struct SamusAnimationData sSamusAnim_Right_ScrewAttacking[17];
extern const struct SamusAnimationData sSamusAnim_Left_Dying[11];
extern const struct SamusAnimationData sSamusAnim_Right_Dying[11];
extern const struct SamusAnimationData sSamusAnim_LoadingSave[29];
extern const struct SamusAnimationData sSamusAnim_Saving[73];

#endif /* SAMUS_GRAPHICS_DATA_H */
