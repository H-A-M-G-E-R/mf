#include "data/sprites/zazabi.h"
#include "macros.h"
#include "sprites_AI/zazabi.h"

static const s16 sZazabiMultiOam_Idle4_Frame2[ZAZABI_PART_END][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontIdle, 73, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackHidden, 92, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairMoving, -18, 0),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellIdle, 6, 0),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, 2, 0),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeIdle, 2, 0),
    [ZAZABI_PART_UPPER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_UpperShellIdle, 34, 0),
    [ZAZABI_PART_MIDDLE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MiddleShellIdle, 49, 0),
    [ZAZABI_PART_LOWER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_LowerShellIdle, 61, 0)
};

static const s16 sZazabiMultiOam_Idle4_Frame1[ZAZABI_PART_END][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontLanding, 72, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackHidden, 92, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairMoving, -19, 0),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellIdle, 5, 0),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, 1, 0),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeIdle, 1, 0),
    [ZAZABI_PART_UPPER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_UpperShellIdle, 33, 0),
    [ZAZABI_PART_MIDDLE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MiddleShellIdle, 47, 0),
    [ZAZABI_PART_LOWER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_LowerShellIdle, 59, 0)
};

static const s16 sZazabiMultiOam_Crawling4_Frame2[ZAZABI_PART_END][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontCrawlingLow, 71, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackHidden, 92, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairMoving, -20, 0),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellIdle, 4, 0),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, 0, 0),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeIdle, 0, 0),
    [ZAZABI_PART_UPPER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_UpperShellIdle, 31, 0),
    [ZAZABI_PART_MIDDLE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MiddleShellIdle, 45, 0),
    [ZAZABI_PART_LOWER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_LowerShellIdle, 57, 0)
};

static const s16 sZazabiMultiOam_Idle4_Frame0[ZAZABI_PART_END][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontCrawlingHigh, 69, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackHidden, 92, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairMoving, -23, 0),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellIdle, 1, 0),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, -3, 0),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeIdle, -3, 0),
    [ZAZABI_PART_UPPER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_UpperShellIdle, 27, 0),
    [ZAZABI_PART_MIDDLE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MiddleShellIdle, 41, 0),
    [ZAZABI_PART_LOWER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_LowerShellIdle, 53, 0)
};

static const s16 sZazabiMultiOam_Crawling4_Frame4[ZAZABI_PART_END][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontCrawlingHalted, 70, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackHidden, 92, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairMoving, -24, 0),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellIdle, 0, 0),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, -4, 0),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeIdle, -4, 0),
    [ZAZABI_PART_UPPER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_UpperShellIdle, 27, 0),
    [ZAZABI_PART_MIDDLE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MiddleShellIdle, 41, 0),
    [ZAZABI_PART_LOWER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_LowerShellIdle, 54, 0)
};

static const s16 sZazabiMultiOam_JumpWarning4_Frame0[ZAZABI_PART_END][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontLanding, 72, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackHidden, 92, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairStill, -15, 0),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellIdle, 9, 0),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, 5, 0),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeIdle, 5, 0),
    [ZAZABI_PART_UPPER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_UpperShellIdle, 34, 0),
    [ZAZABI_PART_MIDDLE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MiddleShellIdle, 48, 0),
    [ZAZABI_PART_LOWER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_LowerShellIdle, 60, 0)
};

static const s16 sZazabiMultiOam_JumpWarning4_Frame1[ZAZABI_PART_END][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontIdle, 73, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackHidden, 92, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairStill, -6, 0),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellIdle, 18, 0),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, 14, 0),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeIdle, 14, 0),
    [ZAZABI_PART_UPPER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_UpperShellIdle, 41, 0),
    [ZAZABI_PART_MIDDLE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MiddleShellIdle, 54, 0),
    [ZAZABI_PART_LOWER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_LowerShellIdle, 65, 0)
};

static const s16 sZazabiMultiOam_JumpingSmall4_Frame0[ZAZABI_PART_END][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontCrawlingHalted, 66, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackHidden, 92, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairDownLow, -28, 0),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellIdle, -4, 0),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, -8, 0),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeIdle, -8, 0),
    [ZAZABI_PART_UPPER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_UpperShellIdle, 24, 0),
    [ZAZABI_PART_MIDDLE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MiddleShellIdle, 38, 0),
    [ZAZABI_PART_LOWER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_LowerShellIdle, 50, 0)
};

static const s16 sZazabiMultiOam_JumpingSmall4_Frame1[ZAZABI_PART_END][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontCrawlingHalted, 67, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackHidden, 92, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairDownMid, -32, 0),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellIdle, -8, 0),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, -12, 0),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeIdle, -12, 0),
    [ZAZABI_PART_UPPER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_UpperShellIdle, 22, 0),
    [ZAZABI_PART_MIDDLE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MiddleShellIdle, 38, 0),
    [ZAZABI_PART_LOWER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_LowerShellIdle, 51, 0)
};

static const s16 sZazabiMultiOam_JumpingSmall4_Frame2[ZAZABI_PART_END][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontCrawlingHalted, 67, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackHidden, 92, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairDownHigh, -29, 0),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellIdle, -5, 0),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, -9, 0),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeIdle, -9, 0),
    [ZAZABI_PART_UPPER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_UpperShellIdle, 23, 0),
    [ZAZABI_PART_MIDDLE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MiddleShellIdle, 38, 0),
    [ZAZABI_PART_LOWER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_LowerShellIdle, 51, 0)
};

static const s16 sZazabiMultiOam_FallingSlowMouthOpened4_Frame0[ZAZABI_PART_END][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontOpening_1, 62, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackOpening_1, 62, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairStill, -23, 0),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellIdle, 1, 0),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, -3, 0),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeIdle, -3, 0),
    [ZAZABI_PART_UPPER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_UpperShellIdle, 26, 0),
    [ZAZABI_PART_MIDDLE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MiddleShellIdle, 37, 0),
    [ZAZABI_PART_LOWER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_LowerShellIdle, 48, 0)
};

static const s16 sZazabiMultiOam_FallingSlowMouthOpened4_Frame1[ZAZABI_PART_END][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontOpening_2, 54, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackOpening_2, 54, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairStill, -21, 0),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellIdle, 3, 0),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, -1, 0),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeIdle, -1, 0),
    [ZAZABI_PART_UPPER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_UpperShellIdle, 24, 0),
    [ZAZABI_PART_MIDDLE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MiddleShellIdle, 33, 0),
    [ZAZABI_PART_LOWER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_LowerShellIdle, 41, 0)
};

static const s16 sZazabiMultiOam_FallingSlowMouthOpened4_Frame2[ZAZABI_PART_END][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontOpened, 49, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackHidden, 92, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairStill, -18, 0),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellIdle, 6, 0),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, 2, 0),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeIdle, 2, 0),
    [ZAZABI_PART_UPPER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_UpperShellIdle, 25, 0),
    [ZAZABI_PART_MIDDLE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MiddleShellIdle, 31, 0),
    [ZAZABI_PART_LOWER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_LowerShellIdle, 35, 0)
};

static const s16 sZazabiMultiOam_FallingSlowMouthOpened4_Frame3[ZAZABI_PART_END][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontOpening_2, 54, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackOpening_2, 54, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairStill, -8, 0),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellIdle, 16, 0),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, 12, 0),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeIdle, 12, 0),
    [ZAZABI_PART_UPPER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_UpperShellIdle, 36, 0),
    [ZAZABI_PART_MIDDLE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MiddleShellIdle, 38, 0),
    [ZAZABI_PART_LOWER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_LowerShellIdle, 46, 0)
};

static const s16 sZazabiMultiOam_FallingSlowMouthOpened4_Frame4[ZAZABI_PART_END][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontOpening_1, 62, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackOpening_1, 62, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairStill, -2, 0),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellIdle, 22, 0),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, 18, 0),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeIdle, 18, 0),
    [ZAZABI_PART_UPPER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_UpperShellIdle, 41, 0),
    [ZAZABI_PART_MIDDLE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MiddleShellIdle, 47, 0),
    [ZAZABI_PART_LOWER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_LowerShellIdle, 46, 0)
};

static const s16 sZazabiMultiOam_FallingSlow4_Frame5[ZAZABI_PART_END][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontCrawlingHigh, 66, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackHidden, 92, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairStill, 1, 0),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellIdle, 25, 0),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, 21, 0),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeIdle, 21, 0),
    [ZAZABI_PART_UPPER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_UpperShellIdle, 45, 0),
    [ZAZABI_PART_MIDDLE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MiddleShellIdle, 55, 0),
    [ZAZABI_PART_LOWER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_LowerShellIdle, 46, 0)
};

static const s16 sZazabiMultiOam_LandingMouthOpen4_Frame0[ZAZABI_PART_END][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontIdle, 75, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackHidden, 92, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairDownLow, 17, 0),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellIdle, 41, 0),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, 37, 0),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeIdle, 37, 0),
    [ZAZABI_PART_UPPER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_UpperShellIdle, 56, 0),
    [ZAZABI_PART_MIDDLE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MiddleShellIdle, 63, 0),
    [ZAZABI_PART_LOWER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_LowerShellIdle, 68, 0)
};

static const s16 sZazabiMultiOam_LandingMouthOpen4_Frame1[ZAZABI_PART_END][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontLanding, 73, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackHidden, 92, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairDownLow, 6, 0),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellIdle, 30, 0),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, 26, 0),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeIdle, 26, 0),
    [ZAZABI_PART_UPPER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_UpperShellIdle, 50, 0),
    [ZAZABI_PART_MIDDLE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MiddleShellIdle, 57, 0),
    [ZAZABI_PART_LOWER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_LowerShellIdle, 64, 0)
};

static const s16 sZazabiMultiOam_LandingMouthOpen4_Frame2[ZAZABI_PART_END][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontLanding, 73, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackHidden, 92, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairDownMid, 7, 0),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellIdle, 31, 0),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, 27, 0),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeIdle, 27, 0),
    [ZAZABI_PART_UPPER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_UpperShellIdle, 51, 0),
    [ZAZABI_PART_MIDDLE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MiddleShellIdle, 58, 0),
    [ZAZABI_PART_LOWER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_LowerShellIdle, 65, 0)
};

static const s16 sZazabiMultiOam_LandingMouthOpen4_Frame3[ZAZABI_PART_END][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontLanding, 72, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackHidden, 92, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairDownMid, -3, 0),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellIdle, 21, 0),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, 17, 0),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeIdle, 17, 0),
    [ZAZABI_PART_UPPER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_UpperShellIdle, 43, 0),
    [ZAZABI_PART_MIDDLE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MiddleShellIdle, 52, 0),
    [ZAZABI_PART_LOWER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_LowerShellIdle, 62, 0)
};

static const s16 sZazabiMultiOam_LandingMouthOpen4_Frame4[ZAZABI_PART_END][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontLanding, 72, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackHidden, 92, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairDownHigh, -2, 0),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellIdle, 22, 0),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, 18, 0),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeIdle, 18, 0),
    [ZAZABI_PART_UPPER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_UpperShellIdle, 44, 0),
    [ZAZABI_PART_MIDDLE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MiddleShellIdle, 53, 0),
    [ZAZABI_PART_LOWER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_LowerShellIdle, 63, 0)
};

static const s16 sZazabiMultiOam_FallingSlow4_Frame2[ZAZABI_PART_END][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontCrawlingHalted, 50, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackHidden, 92, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairStill, -18, 0),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellIdle, 6, 0),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, 2, 0),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeIdle, 2, 0),
    [ZAZABI_PART_UPPER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_UpperShellIdle, 25, 0),
    [ZAZABI_PART_MIDDLE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MiddleShellIdle, 31, 0),
    [ZAZABI_PART_LOWER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_LowerShellIdle, 35, 0)
};

static const s16 sZazabiMultiOam_EatingSamus1_Frame0[ZAZABI_PART_END][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontCrawlingLow, 71, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackHidden, 92, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairEatingSamus, -20, 0),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellIdle, 4, 0),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, 0, 0),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeEatingSamus, 0, 0),
    [ZAZABI_PART_UPPER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_UpperShellIdle, 31, 0),
    [ZAZABI_PART_MIDDLE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MiddleShellIdle, 45, 0),
    [ZAZABI_PART_LOWER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_LowerShellEatingSamus, 57, 0)
};

static const s16 sZazabiMultiOam_EatingSamus1_Frame1[ZAZABI_PART_END][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontLanding, 72, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackHidden, 92, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairEatingSamus, -19, 0),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellIdle, 5, 0),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, 1, 0),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeEatingSamus, 1, 0),
    [ZAZABI_PART_UPPER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_UpperShellIdle, 33, 0),
    [ZAZABI_PART_MIDDLE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MiddleShellIdle, 47, 0),
    [ZAZABI_PART_LOWER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_LowerShellEatingSamus, 59, 0)
};

static const s16 sZazabiMultiOam_EatingSamus1_Frame2[ZAZABI_PART_END][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontIdle, 73, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackHidden, 92, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairEatingSamus, -18, 0),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellIdle, 6, 0),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, 2, 0),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeEatingSamus, 2, 0),
    [ZAZABI_PART_UPPER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_UpperShellIdle, 34, 0),
    [ZAZABI_PART_MIDDLE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MiddleShellIdle, 49, 0),
    [ZAZABI_PART_LOWER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_LowerShellEatingSamus, 61, 0)
};

static const s16 sZazabiMultiOam_EatingSamus2_Frame0[ZAZABI_PART_END][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontCrawlingLow, 71, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackHidden, 92, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairEatingSamus, -20, 0),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellIdle, 4, 0),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, 0, 0),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeEatingSamus, 0, 0),
    [ZAZABI_PART_UPPER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_UpperShellIdle, 31, 0),
    [ZAZABI_PART_MIDDLE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MiddleShellEatingSamus2, 45, 0),
    [ZAZABI_PART_LOWER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_LowerShellSwallowingSamus, 57, 0)
};

static const s16 sZazabiMultiOam_EatingSamus2_Frame1[ZAZABI_PART_END][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontLanding, 72, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackHidden, 92, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairEatingSamus, -19, 0),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellIdle, 5, 0),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, 1, 0),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeEatingSamus, 1, 0),
    [ZAZABI_PART_UPPER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_UpperShellIdle, 33, 0),
    [ZAZABI_PART_MIDDLE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MiddleShellEatingSamus2, 47, 0),
    [ZAZABI_PART_LOWER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_LowerShellSwallowingSamus, 59, 0)
};

static const s16 sZazabiMultiOam_EatingSamus2_Frame2[ZAZABI_PART_END][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontIdle, 73, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackHidden, 92, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairEatingSamus, -18, 0),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellIdle, 6, 0),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, 2, 0),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeEatingSamus, 2, 0),
    [ZAZABI_PART_UPPER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_UpperShellIdle, 34, 0),
    [ZAZABI_PART_MIDDLE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MiddleShellEatingSamus2, 49, 0),
    [ZAZABI_PART_LOWER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_LowerShellSwallowingSamus, 61, 0)
};

static const s16 sZazabiMultiOam_EatingSamus3_4_Frame0[ZAZABI_PART_END][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontCrawlingLow, 71, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackHidden, 92, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairEatingSamus, -20, 0),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellIdle, 4, 0),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, 0, 0),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeEatingSamus, 0, 0),
    [ZAZABI_PART_UPPER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_UpperShellIdle, 31, 0),
    [ZAZABI_PART_MIDDLE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MiddleShellEatingSamus3, 45, 0),
    [ZAZABI_PART_LOWER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_LowerShellIdle, 57, 0)
};

static const s16 sZazabiMultiOam_EatingSamus3_4_Frame1[ZAZABI_PART_END][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontLanding, 72, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackHidden, 92, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairEatingSamus, -19, 0),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellIdle, 5, 0),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, 1, 0),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeEatingSamus, 1, 0),
    [ZAZABI_PART_UPPER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_UpperShellIdle, 33, 0),
    [ZAZABI_PART_MIDDLE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MiddleShellEatingSamus3, 47, 0),
    [ZAZABI_PART_LOWER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_LowerShellIdle, 59, 0)
};

static const s16 sZazabiMultiOam_EatingSamus3_4_Frame2[ZAZABI_PART_END][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontIdle, 73, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackHidden, 92, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairEatingSamus, -18, 0),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellIdle, 6, 0),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, 2, 0),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeEatingSamus, 2, 0),
    [ZAZABI_PART_UPPER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_UpperShellIdle, 34, 0),
    [ZAZABI_PART_MIDDLE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MiddleShellEatingSamus3, 49, 0),
    [ZAZABI_PART_LOWER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_LowerShellIdle, 61, 0)
};

static const s16 sZazabiMultiOam_EatingSamus4_4_Frame0[ZAZABI_PART_END][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontCrawlingLow, 71, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackHidden, 92, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairEatingSamus, -20, 0),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(Zazabi_372970, 4, 0),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, 0, 0),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeEatingSamus, 0, 0),
    [ZAZABI_PART_UPPER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_UpperShellEatingSamus4, 31, 0),
    [ZAZABI_PART_MIDDLE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MiddleShellSwallowingSamus, 45, 0),
    [ZAZABI_PART_LOWER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_LowerShellIdle, 57, 0)
};

static const s16 sZazabiMultiOam_EatingSamus4_4_Frame1[ZAZABI_PART_END][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontLanding, 72, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackHidden, 92, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairEatingSamus, -19, 0),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(Zazabi_372970, 5, 0),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, 1, 0),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeEatingSamus, 1, 0),
    [ZAZABI_PART_UPPER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_UpperShellEatingSamus4, 33, 0),
    [ZAZABI_PART_MIDDLE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MiddleShellSwallowingSamus, 47, 0),
    [ZAZABI_PART_LOWER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_LowerShellIdle, 59, 0)
};

static const s16 sZazabiMultiOam_EatingSamus4_4_Frame2[ZAZABI_PART_END][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontIdle, 73, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackHidden, 92, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairEatingSamus, -18, 0),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(Zazabi_372970, 6, 0),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, 2, 0),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeEatingSamus, 2, 0),
    [ZAZABI_PART_UPPER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_UpperShellEatingSamus4, 34, 0),
    [ZAZABI_PART_MIDDLE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MiddleShellSwallowingSamus, 49, 0),
    [ZAZABI_PART_LOWER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_LowerShellIdle, 61, 0)
};

static const s16 sZazabiMultiOam_EatingSamus5_4_Frame0[ZAZABI_PART_END][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontCrawlingLow, 71, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackHidden, 92, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairEatingSamus, -20, 0),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellSwallowingSamusLow, 4, 0),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, 0, 0),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeEatingSamus, 0, 0),
    [ZAZABI_PART_UPPER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_UpperShellEatingSamus5, 31, 0),
    [ZAZABI_PART_MIDDLE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MiddleShellIdle, 45, 0),
    [ZAZABI_PART_LOWER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_LowerShellIdle, 57, 0)
};

static const s16 sZazabiMultiOam_EatingSamus5_4_Frame1[ZAZABI_PART_END][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontLanding, 72, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackHidden, 92, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairEatingSamus, -19, 0),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellSwallowingSamusLow, 5, 0),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, 1, 0),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeEatingSamus, 1, 0),
    [ZAZABI_PART_UPPER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_UpperShellEatingSamus5, 33, 0),
    [ZAZABI_PART_MIDDLE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MiddleShellIdle, 47, 0),
    [ZAZABI_PART_LOWER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_LowerShellIdle, 59, 0)
};

static const s16 sZazabiMultiOam_EatingSamus5_4_Frame2[ZAZABI_PART_END][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontIdle, 73, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackHidden, 92, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairEatingSamus, -18, 0),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellSwallowingSamusLow, 6, 0),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, 2, 0),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeEatingSamus, 2, 0),
    [ZAZABI_PART_UPPER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_UpperShellEatingSamus5, 34, 0),
    [ZAZABI_PART_MIDDLE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MiddleShellIdle, 49, 0),
    [ZAZABI_PART_LOWER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_LowerShellIdle, 61, 0)
};

static const s16 sZazabi_36b840_Frame0[ZAZABI_PART_END][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontCrawlingLow, 71, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackHidden, 92, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairEatingSamus, -20, 0),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(Zazabi_372950, 4, 0),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, 0, 0),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeEatingSamus, 0, 0),
    [ZAZABI_PART_UPPER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_UpperShellSwallowingSamus, 31, 0),
    [ZAZABI_PART_MIDDLE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MiddleShellEatingSamus2, 45, 0),
    [ZAZABI_PART_LOWER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_LowerShellIdle, 57, 0)
};

static const s16 sZazabi_36b840_Frame1[ZAZABI_PART_END][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontLanding, 72, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackHidden, 92, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairEatingSamus, -19, 0),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(Zazabi_372950, 5, 0),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, 1, 0),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeEatingSamus, 1, 0),
    [ZAZABI_PART_UPPER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_UpperShellSwallowingSamus, 33, 0),
    [ZAZABI_PART_MIDDLE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MiddleShellEatingSamus2, 47, 0),
    [ZAZABI_PART_LOWER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_LowerShellIdle, 59, 0)
};

static const s16 sZazabi_36b840_Frame2[ZAZABI_PART_END][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontIdle, 73, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackHidden, 92, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairEatingSamus, -18, 0),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(Zazabi_372950, 6, 0),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, 2, 0),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeEatingSamus, 2, 0),
    [ZAZABI_PART_UPPER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_UpperShellSwallowingSamus, 34, 0),
    [ZAZABI_PART_MIDDLE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MiddleShellEatingSamus2, 49, 0),
    [ZAZABI_PART_LOWER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_LowerShellIdle, 61, 0)
};

static const s16 sZazabi_36b868_Frame0[ZAZABI_PART_END][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontCrawlingLow, 71, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackHidden, 92, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairEatingSamus, -20, 0),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellIdle, 4, 0),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, 0, 0),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeEatingSamus, 0, 0),
    [ZAZABI_PART_UPPER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_UpperShellIdle, 31, 0),
    [ZAZABI_PART_MIDDLE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MiddleShellSwallowingSamus, 45, 0),
    [ZAZABI_PART_LOWER_SHELL] = MULTI_SPRITE_DATA_INFO(Zazabi_372820, 57, 0)
};

static const s16 sZazabi_36b868_Frame1[ZAZABI_PART_END][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontLanding, 72, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackHidden, 92, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairEatingSamus, -19, 0),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellIdle, 5, 0),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, 1, 0),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeEatingSamus, 1, 0),
    [ZAZABI_PART_UPPER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_UpperShellIdle, 33, 0),
    [ZAZABI_PART_MIDDLE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MiddleShellSwallowingSamus, 47, 0),
    [ZAZABI_PART_LOWER_SHELL] = MULTI_SPRITE_DATA_INFO(Zazabi_372820, 59, 0)
};

static const s16 sZazabi_36b868_Frame2[ZAZABI_PART_END][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontIdle, 73, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackHidden, 92, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairEatingSamus, -18, 0),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellIdle, 6, 0),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, 2, 0),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeEatingSamus, 2, 0),
    [ZAZABI_PART_UPPER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_UpperShellIdle, 34, 0),
    [ZAZABI_PART_MIDDLE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MiddleShellSwallowingSamus, 49, 0),
    [ZAZABI_PART_LOWER_SHELL] = MULTI_SPRITE_DATA_INFO(Zazabi_372820, 61, 0)
};

static const s16 sZazabi_36b890_Frame0[ZAZABI_PART_END][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontCrawlingLow, 71, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackHidden, 92, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairEatingSamus, -20, 0),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellIdle, 4, 0),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, 0, 0),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeEatingSamus, 0, 0),
    [ZAZABI_PART_UPPER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_UpperShellIdle, 31, 0),
    [ZAZABI_PART_MIDDLE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MiddleShellIdle, 45, 0),
    [ZAZABI_PART_LOWER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_LowerShellSwallowingSamus, 57, 0)
};

static const s16 sZazabi_36b890_Frame1[ZAZABI_PART_END][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontLanding, 72, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackHidden, 92, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairEatingSamus, -19, 0),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellIdle, 5, 0),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, 1, 0),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeEatingSamus, 1, 0),
    [ZAZABI_PART_UPPER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_UpperShellIdle, 33, 0),
    [ZAZABI_PART_MIDDLE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MiddleShellIdle, 47, 0),
    [ZAZABI_PART_LOWER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_LowerShellSwallowingSamus, 59, 0)
};

static const s16 sZazabi_36b890_Frame2[ZAZABI_PART_END][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontIdle, 73, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackHidden, 92, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairEatingSamus, -18, 0),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellIdle, 6, 0),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, 2, 0),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeIdle, 2, 0),
    [ZAZABI_PART_UPPER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_UpperShellIdle, 34, 0),
    [ZAZABI_PART_MIDDLE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MiddleShellIdle, 49, 0),
    [ZAZABI_PART_LOWER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_LowerShellSwallowingSamus, 61, 0)
};

static const s16 sZazabiMultiOam_JumpingBigRight4_Frame0[ZAZABI_PART_END][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontCrawlingHalted, 66, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackHidden, 92, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairJumpingRight_1, -28, -8),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellJumpingRight, -4, -8),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, -12, 0),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeJumpingRight, -4, -8),
    [ZAZABI_PART_UPPER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_UpperShellJumpingRight, 23, -1),
    [ZAZABI_PART_MIDDLE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MiddleShellIdle, 38, 0),
    [ZAZABI_PART_LOWER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_LowerShellIdle, 50, 0)
};

static const s16 sZazabiMultiOam_JumpingBigRight4_Frame1[ZAZABI_PART_END][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontCrawlingHalted, 67, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackHidden, 92, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairJumpingRight_2, -33, -10),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellJumpingRight, -9, -9),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, -16, 0),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeJumpingRight, -9, -9),
    [ZAZABI_PART_UPPER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_UpperShellJumpingRight, 20, -1),
    [ZAZABI_PART_MIDDLE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MiddleShellIdle, 38, 0),
    [ZAZABI_PART_LOWER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_LowerShellIdle, 51, 0)
};

static const s16 sZazabiMultiOam_JumpingBigRight4_Frame2[ZAZABI_PART_END][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontCrawlingHalted, 67, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackHidden, 92, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairJumpingRight_3, -29, -9),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellJumpingRight, -5, -8),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, -13, 0),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeJumpingRight, -5, -8),
    [ZAZABI_PART_UPPER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_UpperShellJumpingRight, 22, -1),
    [ZAZABI_PART_MIDDLE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MiddleShellIdle, 38, 0),
    [ZAZABI_PART_LOWER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_LowerShellIdle, 51, 0)
};

static const s16 sZazabiMultiOam_FallingMouthOpenedLeft4_Frame2[ZAZABI_PART_END][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontOpening_1, 62, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackOpening_1, 62, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairLandingLeft_1, -23, -9),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellJumpingRight, 1, -8),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, -7, -8),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeJumpingRight, 1, -8),
    [ZAZABI_PART_UPPER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_UpperShellJumpingRight, 25, -1),
    [ZAZABI_PART_MIDDLE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MiddleShellIdle, 37, 0),
    [ZAZABI_PART_LOWER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_LowerShellIdle, 48, 0)
};

static const s16 sZazabiMultiOam_FallingMouthOpenedLeft4_Frame3[ZAZABI_PART_END][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontOpening_2, 54, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackOpening_2, 54, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairLandingLeft_1, -21, -9),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellJumpingRight, 3, -8),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, -5, -8),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeJumpingRight, 3, -8),
    [ZAZABI_PART_UPPER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_UpperShellJumpingRight, 22, -1),
    [ZAZABI_PART_MIDDLE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MiddleShellIdle, 33, 0),
    [ZAZABI_PART_LOWER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_LowerShellIdle, 41, 0)
};

static const s16 sZazabiMultiOam_FallingMouthOpenedLeft4_Frame4[ZAZABI_PART_END][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontOpened, 49, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackHidden, 92, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairLandingLeft_1, -19, -9),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellJumpingRight, 5, -8),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, -3, -8),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeJumpingRight, 5, -8),
    [ZAZABI_PART_UPPER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_UpperShellJumpingRight, 24, -1),
    [ZAZABI_PART_MIDDLE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MiddleShellIdle, 31, 0),
    [ZAZABI_PART_LOWER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_LowerShellIdle, 35, 0)
};

static const s16 sZazabiMultiOam_FallingMouthOpenedLeft4_Frame5[ZAZABI_PART_END][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontOpening_2, 54, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackOpening_2, 54, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairLandingLeft_2, -8, -3),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellJumpingSmallRight, 16, -2),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, 8, -2),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeLandingRight, 16, -2),
    [ZAZABI_PART_UPPER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_UpperShellIdle, 36, 0),
    [ZAZABI_PART_MIDDLE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MiddleShellIdle, 38, 0),
    [ZAZABI_PART_LOWER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_LowerShellIdle, 46, 0)
};

static const s16 sZazabiMultiOam_JumpingBigLeft4_Frame0[ZAZABI_PART_END][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontCrawlingHalted, 66, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackHidden, 92, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairJumpingLeft_1, -28, 8),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellJumpingLeft, -4, 8),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, -12, 0),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeJumpingLeft, -4, 8),
    [ZAZABI_PART_UPPER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_UpperShellJumpingLeft, 23, 1),
    [ZAZABI_PART_MIDDLE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MiddleShellIdle, 38, 0),
    [ZAZABI_PART_LOWER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_LowerShellIdle, 50, 0)
};

