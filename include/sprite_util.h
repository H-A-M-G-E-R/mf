#ifndef SPRITE_UTIL_H
#define SPRITE_UTIL_H

#include "structs/sprite.h"

void SpriteUtilInitLocationText(void);
void SpriteUtilTakeDamageFromSprite(u8 kbFlag, u8 spriteSlot, u16 dmgMultiplier);
void SpriteUtilTakeDamageFromSA_XIceBeamWithPowerSuit(u8 spriteSlot);
void SpriteUtilTakeConstantDamageFromZazabi(void);
void SpriteUtilTakeDamageFromOmegaMetroidSwiping(u8 spriteSlot);
void SpriteUtilTakeDamageFromYakuzaSlamming(void);
void SpriteUtilTakeConstantDamageFromYakuza(void);
void SpriteUtilTakeKnockback(u8 spriteSlot);
u32 SpriteUtilCheckObjectsTouching(u16 o1Top, u16 o1Bottom, u16 o1Left, u16 o1Right, u16 o2Top, u16 o2Bottom, u16 o2Left, u16 o2Right);
void SpriteUtilSamusAndSpriteCollision(void);
u32 SpriteUtilCheckVerticalCollisionAtPosition(u16 yPosition, u16 xPosition);
u32 SpriteUtilCheckVerticalCollisionAtPositionSlopes(u16 yPosition, u16 xPosition);
void SpriteUtilAlignYPosOnSlope(void);
void SpriteUtilAlignYPosOnSlopeAtHitboxBottom(void);
void SpriteUtilCheckCollisionAtPosition(u16 yPosition, u16 xPosition);
void SpriteUtilCurrentSpriteFalling(void);
void SpriteUtilChooseRandomXFlip(void);
void SpriteUtilChooseRandomXDirection(void);
void SpriteUtilChooseRandomXDirectionRoomSlot(void);
void SpriteUtilMakeSpriteFaceSamusXFlip(void);
void SpriteUtilMakeSpriteFaceSamusDirection(void);
void SpriteUtilMakeSpriteFaceAwayFromSamusXFlip(void);
void SpriteUtilMakeSpriteFaceAwayFromSamusDirection(void);
void unk_11604(s16 movement);
u8 SpriteUtilMakeSpriteRotateTowardsTarget(s16 oamRotation, s16 targetY, s16 targetX, s16 spriteY, s16 spriteX);
u32 SpriteUtilCheckEndCurrentSpriteAnim(void);
u32 SpriteUtilCheckNearEndCurrentSpriteAnim(void);
u32 SpriteUtilCheckEndSpriteAnim(u8 spriteSlot);
u32 SpriteUtilCheckNearEndSpriteAnim(u8 spriteSlot);
u32 SpriteUtilCheckEndSubSprite1Anim(void);
u32 SpriteUtilCheckNearEndSubSprite1Anim(void);
u8 SpriteUtilCheckSamusNearSpriteLeftRight(u16 yRange, u16 xRange);
u8 SpriteUtilCheckSamusNearSpriteAboveBelow(u16 yRange, u16 xRange);
u8 SpriteUtilCheckSamusNearSpriteFrontBehind(u16 yRange, u16 xRangeFront, u16 xRangeBehind);
u8 SpriteUtilCheckSamusNearSpriteFrontBehindY(u16 xRange, u16 yRangeFront, u16 yRangeBehind);
u8 SpriteUtilCheckSamusNearSpriteAboveBelowSeparateRanges(u16 xRange, u16 yRangeBelow, u16 yRangeAbove);
void SpriteUtilSamusStandingOnSprite(void);
void SpriteUtilUpdateFreezeTimer(void);
void SpriteUtilUpdateSecondarySpritesFreezeTimer(u8 spriteId, u8 ramSlot);
void SpriteUtilUpdatePrimarySpriteFreezeTimer(void);
void SpriteUtilUnfreezeSecondarySprites(u8 spriteId, u8 ramSlot);
void unk_12008(u16 yPosition, u16 xPosition);
void unk_120ac(u16 yPosition, u16 xPosition);
void unk_1214c(u16 yPosition, u16 xPosition);
void unk_12160(u16 yPosition, u16 xPosition);
void unk_121e0(u16 yPosition, u16 xPosition);
void unk_122d0(const struct FrameData* pOam);
void SpriteUtilSetSecondarySpriteOamPointer(const struct FrameData* pOam);
void SpriteUtilSetEnergyAndAmmoToMax_Unused(void);
u8 SpriteUtilRefillEnergy(void);
u8 SpriteUtilRefillMissiles(void);
u8 SpriteUtilRefillPowerBombs(void);
void SpriteUtilRefillSamus(u16 energy, u16 missiles, u16 powerBombs);
void SpriteUtilHealSamusOfOneTank(void);
u8 SpriteUtilCheckEnergyFullAndMissilesNotFull(void);
u8 SpriteUtilCheckMissilesFullAndEnergyNotFull(void);
u32 SpriteUtilSamusCheckPassThroughSprite(u8 spriteSlot);
u32 SpriteUtilCheckCrouchingOrMorphed(void);
u32 SpriteUtilCheckMorphed(void);
u32 SpriteUtilCheckStopSpritesPose(void);
u32 SpriteUtilCheckDamagingPose(void);
u32 SpriteUtilCheckSudoScrew(u8 spriteSlot);
u32 SpriteUtilCheckHangingOnLedge(void);
u32 SpriteUtilCheckOnCeilingLadder(void);
u32 SpriteUtilCheckPullingSelfUp(void);
void SpriteUtilTrySetAbsorbXFlag(void);
u8 SpriteUtilSpriteUtilCountSecondarySprites(u8 spriteId);
u8 SpriteUtilCountPrimarySprites(u8 spriteId);
u8 SpriteUtilFindPrimarySprite(u8 spriteId);
u8 SpriteUtilFindSecondarySprite(u8 spriteId);
u8 SpriteUtilSpriteUtilCountSecondarySpritesWithRamSlot(u8 spriteId, u8 ramSlot);
void SpriteUtilMoveEyeCoreXBeam(u8 movement);
void SpriteUtilMoveEyeCoreXBeamPart(void);
void unk_12b54(void);
void SpriteUtilMoveBeamCoreX(u16 dstY, u16 dstX, u8 yVelocity, u8 xVelocity, u8 speedDivisor, u16 soundId);
void SpriteUtilMoveBeamCoreX_Unused(u16 dstY, u16 dstX, u8 yVelocity, u8 xVelocity, u8 speedDivisor, u16 soundId);
void SpriteUtilMoveTowardsTarget(u16 dstY, u16 dstX, u8 ySpeedCap, u8 xSpeedCap, u8 speedDivisor);
void unk_1343c(u16 dstY, u16 dstX, u8 yVelocity, u8 xVelocity, u8 speedDivisor, u16 soundId);
void unk_136ac(u16 dstY, u16 dstX, u8 ySpeedCap, u8 xSpeedCap, u8 speedDivisor);
void SpriteUtilMoveRidleyFireball(u16 dstY, u16 dstX, u8 yVelocity, u8 xVelocity, u8 speedDivisor);
void SpriteUtilUpdateStunTimer(void);

#endif /* SPRITE_UTIL_H */
