#ifndef ZAZABI_DATA_H
#define ZAZABI_DATA_H

#include "types.h"
#include "oam.h"

#include "structs/sprite.h"

enum ZazabiOam {
    ZazabiPartOam_LowerShellIdle,
    ZazabiPartOam_LowerShellEatingSamus,
    ZazabiPartOam_LowerShellSwallowingSamus,
    Zazabi_372820,
    ZazabiPartOam_MiddleShellIdle,
    ZazabiPartOam_MiddleShellEatingSamus,
    ZazabiPartOam_MiddleShellSwallowingSamus,
    Zazabi_372890,
    ZazabiPartOam_UpperShellIdle,
    ZazabiPartOam_UpperShellEatingSamus,
    ZazabiPartOam_UpperShellSwallowingSamus,
    Zazabi_372900,
    ZazabiPartOam_EyeShellIdle,
    ZazabiPartOam_EyeShellSwallowingSamusLow,
    Zazabi_372950,
    Zazabi_372970,
    ZazabiPartOam_MouthIdle,
    ZazabiPartOam_MouthLanding,
    ZazabiPartOam_MouthCrawlingLow,
    ZazabiPartOam_MouthCrawlingHigh,
    ZazabiPartOam_MouthCrawlingHalted,
    ZazabiPartOam_MouthOpening,
    Zazabi_3729e8,
    Zazabi_3729f8,
    Zazabi_372a08,
    ZazabiPartOam_MouthOpened,
    ZazabiPartOam_EyeIdle,
    ZazabiPartOam_EyeEatingSamus,
    ZazabiPartOam_PupilBlinking,
    ZazabiPartOam_HairMoving,
    ZazabiPartOam_HairStill,
    ZazabiPartOam_HairDownLow,
    ZazabiPartOam_HairDownMid,
    ZazabiPartOam_HairDownHigh,
    ZazabiPartOam_HairEatingSamus,
    ZazabiPartOam_EyeShellJumpingRight,
    ZazabiPartOam_EyeShellJumpingSmallRight,
    ZazabiPartOam_EyeShellJumpingLeft,
    ZazabiPartOam_EyeShellJumpingSmallLeft,
    ZazabiPartOam_UpperShellJumpingRight,
    ZazabiPartOam_UpperShellJumpingLeft,
    ZazabiPartOam_HairJumpingBigRight_1,
    ZazabiPartOam_HairJumpingBigRight_2,
    Zazabi_372bf0,
    ZazabiPartOam_HairLandingLeft_1,
    ZazabiPartOam_HairLandingLeft_2,
    ZazabiPartOam_HairJumpingLeft_1,
    ZazabiPartOam_HairJumpingLeft_2,
    Zazabi_372c40,
    ZazabiPartOam_HairLandingMouthOpened_1,
    ZazabiPartOam_HairLandingMouthOpened_2,
    ZazabiPartOam_PupilClosed,
    Zazabi_372c80,
    ZazabiPartOam_EyeJumpingRight,
    ZazabiPartOam_EyeLandingRight,
    ZazabiPartOam_EyeJumpingLeft,
    ZazabiPartOam_EyeLandingLeft,

    ZAZABI_OAM_END
};

extern const struct MultiSpriteData sZazabiMultiOam_Idle4[5];
extern const struct MultiSpriteData sZazabiMultiOam_Crawling4[9];
extern const struct MultiSpriteData sZazabiMultiOam_JumpWarning4[3];
extern const struct MultiSpriteData sZazabiMultiOam_JumpingSmall4[4];
extern const struct MultiSpriteData sZazabiMultiOam_JumpingBigRight4[4];
extern const struct MultiSpriteData sZazabiMultiOam_JumpingBigLeft4[4];
extern const struct MultiSpriteData sZazabiMultiOam_FallingSlow4[7];
extern const struct MultiSpriteData sZazabiMultiOam_FallingSlowMouthOpened4[7];
extern const struct MultiSpriteData sZazabiMultiOam_FallingLeft4[9];
extern const struct MultiSpriteData sZazabiMultiOam_FallingMouthOpenedLeft4[9];
extern const struct MultiSpriteData sZazabiMultiOam_FallingRight4[9];
extern const struct MultiSpriteData sZazabiMultiOam_FallingMouthOpenedRight4[9];
extern const struct MultiSpriteData sZazabiMultiOam_LandingMouthOpen4[7];
extern const struct MultiSpriteData sZazabiMultiOam_Landing4[3];
extern const struct MultiSpriteData sZazabiMultiOam_SpittingSamus4[7];
extern const struct MultiSpriteData sZazabiMultiOam_LandingAfterSpitting4[5];
extern const struct MultiSpriteData sZazabiMultiOam_EatingSamus1[5];
extern const struct MultiSpriteData sZazabiMultiOam_EatingSamus2[5];
extern const struct MultiSpriteData sZazabiMultiOam_EatingSamus3_4[5];
extern const struct MultiSpriteData sZazabiMultiOam_EatingSamus4_4[5];
extern const struct MultiSpriteData sZazabiMultiOam_EatingSamus5_4[5];