static const s16 sZazabiMultiOam_JumpingBigLeft4_Frame1[ZAZABI_PART_END][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontCrawlingHalted, 67, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackHidden, 92, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairJumpingLeft_2, -33, 10),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellJumpingLeft, -9, 9),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, -16, 0),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeJumpingLeft, -9, 9),
    [ZAZABI_PART_UPPER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_UpperShellJumpingLeft, 20, 1),
    [ZAZABI_PART_MIDDLE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MiddleShellIdle, 38, 0),
    [ZAZABI_PART_LOWER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_LowerShellIdle, 51, 0)
};

static const s16 sZazabiMultiOam_JumpingBigLeft4_Frame2[ZAZABI_PART_END][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontCrawlingHalted, 67, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackHidden, 92, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairJumpingLeft_3, -29, 9),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellJumpingLeft, -5, 8),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, -13, 0),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeJumpingLeft, -5, 8),
    [ZAZABI_PART_UPPER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_UpperShellJumpingLeft, 22, 1),
    [ZAZABI_PART_MIDDLE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MiddleShellIdle, 38, 0),
    [ZAZABI_PART_LOWER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_LowerShellIdle, 51, 0)
};

static const s16 sZazabiMultiOam_FallingMouthOpenedRight4_Frame2[ZAZABI_PART_END][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontOpening_1, 62, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackOpening_1, 62, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairLandingRight_1, -23, 9),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellJumpingLeft, 1, 8),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, -7, 0),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeJumpingLeft, 1, 8),
    [ZAZABI_PART_UPPER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_UpperShellJumpingLeft, 25, 1),
    [ZAZABI_PART_MIDDLE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MiddleShellIdle, 37, 0),
    [ZAZABI_PART_LOWER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_LowerShellIdle, 48, 0)
};

static const s16 sZazabiMultiOam_FallingMouthOpenedRight4_Frame3[ZAZABI_PART_END][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontOpening_2, 54, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackOpening_2, 54, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairLandingRight_1, -21, 9),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellJumpingLeft, 3, 8),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, -5, 0),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeJumpingLeft, 3, 8),
    [ZAZABI_PART_UPPER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_UpperShellJumpingLeft, 22, 1),
    [ZAZABI_PART_MIDDLE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MiddleShellIdle, 33, 0),
    [ZAZABI_PART_LOWER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_LowerShellIdle, 41, 0)
};

static const s16 sZazabiMultiOam_FallingMouthOpenedRight4_Frame4[ZAZABI_PART_END][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontOpened, 49, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackHidden, 92, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairLandingRight_1, -19, 9),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellJumpingLeft, 5, 8),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, -3, 8),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeJumpingLeft, 5, 8),
    [ZAZABI_PART_UPPER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_UpperShellJumpingLeft, 24, 1),
    [ZAZABI_PART_MIDDLE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MiddleShellIdle, 31, 0),
    [ZAZABI_PART_LOWER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_LowerShellIdle, 35, 0)
};

static const s16 sZazabiMultiOam_FallingMouthOpenedRight4_Frame5[ZAZABI_PART_END][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontOpening_2, 54, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackOpening_2, 54, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairLandingRight_2, -8, 3),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellJumpingSmallLeft, 16, 2),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, 8, 2),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeLandingLeft, 16, 2),
    [ZAZABI_PART_UPPER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_UpperShellIdle, 36, 0),
    [ZAZABI_PART_MIDDLE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MiddleShellIdle, 38, 0),
    [ZAZABI_PART_LOWER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_LowerShellIdle, 46, 0)
};

static const s16 sZazabiMultiOam_FallingLeft4_Frame4[ZAZABI_PART_END][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontCrawlingHalted, 50, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackHidden, 92, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairLandingLeft_1, -19, -9),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellJumpingRight, 5, -8),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, -3, -8),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeJumpingRight, 5, -8),
    [ZAZABI_PART_UPPER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_UpperShellJumpingRight, 24, -1),
    [ZAZABI_PART_MIDDLE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MiddleShellIdle, 31, 0),
    [ZAZABI_PART_LOWER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_LowerShellIdle, 35, 0)
};

static const s16 sZazabiMultiOam_FallingRight4_Frame4[ZAZABI_PART_END][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontCrawlingHalted, 50, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackHidden, 92, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairLandingRight_1, -19, 9),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellJumpingLeft, 5, 8),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, -3, 8),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeJumpingLeft, 5, 8),
    [ZAZABI_PART_UPPER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_UpperShellJumpingLeft, 24, 1),
    [ZAZABI_PART_MIDDLE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MiddleShellIdle, 31, 0),
    [ZAZABI_PART_LOWER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_LowerShellIdle, 35, 0)
};

static const s16 sZazabiMultiOam_FallingSlow4_Frame0[ZAZABI_PART_END][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontCrawlingHalted, 62, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackHidden, 92, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairStill, -23, 0),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellIdle, 1, 0),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, -3, 0),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeIdle, -3, 0),
    [ZAZABI_PART_UPPER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_UpperShellIdle, 26, 0),
    [ZAZABI_PART_MIDDLE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MiddleShellIdle, 37, 0),
    [ZAZABI_PART_LOWER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_LowerShellIdle, 48, 0)
};

static const s16 sZazabiMultiOam_FallingSlow4_Frame1[ZAZABI_PART_END][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontCrawlingHalted, 54, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackHidden, 92, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairStill, -21, 0),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellIdle, 3, 0),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, -1, 0),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeIdle, -1, 0),
    [ZAZABI_PART_UPPER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_UpperShellIdle, 24, 0),
    [ZAZABI_PART_MIDDLE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MiddleShellIdle, 33, 0),
    [ZAZABI_PART_LOWER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_LowerShellIdle, 41, 0)
};

static const s16 sZazabiMultiOam_FallingSlow4_Frame3[ZAZABI_PART_END][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontCrawlingHalted, 54, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackHidden, 92, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairStill, -8, 0),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellIdle, 16, 0),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, 12, 0),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeIdle, 12, 0),
    [ZAZABI_PART_UPPER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_UpperShellIdle, 36, 0),
    [ZAZABI_PART_MIDDLE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MiddleShellIdle, 38, 0),
    [ZAZABI_PART_LOWER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_LowerShellIdle, 46, 0)
};

static const s16 sZazabiMultiOam_FallingSlow4_Frame4[ZAZABI_PART_END][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontCrawlingHalted, 62, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackHidden, 92, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairStill, -2, 0),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellIdle, 22, 0),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, 18, 0),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeIdle, 18, 0),
    [ZAZABI_PART_UPPER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_UpperShellIdle, 41, 0),
    [ZAZABI_PART_MIDDLE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MiddleShellIdle, 47, 0),
    [ZAZABI_PART_LOWER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_LowerShellIdle, 46, 0)
};

static const s16 sZazabiMultiOam_FallingLeft4_Frame2[ZAZABI_PART_END][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontCrawlingHalted, 62, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackHidden, 92, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairLandingLeft_1, -23, -9),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellJumpingRight, 1, -8),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, -7, -8),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeJumpingRight, 1, -8),
    [ZAZABI_PART_UPPER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_UpperShellJumpingRight, 25, -1),
    [ZAZABI_PART_MIDDLE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MiddleShellIdle, 37, 0),
    [ZAZABI_PART_LOWER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_LowerShellIdle, 48, 0)
};

static const s16 sZazabiMultiOam_FallingLeft4_Frame3[ZAZABI_PART_END][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontCrawlingHalted, 54, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackHidden, 92, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairLandingLeft_1, -21, -9),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellJumpingRight, 3, -8),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, -5, -8),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeJumpingRight, 3, -8),
    [ZAZABI_PART_UPPER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_UpperShellJumpingRight, 22, -1),
    [ZAZABI_PART_MIDDLE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MiddleShellIdle, 33, 0),
    [ZAZABI_PART_LOWER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_LowerShellIdle, 41, 0)
};

static const s16 sZazabiMultiOam_FallingLeft4_Frame5[ZAZABI_PART_END][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontCrawlingHalted, 54, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackHidden, 92, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairLandingLeft_2, -8, -3),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellJumpingSmallRight, 16, -2),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, 8, -2),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeLandingRight, 16, -2),
    [ZAZABI_PART_UPPER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_UpperShellIdle, 36, 0),
    [ZAZABI_PART_MIDDLE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MiddleShellIdle, 38, 0),
    [ZAZABI_PART_LOWER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_LowerShellIdle, 46, 0)
};

static const s16 sZazabiMultiOam_FallingRight4_Frame2[ZAZABI_PART_END][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontCrawlingHalted, 62, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackHidden, 92, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairLandingRight_1, -23, 9),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellJumpingLeft, 1, 8),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, -7, 0),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeJumpingLeft, 1, 8),
    [ZAZABI_PART_UPPER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_UpperShellJumpingLeft, 25, 1),
    [ZAZABI_PART_MIDDLE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MiddleShellIdle, 37, 0),
    [ZAZABI_PART_LOWER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_LowerShellIdle, 48, 0)
};

static const s16 sZazabiMultiOam_FallingRight4_Frame3[ZAZABI_PART_END][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontCrawlingHalted, 54, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackHidden, 92, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairLandingRight_1, -21, 9),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellJumpingLeft, 3, 8),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, -5, 0),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeJumpingLeft, 3, 8),
    [ZAZABI_PART_UPPER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_UpperShellJumpingLeft, 22, 1),
    [ZAZABI_PART_MIDDLE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MiddleShellIdle, 33, 0),
    [ZAZABI_PART_LOWER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_LowerShellIdle, 41, 0)
};

static const s16 sZazabiMultiOam_FallingRight4_Frame5[ZAZABI_PART_END][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontCrawlingHalted, 54, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackHidden, 92, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairLandingRight_2, -8, 3),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellJumpingSmallLeft, 16, 2),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, 8, 2),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeLandingLeft, 16, 2),
    [ZAZABI_PART_UPPER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_UpperShellIdle, 36, 0),
    [ZAZABI_PART_MIDDLE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MiddleShellIdle, 38, 0),
    [ZAZABI_PART_LOWER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_LowerShellIdle, 46, 0)
};


const struct MultiSpriteData sZazabiMultiOam_Idle4[5] = {
    [0] = {
        .pData = sZazabiMultiOam_Idle4_Frame0,
        .timer = 16
    },
    [1] = {
        .pData = sZazabiMultiOam_Idle4_Frame1,
        .timer = 16
    },
    [2] = {
        .pData = sZazabiMultiOam_Idle4_Frame2,
        .timer = 16
    },
    [3] = {
        .pData = sZazabiMultiOam_Idle4_Frame1,
        .timer = 16
    },
    [4] = MULTI_SPRITE_DATA_TERMINATOR
};

const struct MultiSpriteData sZazabiMultiOam_Crawling4[9] = {
    [0] = {
        .pData = sZazabiMultiOam_Idle4_Frame2,
        .timer = 8
    },
    [1] = {
        .pData = sZazabiMultiOam_Idle4_Frame1,
        .timer = 8
    },
    [2] = {
        .pData = sZazabiMultiOam_Crawling4_Frame2,
        .timer = 8
    },
    [3] = {
        .pData = sZazabiMultiOam_Idle4_Frame0,
        .timer = 8
    },
    [4] = {
        .pData = sZazabiMultiOam_Crawling4_Frame4,
        .timer = 10
    },
    [5] = {
        .pData = sZazabiMultiOam_Idle4_Frame0,
        .timer = 8
    },
    [6] = {
        .pData = sZazabiMultiOam_Crawling4_Frame2,
        .timer = 8
    },
    [7] = {
        .pData = sZazabiMultiOam_Idle4_Frame1,
        .timer = 8
    },
    [8] = MULTI_SPRITE_DATA_TERMINATOR
};

const struct MultiSpriteData sZazabiMultiOam_JumpWarning4[3] = {
    [0] = {
        .pData = sZazabiMultiOam_JumpWarning4_Frame0,
        .timer = 8
    },
    [1] = {
        .pData = sZazabiMultiOam_JumpWarning4_Frame1,
        .timer = 16
    },
    [2] = MULTI_SPRITE_DATA_TERMINATOR
};

const struct MultiSpriteData sZazabiMultiOam_JumpingSmall4[4] = {
    [0] = {
        .pData = sZazabiMultiOam_JumpingSmall4_Frame0,
        .timer = 4
    },
    [1] = {
        .pData = sZazabiMultiOam_JumpingSmall4_Frame1,
        .timer = 8
    },
    [2] = {
        .pData = sZazabiMultiOam_JumpingSmall4_Frame2,
        .timer = 255
    },
    [3] = MULTI_SPRITE_DATA_TERMINATOR
};

const struct MultiSpriteData sZazabiMultiOam_JumpingBigRight4[4] = {
    [0] = {
        .pData = sZazabiMultiOam_JumpingBigRight4_Frame0,
        .timer = 4
    },
    [1] = {
        .pData = sZazabiMultiOam_JumpingBigRight4_Frame1,
        .timer = 8
    },
    [2] = {
        .pData = sZazabiMultiOam_JumpingBigRight4_Frame2,
        .timer = 255
    },
    [3] = MULTI_SPRITE_DATA_TERMINATOR
};

const struct MultiSpriteData sZazabiMultiOam_JumpingBigLeft4[4] = {
    [0] = {
        .pData = sZazabiMultiOam_JumpingBigLeft4_Frame0,
        .timer = 4
    },
    [1] = {
        .pData = sZazabiMultiOam_JumpingBigLeft4_Frame1,
        .timer = 8
    },
    [2] = {
        .pData = sZazabiMultiOam_JumpingBigLeft4_Frame2,
        .timer = 255
    },
    [3] = MULTI_SPRITE_DATA_TERMINATOR
};

const struct MultiSpriteData sZazabiMultiOam_FallingSlow4[7] = {
    [0] = {
        .pData = sZazabiMultiOam_FallingSlow4_Frame0,
        .timer = 4
    },
    [1] = {
        .pData = sZazabiMultiOam_FallingSlow4_Frame1,
        .timer = 6
    },
    [2] = {
        .pData = sZazabiMultiOam_FallingSlow4_Frame2,
        .timer = 100
    },
    [3] = {
        .pData = sZazabiMultiOam_FallingSlow4_Frame3,
        .timer = 2
    },
    [4] = {
        .pData = sZazabiMultiOam_FallingSlow4_Frame4,
        .timer = 2
    },
    [5] = {
        .pData = sZazabiMultiOam_FallingSlow4_Frame5,
        .timer = 2
    },
    [6] = MULTI_SPRITE_DATA_TERMINATOR
};

const struct MultiSpriteData sZazabiMultiOam_FallingSlowMouthOpened4[7] = {
    [0] = {
        .pData = sZazabiMultiOam_FallingSlowMouthOpened4_Frame0,
        .timer = 4
    },
    [1] = {
        .pData = sZazabiMultiOam_FallingSlowMouthOpened4_Frame1,
        .timer = 6
    },
    [2] = {
        .pData = sZazabiMultiOam_FallingSlowMouthOpened4_Frame2,
        .timer = 100
    },
    [3] = {
        .pData = sZazabiMultiOam_FallingSlowMouthOpened4_Frame3,
        .timer = 2
    },
    [4] = {
        .pData = sZazabiMultiOam_FallingSlowMouthOpened4_Frame4,
        .timer = 2
    },
    [5] = {
        .pData = sZazabiMultiOam_FallingSlow4_Frame5,
        .timer = 2
    },
    [6] = MULTI_SPRITE_DATA_TERMINATOR
};

const struct MultiSpriteData sZazabiMultiOam_FallingLeft4[9] = {
    [0] = {
        .pData = sZazabiMultiOam_JumpingSmall4_Frame2,
        .timer = 4
    },
    [1] = {
        .pData = sZazabiMultiOam_JumpingBigRight4_Frame2,
        .timer = 4
    },
    [2] = {
        .pData = sZazabiMultiOam_FallingLeft4_Frame2,
        .timer = 4
    },
    [3] = {
        .pData = sZazabiMultiOam_FallingLeft4_Frame3,
        .timer = 6
    },
    [4] = {
        .pData = sZazabiMultiOam_FallingLeft4_Frame4,
        .timer = 100
    },
    [5] = {
        .pData = sZazabiMultiOam_FallingLeft4_Frame5,
        .timer = 2
    },
    [6] = {
        .pData = sZazabiMultiOam_FallingSlow4_Frame4,
        .timer = 2
    },
    [7] = {
        .pData = sZazabiMultiOam_FallingSlow4_Frame5,
        .timer = 2
    },
    [8] = MULTI_SPRITE_DATA_TERMINATOR
};

const struct MultiSpriteData sZazabiMultiOam_FallingMouthOpenedLeft4[9] = {
    [0] = {
        .pData = sZazabiMultiOam_JumpingSmall4_Frame2,
        .timer = 4
    },
    [1] = {
        .pData = sZazabiMultiOam_JumpingBigRight4_Frame2,
        .timer = 4
    },
    [2] = {
        .pData = sZazabiMultiOam_FallingMouthOpenedLeft4_Frame2,
        .timer = 4
    },
    [3] = {
        .pData = sZazabiMultiOam_FallingMouthOpenedLeft4_Frame3,
        .timer = 6
    },
    [4] = {
        .pData = sZazabiMultiOam_FallingMouthOpenedLeft4_Frame4,
        .timer = 100
    },
    [5] = {
        .pData = sZazabiMultiOam_FallingMouthOpenedLeft4_Frame5,
        .timer = 2
    },
    [6] = {
        .pData = sZazabiMultiOam_FallingSlowMouthOpened4_Frame4,
        .timer = 2
    },
    [7] = {
        .pData = sZazabiMultiOam_FallingSlow4_Frame5,
        .timer = 2
    },
    [8] = MULTI_SPRITE_DATA_TERMINATOR
};

const struct MultiSpriteData sZazabiMultiOam_FallingRight4[9] = {
    [0] = {
        .pData = sZazabiMultiOam_JumpingSmall4_Frame2,
        .timer = 4
    },
    [1] = {
        .pData = sZazabiMultiOam_JumpingBigLeft4_Frame2,
        .timer = 4
    },
    [2] = {
        .pData = sZazabiMultiOam_FallingRight4_Frame2,
        .timer = 4
    },
    [3] = {
        .pData = sZazabiMultiOam_FallingRight4_Frame3,
        .timer = 6
    },
    [4] = {
        .pData = sZazabiMultiOam_FallingRight4_Frame4,
        .timer = 100
    },
    [5] = {
        .pData = sZazabiMultiOam_FallingRight4_Frame5,
        .timer = 2
    },
    [6] = {
        .pData = sZazabiMultiOam_FallingSlow4_Frame4,
        .timer = 2
    },
    [7] = {
        .pData = sZazabiMultiOam_FallingSlow4_Frame5,
        .timer = 2
    },
    [8] = MULTI_SPRITE_DATA_TERMINATOR
};

const struct MultiSpriteData sZazabiMultiOam_FallingMouthOpenedRight4[9] = {
    [0] = {
        .pData = sZazabiMultiOam_JumpingSmall4_Frame2,
        .timer = 4
    },
    [1] = {
        .pData = sZazabiMultiOam_JumpingBigLeft4_Frame2,
        .timer = 4
    },
    [2] = {
        .pData = sZazabiMultiOam_FallingMouthOpenedRight4_Frame2,
        .timer = 4
    },
    [3] = {
        .pData = sZazabiMultiOam_FallingMouthOpenedRight4_Frame3,
        .timer = 6
    },
    [4] = {
        .pData = sZazabiMultiOam_FallingMouthOpenedRight4_Frame4,
        .timer = 100
    },
    [5] = {
        .pData = sZazabiMultiOam_FallingMouthOpenedRight4_Frame5,
        .timer = 2
    },
    [6] = {
        .pData = sZazabiMultiOam_FallingSlowMouthOpened4_Frame4,
        .timer = 2
    },
    [7] = {
        .pData = sZazabiMultiOam_FallingSlow4_Frame5,
        .timer = 2
    },
    [8] = MULTI_SPRITE_DATA_TERMINATOR
};

const struct MultiSpriteData sZazabiMultiOam_LandingMouthOpen4[7] = {
    [0] = {
        .pData = sZazabiMultiOam_LandingMouthOpen4_Frame0,
        .timer = 12
    },
    [1] = {
        .pData = sZazabiMultiOam_LandingMouthOpen4_Frame1,
        .timer = 4
    },
    [2] = {
        .pData = sZazabiMultiOam_LandingMouthOpen4_Frame2,
        .timer = 4
    },
    [3] = {
        .pData = sZazabiMultiOam_LandingMouthOpen4_Frame3,
        .timer = 6
    },
    [4] = {
        .pData = sZazabiMultiOam_LandingMouthOpen4_Frame4,
        .timer = 6
    },
    [5] = {
        .pData = sZazabiMultiOam_JumpWarning4_Frame0,
        .timer = 8
    },
    [6] = MULTI_SPRITE_DATA_TERMINATOR
};

const struct MultiSpriteData sZazabiMultiOam_Landing4[3] = {
    [0] = {
        .pData = sZazabiMultiOam_LandingMouthOpen4_Frame0,
        .timer = 12
    },
    [1] = {
        .pData = sZazabiMultiOam_LandingMouthOpen4_Frame3,
        .timer = 8
    },
    [2] = MULTI_SPRITE_DATA_TERMINATOR
};

const struct MultiSpriteData sZazabiMultiOam_SpittingSamus4[7] = {
    [0] = {
        .pData = sZazabiMultiOam_JumpingSmall4_Frame0,
        .timer = 8
    },
    [1] = {
        .pData = sZazabiMultiOam_FallingSlowMouthOpened4_Frame0,
        .timer = 5
    },
    [2] = {
        .pData = sZazabiMultiOam_FallingSlowMouthOpened4_Frame1,
        .timer = 8
    },
    [3] = {
        .pData = sZazabiMultiOam_FallingSlowMouthOpened4_Frame3,
        .timer = 3
    },
    [4] = {
        .pData = sZazabiMultiOam_FallingSlowMouthOpened4_Frame4,
        .timer = 3
    },
    [5] = {
        .pData = sZazabiMultiOam_FallingSlow4_Frame5,
        .timer = 4
    },
    [6] = MULTI_SPRITE_DATA_TERMINATOR
};

const struct MultiSpriteData sZazabiMultiOam_LandingAfterSpitting4[5] = {
    [0] = {
        .pData = sZazabiMultiOam_LandingMouthOpen4_Frame0,
        .timer = 12
    },
    [1] = {
        .pData = sZazabiMultiOam_LandingMouthOpen4_Frame1,
        .timer = 4
    },
    [2] = {
        .pData = sZazabiMultiOam_LandingMouthOpen4_Frame3,
        .timer = 6
    },
    [3] = {
        .pData = sZazabiMultiOam_JumpWarning4_Frame0,
        .timer = 8
    },
    [4] = MULTI_SPRITE_DATA_TERMINATOR
};

const struct MultiSpriteData sZazabiMultiOam_EatingSamus1[5] = {
    [0] = {
        .pData = sZazabiMultiOam_EatingSamus1_Frame0,
        .timer = 16
    },
    [1] = {
        .pData = sZazabiMultiOam_EatingSamus1_Frame1,
        .timer = 16
    },
    [2] = {
        .pData = sZazabiMultiOam_EatingSamus1_Frame2,
        .timer = 16
    },
    [3] = {
        .pData = sZazabiMultiOam_EatingSamus1_Frame1,
        .timer = 16
    },
    [4] = MULTI_SPRITE_DATA_TERMINATOR
};

const struct MultiSpriteData sZazabiMultiOam_EatingSamus2[5] = {
    [0] = {
        .pData = sZazabiMultiOam_EatingSamus2_Frame0,
        .timer = 16
    },
    [1] = {
        .pData = sZazabiMultiOam_EatingSamus2_Frame1,
        .timer = 16
    },
    [2] = {
        .pData = sZazabiMultiOam_EatingSamus2_Frame2,
        .timer = 16
    },
    [3] = {
        .pData = sZazabiMultiOam_EatingSamus2_Frame1,
        .timer = 16
    },
    [4] = MULTI_SPRITE_DATA_TERMINATOR
};

const struct MultiSpriteData sZazabiMultiOam_EatingSamus3_4[5] = {
    [0] = {
        .pData = sZazabiMultiOam_EatingSamus3_4_Frame0,
        .timer = 16
    },
    [1] = {
        .pData = sZazabiMultiOam_EatingSamus3_4_Frame1,
        .timer = 16
    },
    [2] = {
        .pData = sZazabiMultiOam_EatingSamus3_4_Frame2,
        .timer = 16
    },
    [3] = {
        .pData = sZazabiMultiOam_EatingSamus3_4_Frame1,
        .timer = 16
    },
    [4] = MULTI_SPRITE_DATA_TERMINATOR
};

const struct MultiSpriteData sZazabiMultiOam_EatingSamus4_4[5] = {
    [0] = {
        .pData = sZazabiMultiOam_EatingSamus4_4_Frame0,
        .timer = 16
    },
    [1] = {
        .pData = sZazabiMultiOam_EatingSamus4_4_Frame1,
        .timer = 16
    },
    [2] = {
        .pData = sZazabiMultiOam_EatingSamus4_4_Frame2,
        .timer = 16
    },
    [3] = {
        .pData = sZazabiMultiOam_EatingSamus4_4_Frame1,
        .timer = 16
    },
    [4] = MULTI_SPRITE_DATA_TERMINATOR
};

const struct MultiSpriteData sZazabiMultiOam_EatingSamus5_4[5] = {
    [0] = {
        .pData = sZazabiMultiOam_EatingSamus5_4_Frame0,
        .timer = 16
    },
    [1] = {
        .pData = sZazabiMultiOam_EatingSamus5_4_Frame1,
        .timer = 16
    },
    [2] = {
        .pData = sZazabiMultiOam_EatingSamus5_4_Frame2,
        .timer = 16
    },
    [3] = {
        .pData = sZazabiMultiOam_EatingSamus5_4_Frame1,
        .timer = 16
    },
    [4] = MULTI_SPRITE_DATA_TERMINATOR
};

const struct MultiSpriteData sZazabi_36b840[5] = {
    [0] = {
        .pData = sZazabi_36b840_Frame0,
        .timer = 16
    },
    [1] = {
        .pData = sZazabi_36b840_Frame1,
        .timer = 16
    },
    [2] = {
        .pData = sZazabi_36b840_Frame2,
        .timer = 16
    },
    [3] = {
        .pData = sZazabi_36b840_Frame1,
        .timer = 16
    },
    [4] = MULTI_SPRITE_DATA_TERMINATOR
};

const struct MultiSpriteData sZazabi_36b868[5] = {
    [0] = {
        .pData = sZazabi_36b868_Frame0,
        .timer = 16
    },
    [1] = {
        .pData = sZazabi_36b868_Frame1,
        .timer = 16
    },
    [2] = {
        .pData = sZazabi_36b868_Frame2,
        .timer = 16
    },
    [3] = {
        .pData = sZazabi_36b868_Frame1,
        .timer = 16
    },
    [4] = MULTI_SPRITE_DATA_TERMINATOR
};

const struct MultiSpriteData sZazabi_36b890[5] = {
    [0] = {
        .pData = sZazabi_36b890_Frame0,
        .timer = 16
    },
    [1] = {
        .pData = sZazabi_36b890_Frame1,
        .timer = 16
    },
    [2] = {
        .pData = sZazabi_36b890_Frame2,
        .timer = 16
    },
    [3] = {
        .pData = sZazabi_36b890_Frame1,
        .timer = 16
    },
    [4] = MULTI_SPRITE_DATA_TERMINATOR
};


static const s16 sZazabiMultiOam_Idle3_Frame2[ZAZABI_PART_LOWER_SHELL][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontIdle, 73, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackHidden, 92, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairMoving, -7, 0),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellIdle, 17, 0),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, 13, 0),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeIdle, 13, 0),
    [ZAZABI_PART_UPPER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_UpperShellIdle, 45, 0),
    [ZAZABI_PART_MIDDLE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MiddleShellIdle, 60, 0)
};

static const s16 sZazabiMultiOam_Idle3_Frame1[ZAZABI_PART_LOWER_SHELL][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontLanding, 72, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackHidden, 92, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairMoving, -8, 0),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellIdle, 16, 0),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, 12, 0),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeIdle, 12, 0),
    [ZAZABI_PART_UPPER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_UpperShellIdle, 44, 0),
    [ZAZABI_PART_MIDDLE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MiddleShellIdle, 58, 0)
};

static const s16 sZazabiMultiOam_Idle3_Frame0[ZAZABI_PART_LOWER_SHELL][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontCrawlingLow, 71, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackHidden, 92, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairMoving, -10, 0),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellIdle, 14, 0),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, 10, 0),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeIdle, 10, 0),
    [ZAZABI_PART_UPPER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_UpperShellIdle, 41, 0),
    [ZAZABI_PART_MIDDLE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MiddleShellIdle, 55, 0)
};

static const s16 sZazabiMultiOam_Crawling3_Frame3[ZAZABI_PART_LOWER_SHELL][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontCrawlingHigh, 69, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackHidden, 92, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairMoving, -12, 0),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellIdle, 12, 0),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, 8, 0),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeIdle, 8, 0),
    [ZAZABI_PART_UPPER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_UpperShellIdle, 38, 0),
    [ZAZABI_PART_MIDDLE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MiddleShellIdle, 52, 0)
};

static const s16 sZazabiMultiOam_Crawling3_Frame4[ZAZABI_PART_LOWER_SHELL][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontCrawlingHalted, 70, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackHidden, 92, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairMoving, -13, 0),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellIdle, 11, 0),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, 7, 0),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeIdle, 7, 0),
    [ZAZABI_PART_UPPER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_UpperShellIdle, 38, 0),
    [ZAZABI_PART_MIDDLE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MiddleShellIdle, 52, 0)
};

static const s16 sZazabiMultiOam_JumpWarning3_Frame0[ZAZABI_PART_LOWER_SHELL][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontLanding, 72, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackHidden, 92, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairStill, -4, 0),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellIdle, 20, 0),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, 16, 0),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeIdle, 16, 0),
    [ZAZABI_PART_UPPER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_UpperShellIdle, 45, 0),
    [ZAZABI_PART_MIDDLE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MiddleShellIdle, 59, 0)
};

static const s16 sZazabiMultiOam_JumpWarning3_Frame1[ZAZABI_PART_LOWER_SHELL][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontIdle, 73, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackHidden, 92, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairStill, 5, 0),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellIdle, 29, 0),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, 25, 0),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeIdle, 25, 0),
    [ZAZABI_PART_UPPER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_UpperShellIdle, 52, 0),
    [ZAZABI_PART_MIDDLE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MiddleShellIdle, 65, 0)
};

static const s16 sZazabiMultiOam_JumpingSmall3_Frame0[ZAZABI_PART_LOWER_SHELL][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontCrawlingHalted, 66, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackHidden, 92, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairDownLow, -17, 0),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellIdle, 7, 0),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, 3, 0),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeIdle, 3, 0),
    [ZAZABI_PART_UPPER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_UpperShellIdle, 35, 0),
    [ZAZABI_PART_MIDDLE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MiddleShellIdle, 49, 0)
};

static const s16 sZazabiMultiOam_JumpingSmall3_Frame1[ZAZABI_PART_LOWER_SHELL][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontCrawlingHalted, 67, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackHidden, 92, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairDownMid, -21, 0),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellIdle, 3, 0),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, -1, 0),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeIdle, -1, 0),
    [ZAZABI_PART_UPPER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_UpperShellIdle, 33, 0),
    [ZAZABI_PART_MIDDLE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MiddleShellIdle, 49, 0)
};

static const s16 sZazabiMultiOam_JumpingSmall3_Frame2[ZAZABI_PART_LOWER_SHELL][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontCrawlingHalted, 67, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackHidden, 92, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairDownHigh, -18, 0),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellIdle, 6, 0),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, 2, 0),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeIdle, 2, 0),
    [ZAZABI_PART_UPPER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_UpperShellIdle, 34, 0),
    [ZAZABI_PART_MIDDLE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MiddleShellIdle, 49, 0)
};

static const s16 sZazabiMultiOam_FallingSlowMouthOpened3_Frame0[ZAZABI_PART_LOWER_SHELL][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontOpening_1, 62, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackOpening_1, 62, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairStill, -12, 0),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellIdle, 12, 0),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, 8, 0),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeIdle, 8, 0),
    [ZAZABI_PART_UPPER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_UpperShellIdle, 37, 0),
    [ZAZABI_PART_MIDDLE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MiddleShellIdle, 48, 0)
};

static const s16 sZazabiMultiOam_FallingSlowMouthOpened3_Frame1[ZAZABI_PART_LOWER_SHELL][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontOpening_2, 54, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackOpening_2, 54, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairStill, -10, 0),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellIdle, 14, 0),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, 10, 0),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeIdle, 10, 0),
    [ZAZABI_PART_UPPER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_UpperShellIdle, 35, 0),
    [ZAZABI_PART_MIDDLE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MiddleShellIdle, 44, 0)
};

static const s16 sZazabiMultiOam_FallingSlowMouthOpened3_Frame2[ZAZABI_PART_LOWER_SHELL][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontOpened, 49, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackHidden, 92, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairStill, -7, 0),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellIdle, 17, 0),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, 13, 0),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeIdle, 13, 0),
    [ZAZABI_PART_UPPER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_UpperShellIdle, 36, 0),
    [ZAZABI_PART_MIDDLE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MiddleShellIdle, 42, 0)
};

static const s16 sZazabiMultiOam_FallingSlowMouthOpened3_Frame3[ZAZABI_PART_LOWER_SHELL][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontOpening_2, 54, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackOpening_2, 54, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairStill, 3, 0),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellIdle, 27, 0),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, 23, 0),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeIdle, 23, 0),
    [ZAZABI_PART_UPPER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_UpperShellIdle, 47, 0),
    [ZAZABI_PART_MIDDLE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MiddleShellIdle, 49, 0)
};

static const s16 sZazabiMultiOam_FallingSlowMouthOpened3_Frame4[ZAZABI_PART_LOWER_SHELL][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontOpening_1, 62, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackOpening_1, 62, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairStill, 9, 0),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellIdle, 33, 0),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, 29, 0),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeIdle, 29, 0),
    [ZAZABI_PART_UPPER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_UpperShellIdle, 52, 0),
    [ZAZABI_PART_MIDDLE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MiddleShellIdle, 58, 0)
};

static const s16 sZazabiMultiOam_FallingSlow3_Frame5[ZAZABI_PART_LOWER_SHELL][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontCrawlingHigh, 66, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackHidden, 92, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairStill, 12, 0),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellIdle, 36, 0),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, 32, 0),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeIdle, 32, 0),
    [ZAZABI_PART_UPPER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_UpperShellIdle, 56, 0),
    [ZAZABI_PART_MIDDLE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MiddleShellIdle, 66, 0)
};

static const s16 sZazabiMultiOam_LandingMouthOpen3_Frame0[ZAZABI_PART_LOWER_SHELL][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontIdle, 75, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackHidden, 92, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairDownLow, 28, 0),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellIdle, 52, 0),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, 48, 0),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeIdle, 48, 0),
    [ZAZABI_PART_UPPER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_UpperShellIdle, 67, 0),
    [ZAZABI_PART_MIDDLE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MiddleShellIdle, 74, 0)
};

static const s16 sZazabiMultiOam_LandingMouthOpen3_Frame1[ZAZABI_PART_LOWER_SHELL][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontLanding, 73, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackHidden, 92, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairDownLow, 17, 0),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellIdle, 41, 0),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, 37, 0),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeIdle, 37, 0),
    [ZAZABI_PART_UPPER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_UpperShellIdle, 61, 0),
    [ZAZABI_PART_MIDDLE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MiddleShellIdle, 68, 0)
};

static const s16 sZazabiMultiOam_LandingMouthOpen3_Frame2[ZAZABI_PART_LOWER_SHELL][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontLanding, 73, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackHidden, 92, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairDownMid, 18, 0),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellIdle, 42, 0),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, 38, 0),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeIdle, 38, 0),
    [ZAZABI_PART_UPPER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_UpperShellIdle, 62, 0),
    [ZAZABI_PART_MIDDLE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MiddleShellIdle, 69, 0)
};

static const s16 sZazabiMultiOam_LandingMouthOpen3_Frame3[ZAZABI_PART_LOWER_SHELL][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontLanding, 72, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackHidden, 92, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairDownMid, 8, 0),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellIdle, 32, 0),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, 28, 0),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeIdle, 28, 0),
    [ZAZABI_PART_UPPER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_UpperShellIdle, 54, 0),
    [ZAZABI_PART_MIDDLE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MiddleShellIdle, 63, 0)
};

static const s16 sZazabiMultiOam_LandingMouthOpen3_Frame4[ZAZABI_PART_LOWER_SHELL][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontLanding, 72, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackHidden, 92, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairDownHigh, 9, 0),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellIdle, 33, 0),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, 29, 0),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeIdle, 29, 0),
    [ZAZABI_PART_UPPER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_UpperShellIdle, 55, 0),
    [ZAZABI_PART_MIDDLE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MiddleShellIdle, 64, 0)
};

static const s16 sZazabiMultiOam_FallingSlow3_Frame2[ZAZABI_PART_LOWER_SHELL][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontCrawlingHalted, 49, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackHidden, 92, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairStill, -7, 0),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellIdle, 17, 0),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, 13, 0),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeIdle, 13, 0),
    [ZAZABI_PART_UPPER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_UpperShellIdle, 36, 0),
    [ZAZABI_PART_MIDDLE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MiddleShellIdle, 42, 0)
};

static const s16 sZazabiMultiOam_EatingSamus3_3_Frame0[ZAZABI_PART_LOWER_SHELL][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontCrawlingLow, 71, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackHidden, 92, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairEatingSamus, -10, 0),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellIdle, 14, 0),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, 10, 0),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeEatingSamus, 10, 0),
    [ZAZABI_PART_UPPER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_UpperShellIdle, 41, 0),
    [ZAZABI_PART_MIDDLE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MiddleShellEatingSamus3, 55, 0)
};

static const s16 sZazabiMultiOam_EatingSamus3_3_Frame1[ZAZABI_PART_LOWER_SHELL][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontLanding, 72, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackHidden, 92, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairEatingSamus, -8, 0),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellIdle, 16, 0),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, 12, 0),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeEatingSamus, 12, 0),
    [ZAZABI_PART_UPPER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_UpperShellIdle, 44, 0),
    [ZAZABI_PART_MIDDLE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MiddleShellEatingSamus3, 58, 0)
};

static const s16 sZazabiMultiOam_EatingSamus3_3_Frame2[ZAZABI_PART_LOWER_SHELL][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontIdle, 73, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackHidden, 92, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairEatingSamus, -7, 0),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellIdle, 17, 0),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, 13, 0),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeEatingSamus, 13, 0),
    [ZAZABI_PART_UPPER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_UpperShellIdle, 45, 0),
    [ZAZABI_PART_MIDDLE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MiddleShellEatingSamus3, 60, 0)
};

static const s16 sZazabiMultiOam_EatingSamus4_3_Frame0[ZAZABI_PART_LOWER_SHELL][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontCrawlingLow, 71, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackHidden, 92, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairEatingSamus, -10, 0),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(Zazabi_372970, 14, 0),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, 10, 0),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeEatingSamus, 10, 0),
    [ZAZABI_PART_UPPER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_UpperShellEatingSamus4, 41, 0),
    [ZAZABI_PART_MIDDLE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MiddleShellSwallowingSamus, 55, 0)
};

static const s16 sZazabiMultiOam_EatingSamus4_3_Frame1[ZAZABI_PART_LOWER_SHELL][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontLanding, 72, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackHidden, 92, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairEatingSamus, -8, 0),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(Zazabi_372970, 16, 0),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, 12, 0),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeEatingSamus, 12, 0),
    [ZAZABI_PART_UPPER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_UpperShellEatingSamus4, 44, 0),
    [ZAZABI_PART_MIDDLE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MiddleShellSwallowingSamus, 58, 0)
};

static const s16 sZazabiMultiOam_EatingSamus4_3_Frame2[ZAZABI_PART_LOWER_SHELL][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontIdle, 73, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackHidden, 92, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairEatingSamus, -7, 0),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(Zazabi_372970, 17, 0),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, 13, 0),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeEatingSamus, 13, 0),
    [ZAZABI_PART_UPPER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_UpperShellEatingSamus4, 45, 0),
    [ZAZABI_PART_MIDDLE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MiddleShellSwallowingSamus, 60, 0)
};

static const s16 sZazabiMultiOam_EatingSamus5_3_Frame0[ZAZABI_PART_LOWER_SHELL][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontCrawlingLow, 71, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackHidden, 92, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairEatingSamus, -10, 0),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellSwallowingSamusLow, 14, 0),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, 10, 0),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeEatingSamus, 10, 0),
    [ZAZABI_PART_UPPER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_UpperShellEatingSamus5, 41, 0),
    [ZAZABI_PART_MIDDLE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MiddleShellIdle, 55, 0)
};

static const s16 sZazabiMultiOam_EatingSamus5_3_Frame1[ZAZABI_PART_LOWER_SHELL][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontLanding, 72, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackHidden, 92, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairEatingSamus, -8, 0),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellSwallowingSamusLow, 16, 0),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, 12, 0),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeEatingSamus, 12, 0),
    [ZAZABI_PART_UPPER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_UpperShellEatingSamus5, 44, 0),
    [ZAZABI_PART_MIDDLE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MiddleShellIdle, 58, 0)
};

static const s16 sZazabiMultiOam_EatingSamus5_3_Frame2[ZAZABI_PART_LOWER_SHELL][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontIdle, 73, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackHidden, 92, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairEatingSamus, -7, 0),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellSwallowingSamusLow, 17, 0),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, 13, 0),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeEatingSamus, 13, 0),
    [ZAZABI_PART_UPPER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_UpperShellEatingSamus5, 45, 0),
    [ZAZABI_PART_MIDDLE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MiddleShellIdle, 60, 0)
};

static const s16 sZazabi_36c828_Frame0[ZAZABI_PART_LOWER_SHELL][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontCrawlingLow, 71, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackHidden, 92, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairEatingSamus, -10, 0),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(Zazabi_372950, 14, 0),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, 10, 0),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeEatingSamus, 10, 0),
    [ZAZABI_PART_UPPER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_UpperShellSwallowingSamus, 41, 0),
    [ZAZABI_PART_MIDDLE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MiddleShellEatingSamus2, 55, 0)
};

static const s16 sZazabi_36c828_Frame1[ZAZABI_PART_LOWER_SHELL][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontLanding, 72, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackHidden, 92, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairEatingSamus, -8, 0),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(Zazabi_372950, 16, 0),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, 12, 0),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeEatingSamus, 12, 0),
    [ZAZABI_PART_UPPER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_UpperShellSwallowingSamus, 44, 0),
    [ZAZABI_PART_MIDDLE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MiddleShellEatingSamus2, 58, 0)
};

static const s16 sZazabi_36c828_Frame2[ZAZABI_PART_LOWER_SHELL][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontIdle, 73, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackHidden, 92, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairEatingSamus, -7, 0),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(Zazabi_372950, 17, 0),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, 13, 0),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeEatingSamus, 13, 0),
    [ZAZABI_PART_UPPER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_UpperShellSwallowingSamus, 45, 0),
    [ZAZABI_PART_MIDDLE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MiddleShellEatingSamus2, 60, 0)
};

static const s16 sZazabi_36c850_Frame0[ZAZABI_PART_LOWER_SHELL][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontCrawlingLow, 71, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackHidden, 92, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairEatingSamus, -10, 0),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellIdle, 14, 0),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, 10, 0),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeEatingSamus, 10, 0),
    [ZAZABI_PART_UPPER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_UpperShellIdle, 41, 0),
    [ZAZABI_PART_MIDDLE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MiddleShellSwallowingSamus, 55, 0)
};

static const s16 sZazabi_36c850_Frame1[ZAZABI_PART_LOWER_SHELL][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontLanding, 72, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackHidden, 92, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairEatingSamus, -8, 0),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellIdle, 16, 0),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, 12, 0),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeEatingSamus, 12, 0),
    [ZAZABI_PART_UPPER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_UpperShellIdle, 44, 0),
    [ZAZABI_PART_MIDDLE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MiddleShellSwallowingSamus, 58, 0)
};

static const s16 sZazabi_36c850_Frame2[ZAZABI_PART_LOWER_SHELL][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontIdle, 73, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackHidden, 92, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairEatingSamus, -7, 0),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellIdle, 17, 0),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, 13, 0),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeEatingSamus, 13, 0),
    [ZAZABI_PART_UPPER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_UpperShellIdle, 45, 0),
    [ZAZABI_PART_MIDDLE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MiddleShellSwallowingSamus, 60, 0)
};

static const s16 sZazabiMultiOam_JumpingBigRight3_Frame0[ZAZABI_PART_LOWER_SHELL][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontCrawlingHalted, 66, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackHidden, 92, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairJumpingRight_1, -16, -8),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellJumpingRight, 8, -8),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, 4, 0),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeJumpingRight, 8, -8),
    [ZAZABI_PART_UPPER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_UpperShellJumpingRight, 35, -1),
    [ZAZABI_PART_MIDDLE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MiddleShellIdle, 49, 0)
};

static const s16 sZazabiMultiOam_JumpingBigRight3_Frame1[ZAZABI_PART_LOWER_SHELL][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontCrawlingHalted, 67, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackHidden, 92, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairJumpingRight_2, -21, -10),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellJumpingRight, 3, -9),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, 0, 0),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeJumpingRight, 3, -9),
    [ZAZABI_PART_UPPER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_UpperShellJumpingRight, 32, -1),
    [ZAZABI_PART_MIDDLE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MiddleShellIdle, 49, 0)
};

static const s16 sZazabiMultiOam_JumpingBigRight3_Frame2[ZAZABI_PART_LOWER_SHELL][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontCrawlingHalted, 67, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackHidden, 92, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairJumpingRight_3, -17, -9),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellJumpingRight, 7, -8),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, 3, 0),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeJumpingRight, 7, -8),
    [ZAZABI_PART_UPPER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_UpperShellJumpingRight, 34, -1),
    [ZAZABI_PART_MIDDLE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MiddleShellIdle, 49, 0)
};

static const s16 sZazabiMultiOam_FallingMouthOpenedLeft3_Frame2[ZAZABI_PART_LOWER_SHELL][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontOpening_1, 62, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackOpening_1, 62, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairLandingLeft_1, -11, -9),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellJumpingRight, 13, -8),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, 9, -8),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeJumpingRight, 13, -8),
    [ZAZABI_PART_UPPER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_UpperShellJumpingRight, 37, -1),
    [ZAZABI_PART_MIDDLE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MiddleShellIdle, 48, 0)
};

static const s16 sZazabiMultiOam_FallingMouthOpenedLeft3_Frame3[ZAZABI_PART_LOWER_SHELL][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontOpening_2, 54, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackOpening_2, 54, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairLandingLeft_1, -9, -9),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellJumpingRight, 15, -8),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, 11, -8),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeJumpingRight, 15, -8),
    [ZAZABI_PART_UPPER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_UpperShellJumpingRight, 34, -1),
    [ZAZABI_PART_MIDDLE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MiddleShellIdle, 45, 0)
};

static const s16 sZazabiMultiOam_FallingMouthOpenedLeft3_Frame4[ZAZABI_PART_LOWER_SHELL][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontOpened, 49, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackHidden, 92, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairLandingLeft_1, -7, -9),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellJumpingRight, 17, -8),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, 13, -8),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeJumpingRight, 17, -8),
    [ZAZABI_PART_UPPER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_UpperShellJumpingRight, 36, -1),
    [ZAZABI_PART_MIDDLE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MiddleShellIdle, 43, 0)
};

static const s16 sZazabiMultiOam_FallingMouthOpenedLeft3_Frame5[ZAZABI_PART_LOWER_SHELL][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontOpening_2, 54, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackOpening_2, 54, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairLandingLeft_2, 4, -3),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellJumpingSmallRight, 28, -2),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, 24, -2),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeLandingRight, 28, -2),
    [ZAZABI_PART_UPPER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_UpperShellIdle, 48, 0),
    [ZAZABI_PART_MIDDLE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MiddleShellIdle, 50, 0)
};

static const s16 sZazabiMultiOam_JumpingBigLeft3_Frame0[ZAZABI_PART_LOWER_SHELL][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontCrawlingHalted, 66, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackHidden, 92, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairJumpingLeft_1, -16, 8),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellJumpingLeft, 8, 8),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, 4, 0),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeJumpingLeft, 8, 8),
    [ZAZABI_PART_UPPER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_UpperShellJumpingLeft, 35, 1),
    [ZAZABI_PART_MIDDLE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MiddleShellIdle, 49, 0)
};

static const s16 sZazabiMultiOam_JumpingBigLeft3_Frame1[ZAZABI_PART_LOWER_SHELL][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontCrawlingHalted, 67, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackHidden, 92, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairJumpingLeft_2, -21, 10),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellJumpingLeft, 3, 9),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, 0, 0),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeJumpingLeft, 3, 9),
    [ZAZABI_PART_UPPER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_UpperShellJumpingLeft, 32, 1),
    [ZAZABI_PART_MIDDLE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MiddleShellIdle, 49, 0)
};

static const s16 sZazabiMultiOam_JumpingBigLeft3_Frame2[ZAZABI_PART_LOWER_SHELL][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontCrawlingHalted, 67, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackHidden, 92, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairJumpingLeft_3, -17, 9),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellJumpingLeft, 7, 8),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, 3, 0),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeJumpingLeft, 7, 8),
    [ZAZABI_PART_UPPER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_UpperShellJumpingLeft, 34, 1),
    [ZAZABI_PART_MIDDLE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MiddleShellIdle, 49, 0)
};

static const s16 sZazabiMultiOam_FallingMouthOpenedRight3_Frame2[ZAZABI_PART_LOWER_SHELL][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontOpening_1, 62, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackOpening_1, 62, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairLandingRight_1, -11, 9),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellJumpingLeft, 13, 8),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, 9, 0),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeJumpingLeft, 13, 8),
    [ZAZABI_PART_UPPER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_UpperShellJumpingLeft, 37, 1),
    [ZAZABI_PART_MIDDLE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MiddleShellIdle, 48, 0)
};

static const s16 sZazabiMultiOam_FallingMouthOpenedRight3_Frame3[ZAZABI_PART_LOWER_SHELL][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontOpening_2, 54, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackOpening_2, 54, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairLandingRight_1, -9, 9),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellJumpingLeft, 15, 8),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, 11, 0),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeJumpingLeft, 15, 8),
    [ZAZABI_PART_UPPER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_UpperShellJumpingLeft, 34, 1),
    [ZAZABI_PART_MIDDLE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MiddleShellIdle, 45, 0)
};

static const s16 sZazabiMultiOam_FallingMouthOpenedRight3_Frame4[ZAZABI_PART_LOWER_SHELL][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontOpened, 49, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackHidden, 92, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairLandingRight_1, -7, 9),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellJumpingLeft, 17, 8),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, 13, 8),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeJumpingLeft, 17, 8),
    [ZAZABI_PART_UPPER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_UpperShellJumpingLeft, 36, 1),
    [ZAZABI_PART_MIDDLE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MiddleShellIdle, 43, 0)
};

static const s16 sZazabiMultiOam_FallingMouthOpenedRight3_Frame5[ZAZABI_PART_LOWER_SHELL][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontOpening_2, 54, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackOpening_2, 54, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairLandingRight_2, 4, 3),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellJumpingSmallLeft, 28, 2),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, 24, 2),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeLandingLeft, 28, 2),
    [ZAZABI_PART_UPPER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_UpperShellIdle, 48, 0),
    [ZAZABI_PART_MIDDLE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MiddleShellIdle, 50, 0)
};

static const s16 sZazabiMultiOam_FallingLeft3_Frame4[ZAZABI_PART_LOWER_SHELL][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontCrawlingHalted, 49, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackHidden, 92, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairLandingLeft_1, -7, -9),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellJumpingRight, 17, -8),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, 13, -8),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeJumpingRight, 17, -8),
    [ZAZABI_PART_UPPER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_UpperShellJumpingRight, 36, -1),
    [ZAZABI_PART_MIDDLE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MiddleShellIdle, 43, 0)
};

static const s16 sZazabiMultiOam_FallingRight3_Frame4[ZAZABI_PART_LOWER_SHELL][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontCrawlingHalted, 49, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackHidden, 92, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairLandingRight_1, -7, 9),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellJumpingLeft, 17, 8),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, 13, 8),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeJumpingLeft, 17, 8),
    [ZAZABI_PART_UPPER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_UpperShellJumpingLeft, 36, 1),
    [ZAZABI_PART_MIDDLE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MiddleShellIdle, 43, 0)
};

static const s16 sZazabiMultiOam_FallingSlow3_Frame0[ZAZABI_PART_LOWER_SHELL][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontCrawlingHalted, 62, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackHidden, 92, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairStill, -12, 0),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellIdle, 12, 0),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, 8, 0),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeIdle, 8, 0),
    [ZAZABI_PART_UPPER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_UpperShellIdle, 37, 0),
    [ZAZABI_PART_MIDDLE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MiddleShellIdle, 48, 0)
};

static const s16 sZazabiMultiOam_FallingSlow3_Frame1[ZAZABI_PART_LOWER_SHELL][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontCrawlingHalted, 54, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackHidden, 92, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairStill, -10, 0),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellIdle, 14, 0),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, 10, 0),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeIdle, 10, 0),
    [ZAZABI_PART_UPPER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_UpperShellIdle, 35, 0),
    [ZAZABI_PART_MIDDLE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MiddleShellIdle, 44, 0)
};

static const s16 sZazabiMultiOam_FallingSlow3_Frame3[ZAZABI_PART_LOWER_SHELL][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontCrawlingHalted, 54, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackHidden, 92, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairStill, 3, 0),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellIdle, 27, 0),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, 23, 0),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeIdle, 23, 0),
    [ZAZABI_PART_UPPER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_UpperShellIdle, 47, 0),
    [ZAZABI_PART_MIDDLE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MiddleShellIdle, 49, 0)
};

static const s16 sZazabiMultiOam_FallingSlow3_Frame4[ZAZABI_PART_LOWER_SHELL][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontCrawlingHalted, 62, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackHidden, 92, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairStill, 9, 0),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellIdle, 33, 0),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, 29, 0),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeIdle, 29, 0),
    [ZAZABI_PART_UPPER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_UpperShellIdle, 52, 0),
    [ZAZABI_PART_MIDDLE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MiddleShellIdle, 58, 0)
};

static const s16 sZazabiMultiOam_FallingLeft3_Frame2[ZAZABI_PART_LOWER_SHELL][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontCrawlingHalted, 62, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackHidden, 92, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairLandingLeft_1, -11, -9),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellJumpingRight, 13, -8),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, 9, -8),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeJumpingRight, 13, -8),
    [ZAZABI_PART_UPPER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_UpperShellJumpingRight, 37, -1),
    [ZAZABI_PART_MIDDLE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MiddleShellIdle, 48, 0)
};

static const s16 sZazabiMultiOam_FallingLeft3_Frame3[ZAZABI_PART_LOWER_SHELL][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontCrawlingHalted, 54, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackHidden, 92, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairLandingLeft_1, -9, -9),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellJumpingRight, 15, -8),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, 11, -8),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeJumpingRight, 15, -8),
    [ZAZABI_PART_UPPER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_UpperShellJumpingRight, 34, -1),
    [ZAZABI_PART_MIDDLE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MiddleShellIdle, 45, 0)
};

static const s16 sZazabiMultiOam_FallingLeft3_Frame5[ZAZABI_PART_LOWER_SHELL][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontCrawlingHalted, 54, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackHidden, 92, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairLandingLeft_2, 4, -3),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellJumpingSmallRight, 28, -2),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, 24, -2),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeLandingRight, 28, -2),
    [ZAZABI_PART_UPPER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_UpperShellIdle, 48, 0),
    [ZAZABI_PART_MIDDLE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MiddleShellIdle, 50, 0)
};

static const s16 sZazabiMultiOam_FallingRight3_Frame2[ZAZABI_PART_LOWER_SHELL][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontCrawlingHalted, 62, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackHidden, 92, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairLandingRight_1, -11, 9),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellJumpingLeft, 13, 8),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, 9, 0),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeJumpingLeft, 13, 8),
    [ZAZABI_PART_UPPER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_UpperShellJumpingLeft, 37, 1),
    [ZAZABI_PART_MIDDLE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MiddleShellIdle, 48, 0)
};

static const s16 sZazabiMultiOam_FallingRight3_Frame3[ZAZABI_PART_LOWER_SHELL][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontCrawlingHalted, 54, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackHidden, 92, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairLandingRight_1, -9, 9),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellJumpingLeft, 15, 8),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, 11, 0),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeJumpingLeft, 15, 8),
    [ZAZABI_PART_UPPER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_UpperShellJumpingLeft, 34, 1),
    [ZAZABI_PART_MIDDLE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MiddleShellIdle, 45, 0)
};

static const s16 sZazabiMultiOam_FallingRight3_Frame5[ZAZABI_PART_LOWER_SHELL][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontCrawlingHalted, 54, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackHidden, 92, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairLandingRight_2, 4, 3),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellJumpingSmallLeft, 28, 2),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, 24, 2),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeLandingLeft, 28, 2),
    [ZAZABI_PART_UPPER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_UpperShellIdle, 48, 0),
    [ZAZABI_PART_MIDDLE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MiddleShellIdle, 50, 0)
};


const struct MultiSpriteData sZazabiMultiOam_Idle3[5] = {
    [0] = {
        .pData = sZazabiMultiOam_Idle3_Frame0,
        .timer = 13
    },
    [1] = {
        .pData = sZazabiMultiOam_Idle3_Frame1,
        .timer = 13
    },
    [2] = {
        .pData = sZazabiMultiOam_Idle3_Frame2,
        .timer = 13
    },
    [3] = {
        .pData = sZazabiMultiOam_Idle3_Frame1,
        .timer = 13
    },
    [4] = MULTI_SPRITE_DATA_TERMINATOR
};

const struct MultiSpriteData sZazabiMultiOam_Crawling3[9] = {
    [0] = {
        .pData = sZazabiMultiOam_Idle3_Frame2,
        .timer = 7
    },
    [1] = {
        .pData = sZazabiMultiOam_Idle3_Frame1,
        .timer = 7
    },
    [2] = {
        .pData = sZazabiMultiOam_Idle3_Frame0,
        .timer = 7
    },
    [3] = {
        .pData = sZazabiMultiOam_Crawling3_Frame3,
        .timer = 7
    },
    [4] = {
        .pData = sZazabiMultiOam_Crawling3_Frame4,
        .timer = 8
    },
    [5] = {
        .pData = sZazabiMultiOam_Crawling3_Frame3,
        .timer = 7
    },
    [6] = {
        .pData = sZazabiMultiOam_Idle3_Frame0,
        .timer = 7
    },
    [7] = {
        .pData = sZazabiMultiOam_Idle3_Frame1,
        .timer = 7
    },
    [8] = MULTI_SPRITE_DATA_TERMINATOR
};