extern const struct MultiSpriteData sZazabiMultiOam_Idle3[5];
extern const struct MultiSpriteData sZazabiMultiOam_Crawling3[9];
extern const struct MultiSpriteData sZazabiMultiOam_JumpWarning3[3];
extern const struct MultiSpriteData sZazabiMultiOam_JumpingSmall3[4];
extern const struct MultiSpriteData sZazabiMultiOam_JumpingBigRight3[4];
extern const struct MultiSpriteData sZazabiMultiOam_JumpingBigLeft3[4];
extern const struct MultiSpriteData sZazabiMultiOam_FallingSlow3[7];
extern const struct MultiSpriteData sZazabiMultiOam_FallingSlowMouthOpened3[7];
extern const struct MultiSpriteData sZazabiMultiOam_FallingLeft3[9];
extern const struct MultiSpriteData sZazabiMultiOam_FallingMouthOpenedLeft3[9];
extern const struct MultiSpriteData sZazabiMultiOam_FallingRight3[9];
extern const struct MultiSpriteData sZazabiMultiOam_FallingMouthOpenedRight3[9];
extern const struct MultiSpriteData sZazabiMultiOam_LandingMouthOpen3[7];
extern const struct MultiSpriteData sZazabiMultiOam_Landing3[3];
extern const struct MultiSpriteData sZazabiMultiOam_SpittingSamus3[7];
extern const struct MultiSpriteData sZazabiMultiOam_LandingAfterSpitting3[5];
extern const struct MultiSpriteData sZazabiMultiOam_EatingSamus3_3[5];
extern const struct MultiSpriteData sZazabiMultiOam_EatingSamus4_3[5];
extern const struct MultiSpriteData sZazabiMultiOam_EatingSamus5_3[5];

extern const struct MultiSpriteData sZazabiMultiOam_Idle2[5];
extern const struct MultiSpriteData sZazabiMultiOam_Crawling2[9];
extern const struct MultiSpriteData sZazabiMultiOam_JumpWarning2[3];
extern const struct MultiSpriteData sZazabiMultiOam_JumpingSmall2[4];
extern const struct MultiSpriteData sZazabiMultiOam_JumpingBigRight2[4];
extern const struct MultiSpriteData sZazabiMultiOam_JumpingBigLeft2[4];
extern const struct MultiSpriteData sZazabiMultiOam_FallingSlow2[7];
extern const struct MultiSpriteData sZazabiMultiOam_FallingSlowMouthOpened2[7];
extern const struct MultiSpriteData sZazabiMultiOam_FallingLeft2[9];
extern const struct MultiSpriteData sZazabiMultiOam_FallingMouthOpenedLeft2[9];
extern const struct MultiSpriteData sZazabiMultiOam_FallingRight2[9];
extern const struct MultiSpriteData sZazabiMultiOam_FallingMouthOpenedRight2[9];
extern const struct MultiSpriteData sZazabiMultiOam_LandingMouthOpen2[7];
extern const struct MultiSpriteData sZazabiMultiOam_Landing2[3];
extern const struct MultiSpriteData sZazabiMultiOam_SpittingSamus2[7];
extern const struct MultiSpriteData sZazabiMultiOam_LandingAfterSpitting2[5];
extern const struct MultiSpriteData sZazabiMultiOam_EatingSamus5_2[5];

extern const struct MultiSpriteData sZazabiMultiOam_Idle1[5];
extern const struct MultiSpriteData sZazabiMultiOam_Crawling1[9];
extern const struct MultiSpriteData sZazabiMultiOam_JumpWarning1[3];
extern const struct MultiSpriteData sZazabiMultiOam_JumpingSmall1[4];
extern const struct MultiSpriteData sZazabiMultiOam_JumpingBigRight1[4];
extern const struct MultiSpriteData sZazabiMultiOam_JumpingBigLeft1[4];
extern const struct MultiSpriteData sZazabiMultiOam_FallingSlowMouthOpened1[7];
extern const struct MultiSpriteData sZazabiMultiOam_FallingMouthOpenedLeft1[9];
extern const struct MultiSpriteData sZazabiMultiOam_FallingMouthOpenedRight1[9];
extern const struct MultiSpriteData sZazabiMultiOam_LandingMouthOpen1[7];
extern const struct MultiSpriteData sZazabiMultiOam_Landing1[3];