const struct MultiSpriteData sZazabiMultiOam_JumpWarning3[3] = {
    [0] = {
        .pData = sZazabiMultiOam_JumpWarning3_Frame0,
        .timer = 7
    },
    [1] = {
        .pData = sZazabiMultiOam_JumpWarning3_Frame1,
        .timer = 13
    },
    [2] = MULTI_SPRITE_DATA_TERMINATOR
};

const struct MultiSpriteData sZazabiMultiOam_JumpingSmall3[4] = {
    [0] = {
        .pData = sZazabiMultiOam_JumpingSmall3_Frame0,
        .timer = 3
    },
    [1] = {
        .pData = sZazabiMultiOam_JumpingSmall3_Frame1,
        .timer = 7
    },
    [2] = {
        .pData = sZazabiMultiOam_JumpingSmall3_Frame2,
        .timer = 255
    },
    [3] = MULTI_SPRITE_DATA_TERMINATOR
};

const struct MultiSpriteData sZazabiMultiOam_JumpingBigRight3[4] = {
    [0] = {
        .pData = sZazabiMultiOam_JumpingBigRight3_Frame0,
        .timer = 3
    },
    [1] = {
        .pData = sZazabiMultiOam_JumpingBigRight3_Frame1,
        .timer = 7
    },
    [2] = {
        .pData = sZazabiMultiOam_JumpingBigRight3_Frame2,
        .timer = 255
    },
    [3] = MULTI_SPRITE_DATA_TERMINATOR
};

const struct MultiSpriteData sZazabiMultiOam_JumpingBigLeft3[4] = {
    [0] = {
        .pData = sZazabiMultiOam_JumpingBigLeft3_Frame0,
        .timer = 3
    },
    [1] = {
        .pData = sZazabiMultiOam_JumpingBigLeft3_Frame1,
        .timer = 7
    },
    [2] = {
        .pData = sZazabiMultiOam_JumpingBigLeft3_Frame2,
        .timer = 255
    },
    [3] = MULTI_SPRITE_DATA_TERMINATOR
};

const struct MultiSpriteData sZazabiMultiOam_FallingSlow3[7] = {
    [0] = {
        .pData = sZazabiMultiOam_FallingSlow3_Frame0,
        .timer = 3
    },
    [1] = {
        .pData = sZazabiMultiOam_FallingSlow3_Frame1,
        .timer = 5
    },
    [2] = {
        .pData = sZazabiMultiOam_FallingSlow3_Frame2,
        .timer = 100
    },
    [3] = {
        .pData = sZazabiMultiOam_FallingSlow3_Frame3,
        .timer = 2
    },
    [4] = {
        .pData = sZazabiMultiOam_FallingSlow3_Frame4,
        .timer = 2
    },
    [5] = {
        .pData = sZazabiMultiOam_FallingSlow3_Frame5,
        .timer = 2
    },
    [6] = MULTI_SPRITE_DATA_TERMINATOR
};

const struct MultiSpriteData sZazabiMultiOam_FallingSlowMouthOpened3[7] = {
    [0] = {
        .pData = sZazabiMultiOam_FallingSlowMouthOpened3_Frame0,
        .timer = 3
    },
    [1] = {
        .pData = sZazabiMultiOam_FallingSlowMouthOpened3_Frame1,
        .timer = 5
    },
    [2] = {
        .pData = sZazabiMultiOam_FallingSlowMouthOpened3_Frame2,
        .timer = 100
    },
    [3] = {
        .pData = sZazabiMultiOam_FallingSlowMouthOpened3_Frame3,
        .timer = 2
    },
    [4] = {
        .pData = sZazabiMultiOam_FallingSlowMouthOpened3_Frame4,
        .timer = 2
    },
    [5] = {
        .pData = sZazabiMultiOam_FallingSlow3_Frame5,
        .timer = 2
    },
    [6] = MULTI_SPRITE_DATA_TERMINATOR
};

const struct MultiSpriteData sZazabiMultiOam_FallingLeft3[9] = {
    [0] = {
        .pData = sZazabiMultiOam_JumpingSmall3_Frame2,
        .timer = 3
    },
    [1] = {
        .pData = sZazabiMultiOam_JumpingBigRight3_Frame2,
        .timer = 3
    },
    [2] = {
        .pData = sZazabiMultiOam_FallingLeft3_Frame2,
        .timer = 3
    },
    [3] = {
        .pData = sZazabiMultiOam_FallingLeft3_Frame3,
        .timer = 5
    },
    [4] = {
        .pData = sZazabiMultiOam_FallingLeft3_Frame4,
        .timer = 100
    },
    [5] = {
        .pData = sZazabiMultiOam_FallingLeft3_Frame5,
        .timer = 2
    },
    [6] = {
        .pData = sZazabiMultiOam_FallingSlow3_Frame4,
        .timer = 2
    },
    [7] = {
        .pData = sZazabiMultiOam_FallingSlow3_Frame5,
        .timer = 2
    },
    [8] = MULTI_SPRITE_DATA_TERMINATOR
};

const struct MultiSpriteData sZazabiMultiOam_FallingMouthOpenedLeft3[9] = {
    [0] = {
        .pData = sZazabiMultiOam_JumpingSmall3_Frame2,
        .timer = 3
    },
    [1] = {
        .pData = sZazabiMultiOam_JumpingBigRight3_Frame2,
        .timer = 3
    },
    [2] = {
        .pData = sZazabiMultiOam_FallingMouthOpenedLeft3_Frame2,
        .timer = 3
    },
    [3] = {
        .pData = sZazabiMultiOam_FallingMouthOpenedLeft3_Frame3,
        .timer = 5
    },
    [4] = {
        .pData = sZazabiMultiOam_FallingMouthOpenedLeft3_Frame4,
        .timer = 100
    },
    [5] = {
        .pData = sZazabiMultiOam_FallingMouthOpenedLeft3_Frame5,
        .timer = 2
    },
    [6] = {
        .pData = sZazabiMultiOam_FallingSlowMouthOpened3_Frame4,
        .timer = 2
    },
    [7] = {
        .pData = sZazabiMultiOam_FallingSlow3_Frame5,
        .timer = 2
    },
    [8] = MULTI_SPRITE_DATA_TERMINATOR
};

const struct MultiSpriteData sZazabiMultiOam_FallingRight3[9] = {
    [0] = {
        .pData = sZazabiMultiOam_JumpingSmall3_Frame2,
        .timer = 3
    },
    [1] = {
        .pData = sZazabiMultiOam_JumpingBigLeft3_Frame2,
        .timer = 3
    },
    [2] = {
        .pData = sZazabiMultiOam_FallingRight3_Frame2,
        .timer = 3
    },
    [3] = {
        .pData = sZazabiMultiOam_FallingRight3_Frame3,
        .timer = 5
    },
    [4] = {
        .pData = sZazabiMultiOam_FallingRight3_Frame4,
        .timer = 100
    },
    [5] = {
        .pData = sZazabiMultiOam_FallingRight3_Frame5,
        .timer = 2
    },
    [6] = {
        .pData = sZazabiMultiOam_FallingSlow3_Frame4,
        .timer = 2
    },
    [7] = {
        .pData = sZazabiMultiOam_FallingSlow3_Frame5,
        .timer = 2
    },
    [8] = MULTI_SPRITE_DATA_TERMINATOR
};

const struct MultiSpriteData sZazabiMultiOam_FallingMouthOpenedRight3[9] = {
    [0] = {
        .pData = sZazabiMultiOam_JumpingSmall3_Frame2,
        .timer = 3
    },
    [1] = {
        .pData = sZazabiMultiOam_JumpingBigLeft3_Frame2,
        .timer = 3
    },
    [2] = {
        .pData = sZazabiMultiOam_FallingMouthOpenedRight3_Frame2,
        .timer = 3
    },
    [3] = {
        .pData = sZazabiMultiOam_FallingMouthOpenedRight3_Frame3,
        .timer = 5
    },
    [4] = {
        .pData = sZazabiMultiOam_FallingMouthOpenedRight3_Frame4,
        .timer = 100
    },
    [5] = {
        .pData = sZazabiMultiOam_FallingMouthOpenedRight3_Frame5,
        .timer = 2
    },
    [6] = {
        .pData = sZazabiMultiOam_FallingSlowMouthOpened3_Frame4,
        .timer = 2
    },
    [7] = {
        .pData = sZazabiMultiOam_FallingSlow3_Frame5,
        .timer = 2
    },
    [8] = MULTI_SPRITE_DATA_TERMINATOR
};

const struct MultiSpriteData sZazabiMultiOam_LandingMouthOpen3[7] = {
    [0] = {
        .pData = sZazabiMultiOam_LandingMouthOpen3_Frame0,
        .timer = 10
    },
    [1] = {
        .pData = sZazabiMultiOam_LandingMouthOpen3_Frame1,
        .timer = 3
    },
    [2] = {
        .pData = sZazabiMultiOam_LandingMouthOpen3_Frame2,
        .timer = 3
    },
    [3] = {
        .pData = sZazabiMultiOam_LandingMouthOpen3_Frame3,
        .timer = 5
    },
    [4] = {
        .pData = sZazabiMultiOam_LandingMouthOpen3_Frame4,
        .timer = 5
    },
    [5] = {
        .pData = sZazabiMultiOam_JumpWarning3_Frame0,
        .timer = 7
    },
    [6] = MULTI_SPRITE_DATA_TERMINATOR
};

const struct MultiSpriteData sZazabiMultiOam_Landing3[3] = {
    [0] = {
        .pData = sZazabiMultiOam_LandingMouthOpen3_Frame0,
        .timer = 10
    },
    [1] = {
        .pData = sZazabiMultiOam_LandingMouthOpen3_Frame3,
        .timer = 7
    },
    [2] = MULTI_SPRITE_DATA_TERMINATOR
};

const struct MultiSpriteData sZazabiMultiOam_SpittingSamus3[7] = {
    [0] = {
        .pData = sZazabiMultiOam_JumpingSmall3_Frame0,
        .timer = 7
    },
    [1] = {
        .pData = sZazabiMultiOam_FallingSlowMouthOpened3_Frame0,
        .timer = 4
    },
    [2] = {
        .pData = sZazabiMultiOam_FallingSlowMouthOpened3_Frame1,
        .timer = 7
    },
    [3] = {
        .pData = sZazabiMultiOam_FallingSlowMouthOpened3_Frame3,
        .timer = 3
    },
    [4] = {
        .pData = sZazabiMultiOam_FallingSlowMouthOpened3_Frame4,
        .timer = 3
    },
    [5] = {
        .pData = sZazabiMultiOam_FallingSlow3_Frame5,
        .timer = 3
    },
    [6] = MULTI_SPRITE_DATA_TERMINATOR
};

const struct MultiSpriteData sZazabiMultiOam_LandingAfterSpitting3[5] = {
    [0] = {
        .pData = sZazabiMultiOam_LandingMouthOpen3_Frame0,
        .timer = 10
    },
    [1] = {
        .pData = sZazabiMultiOam_LandingMouthOpen3_Frame1,
        .timer = 3
    },
    [2] = {
        .pData = sZazabiMultiOam_LandingMouthOpen3_Frame3,
        .timer = 5
    },
    [3] = {
        .pData = sZazabiMultiOam_JumpWarning3_Frame0,
        .timer = 7
    },
    [4] = MULTI_SPRITE_DATA_TERMINATOR
};

const struct MultiSpriteData sZazabiMultiOam_EatingSamus3_3[5] = {
    [0] = {
        .pData = sZazabiMultiOam_EatingSamus3_3_Frame0,
        .timer = 13
    },
    [1] = {
        .pData = sZazabiMultiOam_EatingSamus3_3_Frame1,
        .timer = 13
    },
    [2] = {
        .pData = sZazabiMultiOam_EatingSamus3_3_Frame2,
        .timer = 13
    },
    [3] = {
        .pData = sZazabiMultiOam_EatingSamus3_3_Frame1,
        .timer = 13
    },
    [4] = MULTI_SPRITE_DATA_TERMINATOR
};

const struct MultiSpriteData sZazabiMultiOam_EatingSamus4_3[5] = {
    [0] = {
        .pData = sZazabiMultiOam_EatingSamus4_3_Frame0,
        .timer = 13
    },
    [1] = {
        .pData = sZazabiMultiOam_EatingSamus4_3_Frame1,
        .timer = 13
    },
    [2] = {
        .pData = sZazabiMultiOam_EatingSamus4_3_Frame2,
        .timer = 13
    },
    [3] = {
        .pData = sZazabiMultiOam_EatingSamus4_3_Frame1,
        .timer = 13
    },
    [4] = MULTI_SPRITE_DATA_TERMINATOR
};

const struct MultiSpriteData sZazabiMultiOam_EatingSamus5_3[5] = {
    [0] = {
        .pData = sZazabiMultiOam_EatingSamus5_3_Frame0,
        .timer = 13
    },
    [1] = {
        .pData = sZazabiMultiOam_EatingSamus5_3_Frame1,
        .timer = 13
    },
    [2] = {
        .pData = sZazabiMultiOam_EatingSamus5_3_Frame2,
        .timer = 13
    },
    [3] = {
        .pData = sZazabiMultiOam_EatingSamus5_3_Frame1,
        .timer = 13
    },
    [4] = MULTI_SPRITE_DATA_TERMINATOR
};

const struct MultiSpriteData sZazabi_36c828[5] = {
    [0] = {
        .pData = sZazabi_36c828_Frame0,
        .timer = 13
    },
    [1] = {
        .pData = sZazabi_36c828_Frame1,
        .timer = 13
    },
    [2] = {
        .pData = sZazabi_36c828_Frame2,
        .timer = 13
    },
    [3] = {
        .pData = sZazabi_36c828_Frame1,
        .timer = 13
    },
    [4] = MULTI_SPRITE_DATA_TERMINATOR
};

const struct MultiSpriteData sZazabi_36c850[5] = {
    [0] = {
        .pData = sZazabi_36c850_Frame0,
        .timer = 13
    },
    [1] = {
        .pData = sZazabi_36c850_Frame1,
        .timer = 13
    },
    [2] = {
        .pData = sZazabi_36c850_Frame2,
        .timer = 13
    },
    [3] = {
        .pData = sZazabi_36c850_Frame1,
        .timer = 13
    },
    [4] = MULTI_SPRITE_DATA_TERMINATOR
};


static const s16 sZazabiMultiOam_Idle2_Frame2[ZAZABI_PART_MIDDLE_SHELL][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontIdle, 73, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackHidden, 92, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairMoving, 7, 0),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellIdle, 31, 0),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, 27, 0),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeIdle, 27, 0),
    [ZAZABI_PART_UPPER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_UpperShellIdle, 59, 0)
};

static const s16 sZazabiMultiOam_Idle2_Frame1[ZAZABI_PART_MIDDLE_SHELL][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontLanding, 72, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackHidden, 92, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairMoving, 6, 0),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellIdle, 30, 0),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, 26, 0),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeIdle, 26, 0),
    [ZAZABI_PART_UPPER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_UpperShellIdle, 58, 0)
};

static const s16 sZazabiMultiOam_Idle2_Frame0[ZAZABI_PART_MIDDLE_SHELL][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontCrawlingLow, 71, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackHidden, 92, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairMoving, 4, 0),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellIdle, 28, 0),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, 24, 0),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeIdle, 24, 0),
    [ZAZABI_PART_UPPER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_UpperShellIdle, 55, 0)
};

static const s16 sZazabiMultiOam_Crawling2_Frame3[ZAZABI_PART_MIDDLE_SHELL][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontCrawlingHigh, 69, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackHidden, 92, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairMoving, 2, 0),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellIdle, 26, 0),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, 22, 0),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeIdle, 22, 0),
    [ZAZABI_PART_UPPER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_UpperShellIdle, 52, 0)
};

static const s16 sZazabiMultiOam_Crawling2_Frame4[ZAZABI_PART_MIDDLE_SHELL][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontCrawlingHalted, 70, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackHidden, 92, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairMoving, 1, 0),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellIdle, 25, 0),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, 21, 0),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeIdle, 21, 0),
    [ZAZABI_PART_UPPER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_UpperShellIdle, 52, 0)
};

static const s16 sZazabiMultiOam_JumpWarning2_Frame0[ZAZABI_PART_MIDDLE_SHELL][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontLanding, 72, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackHidden, 92, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairStill, 10, 0),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellIdle, 34, 0),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, 30, 0),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeIdle, 30, 0),
    [ZAZABI_PART_UPPER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_UpperShellIdle, 59, 0)
};

static const s16 sZazabiMultiOam_JumpWarning2_Frame1[ZAZABI_PART_MIDDLE_SHELL][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontIdle, 73, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackHidden, 92, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairStill, 19, 0),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellIdle, 43, 0),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, 39, 0),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeIdle, 39, 0),
    [ZAZABI_PART_UPPER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_UpperShellIdle, 62, 0)
};

static const s16 sZazabiMultiOam_JumpingSmall2_Frame0[ZAZABI_PART_MIDDLE_SHELL][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontCrawlingHalted, 66, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackHidden, 92, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairDownLow, -3, 0),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellIdle, 21, 0),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, 17, 0),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeIdle, 17, 0),
    [ZAZABI_PART_UPPER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_UpperShellIdle, 49, 0)
};

static const s16 sZazabiMultiOam_JumpingSmall2_Frame1[ZAZABI_PART_MIDDLE_SHELL][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontCrawlingHalted, 67, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackHidden, 92, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairDownMid, -7, 0),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellIdle, 17, 0),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, 13, 0),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeIdle, 13, 0),
    [ZAZABI_PART_UPPER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_UpperShellIdle, 47, 0)
};

static const s16 sZazabiMultiOam_JumpingSmall2_Frame2[ZAZABI_PART_MIDDLE_SHELL][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontCrawlingHalted, 67, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackHidden, 92, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairDownHigh, -4, 0),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellIdle, 20, 0),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, 16, 0),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeIdle, 16, 0),
    [ZAZABI_PART_UPPER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_UpperShellIdle, 48, 0)
};

static const s16 sZazabiMultiOam_FallingSlowMouthOpened2_Frame0[ZAZABI_PART_MIDDLE_SHELL][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontOpening_1, 62, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackOpening_1, 62, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairStill, 2, 0),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellIdle, 26, 0),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, 22, 0),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeIdle, 22, 0),
    [ZAZABI_PART_UPPER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_UpperShellIdle, 47, 0)
};

static const s16 sZazabiMultiOam_FallingSlowMouthOpened2_Frame1[ZAZABI_PART_MIDDLE_SHELL][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontOpening_2, 54, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackOpening_2, 54, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairStill, 3, 0),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellIdle, 27, 0),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, 23, 0),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeIdle, 23, 0),
    [ZAZABI_PART_UPPER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_UpperShellIdle, 44, 0)
};

static const s16 sZazabiMultiOam_FallingSlowMouthOpened2_Frame2[ZAZABI_PART_MIDDLE_SHELL][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontOpened, 49, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackHidden, 92, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairStill, 7, 0),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellIdle, 31, 0),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, 27, 0),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeIdle, 27, 0),
    [ZAZABI_PART_UPPER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_UpperShellIdle, 44, 0)
};

static const s16 sZazabiMultiOam_FallingSlowMouthOpened2_Frame3[ZAZABI_PART_MIDDLE_SHELL][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontOpening_2, 54, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackOpening_2, 54, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairStill, 13, 0),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellIdle, 37, 0),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, 33, 0),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeIdle, 33, 0),
    [ZAZABI_PART_UPPER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_UpperShellIdle, 53, 0)
};

static const s16 sZazabiMultiOam_FallingSlowMouthOpened2_Frame4[ZAZABI_PART_MIDDLE_SHELL][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontOpening_1, 62, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackOpening_1, 62, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairStill, 17, 0),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellIdle, 41, 0),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, 37, 0),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeIdle, 37, 0),
    [ZAZABI_PART_UPPER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_UpperShellIdle, 54, 0)
};

static const s16 sZazabiMultiOam_FallingSlow2_Frame5[ZAZABI_PART_MIDDLE_SHELL][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontCrawlingHigh, 66, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackHidden, 92, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairStill, 20, 0),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellIdle, 44, 0),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, 40, 0),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeIdle, 40, 0),
    [ZAZABI_PART_UPPER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_UpperShellIdle, 58, 0)
};

static const s16 sZazabiMultiOam_LandingMouthOpen2_Frame0[ZAZABI_PART_MIDDLE_SHELL][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontIdle, 75, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackHidden, 92, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairDownLow, 27, 0),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellIdle, 51, 0),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, 47, 0),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeIdle, 47, 0),
    [ZAZABI_PART_UPPER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_UpperShellIdle, 61, 0)
};

static const s16 sZazabiMultiOam_LandingMouthOpen2_Frame1[ZAZABI_PART_MIDDLE_SHELL][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontLanding, 73, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackHidden, 92, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairDownLow, 17, 0),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellIdle, 41, 0),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, 37, 0),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeIdle, 37, 0),
    [ZAZABI_PART_UPPER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_UpperShellIdle, 61, 0)
};

static const s16 sZazabiMultiOam_LandingMouthOpen2_Frame2[ZAZABI_PART_MIDDLE_SHELL][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontLanding, 73, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackHidden, 92, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairDownMid, 18, 0),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellIdle, 42, 0),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, 38, 0),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeIdle, 38, 0),
    [ZAZABI_PART_UPPER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_UpperShellIdle, 62, 0)
};

static const s16 sZazabiMultiOam_LandingMouthOpen2_Frame3[ZAZABI_PART_MIDDLE_SHELL][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontLanding, 72, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackHidden, 92, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairDownMid, 13, 0),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellIdle, 37, 0),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, 33, 0),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeIdle, 33, 0),
    [ZAZABI_PART_UPPER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_UpperShellIdle, 58, 0)
};

static const s16 sZazabiMultiOam_LandingMouthOpen2_Frame4[ZAZABI_PART_MIDDLE_SHELL][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontLanding, 72, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackHidden, 92, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairDownHigh, 14, 0),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellIdle, 38, 0),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, 34, 0),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeIdle, 34, 0),
    [ZAZABI_PART_UPPER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_UpperShellIdle, 59, 0)
};

static const s16 sZazabiMultiOam_FallingSlow2_Frame2[ZAZABI_PART_MIDDLE_SHELL][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontCrawlingHalted, 49, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackHidden, 92, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairStill, 7, 0),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellIdle, 31, 0),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, 27, 0),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeIdle, 27, 0),
    [ZAZABI_PART_UPPER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_UpperShellIdle, 44, 0)
};

static const s16 sZazabiMultiOam_EatingSamus5_2_Frame0[ZAZABI_PART_MIDDLE_SHELL][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontCrawlingLow, 71, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackHidden, 92, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairEatingSamus, 4, 0),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellSwallowingSamusLow, 28, 0),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, 24, 0),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeEatingSamus, 24, 0),
    [ZAZABI_PART_UPPER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_UpperShellEatingSamus5, 55, 0)
};

static const s16 sZazabiMultiOam_EatingSamus5_2_Frame1[ZAZABI_PART_MIDDLE_SHELL][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontLanding, 72, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackHidden, 92, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairEatingSamus, 6, 0),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellSwallowingSamusLow, 30, 0),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, 26, 0),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeEatingSamus, 26, 0),
    [ZAZABI_PART_UPPER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_UpperShellEatingSamus5, 58, 0)
};

static const s16 sZazabiMultiOam_EatingSamus5_2_Frame2[ZAZABI_PART_MIDDLE_SHELL][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontIdle, 73, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackHidden, 92, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairEatingSamus, 7, 0),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellSwallowingSamusLow, 31, 0),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, 27, 0),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeEatingSamus, 27, 0),
    [ZAZABI_PART_UPPER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_UpperShellEatingSamus5, 59, 0)
};

static const s16 sZazabi_36d4a4_Frame0[ZAZABI_PART_MIDDLE_SHELL][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontCrawlingLow, 71, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackHidden, 92, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairEatingSamus, 4, 0),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(Zazabi_372950, 28, 0),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, 24, 0),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeEatingSamus, 24, 0),
    [ZAZABI_PART_UPPER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_UpperShellSwallowingSamus, 55, 0)
};

static const s16 sZazabi_36d4a4_Frame1[ZAZABI_PART_MIDDLE_SHELL][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontLanding, 72, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackHidden, 92, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairEatingSamus, 6, 0),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(Zazabi_372950, 30, 0),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, 26, 0),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeEatingSamus, 26, 0),
    [ZAZABI_PART_UPPER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_UpperShellSwallowingSamus, 58, 0)
};

static const s16 sZazabi_36d4a4_Frame2[ZAZABI_PART_MIDDLE_SHELL][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontIdle, 73, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackHidden, 92, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairEatingSamus, 7, 0),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(Zazabi_372950, 31, 0),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, 27, 0),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeEatingSamus, 27, 0),
    [ZAZABI_PART_UPPER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_UpperShellSwallowingSamus, 59, 0)
};

static const s16 sZazabiMultiOam_JumpingBigRight2_Frame0[ZAZABI_PART_MIDDLE_SHELL][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontCrawlingHalted, 66, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackHidden, 92, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairJumpingRight_1, -3, -8),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellJumpingRight, 21, -8),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, 17, 0),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeJumpingRight, 21, -8),
    [ZAZABI_PART_UPPER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_UpperShellJumpingRight, 48, -1)
};

static const s16 sZazabiMultiOam_JumpingBigRight2_Frame1[ZAZABI_PART_MIDDLE_SHELL][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontCrawlingHalted, 67, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackHidden, 92, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairJumpingRight_2, -8, -10),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellJumpingRight, 16, -9),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, 13, 0),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeJumpingRight, 16, -9),
    [ZAZABI_PART_UPPER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_UpperShellJumpingRight, 45, -1)
};

static const s16 sZazabiMultiOam_JumpingBigRight2_Frame2[ZAZABI_PART_MIDDLE_SHELL][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontCrawlingHalted, 67, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackHidden, 92, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairJumpingRight_3, -4, -9),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellJumpingRight, 20, -8),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, 16, 0),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeJumpingRight, 20, -8),
    [ZAZABI_PART_UPPER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_UpperShellJumpingRight, 47, -1)
};

static const s16 sZazabiMultiOam_FallingMouthOpenedLeft2_Frame2[ZAZABI_PART_MIDDLE_SHELL][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontOpening_1, 62, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackOpening_1, 62, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairLandingLeft_1, 2, -9),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellJumpingRight, 26, -8),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, 22, -8),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeJumpingRight, 26, -8),
    [ZAZABI_PART_UPPER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_UpperShellJumpingRight, 50, -1)
};

static const s16 sZazabiMultiOam_FallingMouthOpenedLeft2_Frame3[ZAZABI_PART_MIDDLE_SHELL][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontOpening_2, 54, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackOpening_2, 54, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairLandingLeft_1, 4, -9),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellJumpingRight, 28, -8),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, 24, -8),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeJumpingRight, 28, -8),
    [ZAZABI_PART_UPPER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_UpperShellJumpingRight, 47, -1)
};

static const s16 sZazabiMultiOam_FallingMouthOpenedLeft2_Frame4[ZAZABI_PART_MIDDLE_SHELL][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontOpened, 49, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackHidden, 92, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairLandingLeft_1, 6, -9),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellJumpingRight, 30, -8),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, 26, -8),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeJumpingRight, 30, -8),
    [ZAZABI_PART_UPPER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_UpperShellJumpingRight, 49, -1)
};

static const s16 sZazabiMultiOam_FallingMouthOpenedLeft2_Frame5[ZAZABI_PART_MIDDLE_SHELL][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontOpening_2, 54, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackOpening_2, 54, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairLandingLeft_2, 17, -3),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellJumpingSmallRight, 41, -2),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, 37, -2),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeLandingRight, 41, -2),
    [ZAZABI_PART_UPPER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_UpperShellIdle, 51, 0)
};

static const s16 sZazabiMultiOam_JumpingBigLeft2_Frame0[ZAZABI_PART_MIDDLE_SHELL][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontCrawlingHalted, 66, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackHidden, 92, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairJumpingLeft_1, -3, 8),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellJumpingLeft, 21, 8),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, 17, 0),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeJumpingLeft, 21, 8),
    [ZAZABI_PART_UPPER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_UpperShellJumpingLeft, 48, 1)
};

static const s16 sZazabiMultiOam_JumpingBigLeft2_Frame1[ZAZABI_PART_MIDDLE_SHELL][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontCrawlingHalted, 67, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackHidden, 92, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairJumpingLeft_2, -8, 10),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellJumpingLeft, 16, 9),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, 13, 0),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeJumpingLeft, 16, 9),
    [ZAZABI_PART_UPPER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_UpperShellJumpingLeft, 45, 1)
};

static const s16 sZazabiMultiOam_JumpingBigLeft2_Frame2[ZAZABI_PART_MIDDLE_SHELL][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontCrawlingHalted, 67, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackHidden, 92, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairJumpingLeft_3, -4, 9),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellJumpingLeft, 20, 8),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, 16, 0),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeJumpingLeft, 20, 8),
    [ZAZABI_PART_UPPER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_UpperShellJumpingLeft, 47, 1)
};

static const s16 sZazabiMultiOam_FallingMouthOpenedRight2_Frame2[ZAZABI_PART_MIDDLE_SHELL][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontOpening_1, 62, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackOpening_1, 62, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairLandingRight_1, 2, 9),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellJumpingLeft, 26, 8),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, 22, 0),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeJumpingLeft, 26, 8),
    [ZAZABI_PART_UPPER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_UpperShellJumpingLeft, 50, 1)
};

static const s16 sZazabiMultiOam_FallingMouthOpenedRight2_Frame3[ZAZABI_PART_MIDDLE_SHELL][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontOpening_2, 54, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackOpening_2, 54, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairLandingRight_1, 4, 9),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellJumpingLeft, 28, 8),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, 24, 0),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeJumpingLeft, 28, 8),
    [ZAZABI_PART_UPPER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_UpperShellJumpingLeft, 47, 1)
};

static const s16 sZazabiMultiOam_FallingMouthOpenedRight2_Frame4[ZAZABI_PART_MIDDLE_SHELL][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontOpened, 49, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackHidden, 92, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairLandingRight_1, 6, 9),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellJumpingLeft, 30, 8),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, 26, 8),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeJumpingLeft, 30, 8),
    [ZAZABI_PART_UPPER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_UpperShellJumpingLeft, 49, 1)
};

static const s16 sZazabiMultiOam_FallingMouthOpenedRight2_Frame5[ZAZABI_PART_MIDDLE_SHELL][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontOpening_2, 54, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackOpening_2, 54, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairLandingRight_2, 17, 3),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellJumpingSmallLeft, 41, 2),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, 37, 2),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeLandingLeft, 41, 2),
    [ZAZABI_PART_UPPER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_UpperShellIdle, 51, 0)
};

static const s16 sZazabiMultiOam_FallingLeft2_Frame4[ZAZABI_PART_MIDDLE_SHELL][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontCrawlingHalted, 49, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackHidden, 92, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairLandingLeft_1, 6, -9),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellJumpingRight, 30, -8),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, 26, -8),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeJumpingRight, 30, -8),
    [ZAZABI_PART_UPPER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_UpperShellJumpingRight, 49, -1)
};

static const s16 sZazabiMultiOam_FallingRight2_Frame4[ZAZABI_PART_MIDDLE_SHELL][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontCrawlingHalted, 49, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackHidden, 92, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairLandingRight_1, 6, 9),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellJumpingLeft, 30, 8),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, 26, 8),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeJumpingLeft, 30, 8),
    [ZAZABI_PART_UPPER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_UpperShellJumpingLeft, 49, 1)
};

static const s16 sZazabiMultiOam_FallingSlow2_Frame0[ZAZABI_PART_MIDDLE_SHELL][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontCrawlingHalted, 62, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackHidden, 92, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairStill, 2, 0),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellIdle, 26, 0),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, 22, 0),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeIdle, 22, 0),
    [ZAZABI_PART_UPPER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_UpperShellIdle, 47, 0)
};

static const s16 sZazabiMultiOam_FallingSlow2_Frame1[ZAZABI_PART_MIDDLE_SHELL][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontCrawlingHalted, 54, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackHidden, 92, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairStill, 3, 0),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellIdle, 27, 0),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, 23, 0),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeIdle, 23, 0),
    [ZAZABI_PART_UPPER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_UpperShellIdle, 44, 0)
};

static const s16 sZazabiMultiOam_FallingSlow2_Frame3[ZAZABI_PART_MIDDLE_SHELL][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontCrawlingHalted, 54, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackHidden, 92, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairStill, 13, 0),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellIdle, 37, 0),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, 33, 0),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeIdle, 33, 0),
    [ZAZABI_PART_UPPER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_UpperShellIdle, 53, 0)
};

static const s16 sZazabiMultiOam_FallingSlow2_Frame4[ZAZABI_PART_MIDDLE_SHELL][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontCrawlingHalted, 62, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackHidden, 92, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairStill, 17, 0),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellIdle, 41, 0),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, 37, 0),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeIdle, 37, 0),
    [ZAZABI_PART_UPPER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_UpperShellIdle, 54, 0)
};

static const s16 sZazabiMultiOam_FallingLeft2_Frame2[ZAZABI_PART_MIDDLE_SHELL][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontCrawlingHalted, 62, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackHidden, 92, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairLandingLeft_1, 2, -9),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellJumpingRight, 26, -8),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, 22, -8),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeJumpingRight, 26, -8),
    [ZAZABI_PART_UPPER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_UpperShellJumpingRight, 50, -1)
};

static const s16 sZazabiMultiOam_FallingLeft2_Frame3[ZAZABI_PART_MIDDLE_SHELL][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontCrawlingHalted, 54, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackHidden, 92, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairLandingLeft_1, 4, -9),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellJumpingRight, 28, -8),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, 24, -8),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeJumpingRight, 28, -8),
    [ZAZABI_PART_UPPER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_UpperShellJumpingRight, 47, -1)
};

static const s16 sZazabiMultiOam_FallingLeft2_Frame5[ZAZABI_PART_MIDDLE_SHELL][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontCrawlingHalted, 54, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackHidden, 92, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairLandingLeft_2, 17, -3),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellJumpingSmallRight, 41, -2),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, 37, -2),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeLandingRight, 41, -2),
    [ZAZABI_PART_UPPER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_UpperShellIdle, 51, 0)
};

static const s16 sZazabiMultiOam_FallingRight2_Frame2[ZAZABI_PART_MIDDLE_SHELL][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontCrawlingHalted, 62, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackHidden, 92, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairLandingRight_1, 2, 9),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellJumpingLeft, 26, 8),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, 22, 0),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeJumpingLeft, 26, 8),
    [ZAZABI_PART_UPPER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_UpperShellJumpingLeft, 50, 1)
};

static const s16 sZazabiMultiOam_FallingRight2_Frame3[ZAZABI_PART_MIDDLE_SHELL][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontCrawlingHalted, 54, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackHidden, 92, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairLandingRight_1, 4, 9),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellJumpingLeft, 28, 8),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, 24, 0),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeJumpingLeft, 28, 8),
    [ZAZABI_PART_UPPER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_UpperShellJumpingLeft, 47, 1)
};

static const s16 sZazabiMultiOam_FallingRight2_Frame5[ZAZABI_PART_MIDDLE_SHELL][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontCrawlingHalted, 54, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackHidden, 92, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairLandingRight_2, 17, 3),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellJumpingSmallLeft, 41, 2),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, 37, 2),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeLandingLeft, 41, 2),
    [ZAZABI_PART_UPPER_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_UpperShellIdle, 51, 0)
};


const struct MultiSpriteData sZazabiMultiOam_Idle2[5] = {
    [0] = {
        .pData = sZazabiMultiOam_Idle2_Frame0,
        .timer = 11
    },
    [1] = {
        .pData = sZazabiMultiOam_Idle2_Frame1,
        .timer = 11
    },
    [2] = {
        .pData = sZazabiMultiOam_Idle2_Frame2,
        .timer = 11
    },
    [3] = {
        .pData = sZazabiMultiOam_Idle2_Frame1,
        .timer = 11
    },
    [4] = MULTI_SPRITE_DATA_TERMINATOR
};

const struct MultiSpriteData sZazabiMultiOam_Crawling2[9] = {
    [0] = {
        .pData = sZazabiMultiOam_Idle2_Frame2,
        .timer = 5
    },
    [1] = {
        .pData = sZazabiMultiOam_Idle2_Frame1,
        .timer = 5
    },
    [2] = {
        .pData = sZazabiMultiOam_Idle2_Frame0,
        .timer = 5
    },
    [3] = {
        .pData = sZazabiMultiOam_Crawling2_Frame3,
        .timer = 5
    },
    [4] = {
        .pData = sZazabiMultiOam_Crawling2_Frame4,
        .timer = 7
    },
    [5] = {
        .pData = sZazabiMultiOam_Crawling2_Frame3,
        .timer = 5
    },
    [6] = {
        .pData = sZazabiMultiOam_Idle2_Frame0,
        .timer = 5
    },
    [7] = {
        .pData = sZazabiMultiOam_Idle2_Frame1,
        .timer = 5
    },
    [8] = MULTI_SPRITE_DATA_TERMINATOR
};

const struct MultiSpriteData sZazabiMultiOam_JumpWarning2[3] = {
    [0] = {
        .pData = sZazabiMultiOam_JumpWarning2_Frame0,
        .timer = 5
    },
    [1] = {
        .pData = sZazabiMultiOam_JumpWarning2_Frame1,
        .timer = 11
    },
    [2] = MULTI_SPRITE_DATA_TERMINATOR
};

const struct MultiSpriteData sZazabiMultiOam_JumpingSmall2[4] = {
    [0] = {
        .pData = sZazabiMultiOam_JumpingSmall2_Frame0,
        .timer = 3
    },
    [1] = {
        .pData = sZazabiMultiOam_JumpingSmall2_Frame1,
        .timer = 5
    },
    [2] = {
        .pData = sZazabiMultiOam_JumpingSmall2_Frame2,
        .timer = 255
    },
    [3] = MULTI_SPRITE_DATA_TERMINATOR
};

const struct MultiSpriteData sZazabiMultiOam_JumpingBigRight2[4] = {
    [0] = {
        .pData = sZazabiMultiOam_JumpingBigRight2_Frame0,
        .timer = 3
    },
    [1] = {
        .pData = sZazabiMultiOam_JumpingBigRight2_Frame1,
        .timer = 5
    },
    [2] = {
        .pData = sZazabiMultiOam_JumpingBigRight2_Frame2,
        .timer = 255
    },
    [3] = MULTI_SPRITE_DATA_TERMINATOR
};

const struct MultiSpriteData sZazabiMultiOam_JumpingBigLeft2[4] = {
    [0] = {
        .pData = sZazabiMultiOam_JumpingBigLeft2_Frame0,
        .timer = 3
    },
    [1] = {
        .pData = sZazabiMultiOam_JumpingBigLeft2_Frame1,
        .timer = 5
    },
    [2] = {
        .pData = sZazabiMultiOam_JumpingBigLeft2_Frame2,
        .timer = 255
    },
    [3] = MULTI_SPRITE_DATA_TERMINATOR
};

const struct MultiSpriteData sZazabiMultiOam_FallingSlow2[7] = {
    [0] = {
        .pData = sZazabiMultiOam_FallingSlow2_Frame0,
        .timer = 3
    },
    [1] = {
        .pData = sZazabiMultiOam_FallingSlow2_Frame1,
        .timer = 4
    },
    [2] = {
        .pData = sZazabiMultiOam_FallingSlow2_Frame2,
        .timer = 100
    },
    [3] = {
        .pData = sZazabiMultiOam_FallingSlow2_Frame3,
        .timer = 2
    },
    [4] = {
        .pData = sZazabiMultiOam_FallingSlow2_Frame4,
        .timer = 2
    },
    [5] = {
        .pData = sZazabiMultiOam_FallingSlow2_Frame5,
        .timer = 2
    },
    [6] = MULTI_SPRITE_DATA_TERMINATOR
};

const struct MultiSpriteData sZazabiMultiOam_FallingSlowMouthOpened2[7] = {
    [0] = {
        .pData = sZazabiMultiOam_FallingSlowMouthOpened2_Frame0,
        .timer = 3
    },
    [1] = {
        .pData = sZazabiMultiOam_FallingSlowMouthOpened2_Frame1,
        .timer = 4
    },
    [2] = {
        .pData = sZazabiMultiOam_FallingSlowMouthOpened2_Frame2,
        .timer = 100
    },
    [3] = {
        .pData = sZazabiMultiOam_FallingSlowMouthOpened2_Frame3,
        .timer = 2
    },
    [4] = {
        .pData = sZazabiMultiOam_FallingSlowMouthOpened2_Frame4,
        .timer = 2
    },
    [5] = {
        .pData = sZazabiMultiOam_FallingSlow2_Frame5,
        .timer = 2
    },
    [6] = MULTI_SPRITE_DATA_TERMINATOR
};

const struct MultiSpriteData sZazabiMultiOam_FallingLeft2[9] = {
    [0] = {
        .pData = sZazabiMultiOam_JumpingSmall2_Frame2,
        .timer = 3
    },
    [1] = {
        .pData = sZazabiMultiOam_JumpingBigRight2_Frame2,
        .timer = 3
    },
    [2] = {
        .pData = sZazabiMultiOam_FallingLeft2_Frame2,
        .timer = 3
    },
    [3] = {
        .pData = sZazabiMultiOam_FallingLeft2_Frame3,
        .timer = 4
    },
    [4] = {
        .pData = sZazabiMultiOam_FallingLeft2_Frame4,
        .timer = 100
    },
    [5] = {
        .pData = sZazabiMultiOam_FallingLeft2_Frame5,
        .timer = 2
    },
    [6] = {
        .pData = sZazabiMultiOam_FallingSlow2_Frame4,
        .timer = 2
    },
    [7] = {
        .pData = sZazabiMultiOam_FallingSlow2_Frame5,
        .timer = 2
    },
    [8] = MULTI_SPRITE_DATA_TERMINATOR
};

const struct MultiSpriteData sZazabiMultiOam_FallingMouthOpenedLeft2[9] = {
    [0] = {
        .pData = sZazabiMultiOam_JumpingSmall2_Frame2,
        .timer = 3
    },
    [1] = {
        .pData = sZazabiMultiOam_JumpingBigRight2_Frame2,
        .timer = 3
    },
    [2] = {
        .pData = sZazabiMultiOam_FallingMouthOpenedLeft2_Frame2,
        .timer = 3
    },
    [3] = {
        .pData = sZazabiMultiOam_FallingMouthOpenedLeft2_Frame3,
        .timer = 4
    },
    [4] = {
        .pData = sZazabiMultiOam_FallingMouthOpenedLeft2_Frame4,
        .timer = 100
    },
    [5] = {
        .pData = sZazabiMultiOam_FallingMouthOpenedLeft2_Frame5,
        .timer = 2
    },
    [6] = {
        .pData = sZazabiMultiOam_FallingSlowMouthOpened2_Frame4,
        .timer = 2
    },
    [7] = {
        .pData = sZazabiMultiOam_FallingSlow2_Frame5,
        .timer = 2
    },
    [8] = MULTI_SPRITE_DATA_TERMINATOR
};

const struct MultiSpriteData sZazabiMultiOam_FallingRight2[9] = {
    [0] = {
        .pData = sZazabiMultiOam_JumpingSmall2_Frame2,
        .timer = 3
    },
    [1] = {
        .pData = sZazabiMultiOam_JumpingBigLeft2_Frame2,
        .timer = 3
    },
    [2] = {
        .pData = sZazabiMultiOam_FallingRight2_Frame2,
        .timer = 3
    },
    [3] = {
        .pData = sZazabiMultiOam_FallingRight2_Frame3,
        .timer = 4
    },
    [4] = {
        .pData = sZazabiMultiOam_FallingRight2_Frame4,
        .timer = 100
    },
    [5] = {
        .pData = sZazabiMultiOam_FallingRight2_Frame5,
        .timer = 2
    },
    [6] = {
        .pData = sZazabiMultiOam_FallingSlow2_Frame4,
        .timer = 2
    },
    [7] = {
        .pData = sZazabiMultiOam_FallingSlow2_Frame5,
        .timer = 2
    },
    [8] = MULTI_SPRITE_DATA_TERMINATOR
};

const struct MultiSpriteData sZazabiMultiOam_FallingMouthOpenedRight2[9] = {
    [0] = {
        .pData = sZazabiMultiOam_JumpingSmall2_Frame2,
        .timer = 3
    },
    [1] = {
        .pData = sZazabiMultiOam_JumpingBigLeft2_Frame2,
        .timer = 3
    },
    [2] = {
        .pData = sZazabiMultiOam_FallingMouthOpenedRight2_Frame2,
        .timer = 3
    },
    [3] = {
        .pData = sZazabiMultiOam_FallingMouthOpenedRight2_Frame3,
        .timer = 4
    },
    [4] = {
        .pData = sZazabiMultiOam_FallingMouthOpenedRight2_Frame4,
        .timer = 100
    },
    [5] = {
        .pData = sZazabiMultiOam_FallingMouthOpenedRight2_Frame5,
        .timer = 2
    },
    [6] = {
        .pData = sZazabiMultiOam_FallingSlowMouthOpened2_Frame4,
        .timer = 2
    },
    [7] = {
        .pData = sZazabiMultiOam_FallingSlow2_Frame5,
        .timer = 2
    },
    [8] = MULTI_SPRITE_DATA_TERMINATOR
};

const struct MultiSpriteData sZazabiMultiOam_LandingMouthOpen2[7] = {
    [0] = {
        .pData = sZazabiMultiOam_LandingMouthOpen2_Frame0,
        .timer = 8
    },
    [1] = {
        .pData = sZazabiMultiOam_LandingMouthOpen2_Frame1,
        .timer = 3
    },
    [2] = {
        .pData = sZazabiMultiOam_LandingMouthOpen2_Frame2,
        .timer = 3
    },
    [3] = {
        .pData = sZazabiMultiOam_LandingMouthOpen2_Frame3,
        .timer = 4
    },
    [4] = {
        .pData = sZazabiMultiOam_LandingMouthOpen2_Frame4,
        .timer = 4
    },
    [5] = {
        .pData = sZazabiMultiOam_JumpWarning2_Frame0,
        .timer = 5
    },
    [6] = MULTI_SPRITE_DATA_TERMINATOR
};

const struct MultiSpriteData sZazabiMultiOam_Landing2[3] = {
    [0] = {
        .pData = sZazabiMultiOam_LandingMouthOpen2_Frame0,
        .timer = 8
    },
    [1] = {
        .pData = sZazabiMultiOam_LandingMouthOpen2_Frame3,
        .timer = 5
    },
    [2] = MULTI_SPRITE_DATA_TERMINATOR
};

const struct MultiSpriteData sZazabiMultiOam_SpittingSamus2[7] = {
    [0] = {
        .pData = sZazabiMultiOam_JumpingSmall2_Frame0,
        .timer = 5
    },
    [1] = {
        .pData = sZazabiMultiOam_FallingSlowMouthOpened2_Frame0,
        .timer = 4
    },
    [2] = {
        .pData = sZazabiMultiOam_FallingSlowMouthOpened2_Frame1,
        .timer = 5
    },
    [3] = {
        .pData = sZazabiMultiOam_FallingSlowMouthOpened2_Frame3,
        .timer = 2
    },
    [4] = {
        .pData = sZazabiMultiOam_FallingSlowMouthOpened2_Frame4,
        .timer = 2
    },
    [5] = {
        .pData = sZazabiMultiOam_FallingSlow2_Frame5,
        .timer = 3
    },
    [6] = MULTI_SPRITE_DATA_TERMINATOR
};

const struct MultiSpriteData sZazabiMultiOam_LandingAfterSpitting2[5] = {
    [0] = {
        .pData = sZazabiMultiOam_LandingMouthOpen2_Frame0,
        .timer = 8
    },
    [1] = {
        .pData = sZazabiMultiOam_LandingMouthOpen2_Frame1,
        .timer = 3
    },
    [2] = {
        .pData = sZazabiMultiOam_LandingMouthOpen2_Frame3,
        .timer = 4
    },
    [3] = {
        .pData = sZazabiMultiOam_JumpWarning2_Frame0,
        .timer = 5
    },
    [4] = MULTI_SPRITE_DATA_TERMINATOR
};

const struct MultiSpriteData sZazabiMultiOam_EatingSamus5_2[5] = {
    [0] = {
        .pData = sZazabiMultiOam_EatingSamus5_2_Frame0,
        .timer = 11
    },
    [1] = {
        .pData = sZazabiMultiOam_EatingSamus5_2_Frame1,
        .timer = 11
    },
    [2] = {
        .pData = sZazabiMultiOam_EatingSamus5_2_Frame2,
        .timer = 11
    },
    [3] = {
        .pData = sZazabiMultiOam_EatingSamus5_2_Frame1,
        .timer = 11
    },
    [4] = MULTI_SPRITE_DATA_TERMINATOR
};

const struct MultiSpriteData sZazabi_36d4a4[5] = {
    [0] = {
        .pData = sZazabi_36d4a4_Frame0,
        .timer = 11
    },
    [1] = {
        .pData = sZazabi_36d4a4_Frame1,
        .timer = 11
    },
    [2] = {
        .pData = sZazabi_36d4a4_Frame2,
        .timer = 11
    },
    [3] = {
        .pData = sZazabi_36d4a4_Frame1,
        .timer = 11
    },
    [4] = MULTI_SPRITE_DATA_TERMINATOR
};


static const s16 sZazabiMultiOam_Idle1_Frame2[ZAZABI_PART_UPPER_SHELL][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontIdle, 73, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackHidden, 92, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairMoving, 23, 0),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellIdle, 47, 0),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, 43, 0),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeIdle, 43, 0)
};

static const s16 sZazabiMultiOam_Idle1_Frame1[ZAZABI_PART_UPPER_SHELL][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontLanding, 72, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackHidden, 92, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairMoving, 22, 0),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellIdle, 46, 0),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, 42, 0),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeIdle, 42, 0)
};

static const s16 sZazabiMultiOam_Idle1_Frame0[ZAZABI_PART_UPPER_SHELL][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontCrawlingLow, 71, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackHidden, 92, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairMoving, 20, 0),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellIdle, 44, 0),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, 40, 0),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeIdle, 40, 0)
};

static const s16 sZazabiMultiOam_Crawling1_Frame3[ZAZABI_PART_UPPER_SHELL][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontCrawlingHigh, 69, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackHidden, 92, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairMoving, 18, 0),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellIdle, 42, 0),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, 38, 0),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeIdle, 38, 0)
};

static const s16 sZazabiMultiOam_Crawling1_Frame4[ZAZABI_PART_UPPER_SHELL][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontCrawlingHalted, 70, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackHidden, 92, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairMoving, 17, 0),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellIdle, 41, 0),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, 37, 0),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeIdle, 37, 0)
};

static const s16 sZazabiMultiOam_JumpWarning1_Frame0[ZAZABI_PART_UPPER_SHELL][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontLanding, 72, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackHidden, 92, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairStill, 22, 0),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellIdle, 46, 0),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, 42, 0),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeIdle, 42, 0)
};

static const s16 sZazabiMultiOam_JumpWarning1_Frame1[ZAZABI_PART_UPPER_SHELL][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontIdle, 73, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackHidden, 92, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairStill, 26, 0),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellIdle, 50, 0),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, 46, 0),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeIdle, 46, 0)
};

static const s16 sZazabiMultiOam_JumpingSmall1_Frame0[ZAZABI_PART_UPPER_SHELL][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontCrawlingHalted, 66, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackHidden, 92, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairDownLow, 13, 0),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellIdle, 37, 0),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, 33, 0),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeIdle, 33, 0)
};

static const s16 sZazabiMultiOam_JumpingSmall1_Frame1[ZAZABI_PART_UPPER_SHELL][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontCrawlingHalted, 67, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackHidden, 92, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairDownMid, 12, 0),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellIdle, 36, 0),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, 32, 0),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeIdle, 32, 0)
};

static const s16 sZazabiMultiOam_JumpingSmall1_Frame2[ZAZABI_PART_UPPER_SHELL][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontCrawlingHalted, 67, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackHidden, 92, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairDownHigh, 14, 0),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellIdle, 38, 0),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, 34, 0),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeIdle, 34, 0)
};

static const s16 sZazabiMultiOam_FallingSlowMouthOpened1_Frame0[ZAZABI_PART_UPPER_SHELL][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontOpening_1, 62, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackOpening_1, 62, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairStill, 13, 0),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellIdle, 37, 0),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, 33, 0),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeIdle, 33, 0)
};

static const s16 sZazabiMultiOam_FallingSlowMouthOpened1_Frame1[ZAZABI_PART_UPPER_SHELL][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontOpening_2, 58, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackOpening_2, 58, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairStill, 10, 0),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellIdle, 34, 0),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, 30, 0),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeIdle, 30, 0)
};

static const s16 sZazabiMultiOam_FallingSlowMouthOpened1_Frame2[ZAZABI_PART_UPPER_SHELL][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontOpening_2, 61, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackOpening_2, 61, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairStill, 13, 0),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellIdle, 37, 0),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, 33, 0),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeIdle, 33, 0)
};

static const s16 sZazabiMultiOam_FallingSlowMouthOpened1_Frame3[ZAZABI_PART_UPPER_SHELL][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontOpening_2, 64, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackOpening_2, 64, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairStill, 21, 0),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellIdle, 45, 0),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, 41, 0),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeIdle, 41, 0)
};

static const s16 sZazabiMultiOam_FallingSlowMouthOpened1_Frame4[ZAZABI_PART_UPPER_SHELL][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontOpening_1, 69, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackOpening_1, 69, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairStill, 24, 0),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellIdle, 48, 0),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, 44, 0),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeIdle, 44, 0)
};

static const s16 sZazabiMultiOam_FallingSlowMouthOpened1_Frame5[ZAZABI_PART_UPPER_SHELL][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontCrawlingHigh, 72, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackHidden, 92, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairStill, 26, 0),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellIdle, 50, 0),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, 46, 0),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeIdle, 46, 0)
};

static const s16 sZazabiMultiOam_LandingMouthOpen1_Frame0[ZAZABI_PART_UPPER_SHELL][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontIdle, 75, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackHidden, 92, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairDownLow, 36, 0),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellIdle, 60, 0),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, 56, 0),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeIdle, 56, 0)
};

static const s16 sZazabiMultiOam_LandingMouthOpen1_Frame1[ZAZABI_PART_UPPER_SHELL][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontLanding, 73, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackHidden, 92, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairDownLow, 31, 0),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellIdle, 55, 0),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, 51, 0),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeIdle, 51, 0)
};

static const s16 sZazabiMultiOam_LandingMouthOpen1_Frame2[ZAZABI_PART_UPPER_SHELL][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontLanding, 73, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackHidden, 92, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairDownMid, 30, 0),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellIdle, 54, 0),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, 50, 0),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeIdle, 50, 0)
};

static const s16 sZazabiMultiOam_LandingMouthOpen1_Frame3[ZAZABI_PART_UPPER_SHELL][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontLanding, 72, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackHidden, 92, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairDownMid, 22, 0),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellIdle, 46, 0),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, 42, 0),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeIdle, 42, 0)
};

static const s16 sZazabiMultiOam_LandingMouthOpen1_Frame4[ZAZABI_PART_UPPER_SHELL][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontLanding, 72, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackHidden, 92, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairDownHigh, 23, 0),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellIdle, 47, 0),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, 43, 0),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeIdle, 43, 0)
};

static const s16 sZazabiMultiOam_JumpingBigRight1_Frame0[ZAZABI_PART_UPPER_SHELL][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontCrawlingHalted, 66, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackHidden, 92, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairJumpingRight_1, 13, -8),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellJumpingRight, 37, -8),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, 33, 0),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeJumpingRight, 37, -8)
};

static const s16 sZazabiMultiOam_JumpingBigRight1_Frame1[ZAZABI_PART_UPPER_SHELL][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontCrawlingHalted, 67, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackHidden, 92, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairJumpingRight_2, 12, -10),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellJumpingRight, 36, -9),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, 33, 0),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeJumpingRight, 36, -9)
};

static const s16 sZazabiMultiOam_JumpingBigRight1_Frame2[ZAZABI_PART_UPPER_SHELL][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontCrawlingHalted, 67, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackHidden, 92, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairJumpingRight_3, 14, -9),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellJumpingRight, 38, -8),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, 34, 0),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeJumpingRight, 38, -8)
};

static const s16 sZazabiMultiOam_FallingMouthOpenedLeft1_Frame2[ZAZABI_PART_UPPER_SHELL][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontOpening_1, 62, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackOpening_1, 62, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairLandingLeft_1, 13, -9),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellJumpingRight, 37, -8),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, 33, -8),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeJumpingRight, 37, -8)
};

static const s16 sZazabiMultiOam_FallingMouthOpenedLeft1_Frame3[ZAZABI_PART_UPPER_SHELL][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontOpening_2, 58, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackOpening_2, 58, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairLandingLeft_1, 10, -9),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellJumpingRight, 34, -8),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, 30, -8),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeJumpingRight, 34, -8)
};

static const s16 sZazabiMultiOam_FallingMouthOpenedLeft1_Frame5[ZAZABI_PART_UPPER_SHELL][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontOpening_2, 64, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackOpening_2, 64, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairLandingLeft_2, 21, -3),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellJumpingSmallRight, 45, -2),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, 41, -2),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeLandingRight, 45, -2)
};

static const s16 sZazabiMultiOam_JumpingBigLeft1_Frame0[ZAZABI_PART_UPPER_SHELL][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontCrawlingHalted, 66, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackHidden, 92, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairJumpingLeft_1, 13, 8),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellJumpingLeft, 37, 8),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, 33, 0),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeJumpingLeft, 37, 8)
};

static const s16 sZazabiMultiOam_JumpingBigLeft1_Frame1[ZAZABI_PART_UPPER_SHELL][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontCrawlingHalted, 67, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackHidden, 92, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairJumpingLeft_2, 12, 10),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellJumpingLeft, 36, 9),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, 33, 0),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeJumpingLeft, 36, 9)
};

static const s16 sZazabiMultiOam_JumpingBigLeft1_Frame2[ZAZABI_PART_UPPER_SHELL][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontCrawlingHalted, 67, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackHidden, 92, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairJumpingLeft_3, 14, 9),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellJumpingLeft, 38, 8),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, 34, 0),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeJumpingLeft, 38, 8)
};

static const s16 sZazabiMultiOam_FallingMouthOpenedRight1_Frame2[ZAZABI_PART_UPPER_SHELL][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontOpening_1, 62, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackOpening_1, 62, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairLandingRight_1, 13, 9),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellJumpingLeft, 37, 8),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, 33, 0),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeJumpingLeft, 37, 8)
};