extern const s16 sZazabiJumpingSpeedMouthOpened[40];
extern const s16 sZazabiFallingSpeedMouthOpened[8];
extern const s16 sZazabiJumpingSpeed4[40];
extern const s16 sZazabiJumpingSpeed2[40];
extern const s16 sZazabiJumpingSpeed3[40];
extern const s16 sZazabiFallingSpeed[8];

extern const u32 sZazabiGfx[4096];
extern const u16 sZazabiPal[8 * 16];

extern const struct FrameData sZazabiPartOam_LowerShellIdle[2];
extern const struct FrameData sZazabiPartOam_LowerShellEatingSamus[5];
extern const struct FrameData sZazabiPartOam_LowerShellSwallowingSamus[4];
extern const struct FrameData sZazabi_372820[3];
extern const struct FrameData sZazabiPartOam_MiddleShellIdle[2];
extern const struct FrameData sZazabiPartOam_MiddleShellEatingSamus[5];
extern const struct FrameData sZazabiPartOam_MiddleShellSwallowingSamus[4];
extern const struct FrameData sZazabi_372890[3];
extern const struct FrameData sZazabiPartOam_UpperShellIdle[2];
extern const struct FrameData sZazabiPartOam_UpperShellEatingSamus[5];
extern const struct FrameData sZazabiPartOam_UpperShellSwallowingSamus[4];
extern const struct FrameData sZazabi_372900[3];
extern const struct FrameData sZazabiPartOam_EyeShellIdle[2];
extern const struct FrameData sZazabiPartOam_EyeShellSwallowingSamusLow[5];
extern const struct FrameData sZazabi_372950[4];
extern const struct FrameData sZazabi_372970[3];
extern const struct FrameData sZazabiPartOam_MouthIdle[2];
extern const struct FrameData sZazabiPartOam_MouthLanding[2];
extern const struct FrameData sZazabiPartOam_MouthCrawlingLow[2];
extern const struct FrameData sZazabiPartOam_MouthCrawlingHigh[2];
extern const struct FrameData sZazabiPartOam_MouthCrawlingHalted[2];
extern const struct FrameData sZazabiPartOam_MouthOpening[2];
extern const struct FrameData sZazabi_3729e8[2];
extern const struct FrameData sZazabi_3729f8[2];
extern const struct FrameData sZazabi_372a08[2];
extern const struct FrameData sZazabiPartOam_MouthOpened[2];
extern const struct FrameData sZazabiPartOam_EyeIdle[2];
extern const struct FrameData sZazabiPartOam_EyeEatingSamus[5];
extern const struct FrameData sZazabiPartOam_PupilBlinking[8];
extern const struct FrameData sZazabiPartOam_HairMoving[13];
extern const struct FrameData sZazabiPartOam_HairStill[2];
extern const struct FrameData sZazabiPartOam_HairDownLow[2];
extern const struct FrameData sZazabiPartOam_HairDownMid[2];
extern const struct FrameData sZazabiPartOam_HairDownHigh[2];
extern const struct FrameData sZazabiPartOam_HairEatingSamus[5];
extern const struct FrameData sZazabiPartOam_EyeShellJumpingRight[2];
extern const struct FrameData sZazabiPartOam_EyeShellJumpingSmallRight[2];
extern const struct FrameData sZazabiPartOam_EyeShellJumpingLeft[2];
extern const struct FrameData sZazabiPartOam_EyeShellJumpingSmallLeft[2];
extern const struct FrameData sZazabiPartOam_UpperShellJumpingRight[2];
extern const struct FrameData sZazabiPartOam_UpperShellJumpingLeft[2];
extern const struct FrameData sZazabiPartOam_HairJumpingBigRight_1[2];
extern const struct FrameData sZazabiPartOam_HairJumpingBigRight_2[2];
extern const struct FrameData sZazabi_372bf0[2];
extern const struct FrameData sZazabiPartOam_HairLandingLeft_1[2];
extern const struct FrameData sZazabiPartOam_HairLandingLeft_2[2];
extern const struct FrameData sZazabiPartOam_HairJumpingLeft_1[2];
extern const struct FrameData sZazabiPartOam_HairJumpingLeft_2[2];
extern const struct FrameData sZazabi_372c40[2];
extern const struct FrameData sZazabiPartOam_HairLandingMouthOpened_1[2];
extern const struct FrameData sZazabiPartOam_HairLandingMouthOpened_2[2];
extern const struct FrameData sZazabiPartOam_PupilClosed[2];
extern const struct FrameData sZazabi_372c80[2];
extern const struct FrameData sZazabiPartOam_EyeJumpingRight[2];
extern const struct FrameData sZazabiPartOam_EyeLandingRight[2];
extern const struct FrameData sZazabiPartOam_EyeJumpingLeft[2];
extern const struct FrameData sZazabiPartOam_EyeLandingLeft[2];

#endif /* ZAZABI_DATA_H */