static const s16 sZazabiMultiOam_FallingMouthOpenedRight1_Frame3[ZAZABI_PART_UPPER_SHELL][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontOpening_2, 58, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackOpening_2, 58, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairLandingRight_1, 10, 9),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellJumpingLeft, 34, 8),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, 30, 0),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeJumpingLeft, 34, 8)
};

static const s16 sZazabiMultiOam_FallingMouthOpenedRight1_Frame5[ZAZABI_PART_UPPER_SHELL][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontOpening_2, 64, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackOpening_2, 64, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairLandingRight_2, 21, 3),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellJumpingSmallLeft, 45, 2),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, 41, 2),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeLandingLeft, 45, 2)
};

static const s16 sZazabiMultiOam_FallingMouthOpenedLeft1_Frame4[ZAZABI_PART_UPPER_SHELL][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontOpening_2, 61, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackOpening_2, 61, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairLandingLeft_1, 13, -9),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellJumpingRight, 37, -8),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, 33, -8),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeJumpingRight, 37, -8)
};

static const s16 sZazabiMultiOam_FallingMouthOpenedRight1_Frame4[ZAZABI_PART_UPPER_SHELL][MULTI_SPRITE_DATA_ELEMENT_END] = {
    [ZAZABI_PART_MOUTH_FRONT] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthFrontOpening_2, 61, 0),
    [ZAZABI_PART_MOUTH_BACK] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_MouthBackOpening_2, 61, 0),
    [ZAZABI_PART_HAIR] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_HairLandingRight_1, 13, 9),
    [ZAZABI_PART_EYE_SHELL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeShellJumpingLeft, 37, 8),
    [ZAZABI_PART_PUPIL] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_PupilClosed, 33, 8),
    [ZAZABI_PART_EYE] = MULTI_SPRITE_DATA_INFO(ZazabiPartOam_EyeJumpingLeft, 37, 8)
};


const struct MultiSpriteData sZazabiMultiOam_Idle1[5] = {
    [0] = {
        .pData = sZazabiMultiOam_Idle1_Frame0,
        .timer = 8
    },
    [1] = {
        .pData = sZazabiMultiOam_Idle1_Frame1,
        .timer = 8
    },
    [2] = {
        .pData = sZazabiMultiOam_Idle1_Frame2,
        .timer = 8
    },
    [3] = {
        .pData = sZazabiMultiOam_Idle1_Frame1,
        .timer = 8
    },
    [4] = MULTI_SPRITE_DATA_TERMINATOR
};

const struct MultiSpriteData sZazabiMultiOam_Crawling1[9] = {
    [0] = {
        .pData = sZazabiMultiOam_Idle1_Frame2,
        .timer = 4
    },
    [1] = {
        .pData = sZazabiMultiOam_Idle1_Frame1,
        .timer = 4
    },
    [2] = {
        .pData = sZazabiMultiOam_Idle1_Frame0,
        .timer = 4
    },
    [3] = {
        .pData = sZazabiMultiOam_Crawling1_Frame3,
        .timer = 4
    },
    [4] = {
        .pData = sZazabiMultiOam_Crawling1_Frame4,
        .timer = 5
    },
    [5] = {
        .pData = sZazabiMultiOam_Crawling1_Frame3,
        .timer = 4
    },
    [6] = {
        .pData = sZazabiMultiOam_Idle1_Frame0,
        .timer = 4
    },
    [7] = {
        .pData = sZazabiMultiOam_Idle1_Frame1,
        .timer = 4
    },
    [8] = MULTI_SPRITE_DATA_TERMINATOR
};

const struct MultiSpriteData sZazabiMultiOam_JumpWarning1[3] = {
    [0] = {
        .pData = sZazabiMultiOam_JumpWarning1_Frame0,
        .timer = 4
    },
    [1] = {
        .pData = sZazabiMultiOam_JumpWarning1_Frame1,
        .timer = 8
    },
    [2] = MULTI_SPRITE_DATA_TERMINATOR
};

const struct MultiSpriteData sZazabiMultiOam_JumpingSmall1[4] = {
    [0] = {
        .pData = sZazabiMultiOam_JumpingSmall1_Frame0,
        .timer = 2
    },
    [1] = {
        .pData = sZazabiMultiOam_JumpingSmall1_Frame1,
        .timer = 4
    },
    [2] = {
        .pData = sZazabiMultiOam_JumpingSmall1_Frame2,
        .timer = 255
    },
    [3] = MULTI_SPRITE_DATA_TERMINATOR
};

const struct MultiSpriteData sZazabiMultiOam_JumpingBigRight1[4] = {
    [0] = {
        .pData = sZazabiMultiOam_JumpingBigRight1_Frame0,
        .timer = 2
    },
    [1] = {
        .pData = sZazabiMultiOam_JumpingBigRight1_Frame1,
        .timer = 4
    },
    [2] = {
        .pData = sZazabiMultiOam_JumpingBigRight1_Frame2,
        .timer = 255
    },
    [3] = MULTI_SPRITE_DATA_TERMINATOR
};

const struct MultiSpriteData sZazabiMultiOam_JumpingBigLeft1[4] = {
    [0] = {
        .pData = sZazabiMultiOam_JumpingBigLeft1_Frame0,
        .timer = 2
    },
    [1] = {
        .pData = sZazabiMultiOam_JumpingBigLeft1_Frame1,
        .timer = 4
    },
    [2] = {
        .pData = sZazabiMultiOam_JumpingBigLeft1_Frame2,
        .timer = 255
    },
    [3] = MULTI_SPRITE_DATA_TERMINATOR
};

const struct MultiSpriteData sZazabiMultiOam_FallingSlowMouthOpened1[7] = {
    [0] = {
        .pData = sZazabiMultiOam_FallingSlowMouthOpened1_Frame0,
        .timer = 2
    },
    [1] = {
        .pData = sZazabiMultiOam_FallingSlowMouthOpened1_Frame1,
        .timer = 3
    },
    [2] = {
        .pData = sZazabiMultiOam_FallingSlowMouthOpened1_Frame2,
        .timer = 100
    },
    [3] = {
        .pData = sZazabiMultiOam_FallingSlowMouthOpened1_Frame3,
        .timer = 2
    },
    [4] = {
        .pData = sZazabiMultiOam_FallingSlowMouthOpened1_Frame4,
        .timer = 2
    },
    [5] = {
        .pData = sZazabiMultiOam_FallingSlowMouthOpened1_Frame5,
        .timer = 2
    },
    [6] = MULTI_SPRITE_DATA_TERMINATOR
};

const struct MultiSpriteData sZazabiMultiOam_FallingMouthOpenedLeft1[9] = {
    [0] = {
        .pData = sZazabiMultiOam_JumpingSmall1_Frame2,
        .timer = 2
    },
    [1] = {
        .pData = sZazabiMultiOam_JumpingBigRight1_Frame2,
        .timer = 2
    },
    [2] = {
        .pData = sZazabiMultiOam_FallingMouthOpenedLeft1_Frame2,
        .timer = 2
    },
    [3] = {
        .pData = sZazabiMultiOam_FallingMouthOpenedLeft1_Frame3,
        .timer = 3
    },
    [4] = {
        .pData = sZazabiMultiOam_FallingMouthOpenedLeft1_Frame4,
        .timer = 100
    },
    [5] = {
        .pData = sZazabiMultiOam_FallingMouthOpenedLeft1_Frame5,
        .timer = 2
    },
    [6] = {
        .pData = sZazabiMultiOam_FallingSlowMouthOpened1_Frame4,
        .timer = 2
    },
    [7] = {
        .pData = sZazabiMultiOam_FallingSlowMouthOpened1_Frame5,
        .timer = 2
    },
    [8] = MULTI_SPRITE_DATA_TERMINATOR
};

const struct MultiSpriteData sZazabiMultiOam_FallingMouthOpenedRight1[9] = {
    [0] = {
        .pData = sZazabiMultiOam_JumpingSmall1_Frame2,
        .timer = 2
    },
    [1] = {
        .pData = sZazabiMultiOam_JumpingBigLeft1_Frame2,
        .timer = 2
    },
    [2] = {
        .pData = sZazabiMultiOam_FallingMouthOpenedRight1_Frame2,
        .timer = 2
    },
    [3] = {
        .pData = sZazabiMultiOam_FallingMouthOpenedRight1_Frame3,
        .timer = 3
    },
    [4] = {
        .pData = sZazabiMultiOam_FallingMouthOpenedRight1_Frame4,
        .timer = 100
    },
    [5] = {
        .pData = sZazabiMultiOam_FallingMouthOpenedRight1_Frame5,
        .timer = 2
    },
    [6] = {
        .pData = sZazabiMultiOam_FallingSlowMouthOpened1_Frame4,
        .timer = 2
    },
    [7] = {
        .pData = sZazabiMultiOam_FallingSlowMouthOpened1_Frame5,
        .timer = 2
    },
    [8] = MULTI_SPRITE_DATA_TERMINATOR
};

const struct MultiSpriteData sZazabiMultiOam_LandingMouthOpen1[7] = {
    [0] = {
        .pData = sZazabiMultiOam_LandingMouthOpen1_Frame0,
        .timer = 6
    },
    [1] = {
        .pData = sZazabiMultiOam_LandingMouthOpen1_Frame1,
        .timer = 2
    },
    [2] = {
        .pData = sZazabiMultiOam_LandingMouthOpen1_Frame2,
        .timer = 2
    },
    [3] = {
        .pData = sZazabiMultiOam_LandingMouthOpen1_Frame3,
        .timer = 3
    },
    [4] = {
        .pData = sZazabiMultiOam_LandingMouthOpen1_Frame4,
        .timer = 3
    },
    [5] = {
        .pData = sZazabiMultiOam_JumpWarning1_Frame0,
        .timer = 4
    },
    [6] = MULTI_SPRITE_DATA_TERMINATOR
};

const struct MultiSpriteData sZazabiMultiOam_Landing1[3] = {
    [0] = {
        .pData = sZazabiMultiOam_LandingMouthOpen1_Frame0,
        .timer = 6
    },
    [1] = {
        .pData = sZazabiMultiOam_LandingMouthOpen1_Frame3,
        .timer = 4
    },
    [2] = MULTI_SPRITE_DATA_TERMINATOR
};


const s16 sZazabiJumpingSpeedMouthOpened[40] = {
    -24, -23, -22, -21,
    -20, -19, -18, -17,
    -16, -16, -16, -16,
    -16, -16, -16, -16,
    -15, -14, -13, -12,
    -11, -10,  -9,  -8,
     -7,  -6,  -5,  -4,
     -3,  -2,  -1,   0,
      0,   0,   0,   0,
      0,   0,   0,
      SHORT_MAX
};

const s16 sZazabiFallingSpeedMouthOpened[8] = {
    0, 1, 2, 3,
    4, 6, 6,
    SHORT_MAX
};

const s16 sZazabiJumpingSpeed4[40] = {
    -24, -24, -24, -24,
    -24, -24, -24, -24,
    -24, -23, -22, -21,
    -19, -18, -17, -16,
    -15, -14, -13, -12,
    -11, -10,  -9,  -8,
     -7,  -6,  -5,  -4,
     -3,  -2,  -1,   0,
      0,   0,   0,   0,
      0,   0,   0,
      SHORT_MAX
};

const s16 sZazabiJumpingSpeed2[40] = {
    -24, -23, -22, -21,
    -20, -20, -20, -20,
    -20, -20, -20, -20,
    -19, -18, -17, -16,
    -15, -14, -13, -12,
    -11, -10,  -9,  -8,
     -7,  -6,  -5,  -4,
     -3,  -2,  -1,   0,
      0,   0,   0,   0,
      0,   0,   0,
      SHORT_MAX
};

const s16 sZazabiJumpingSpeed3[40] = {
    -24, -23, -22, -21,
    -20, -19, -18, -17,
    -16, -16, -16, -16,
    -16, -16, -16, -16,
    -15, -14, -13, -12,
    -11, -10,  -9,  -8,
     -7,  -6,  -5,  -4,
     -3,  -2,  -1,   0,
      0,   0,   0,   0,
      0,   0,   0,
      SHORT_MAX
};

const s16 sZazabiFallingSpeed[8] = {
     0,  4,  6, 8,
    10, 12, 16,
    SHORT_MAX
};

const u32 sZazabiGfx[4096] = INCBIN_U32("data/sprites/zazabi.gfx");
const u16 sZazabiPal[8 * 16] = INCBIN_U16("data/sprites/zazabi.pal");


static const u16 sZazabiPartOam_MouthFrontIdle_Frame0[OAM_DATA_SIZE(5)] = {
    0x5,
    0xf7, OBJ_SIZE_16x16 | 0x1e8, OBJ_SPRITE_OAM | 0x282,
    OBJ_SHAPE_VERTICAL | 0xf7, 0x1f8, OBJ_SPRITE_OAM | 0x284,
    0xf7, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x8, OBJ_SPRITE_OAM | 0x282,
    OBJ_SHAPE_VERTICAL | 0xf7, OBJ_X_FLIP | 0x0, OBJ_SPRITE_OAM | 0x284,
    0x7, 0x1fc, OBJ_SPRITE_OAM | 0x2c4
};

static const u16 sZazabiPartOam_MouthFrontLanding_Frame0[OAM_DATA_SIZE(9)] = {
    0x9,
    OBJ_SHAPE_HORIZONTAL | 0xf6, 0x1e8, OBJ_SPRITE_OAM | 0x282,
    0xf6, 0x1f8, OBJ_SPRITE_OAM | 0x284,
    0xfe, OBJ_SIZE_16x16 | 0x1e8, OBJ_SPRITE_OAM | 0x242,
    0xfe, 0x1f8, OBJ_SPRITE_OAM | 0x244,
    OBJ_SHAPE_HORIZONTAL | 0xf6, OBJ_X_FLIP | 0x8, OBJ_SPRITE_OAM | 0x282,
    0xf6, OBJ_X_FLIP | 0x0, OBJ_SPRITE_OAM | 0x284,
    0xfe, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x8, OBJ_SPRITE_OAM | 0x242,
    0xfe, OBJ_X_FLIP | 0x0, OBJ_SPRITE_OAM | 0x244,
    0x6, 0x1fc, OBJ_SPRITE_OAM | 0x264
};

static const u16 sZazabiPartOam_MouthFrontCrawlingLow_Frame0[OAM_DATA_SIZE(9)] = {
    0x9,
    OBJ_SHAPE_HORIZONTAL | 0xf5, 0x1e8, OBJ_SPRITE_OAM | 0x282,
    0xf5, 0x1f8, OBJ_SPRITE_OAM | 0x284,
    0xfd, OBJ_SIZE_16x16 | 0x1e8, OBJ_SPRITE_OAM | 0x202,
    0xfd, 0x1f8, OBJ_SPRITE_OAM | 0x204,
    OBJ_SHAPE_HORIZONTAL | 0xf5, OBJ_X_FLIP | 0x8, OBJ_SPRITE_OAM | 0x282,
    0xf5, OBJ_X_FLIP | 0x0, OBJ_SPRITE_OAM | 0x284,
    0xfd, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x8, OBJ_SPRITE_OAM | 0x202,
    0xfd, OBJ_X_FLIP | 0x0, OBJ_SPRITE_OAM | 0x204,
    0x5, 0x1fc, OBJ_SPRITE_OAM | 0x224
};

static const u16 sZazabiPartOam_MouthFrontCrawlingHigh_Frame0[OAM_DATA_SIZE(6)] = {
    0x6,
    OBJ_SHAPE_HORIZONTAL | 0xf4, 0x1f0, OBJ_SPRITE_OAM | 0x246,
    OBJ_SHAPE_HORIZONTAL | 0xf4, OBJ_X_FLIP | 0x0, OBJ_SPRITE_OAM | 0x246,
    0xfc, OBJ_SIZE_16x16 | 0x1e8, OBJ_SPRITE_OAM | 0x205,
    OBJ_SHAPE_VERTICAL | 0xfc, 0x1f8, OBJ_SPRITE_OAM | 0x207,
    0xfc, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x8, OBJ_SPRITE_OAM | 0x205,
    OBJ_SHAPE_VERTICAL | 0xfc, OBJ_X_FLIP | 0x0, OBJ_SPRITE_OAM | 0x207
};

static const u16 sZazabiPartOam_MouthFrontCrawlingHalted_Frame0[OAM_DATA_SIZE(6)] = {
    0x6,
    OBJ_SHAPE_HORIZONTAL | 0xf4, 0x1f0, OBJ_SPRITE_OAM | 0x246,
    0xfc, OBJ_SIZE_16x16 | 0x1e8, OBJ_SPRITE_OAM | 0x265,
    OBJ_SHAPE_VERTICAL | 0xfc, 0x1f8, OBJ_SPRITE_OAM | 0x267,
    OBJ_SHAPE_HORIZONTAL | 0xf4, OBJ_X_FLIP | 0x0, OBJ_SPRITE_OAM | 0x246,
    0xfc, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x8, OBJ_SPRITE_OAM | 0x265,
    OBJ_SHAPE_VERTICAL | 0xfc, OBJ_X_FLIP | 0x0, OBJ_SPRITE_OAM | 0x267
};

static const u16 sZazabiPartOam_MouthFrontOpening_1_Frame0[OAM_DATA_SIZE(4)] = {
    0x4,
    0xf4, OBJ_SIZE_16x16 | 0x1f0, OBJ_SPRITE_OAM | 0x209,
    OBJ_SHAPE_VERTICAL | 0xfc, 0x1e8, OBJ_SPRITE_OAM | 0x228,
    0xf4, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x0, OBJ_SPRITE_OAM | 0x209,
    OBJ_SHAPE_VERTICAL | 0xfc, OBJ_X_FLIP | 0x10, OBJ_SPRITE_OAM | 0x228
};

static const u16 sZazabiPartOam_MouthBackOpening_1_Frame0[OAM_DATA_SIZE(2)] = {
    0x2,
    0xfc, OBJ_SIZE_16x16 | 0x1f0, OBJ_SPRITE_OAM | 0x249,
    0xfc, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x0, OBJ_SPRITE_OAM | 0x249
};

static const u16 sZazabiPartOam_MouthFrontOpening_2_Frame0[OAM_DATA_SIZE(5)] = {
    0x5,
    0xf3, OBJ_SIZE_16x16 | 0x1f0, OBJ_SPRITE_OAM | 0x22c,
    0xf3, 0x1e8, OBJ_SPRITE_OAM | 0x22b,
    0xf3, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x0, OBJ_SPRITE_OAM | 0x22c,
    0xf3, OBJ_X_FLIP | 0x10, OBJ_SPRITE_OAM | 0x22b,
    0xeb, 0x1fc, OBJ_SPRITE_OAM | 0x20d
};

static const u16 sZazabiPartOam_MouthBackOpening_2_Frame0[OAM_DATA_SIZE(7)] = {
    0x7,
    0xfb, OBJ_SIZE_16x16 | 0x1e8, OBJ_SPRITE_OAM | 0x26b,
    OBJ_SHAPE_VERTICAL | 0xfb, 0x1f8, OBJ_SPRITE_OAM | 0x26d,
    0xb, 0x1f0, OBJ_SPRITE_OAM | 0x2ac,
    0xfb, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x8, OBJ_SPRITE_OAM | 0x26b,
    OBJ_SHAPE_VERTICAL | 0xfb, OBJ_X_FLIP | 0x0, OBJ_SPRITE_OAM | 0x26d,
    0xb, OBJ_X_FLIP | 0x8, OBJ_SPRITE_OAM | 0x2ac,
    0xb, 0x1fc, OBJ_SPRITE_OAM | 0x2ad
};

static const u16 sZazabiPartOam_MouthFrontOpened_Frame0[OAM_DATA_SIZE(6)] = {
    0x6,
    0xf0, OBJ_SIZE_32x32 | 0x1e0, OBJ_SPRITE_OAM | 0x22e,
    0x10, 0x1ec, OBJ_SPRITE_OAM | 0x2af,
    0xf0, OBJ_X_FLIP | OBJ_SIZE_32x32 | 0x0, OBJ_SPRITE_OAM | 0x22e,
    0x10, OBJ_X_FLIP | 0xc, OBJ_SPRITE_OAM | 0x2af,
    0xe8, 0x1fc, OBJ_SPRITE_OAM | 0x211,
    0x10, 0x1fc, OBJ_SPRITE_OAM | 0x2b1
};

static const u16 sZazabiPartOam_LowerShellIdle_Frame0[OAM_DATA_SIZE(2)] = {
    0x2,
    0xf8, OBJ_SIZE_16x16 | 0x1f0, OBJ_SPRITE_OAM | 0x332,
    0xf8, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x0, OBJ_SPRITE_OAM | 0x332
};

static const u16 sZazabiPartOam_LowerShellEatingSamus_Frame0[OAM_DATA_SIZE(2)] = {
    0x2,
    0xf8, OBJ_SIZE_16x16 | 0x1f0, OBJ_SPRITE_OAM | 0x338,
    0xf8, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x0, OBJ_SPRITE_OAM | 0x338
};

static const u16 sZazabiPartOam_LowerShellEatingSamus_Frame1[OAM_DATA_SIZE(2)] = {
    0x2,
    0xf8, OBJ_SIZE_16x16 | 0x1f0, OBJ_SPRITE_OAM | 0x33a,
    0xf8, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x0, OBJ_SPRITE_OAM | 0x33a
};

static const u16 sZazabiPartOam_LowerShellEatingSamus_Frame2[OAM_DATA_SIZE(2)] = {
    0x2,
    0xf8, OBJ_SIZE_16x16 | 0x1f0, OBJ_SPRITE_OAM | 0x33c,
    0xf8, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x0, OBJ_SPRITE_OAM | 0x33c
};

static const u16 sZazabiPartOam_LowerShellSwallowingSamus_Frame0[OAM_DATA_SIZE(2)] = {
    0x2,
    0xf8, OBJ_SIZE_16x16 | 0x1f0, OBJ_SPRITE_OAM | 0x33e,
    0xf8, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x0, OBJ_SPRITE_OAM | 0x33e
};

static const u16 sZazabiPartOam_LowerShellSwallowingSamus_Frame1[OAM_DATA_SIZE(2)] = {
    0x2,
    0xf8, OBJ_SIZE_16x16 | 0x1f0, OBJ_SPRITE_OAM | 0x336,
    0xf8, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x0, OBJ_SPRITE_OAM | 0x336
};

static const u16 sZazabiPartOam_LowerShellSwallowingSamus_Frame2[OAM_DATA_SIZE(2)] = {
    0x2,
    0xf8, OBJ_SIZE_16x16 | 0x1f0, OBJ_SPRITE_OAM | 0x334,
    0xf8, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x0, OBJ_SPRITE_OAM | 0x334
};

static const u16 sZazabiPartOam_MiddleShellIdle_Frame0[OAM_DATA_SIZE(4)] = {
    0x4,
    0xfc, OBJ_SIZE_16x16 | 0x1f0, OBJ_SPRITE_OAM | 0x2f2,
    0xf4, 0x1f8, OBJ_SPRITE_OAM | 0x2d3,
    0xfc, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x0, OBJ_SPRITE_OAM | 0x2f2,
    0xf4, OBJ_X_FLIP | 0x0, OBJ_SPRITE_OAM | 0x2d3
};

static const u16 sZazabiPartOam_MiddleShellEatingSamus3_Frame0[OAM_DATA_SIZE(4)] = {
    0x4,
    0xfc, OBJ_SIZE_16x16 | 0x1f0, OBJ_SPRITE_OAM | 0x2f8,
    0xf4, 0x1f8, OBJ_SPRITE_OAM | 0x2d9,
    0xfc, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x0, OBJ_SPRITE_OAM | 0x2f8,
    0xf4, OBJ_X_FLIP | 0x0, OBJ_SPRITE_OAM | 0x2d9
};

static const u16 sZazabiPartOam_MiddleShellEatingSamus3_Frame1[OAM_DATA_SIZE(4)] = {
    0x4,
    0xfc, OBJ_SIZE_16x16 | 0x1f0, OBJ_SPRITE_OAM | 0x2fa,
    0xf4, 0x1f8, OBJ_SPRITE_OAM | 0x2db,
    0xfc, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x0, OBJ_SPRITE_OAM | 0x2fa,
    0xf4, OBJ_X_FLIP | 0x0, OBJ_SPRITE_OAM | 0x2db
};

static const u16 sZazabiPartOam_MiddleShellEatingSamus3_Frame2[OAM_DATA_SIZE(4)] = {
    0x4,
    0xfc, OBJ_SIZE_16x16 | 0x1f0, OBJ_SPRITE_OAM | 0x2fc,
    0xf4, 0x1f8, OBJ_SPRITE_OAM | 0x2dd,
    0xfc, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x0, OBJ_SPRITE_OAM | 0x2fc,
    0xf4, OBJ_X_FLIP | 0x0, OBJ_SPRITE_OAM | 0x2dd
};

static const u16 sZazabiPartOam_MiddleShellSwallowingSamus_Frame0[OAM_DATA_SIZE(4)] = {
    0x4,
    0xfc, OBJ_SIZE_16x16 | 0x1f0, OBJ_SPRITE_OAM | 0x2fe,
    0xf4, 0x1f8, OBJ_SPRITE_OAM | 0x2df,
    0xfc, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x0, OBJ_SPRITE_OAM | 0x2fe,
    0xf4, OBJ_X_FLIP | 0x0, OBJ_SPRITE_OAM | 0x2df
};

static const u16 sZazabiPartOam_MiddleShellSwallowingSamus_Frame1[OAM_DATA_SIZE(4)] = {
    0x4,
    0xfc, OBJ_SIZE_16x16 | 0x1f0, OBJ_SPRITE_OAM | 0x2f6,
    0xf4, 0x1f8, OBJ_SPRITE_OAM | 0x2d7,
    0xfc, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x0, OBJ_SPRITE_OAM | 0x2f6,
    0xf4, OBJ_X_FLIP | 0x0, OBJ_SPRITE_OAM | 0x2d7
};

static const u16 sZazabiPartOam_MiddleShellSwallowingSamus_Frame2[OAM_DATA_SIZE(4)] = {
    0x4,
    0xfc, OBJ_SIZE_16x16 | 0x1f0, OBJ_SPRITE_OAM | 0x2f4,
    0xf4, 0x1f8, OBJ_SPRITE_OAM | 0x2d5,
    0xfc, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x0, OBJ_SPRITE_OAM | 0x2f4,
    0xf4, OBJ_X_FLIP | 0x0, OBJ_SPRITE_OAM | 0x2d5
};

static const u16 sZazabiPartOam_UpperShellIdle_Frame0[OAM_DATA_SIZE(4)] = {
    0x4,
    0xf4, OBJ_SIZE_16x16 | 0x1f0, OBJ_SPRITE_OAM | 0x272,
    OBJ_SHAPE_HORIZONTAL | 0x4, 0x1f0, OBJ_SPRITE_OAM | 0x2b2,
    0xf4, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x0, OBJ_SPRITE_OAM | 0x272,
    OBJ_SHAPE_HORIZONTAL | 0x4, OBJ_X_FLIP | 0x0, OBJ_SPRITE_OAM | 0x2b2
};

static const u16 sZazabiPartOam_UpperShellEatingSamus5_Frame0[OAM_DATA_SIZE(4)] = {
    0x4,
    0xf4, OBJ_SIZE_16x16 | 0x1f0, OBJ_SPRITE_OAM | 0x278,
    OBJ_SHAPE_HORIZONTAL | 0x4, 0x1f0, OBJ_SPRITE_OAM | 0x2b8,
    0xf4, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x0, OBJ_SPRITE_OAM | 0x278,
    OBJ_SHAPE_HORIZONTAL | 0x4, OBJ_X_FLIP | 0x0, OBJ_SPRITE_OAM | 0x2b8
};

static const u16 sZazabiPartOam_UpperShellEatingSamus5_Frame1[OAM_DATA_SIZE(4)] = {
    0x4,
    0xf4, OBJ_SIZE_16x16 | 0x1f0, OBJ_SPRITE_OAM | 0x27a,
    OBJ_SHAPE_HORIZONTAL | 0x4, 0x1f0, OBJ_SPRITE_OAM | 0x2ba,
    0xf4, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x0, OBJ_SPRITE_OAM | 0x27a,
    OBJ_SHAPE_HORIZONTAL | 0x4, OBJ_X_FLIP | 0x0, OBJ_SPRITE_OAM | 0x2ba
};

static const u16 sZazabiPartOam_UpperShellEatingSamus5_Frame2[OAM_DATA_SIZE(4)] = {
    0x4,
    0xf4, OBJ_SIZE_16x16 | 0x1f0, OBJ_SPRITE_OAM | 0x27c,
    OBJ_SHAPE_HORIZONTAL | 0x4, 0x1f0, OBJ_SPRITE_OAM | 0x2bc,
    0xf4, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x0, OBJ_SPRITE_OAM | 0x27c,
    OBJ_SHAPE_HORIZONTAL | 0x4, OBJ_X_FLIP | 0x0, OBJ_SPRITE_OAM | 0x2bc
};

static const u16 sZazabiPartOam_UpperShellSwallowingSamus_Frame0[OAM_DATA_SIZE(4)] = {
    0x4,
    0xf4, OBJ_SIZE_16x16 | 0x1f0, OBJ_SPRITE_OAM | 0x27e,
    OBJ_SHAPE_HORIZONTAL | 0x4, 0x1f0, OBJ_SPRITE_OAM | 0x2be,
    0xf4, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x0, OBJ_SPRITE_OAM | 0x27e,
    OBJ_SHAPE_HORIZONTAL | 0x4, OBJ_X_FLIP | 0x0, OBJ_SPRITE_OAM | 0x2be
};

static const u16 sZazabiPartOam_UpperShellSwallowingSamus_Frame1[OAM_DATA_SIZE(4)] = {
    0x4,
    0xf4, OBJ_SIZE_16x16 | 0x1f0, OBJ_SPRITE_OAM | 0x276,
    OBJ_SHAPE_HORIZONTAL | 0x4, 0x1f0, OBJ_SPRITE_OAM | 0x2b6,
    0xf4, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x0, OBJ_SPRITE_OAM | 0x276,
    OBJ_SHAPE_HORIZONTAL | 0x4, OBJ_X_FLIP | 0x0, OBJ_SPRITE_OAM | 0x2b6
};

static const u16 sZazabiPartOam_UpperShellSwallowingSamus_Frame2[OAM_DATA_SIZE(4)] = {
    0x4,
    0xf4, OBJ_SIZE_16x16 | 0x1f0, OBJ_SPRITE_OAM | 0x274,
    OBJ_SHAPE_HORIZONTAL | 0x4, 0x1f0, OBJ_SPRITE_OAM | 0x2b4,
    0xf4, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x0, OBJ_SPRITE_OAM | 0x274,
    OBJ_SHAPE_HORIZONTAL | 0x4, OBJ_X_FLIP | 0x0, OBJ_SPRITE_OAM | 0x2b4
};

static const u16 sZazabiPartOam_EyeShellIdle_Frame0[OAM_DATA_SIZE(4)] = {
    0x4,
    OBJ_SHAPE_VERTICAL | 0xe8, OBJ_SIZE_16x32 | 0x1f0, OBJ_SPRITE_OAM | 0x200,
    OBJ_SHAPE_VERTICAL | 0xe8, OBJ_X_FLIP | OBJ_SIZE_16x32 | 0x0, OBJ_SPRITE_OAM | 0x200,
    0x8, OBJ_SIZE_16x16 | 0x1f0, OBJ_SPRITE_OAM | 0x280,
    0x8, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x0, OBJ_SPRITE_OAM | 0x280
};

static const u16 sZazabiPartOam_EyeShellSwallowingSamusLow_Frame1[OAM_DATA_SIZE(4)] = {
    0x4,
    OBJ_SHAPE_VERTICAL | 0xe8, OBJ_SIZE_16x32 | 0x1f0, OBJ_SPRITE_OAM | 0x200,
    OBJ_SHAPE_VERTICAL | 0xe8, OBJ_X_FLIP | OBJ_SIZE_16x32 | 0x0, OBJ_SPRITE_OAM | 0x200,
    0x8, OBJ_SIZE_16x16 | 0x1f0, OBJ_SPRITE_OAM | 0x2c7,
    0x8, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x0, OBJ_SPRITE_OAM | 0x2c7
};

static const u16 sZazabiPartOam_EyeShellSwallowingSamusLow_Frame2[OAM_DATA_SIZE(4)] = {
    0x4,
    OBJ_SHAPE_VERTICAL | 0xe8, OBJ_SIZE_16x32 | 0x1f0, OBJ_SPRITE_OAM | 0x200,
    OBJ_SHAPE_VERTICAL | 0xe8, OBJ_X_FLIP | OBJ_SIZE_16x32 | 0x0, OBJ_SPRITE_OAM | 0x200,
    0x8, OBJ_SIZE_16x16 | 0x1f0, OBJ_SPRITE_OAM | 0x2c9,
    0x8, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x0, OBJ_SPRITE_OAM | 0x2c9
};

static const u16 sZazabiPartOam_EyeIdle_Frame0[OAM_DATA_SIZE(2)] = {
    0x2,
    0xf4, OBJ_SIZE_16x16 | 0x1f8, OBJ_SPRITE_OAM | 0x212,
    OBJ_SHAPE_HORIZONTAL | 0x4, 0x1f8, OBJ_SPRITE_OAM | 0x252
};

static const u16 sZazabiPartOam_EyeEatingSamus_Frame1[OAM_DATA_SIZE(2)] = {
    0x2,
    0xf4, OBJ_SIZE_16x16 | 0x1f8, OBJ_SPRITE_OAM | 0x216,
    OBJ_SHAPE_HORIZONTAL | 0x4, 0x1f8, OBJ_SPRITE_OAM | 0x256
};

static const u16 sZazabiPartOam_EyeEatingSamus_Frame3[OAM_DATA_SIZE(2)] = {
    0x2,
    0xf4, OBJ_SIZE_16x16 | 0x1f8, OBJ_SPRITE_OAM | 0x214,
    OBJ_SHAPE_HORIZONTAL | 0x4, 0x1f8, OBJ_SPRITE_OAM | 0x254
};

static const u16 sZazabiPartOam_PupilClosed_Frame0[OAM_DATA_SIZE(1)] = {
    0x1,
    0xfc, 0x1fc, OBJ_SPRITE_OAM | 0x20b
};

static const u16 sZazabiPartOam_PupilBlinking_Frame0[OAM_DATA_SIZE(2)] = {
    0x2,
    0xf4, OBJ_SIZE_16x16 | 0x1f8, OBJ_SPRITE_OAM | 0x218,
    OBJ_SHAPE_HORIZONTAL | 0x4, 0x1f8, OBJ_SPRITE_OAM | 0x258
};

static const u16 sZazabiPartOam_PupilBlinking_Frame1[OAM_DATA_SIZE(2)] = {
    0x2,
    0xf4, OBJ_SIZE_16x16 | 0x1f8, OBJ_SPRITE_OAM | 0x21a,
    OBJ_SHAPE_HORIZONTAL | 0x4, 0x1f8, OBJ_SPRITE_OAM | 0x25a
};

static const u16 sZazabiPartOam_PupilBlinking_Frame2[OAM_DATA_SIZE(2)] = {
    0x2,
    0xf4, OBJ_SIZE_16x16 | 0x1f8, OBJ_SPRITE_OAM | 0x21c,
    OBJ_SHAPE_HORIZONTAL | 0x4, 0x1f8, OBJ_SPRITE_OAM | 0x25c
};

static const u16 sZazabiPartOam_PupilBlinking_Frame3[OAM_DATA_SIZE(2)] = {
    0x2,
    0xf4, OBJ_SIZE_16x16 | 0x1f8, OBJ_SPRITE_OAM | 0x21e,
    OBJ_SHAPE_HORIZONTAL | 0x4, 0x1f8, OBJ_SPRITE_OAM | 0x25e
};

static const u16 sZazabiPartOam_HairMoving_Frame0[OAM_DATA_SIZE(9)] = {
    0x9,
    OBJ_SHAPE_VERTICAL | 0xe0, OBJ_SIZE_16x32 | 0x1f8, OBJ_SPRITE_OAM | 0x380,
    0xe8, OBJ_SIZE_16x16 | 0x1e9, OBJ_SPRITE_OAM | 0x2c0,
    OBJ_SHAPE_VERTICAL | 0xf8, 0x1f1, OBJ_SPRITE_OAM | 0x301,
    0xf8, OBJ_SIZE_16x16 | 0x1e3, OBJ_SPRITE_OAM | 0x341,
    0xf8, 0x1db, OBJ_SPRITE_OAM | 0x340,
    0xe8, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x7, OBJ_SPRITE_OAM | 0x2c0,
    OBJ_SHAPE_VERTICAL | 0xf8, OBJ_X_FLIP | 0x7, OBJ_SPRITE_OAM | 0x301,
    0xf8, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0xd, OBJ_SPRITE_OAM | 0x341,
    0xf8, OBJ_X_FLIP | 0x1d, OBJ_SPRITE_OAM | 0x340
};

static const u16 sZazabiPartOam_HairMoving_Frame1[OAM_DATA_SIZE(9)] = {
    0x9,
    OBJ_SHAPE_VERTICAL | 0xe0, OBJ_SIZE_16x32 | 0x1f4, OBJ_SPRITE_OAM | 0x388,
    0xea, OBJ_SIZE_16x16 | 0x1e9, OBJ_SPRITE_OAM | 0x2c2,
    0xfa, 0x1f1, OBJ_SPRITE_OAM | 0x303,
    0xf8, OBJ_SIZE_16x16 | 0x1db, OBJ_SPRITE_OAM | 0x343,
    OBJ_SHAPE_VERTICAL | 0xf8, 0x1eb, OBJ_SPRITE_OAM | 0x345,
    0xea, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x7, OBJ_SPRITE_OAM | 0x2c2,
    0xfa, OBJ_X_FLIP | 0x7, OBJ_SPRITE_OAM | 0x303,
    0xf8, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x15, OBJ_SPRITE_OAM | 0x343,
    OBJ_SHAPE_VERTICAL | 0xf8, OBJ_X_FLIP | 0xd, OBJ_SPRITE_OAM | 0x345
};

static const u16 sZazabiPartOam_HairMoving_Frame2[OAM_DATA_SIZE(10)] = {
    0xa,
    0xf0, OBJ_SIZE_16x16 | 0x1f4, OBJ_SPRITE_OAM | 0x3cb,
    OBJ_SHAPE_HORIZONTAL | 0xe8, 0x1ec, OBJ_SPRITE_OAM | 0x3aa,
    0xf2, OBJ_SIZE_16x16 | 0x1e9, OBJ_SPRITE_OAM | 0x305,
    OBJ_SHAPE_VERTICAL | 0xea, 0x1e1, OBJ_SPRITE_OAM | 0x2e4,
    OBJ_SHAPE_HORIZONTAL | 0x0, 0x1db, OBJ_SPRITE_OAM | 0x346,
    0x0, 0x1eb, OBJ_SPRITE_OAM | 0x348,
    0xf2, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x7, OBJ_SPRITE_OAM | 0x305,
    OBJ_SHAPE_VERTICAL | 0xea, OBJ_X_FLIP | 0x17, OBJ_SPRITE_OAM | 0x2e4,
    OBJ_SHAPE_HORIZONTAL | 0x0, OBJ_X_FLIP | 0x15, OBJ_SPRITE_OAM | 0x346,
    0x0, OBJ_X_FLIP | 0xd, OBJ_SPRITE_OAM | 0x348
};

static const u16 sZazabiPartOam_HairMoving_Frame3[OAM_DATA_SIZE(10)] = {
    0xa,
    0xe8, OBJ_SIZE_16x16 | 0x1ec, OBJ_SPRITE_OAM | 0x3ad,
    OBJ_SHAPE_VERTICAL | 0xf0, 0x1fc, OBJ_SPRITE_OAM | 0x3cf,
    0xf2, OBJ_SIZE_16x16 | 0x1e1, OBJ_SPRITE_OAM | 0x307,
    OBJ_SHAPE_VERTICAL | 0xf2, 0x1f1, OBJ_SPRITE_OAM | 0x309,
    0x0, OBJ_SIZE_16x16 | 0x1db, OBJ_SPRITE_OAM | 0x349,
    OBJ_SHAPE_VERTICAL | 0x0, 0x1eb, OBJ_SPRITE_OAM | 0x34b,
    0xf2, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0xf, OBJ_SPRITE_OAM | 0x307,
    OBJ_SHAPE_VERTICAL | 0xf2, OBJ_X_FLIP | 0x7, OBJ_SPRITE_OAM | 0x309,
    0x0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x15, OBJ_SPRITE_OAM | 0x349,
    OBJ_SHAPE_VERTICAL | 0x0, OBJ_X_FLIP | 0xd, OBJ_SPRITE_OAM | 0x34b
};

static const u16 sZazabiPartOam_HairMoving_Frame7[OAM_DATA_SIZE(9)] = {
    0x9,
    OBJ_SHAPE_VERTICAL | 0xe0, OBJ_X_FLIP | OBJ_SIZE_16x32 | 0x1fc, OBJ_SPRITE_OAM | 0x388,
    0xea, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x7, OBJ_SPRITE_OAM | 0x2c2,
    0xfa, OBJ_X_FLIP | 0x7, OBJ_SPRITE_OAM | 0x303,
    0xf8, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x15, OBJ_SPRITE_OAM | 0x343,
    OBJ_SHAPE_VERTICAL | 0xf8, OBJ_X_FLIP | 0xd, OBJ_SPRITE_OAM | 0x345,
    0xea, OBJ_SIZE_16x16 | 0x1e9, OBJ_SPRITE_OAM | 0x2c2,
    0xfa, 0x1f1, OBJ_SPRITE_OAM | 0x303,
    0xf8, OBJ_SIZE_16x16 | 0x1db, OBJ_SPRITE_OAM | 0x343,
    OBJ_SHAPE_VERTICAL | 0xf8, 0x1eb, OBJ_SPRITE_OAM | 0x345
};

static const u16 sZazabiPartOam_HairMoving_Frame8[OAM_DATA_SIZE(10)] = {
    0xa,
    0xf0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1fc, OBJ_SPRITE_OAM | 0x3cb,
    OBJ_SHAPE_HORIZONTAL | 0xe8, OBJ_X_FLIP | 0x4, OBJ_SPRITE_OAM | 0x3aa,
    0xf2, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x7, OBJ_SPRITE_OAM | 0x305,
    OBJ_SHAPE_VERTICAL | 0xea, OBJ_X_FLIP | 0x17, OBJ_SPRITE_OAM | 0x2e4,
    OBJ_SHAPE_HORIZONTAL | 0x0, OBJ_X_FLIP | 0x15, OBJ_SPRITE_OAM | 0x346,
    0x0, OBJ_X_FLIP | 0xd, OBJ_SPRITE_OAM | 0x348,
    0xf2, OBJ_SIZE_16x16 | 0x1e9, OBJ_SPRITE_OAM | 0x305,
    OBJ_SHAPE_VERTICAL | 0xea, 0x1e1, OBJ_SPRITE_OAM | 0x2e4,
    OBJ_SHAPE_HORIZONTAL | 0x0, 0x1db, OBJ_SPRITE_OAM | 0x346,
    0x0, 0x1eb, OBJ_SPRITE_OAM | 0x348
};

static const u16 sZazabiPartOam_HairMoving_Frame9[OAM_DATA_SIZE(10)] = {
    0xa,
    0xf2, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0xf, OBJ_SPRITE_OAM | 0x307,
    OBJ_SHAPE_VERTICAL | 0xf2, OBJ_X_FLIP | 0x7, OBJ_SPRITE_OAM | 0x309,
    0x0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x15, OBJ_SPRITE_OAM | 0x349,
    OBJ_SHAPE_VERTICAL | 0x0, OBJ_X_FLIP | 0xd, OBJ_SPRITE_OAM | 0x34b,
    0xe8, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x4, OBJ_SPRITE_OAM | 0x3ad,
    OBJ_SHAPE_VERTICAL | 0xf0, OBJ_X_FLIP | 0x1fc, OBJ_SPRITE_OAM | 0x3cf,
    0xf2, OBJ_SIZE_16x16 | 0x1e1, OBJ_SPRITE_OAM | 0x307,
    OBJ_SHAPE_VERTICAL | 0xf2, 0x1f1, OBJ_SPRITE_OAM | 0x309,
    0x0, OBJ_SIZE_16x16 | 0x1db, OBJ_SPRITE_OAM | 0x349,
    OBJ_SHAPE_VERTICAL | 0x0, 0x1eb, OBJ_SPRITE_OAM | 0x34b
};

static const u16 sZazabiPartOam_HairDownLow_Frame0[OAM_DATA_SIZE(9)] = {
    0x9,
    0xf6, OBJ_SIZE_16x16 | 0x1f8, OBJ_SPRITE_OAM | 0x3c6,
    0xf2, OBJ_SIZE_16x16 | 0x1e1, OBJ_SPRITE_OAM | 0x307,
    OBJ_SHAPE_VERTICAL | 0xf2, 0x1f1, OBJ_SPRITE_OAM | 0x309,
    0x0, OBJ_SIZE_16x16 | 0x1db, OBJ_SPRITE_OAM | 0x349,
    OBJ_SHAPE_VERTICAL | 0x0, 0x1eb, OBJ_SPRITE_OAM | 0x34b,
    0xf2, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0xf, OBJ_SPRITE_OAM | 0x307,
    OBJ_SHAPE_VERTICAL | 0xf2, OBJ_X_FLIP | 0x7, OBJ_SPRITE_OAM | 0x309,
    0x0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x15, OBJ_SPRITE_OAM | 0x349,
    OBJ_SHAPE_VERTICAL | 0x0, OBJ_X_FLIP | 0xd, OBJ_SPRITE_OAM | 0x34b
};

static const u16 sZazabiPartOam_HairDownMid_Frame0[OAM_DATA_SIZE(9)] = {
    0x9,
    0xf0, OBJ_SIZE_16x16 | 0x1f8, OBJ_SPRITE_OAM | 0x3c4,
    0xf2, OBJ_SIZE_16x16 | 0x1e9, OBJ_SPRITE_OAM | 0x305,
    OBJ_SHAPE_VERTICAL | 0xea, 0x1e1, OBJ_SPRITE_OAM | 0x2e4,
    OBJ_SHAPE_HORIZONTAL | 0x0, 0x1db, OBJ_SPRITE_OAM | 0x346,
    0x0, 0x1eb, OBJ_SPRITE_OAM | 0x348,
    0xf2, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x7, OBJ_SPRITE_OAM | 0x305,
    OBJ_SHAPE_VERTICAL | 0xea, OBJ_X_FLIP | 0x17, OBJ_SPRITE_OAM | 0x2e4,
    OBJ_SHAPE_HORIZONTAL | 0x0, OBJ_X_FLIP | 0x15, OBJ_SPRITE_OAM | 0x346,
    0x0, OBJ_X_FLIP | 0xd, OBJ_SPRITE_OAM | 0x348
};

static const u16 sZazabiPartOam_HairDownHigh_Frame0[OAM_DATA_SIZE(10)] = {
    0xa,
    0xe8, OBJ_SIZE_16x16 | 0x1f8, OBJ_SPRITE_OAM | 0x3a2,
    OBJ_SHAPE_HORIZONTAL | 0xf8, 0x1f8, OBJ_SPRITE_OAM | 0x3e2,
    0xea, OBJ_SIZE_16x16 | 0x1e9, OBJ_SPRITE_OAM | 0x2c2,
    0xfa, 0x1f1, OBJ_SPRITE_OAM | 0x303,
    0xf8, OBJ_SIZE_16x16 | 0x1db, OBJ_SPRITE_OAM | 0x343,
    OBJ_SHAPE_VERTICAL | 0xf8, 0x1eb, OBJ_SPRITE_OAM | 0x345,
    0xea, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x7, OBJ_SPRITE_OAM | 0x2c2,
    0xfa, OBJ_X_FLIP | 0x7, OBJ_SPRITE_OAM | 0x303,
    0xf8, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x15, OBJ_SPRITE_OAM | 0x343,
    OBJ_SHAPE_VERTICAL | 0xf8, OBJ_X_FLIP | 0xd, OBJ_SPRITE_OAM | 0x345
};

static const u16 sZazabiPartOam_HairEatingSamus_Frame1[OAM_DATA_SIZE(9)] = {
    0x9,
    OBJ_SHAPE_VERTICAL | 0xe1, OBJ_SIZE_16x32 | 0x1f8, OBJ_SPRITE_OAM | 0x380,
    0xea, OBJ_SIZE_16x16 | 0x1ea, OBJ_SPRITE_OAM | 0x2c0,
    OBJ_SHAPE_VERTICAL | 0xfa, 0x1f2, OBJ_SPRITE_OAM | 0x301,
    0xfa, OBJ_SIZE_16x16 | 0x1e5, OBJ_SPRITE_OAM | 0x341,
    0xfa, 0x1dd, OBJ_SPRITE_OAM | 0x340,
    0xea, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x6, OBJ_SPRITE_OAM | 0x2c0,
    OBJ_SHAPE_VERTICAL | 0xfa, OBJ_X_FLIP | 0x6, OBJ_SPRITE_OAM | 0x301,
    0xfa, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0xb, OBJ_SPRITE_OAM | 0x341,
    0xfa, OBJ_X_FLIP | 0x1b, OBJ_SPRITE_OAM | 0x340
};

static const u16 sZazabiPartOam_HairEatingSamus_Frame3[OAM_DATA_SIZE(9)] = {
    0x9,
    OBJ_SHAPE_VERTICAL | 0xdf, OBJ_SIZE_16x32 | 0x1f8, OBJ_SPRITE_OAM | 0x380,
    0xe7, OBJ_SIZE_16x16 | 0x1e8, OBJ_SPRITE_OAM | 0x2c0,
    OBJ_SHAPE_VERTICAL | 0xf7, 0x1f0, OBJ_SPRITE_OAM | 0x301,
    0xf7, OBJ_SIZE_16x16 | 0x1e2, OBJ_SPRITE_OAM | 0x341,
    0xf7, 0x1da, OBJ_SPRITE_OAM | 0x340,
    0xe7, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x8, OBJ_SPRITE_OAM | 0x2c0,
    OBJ_SHAPE_VERTICAL | 0xf7, OBJ_X_FLIP | 0x8, OBJ_SPRITE_OAM | 0x301,
    0xf7, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0xe, OBJ_SPRITE_OAM | 0x341,
    0xf7, OBJ_X_FLIP | 0x1e, OBJ_SPRITE_OAM | 0x340
};

static const u16 sZazabiPartOam_EyeShellJumpingRight_Frame0[OAM_DATA_SIZE(3)] = {
    0x3,
    0xe8, OBJ_SIZE_32x32 | 0x1f4, OBJ_SPRITE_OAM | 0x394,
    OBJ_SHAPE_VERTICAL | 0xe8, OBJ_SIZE_8x32 | 0x1ec, OBJ_SPRITE_OAM | 0x393,
    OBJ_SHAPE_HORIZONTAL | 0x8, OBJ_SIZE_32x16 | 0x1f4, OBJ_SPRITE_OAM | 0x398
};

static const u16 sZazabiPartOam_EyeShellJumpingSmallRight_Frame0[OAM_DATA_SIZE(2)] = {
    0x2,
    0xe8, OBJ_SIZE_32x32 | 0x1f0, OBJ_SPRITE_OAM | 0x39c,
    OBJ_SHAPE_HORIZONTAL | 0x8, OBJ_SIZE_32x16 | 0x1f0, OBJ_SPRITE_OAM | 0x3d8
};

static const u16 sZazabiPartOam_EyeShellJumpingLeft_Frame0[OAM_DATA_SIZE(3)] = {
    0x3,
    0xe8, OBJ_X_FLIP | OBJ_SIZE_32x32 | 0x1ec, OBJ_SPRITE_OAM | 0x394,
    OBJ_SHAPE_VERTICAL | 0xe8, OBJ_X_FLIP | OBJ_SIZE_8x32 | 0xc, OBJ_SPRITE_OAM | 0x393,
    OBJ_SHAPE_HORIZONTAL | 0x8, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1ec, OBJ_SPRITE_OAM | 0x398
};

static const u16 sZazabiPartOam_EyeShellJumpingSmallLeft_Frame0[OAM_DATA_SIZE(2)] = {
    0x2,
    0xe8, OBJ_X_FLIP | OBJ_SIZE_32x32 | 0x1f0, OBJ_SPRITE_OAM | 0x39c,
    OBJ_SHAPE_HORIZONTAL | 0x8, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1f0, OBJ_SPRITE_OAM | 0x3d8
};

static const u16 sZazabiPartOam_UpperShellJumpingRight_Frame0[OAM_DATA_SIZE(2)] = {
    0x2,
    OBJ_SHAPE_HORIZONTAL | 0xf4, OBJ_SIZE_32x16 | 0x1f0, OBJ_SPRITE_OAM | 0x2cc,
    OBJ_SHAPE_HORIZONTAL | 0x4, OBJ_SIZE_32x8 | 0x1f0, OBJ_SPRITE_OAM | 0x30c
};

static const u16 sZazabiPartOam_UpperShellJumpingLeft_Frame0[OAM_DATA_SIZE(2)] = {
    0x2,
    OBJ_SHAPE_HORIZONTAL | 0xf4, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1f0, OBJ_SPRITE_OAM | 0x2cc,
    OBJ_SHAPE_HORIZONTAL | 0x4, OBJ_X_FLIP | OBJ_SIZE_32x8 | 0x1f0, OBJ_SPRITE_OAM | 0x30c
};

static const u16 sZazabiPartOam_HairJumpingRight_1_Frame0[OAM_DATA_SIZE(9)] = {
    0x9,
    0xf6, OBJ_SIZE_16x16 | 0x1f8, OBJ_SPRITE_OAM | 0x3c6,
    0xf4, OBJ_SIZE_16x16 | 0x1e1, OBJ_SPRITE_OAM | 0x307,
    OBJ_SHAPE_VERTICAL | 0xf4, 0x1f1, OBJ_SPRITE_OAM | 0x309,
    0x3, OBJ_SIZE_16x16 | 0x1dc, OBJ_SPRITE_OAM | 0x349,
    OBJ_SHAPE_VERTICAL | 0x3, 0x1ec, OBJ_SPRITE_OAM | 0x34b,
    0xf2, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0xf, OBJ_SPRITE_OAM | 0x307,
    OBJ_SHAPE_VERTICAL | 0xf2, OBJ_X_FLIP | 0x7, OBJ_SPRITE_OAM | 0x309,
    0x0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x15, OBJ_SPRITE_OAM | 0x349,
    OBJ_SHAPE_VERTICAL | 0x0, OBJ_X_FLIP | 0xd, OBJ_SPRITE_OAM | 0x34b
};

static const u16 sZazabiPartOam_HairJumpingRight_2_Frame0[OAM_DATA_SIZE(9)] = {
    0x9,
    0xf0, OBJ_SIZE_16x16 | 0x1f8, OBJ_SPRITE_OAM | 0x3c4,
    0xf4, OBJ_SIZE_16x16 | 0x1ea, OBJ_SPRITE_OAM | 0x305,
    OBJ_SHAPE_VERTICAL | 0xec, 0x1e2, OBJ_SPRITE_OAM | 0x2e4,
    OBJ_SHAPE_HORIZONTAL | 0x3, 0x1dd, OBJ_SPRITE_OAM | 0x346,
    0x3, 0x1ed, OBJ_SPRITE_OAM | 0x348,
    0xf2, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x7, OBJ_SPRITE_OAM | 0x305,
    OBJ_SHAPE_VERTICAL | 0xea, OBJ_X_FLIP | 0x17, OBJ_SPRITE_OAM | 0x2e4,
    OBJ_SHAPE_HORIZONTAL | 0x0, OBJ_X_FLIP | 0x15, OBJ_SPRITE_OAM | 0x346,
    0x0, OBJ_X_FLIP | 0xd, OBJ_SPRITE_OAM | 0x348
};

static const u16 sZazabiPartOam_HairJumpingRight_3_Frame0[OAM_DATA_SIZE(10)] = {
    0xa,
    0xe8, OBJ_SIZE_16x16 | 0x1f8, OBJ_SPRITE_OAM | 0x3a2,
    OBJ_SHAPE_HORIZONTAL | 0xf8, 0x1f8, OBJ_SPRITE_OAM | 0x3e2,
    0xec, OBJ_SIZE_16x16 | 0x1ea, OBJ_SPRITE_OAM | 0x2c2,
    0xfc, 0x1f2, OBJ_SPRITE_OAM | 0x303,
    0xfb, OBJ_SIZE_16x16 | 0x1dd, OBJ_SPRITE_OAM | 0x343,
    OBJ_SHAPE_VERTICAL | 0xfb, 0x1ed, OBJ_SPRITE_OAM | 0x345,
    0xea, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x7, OBJ_SPRITE_OAM | 0x2c2,
    0xfa, OBJ_X_FLIP | 0x7, OBJ_SPRITE_OAM | 0x303,
    0xf8, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x15, OBJ_SPRITE_OAM | 0x343,
    OBJ_SHAPE_VERTICAL | 0xf8, OBJ_X_FLIP | 0xd, OBJ_SPRITE_OAM | 0x345
};

static const u16 sZazabiPartOam_HairLandingLeft_1_Frame0[OAM_DATA_SIZE(9)] = {
    0x9,
    OBJ_SHAPE_VERTICAL | 0xe0, OBJ_SIZE_16x32 | 0x1f8, OBJ_SPRITE_OAM | 0x380,
    0xea, OBJ_SIZE_16x16 | 0x1ea, OBJ_SPRITE_OAM | 0x2c0,
    OBJ_SHAPE_VERTICAL | 0xfa, 0x1f2, OBJ_SPRITE_OAM | 0x301,
    0xfb, OBJ_SIZE_16x16 | 0x1e5, OBJ_SPRITE_OAM | 0x341,
    0xfb, 0x1dd, OBJ_SPRITE_OAM | 0x340,
    0xe7, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x7, OBJ_SPRITE_OAM | 0x2c0,
    OBJ_SHAPE_VERTICAL | 0xf7, OBJ_X_FLIP | 0x7, OBJ_SPRITE_OAM | 0x301,
    0xf8, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0xd, OBJ_SPRITE_OAM | 0x341,
    0xf8, OBJ_X_FLIP | 0x1d, OBJ_SPRITE_OAM | 0x340
};

static const u16 sZazabiPartOam_HairLandingLeft_2_Frame0[OAM_DATA_SIZE(9)] = {
    0x9,
    OBJ_SHAPE_VERTICAL | 0xe0, OBJ_SIZE_16x32 | 0x1f8, OBJ_SPRITE_OAM | 0x380,
    0xe9, OBJ_SIZE_16x16 | 0x1e9, OBJ_SPRITE_OAM | 0x2c0,
    OBJ_SHAPE_VERTICAL | 0xf9, 0x1f1, OBJ_SPRITE_OAM | 0x301,
    0xfa, OBJ_SIZE_16x16 | 0x1e3, OBJ_SPRITE_OAM | 0x341,
    0xfa, 0x1db, OBJ_SPRITE_OAM | 0x340,
    0xe8, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x7, OBJ_SPRITE_OAM | 0x2c0,
    OBJ_SHAPE_VERTICAL | 0xf8, OBJ_X_FLIP | 0x7, OBJ_SPRITE_OAM | 0x301,
    0xf7, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0xd, OBJ_SPRITE_OAM | 0x341,
    0xf7, OBJ_X_FLIP | 0x1d, OBJ_SPRITE_OAM | 0x340
};

static const u16 sZazabiPartOam_HairJumpingLeft_1_Frame0[OAM_DATA_SIZE(9)] = {
    0x9,
    0xf6, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, OBJ_SPRITE_OAM | 0x3c6,
    0xf4, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0xf, OBJ_SPRITE_OAM | 0x307,
    OBJ_SHAPE_VERTICAL | 0xf4, OBJ_X_FLIP | 0x7, OBJ_SPRITE_OAM | 0x309,
    0x3, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x14, OBJ_SPRITE_OAM | 0x349,
    OBJ_SHAPE_VERTICAL | 0x3, OBJ_X_FLIP | 0xc, OBJ_SPRITE_OAM | 0x34b,
    0xf2, OBJ_SIZE_16x16 | 0x1e1, OBJ_SPRITE_OAM | 0x307,
    OBJ_SHAPE_VERTICAL | 0xf2, 0x1f1, OBJ_SPRITE_OAM | 0x309,
    0x0, OBJ_SIZE_16x16 | 0x1db, OBJ_SPRITE_OAM | 0x349,
    OBJ_SHAPE_VERTICAL | 0x0, 0x1eb, OBJ_SPRITE_OAM | 0x34b
};

static const u16 sZazabiPartOam_HairJumpingLeft_2_Frame0[OAM_DATA_SIZE(9)] = {
    0x9,
    0xf0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, OBJ_SPRITE_OAM | 0x3c4,
    0xf4, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x6, OBJ_SPRITE_OAM | 0x305,
    OBJ_SHAPE_VERTICAL | 0xec, OBJ_X_FLIP | 0x16, OBJ_SPRITE_OAM | 0x2e4,
    OBJ_SHAPE_HORIZONTAL | 0x3, OBJ_X_FLIP | 0x13, OBJ_SPRITE_OAM | 0x346,
    0x3, OBJ_X_FLIP | 0xb, OBJ_SPRITE_OAM | 0x348,
    0xf2, OBJ_SIZE_16x16 | 0x1e9, OBJ_SPRITE_OAM | 0x305,
    OBJ_SHAPE_VERTICAL | 0xea, 0x1e1, OBJ_SPRITE_OAM | 0x2e4,
    OBJ_SHAPE_HORIZONTAL | 0x0, 0x1db, OBJ_SPRITE_OAM | 0x346,
    0x0, 0x1eb, OBJ_SPRITE_OAM | 0x348
};

static const u16 sZazabiPartOam_HairJumpingLeft_3_Frame0[OAM_DATA_SIZE(10)] = {
    0xa,
    0xe8, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, OBJ_SPRITE_OAM | 0x3a2,
    OBJ_SHAPE_HORIZONTAL | 0xf8, OBJ_X_FLIP | 0x1f8, OBJ_SPRITE_OAM | 0x3e2,
    0xec, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x6, OBJ_SPRITE_OAM | 0x2c2,
    0xfc, OBJ_X_FLIP | 0x6, OBJ_SPRITE_OAM | 0x303,
    0xfb, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x13, OBJ_SPRITE_OAM | 0x343,
    OBJ_SHAPE_VERTICAL | 0xfb, OBJ_X_FLIP | 0xb, OBJ_SPRITE_OAM | 0x345,
    0xea, OBJ_SIZE_16x16 | 0x1e9, OBJ_SPRITE_OAM | 0x2c2,
    0xfa, 0x1f1, OBJ_SPRITE_OAM | 0x303,
    0xf8, OBJ_SIZE_16x16 | 0x1db, OBJ_SPRITE_OAM | 0x343,
    OBJ_SHAPE_VERTICAL | 0xf8, 0x1eb, OBJ_SPRITE_OAM | 0x345
};

static const u16 sZazabiPartOam_HairLandingRight_1_Frame0[OAM_DATA_SIZE(9)] = {
    0x9,
    OBJ_SHAPE_VERTICAL | 0xe0, OBJ_X_FLIP | OBJ_SIZE_16x32 | 0x1f8, OBJ_SPRITE_OAM | 0x380,
    0xea, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x6, OBJ_SPRITE_OAM | 0x2c0,
    OBJ_SHAPE_VERTICAL | 0xfa, OBJ_X_FLIP | 0x6, OBJ_SPRITE_OAM | 0x301,
    0xfb, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0xb, OBJ_SPRITE_OAM | 0x341,
    0xfb, OBJ_X_FLIP | 0x1b, OBJ_SPRITE_OAM | 0x340,
    0xe7, OBJ_SIZE_16x16 | 0x1e9, OBJ_SPRITE_OAM | 0x2c0,
    OBJ_SHAPE_VERTICAL | 0xf7, 0x1f1, OBJ_SPRITE_OAM | 0x301,
    0xf8, OBJ_SIZE_16x16 | 0x1e3, OBJ_SPRITE_OAM | 0x341,
    0xf8, 0x1db, OBJ_SPRITE_OAM | 0x340
};

static const u16 sZazabiPartOam_HairLandingRight_2_Frame0[OAM_DATA_SIZE(9)] = {
    0x9,
    OBJ_SHAPE_VERTICAL | 0xe0, OBJ_X_FLIP | OBJ_SIZE_16x32 | 0x1f8, OBJ_SPRITE_OAM | 0x380,
    0xe9, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x7, OBJ_SPRITE_OAM | 0x2c0,
    OBJ_SHAPE_VERTICAL | 0xf9, OBJ_X_FLIP | 0x7, OBJ_SPRITE_OAM | 0x301,
    0xfa, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0xd, OBJ_SPRITE_OAM | 0x341,
    0xfa, OBJ_X_FLIP | 0x1d, OBJ_SPRITE_OAM | 0x340,
    0xe8, OBJ_SIZE_16x16 | 0x1e9, OBJ_SPRITE_OAM | 0x2c0,
    OBJ_SHAPE_VERTICAL | 0xf8, 0x1f1, OBJ_SPRITE_OAM | 0x301,
    0xf7, OBJ_SIZE_16x16 | 0x1e3, OBJ_SPRITE_OAM | 0x341,
    0xf7, 0x1db, OBJ_SPRITE_OAM | 0x340
};

static const u16 sZazabi_37276e[OAM_DATA_SIZE(1)] = {
    0x1,
    0xfc, 0x1fc, OBJ_SPRITE_OAM | 0x20c
};

static const u16 sZazabiPartOam_EyeJumpingRight_Frame0[OAM_DATA_SIZE(3)] = {
    0x3,
    0xf3, 0x1fd, OBJ_SPRITE_OAM | 0x208,
    0xf0, OBJ_SIZE_16x16 | 0x1fb, OBJ_SPRITE_OAM | 0x32c,
    OBJ_SHAPE_HORIZONTAL | 0x0, 0x1fb, OBJ_SPRITE_OAM | 0x36c
};

static const u16 sZazabiPartOam_EyeLandingRight_Frame0[OAM_DATA_SIZE(3)] = {
    0x3,
    0xf3, 0x1fb, OBJ_SPRITE_OAM | 0x208,
    0xf0, OBJ_SIZE_16x16 | 0x1f8, OBJ_SPRITE_OAM | 0x32e,
    OBJ_SHAPE_HORIZONTAL | 0x0, 0x1f8, OBJ_SPRITE_OAM | 0x36e
};

static const u16 sZazabiPartOam_EyeJumpingLeft_Frame0[OAM_DATA_SIZE(3)] = {
    0x3,
    0xf3, OBJ_X_FLIP | 0x1f8, OBJ_SPRITE_OAM | 0x208,
    0xf0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f5, OBJ_SPRITE_OAM | 0x32c,
    OBJ_SHAPE_HORIZONTAL | 0x0, OBJ_X_FLIP | 0x1f5, OBJ_SPRITE_OAM | 0x36c
};

static const u16 sZazabiPartOam_EyeLandingLeft_Frame0[OAM_DATA_SIZE(3)] = {
    0x3,
    0xf3, OBJ_X_FLIP | 0x1fa, OBJ_SPRITE_OAM | 0x208,
    0xf0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f8, OBJ_SPRITE_OAM | 0x32e,
    OBJ_SHAPE_HORIZONTAL | 0x0, OBJ_X_FLIP | 0x1f8, OBJ_SPRITE_OAM | 0x36e
};


const struct FrameData sZazabiPartOam_LowerShellIdle[2] = {
    [0] = {
        .pFrame = sZazabiPartOam_LowerShellIdle_Frame0,
        .timer = UCHAR_MAX
    },
    [1] = FRAME_DATA_TERMINATOR
};

const struct FrameData sZazabiPartOam_LowerShellEatingSamus[5] = {
    [0] = {
        .pFrame = sZazabiPartOam_LowerShellEatingSamus_Frame0,
        .timer = 4
    },
    [1] = {
        .pFrame = sZazabiPartOam_LowerShellEatingSamus_Frame1,
        .timer = 4
    },
    [2] = {
        .pFrame = sZazabiPartOam_LowerShellEatingSamus_Frame2,
        .timer = 4
    },
    [3] = {
        .pFrame = sZazabiPartOam_LowerShellEatingSamus_Frame1,
        .timer = 4
    },
    [4] = FRAME_DATA_TERMINATOR
};

const struct FrameData sZazabiPartOam_LowerShellSwallowingSamus[4] = {
    [0] = {
        .pFrame = sZazabiPartOam_LowerShellSwallowingSamus_Frame0,
        .timer = 8
    },
    [1] = {
        .pFrame = sZazabiPartOam_LowerShellSwallowingSamus_Frame1,
        .timer = 4
    },
    [2] = {
        .pFrame = sZazabiPartOam_LowerShellSwallowingSamus_Frame2,
        .timer = UCHAR_MAX
    },
    [3] = FRAME_DATA_TERMINATOR
};

const struct FrameData sZazabi_372820[3] = {
    [0] = {
        .pFrame = sZazabiPartOam_LowerShellEatingSamus_Frame2,
        .timer = 8
    },
    [1] = {
        .pFrame = sZazabiPartOam_LowerShellEatingSamus_Frame1,
        .timer = 4
    },
    [2] = FRAME_DATA_TERMINATOR
};

const struct FrameData sZazabiPartOam_MiddleShellIdle[2] = {
    [0] = {
        .pFrame = sZazabiPartOam_MiddleShellIdle_Frame0,
        .timer = UCHAR_MAX
    },
    [1] = FRAME_DATA_TERMINATOR
};

const struct FrameData sZazabiPartOam_MiddleShellEatingSamus3[5] = {
    [0] = {
        .pFrame = sZazabiPartOam_MiddleShellEatingSamus3_Frame0,
        .timer = 4
    },
    [1] = {
        .pFrame = sZazabiPartOam_MiddleShellEatingSamus3_Frame1,
        .timer = 4
    },
    [2] = {
        .pFrame = sZazabiPartOam_MiddleShellEatingSamus3_Frame2,
        .timer = 4
    },
    [3] = {
        .pFrame = sZazabiPartOam_MiddleShellEatingSamus3_Frame1,
        .timer = 4
    },
    [4] = FRAME_DATA_TERMINATOR
};

const struct FrameData sZazabiPartOam_MiddleShellSwallowingSamus[4] = {
    [0] = {
        .pFrame = sZazabiPartOam_MiddleShellSwallowingSamus_Frame0,
        .timer = 8
    },
    [1] = {
        .pFrame = sZazabiPartOam_MiddleShellSwallowingSamus_Frame1,
        .timer = 4
    },
    [2] = {
        .pFrame = sZazabiPartOam_MiddleShellSwallowingSamus_Frame2,
        .timer = UCHAR_MAX
    },
    [3] = FRAME_DATA_TERMINATOR
};

const struct FrameData sZazabiPartOam_MiddleShellEatingSamus2[3] = {
    [0] = {
        .pFrame = sZazabiPartOam_MiddleShellEatingSamus3_Frame2,
        .timer = 8
    },
    [1] = {
        .pFrame = sZazabiPartOam_MiddleShellEatingSamus3_Frame1,
        .timer = 4
    },
    [2] = FRAME_DATA_TERMINATOR
};

const struct FrameData sZazabiPartOam_UpperShellIdle[2] = {
    [0] = {
        .pFrame = sZazabiPartOam_UpperShellIdle_Frame0,
        .timer = UCHAR_MAX
    },
    [1] = FRAME_DATA_TERMINATOR
};

const struct FrameData sZazabiPartOam_UpperShellEatingSamus5[5] = {
    [0] = {
        .pFrame = sZazabiPartOam_UpperShellEatingSamus5_Frame0,
        .timer = 4
    },
    [1] = {
        .pFrame = sZazabiPartOam_UpperShellEatingSamus5_Frame1,
        .timer = 4
    },
    [2] = {
        .pFrame = sZazabiPartOam_UpperShellEatingSamus5_Frame2,
        .timer = 4
    },
    [3] = {
        .pFrame = sZazabiPartOam_UpperShellEatingSamus5_Frame1,
        .timer = 4
    },
    [4] = FRAME_DATA_TERMINATOR
};

const struct FrameData sZazabiPartOam_UpperShellSwallowingSamus[4] = {
    [0] = {
        .pFrame = sZazabiPartOam_UpperShellSwallowingSamus_Frame0,
        .timer = 8
    },
    [1] = {
        .pFrame = sZazabiPartOam_UpperShellSwallowingSamus_Frame1,
        .timer = 4
    },
    [2] = {
        .pFrame = sZazabiPartOam_UpperShellSwallowingSamus_Frame2,
        .timer = UCHAR_MAX
    },
    [3] = FRAME_DATA_TERMINATOR
};

const struct FrameData sZazabiPartOam_UpperShellEatingSamus4[3] = {
    [0] = {
        .pFrame = sZazabiPartOam_UpperShellEatingSamus5_Frame2,
        .timer = 8
    },
    [1] = {
        .pFrame = sZazabiPartOam_UpperShellEatingSamus5_Frame1,
        .timer = 4
    },
    [2] = FRAME_DATA_TERMINATOR
};

const struct FrameData sZazabiPartOam_EyeShellIdle[2] = {
    [0] = {
        .pFrame = sZazabiPartOam_EyeShellIdle_Frame0,
        .timer = UCHAR_MAX
    },
    [1] = FRAME_DATA_TERMINATOR
};

const struct FrameData sZazabiPartOam_EyeShellSwallowingSamusLow[5] = {
    [0] = {
        .pFrame = sZazabiPartOam_EyeShellIdle_Frame0,
        .timer = 4
    },
    [1] = {
        .pFrame = sZazabiPartOam_EyeShellSwallowingSamusLow_Frame1,
        .timer = 4
    },
    [2] = {
        .pFrame = sZazabiPartOam_EyeShellSwallowingSamusLow_Frame2,
        .timer = 4
    },
    [3] = {
        .pFrame = sZazabiPartOam_EyeShellSwallowingSamusLow_Frame1,
        .timer = 4
    },
    [4] = FRAME_DATA_TERMINATOR
};

const struct FrameData sZazabi_372950[4] = {
    [0] = {
        .pFrame = sZazabiPartOam_EyeShellSwallowingSamusLow_Frame2,
        .timer = 12
    },
    [1] = {
        .pFrame = sZazabiPartOam_EyeShellSwallowingSamusLow_Frame1,
        .timer = 4
    },
    [2] = {
        .pFrame = sZazabiPartOam_EyeShellIdle_Frame0,
        .timer = UCHAR_MAX
    },
    [3] = FRAME_DATA_TERMINATOR
};

const struct FrameData sZazabi_372970[3] = {
    [0] = {
        .pFrame = sZazabiPartOam_EyeShellSwallowingSamusLow_Frame2,
        .timer = 8
    },
    [1] = {
        .pFrame = sZazabiPartOam_EyeShellSwallowingSamusLow_Frame1,
        .timer = 4
    },
    [2] = FRAME_DATA_TERMINATOR
};

const struct FrameData sZazabiPartOam_MouthFrontIdle[2] = {
    [0] = {
        .pFrame = sZazabiPartOam_MouthFrontIdle_Frame0,
        .timer = UCHAR_MAX
    },
    [1] = FRAME_DATA_TERMINATOR
};

const struct FrameData sZazabiPartOam_MouthFrontLanding[2] = {
    [0] = {
        .pFrame = sZazabiPartOam_MouthFrontLanding_Frame0,
        .timer = UCHAR_MAX
    },
    [1] = FRAME_DATA_TERMINATOR
};

const struct FrameData sZazabiPartOam_MouthFrontCrawlingLow[2] = {
    [0] = {
        .pFrame = sZazabiPartOam_MouthFrontCrawlingLow_Frame0,
        .timer = UCHAR_MAX
    },
    [1] = FRAME_DATA_TERMINATOR
};

const struct FrameData sZazabiPartOam_MouthFrontCrawlingHigh[2] = {
    [0] = {
        .pFrame = sZazabiPartOam_MouthFrontCrawlingHigh_Frame0,
        .timer = UCHAR_MAX
    },
    [1] = FRAME_DATA_TERMINATOR
};

const struct FrameData sZazabiPartOam_MouthFrontCrawlingHalted[2] = {
    [0] = {
        .pFrame = sZazabiPartOam_MouthFrontCrawlingHalted_Frame0,
        .timer = UCHAR_MAX
    },
    [1] = FRAME_DATA_TERMINATOR
};

const struct FrameData sZazabiPartOam_MouthFrontOpening_1[2] = {
    [0] = {
        .pFrame = sZazabiPartOam_MouthFrontOpening_1_Frame0,
        .timer = UCHAR_MAX
    },
    [1] = FRAME_DATA_TERMINATOR
};

const struct FrameData sZazabiPartOam_MouthBackOpening_1[2] = {
    [0] = {
        .pFrame = sZazabiPartOam_MouthBackOpening_1_Frame0,
        .timer = UCHAR_MAX
    },
    [1] = FRAME_DATA_TERMINATOR
};

const struct FrameData sZazabiPartOam_MouthFrontOpening_2[2] = {
    [0] = {
        .pFrame = sZazabiPartOam_MouthFrontOpening_2_Frame0,
        .timer = UCHAR_MAX
    },
    [1] = FRAME_DATA_TERMINATOR
};

const struct FrameData sZazabiPartOam_MouthBackOpening_2[2] = {
    [0] = {
        .pFrame = sZazabiPartOam_MouthBackOpening_2_Frame0,
        .timer = UCHAR_MAX
    },
    [1] = FRAME_DATA_TERMINATOR
};

const struct FrameData sZazabiPartOam_MouthFrontOpened[2] = {
    [0] = {
        .pFrame = sZazabiPartOam_MouthFrontOpened_Frame0,
        .timer = UCHAR_MAX
    },
    [1] = FRAME_DATA_TERMINATOR
};

const struct FrameData sZazabiPartOam_EyeIdle[2] = {
    [0] = {
        .pFrame = sZazabiPartOam_EyeIdle_Frame0,
        .timer = UCHAR_MAX
    },
    [1] = FRAME_DATA_TERMINATOR
};

const struct FrameData sZazabiPartOam_EyeEatingSamus[5] = {
    [0] = {
        .pFrame = sZazabiPartOam_EyeIdle_Frame0,
        .timer = 10
    },
    [1] = {
        .pFrame = sZazabiPartOam_EyeEatingSamus_Frame1,
        .timer = 10
    },
    [2] = {
        .pFrame = sZazabiPartOam_EyeIdle_Frame0,
        .timer = 10
    },
    [3] = {
        .pFrame = sZazabiPartOam_EyeEatingSamus_Frame3,
        .timer = 10
    },
    [4] = FRAME_DATA_TERMINATOR
};

const struct FrameData sZazabiPartOam_PupilBlinking[8] = {
    [0] = {
        .pFrame = sZazabiPartOam_PupilBlinking_Frame0,
        .timer = 2
    },
    [1] = {
        .pFrame = sZazabiPartOam_PupilBlinking_Frame1,
        .timer = 2
    },
    [2] = {
        .pFrame = sZazabiPartOam_PupilBlinking_Frame2,
        .timer = 2
    },
    [3] = {
        .pFrame = sZazabiPartOam_PupilBlinking_Frame3,
        .timer = 2
    },
    [4] = {
        .pFrame = sZazabiPartOam_PupilBlinking_Frame2,
        .timer = 2
    },
    [5] = {
        .pFrame = sZazabiPartOam_PupilBlinking_Frame1,
        .timer = 2
    },
    [6] = {
        .pFrame = sZazabiPartOam_PupilBlinking_Frame0,
        .timer = 2
    },
    [7] = FRAME_DATA_TERMINATOR
};

const struct FrameData sZazabiPartOam_HairMoving[13] = {
    [0] = {
        .pFrame = sZazabiPartOam_HairMoving_Frame0,
        .timer = 10
    },
    [1] = {
        .pFrame = sZazabiPartOam_HairMoving_Frame1,
        .timer = 10
    },
    [2] = {
        .pFrame = sZazabiPartOam_HairMoving_Frame2,
        .timer = 10
    },
    [3] = {
        .pFrame = sZazabiPartOam_HairMoving_Frame3,
        .timer = 6
    },
    [4] = {
        .pFrame = sZazabiPartOam_HairMoving_Frame2,
        .timer = 10
    },
    [5] = {
        .pFrame = sZazabiPartOam_HairMoving_Frame1,
        .timer = 10
    },
    [6] = {
        .pFrame = sZazabiPartOam_HairMoving_Frame0,
        .timer = 6
    },
    [7] = {
        .pFrame = sZazabiPartOam_HairMoving_Frame7,
        .timer = 10
    },
    [8] = {
        .pFrame = sZazabiPartOam_HairMoving_Frame8,
        .timer = 10
    },
    [9] = {
        .pFrame = sZazabiPartOam_HairMoving_Frame9,
        .timer = 6
    },
    [10] = {
        .pFrame = sZazabiPartOam_HairMoving_Frame8,
        .timer = 10
    },
    [11] = {
        .pFrame = sZazabiPartOam_HairMoving_Frame7,
        .timer = 10
    },
    [12] = FRAME_DATA_TERMINATOR
};

const struct FrameData sZazabiPartOam_HairStill[2] = {
    [0] = {
        .pFrame = sZazabiPartOam_HairMoving_Frame0,
        .timer = UCHAR_MAX
    },
    [1] = FRAME_DATA_TERMINATOR
};

const struct FrameData sZazabiPartOam_HairDownLow[2] = {
    [0] = {
        .pFrame = sZazabiPartOam_HairDownLow_Frame0,
        .timer = UCHAR_MAX
    },
    [1] = FRAME_DATA_TERMINATOR
};

const struct FrameData sZazabiPartOam_HairDownMid[2] = {
    [0] = {
        .pFrame = sZazabiPartOam_HairDownMid_Frame0,
        .timer = UCHAR_MAX
    },
    [1] = FRAME_DATA_TERMINATOR
};

const struct FrameData sZazabiPartOam_HairDownHigh[2] = {
    [0] = {
        .pFrame = sZazabiPartOam_HairDownHigh_Frame0,
        .timer = UCHAR_MAX
    },
    [1] = FRAME_DATA_TERMINATOR
};

const struct FrameData sZazabiPartOam_HairEatingSamus[5] = {
    [0] = {
        .pFrame = sZazabiPartOam_HairMoving_Frame0,
        .timer = 10
    },
    [1] = {
        .pFrame = sZazabiPartOam_HairEatingSamus_Frame1,
        .timer = 10
    },
    [2] = {
        .pFrame = sZazabiPartOam_HairMoving_Frame0,
        .timer = 10
    },
    [3] = {
        .pFrame = sZazabiPartOam_HairEatingSamus_Frame3,
        .timer = 10
    },
    [4] = FRAME_DATA_TERMINATOR
};

const struct FrameData sZazabiPartOam_EyeShellJumpingRight[2] = {
    [0] = {
        .pFrame = sZazabiPartOam_EyeShellJumpingRight_Frame0,
        .timer = UCHAR_MAX
    },
    [1] = FRAME_DATA_TERMINATOR
};

const struct FrameData sZazabiPartOam_EyeShellJumpingSmallRight[2] = {
    [0] = {
        .pFrame = sZazabiPartOam_EyeShellJumpingSmallRight_Frame0,
        .timer = UCHAR_MAX
    },
    [1] = FRAME_DATA_TERMINATOR
};

const struct FrameData sZazabiPartOam_EyeShellJumpingLeft[2] = {
    [0] = {
        .pFrame = sZazabiPartOam_EyeShellJumpingLeft_Frame0,
        .timer = UCHAR_MAX
    },
    [1] = FRAME_DATA_TERMINATOR
};

const struct FrameData sZazabiPartOam_EyeShellJumpingSmallLeft[2] = {
    [0] = {
        .pFrame = sZazabiPartOam_EyeShellJumpingSmallLeft_Frame0,
        .timer = UCHAR_MAX
    },
    [1] = FRAME_DATA_TERMINATOR
};

const struct FrameData sZazabiPartOam_UpperShellJumpingRight[2] = {
    [0] = {
        .pFrame = sZazabiPartOam_UpperShellJumpingRight_Frame0,
        .timer = UCHAR_MAX
    },
    [1] = FRAME_DATA_TERMINATOR
};

const struct FrameData sZazabiPartOam_UpperShellJumpingLeft[2] = {
    [0] = {
        .pFrame = sZazabiPartOam_UpperShellJumpingLeft_Frame0,
        .timer = UCHAR_MAX
    },
    [1] = FRAME_DATA_TERMINATOR
};

const struct FrameData sZazabiPartOam_HairJumpingRight_1[2] = {
    [0] = {
        .pFrame = sZazabiPartOam_HairJumpingRight_1_Frame0,
        .timer = UCHAR_MAX
    },
    [1] = FRAME_DATA_TERMINATOR
};

const struct FrameData sZazabiPartOam_HairJumpingRight_2[2] = {
    [0] = {
        .pFrame = sZazabiPartOam_HairJumpingRight_2_Frame0,
        .timer = UCHAR_MAX
    },
    [1] = FRAME_DATA_TERMINATOR
};

const struct FrameData sZazabiPartOam_HairJumpingRight_3[2] = {
    [0] = {
        .pFrame = sZazabiPartOam_HairJumpingRight_3_Frame0,
        .timer = UCHAR_MAX
    },
    [1] = FRAME_DATA_TERMINATOR
};

const struct FrameData sZazabiPartOam_HairLandingLeft_1[2] = {
    [0] = {
        .pFrame = sZazabiPartOam_HairLandingLeft_1_Frame0,
        .timer = UCHAR_MAX
    },
    [1] = FRAME_DATA_TERMINATOR
};

const struct FrameData sZazabiPartOam_HairLandingLeft_2[2] = {
    [0] = {
        .pFrame = sZazabiPartOam_HairLandingLeft_2_Frame0,
        .timer = UCHAR_MAX
    },
    [1] = FRAME_DATA_TERMINATOR
};

const struct FrameData sZazabiPartOam_HairJumpingLeft_1[2] = {
    [0] = {
        .pFrame = sZazabiPartOam_HairJumpingLeft_1_Frame0,
        .timer = UCHAR_MAX
    },
    [1] = FRAME_DATA_TERMINATOR
};

const struct FrameData sZazabiPartOam_HairJumpingLeft_2[2] = {
    [0] = {
        .pFrame = sZazabiPartOam_HairJumpingLeft_2_Frame0,
        .timer = UCHAR_MAX
    },
    [1] = FRAME_DATA_TERMINATOR
};

const struct FrameData sZazabiPartOam_HairJumpingLeft_3[2] = {
    [0] = {
        .pFrame = sZazabiPartOam_HairJumpingLeft_3_Frame0,
        .timer = UCHAR_MAX
    },
    [1] = FRAME_DATA_TERMINATOR
};

const struct FrameData sZazabiPartOam_HairLandingRight_1[2] = {
    [0] = {
        .pFrame = sZazabiPartOam_HairLandingRight_1_Frame0,
        .timer = UCHAR_MAX
    },
    [1] = FRAME_DATA_TERMINATOR
};

const struct FrameData sZazabiPartOam_HairLandingRight_2[2] = {
    [0] = {
        .pFrame = sZazabiPartOam_HairLandingRight_2_Frame0,
        .timer = UCHAR_MAX
    },
    [1] = FRAME_DATA_TERMINATOR
};

const struct FrameData sZazabiPartOam_PupilClosed[2] = {
    [0] = {
        .pFrame = sZazabiPartOam_PupilClosed_Frame0,
        .timer = UCHAR_MAX
    },
    [1] = FRAME_DATA_TERMINATOR
};

const struct FrameData sZazabiPartOam_MouthBackHidden[2] = {
    [0] = {
        .pFrame = sZazabi_37276e,
        .timer = UCHAR_MAX
    },
    [1] = FRAME_DATA_TERMINATOR
};

const struct FrameData sZazabiPartOam_EyeJumpingRight[2] = {
    [0] = {
        .pFrame = sZazabiPartOam_EyeJumpingRight_Frame0,
        .timer = UCHAR_MAX
    },
    [1] = FRAME_DATA_TERMINATOR
};

const struct FrameData sZazabiPartOam_EyeLandingRight[2] = {
    [0] = {
        .pFrame = sZazabiPartOam_EyeLandingRight_Frame0,
        .timer = UCHAR_MAX
    },
    [1] = FRAME_DATA_TERMINATOR
};

const struct FrameData sZazabiPartOam_EyeJumpingLeft[2] = {
    [0] = {
        .pFrame = sZazabiPartOam_EyeJumpingLeft_Frame0,
        .timer = UCHAR_MAX
    },
    [1] = FRAME_DATA_TERMINATOR
};

const struct FrameData sZazabiPartOam_EyeLandingLeft[2] = {
    [0] = {
        .pFrame = sZazabiPartOam_EyeLandingLeft_Frame0,
        .timer = UCHAR_MAX
    },
    [1] = FRAME_DATA_TERMINATOR
};
