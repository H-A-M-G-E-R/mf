#include "data/samus/samus_graphics.h"
#include "data/samus_data.h"

#define SAMUS_ANIM_TERMINATOR \
{                             \
    .pTopGfx = NULL,          \
    .pBottomGfx = NULL,       \
    .pOam = NULL,             \
    .timer = 0,               \
}

static const u8 sSamusGfx_Top_Left_Running_Frame0[] = {
    3, 2,
    _INCBIN_U8("data/samus/gfx/Top_Left_Running_Frame0.gfx")
};

static const u8 sSamusGfx_Bottom_Running_Frame0[] = {
    4, 2,
    _INCBIN_U8("data/samus/gfx/Bottom_Running_Frame0.gfx")
};

static const u8 sSamusGfx_Top_Left_Running_Frame1[] = {
    3, 2,
    _INCBIN_U8("data/samus/gfx/Top_Left_Running_Frame1.gfx")
};

static const u8 sSamusGfx_Bottom_Running_Frame1[] = {
    4, 2,
    _INCBIN_U8("data/samus/gfx/Bottom_Running_Frame1.gfx")
};

static const u8 sSamusGfx_Top_Left_Running_Frame2[] = {
    3, 3,
    _INCBIN_U8("data/samus/gfx/Top_Left_Running_Frame2.gfx")
};

static const u8 sSamusGfx_Bottom_Running_Frame2[] = {
    5, 3,
    _INCBIN_U8("data/samus/gfx/Bottom_Running_Frame2.gfx")
};

static const u8 sSamusGfx_Top_Left_Running_Frame3[] = {
    4, 3,
    _INCBIN_U8("data/samus/gfx/Top_Left_Running_Frame3.gfx")
};

static const u8 sSamusGfx_Bottom_Running_Frame3[] = {
    6, 4,
    _INCBIN_U8("data/samus/gfx/Bottom_Running_Frame3.gfx")
};

static const u8 sSamusGfx_Top_Left_Running_Frame4[] = {
    4, 2,
    _INCBIN_U8("data/samus/gfx/Top_Left_Running_Frame4.gfx")
};

static const u8 sSamusGfx_Bottom_Running_Frame4[] = {
    4, 4,
    _INCBIN_U8("data/samus/gfx/Bottom_Running_Frame4.gfx")
};

static const u8 sSamusGfx_Top_Left_Running_Frame5[] = {
    3, 2,
    _INCBIN_U8("data/samus/gfx/Top_Left_Running_Frame5.gfx")
};

static const u8 sSamusGfx_Bottom_Running_Frame5[] = {
    4, 2,
    _INCBIN_U8("data/samus/gfx/Bottom_Running_Frame5.gfx")
};

static const u8 sSamusGfx_Top_Left_Running_Frame6[] = {
    2, 2,
    _INCBIN_U8("data/samus/gfx/Top_Left_Running_Frame6.gfx")
};

static const u8 sSamusGfx_Bottom_Running_Frame6[] = {
    4, 2,
    _INCBIN_U8("data/samus/gfx/Bottom_Running_Frame6.gfx")
};

static const u8 sSamusGfx_Top_Left_Running_Frame7[] = {
    3, 2,
    _INCBIN_U8("data/samus/gfx/Top_Left_Running_Frame7.gfx")
};

static const u8 sSamusGfx_Bottom_Running_Frame7[] = {
    5, 3,
    _INCBIN_U8("data/samus/gfx/Bottom_Running_Frame7.gfx")
};

static const u8 sSamusGfx_Top_Left_Running_Frame8[] = {
    3, 2,
    _INCBIN_U8("data/samus/gfx/Top_Left_Running_Frame8.gfx")
};

static const u8 sSamusGfx_Bottom_Running_Frame8[] = {
    6, 4,
    _INCBIN_U8("data/samus/gfx/Bottom_Running_Frame8.gfx")
};

static const u8 sSamusGfx_Top_Left_Running_Frame9[] = {
    2, 2,
    _INCBIN_U8("data/samus/gfx/Top_Left_Running_Frame9.gfx")
};

static const u8 sSamusGfx_Bottom_Running_Frame9[] = {
    5, 3,
    _INCBIN_U8("data/samus/gfx/Bottom_Running_Frame9.gfx")
};

static const u8 sSamusGfx_Top_Left_DiagonalUp_Running_Frame0[] = {
    3, 3,
    _INCBIN_U8("data/samus/gfx/Top_Left_DiagonalUp_Running_Frame0.gfx")
};

static const u8 sSamusGfx_Top_Left_DiagonalUp_Running_Frame1[] = {
    3, 3,
    _INCBIN_U8("data/samus/gfx/Top_Left_DiagonalUp_Running_Frame1.gfx")
};

static const u8 sSamusGfx_Top_Left_DiagonalUp_Running_Frame2[] = {
    3, 3,
    _INCBIN_U8("data/samus/gfx/Top_Left_DiagonalUp_Running_Frame2.gfx")
};

static const u8 sSamusGfx_Top_Left_Forward_Running_Frame0[] = {
    4, 2,
    _INCBIN_U8("data/samus/gfx/Top_Left_Forward_Running_Frame0.gfx")
};

static const u8 sSamusGfx_Top_Left_Forward_Running_Frame1[] = {
    4, 2,
    _INCBIN_U8("data/samus/gfx/Top_Left_Forward_Running_Frame1.gfx")
};

static const u8 sSamusGfx_Top_Left_Forward_Running_Frame2[] = {
    4, 2,
    _INCBIN_U8("data/samus/gfx/Top_Left_Forward_Running_Frame2.gfx")
};

static const u8 sSamusGfx_Top_Left_DiagonalDown_Running_Frame0[] = {
    4, 2,
    _INCBIN_U8("data/samus/gfx/Top_Left_DiagonalDown_Running_Frame0.gfx")
};

static const u8 sSamusGfx_Top_Left_DiagonalDown_Running_Frame1[] = {
    4, 2,
    _INCBIN_U8("data/samus/gfx/Top_Left_DiagonalDown_Running_Frame1.gfx")
};

static const u8 sSamusGfx_Top_Left_DiagonalDown_Running_Frame2[] = {
    4, 2,
    _INCBIN_U8("data/samus/gfx/Top_Left_DiagonalDown_Running_Frame2.gfx")
};

static const u8 sSamusGfx_Top_Left_Up_Standing_Frame0[] = {
    3, 2,
    _INCBIN_U8("data/samus/gfx/Top_Left_Up_Standing_Frame0.gfx")
};

static const u8 sSamusGfx_Bottom_Up_Standing_Frame0[] = {
    5, 3,
    _INCBIN_U8("data/samus/gfx/Bottom_Up_Standing_Frame0.gfx")
};

static const u8 sSamusGfx_Top_Left_Up_Standing_Frame1[] = {
    3, 2,
    _INCBIN_U8("data/samus/gfx/Top_Left_Up_Standing_Frame1.gfx")
};

static const u8 sSamusGfx_Bottom_Up_Standing_Frame1[] = {
    5, 3,
    _INCBIN_U8("data/samus/gfx/Bottom_Up_Standing_Frame1.gfx")
};

static const u8 sSamusGfx_Top_Left_Up_Standing_Frame2[] = {
    3, 2,
    _INCBIN_U8("data/samus/gfx/Top_Left_Up_Standing_Frame2.gfx")
};

static const u8 sSamusGfx_Bottom_Up_Standing_Frame2[] = {
    5, 3,
    _INCBIN_U8("data/samus/gfx/Bottom_Up_Standing_Frame2.gfx")
};

static const u8 sSamusGfx_Top_Left_Up_Shooting_Frame0[] = {
    3, 2,
    _INCBIN_U8("data/samus/gfx/Top_Left_Up_Shooting_Frame0.gfx")
};

static const u8 sSamusGfx_Bottom_Up_Shooting_Frame0[] = {
    5, 3,
    _INCBIN_U8("data/samus/gfx/Bottom_Up_Shooting_Frame0.gfx")
};

static const u8 sSamusGfx_Top_Left_DiagonalUp_Standing_Frame0[] = {
    3, 3,
    _INCBIN_U8("data/samus/gfx/Top_Left_DiagonalUp_Standing_Frame0.gfx")
};

static const u8 sSamusGfx_Bottom_DiagonalUp_Standing_Frame0[] = {
    5, 3,
    _INCBIN_U8("data/samus/gfx/Bottom_DiagonalUp_Standing_Frame0.gfx")
};

static const u8 sSamusGfx_Top_Left_DiagonalUp_Standing_Frame1[] = {
    3, 3,
    _INCBIN_U8("data/samus/gfx/Top_Left_DiagonalUp_Standing_Frame1.gfx")
};

static const u8 sSamusGfx_Bottom_DiagonalUp_Standing_Frame1[] = {
    5, 3,
    _INCBIN_U8("data/samus/gfx/Bottom_DiagonalUp_Standing_Frame1.gfx")
};

static const u8 sSamusGfx_Top_Left_DiagonalUp_Standing_Frame2[] = {
    3, 3,
    _INCBIN_U8("data/samus/gfx/Top_Left_DiagonalUp_Standing_Frame2.gfx")
};

static const u8 sSamusGfx_Bottom_DiagonalUp_Standing_Frame2[] = {
    5, 3,
    _INCBIN_U8("data/samus/gfx/Bottom_DiagonalUp_Standing_Frame2.gfx")
};

static const u8 sSamusGfx_Top_Left_DiagonalUp_Shooting_Frame0[] = {
    3, 3,
    _INCBIN_U8("data/samus/gfx/Top_Left_DiagonalUp_Shooting_Frame0.gfx")
};

static const u8 sSamusGfx_Top_Left_Standing_Frame0[] = {
    4, 2,
    _INCBIN_U8("data/samus/gfx/Top_Left_Standing_Frame0.gfx")
};

static const u8 sSamusGfx_Bottom_Standing_Frame0[] = {
    5, 3,
    _INCBIN_U8("data/samus/gfx/Bottom_Standing_Frame0.gfx")
};

static const u8 sSamusGfx_Top_Left_Standing_Frame1[] = {
    4, 2,
    _INCBIN_U8("data/samus/gfx/Top_Left_Standing_Frame1.gfx")
};

static const u8 sSamusGfx_Bottom_Standing_Frame1[] = {
    5, 3,
    _INCBIN_U8("data/samus/gfx/Bottom_Standing_Frame1.gfx")
};

static const u8 sSamusGfx_Top_Left_Standing_Frame2[] = {
    4, 2,
    _INCBIN_U8("data/samus/gfx/Top_Left_Standing_Frame2.gfx")
};

static const u8 sSamusGfx_Bottom_Standing_Frame2[] = {
    5, 3,
    _INCBIN_U8("data/samus/gfx/Bottom_Standing_Frame2.gfx")
};

static const u8 sSamusGfx_Top_Left_Shooting_Frame0[] = {
    4, 2,
    _INCBIN_U8("data/samus/gfx/Top_Left_Shooting_Frame0.gfx")
};

static const u8 sSamusGfx_Top_Left_DiagonalDown_Standing_Frame0[] = {
    4, 2,
    _INCBIN_U8("data/samus/gfx/Top_Left_DiagonalDown_Standing_Frame0.gfx")
};

static const u8 sSamusGfx_Bottom_DiagonalDown_Standing_Frame0[] = {
    5, 3,
    _INCBIN_U8("data/samus/gfx/Bottom_DiagonalDown_Standing_Frame0.gfx")
};

static const u8 sSamusGfx_Top_Left_DiagonalDown_Standing_Frame1[] = {
    4, 2,
    _INCBIN_U8("data/samus/gfx/Top_Left_DiagonalDown_Standing_Frame1.gfx")
};

static const u8 sSamusGfx_Bottom_DiagonalDown_Standing_Frame1[] = {
    5, 3,
    _INCBIN_U8("data/samus/gfx/Bottom_DiagonalDown_Standing_Frame1.gfx")
};

static const u8 sSamusGfx_Top_Left_DiagonalDown_Standing_Frame2[] = {
    4, 2,
    _INCBIN_U8("data/samus/gfx/Top_Left_DiagonalDown_Standing_Frame2.gfx")
};

static const u8 sSamusGfx_Bottom_DiagonalDown_Standing_Frame2[] = {
    5, 3,
    _INCBIN_U8("data/samus/gfx/Bottom_DiagonalDown_Standing_Frame2.gfx")
};

static const u8 sSamusGfx_Top_Left_DiagonalDown_Shooting_Frame0[] = {
    4, 2,
    _INCBIN_U8("data/samus/gfx/Top_Left_DiagonalDown_Shooting_Frame0.gfx")
};

static const u8 sSamusGfx_Bottom_Left_Up_Crouching_Frame1[] = {
    3, 3,
    _INCBIN_U8("data/samus/gfx/Bottom_Left_Up_Crouching_Frame1.gfx")
};

static const u8 sSamusGfx_Bottom_Left_Up_Crouching_Frame0[] = {
    3, 3,
    _INCBIN_U8("data/samus/gfx/Bottom_Left_Up_Crouching_Frame0.gfx")
};

static const u8 sSamusGfx_Bottom_Left_DiagonalUp_Crouching_Frame1[] = {
    3, 3,
    _INCBIN_U8("data/samus/gfx/Bottom_Left_DiagonalUp_Crouching_Frame1.gfx")
};

static const u8 sSamusGfx_Bottom_Left_DiagonalUp_Crouching_Frame0[] = {
    3, 3,
    _INCBIN_U8("data/samus/gfx/Bottom_Left_DiagonalUp_Crouching_Frame0.gfx")
};

static const u8 sSamusGfx_Top_Left_Crouching_Frame1[] = {
    4, 2,
    _INCBIN_U8("data/samus/gfx/Top_Left_Crouching_Frame1.gfx")
};

static const u8 sSamusGfx_Bottom_Left_Crouching_Frame1[] = {
    3, 3,
    _INCBIN_U8("data/samus/gfx/Bottom_Left_Crouching_Frame1.gfx")
};

static const u8 sSamusGfx_Bottom_Left_Crouching_Frame0[] = {
    3, 3,
    _INCBIN_U8("data/samus/gfx/Bottom_Left_Crouching_Frame0.gfx")
};

static const u8 sSamusGfx_Bottom_Left_DiagonalDown_Crouching_Frame1[] = {
    3, 3,
    _INCBIN_U8("data/samus/gfx/Bottom_Left_DiagonalDown_Crouching_Frame1.gfx")
};

static const u8 sSamusGfx_Bottom_Left_DiagonalDown_Crouching_Frame0[] = {
    3, 3,
    _INCBIN_U8("data/samus/gfx/Bottom_Left_DiagonalDown_Crouching_Frame0.gfx")
};

static const u8 sSamusGfx_Top_Right_Running_Frame0[] = {
    5, 2,
    _INCBIN_U8("data/samus/gfx/Top_Right_Running_Frame0.gfx")
};

static const u8 sSamusGfx_Top_Right_Running_Frame1[] = {
    4, 2,
    _INCBIN_U8("data/samus/gfx/Top_Right_Running_Frame1.gfx")
};

static const u8 sSamusGfx_Top_Right_Running_Frame2[] = {
    5, 3,
    _INCBIN_U8("data/samus/gfx/Top_Right_Running_Frame2.gfx")
};

static const u8 sSamusGfx_Top_Right_Running_Frame3[] = {
    5, 2,
    _INCBIN_U8("data/samus/gfx/Top_Right_Running_Frame3.gfx")
};

static const u8 sSamusGfx_Top_Right_Running_Frame4[] = {
    4, 2,
    _INCBIN_U8("data/samus/gfx/Top_Right_Running_Frame4.gfx")
};

static const u8 sSamusGfx_Top_Right_Running_Frame5[] = {
    4, 2,
    _INCBIN_U8("data/samus/gfx/Top_Right_Running_Frame5.gfx")
};

static const u8 sSamusGfx_Top_Right_Running_Frame6[] = {
    3, 2,
    _INCBIN_U8("data/samus/gfx/Top_Right_Running_Frame6.gfx")
};

static const u8 sSamusGfx_Top_Right_Running_Frame7[] = {
    3, 3,
    _INCBIN_U8("data/samus/gfx/Top_Right_Running_Frame7.gfx")
};

static const u8 sSamusGfx_Top_Right_Running_Frame8[] = {
    3, 3,
    _INCBIN_U8("data/samus/gfx/Top_Right_Running_Frame8.gfx")
};

static const u8 sSamusGfx_Top_Right_Running_Frame9[] = {
    3, 2,
    _INCBIN_U8("data/samus/gfx/Top_Right_Running_Frame9.gfx")
};

static const u8 sSamusGfx_Top_Right_DiagonalUp_Running_Frame0[] = {
    2, 2,
    _INCBIN_U8("data/samus/gfx/Top_Right_DiagonalUp_Running_Frame0.gfx")
};

static const u8 sSamusGfx_Top_Right_DiagonalUp_Running_Frame1[] = {
    2, 2,
    _INCBIN_U8("data/samus/gfx/Top_Right_DiagonalUp_Running_Frame1.gfx")
};

static const u8 sSamusGfx_Top_Right_DiagonalUp_Running_Frame2[] = {
    3, 3,
    _INCBIN_U8("data/samus/gfx/Top_Right_DiagonalUp_Running_Frame2.gfx")
};

static const u8 sSamusGfx_Top_Right_Forward_Running_Frame0[] = {
    3, 2,
    _INCBIN_U8("data/samus/gfx/Top_Right_Forward_Running_Frame0.gfx")
};

static const u8 sSamusGfx_Top_Right_Forward_Running_Frame1[] = {
    3, 2,
    _INCBIN_U8("data/samus/gfx/Top_Right_Forward_Running_Frame1.gfx")
};

static const u8 sSamusGfx_Top_Right_Forward_Running_Frame2[] = {
    3, 2,
    _INCBIN_U8("data/samus/gfx/Top_Right_Forward_Running_Frame2.gfx")
};

static const u8 sSamusGfx_Top_Right_DiagonalDown_Running_Frame0[] = {
    3, 2,
    _INCBIN_U8("data/samus/gfx/Top_Right_DiagonalDown_Running_Frame0.gfx")
};

static const u8 sSamusGfx_Top_Right_DiagonalDown_Running_Frame1[] = {
    3, 2,
    _INCBIN_U8("data/samus/gfx/Top_Right_DiagonalDown_Running_Frame1.gfx")
};

static const u8 sSamusGfx_Top_Right_DiagonalDown_Running_Frame2[] = {
    3, 2,
    _INCBIN_U8("data/samus/gfx/Top_Right_DiagonalDown_Running_Frame2.gfx")
};

static const u8 sSamusGfx_Top_Right_Up_Standing_Frame0[] = {
    2, 2,
    _INCBIN_U8("data/samus/gfx/Top_Right_Up_Standing_Frame0.gfx")
};

static const u8 sSamusGfx_Top_Right_Up_Standing_Frame1[] = {
    2, 2,
    _INCBIN_U8("data/samus/gfx/Top_Right_Up_Standing_Frame1.gfx")
};

static const u8 sSamusGfx_Top_Right_Up_Standing_Frame2[] = {
    2, 2,
    _INCBIN_U8("data/samus/gfx/Top_Right_Up_Standing_Frame2.gfx")
};

static const u8 sSamusGfx_Top_Right_Up_Shooting_Frame0[] = {
    2, 2,
    _INCBIN_U8("data/samus/gfx/Top_Right_Up_Shooting_Frame0.gfx")
};

static const u8 sSamusGfx_Bottom_Right_Up_Shooting_Frame0[] = {
    5, 3,
    _INCBIN_U8("data/samus/gfx/Bottom_Right_Up_Shooting_Frame0.gfx")
};

static const u8 sSamusGfx_Top_Right_DiagonalUp_Standing_Frame0[] = {
    3, 3,
    _INCBIN_U8("data/samus/gfx/Top_Right_DiagonalUp_Standing_Frame0.gfx")
};

static const u8 sSamusGfx_Top_Right_DiagonalUp_Standing_Frame1[] = {
    3, 3,
    _INCBIN_U8("data/samus/gfx/Top_Right_DiagonalUp_Standing_Frame1.gfx")
};

static const u8 sSamusGfx_Top_Right_DiagonalUp_Standing_Frame2[] = {
    3, 3,
    _INCBIN_U8("data/samus/gfx/Top_Right_DiagonalUp_Standing_Frame2.gfx")
};

static const u8 sSamusGfx_Top_Right_DiagonalUp_Shooting_Frame0[] = {
    3, 3,
    _INCBIN_U8("data/samus/gfx/Top_Right_DiagonalUp_Shooting_Frame0.gfx")
};

static const u8 sSamusGfx_Top_Right_Standing_Frame0[] = {
    3, 2,
    _INCBIN_U8("data/samus/gfx/Top_Right_Standing_Frame0.gfx")
};

static const u8 sSamusGfx_Top_Right_Standing_Frame1[] = {
    3, 2,
    _INCBIN_U8("data/samus/gfx/Top_Right_Standing_Frame1.gfx")
};

static const u8 sSamusGfx_Top_Right_Standing_Frame2[] = {
    3, 2,
    _INCBIN_U8("data/samus/gfx/Top_Right_Standing_Frame2.gfx")
};

static const u8 sSamusGfx_Top_Right_Shooting_Frame0[] = {
    3, 2,
    _INCBIN_U8("data/samus/gfx/Top_Right_Shooting_Frame0.gfx")
};

static const u8 sSamusGfx_Top_Right_DiagonalDown_Standing_Frame0[] = {
    3, 2,
    _INCBIN_U8("data/samus/gfx/Top_Right_DiagonalDown_Standing_Frame0.gfx")
};

static const u8 sSamusGfx_Top_Right_DiagonalDown_Standing_Frame1[] = {
    3, 2,
    _INCBIN_U8("data/samus/gfx/Top_Right_DiagonalDown_Standing_Frame1.gfx")
};

static const u8 sSamusGfx_Top_Right_DiagonalDown_Standing_Frame2[] = {
    3, 2,
    _INCBIN_U8("data/samus/gfx/Top_Right_DiagonalDown_Standing_Frame2.gfx")
};

static const u8 sSamusGfx_Top_Right_DiagonalDown_Shooting_Frame0[] = {
    3, 2,
    _INCBIN_U8("data/samus/gfx/Top_Right_DiagonalDown_Shooting_Frame0.gfx")
};

static const u8 sSamusGfx_Bottom_Right_Up_Crouching_Frame1[] = {
    3, 3,
    _INCBIN_U8("data/samus/gfx/Bottom_Right_Up_Crouching_Frame1.gfx")
};

static const u8 sSamusGfx_Bottom_Right_Up_Crouching_Frame0[] = {
    3, 3,
    _INCBIN_U8("data/samus/gfx/Bottom_Right_Up_Crouching_Frame0.gfx")
};

static const u8 sSamusGfx_Bottom_Right_DiagonalUp_Crouching_Frame1[] = {
    3, 3,
    _INCBIN_U8("data/samus/gfx/Bottom_Right_DiagonalUp_Crouching_Frame1.gfx")
};

static const u8 sSamusGfx_Bottom_Right_DiagonalUp_Crouching_Frame0[] = {
    3, 3,
    _INCBIN_U8("data/samus/gfx/Bottom_Right_DiagonalUp_Crouching_Frame0.gfx")
};

static const u8 sSamusGfx_Bottom_Right_Crouching_Frame1[] = {
    3, 3,
    _INCBIN_U8("data/samus/gfx/Bottom_Right_Crouching_Frame1.gfx")
};

static const u8 sSamusGfx_Bottom_Right_Crouching_Frame0[] = {
    3, 3,
    _INCBIN_U8("data/samus/gfx/Bottom_Right_Crouching_Frame0.gfx")
};

static const u8 sSamusGfx_Bottom_Right_DiagonalDown_Crouching_Frame1[] = {
    3, 3,
    _INCBIN_U8("data/samus/gfx/Bottom_Right_DiagonalDown_Crouching_Frame1.gfx")
};

static const u8 sSamusGfx_Bottom_Right_DiagonalDown_Crouching_Frame0[] = {
    3, 3,
    _INCBIN_U8("data/samus/gfx/Bottom_Right_DiagonalDown_Crouching_Frame0.gfx")
};

static const u8 sSamusGfx_Top_Left_Skidding_Frame0[] = {
    6, 6,
    _INCBIN_U8("data/samus/gfx/Top_Left_Skidding_Frame0.gfx")
};

static const u8 sSamusGfx_Bottom_Skidding_Frame0[] = {
    5, 3,
    _INCBIN_U8("data/samus/gfx/Bottom_Skidding_Frame0.gfx")
};

static const u8 sSamusGfx_Top_Left_Armed_Skidding_Frame0[] = {
    6, 6,
    _INCBIN_U8("data/samus/gfx/Top_Left_Armed_Skidding_Frame0.gfx")
};

static const u8 sSamusGfx_Top_Right_Skidding_Frame0[] = {
    6, 6,
    _INCBIN_U8("data/samus/gfx/Top_Right_Skidding_Frame0.gfx")
};

static const u8 sSamusGfx_Top_Right_Armed_Skidding_Frame0[] = {
    6, 6,
    _INCBIN_U8("data/samus/gfx/Top_Right_Armed_Skidding_Frame0.gfx")
};

static const u8 sSamusGfx_Top_Left_HitByOmegaMetroid_Frame0[] = {
    7, 6,
    _INCBIN_U8("data/samus/gfx/Top_Left_HitByOmegaMetroid_Frame0.gfx")
};

static const u8 sSamusGfx_Bottom_HitByOmegaMetroid_Frame0[] = {
    3, 3,
    _INCBIN_U8("data/samus/gfx/Bottom_HitByOmegaMetroid_Frame0.gfx")
};

static const u8 sSamusGfx_Top_Left_HitByOmegaMetroid_Frame1[] = {
    7, 6,
    _INCBIN_U8("data/samus/gfx/Top_Left_HitByOmegaMetroid_Frame1.gfx")
};

static const u8 sSamusGfx_Bottom_HitByOmegaMetroid_Frame1[] = {
    3, 3,
    _INCBIN_U8("data/samus/gfx/Bottom_HitByOmegaMetroid_Frame1.gfx")
};

static const u8 sSamusGfx_Top_Left_HitByOmegaMetroid_Frame2[] = {
    6, 6,
    _INCBIN_U8("data/samus/gfx/Top_Left_HitByOmegaMetroid_Frame2.gfx")
};

static const u8 sSamusGfx_Bottom_HitByOmegaMetroid_Frame2[] = {
    3, 3,
    _INCBIN_U8("data/samus/gfx/Bottom_HitByOmegaMetroid_Frame2.gfx")
};

static const u8 sSamusGfx_Top_Left_LookingUp_HitByOmegaMetroid_Frame0[] = {
    7, 6,
    _INCBIN_U8("data/samus/gfx/Top_Left_LookingUp_HitByOmegaMetroid_Frame0.gfx")
};

static const u8 sSamusGfx_Top_Left_LookingUp_HitByOmegaMetroid_Frame1[] = {
    7, 6,
    _INCBIN_U8("data/samus/gfx/Top_Left_LookingUp_HitByOmegaMetroid_Frame1.gfx")
};

static const u8 sSamusGfx_Top_Left_LookingUp_HitByOmegaMetroid_Frame2[] = {
    6, 6,
    _INCBIN_U8("data/samus/gfx/Top_Left_LookingUp_HitByOmegaMetroid_Frame2.gfx")
};

static const u8 sSamusGfx_Top_Right_HitByOmegaMetroid_Frame0[] = {
    8, 6,
    _INCBIN_U8("data/samus/gfx/Top_Right_HitByOmegaMetroid_Frame0.gfx")
};

static const u8 sSamusGfx_Top_Right_HitByOmegaMetroid_Frame1[] = {
    7, 5,
    _INCBIN_U8("data/samus/gfx/Top_Right_HitByOmegaMetroid_Frame1.gfx")
};

static const u8 sSamusGfx_Top_Right_HitByOmegaMetroid_Frame2[] = {
    5, 5,
    _INCBIN_U8("data/samus/gfx/Top_Right_HitByOmegaMetroid_Frame2.gfx")
};

static const u8 sSamusGfx_Top_Right_LookingUp_HitByOmegaMetroid_Frame0[] = {
    8, 6,
    _INCBIN_U8("data/samus/gfx/Top_Right_LookingUp_HitByOmegaMetroid_Frame0.gfx")
};

static const u8 sSamusGfx_Top_Right_LookingUp_HitByOmegaMetroid_Frame1[] = {
    7, 5,
    _INCBIN_U8("data/samus/gfx/Top_Right_LookingUp_HitByOmegaMetroid_Frame1.gfx")
};

static const u8 sSamusGfx_Top_Right_LookingUp_HitByOmegaMetroid_Frame2[] = {
    5, 5,
    _INCBIN_U8("data/samus/gfx/Top_Right_LookingUp_HitByOmegaMetroid_Frame2.gfx")
};

static const u16 sSamusOam_Left_Running_Frame0[] = {
    4,
    OAM_ENTRY(-8, -34, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-8, -42, OAM_DIMS_8x8, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-5, -24, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-5, -8, OAM_DIMS_16x8, OAM_NO_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_Left_Running_Frame1[] = {
    4,
    OAM_ENTRY(-6, -41, OAM_DIMS_8x8, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-10, -33, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-5, -24, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-5, -8, OAM_DIMS_16x8, OAM_NO_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_Left_Running_Frame2[] = {
    5,
    OAM_ENTRY(-14, -36, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(2, -36, OAM_DIMS_8x16, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-7, -17, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(9, -17, OAM_DIMS_8x16, OAM_NO_FLIP, 0x16, 0, 0),
    OAM_ENTRY(-7, -25, OAM_DIMS_16x8, OAM_NO_FLIP, 0x17, 0, 0)
};

static const u16 sSamusOam_Left_Running_Frame3[] = {
    5,
    OAM_ENTRY(-8, -35, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-16, -35, OAM_DIMS_8x16, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-15, -18, OAM_DIMS_32x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-7, -26, OAM_DIMS_16x8, OAM_NO_FLIP, 0x18, 0, 0),
    OAM_ENTRY(-8, -43, OAM_DIMS_8x8, OAM_NO_FLIP, 0x3, 0, 0)
};

static const u16 sSamusOam_Left_Running_Frame4[] = {
    4,
    OAM_ENTRY(-10, -33, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-2, -24, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-10, -16, OAM_DIMS_16x16, OAM_NO_FLIP, 0x16, 0, 0),
    OAM_ENTRY(-11, -41, OAM_DIMS_16x8, OAM_NO_FLIP, 0x2, 0, 0)
};

static const u16 sSamusOam_Left_Running_Frame5[] = {
    4,
    OAM_ENTRY(-8, -34, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-5, -24, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-5, -8, OAM_DIMS_16x8, OAM_NO_FLIP, 0x16, 0, 0),
    OAM_ENTRY(-8, -42, OAM_DIMS_8x8, OAM_NO_FLIP, 0x2, 0, 0)
};

static const u16 sSamusOam_Left_Running_Frame6[] = {
    3,
    OAM_ENTRY(-9, -37, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-5, -24, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-5, -8, OAM_DIMS_16x8, OAM_NO_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_Left_Running_Frame7[] = {
    5,
    OAM_ENTRY(-8, -38, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-16, -30, OAM_DIMS_8x8, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-7, -17, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-7, -25, OAM_DIMS_16x8, OAM_NO_FLIP, 0x17, 0, 0),
    OAM_ENTRY(9, -17, OAM_DIMS_8x16, OAM_NO_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_Left_Running_Frame8[] = {
    4,
    OAM_ENTRY(-10, -37, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-18, -29, OAM_DIMS_8x8, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-15, -18, OAM_DIMS_32x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-7, -26, OAM_DIMS_16x8, OAM_NO_FLIP, 0x18, 0, 0)
};

static const u16 sSamusOam_Left_Running_Frame9[] = {
    4,
    OAM_ENTRY(-10, -36, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-8, -24, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(8, -24, OAM_DIMS_8x16, OAM_NO_FLIP, 0x16, 0, 0),
    OAM_ENTRY(-8, -8, OAM_DIMS_16x8, OAM_NO_FLIP, 0x17, 0, 0)
};

static const u16 sSamusOam_Left_DiagonalUp_Running_Frame0[] = {
    4,
    OAM_ENTRY(-17, -35, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-1, -35, OAM_DIMS_8x16, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-5, -24, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-5, -8, OAM_DIMS_16x8, OAM_NO_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_Left_DiagonalUp_Running_Frame1[] = {
    4,
    OAM_ENTRY(-9, -36, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-17, -36, OAM_DIMS_8x16, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-5, -24, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-5, -8, OAM_DIMS_16x8, OAM_NO_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_Left_DiagonalUp_Running_Frame2[] = {
    5,
    OAM_ENTRY(-18, -38, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-2, -38, OAM_DIMS_8x16, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-7, -17, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(9, -17, OAM_DIMS_8x16, OAM_NO_FLIP, 0x16, 0, 0),
    OAM_ENTRY(-7, -25, OAM_DIMS_16x8, OAM_NO_FLIP, 0x17, 0, 0)
};

static const u16 sSamusOam_Left_DiagonalUp_Running_Frame3[] = {
    4,
    OAM_ENTRY(-18, -39, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-2, -39, OAM_DIMS_8x16, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-15, -18, OAM_DIMS_32x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-7, -26, OAM_DIMS_16x8, OAM_NO_FLIP, 0x18, 0, 0)
};

static const u16 sSamusOam_Left_DiagonalUp_Running_Frame4[] = {
    4,
    OAM_ENTRY(-9, -36, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-17, -36, OAM_DIMS_8x16, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-2, -24, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-10, -16, OAM_DIMS_16x16, OAM_NO_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_Left_DiagonalUp_Running_Frame5[] = {
    4,
    OAM_ENTRY(-18, -35, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-2, -35, OAM_DIMS_8x16, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-5, -24, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-5, -8, OAM_DIMS_16x8, OAM_NO_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_Left_DiagonalUp_Running_Frame6[] = {
    4,
    OAM_ENTRY(-10, -36, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-18, -36, OAM_DIMS_8x16, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-5, -24, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-5, -8, OAM_DIMS_16x8, OAM_NO_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_Left_DiagonalUp_Running_Frame7[] = {
    5,
    OAM_ENTRY(-19, -38, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-3, -38, OAM_DIMS_8x16, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-7, -17, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-7, -25, OAM_DIMS_16x8, OAM_NO_FLIP, 0x17, 0, 0),
    OAM_ENTRY(9, -17, OAM_DIMS_8x16, OAM_NO_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_Left_DiagonalUp_Running_Frame9[] = {
    5,
    OAM_ENTRY(-10, -36, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-18, -36, OAM_DIMS_8x16, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-8, -24, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(8, -24, OAM_DIMS_8x16, OAM_NO_FLIP, 0x16, 0, 0),
    OAM_ENTRY(-8, -8, OAM_DIMS_16x8, OAM_NO_FLIP, 0x17, 0, 0)
};

static const u16 sSamusOam_Left_Forward_Running_Frame0[] = {
    5,
    OAM_ENTRY(-9, -34, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-17, -26, OAM_DIMS_8x8, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-8, -42, OAM_DIMS_8x8, OAM_NO_FLIP, 0x3, 0, 0),
    OAM_ENTRY(-5, -24, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-5, -8, OAM_DIMS_16x8, OAM_NO_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_Left_Forward_Running_Frame1[] = {
    5,
    OAM_ENTRY(-10, -35, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-18, -27, OAM_DIMS_8x8, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-9, -43, OAM_DIMS_8x8, OAM_NO_FLIP, 0x3, 0, 0),
    OAM_ENTRY(-5, -24, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-5, -8, OAM_DIMS_16x8, OAM_NO_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_Left_Forward_Running_Frame2[] = {
    6,
    OAM_ENTRY(-10, -35, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-18, -27, OAM_DIMS_8x8, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-9, -43, OAM_DIMS_8x8, OAM_NO_FLIP, 0x3, 0, 0),
    OAM_ENTRY(-7, -17, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(9, -17, OAM_DIMS_8x16, OAM_NO_FLIP, 0x16, 0, 0),
    OAM_ENTRY(-7, -25, OAM_DIMS_16x8, OAM_NO_FLIP, 0x17, 0, 0)
};

static const u16 sSamusOam_Left_Forward_Running_Frame3[] = {
    5,
    OAM_ENTRY(-10, -36, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-18, -28, OAM_DIMS_8x8, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-9, -44, OAM_DIMS_8x8, OAM_NO_FLIP, 0x3, 0, 0),
    OAM_ENTRY(-15, -18, OAM_DIMS_32x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-7, -26, OAM_DIMS_16x8, OAM_NO_FLIP, 0x18, 0, 0)
};

static const u16 sSamusOam_Left_Forward_Running_Frame4[] = {
    5,
    OAM_ENTRY(-9, -34, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-17, -26, OAM_DIMS_8x8, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-8, -42, OAM_DIMS_8x8, OAM_NO_FLIP, 0x3, 0, 0),
    OAM_ENTRY(-2, -24, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-10, -16, OAM_DIMS_16x16, OAM_NO_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_Left_Forward_Running_Frame5[] = {
    5,
    OAM_ENTRY(-10, -34, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-18, -26, OAM_DIMS_8x8, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-9, -42, OAM_DIMS_8x8, OAM_NO_FLIP, 0x3, 0, 0),
    OAM_ENTRY(-5, -24, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-5, -8, OAM_DIMS_16x8, OAM_NO_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_Left_Forward_Running_Frame7[] = {
    6,
    OAM_ENTRY(-11, -35, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-19, -27, OAM_DIMS_8x8, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-10, -43, OAM_DIMS_8x8, OAM_NO_FLIP, 0x3, 0, 0),
    OAM_ENTRY(-7, -17, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-7, -25, OAM_DIMS_16x8, OAM_NO_FLIP, 0x17, 0, 0),
    OAM_ENTRY(9, -17, OAM_DIMS_8x16, OAM_NO_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_Left_Forward_Running_Frame8[] = {
    5,
    OAM_ENTRY(-11, -36, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-19, -28, OAM_DIMS_8x8, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-10, -44, OAM_DIMS_8x8, OAM_NO_FLIP, 0x3, 0, 0),
    OAM_ENTRY(-15, -18, OAM_DIMS_32x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-7, -26, OAM_DIMS_16x8, OAM_NO_FLIP, 0x18, 0, 0)
};

static const u16 sSamusOam_Left_Forward_Running_Frame9[] = {
    6,
    OAM_ENTRY(-10, -34, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-18, -26, OAM_DIMS_8x8, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-9, -42, OAM_DIMS_8x8, OAM_NO_FLIP, 0x3, 0, 0),
    OAM_ENTRY(-8, -24, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(8, -24, OAM_DIMS_8x16, OAM_NO_FLIP, 0x16, 0, 0),
    OAM_ENTRY(-8, -8, OAM_DIMS_16x8, OAM_NO_FLIP, 0x17, 0, 0)
};

static const u16 sSamusOam_Left_DiagonalDown_Running_Frame0[] = {
    4,
    OAM_ENTRY(-6, -38, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-14, -22, OAM_DIMS_16x8, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-5, -24, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-5, -8, OAM_DIMS_16x8, OAM_NO_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_Left_DiagonalDown_Running_Frame1[] = {
    4,
    OAM_ENTRY(-8, -39, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-16, -23, OAM_DIMS_16x8, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-5, -24, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-5, -8, OAM_DIMS_16x8, OAM_NO_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_Left_DiagonalDown_Running_Frame2[] = {
    5,
    OAM_ENTRY(-8, -39, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-16, -23, OAM_DIMS_16x8, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-7, -17, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(9, -17, OAM_DIMS_8x16, OAM_NO_FLIP, 0x16, 0, 0),
    OAM_ENTRY(-7, -25, OAM_DIMS_16x8, OAM_NO_FLIP, 0x17, 0, 0)
};

static const u16 sSamusOam_Left_DiagonalDown_Running_Frame3[] = {
    4,
    OAM_ENTRY(-8, -40, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-16, -24, OAM_DIMS_16x8, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-15, -18, OAM_DIMS_32x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-7, -26, OAM_DIMS_16x8, OAM_NO_FLIP, 0x18, 0, 0)
};

static const u16 sSamusOam_Left_DiagonalDown_Running_Frame4[] = {
    4,
    OAM_ENTRY(-6, -38, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-14, -22, OAM_DIMS_16x8, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-2, -24, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-10, -16, OAM_DIMS_16x16, OAM_NO_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_Left_DiagonalDown_Running_Frame5[] = {
    4,
    OAM_ENTRY(-7, -38, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-15, -22, OAM_DIMS_16x8, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-5, -24, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-5, -8, OAM_DIMS_16x8, OAM_NO_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_Left_DiagonalDown_Running_Frame7[] = {
    5,
    OAM_ENTRY(-9, -39, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-17, -23, OAM_DIMS_16x8, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-7, -17, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-7, -25, OAM_DIMS_16x8, OAM_NO_FLIP, 0x17, 0, 0),
    OAM_ENTRY(9, -17, OAM_DIMS_8x16, OAM_NO_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_Left_DiagonalDown_Running_Frame8[] = {
    4,
    OAM_ENTRY(-9, -40, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-17, -24, OAM_DIMS_16x8, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-15, -18, OAM_DIMS_32x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-7, -26, OAM_DIMS_16x8, OAM_NO_FLIP, 0x18, 0, 0)
};

static const u16 sSamusOam_Left_DiagonalDown_Running_Frame9[] = {
    5,
    OAM_ENTRY(-7, -38, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-15, -22, OAM_DIMS_16x8, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-8, -24, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(8, -24, OAM_DIMS_8x16, OAM_NO_FLIP, 0x16, 0, 0),
    OAM_ENTRY(-8, -8, OAM_DIMS_16x8, OAM_NO_FLIP, 0x17, 0, 0)
};

static const u16 sSamusOam_Left_Up_Standing_Frame2[] = {
    5,
    OAM_ENTRY(-9, -38, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-9, -46, OAM_DIMS_8x8, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-10, -24, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-10, -8, OAM_DIMS_16x8, OAM_NO_FLIP, 0x17, 0, 0),
    OAM_ENTRY(6, -16, OAM_DIMS_8x16, OAM_NO_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_Left_Up_Standing_Frame0[] = {
    5,
    OAM_ENTRY(-9, -38, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-9, -46, OAM_DIMS_8x8, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-10, -16, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(6, -16, OAM_DIMS_8x16, OAM_NO_FLIP, 0x16, 0, 0),
    OAM_ENTRY(-10, -24, OAM_DIMS_16x8, OAM_NO_FLIP, 0x17, 0, 0)
};

static const u16 sSamusOam_Left_DiagonalUp_Standing_Frame0[] = {
    5,
    OAM_ENTRY(-3, -38, OAM_DIMS_8x16, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-19, -38, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-10, -16, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(6, -16, OAM_DIMS_8x16, OAM_NO_FLIP, 0x16, 0, 0),
    OAM_ENTRY(-10, -24, OAM_DIMS_16x8, OAM_NO_FLIP, 0x17, 0, 0)
};

static const u16 sSamusOam_Left_DiagonalUp_Standing_Frame1[] = {
    5,
    OAM_ENTRY(-11, -38, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-19, -38, OAM_DIMS_8x16, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-10, -16, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(6, -16, OAM_DIMS_8x16, OAM_NO_FLIP, 0x16, 0, 0),
    OAM_ENTRY(-10, -24, OAM_DIMS_16x8, OAM_NO_FLIP, 0x17, 0, 0)
};

static const u16 sSamusOam_Left_DiagonalUp_Shooting_Frame0[] = {
    5,
    OAM_ENTRY(-10, -38, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-18, -38, OAM_DIMS_8x16, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-10, -16, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(6, -16, OAM_DIMS_8x16, OAM_NO_FLIP, 0x16, 0, 0),
    OAM_ENTRY(-10, -24, OAM_DIMS_16x8, OAM_NO_FLIP, 0x17, 0, 0)
};

static const u16 sSamusOam_Left_Standing_Frame0[] = {
    6,
    OAM_ENTRY(-8, -41, OAM_DIMS_8x8, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-12, -33, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-20, -25, OAM_DIMS_8x8, OAM_NO_FLIP, 0x3, 0, 0),
    OAM_ENTRY(-6, -16, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-6, -24, OAM_DIMS_16x8, OAM_NO_FLIP, 0x17, 0, 0),
    OAM_ENTRY(-14, -16, OAM_DIMS_8x16, OAM_NO_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_Left_Standing_Frame1[] = {
    6,
    OAM_ENTRY(-12, -33, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-20, -25, OAM_DIMS_8x8, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-8, -41, OAM_DIMS_8x8, OAM_NO_FLIP, 0x3, 0, 0),
    OAM_ENTRY(-6, -16, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-6, -24, OAM_DIMS_16x8, OAM_NO_FLIP, 0x17, 0, 0),
    OAM_ENTRY(-14, -16, OAM_DIMS_8x16, OAM_NO_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_Left_Standing_Frame2[] = {
    6,
    OAM_ENTRY(-20, -25, OAM_DIMS_8x8, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-12, -33, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-6, -16, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-14, -16, OAM_DIMS_8x16, OAM_NO_FLIP, 0x16, 0, 0),
    OAM_ENTRY(-6, -24, OAM_DIMS_16x8, OAM_NO_FLIP, 0x17, 0, 0),
    OAM_ENTRY(-8, -41, OAM_DIMS_8x8, OAM_NO_FLIP, 0x3, 0, 0)
};

static const u16 sSamusOam_Left_Shooting_Frame0[] = {
    5,
    OAM_ENTRY(-12, -33, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-12, -41, OAM_DIMS_16x8, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-6, -16, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-14, -16, OAM_DIMS_8x16, OAM_NO_FLIP, 0x16, 0, 0),
    OAM_ENTRY(-6, -24, OAM_DIMS_16x8, OAM_NO_FLIP, 0x17, 0, 0)
};

static const u16 sSamusOam_Left_DiagonalDown_Standing_Frame0[] = {
    5,
    OAM_ENTRY(-10, -36, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-18, -20, OAM_DIMS_16x8, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-6, -24, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-6, -8, OAM_DIMS_16x8, OAM_NO_FLIP, 0x17, 0, 0),
    OAM_ENTRY(-14, -16, OAM_DIMS_8x16, OAM_NO_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_Left_DiagonalDown_Standing_Frame1[] = {
    5,
    OAM_ENTRY(-10, -36, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-18, -20, OAM_DIMS_16x8, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-6, -16, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-14, -16, OAM_DIMS_8x16, OAM_NO_FLIP, 0x16, 0, 0),
    OAM_ENTRY(-6, -24, OAM_DIMS_16x8, OAM_NO_FLIP, 0x17, 0, 0)
};

static const u16 sSamusOam_Left_DiagonalDown_Standing_Frame2[] = {
    5,
    OAM_ENTRY(-18, -20, OAM_DIMS_16x8, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-10, -36, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-6, -24, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-6, -8, OAM_DIMS_16x8, OAM_NO_FLIP, 0x17, 0, 0),
    OAM_ENTRY(-14, -16, OAM_DIMS_8x16, OAM_NO_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_Left_DiagonalDown_Shooting_Frame0[] = {
    5,
    OAM_ENTRY(-9, -37, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-17, -21, OAM_DIMS_16x8, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-6, -16, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-14, -16, OAM_DIMS_8x16, OAM_NO_FLIP, 0x16, 0, 0),
    OAM_ENTRY(-6, -24, OAM_DIMS_16x8, OAM_NO_FLIP, 0x17, 0, 0)
};

static const u16 sSamusOam_Left_Up_Crouching_Frame1[] = {
    4,
    OAM_ENTRY(-8, -30, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-8, -38, OAM_DIMS_8x8, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-7, -16, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-15, -16, OAM_DIMS_8x16, OAM_NO_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_Left_Up_Crouching_Frame0[] = {
    4,
    OAM_ENTRY(-9, -29, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-9, -37, OAM_DIMS_8x8, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-7, -16, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-15, -16, OAM_DIMS_8x16, OAM_NO_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_Left_DiagonalUp_Crouching_Frame1[] = {
    4,
    OAM_ENTRY(-2, -30, OAM_DIMS_8x16, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-18, -30, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-7, -16, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-15, -16, OAM_DIMS_8x16, OAM_NO_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_Left_DiagonalUp_Crouching_Frame0[] = {
    4,
    OAM_ENTRY(-9, -30, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-17, -30, OAM_DIMS_8x16, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-7, -16, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-15, -16, OAM_DIMS_8x16, OAM_NO_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_Left_Crouching_Frame1[] = {
    5,
    OAM_ENTRY(-10, -24, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-18, -16, OAM_DIMS_8x8, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-6, -32, OAM_DIMS_8x8, OAM_NO_FLIP, 0x3, 0, 0),
    OAM_ENTRY(-7, -16, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-15, -16, OAM_DIMS_8x16, OAM_NO_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_Left_Crouching_Frame0[] = {
    4,
    OAM_ENTRY(-10, -24, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-10, -32, OAM_DIMS_16x8, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-7, -16, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-15, -16, OAM_DIMS_8x16, OAM_NO_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_Left_DiagonalDown_Crouching_Frame1[] = {
    4,
    OAM_ENTRY(-10, -26, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-18, -10, OAM_DIMS_16x8, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-7, -16, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-15, -16, OAM_DIMS_8x16, OAM_NO_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_Left_DiagonalDown_Crouching_Frame0[] = {
    4,
    OAM_ENTRY(-9, -27, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-17, -11, OAM_DIMS_16x8, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-7, -16, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-15, -16, OAM_DIMS_8x16, OAM_NO_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_Right_Running_Frame0[] = {
    5,
    OAM_ENTRY(-6, -35, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-6, -19, OAM_DIMS_16x8, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(10, -27, OAM_DIMS_8x8, OAM_NO_FLIP, 0x4, 0, 0),
    OAM_ENTRY(-11, -24, OAM_DIMS_16x16, OAM_X_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-11, -8, OAM_DIMS_16x8, OAM_X_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_Right_Running_Frame1[] = {
    4,
    OAM_ENTRY(-6, -35, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-6, -19, OAM_DIMS_16x8, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-11, -24, OAM_DIMS_16x16, OAM_X_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-11, -8, OAM_DIMS_16x8, OAM_X_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_Right_Running_Frame2[] = {
    6,
    OAM_ENTRY(-10, -37, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(6, -37, OAM_DIMS_8x16, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-10, -21, OAM_DIMS_16x8, OAM_NO_FLIP, 0x3, 0, 0),
    OAM_ENTRY(-9, -17, OAM_DIMS_16x16, OAM_X_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-17, -17, OAM_DIMS_8x16, OAM_X_FLIP, 0x16, 0, 0),
    OAM_ENTRY(-9, -25, OAM_DIMS_16x8, OAM_X_FLIP, 0x17, 0, 0)
};

static const u16 sSamusOam_Right_Running_Frame3[] = {
    5,
    OAM_ENTRY(-8, -37, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-8, -21, OAM_DIMS_16x8, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(8, -29, OAM_DIMS_8x8, OAM_NO_FLIP, 0x4, 0, 0),
    OAM_ENTRY(-17, -18, OAM_DIMS_32x16, OAM_X_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-9, -26, OAM_DIMS_16x8, OAM_X_FLIP, 0x18, 0, 0)
};

static const u16 sSamusOam_Right_Running_Frame4[] = {
    4,
    OAM_ENTRY(-6, -36, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-6, -20, OAM_DIMS_16x8, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-14, -24, OAM_DIMS_16x16, OAM_X_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-6, -16, OAM_DIMS_16x16, OAM_X_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_Right_Running_Frame5[] = {
    4,
    OAM_ENTRY(-7, -35, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-7, -19, OAM_DIMS_16x8, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-11, -24, OAM_DIMS_16x16, OAM_X_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-11, -8, OAM_DIMS_16x8, OAM_X_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_Right_Running_Frame6[] = {
    4,
    OAM_ENTRY(-7, -35, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(9, -27, OAM_DIMS_8x8, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-11, -24, OAM_DIMS_16x16, OAM_X_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-11, -8, OAM_DIMS_16x8, OAM_X_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_Right_Running_Frame7[] = {
    5,
    OAM_ENTRY(-8, -37, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(8, -37, OAM_DIMS_8x16, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-9, -17, OAM_DIMS_16x16, OAM_X_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-9, -25, OAM_DIMS_16x8, OAM_X_FLIP, 0x17, 0, 0),
    OAM_ENTRY(-17, -17, OAM_DIMS_8x16, OAM_X_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_Right_Running_Frame8[] = {
    4,
    OAM_ENTRY(-6, -37, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(10, -37, OAM_DIMS_8x16, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-17, -18, OAM_DIMS_32x16, OAM_X_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-9, -26, OAM_DIMS_16x8, OAM_X_FLIP, 0x18, 0, 0)
};

static const u16 sSamusOam_Right_Running_Frame9[] = {
    5,
    OAM_ENTRY(-6, -35, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(10, -27, OAM_DIMS_8x8, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-8, -24, OAM_DIMS_16x16, OAM_X_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-16, -24, OAM_DIMS_8x16, OAM_X_FLIP, 0x16, 0, 0),
    OAM_ENTRY(-8, -8, OAM_DIMS_16x8, OAM_X_FLIP, 0x17, 0, 0)
};

static const u16 sSamusOam_Right_DiagonalUp_Running_Frame0[] = {
    3,
    OAM_ENTRY(-7, -35, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-11, -24, OAM_DIMS_16x16, OAM_X_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-11, -8, OAM_DIMS_16x8, OAM_X_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_Right_DiagonalUp_Running_Frame1[] = {
    3,
    OAM_ENTRY(-7, -36, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-11, -24, OAM_DIMS_16x16, OAM_X_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-11, -8, OAM_DIMS_16x8, OAM_X_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_Right_DiagonalUp_Running_Frame2[] = {
    5,
    OAM_ENTRY(-6, -38, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(10, -38, OAM_DIMS_8x16, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-9, -17, OAM_DIMS_16x16, OAM_X_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-17, -17, OAM_DIMS_8x16, OAM_X_FLIP, 0x16, 0, 0),
    OAM_ENTRY(-9, -25, OAM_DIMS_16x8, OAM_X_FLIP, 0x17, 0, 0)
};

static const u16 sSamusOam_Right_DiagonalUp_Running_Frame3[] = {
    4,
    OAM_ENTRY(-6, -39, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(10, -39, OAM_DIMS_8x16, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-17, -18, OAM_DIMS_32x16, OAM_X_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-9, -26, OAM_DIMS_16x8, OAM_X_FLIP, 0x18, 0, 0)
};

static const u16 sSamusOam_Right_DiagonalUp_Running_Frame4[] = {
    3,
    OAM_ENTRY(-7, -36, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-14, -24, OAM_DIMS_16x16, OAM_X_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-6, -16, OAM_DIMS_16x16, OAM_X_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_Right_DiagonalUp_Running_Frame5[] = {
    3,
    OAM_ENTRY(-6, -35, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-11, -24, OAM_DIMS_16x16, OAM_X_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-11, -8, OAM_DIMS_16x8, OAM_X_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_Right_DiagonalUp_Running_Frame6[] = {
    3,
    OAM_ENTRY(-6, -36, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-11, -24, OAM_DIMS_16x16, OAM_X_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-11, -8, OAM_DIMS_16x8, OAM_X_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_Right_DiagonalUp_Running_Frame7[] = {
    5,
    OAM_ENTRY(-5, -38, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(11, -38, OAM_DIMS_8x16, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-9, -17, OAM_DIMS_16x16, OAM_X_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-9, -25, OAM_DIMS_16x8, OAM_X_FLIP, 0x17, 0, 0),
    OAM_ENTRY(-17, -17, OAM_DIMS_8x16, OAM_X_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_Right_DiagonalUp_Running_Frame9[] = {
    4,
    OAM_ENTRY(-6, -36, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-8, -24, OAM_DIMS_16x16, OAM_X_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-16, -24, OAM_DIMS_8x16, OAM_X_FLIP, 0x16, 0, 0),
    OAM_ENTRY(-8, -8, OAM_DIMS_16x8, OAM_X_FLIP, 0x17, 0, 0)
};

static const u16 sSamusOam_Right_Forward_Running_Frame0[] = {
    4,
    OAM_ENTRY(-7, -34, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(0, -42, OAM_DIMS_8x8, OAM_X_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-11, -24, OAM_DIMS_16x16, OAM_X_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-11, -8, OAM_DIMS_16x8, OAM_X_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_Right_Forward_Running_Frame1[] = {
    4,
    OAM_ENTRY(-6, -35, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(1, -43, OAM_DIMS_8x8, OAM_X_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-11, -24, OAM_DIMS_16x16, OAM_X_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-11, -8, OAM_DIMS_16x8, OAM_X_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_Right_Forward_Running_Frame2[] = {
    5,
    OAM_ENTRY(-6, -35, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(1, -43, OAM_DIMS_8x8, OAM_X_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-9, -17, OAM_DIMS_16x16, OAM_X_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-17, -17, OAM_DIMS_8x16, OAM_X_FLIP, 0x16, 0, 0),
    OAM_ENTRY(-9, -25, OAM_DIMS_16x8, OAM_X_FLIP, 0x17, 0, 0)
};

static const u16 sSamusOam_Right_Forward_Running_Frame3[] = {
    4,
    OAM_ENTRY(-6, -36, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-17, -18, OAM_DIMS_32x16, OAM_X_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-9, -26, OAM_DIMS_16x8, OAM_X_FLIP, 0x18, 0, 0),
    OAM_ENTRY(1, -44, OAM_DIMS_8x8, OAM_X_FLIP, 0x2, 0, 0)
};

static const u16 sSamusOam_Right_Forward_Running_Frame4[] = {
    4,
    OAM_ENTRY(-7, -34, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-14, -24, OAM_DIMS_16x16, OAM_X_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-6, -16, OAM_DIMS_16x16, OAM_X_FLIP, 0x16, 0, 0),
    OAM_ENTRY(0, -42, OAM_DIMS_8x8, OAM_X_FLIP, 0x2, 0, 0)
};

static const u16 sSamusOam_Right_Forward_Running_Frame5[] = {
    4,
    OAM_ENTRY(-11, -24, OAM_DIMS_16x16, OAM_X_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-11, -8, OAM_DIMS_16x8, OAM_X_FLIP, 0x16, 0, 0),
    OAM_ENTRY(-6, -34, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(1, -42, OAM_DIMS_8x8, OAM_X_FLIP, 0x2, 0, 0)
};

static const u16 sSamusOam_Right_Forward_Running_Frame7[] = {
    5,
    OAM_ENTRY(-5, -35, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-9, -17, OAM_DIMS_16x16, OAM_X_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-9, -25, OAM_DIMS_16x8, OAM_X_FLIP, 0x17, 0, 0),
    OAM_ENTRY(-17, -17, OAM_DIMS_8x16, OAM_X_FLIP, 0x16, 0, 0),
    OAM_ENTRY(2, -43, OAM_DIMS_8x8, OAM_X_FLIP, 0x2, 0, 0)
};

static const u16 sSamusOam_Right_Forward_Running_Frame8[] = {
    4,
    OAM_ENTRY(-5, -36, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-17, -18, OAM_DIMS_32x16, OAM_X_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-9, -26, OAM_DIMS_16x8, OAM_X_FLIP, 0x18, 0, 0),
    OAM_ENTRY(2, -44, OAM_DIMS_8x8, OAM_X_FLIP, 0x2, 0, 0)
};

static const u16 sSamusOam_Right_Forward_Running_Frame9[] = {
    5,
    OAM_ENTRY(-6, -34, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-8, -24, OAM_DIMS_16x16, OAM_X_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-16, -24, OAM_DIMS_8x16, OAM_X_FLIP, 0x16, 0, 0),
    OAM_ENTRY(-8, -8, OAM_DIMS_16x8, OAM_X_FLIP, 0x17, 0, 0),
    OAM_ENTRY(1, -42, OAM_DIMS_8x8, OAM_X_FLIP, 0x2, 0, 0)
};

static const u16 sSamusOam_Right_DiagonalDown_Running_Frame0[] = {
    4,
    OAM_ENTRY(-10, -38, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-2, -22, OAM_DIMS_8x8, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-11, -24, OAM_DIMS_16x16, OAM_X_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-11, -8, OAM_DIMS_16x8, OAM_X_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_Right_DiagonalDown_Running_Frame1[] = {
    4,
    OAM_ENTRY(-8, -39, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(0, -23, OAM_DIMS_8x8, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-11, -24, OAM_DIMS_16x16, OAM_X_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-11, -8, OAM_DIMS_16x8, OAM_X_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_Right_DiagonalDown_Running_Frame2[] = {
    5,
    OAM_ENTRY(-8, -39, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(0, -23, OAM_DIMS_8x8, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-9, -17, OAM_DIMS_16x16, OAM_X_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-17, -17, OAM_DIMS_8x16, OAM_X_FLIP, 0x16, 0, 0),
    OAM_ENTRY(-9, -25, OAM_DIMS_16x8, OAM_X_FLIP, 0x17, 0, 0)
};

static const u16 sSamusOam_Right_DiagonalDown_Running_Frame3[] = {
    4,
    OAM_ENTRY(-8, -40, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(0, -24, OAM_DIMS_8x8, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-17, -18, OAM_DIMS_32x16, OAM_X_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-9, -26, OAM_DIMS_16x8, OAM_X_FLIP, 0x18, 0, 0)
};

static const u16 sSamusOam_Right_DiagonalDown_Running_Frame4[] = {
    4,
    OAM_ENTRY(-9, -38, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-1, -22, OAM_DIMS_8x8, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-14, -24, OAM_DIMS_16x16, OAM_X_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-6, -16, OAM_DIMS_16x16, OAM_X_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_Right_DiagonalDown_Running_Frame5[] = {
    4,
    OAM_ENTRY(-9, -38, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-1, -22, OAM_DIMS_8x8, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-11, -24, OAM_DIMS_16x16, OAM_X_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-11, -8, OAM_DIMS_16x8, OAM_X_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_Right_DiagonalDown_Running_Frame7[] = {
    5,
    OAM_ENTRY(-7, -39, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(1, -23, OAM_DIMS_8x8, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-9, -17, OAM_DIMS_16x16, OAM_X_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-9, -25, OAM_DIMS_16x8, OAM_X_FLIP, 0x17, 0, 0),
    OAM_ENTRY(-17, -17, OAM_DIMS_8x16, OAM_X_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_Right_DiagonalDown_Running_Frame8[] = {
    4,
    OAM_ENTRY(-7, -40, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(1, -24, OAM_DIMS_8x8, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-17, -18, OAM_DIMS_32x16, OAM_X_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-9, -26, OAM_DIMS_16x8, OAM_X_FLIP, 0x18, 0, 0)
};

static const u16 sSamusOam_Right_DiagonalDown_Running_Frame9[] = {
    5,
    OAM_ENTRY(-8, -38, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(0, -22, OAM_DIMS_8x8, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-8, -24, OAM_DIMS_16x16, OAM_X_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-16, -24, OAM_DIMS_8x16, OAM_X_FLIP, 0x16, 0, 0),
    OAM_ENTRY(-8, -8, OAM_DIMS_16x8, OAM_X_FLIP, 0x17, 0, 0)
};

static const u16 sSamusOam_Right_Up_Standing_Frame0[] = {
    4,
    OAM_ENTRY(-7, -38, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-6, -24, OAM_DIMS_16x16, OAM_X_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-6, -8, OAM_DIMS_16x8, OAM_X_FLIP, 0x17, 0, 0),
    OAM_ENTRY(-14, -16, OAM_DIMS_8x16, OAM_X_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_Right_Up_Standing_Frame1[] = {
    4,
    OAM_ENTRY(-7, -38, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-6, -16, OAM_DIMS_16x16, OAM_X_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-14, -16, OAM_DIMS_8x16, OAM_X_FLIP, 0x16, 0, 0),
    OAM_ENTRY(-6, -24, OAM_DIMS_16x8, OAM_X_FLIP, 0x17, 0, 0)
};

static const u16 sSamusOam_Right_Up_Shooting_Frame0[] = {
    4,
    OAM_ENTRY(-6, -24, OAM_DIMS_16x8, OAM_X_FLIP, 0x17, 0, 0),
    OAM_ENTRY(-7, -37, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-6, -16, OAM_DIMS_16x16, OAM_X_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-14, -16, OAM_DIMS_8x16, OAM_X_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_Right_DiagonalUp_Standing_Frame0[] = {
    5,
    OAM_ENTRY(-5, -38, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(11, -38, OAM_DIMS_8x16, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-6, -16, OAM_DIMS_16x16, OAM_X_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-14, -16, OAM_DIMS_8x16, OAM_X_FLIP, 0x16, 0, 0),
    OAM_ENTRY(-6, -24, OAM_DIMS_16x8, OAM_X_FLIP, 0x17, 0, 0)
};

static const u16 sSamusOam_Right_DiagonalUp_Shooting_Frame0[] = {
    5,
    OAM_ENTRY(-6, -38, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(10, -38, OAM_DIMS_8x16, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-6, -16, OAM_DIMS_16x16, OAM_X_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-14, -16, OAM_DIMS_8x16, OAM_X_FLIP, 0x16, 0, 0),
    OAM_ENTRY(-6, -24, OAM_DIMS_16x8, OAM_X_FLIP, 0x17, 0, 0)
};

static const u16 sSamusOam_Right_Standing_Frame0[] = {
    5,
    OAM_ENTRY(-4, -33, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-10, -16, OAM_DIMS_16x16, OAM_X_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-10, -24, OAM_DIMS_16x8, OAM_X_FLIP, 0x17, 0, 0),
    OAM_ENTRY(6, -16, OAM_DIMS_8x16, OAM_X_FLIP, 0x16, 0, 0),
    OAM_ENTRY(0, -41, OAM_DIMS_8x8, OAM_X_FLIP, 0x2, 0, 0)
};

static const u16 sSamusOam_Right_Standing_Frame2[] = {
    5,
    OAM_ENTRY(-4, -33, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-10, -16, OAM_DIMS_16x16, OAM_X_FLIP, 0x14, 0, 0),
    OAM_ENTRY(6, -16, OAM_DIMS_8x16, OAM_X_FLIP, 0x16, 0, 0),
    OAM_ENTRY(-10, -24, OAM_DIMS_16x8, OAM_X_FLIP, 0x17, 0, 0),
    OAM_ENTRY(0, -41, OAM_DIMS_8x8, OAM_X_FLIP, 0x2, 0, 0)
};

static const u16 sSamusOam_Right_Shooting_Frame0[] = {
    5,
    OAM_ENTRY(-5, -33, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-10, -16, OAM_DIMS_16x16, OAM_X_FLIP, 0x14, 0, 0),
    OAM_ENTRY(6, -16, OAM_DIMS_8x16, OAM_X_FLIP, 0x16, 0, 0),
    OAM_ENTRY(-10, -24, OAM_DIMS_16x8, OAM_X_FLIP, 0x17, 0, 0),
    OAM_ENTRY(-1, -41, OAM_DIMS_8x8, OAM_X_FLIP, 0x2, 0, 0)
};

static const u16 sSamusOam_Right_DiagonalDown_Standing_Frame0[] = {
    5,
    OAM_ENTRY(-6, -36, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(2, -20, OAM_DIMS_8x8, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-10, -24, OAM_DIMS_16x16, OAM_X_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-10, -8, OAM_DIMS_16x8, OAM_X_FLIP, 0x17, 0, 0),
    OAM_ENTRY(6, -16, OAM_DIMS_8x16, OAM_X_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_Right_DiagonalDown_Standing_Frame1[] = {
    5,
    OAM_ENTRY(-6, -36, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(2, -20, OAM_DIMS_8x8, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-10, -16, OAM_DIMS_16x16, OAM_X_FLIP, 0x14, 0, 0),
    OAM_ENTRY(6, -16, OAM_DIMS_8x16, OAM_X_FLIP, 0x16, 0, 0),
    OAM_ENTRY(-10, -24, OAM_DIMS_16x8, OAM_X_FLIP, 0x17, 0, 0)
};

static const u16 sSamusOam_Right_DiagonalDown_Shooting_Frame0[] = {
    5,
    OAM_ENTRY(-7, -36, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(1, -20, OAM_DIMS_8x8, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-10, -16, OAM_DIMS_16x16, OAM_X_FLIP, 0x14, 0, 0),
    OAM_ENTRY(6, -16, OAM_DIMS_8x16, OAM_X_FLIP, 0x16, 0, 0),
    OAM_ENTRY(-10, -24, OAM_DIMS_16x8, OAM_X_FLIP, 0x17, 0, 0)
};

static const u16 sSamusOam_Right_Up_Crouching_Frame1[] = {
    3,
    OAM_ENTRY(-8, -29, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-1, -16, OAM_DIMS_16x16, OAM_X_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-9, -16, OAM_DIMS_8x16, OAM_X_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_Right_Up_Crouching_Frame0[] = {
    3,
    OAM_ENTRY(-8, -28, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-1, -16, OAM_DIMS_16x16, OAM_X_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-9, -16, OAM_DIMS_8x16, OAM_X_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_Right_DiagonalUp_Crouching_Frame1[] = {
    4,
    OAM_ENTRY(-1, -16, OAM_DIMS_16x16, OAM_X_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-9, -16, OAM_DIMS_8x16, OAM_X_FLIP, 0x16, 0, 0),
    OAM_ENTRY(-7, -30, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(9, -30, OAM_DIMS_8x16, OAM_NO_FLIP, 0x2, 0, 0)
};

static const u16 sSamusOam_Right_DiagonalUp_Crouching_Frame0[] = {
    4,
    OAM_ENTRY(-8, -30, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(8, -30, OAM_DIMS_8x16, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-1, -16, OAM_DIMS_16x16, OAM_X_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-9, -16, OAM_DIMS_8x16, OAM_X_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_Right_Crouching_Frame1[] = {
    4,
    OAM_ENTRY(-5, -24, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-1, -16, OAM_DIMS_16x16, OAM_X_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-9, -16, OAM_DIMS_8x16, OAM_X_FLIP, 0x16, 0, 0),
    OAM_ENTRY(-1, -32, OAM_DIMS_8x8, OAM_X_FLIP, 0x2, 0, 0)
};

static const u16 sSamusOam_Right_Crouching_Frame0[] = {
    4,
    OAM_ENTRY(-6, -24, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-1, -16, OAM_DIMS_16x16, OAM_X_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-9, -16, OAM_DIMS_8x16, OAM_X_FLIP, 0x16, 0, 0),
    OAM_ENTRY(-2, -32, OAM_DIMS_8x8, OAM_X_FLIP, 0x2, 0, 0)
};

static const u16 sSamusOam_Right_DiagonalDown_Crouching_Frame1[] = {
    4,
    OAM_ENTRY(-6, -26, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(2, -10, OAM_DIMS_8x8, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-1, -16, OAM_DIMS_16x16, OAM_X_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-9, -16, OAM_DIMS_8x16, OAM_X_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_Right_DiagonalDown_Crouching_Frame0[] = {
    4,
    OAM_ENTRY(-7, -27, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(1, -11, OAM_DIMS_8x8, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-1, -16, OAM_DIMS_16x16, OAM_X_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-9, -16, OAM_DIMS_8x16, OAM_X_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_2bdcc8_Frame3[] = {
    5,
    OAM_ENTRY(-7, -34, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-15, -34, OAM_DIMS_8x16, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-14, -17, OAM_DIMS_32x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-6, -25, OAM_DIMS_16x8, OAM_NO_FLIP, 0x18, 0, 0),
    OAM_ENTRY(-7, -42, OAM_DIMS_8x8, OAM_NO_FLIP, 0x3, 0, 0)
};

static const u16 sSamusOam_2bdcc8_Frame8[] = {
    4,
    OAM_ENTRY(-9, -36, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-17, -28, OAM_DIMS_8x8, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-14, -17, OAM_DIMS_32x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-6, -25, OAM_DIMS_16x8, OAM_NO_FLIP, 0x18, 0, 0)
};

static const u16 sSamusOam_2bdd78_Frame3[] = {
    5,
    OAM_ENTRY(-9, -36, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-9, -20, OAM_DIMS_16x8, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(7, -28, OAM_DIMS_8x8, OAM_NO_FLIP, 0x4, 0, 0),
    OAM_ENTRY(-18, -17, OAM_DIMS_32x16, OAM_X_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-10, -25, OAM_DIMS_16x8, OAM_X_FLIP, 0x18, 0, 0)
};

static const u16 sSamusOam_2bdd78_Frame8[] = {
    4,
    OAM_ENTRY(-7, -36, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(9, -36, OAM_DIMS_8x16, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-18, -17, OAM_DIMS_32x16, OAM_X_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-10, -25, OAM_DIMS_16x8, OAM_X_FLIP, 0x18, 0, 0)
};

static const u16 sSamusOam_Left_Skidding_Frame0[] = {
    6,
    OAM_ENTRY(-9, -33, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-8, -34, OAM_DIMS_16x16, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-8, -24, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-8, -8, OAM_DIMS_16x8, OAM_NO_FLIP, 0x17, 0, 0),
    OAM_ENTRY(-16, -16, OAM_DIMS_8x16, OAM_NO_FLIP, 0x16, 0, 0),
    OAM_ENTRY(-16, -34, OAM_DIMS_16x16, OAM_NO_FLIP, 0x4, 0, 0)
};

static const u16 sSamusOam_2bcec4[] = {
    6,
    OAM_ENTRY(-9, -33, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-8, -34, OAM_DIMS_16x16, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-8, -24, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-8, -8, OAM_DIMS_16x8, OAM_NO_FLIP, 0x17, 0, 0),
    OAM_ENTRY(-16, -16, OAM_DIMS_8x16, OAM_NO_FLIP, 0x16, 0, 0),
    OAM_ENTRY(-17, -34, OAM_DIMS_16x16, OAM_NO_FLIP, 0x4, 0, 0)
};

static const u16 sSamusOam_Right_Skidding_Frame0[] = {
    6,
    OAM_ENTRY(-8, -33, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-8, -34, OAM_DIMS_16x16, OAM_X_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-8, -24, OAM_DIMS_16x16, OAM_X_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-8, -8, OAM_DIMS_16x8, OAM_X_FLIP, 0x17, 0, 0),
    OAM_ENTRY(8, -16, OAM_DIMS_8x16, OAM_X_FLIP, 0x16, 0, 0),
    OAM_ENTRY(1, -35, OAM_DIMS_16x16, OAM_NO_FLIP, 0x4, 0, 0)
};

static const u16 sSamusOam_Right_Armed_Skidding_Frame0[] = {
    6,
    OAM_ENTRY(-6, -33, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-8, -34, OAM_DIMS_16x16, OAM_X_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-8, -24, OAM_DIMS_16x16, OAM_X_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-8, -8, OAM_DIMS_16x8, OAM_X_FLIP, 0x17, 0, 0),
    OAM_ENTRY(8, -16, OAM_DIMS_8x16, OAM_X_FLIP, 0x16, 0, 0),
    OAM_ENTRY(1, -35, OAM_DIMS_16x16, OAM_NO_FLIP, 0x4, 0, 0)
};

static const u16 sSamusOam_Left_HitByOmegaMetroid_Frame0[] = {
    6,
    OAM_ENTRY(-7, -24, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-7, -8, OAM_DIMS_8x8, OAM_NO_FLIP, 0x6, 0, 0),
    OAM_ENTRY(-11, -25, OAM_DIMS_16x16, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-11, -16, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(5, -16, OAM_DIMS_8x16, OAM_NO_FLIP, 0x16, 0, 0),
    OAM_ENTRY(-14, -16, OAM_DIMS_16x16, OAM_NO_FLIP, 0x4, 0, 0)
};

static const u16 sSamusOam_Left_HitByOmegaMetroid_Frame1[] = {
    6,
    OAM_ENTRY(-7, -21, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-7, -5, OAM_DIMS_8x8, OAM_NO_FLIP, 0x6, 0, 0),
    OAM_ENTRY(-11, -24, OAM_DIMS_16x16, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-11, -16, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(5, -16, OAM_DIMS_8x16, OAM_NO_FLIP, 0x16, 0, 0),
    OAM_ENTRY(-13, -16, OAM_DIMS_16x16, OAM_NO_FLIP, 0x4, 0, 0)
};

static const u16 sSamusOam_Left_HitByOmegaMetroid_Frame2[] = {
    5,
    OAM_ENTRY(-9, -20, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-11, -24, OAM_DIMS_16x16, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-11, -16, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(5, -16, OAM_DIMS_8x16, OAM_NO_FLIP, 0x16, 0, 0),
    OAM_ENTRY(-12, -16, OAM_DIMS_16x16, OAM_NO_FLIP, 0x4, 0, 0)
};

static const u16 sSamusOam_Left_LookingUp_HitByOmegaMetroid_Frame0[] = {
    6,
    OAM_ENTRY(-8, -24, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-8, -8, OAM_DIMS_8x8, OAM_NO_FLIP, 0x6, 0, 0),
    OAM_ENTRY(-11, -26, OAM_DIMS_16x16, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-11, -16, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(5, -16, OAM_DIMS_8x16, OAM_NO_FLIP, 0x16, 0, 0),
    OAM_ENTRY(-14, -16, OAM_DIMS_16x16, OAM_NO_FLIP, 0x4, 0, 0)
};

static const u16 sSamusOam_Left_LookingUp_HitByOmegaMetroid_Frame1[] = {
    6,
    OAM_ENTRY(-8, -21, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-8, -5, OAM_DIMS_8x8, OAM_NO_FLIP, 0x6, 0, 0),
    OAM_ENTRY(-11, -25, OAM_DIMS_16x16, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-11, -16, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(5, -16, OAM_DIMS_8x16, OAM_NO_FLIP, 0x16, 0, 0),
    OAM_ENTRY(-13, -16, OAM_DIMS_16x16, OAM_NO_FLIP, 0x4, 0, 0)
};

static const u16 sSamusOam_Left_LookingUp_HitByOmegaMetroid_Frame2[] = {
    5,
    OAM_ENTRY(-10, -20, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-11, -25, OAM_DIMS_16x16, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-11, -16, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(5, -16, OAM_DIMS_8x16, OAM_NO_FLIP, 0x16, 0, 0),
    OAM_ENTRY(-12, -16, OAM_DIMS_16x16, OAM_NO_FLIP, 0x4, 0, 0)
};

static const u16 sSamusOam_Right_HitByOmegaMetroid_Frame0[] = {
    6,
    OAM_ENTRY(-6, -20, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-9, -24, OAM_DIMS_16x16, OAM_X_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-5, -25, OAM_DIMS_16x16, OAM_X_FLIP, 0x4, 0, 0),
    OAM_ENTRY(-5, -16, OAM_DIMS_16x16, OAM_X_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-13, -16, OAM_DIMS_8x16, OAM_X_FLIP, 0x16, 0, 0),
    OAM_ENTRY(-3, -11, OAM_DIMS_16x8, OAM_NO_FLIP, 0x6, 0, 0)
};

static const u16 sSamusOam_Right_HitByOmegaMetroid_Frame1[] = {
    6,
    OAM_ENTRY(-6, -17, OAM_DIMS_8x16, OAM_NO_FLIP, 0x4, 0, 0),
    OAM_ENTRY(-9, -21, OAM_DIMS_16x16, OAM_X_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-5, -24, OAM_DIMS_16x16, OAM_X_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-5, -16, OAM_DIMS_16x16, OAM_X_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-13, -16, OAM_DIMS_8x16, OAM_X_FLIP, 0x16, 0, 0),
    OAM_ENTRY(-4, -10, OAM_DIMS_16x8, OAM_NO_FLIP, 0x5, 0, 0)
};

static const u16 sSamusOam_Right_HitByOmegaMetroid_Frame2[] = {
    5,
    OAM_ENTRY(-7, -18, OAM_DIMS_8x16, OAM_NO_FLIP, 0x4, 0, 0),
    OAM_ENTRY(-7, -20, OAM_DIMS_16x16, OAM_X_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-5, -24, OAM_DIMS_16x16, OAM_X_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-5, -16, OAM_DIMS_16x16, OAM_X_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-13, -16, OAM_DIMS_8x16, OAM_X_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_Right_LookingUp_HitByOmegaMetroid_Frame0[] = {
    6,
    OAM_ENTRY(-5, -20, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-8, -24, OAM_DIMS_16x16, OAM_X_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-5, -26, OAM_DIMS_16x16, OAM_X_FLIP, 0x4, 0, 0),
    OAM_ENTRY(-5, -16, OAM_DIMS_16x16, OAM_X_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-13, -16, OAM_DIMS_8x16, OAM_X_FLIP, 0x16, 0, 0),
    OAM_ENTRY(-3, -11, OAM_DIMS_16x8, OAM_NO_FLIP, 0x6, 0, 0)
};

static const u16 sSamusOam_Right_LookingUp_HitByOmegaMetroid_Frame1[] = {
    6,
    OAM_ENTRY(-5, -17, OAM_DIMS_8x16, OAM_NO_FLIP, 0x4, 0, 0),
    OAM_ENTRY(-8, -21, OAM_DIMS_16x16, OAM_X_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-5, -25, OAM_DIMS_16x16, OAM_X_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-5, -16, OAM_DIMS_16x16, OAM_X_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-13, -16, OAM_DIMS_8x16, OAM_X_FLIP, 0x16, 0, 0),
    OAM_ENTRY(-4, -10, OAM_DIMS_16x8, OAM_NO_FLIP, 0x5, 0, 0)
};

static const u16 sSamusOam_Right_LookingUp_HitByOmegaMetroid_Frame2[] = {
    5,
    OAM_ENTRY(-6, -18, OAM_DIMS_8x16, OAM_NO_FLIP, 0x4, 0, 0),
    OAM_ENTRY(-6, -20, OAM_DIMS_16x16, OAM_X_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-5, -25, OAM_DIMS_16x16, OAM_X_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-5, -16, OAM_DIMS_16x16, OAM_X_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-13, -16, OAM_DIMS_8x16, OAM_X_FLIP, 0x16, 0, 0)
};

const struct SamusAnimationData sSamusAnim_Left_Running[11] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_Left_Running_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_Running_Frame0,
        .pOam = sSamusOam_Left_Running_Frame0,
        .timer = 3
    },
    [1] = {
        .pTopGfx = sSamusGfx_Top_Left_Running_Frame1,
        .pBottomGfx = sSamusGfx_Bottom_Running_Frame1,
        .pOam = sSamusOam_Left_Running_Frame1,
        .timer = 3
    },
    [2] = {
        .pTopGfx = sSamusGfx_Top_Left_Running_Frame2,
        .pBottomGfx = sSamusGfx_Bottom_Running_Frame2,
        .pOam = sSamusOam_Left_Running_Frame2,
        .timer = 3
    },
    [3] = {
        .pTopGfx = sSamusGfx_Top_Left_Running_Frame3,
        .pBottomGfx = sSamusGfx_Bottom_Running_Frame3,
        .pOam = sSamusOam_Left_Running_Frame3,
        .timer = 3
    },
    [4] = {
        .pTopGfx = sSamusGfx_Top_Left_Running_Frame4,
        .pBottomGfx = sSamusGfx_Bottom_Running_Frame4,
        .pOam = sSamusOam_Left_Running_Frame4,
        .timer = 3
    },
    [5] = {
        .pTopGfx = sSamusGfx_Top_Left_Running_Frame5,
        .pBottomGfx = sSamusGfx_Bottom_Running_Frame5,
        .pOam = sSamusOam_Left_Running_Frame5,
        .timer = 3
    },
    [6] = {
        .pTopGfx = sSamusGfx_Top_Left_Running_Frame6,
        .pBottomGfx = sSamusGfx_Bottom_Running_Frame6,
        .pOam = sSamusOam_Left_Running_Frame6,
        .timer = 3
    },
    [7] = {
        .pTopGfx = sSamusGfx_Top_Left_Running_Frame7,
        .pBottomGfx = sSamusGfx_Bottom_Running_Frame7,
        .pOam = sSamusOam_Left_Running_Frame7,
        .timer = 3
    },
    [8] = {
        .pTopGfx = sSamusGfx_Top_Left_Running_Frame8,
        .pBottomGfx = sSamusGfx_Bottom_Running_Frame8,
        .pOam = sSamusOam_Left_Running_Frame8,
        .timer = 3
    },
    [9] = {
        .pTopGfx = sSamusGfx_Top_Left_Running_Frame9,
        .pBottomGfx = sSamusGfx_Bottom_Running_Frame9,
        .pOam = sSamusOam_Left_Running_Frame9,
        .timer = 3
    },
    [10] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Left_DiagonalUp_Running[11] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_Left_DiagonalUp_Running_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_Running_Frame0,
        .pOam = sSamusOam_Left_DiagonalUp_Running_Frame0,
        .timer = 3
    },
    [1] = {
        .pTopGfx = sSamusGfx_Top_Left_DiagonalUp_Running_Frame1,
        .pBottomGfx = sSamusGfx_Bottom_Running_Frame1,
        .pOam = sSamusOam_Left_DiagonalUp_Running_Frame1,
        .timer = 3
    },
    [2] = {
        .pTopGfx = sSamusGfx_Top_Left_DiagonalUp_Running_Frame2,
        .pBottomGfx = sSamusGfx_Bottom_Running_Frame2,
        .pOam = sSamusOam_Left_DiagonalUp_Running_Frame2,
        .timer = 3
    },
    [3] = {
        .pTopGfx = sSamusGfx_Top_Left_DiagonalUp_Running_Frame2,
        .pBottomGfx = sSamusGfx_Bottom_Running_Frame3,
        .pOam = sSamusOam_Left_DiagonalUp_Running_Frame3,
        .timer = 3
    },
    [4] = {
        .pTopGfx = sSamusGfx_Top_Left_DiagonalUp_Running_Frame1,
        .pBottomGfx = sSamusGfx_Bottom_Running_Frame4,
        .pOam = sSamusOam_Left_DiagonalUp_Running_Frame4,
        .timer = 3
    },
    [5] = {
        .pTopGfx = sSamusGfx_Top_Left_DiagonalUp_Running_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_Running_Frame5,
        .pOam = sSamusOam_Left_DiagonalUp_Running_Frame5,
        .timer = 3
    },
    [6] = {
        .pTopGfx = sSamusGfx_Top_Left_DiagonalUp_Running_Frame1,
        .pBottomGfx = sSamusGfx_Bottom_Running_Frame6,
        .pOam = sSamusOam_Left_DiagonalUp_Running_Frame6,
        .timer = 3
    },
    [7] = {
        .pTopGfx = sSamusGfx_Top_Left_DiagonalUp_Running_Frame2,
        .pBottomGfx = sSamusGfx_Bottom_Running_Frame7,
        .pOam = sSamusOam_Left_DiagonalUp_Running_Frame7,
        .timer = 3
    },
    [8] = {
        .pTopGfx = sSamusGfx_Top_Left_DiagonalUp_Running_Frame2,
        .pBottomGfx = sSamusGfx_Bottom_Running_Frame8,
        .pOam = sSamusOam_Left_DiagonalUp_Running_Frame3,
        .timer = 3
    },
    [9] = {
        .pTopGfx = sSamusGfx_Top_Left_DiagonalUp_Running_Frame1,
        .pBottomGfx = sSamusGfx_Bottom_Running_Frame9,
        .pOam = sSamusOam_Left_DiagonalUp_Running_Frame9,
        .timer = 3
    },
    [10] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Left_Forward_Running[11] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_Left_Forward_Running_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_Running_Frame0,
        .pOam = sSamusOam_Left_Forward_Running_Frame0,
        .timer = 3
    },
    [1] = {
        .pTopGfx = sSamusGfx_Top_Left_Forward_Running_Frame1,
        .pBottomGfx = sSamusGfx_Bottom_Running_Frame1,
        .pOam = sSamusOam_Left_Forward_Running_Frame1,
        .timer = 3
    },
    [2] = {
        .pTopGfx = sSamusGfx_Top_Left_Forward_Running_Frame2,
        .pBottomGfx = sSamusGfx_Bottom_Running_Frame2,
        .pOam = sSamusOam_Left_Forward_Running_Frame2,
        .timer = 3
    },
    [3] = {
        .pTopGfx = sSamusGfx_Top_Left_Forward_Running_Frame2,
        .pBottomGfx = sSamusGfx_Bottom_Running_Frame3,
        .pOam = sSamusOam_Left_Forward_Running_Frame3,
        .timer = 3
    },
    [4] = {
        .pTopGfx = sSamusGfx_Top_Left_Forward_Running_Frame1,
        .pBottomGfx = sSamusGfx_Bottom_Running_Frame4,
        .pOam = sSamusOam_Left_Forward_Running_Frame4,
        .timer = 3
    },
    [5] = {
        .pTopGfx = sSamusGfx_Top_Left_Forward_Running_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_Running_Frame5,
        .pOam = sSamusOam_Left_Forward_Running_Frame5,
        .timer = 3
    },
    [6] = {
        .pTopGfx = sSamusGfx_Top_Left_Forward_Running_Frame1,
        .pBottomGfx = sSamusGfx_Bottom_Running_Frame6,
        .pOam = sSamusOam_Left_Forward_Running_Frame5,
        .timer = 3
    },
    [7] = {
        .pTopGfx = sSamusGfx_Top_Left_Forward_Running_Frame2,
        .pBottomGfx = sSamusGfx_Bottom_Running_Frame7,
        .pOam = sSamusOam_Left_Forward_Running_Frame7,
        .timer = 3
    },
    [8] = {
        .pTopGfx = sSamusGfx_Top_Left_Forward_Running_Frame2,
        .pBottomGfx = sSamusGfx_Bottom_Running_Frame8,
        .pOam = sSamusOam_Left_Forward_Running_Frame8,
        .timer = 3
    },
    [9] = {
        .pTopGfx = sSamusGfx_Top_Left_Forward_Running_Frame1,
        .pBottomGfx = sSamusGfx_Bottom_Running_Frame9,
        .pOam = sSamusOam_Left_Forward_Running_Frame9,
        .timer = 3
    },
    [10] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Left_DiagonalDown_Running[11] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_Left_DiagonalDown_Running_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_Running_Frame0,
        .pOam = sSamusOam_Left_DiagonalDown_Running_Frame0,
        .timer = 3
    },
    [1] = {
        .pTopGfx = sSamusGfx_Top_Left_DiagonalDown_Running_Frame1,
        .pBottomGfx = sSamusGfx_Bottom_Running_Frame1,
        .pOam = sSamusOam_Left_DiagonalDown_Running_Frame1,
        .timer = 3
    },
    [2] = {
        .pTopGfx = sSamusGfx_Top_Left_DiagonalDown_Running_Frame2,
        .pBottomGfx = sSamusGfx_Bottom_Running_Frame2,
        .pOam = sSamusOam_Left_DiagonalDown_Running_Frame2,
        .timer = 3
    },
    [3] = {
        .pTopGfx = sSamusGfx_Top_Left_DiagonalDown_Running_Frame2,
        .pBottomGfx = sSamusGfx_Bottom_Running_Frame3,
        .pOam = sSamusOam_Left_DiagonalDown_Running_Frame3,
        .timer = 3
    },
    [4] = {
        .pTopGfx = sSamusGfx_Top_Left_DiagonalDown_Running_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_Running_Frame4,
        .pOam = sSamusOam_Left_DiagonalDown_Running_Frame4,
        .timer = 3
    },
    [5] = {
        .pTopGfx = sSamusGfx_Top_Left_DiagonalDown_Running_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_Running_Frame5,
        .pOam = sSamusOam_Left_DiagonalDown_Running_Frame5,
        .timer = 3
    },
    [6] = {
        .pTopGfx = sSamusGfx_Top_Left_DiagonalDown_Running_Frame1,
        .pBottomGfx = sSamusGfx_Bottom_Running_Frame6,
        .pOam = sSamusOam_Left_DiagonalDown_Running_Frame1,
        .timer = 3
    },
    [7] = {
        .pTopGfx = sSamusGfx_Top_Left_DiagonalDown_Running_Frame2,
        .pBottomGfx = sSamusGfx_Bottom_Running_Frame7,
        .pOam = sSamusOam_Left_DiagonalDown_Running_Frame7,
        .timer = 3
    },
    [8] = {
        .pTopGfx = sSamusGfx_Top_Left_DiagonalDown_Running_Frame2,
        .pBottomGfx = sSamusGfx_Bottom_Running_Frame8,
        .pOam = sSamusOam_Left_DiagonalDown_Running_Frame8,
        .timer = 3
    },
    [9] = {
        .pTopGfx = sSamusGfx_Top_Left_DiagonalDown_Running_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_Running_Frame9,
        .pOam = sSamusOam_Left_DiagonalDown_Running_Frame9,
        .timer = 3
    },
    [10] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Left_Up_Standing[4] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_Left_Up_Standing_Frame1,
        .pBottomGfx = sSamusGfx_Bottom_Up_Standing_Frame1,
        .pOam = sSamusOam_Left_Up_Standing_Frame0,
        .timer = 16
    },
    [1] = {
        .pTopGfx = sSamusGfx_Top_Left_Up_Standing_Frame1,
        .pBottomGfx = sSamusGfx_Bottom_Up_Standing_Frame1,
        .pOam = sSamusOam_Left_Up_Standing_Frame0,
        .timer = 16
    },
    [2] = {
        .pTopGfx = sSamusGfx_Top_Left_Up_Standing_Frame2,
        .pBottomGfx = sSamusGfx_Bottom_Up_Standing_Frame2,
        .pOam = sSamusOam_Left_Up_Standing_Frame2,
        .timer = 16
    },
    [3] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Left_Up_Shooting[3] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_Left_Up_Shooting_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_Up_Shooting_Frame0,
        .pOam = sSamusOam_Left_Up_Standing_Frame0,
        .timer = 4
    },
    [1] = {
        .pTopGfx = sSamusGfx_Top_Left_Up_Standing_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_Up_Standing_Frame0,
        .pOam = sSamusOam_Left_Up_Standing_Frame2,
        .timer = 4
    },
    [2] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Left_DiagonalUp_Standing[4] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_Left_DiagonalUp_Standing_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_DiagonalUp_Standing_Frame0,
        .pOam = sSamusOam_Left_DiagonalUp_Standing_Frame0,
        .timer = 16
    },
    [1] = {
        .pTopGfx = sSamusGfx_Top_Left_DiagonalUp_Standing_Frame1,
        .pBottomGfx = sSamusGfx_Bottom_DiagonalUp_Standing_Frame1,
        .pOam = sSamusOam_Left_DiagonalUp_Standing_Frame1,
        .timer = 16
    },
    [2] = {
        .pTopGfx = sSamusGfx_Top_Left_DiagonalUp_Standing_Frame2,
        .pBottomGfx = sSamusGfx_Bottom_DiagonalUp_Standing_Frame2,
        .pOam = sSamusOam_Left_DiagonalUp_Standing_Frame1,
        .timer = 16
    },
    [3] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Left_DiagonalUp_Shooting[3] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_Left_DiagonalUp_Shooting_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_DiagonalUp_Standing_Frame2,
        .pOam = sSamusOam_Left_DiagonalUp_Shooting_Frame0,
        .timer = 4
    },
    [1] = {
        .pTopGfx = sSamusGfx_Top_Left_DiagonalUp_Standing_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_DiagonalUp_Standing_Frame0,
        .pOam = sSamusOam_Left_DiagonalUp_Standing_Frame0,
        .timer = 4
    },
    [2] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Left_Standing[4] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_Left_Standing_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_Standing_Frame0,
        .pOam = sSamusOam_Left_Standing_Frame0,
        .timer = 16
    },
    [1] = {
        .pTopGfx = sSamusGfx_Top_Left_Standing_Frame1,
        .pBottomGfx = sSamusGfx_Bottom_Standing_Frame1,
        .pOam = sSamusOam_Left_Standing_Frame1,
        .timer = 16
    },
    [2] = {
        .pTopGfx = sSamusGfx_Top_Left_Standing_Frame2,
        .pBottomGfx = sSamusGfx_Bottom_Standing_Frame2,
        .pOam = sSamusOam_Left_Standing_Frame2,
        .timer = 16
    },
    [3] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Left_Shooting[3] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_Left_Shooting_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_Standing_Frame2,
        .pOam = sSamusOam_Left_Shooting_Frame0,
        .timer = 4
    },
    [1] = {
        .pTopGfx = sSamusGfx_Top_Left_Standing_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_Standing_Frame0,
        .pOam = sSamusOam_Left_Standing_Frame0,
        .timer = 4
    },
    [2] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Left_DiagonalDown_Standing[4] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_Left_DiagonalDown_Standing_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_DiagonalDown_Standing_Frame0,
        .pOam = sSamusOam_Left_DiagonalDown_Standing_Frame0,
        .timer = 16
    },
    [1] = {
        .pTopGfx = sSamusGfx_Top_Left_DiagonalDown_Standing_Frame1,
        .pBottomGfx = sSamusGfx_Bottom_DiagonalDown_Standing_Frame1,
        .pOam = sSamusOam_Left_DiagonalDown_Standing_Frame1,
        .timer = 16
    },
    [2] = {
        .pTopGfx = sSamusGfx_Top_Left_DiagonalDown_Standing_Frame2,
        .pBottomGfx = sSamusGfx_Bottom_DiagonalDown_Standing_Frame2,
        .pOam = sSamusOam_Left_DiagonalDown_Standing_Frame2,
        .timer = 16
    },
    [3] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Left_DiagonalDown_Shooting[3] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_Left_DiagonalDown_Shooting_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_Standing_Frame2,
        .pOam = sSamusOam_Left_DiagonalDown_Shooting_Frame0,
        .timer = 4
    },
    [1] = {
        .pTopGfx = sSamusGfx_Top_Left_DiagonalDown_Standing_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_DiagonalDown_Standing_Frame0,
        .pOam = sSamusOam_Left_DiagonalDown_Standing_Frame0,
        .timer = 4
    },
    [2] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Left_Up_Crouching[3] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_Left_Up_Shooting_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_Left_Up_Crouching_Frame0,
        .pOam = sSamusOam_Left_Up_Crouching_Frame0,
        .timer = 4
    },
    [1] = {
        .pTopGfx = sSamusGfx_Top_Left_Up_Standing_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_Left_Up_Crouching_Frame1,
        .pOam = sSamusOam_Left_Up_Crouching_Frame1,
        .timer = 4
    },
    [2] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Left_DiagonalUp_Crouching[3] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_Left_DiagonalUp_Shooting_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_Left_DiagonalUp_Crouching_Frame0,
        .pOam = sSamusOam_Left_DiagonalUp_Crouching_Frame0,
        .timer = 4
    },
    [1] = {
        .pTopGfx = sSamusGfx_Top_Left_DiagonalUp_Standing_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_Left_DiagonalUp_Crouching_Frame1,
        .pOam = sSamusOam_Left_DiagonalUp_Crouching_Frame1,
        .timer = 4
    },
    [2] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Left_Crouching[3] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_Left_Shooting_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_Left_Crouching_Frame0,
        .pOam = sSamusOam_Left_Crouching_Frame0,
        .timer = 4
    },
    [1] = {
        .pTopGfx = sSamusGfx_Top_Left_Crouching_Frame1,
        .pBottomGfx = sSamusGfx_Bottom_Left_Crouching_Frame1,
        .pOam = sSamusOam_Left_Crouching_Frame1,
        .timer = 4
    },
    [2] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Left_DiagonalDown_Crouching[3] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_Left_DiagonalDown_Shooting_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_Left_DiagonalDown_Crouching_Frame0,
        .pOam = sSamusOam_Left_DiagonalDown_Crouching_Frame0,
        .timer = 4
    },
    [1] = {
        .pTopGfx = sSamusGfx_Top_Left_DiagonalDown_Standing_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_Left_DiagonalDown_Crouching_Frame1,
        .pOam = sSamusOam_Left_DiagonalDown_Crouching_Frame1,
        .timer = 4
    },
    [2] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Right_Running[11] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_Right_Running_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_Running_Frame0,
        .pOam = sSamusOam_Right_Running_Frame0,
        .timer = 3
    },
    [1] = {
        .pTopGfx = sSamusGfx_Top_Right_Running_Frame1,
        .pBottomGfx = sSamusGfx_Bottom_Running_Frame1,
        .pOam = sSamusOam_Right_Running_Frame1,
        .timer = 3
    },
    [2] = {
        .pTopGfx = sSamusGfx_Top_Right_Running_Frame2,
        .pBottomGfx = sSamusGfx_Bottom_Running_Frame2,
        .pOam = sSamusOam_Right_Running_Frame2,
        .timer = 3
    },
    [3] = {
        .pTopGfx = sSamusGfx_Top_Right_Running_Frame3,
        .pBottomGfx = sSamusGfx_Bottom_Running_Frame3,
        .pOam = sSamusOam_Right_Running_Frame3,
        .timer = 3
    },
    [4] = {
        .pTopGfx = sSamusGfx_Top_Right_Running_Frame4,
        .pBottomGfx = sSamusGfx_Bottom_Running_Frame4,
        .pOam = sSamusOam_Right_Running_Frame4,
        .timer = 3
    },
    [5] = {
        .pTopGfx = sSamusGfx_Top_Right_Running_Frame5,
        .pBottomGfx = sSamusGfx_Bottom_Running_Frame5,
        .pOam = sSamusOam_Right_Running_Frame5,
        .timer = 3
    },
    [6] = {
        .pTopGfx = sSamusGfx_Top_Right_Running_Frame6,
        .pBottomGfx = sSamusGfx_Bottom_Running_Frame6,
        .pOam = sSamusOam_Right_Running_Frame6,
        .timer = 3
    },
    [7] = {
        .pTopGfx = sSamusGfx_Top_Right_Running_Frame7,
        .pBottomGfx = sSamusGfx_Bottom_Running_Frame7,
        .pOam = sSamusOam_Right_Running_Frame7,
        .timer = 3
    },
    [8] = {
        .pTopGfx = sSamusGfx_Top_Right_Running_Frame8,
        .pBottomGfx = sSamusGfx_Bottom_Running_Frame8,
        .pOam = sSamusOam_Right_Running_Frame8,
        .timer = 3
    },
    [9] = {
        .pTopGfx = sSamusGfx_Top_Right_Running_Frame9,
        .pBottomGfx = sSamusGfx_Bottom_Running_Frame9,
        .pOam = sSamusOam_Right_Running_Frame9,
        .timer = 3
    },
    [10] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Right_DiagonalUp_Running[11] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_Right_DiagonalUp_Running_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_Running_Frame0,
        .pOam = sSamusOam_Right_DiagonalUp_Running_Frame0,
        .timer = 3
    },
    [1] = {
        .pTopGfx = sSamusGfx_Top_Right_DiagonalUp_Running_Frame1,
        .pBottomGfx = sSamusGfx_Bottom_Running_Frame1,
        .pOam = sSamusOam_Right_DiagonalUp_Running_Frame1,
        .timer = 3
    },
    [2] = {
        .pTopGfx = sSamusGfx_Top_Right_DiagonalUp_Running_Frame2,
        .pBottomGfx = sSamusGfx_Bottom_Running_Frame2,
        .pOam = sSamusOam_Right_DiagonalUp_Running_Frame2,
        .timer = 3
    },
    [3] = {
        .pTopGfx = sSamusGfx_Top_Right_DiagonalUp_Running_Frame2,
        .pBottomGfx = sSamusGfx_Bottom_Running_Frame3,
        .pOam = sSamusOam_Right_DiagonalUp_Running_Frame3,
        .timer = 3
    },
    [4] = {
        .pTopGfx = sSamusGfx_Top_Right_DiagonalUp_Running_Frame1,
        .pBottomGfx = sSamusGfx_Bottom_Running_Frame4,
        .pOam = sSamusOam_Right_DiagonalUp_Running_Frame4,
        .timer = 3
    },
    [5] = {
        .pTopGfx = sSamusGfx_Top_Right_DiagonalUp_Running_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_Running_Frame5,
        .pOam = sSamusOam_Right_DiagonalUp_Running_Frame5,
        .timer = 3
    },
    [6] = {
        .pTopGfx = sSamusGfx_Top_Right_DiagonalUp_Running_Frame1,
        .pBottomGfx = sSamusGfx_Bottom_Running_Frame6,
        .pOam = sSamusOam_Right_DiagonalUp_Running_Frame6,
        .timer = 3
    },
    [7] = {
        .pTopGfx = sSamusGfx_Top_Right_DiagonalUp_Running_Frame2,
        .pBottomGfx = sSamusGfx_Bottom_Running_Frame7,
        .pOam = sSamusOam_Right_DiagonalUp_Running_Frame7,
        .timer = 3
    },
    [8] = {
        .pTopGfx = sSamusGfx_Top_Right_DiagonalUp_Running_Frame2,
        .pBottomGfx = sSamusGfx_Bottom_Running_Frame8,
        .pOam = sSamusOam_Right_DiagonalUp_Running_Frame3,
        .timer = 3
    },
    [9] = {
        .pTopGfx = sSamusGfx_Top_Right_DiagonalUp_Running_Frame1,
        .pBottomGfx = sSamusGfx_Bottom_Running_Frame9,
        .pOam = sSamusOam_Right_DiagonalUp_Running_Frame9,
        .timer = 3
    },
    [10] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Right_Forward_Running[11] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_Right_Forward_Running_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_Running_Frame0,
        .pOam = sSamusOam_Right_Forward_Running_Frame0,
        .timer = 3
    },
    [1] = {
        .pTopGfx = sSamusGfx_Top_Right_Forward_Running_Frame1,
        .pBottomGfx = sSamusGfx_Bottom_Running_Frame1,
        .pOam = sSamusOam_Right_Forward_Running_Frame1,
        .timer = 3
    },
    [2] = {
        .pTopGfx = sSamusGfx_Top_Right_Forward_Running_Frame2,
        .pBottomGfx = sSamusGfx_Bottom_Running_Frame2,
        .pOam = sSamusOam_Right_Forward_Running_Frame2,
        .timer = 3
    },
    [3] = {
        .pTopGfx = sSamusGfx_Top_Right_Forward_Running_Frame2,
        .pBottomGfx = sSamusGfx_Bottom_Running_Frame3,
        .pOam = sSamusOam_Right_Forward_Running_Frame3,
        .timer = 3
    },
    [4] = {
        .pTopGfx = sSamusGfx_Top_Right_Forward_Running_Frame1,
        .pBottomGfx = sSamusGfx_Bottom_Running_Frame4,
        .pOam = sSamusOam_Right_Forward_Running_Frame4,
        .timer = 3
    },
    [5] = {
        .pTopGfx = sSamusGfx_Top_Right_Forward_Running_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_Running_Frame5,
        .pOam = sSamusOam_Right_Forward_Running_Frame5,
        .timer = 3
    },
    [6] = {
        .pTopGfx = sSamusGfx_Top_Right_Forward_Running_Frame1,
        .pBottomGfx = sSamusGfx_Bottom_Running_Frame6,
        .pOam = sSamusOam_Right_Forward_Running_Frame5,
        .timer = 3
    },
    [7] = {
        .pTopGfx = sSamusGfx_Top_Right_Forward_Running_Frame2,
        .pBottomGfx = sSamusGfx_Bottom_Running_Frame7,
        .pOam = sSamusOam_Right_Forward_Running_Frame7,
        .timer = 3
    },
    [8] = {
        .pTopGfx = sSamusGfx_Top_Right_Forward_Running_Frame2,
        .pBottomGfx = sSamusGfx_Bottom_Running_Frame8,
        .pOam = sSamusOam_Right_Forward_Running_Frame8,
        .timer = 3
    },
    [9] = {
        .pTopGfx = sSamusGfx_Top_Right_Forward_Running_Frame1,
        .pBottomGfx = sSamusGfx_Bottom_Running_Frame9,
        .pOam = sSamusOam_Right_Forward_Running_Frame9,
        .timer = 3
    },
    [10] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Right_DiagonalDown_Running[11] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_Right_DiagonalDown_Running_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_Running_Frame0,
        .pOam = sSamusOam_Right_DiagonalDown_Running_Frame0,
        .timer = 3
    },
    [1] = {
        .pTopGfx = sSamusGfx_Top_Right_DiagonalDown_Running_Frame1,
        .pBottomGfx = sSamusGfx_Bottom_Running_Frame1,
        .pOam = sSamusOam_Right_DiagonalDown_Running_Frame1,
        .timer = 3
    },
    [2] = {
        .pTopGfx = sSamusGfx_Top_Right_DiagonalDown_Running_Frame2,
        .pBottomGfx = sSamusGfx_Bottom_Running_Frame2,
        .pOam = sSamusOam_Right_DiagonalDown_Running_Frame2,
        .timer = 3
    },
    [3] = {
        .pTopGfx = sSamusGfx_Top_Right_DiagonalDown_Running_Frame2,
        .pBottomGfx = sSamusGfx_Bottom_Running_Frame3,
        .pOam = sSamusOam_Right_DiagonalDown_Running_Frame3,
        .timer = 3
    },
    [4] = {
        .pTopGfx = sSamusGfx_Top_Right_DiagonalDown_Running_Frame1,
        .pBottomGfx = sSamusGfx_Bottom_Running_Frame4,
        .pOam = sSamusOam_Right_DiagonalDown_Running_Frame4,
        .timer = 3
    },
    [5] = {
        .pTopGfx = sSamusGfx_Top_Right_DiagonalDown_Running_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_Running_Frame5,
        .pOam = sSamusOam_Right_DiagonalDown_Running_Frame5,
        .timer = 3
    },
    [6] = {
        .pTopGfx = sSamusGfx_Top_Right_DiagonalDown_Running_Frame1,
        .pBottomGfx = sSamusGfx_Bottom_Running_Frame6,
        .pOam = sSamusOam_Right_DiagonalDown_Running_Frame1,
        .timer = 3
    },
    [7] = {
        .pTopGfx = sSamusGfx_Top_Right_DiagonalDown_Running_Frame2,
        .pBottomGfx = sSamusGfx_Bottom_Running_Frame7,
        .pOam = sSamusOam_Right_DiagonalDown_Running_Frame7,
        .timer = 3
    },
    [8] = {
        .pTopGfx = sSamusGfx_Top_Right_DiagonalDown_Running_Frame2,
        .pBottomGfx = sSamusGfx_Bottom_Running_Frame8,
        .pOam = sSamusOam_Right_DiagonalDown_Running_Frame8,
        .timer = 3
    },
    [9] = {
        .pTopGfx = sSamusGfx_Top_Right_DiagonalDown_Running_Frame1,
        .pBottomGfx = sSamusGfx_Bottom_Running_Frame9,
        .pOam = sSamusOam_Right_DiagonalDown_Running_Frame9,
        .timer = 3
    },
    [10] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Right_Up_Standing[4] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_Right_Up_Standing_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_Up_Standing_Frame0,
        .pOam = sSamusOam_Right_Up_Standing_Frame0,
        .timer = 16
    },
    [1] = {
        .pTopGfx = sSamusGfx_Top_Right_Up_Standing_Frame1,
        .pBottomGfx = sSamusGfx_Bottom_Up_Standing_Frame1,
        .pOam = sSamusOam_Right_Up_Standing_Frame1,
        .timer = 16
    },
    [2] = {
        .pTopGfx = sSamusGfx_Top_Right_Up_Standing_Frame2,
        .pBottomGfx = sSamusGfx_Bottom_Up_Standing_Frame2,
        .pOam = sSamusOam_Right_Up_Standing_Frame0,
        .timer = 16
    },
    [3] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Right_Up_Shooting[3] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_Right_Up_Shooting_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_Right_Up_Shooting_Frame0,
        .pOam = sSamusOam_Right_Up_Shooting_Frame0,
        .timer = 4
    },
    [1] = {
        .pTopGfx = sSamusGfx_Top_Right_Up_Standing_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_Up_Standing_Frame0,
        .pOam = sSamusOam_Right_Up_Standing_Frame0,
        .timer = 4
    },
    [2] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Right_DiagonalUp_Standing[4] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_Right_DiagonalUp_Standing_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_DiagonalUp_Standing_Frame0,
        .pOam = sSamusOam_Right_DiagonalUp_Standing_Frame0,
        .timer = 16
    },
    [1] = {
        .pTopGfx = sSamusGfx_Top_Right_DiagonalUp_Standing_Frame1,
        .pBottomGfx = sSamusGfx_Bottom_DiagonalUp_Standing_Frame1,
        .pOam = sSamusOam_Right_DiagonalUp_Standing_Frame0,
        .timer = 16
    },
    [2] = {
        .pTopGfx = sSamusGfx_Top_Right_DiagonalUp_Standing_Frame2,
        .pBottomGfx = sSamusGfx_Bottom_DiagonalUp_Standing_Frame2,
        .pOam = sSamusOam_Right_DiagonalUp_Standing_Frame0,
        .timer = 16
    },
    [3] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Right_DiagonalUp_Shooting[3] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_Right_DiagonalUp_Shooting_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_DiagonalUp_Standing_Frame2,
        .pOam = sSamusOam_Right_DiagonalUp_Shooting_Frame0,
        .timer = 4
    },
    [1] = {
        .pTopGfx = sSamusGfx_Top_Right_DiagonalUp_Standing_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_DiagonalUp_Standing_Frame0,
        .pOam = sSamusOam_Right_DiagonalUp_Standing_Frame0,
        .timer = 4
    },
    [2] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Right_Standing[4] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_Right_Standing_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_Standing_Frame0,
        .pOam = sSamusOam_Right_Standing_Frame0,
        .timer = 16
    },
    [1] = {
        .pTopGfx = sSamusGfx_Top_Right_Standing_Frame1,
        .pBottomGfx = sSamusGfx_Bottom_Standing_Frame1,
        .pOam = sSamusOam_Right_Standing_Frame0,
        .timer = 16
    },
    [2] = {
        .pTopGfx = sSamusGfx_Top_Right_Standing_Frame2,
        .pBottomGfx = sSamusGfx_Bottom_Standing_Frame2,
        .pOam = sSamusOam_Right_Standing_Frame2,
        .timer = 16
    },
    [3] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Right_Shooting[3] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_Right_Shooting_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_Standing_Frame2,
        .pOam = sSamusOam_Right_Shooting_Frame0,
        .timer = 4
    },
    [1] = {
        .pTopGfx = sSamusGfx_Top_Right_Standing_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_Standing_Frame0,
        .pOam = sSamusOam_Right_Standing_Frame0,
        .timer = 4
    },
    [2] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Right_DiagonalDown_Standing[4] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_Right_DiagonalDown_Standing_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_DiagonalDown_Standing_Frame0,
        .pOam = sSamusOam_Right_DiagonalDown_Standing_Frame0,
        .timer = 16
    },
    [1] = {
        .pTopGfx = sSamusGfx_Top_Right_DiagonalDown_Standing_Frame1,
        .pBottomGfx = sSamusGfx_Bottom_DiagonalDown_Standing_Frame1,
        .pOam = sSamusOam_Right_DiagonalDown_Standing_Frame1,
        .timer = 16
    },
    [2] = {
        .pTopGfx = sSamusGfx_Top_Right_DiagonalDown_Standing_Frame2,
        .pBottomGfx = sSamusGfx_Bottom_DiagonalDown_Standing_Frame2,
        .pOam = sSamusOam_Right_DiagonalDown_Standing_Frame0,
        .timer = 16
    },
    [3] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Right_DiagonalDown_Shooting[3] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_Right_DiagonalDown_Shooting_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_Standing_Frame2,
        .pOam = sSamusOam_Right_DiagonalDown_Shooting_Frame0,
        .timer = 4
    },
    [1] = {
        .pTopGfx = sSamusGfx_Top_Right_DiagonalDown_Standing_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_DiagonalDown_Standing_Frame0,
        .pOam = sSamusOam_Right_DiagonalDown_Standing_Frame0,
        .timer = 4
    },
    [2] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Right_Up_Crouching[3] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_Right_Up_Shooting_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_Right_Up_Crouching_Frame0,
        .pOam = sSamusOam_Right_Up_Crouching_Frame0,
        .timer = 4
    },
    [1] = {
        .pTopGfx = sSamusGfx_Top_Right_Up_Standing_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_Right_Up_Crouching_Frame1,
        .pOam = sSamusOam_Right_Up_Crouching_Frame1,
        .timer = 4
    },
    [2] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Right_DiagonalUp_Crouching[3] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_Right_DiagonalUp_Shooting_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_Right_DiagonalUp_Crouching_Frame0,
        .pOam = sSamusOam_Right_DiagonalUp_Crouching_Frame0,
        .timer = 4
    },
    [1] = {
        .pTopGfx = sSamusGfx_Top_Right_DiagonalUp_Standing_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_Right_DiagonalUp_Crouching_Frame1,
        .pOam = sSamusOam_Right_DiagonalUp_Crouching_Frame1,
        .timer = 4
    },
    [2] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Right_Crouching[3] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_Right_Shooting_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_Right_Crouching_Frame0,
        .pOam = sSamusOam_Right_Crouching_Frame0,
        .timer = 4
    },
    [1] = {
        .pTopGfx = sSamusGfx_Top_Right_Standing_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_Right_Crouching_Frame1,
        .pOam = sSamusOam_Right_Crouching_Frame1,
        .timer = 4
    },
    [2] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Right_DiagonalDown_Crouching[3] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_Right_DiagonalDown_Shooting_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_Right_DiagonalDown_Crouching_Frame0,
        .pOam = sSamusOam_Right_DiagonalDown_Crouching_Frame0,
        .timer = 4
    },
    [1] = {
        .pTopGfx = sSamusGfx_Top_Right_DiagonalDown_Standing_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_Right_DiagonalDown_Crouching_Frame1,
        .pOam = sSamusOam_Right_DiagonalDown_Crouching_Frame1,
        .timer = 4
    },
    [2] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_2bdb68[11] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_Left_Running_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_Running_Frame0,
        .pOam = sSamusOam_Left_Running_Frame0,
        .timer = 2
    },
    [1] = {
        .pTopGfx = sSamusGfx_Top_Left_Running_Frame1,
        .pBottomGfx = sSamusGfx_Bottom_Running_Frame1,
        .pOam = sSamusOam_Left_Running_Frame1,
        .timer = 2
    },
    [2] = {
        .pTopGfx = sSamusGfx_Top_Left_Running_Frame2,
        .pBottomGfx = sSamusGfx_Bottom_Running_Frame2,
        .pOam = sSamusOam_Left_Running_Frame2,
        .timer = 2
    },
    [3] = {
        .pTopGfx = sSamusGfx_Top_Left_Running_Frame3,
        .pBottomGfx = sSamusGfx_Bottom_Running_Frame3,
        .pOam = sSamusOam_Left_Running_Frame3,
        .timer = 2
    },
    [4] = {
        .pTopGfx = sSamusGfx_Top_Left_Running_Frame4,
        .pBottomGfx = sSamusGfx_Bottom_Running_Frame4,
        .pOam = sSamusOam_Left_Running_Frame4,
        .timer = 2
    },
    [5] = {
        .pTopGfx = sSamusGfx_Top_Left_Running_Frame5,
        .pBottomGfx = sSamusGfx_Bottom_Running_Frame5,
        .pOam = sSamusOam_Left_Running_Frame5,
        .timer = 2
    },
    [6] = {
        .pTopGfx = sSamusGfx_Top_Left_Running_Frame6,
        .pBottomGfx = sSamusGfx_Bottom_Running_Frame6,
        .pOam = sSamusOam_Left_Running_Frame6,
        .timer = 2
    },
    [7] = {
        .pTopGfx = sSamusGfx_Top_Left_Running_Frame7,
        .pBottomGfx = sSamusGfx_Bottom_Running_Frame7,
        .pOam = sSamusOam_Left_Running_Frame7,
        .timer = 2
    },
    [8] = {
        .pTopGfx = sSamusGfx_Top_Left_Running_Frame8,
        .pBottomGfx = sSamusGfx_Bottom_Running_Frame8,
        .pOam = sSamusOam_Left_Running_Frame8,
        .timer = 2
    },
    [9] = {
        .pTopGfx = sSamusGfx_Top_Left_Running_Frame9,
        .pBottomGfx = sSamusGfx_Bottom_Running_Frame9,
        .pOam = sSamusOam_Left_Running_Frame9,
        .timer = 2
    },
    [10] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_2bdc18[11] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_Right_Running_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_Running_Frame0,
        .pOam = sSamusOam_Right_Running_Frame0,
        .timer = 2
    },
    [1] = {
        .pTopGfx = sSamusGfx_Top_Right_Running_Frame1,
        .pBottomGfx = sSamusGfx_Bottom_Running_Frame1,
        .pOam = sSamusOam_Right_Running_Frame1,
        .timer = 2
    },
    [2] = {
        .pTopGfx = sSamusGfx_Top_Right_Running_Frame2,
        .pBottomGfx = sSamusGfx_Bottom_Running_Frame2,
        .pOam = sSamusOam_Right_Running_Frame2,
        .timer = 2
    },
    [3] = {
        .pTopGfx = sSamusGfx_Top_Right_Running_Frame3,
        .pBottomGfx = sSamusGfx_Bottom_Running_Frame3,
        .pOam = sSamusOam_Right_Running_Frame3,
        .timer = 2
    },
    [4] = {
        .pTopGfx = sSamusGfx_Top_Right_Running_Frame4,
        .pBottomGfx = sSamusGfx_Bottom_Running_Frame4,
        .pOam = sSamusOam_Right_Running_Frame4,
        .timer = 2
    },
    [5] = {
        .pTopGfx = sSamusGfx_Top_Right_Running_Frame5,
        .pBottomGfx = sSamusGfx_Bottom_Running_Frame5,
        .pOam = sSamusOam_Right_Running_Frame5,
        .timer = 2
    },
    [6] = {
        .pTopGfx = sSamusGfx_Top_Right_Running_Frame6,
        .pBottomGfx = sSamusGfx_Bottom_Running_Frame6,
        .pOam = sSamusOam_Right_Running_Frame6,
        .timer = 2
    },
    [7] = {
        .pTopGfx = sSamusGfx_Top_Right_Running_Frame7,
        .pBottomGfx = sSamusGfx_Bottom_Running_Frame7,
        .pOam = sSamusOam_Right_Running_Frame7,
        .timer = 2
    },
    [8] = {
        .pTopGfx = sSamusGfx_Top_Right_Running_Frame8,
        .pBottomGfx = sSamusGfx_Bottom_Running_Frame8,
        .pOam = sSamusOam_Right_Running_Frame8,
        .timer = 2
    },
    [9] = {
        .pTopGfx = sSamusGfx_Top_Right_Running_Frame9,
        .pBottomGfx = sSamusGfx_Bottom_Running_Frame9,
        .pOam = sSamusOam_Right_Running_Frame9,
        .timer = 2
    },
    [10] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_2bdcc8[11] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_Left_Running_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_Running_Frame0,
        .pOam = sSamusOam_Left_Running_Frame0,
        .timer = 1
    },
    [1] = {
        .pTopGfx = sSamusGfx_Top_Left_Running_Frame1,
        .pBottomGfx = sSamusGfx_Bottom_Running_Frame1,
        .pOam = sSamusOam_Left_Running_Frame1,
        .timer = 2
    },
    [2] = {
        .pTopGfx = sSamusGfx_Top_Left_Running_Frame2,
        .pBottomGfx = sSamusGfx_Bottom_Running_Frame2,
        .pOam = sSamusOam_Left_Running_Frame2,
        .timer = 2
    },
    [3] = {
        .pTopGfx = sSamusGfx_Top_Left_Running_Frame3,
        .pBottomGfx = sSamusGfx_Bottom_Running_Frame3,
        .pOam = sSamusOam_2bdcc8_Frame3,
        .timer = 2
    },
    [4] = {
        .pTopGfx = sSamusGfx_Top_Left_Running_Frame4,
        .pBottomGfx = sSamusGfx_Bottom_Running_Frame4,
        .pOam = sSamusOam_Left_Running_Frame4,
        .timer = 1
    },
    [5] = {
        .pTopGfx = sSamusGfx_Top_Left_Running_Frame5,
        .pBottomGfx = sSamusGfx_Bottom_Running_Frame5,
        .pOam = sSamusOam_Left_Running_Frame5,
        .timer = 1
    },
    [6] = {
        .pTopGfx = sSamusGfx_Top_Left_Running_Frame6,
        .pBottomGfx = sSamusGfx_Bottom_Running_Frame6,
        .pOam = sSamusOam_Left_Running_Frame6,
        .timer = 2
    },
    [7] = {
        .pTopGfx = sSamusGfx_Top_Left_Running_Frame7,
        .pBottomGfx = sSamusGfx_Bottom_Running_Frame7,
        .pOam = sSamusOam_Left_Running_Frame7,
        .timer = 2
    },
    [8] = {
        .pTopGfx = sSamusGfx_Top_Left_Running_Frame8,
        .pBottomGfx = sSamusGfx_Bottom_Running_Frame8,
        .pOam = sSamusOam_2bdcc8_Frame8,
        .timer = 2
    },
    [9] = {
        .pTopGfx = sSamusGfx_Top_Left_Running_Frame9,
        .pBottomGfx = sSamusGfx_Bottom_Running_Frame9,
        .pOam = sSamusOam_Left_Running_Frame9,
        .timer = 1
    },
    [10] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_2bdd78[11] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_Right_Running_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_Running_Frame0,
        .pOam = sSamusOam_Right_Running_Frame0,
        .timer = 1
    },
    [1] = {
        .pTopGfx = sSamusGfx_Top_Right_Running_Frame1,
        .pBottomGfx = sSamusGfx_Bottom_Running_Frame1,
        .pOam = sSamusOam_Right_Running_Frame1,
        .timer = 2
    },
    [2] = {
        .pTopGfx = sSamusGfx_Top_Right_Running_Frame2,
        .pBottomGfx = sSamusGfx_Bottom_Running_Frame2,
        .pOam = sSamusOam_Right_Running_Frame2,
        .timer = 2
    },
    [3] = {
        .pTopGfx = sSamusGfx_Top_Right_Running_Frame3,
        .pBottomGfx = sSamusGfx_Bottom_Running_Frame3,
        .pOam = sSamusOam_2bdd78_Frame3,
        .timer = 2
    },
    [4] = {
        .pTopGfx = sSamusGfx_Top_Right_Running_Frame4,
        .pBottomGfx = sSamusGfx_Bottom_Running_Frame4,
        .pOam = sSamusOam_Right_Running_Frame4,
        .timer = 1
    },
    [5] = {
        .pTopGfx = sSamusGfx_Top_Right_Running_Frame5,
        .pBottomGfx = sSamusGfx_Bottom_Running_Frame5,
        .pOam = sSamusOam_Right_Running_Frame5,
        .timer = 2
    },
    [6] = {
        .pTopGfx = sSamusGfx_Top_Right_Running_Frame6,
        .pBottomGfx = sSamusGfx_Bottom_Running_Frame6,
        .pOam = sSamusOam_Right_Running_Frame6,
        .timer = 2
    },
    [7] = {
        .pTopGfx = sSamusGfx_Top_Right_Running_Frame7,
        .pBottomGfx = sSamusGfx_Bottom_Running_Frame7,
        .pOam = sSamusOam_Right_Running_Frame7,
        .timer = 2
    },
    [8] = {
        .pTopGfx = sSamusGfx_Top_Right_Running_Frame8,
        .pBottomGfx = sSamusGfx_Bottom_Running_Frame8,
        .pOam = sSamusOam_2bdd78_Frame8,
        .timer = 2
    },
    [9] = {
        .pTopGfx = sSamusGfx_Top_Right_Running_Frame9,
        .pBottomGfx = sSamusGfx_Bottom_Running_Frame9,
        .pOam = sSamusOam_Right_Running_Frame9,
        .timer = 1
    },
    [10] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Left_Skidding[2] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_Left_Skidding_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_Skidding_Frame0,
        .pOam = sSamusOam_Left_Skidding_Frame0,
        .timer = 4
    },
    [1] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Left_Armed_Skidding[2] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_Left_Armed_Skidding_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_Skidding_Frame0,
        .pOam = sSamusOam_Left_Skidding_Frame0,
        .timer = 4
    },
    [1] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Right_Skidding[2] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_Right_Skidding_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_Skidding_Frame0,
        .pOam = sSamusOam_Right_Skidding_Frame0,
        .timer = 4
    },
    [1] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Right_Armed_Skidding[2] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_Right_Armed_Skidding_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_Skidding_Frame0,
        .pOam = sSamusOam_Right_Armed_Skidding_Frame0,
        .timer = 4
    },
    [1] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Left_HitByOmegaMetroid[5] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_Left_HitByOmegaMetroid_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_HitByOmegaMetroid_Frame0,
        .pOam = sSamusOam_Left_HitByOmegaMetroid_Frame0,
        .timer = 16
    },
    [1] = {
        .pTopGfx = sSamusGfx_Top_Left_HitByOmegaMetroid_Frame1,
        .pBottomGfx = sSamusGfx_Bottom_HitByOmegaMetroid_Frame1,
        .pOam = sSamusOam_Left_HitByOmegaMetroid_Frame1,
        .timer = 16
    },
    [2] = {
        .pTopGfx = sSamusGfx_Top_Left_HitByOmegaMetroid_Frame2,
        .pBottomGfx = sSamusGfx_Bottom_HitByOmegaMetroid_Frame2,
        .pOam = sSamusOam_Left_HitByOmegaMetroid_Frame2,
        .timer = 16
    },
    [3] = {
        .pTopGfx = sSamusGfx_Top_Left_HitByOmegaMetroid_Frame1,
        .pBottomGfx = sSamusGfx_Bottom_HitByOmegaMetroid_Frame1,
        .pOam = sSamusOam_Left_HitByOmegaMetroid_Frame1,
        .timer = 16
    },
    [4] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Left_LookingUp_HitByOmegaMetroid[5] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_Left_LookingUp_HitByOmegaMetroid_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_HitByOmegaMetroid_Frame0,
        .pOam = sSamusOam_Left_LookingUp_HitByOmegaMetroid_Frame0,
        .timer = 16
    },
    [1] = {
        .pTopGfx = sSamusGfx_Top_Left_LookingUp_HitByOmegaMetroid_Frame1,
        .pBottomGfx = sSamusGfx_Bottom_HitByOmegaMetroid_Frame1,
        .pOam = sSamusOam_Left_LookingUp_HitByOmegaMetroid_Frame1,
        .timer = 16
    },
    [2] = {
        .pTopGfx = sSamusGfx_Top_Left_LookingUp_HitByOmegaMetroid_Frame2,
        .pBottomGfx = sSamusGfx_Bottom_HitByOmegaMetroid_Frame2,
        .pOam = sSamusOam_Left_LookingUp_HitByOmegaMetroid_Frame2,
        .timer = 16
    },
    [3] = {
        .pTopGfx = sSamusGfx_Top_Left_LookingUp_HitByOmegaMetroid_Frame1,
        .pBottomGfx = sSamusGfx_Bottom_HitByOmegaMetroid_Frame1,
        .pOam = sSamusOam_Left_LookingUp_HitByOmegaMetroid_Frame1,
        .timer = 16
    },
    [4] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Right_HitByOmegaMetroid[5] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_Right_HitByOmegaMetroid_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_HitByOmegaMetroid_Frame0,
        .pOam = sSamusOam_Right_HitByOmegaMetroid_Frame0,
        .timer = 16
    },
    [1] = {
        .pTopGfx = sSamusGfx_Top_Right_HitByOmegaMetroid_Frame1,
        .pBottomGfx = sSamusGfx_Bottom_HitByOmegaMetroid_Frame1,
        .pOam = sSamusOam_Right_HitByOmegaMetroid_Frame1,
        .timer = 16
    },
    [2] = {
        .pTopGfx = sSamusGfx_Top_Right_HitByOmegaMetroid_Frame2,
        .pBottomGfx = sSamusGfx_Bottom_HitByOmegaMetroid_Frame2,
        .pOam = sSamusOam_Right_HitByOmegaMetroid_Frame2,
        .timer = 16
    },
    [3] = {
        .pTopGfx = sSamusGfx_Top_Right_HitByOmegaMetroid_Frame1,
        .pBottomGfx = sSamusGfx_Bottom_HitByOmegaMetroid_Frame1,
        .pOam = sSamusOam_Right_HitByOmegaMetroid_Frame1,
        .timer = 16
    },
    [4] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Right_LookingUp_HitByOmegaMetroid[5] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_Right_LookingUp_HitByOmegaMetroid_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_HitByOmegaMetroid_Frame0,
        .pOam = sSamusOam_Right_LookingUp_HitByOmegaMetroid_Frame0,
        .timer = 16
    },
    [1] = {
        .pTopGfx = sSamusGfx_Top_Right_LookingUp_HitByOmegaMetroid_Frame1,
        .pBottomGfx = sSamusGfx_Bottom_HitByOmegaMetroid_Frame1,
        .pOam = sSamusOam_Right_LookingUp_HitByOmegaMetroid_Frame1,
        .timer = 16
    },
    [2] = {
        .pTopGfx = sSamusGfx_Top_Right_LookingUp_HitByOmegaMetroid_Frame2,
        .pBottomGfx = sSamusGfx_Bottom_HitByOmegaMetroid_Frame2,
        .pOam = sSamusOam_Right_LookingUp_HitByOmegaMetroid_Frame2,
        .timer = 16
    },
    [3] = {
        .pTopGfx = sSamusGfx_Top_Right_LookingUp_HitByOmegaMetroid_Frame1,
        .pBottomGfx = sSamusGfx_Bottom_HitByOmegaMetroid_Frame1,
        .pOam = sSamusOam_Right_LookingUp_HitByOmegaMetroid_Frame1,
        .timer = 16
    },
    [4] = SAMUS_ANIM_TERMINATOR
};

static const u8 sSamusGfx_Top_Left_DelayBeforeShinesparking_Frame0[] = {
    3, 2,
    _INCBIN_U8("data/samus/gfx/Top_Left_DelayBeforeShinesparking_Frame0.gfx")
};

static const u8 sSamusGfx_Bottom_Left_DelayBeforeShinesparking_Frame0[] = {
    5, 2,
    _INCBIN_U8("data/samus/gfx/Bottom_Left_DelayBeforeShinesparking_Frame0.gfx")
};

static const u8 sSamusGfx_Top_Left_MidAir_Frame0[] = {
    4, 4,
    _INCBIN_U8("data/samus/gfx/Top_Left_MidAir_Frame0.gfx")
};

static const u8 sSamusGfx_Bottom_MidAir_Frame0[] = {
    5, 2,
    _INCBIN_U8("data/samus/gfx/Bottom_MidAir_Frame0.gfx")
};

static const u8 sSamusGfx_Top_Left_MidAir_Frame1[] = {
    4, 4,
    _INCBIN_U8("data/samus/gfx/Top_Left_MidAir_Frame1.gfx")
};

static const u8 sSamusGfx_Bottom_MidAir_Frame1[] = {
    4, 2,
    _INCBIN_U8("data/samus/gfx/Bottom_MidAir_Frame1.gfx")
};

static const u8 sSamusGfx_Top_Left_MidAir_Frame2[] = {
    4, 4,
    _INCBIN_U8("data/samus/gfx/Top_Left_MidAir_Frame2.gfx")
};

static const u8 sSamusGfx_Bottom_MidAir_Frame2[] = {
    3, 2,
    _INCBIN_U8("data/samus/gfx/Bottom_MidAir_Frame2.gfx")
};

static const u8 sSamusGfx_Top_Left_MidAir_Frame3[] = {
    4, 4,
    _INCBIN_U8("data/samus/gfx/Top_Left_MidAir_Frame3.gfx")
};

static const u8 sSamusGfx_Bottom_MidAir_Frame3[] = {
    4, 2,
    _INCBIN_U8("data/samus/gfx/Bottom_MidAir_Frame3.gfx")
};

static const u8 sSamusGfx_Top_Left_MidAir_Frame4[] = {
    4, 4,
    _INCBIN_U8("data/samus/gfx/Top_Left_MidAir_Frame4.gfx")
};

static const u8 sSamusGfx_Bottom_MidAir_Frame4[] = {
    4, 4,
    _INCBIN_U8("data/samus/gfx/Bottom_MidAir_Frame4.gfx")
};

static const u8 sSamusGfx_Top_Left_MidAir_Frame5[] = {
    4, 4,
    _INCBIN_U8("data/samus/gfx/Top_Left_MidAir_Frame5.gfx")
};

static const u8 sSamusGfx_Bottom_MidAir_Frame5[] = {
    4, 4,
    _INCBIN_U8("data/samus/gfx/Bottom_MidAir_Frame5.gfx")
};

static const u8 sSamusGfx_Top_Left_Landing_Frame0[] = {
    4, 4,
    _INCBIN_U8("data/samus/gfx/Top_Left_Landing_Frame0.gfx")
};

static const u8 sSamusGfx_Bottom_Landing_Frame0[] = {
    4, 2,
    _INCBIN_U8("data/samus/gfx/Bottom_Landing_Frame0.gfx")
};

static const u8 sSamusGfx_Top_Left_Landing_Frame1[] = {
    5, 4,
    _INCBIN_U8("data/samus/gfx/Top_Left_Landing_Frame1.gfx")
};

static const u8 sSamusGfx_Bottom_Left_Landing_Frame1[] = {
    4, 2,
    _INCBIN_U8("data/samus/gfx/Bottom_Left_Landing_Frame1.gfx")
};

static const u8 sSamusGfx_Top_Left_Up_MidAir_Frame0[] = {
    3, 2,
    _INCBIN_U8("data/samus/gfx/Top_Left_Up_MidAir_Frame0.gfx")
};

static const u8 sSamusGfx_Top_Left_Up_MidAir_Frame1[] = {
    3, 2,
    _INCBIN_U8("data/samus/gfx/Top_Left_Up_MidAir_Frame1.gfx")
};

static const u8 sSamusGfx_Top_Left_Up_MidAir_Frame2[] = {
    3, 2,
    _INCBIN_U8("data/samus/gfx/Top_Left_Up_MidAir_Frame2.gfx")
};

static const u8 sSamusGfx_Top_Left_DiagonalUp_MidAir_Frame0[] = {
    3, 3,
    _INCBIN_U8("data/samus/gfx/Top_Left_DiagonalUp_MidAir_Frame0.gfx")
};

static const u8 sSamusGfx_Top_Left_DiagonalUp_MidAir_Frame1[] = {
    3, 3,
    _INCBIN_U8("data/samus/gfx/Top_Left_DiagonalUp_MidAir_Frame1.gfx")
};

static const u8 sSamusGfx_Top_Left_DiagonalUp_MidAir_Frame2[] = {
    3, 3,
    _INCBIN_U8("data/samus/gfx/Top_Left_DiagonalUp_MidAir_Frame2.gfx")
};

static const u8 sSamusGfx_Top_Left_Forward_MidAir_Frame0[] = {
    4, 2,
    _INCBIN_U8("data/samus/gfx/Top_Left_Forward_MidAir_Frame0.gfx")
};

static const u8 sSamusGfx_Top_Left_Forward_MidAir_Frame1[] = {
    4, 2,
    _INCBIN_U8("data/samus/gfx/Top_Left_Forward_MidAir_Frame1.gfx")
};

static const u8 sSamusGfx_Top_Left_Forward_MidAir_Frame2[] = {
    4, 2,
    _INCBIN_U8("data/samus/gfx/Top_Left_Forward_MidAir_Frame2.gfx")
};

static const u8 sSamusGfx_Top_Left_DiagonalDown_MidAir_Frame0[] = {
    4, 2,
    _INCBIN_U8("data/samus/gfx/Top_Left_DiagonalDown_MidAir_Frame0.gfx")
};

static const u8 sSamusGfx_Top_Left_DiagonalDown_MidAir_Frame1[] = {
    4, 2,
    _INCBIN_U8("data/samus/gfx/Top_Left_DiagonalDown_MidAir_Frame1.gfx")
};

static const u8 sSamusGfx_Top_Left_DiagonalDown_MidAir_Frame2[] = {
    4, 2,
    _INCBIN_U8("data/samus/gfx/Top_Left_DiagonalDown_MidAir_Frame2.gfx")
};

static const u8 sSamusGfx_Top_2c42a8_Frame0[] = {
    3, 2,
    _INCBIN_U8("data/samus/gfx/Top_2c42a8_Frame0.gfx")
};

static const u8 sSamusGfx_Top_2c42c8_Frame0[] = {
    3, 3,
    _INCBIN_U8("data/samus/gfx/Top_2c42c8_Frame0.gfx")
};

static const u8 sSamusGfx_Top_2c42e8_Frame0[] = {
    4, 2,
    _INCBIN_U8("data/samus/gfx/Top_2c42e8_Frame0.gfx")
};

static const u8 sSamusGfx_Top_2c4308_Frame0[] = {
    4, 2,
    _INCBIN_U8("data/samus/gfx/Top_2c4308_Frame0.gfx")
};

static const u8 sSamusGfx_Top_Left_Down_MidAir_Frame0[] = {
    4, 4,
    _INCBIN_U8("data/samus/gfx/Top_Left_Down_MidAir_Frame0.gfx")
};

static const u8 sSamusGfx_Bottom_Down_MidAir_Frame0[] = {
    4, 4,
    _INCBIN_U8("data/samus/gfx/Bottom_Down_MidAir_Frame0.gfx")
};

static const u8 sSamusGfx_Top_Left_Down_MidAir_Frame1[] = {
    4, 4,
    _INCBIN_U8("data/samus/gfx/Top_Left_Down_MidAir_Frame1.gfx")
};

static const u8 sSamusGfx_Bottom_Down_MidAir_Frame1[] = {
    4, 4,
    _INCBIN_U8("data/samus/gfx/Bottom_Down_MidAir_Frame1.gfx")
};

static const u8 sSamusGfx_Top_Right_DelayBeforeShinesparking_Frame0[] = {
    4, 2,
    _INCBIN_U8("data/samus/gfx/Top_Right_DelayBeforeShinesparking_Frame0.gfx")
};

static const u8 sSamusGfx_Bottom_Right_DelayBeforeShinesparking_Frame0[] = {
    5, 2,
    _INCBIN_U8("data/samus/gfx/Bottom_Right_DelayBeforeShinesparking_Frame0.gfx")
};

static const u8 sSamusGfx_Top_Right_MidAir_Frame0[] = {
    4, 4,
    _INCBIN_U8("data/samus/gfx/Top_Right_MidAir_Frame0.gfx")
};

static const u8 sSamusGfx_Top_Right_MidAir_Frame1[] = {
    4, 4,
    _INCBIN_U8("data/samus/gfx/Top_Right_MidAir_Frame1.gfx")
};

static const u8 sSamusGfx_Top_Right_MidAir_Frame2[] = {
    4, 4,
    _INCBIN_U8("data/samus/gfx/Top_Right_MidAir_Frame2.gfx")
};

static const u8 sSamusGfx_Top_Right_MidAir_Frame3[] = {
    4, 4,
    _INCBIN_U8("data/samus/gfx/Top_Right_MidAir_Frame3.gfx")
};

static const u8 sSamusGfx_Top_Right_MidAir_Frame4[] = {
    4, 4,
    _INCBIN_U8("data/samus/gfx/Top_Right_MidAir_Frame4.gfx")
};

static const u8 sSamusGfx_Top_Right_MidAir_Frame5[] = {
    4, 4,
    _INCBIN_U8("data/samus/gfx/Top_Right_MidAir_Frame5.gfx")
};

static const u8 sSamusGfx_Top_Right_Landing_Frame0[] = {
    4, 4,
    _INCBIN_U8("data/samus/gfx/Top_Right_Landing_Frame0.gfx")
};

static const u8 sSamusGfx_Top_Right_Landing_Frame1[] = {
    5, 4,
    _INCBIN_U8("data/samus/gfx/Top_Right_Landing_Frame1.gfx")
};

static const u8 sSamusGfx_Bottom_Right_Landing_Frame1[] = {
    4, 2,
    _INCBIN_U8("data/samus/gfx/Bottom_Right_Landing_Frame1.gfx")
};

static const u8 sSamusGfx_Top_Right_Up_MidAir_Frame0[] = {
    2, 2,
    _INCBIN_U8("data/samus/gfx/Top_Right_Up_MidAir_Frame0.gfx")
};

static const u8 sSamusGfx_Top_Right_Up_MidAir_Frame1[] = {
    2, 2,
    _INCBIN_U8("data/samus/gfx/Top_Right_Up_MidAir_Frame1.gfx")
};

static const u8 sSamusGfx_Top_Right_Up_MidAir_Frame2[] = {
    2, 2,
    _INCBIN_U8("data/samus/gfx/Top_Right_Up_MidAir_Frame2.gfx")
};

static const u8 sSamusGfx_Top_Right_DiagonalUp_MidAir_Frame0[] = {
    3, 3,
    _INCBIN_U8("data/samus/gfx/Top_Right_DiagonalUp_MidAir_Frame0.gfx")
};

static const u8 sSamusGfx_Top_Right_DiagonalUp_MidAir_Frame1[] = {
    3, 3,
    _INCBIN_U8("data/samus/gfx/Top_Right_DiagonalUp_MidAir_Frame1.gfx")
};

static const u8 sSamusGfx_Top_Right_DiagonalUp_MidAir_Frame2[] = {
    3, 3,
    _INCBIN_U8("data/samus/gfx/Top_Right_DiagonalUp_MidAir_Frame2.gfx")
};

static const u8 sSamusGfx_Top_Right_Forward_MidAir_Frame0[] = {
    3, 2,
    _INCBIN_U8("data/samus/gfx/Top_Right_Forward_MidAir_Frame0.gfx")
};

static const u8 sSamusGfx_Top_Right_Forward_MidAir_Frame1[] = {
    3, 2,
    _INCBIN_U8("data/samus/gfx/Top_Right_Forward_MidAir_Frame1.gfx")
};

static const u8 sSamusGfx_Top_Right_Forward_MidAir_Frame2[] = {
    3, 2,
    _INCBIN_U8("data/samus/gfx/Top_Right_Forward_MidAir_Frame2.gfx")
};

static const u8 sSamusGfx_2c101c[] = {
    3, 2,
    _INCBIN_U8("data/samus/gfx/2c101c.gfx")
};

static const u8 sSamusGfx_Top_Right_DiagonalDown_MidAir_Frame0[] = {
    3, 2,
    _INCBIN_U8("data/samus/gfx/Top_Right_DiagonalDown_MidAir_Frame0.gfx")
};

static const u8 sSamusGfx_Top_Right_DiagonalDown_MidAir_Frame1[] = {
    3, 2,
    _INCBIN_U8("data/samus/gfx/Top_Right_DiagonalDown_MidAir_Frame1.gfx")
};

static const u8 sSamusGfx_Top_Right_DiagonalDown_MidAir_Frame2[] = {
    3, 2,
    _INCBIN_U8("data/samus/gfx/Top_Right_DiagonalDown_MidAir_Frame2.gfx")
};

static const u8 sSamusGfx_Top_2c4668_Frame0[] = {
    2, 2,
    _INCBIN_U8("data/samus/gfx/Top_2c4668_Frame0.gfx")
};

static const u8 sSamusGfx_Top_2c4688_Frame0[] = {
    3, 3,
    _INCBIN_U8("data/samus/gfx/Top_2c4688_Frame0.gfx")
};

static const u8 sSamusGfx_Top_2c46a8_Frame0[] = {
    4, 2,
    _INCBIN_U8("data/samus/gfx/Top_2c46a8_Frame0.gfx")
};

static const u8 sSamusGfx_Top_2c46c8_Frame0[] = {
    3, 2,
    _INCBIN_U8("data/samus/gfx/Top_2c46c8_Frame0.gfx")
};

static const u8 sSamusGfx_Top_Right_Down_MidAir_Frame0[] = {
    4, 4,
    _INCBIN_U8("data/samus/gfx/Top_Right_Down_MidAir_Frame0.gfx")
};

static const u8 sSamusGfx_Top_Right_Down_MidAir_Frame1[] = {
    4, 4,
    _INCBIN_U8("data/samus/gfx/Top_Right_Down_MidAir_Frame1.gfx")
};

static const u8 sSamusGfx_Top_Left_Spinning_Frame0[] = {
    8, 8,
    _INCBIN_U8("data/samus/gfx/Top_Left_Spinning_Frame0.gfx")
};

static const u8 sSamusGfx_Top_Left_Spinning_Frame1[] = {
    4, 4,
    _INCBIN_U8("data/samus/gfx/Top_Left_Spinning_Frame1.gfx")
};

static const u8 sSamusGfx_Top_Left_Spinning_Frame2[] = {
    8, 8,
    _INCBIN_U8("data/samus/gfx/Top_Left_Spinning_Frame2.gfx")
};

static const u8 sSamusGfx_Top_Left_Spinning_Frame3[] = {
    4, 4,
    _INCBIN_U8("data/samus/gfx/Top_Left_Spinning_Frame3.gfx")
};

static const u8 sSamusGfx_Top_Right_Spinning_Frame0[] = {
    8, 8,
    _INCBIN_U8("data/samus/gfx/Top_Right_Spinning_Frame0.gfx")
};

static const u8 sSamusGfx_Top_Right_Spinning_Frame1[] = {
    4, 4,
    _INCBIN_U8("data/samus/gfx/Top_Right_Spinning_Frame1.gfx")
};

static const u8 sSamusGfx_Top_Right_Spinning_Frame2[] = {
    8, 8,
    _INCBIN_U8("data/samus/gfx/Top_Right_Spinning_Frame2.gfx")
};

static const u8 sSamusGfx_Top_Right_Spinning_Frame3[] = {
    4, 4,
    _INCBIN_U8("data/samus/gfx/Top_Right_Spinning_Frame3.gfx")
};

static const u8 sSamusGfx_Top_Left_StartingSpinJump_Frame0[] = {
    4, 4,
    _INCBIN_U8("data/samus/gfx/Top_Left_StartingSpinJump_Frame0.gfx")
};

static const u8 sSamusGfx_Bottom_StartingSpinJump_Frame0[] = {
    4, 2,
    _INCBIN_U8("data/samus/gfx/Bottom_StartingSpinJump_Frame0.gfx")
};

static const u8 sSamusGfx_Top_Right_StartingSpinJump_Frame0[] = {
    3, 2,
    _INCBIN_U8("data/samus/gfx/Top_Right_StartingSpinJump_Frame0.gfx")
};

static const u8 sSamusGfx_Top_Left_Shinesparking_Frame0[] = {
    4, 4,
    _INCBIN_U8("data/samus/gfx/Top_Left_Shinesparking_Frame0.gfx")
};

static const u8 sSamusGfx_Bottom_Shinesparking_Frame0[] = {
    4, 4,
    _INCBIN_U8("data/samus/gfx/Bottom_Shinesparking_Frame0.gfx")
};

static const u8 sSamusGfx_Top_Left_Shinesparking_Frame1[] = {
    4, 4,
    _INCBIN_U8("data/samus/gfx/Top_Left_Shinesparking_Frame1.gfx")
};

static const u8 sSamusGfx_Bottom_Shinesparking_Frame1[] = {
    4, 4,
    _INCBIN_U8("data/samus/gfx/Bottom_Shinesparking_Frame1.gfx")
};

static const u8 sSamusGfx_Top_Right_Shinesparking_Frame0[] = {
    4, 4,
    _INCBIN_U8("data/samus/gfx/Top_Right_Shinesparking_Frame0.gfx")
};

static const u8 sSamusGfx_Top_Right_Shinesparking_Frame1[] = {
    4, 4,
    _INCBIN_U8("data/samus/gfx/Top_Right_Shinesparking_Frame1.gfx")
};

static const u8 sSamusGfx_Top_Left_Sidewards_Shinesparking_Frame0[] = {
    5, 5,
    _INCBIN_U8("data/samus/gfx/Top_Left_Sidewards_Shinesparking_Frame0.gfx")
};

static const u8 sSamusGfx_Bottom_Sidewards_Shinesparking_Frame0[] = {
    4, 4,
    _INCBIN_U8("data/samus/gfx/Bottom_Sidewards_Shinesparking_Frame0.gfx")
};

static const u8 sSamusGfx_Top_Left_Sidewards_Shinesparking_Frame1[] = {
    5, 5,
    _INCBIN_U8("data/samus/gfx/Top_Left_Sidewards_Shinesparking_Frame1.gfx")
};

static const u8 sSamusGfx_Bottom_Sidewards_Shinesparking_Frame1[] = {
    5, 4,
    _INCBIN_U8("data/samus/gfx/Bottom_Sidewards_Shinesparking_Frame1.gfx")
};

static const u8 sSamusGfx_Top_Right_Sidewards_Shinesparking_Frame0[] = {
    7, 7,
    _INCBIN_U8("data/samus/gfx/Top_Right_Sidewards_Shinesparking_Frame0.gfx")
};

static const u8 sSamusGfx_Top_Right_Sidewards_Shinesparking_Frame1[] = {
    5, 5,
    _INCBIN_U8("data/samus/gfx/Top_Right_Sidewards_Shinesparking_Frame1.gfx")
};

static const u16 sSamusOam_Left_DelayBeforeShinesparking_Frame0[] = {
    5,
    OAM_ENTRY(-8, -37, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-16, -29, OAM_DIMS_8x8, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-9, -16, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-9, -24, OAM_DIMS_16x8, OAM_NO_FLIP, 0x16, 0, 0),
    OAM_ENTRY(7, -8, OAM_DIMS_8x8, OAM_NO_FLIP, 0x18, 0, 0)
};

static const u16 sSamusOam_Left_MidAir_Frame0[] = {
    5,
    OAM_ENTRY(-8, -38, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-8, -26, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-8, -10, OAM_DIMS_16x8, OAM_NO_FLIP, 0x16, 0, 0),
    OAM_ENTRY(0, -2, OAM_DIMS_8x8, OAM_NO_FLIP, 0x18, 0, 0),
    OAM_ENTRY(-14, -32, OAM_DIMS_16x16, OAM_NO_FLIP, 0x2, 0, 0)
};

static const u16 sSamusOam_Left_MidAir_Frame1[] = {
    4,
    OAM_ENTRY(-8, -36, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-8, -24, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-8, -8, OAM_DIMS_16x8, OAM_NO_FLIP, 0x16, 0, 0),
    OAM_ENTRY(-14, -32, OAM_DIMS_16x16, OAM_NO_FLIP, 0x2, 0, 0)
};

static const u16 sSamusOam_Left_MidAir_Frame2[] = {
    4,
    OAM_ENTRY(-8, -32, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-8, -20, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(0, -4, OAM_DIMS_8x8, OAM_NO_FLIP, 0x16, 0, 0),
    OAM_ENTRY(-13, -25, OAM_DIMS_16x16, OAM_NO_FLIP, 0x2, 0, 0)
};

static const u16 sSamusOam_Left_MidAir_Frame3[] = {
    4,
    OAM_ENTRY(-8, -34, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-8, -23, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-8, -7, OAM_DIMS_16x8, OAM_NO_FLIP, 0x16, 0, 0),
    OAM_ENTRY(-14, -27, OAM_DIMS_16x16, OAM_NO_FLIP, 0x2, 0, 0)
};

static const u16 sSamusOam_Left_MidAir_Frame4[] = {
    4,
    OAM_ENTRY(-8, -37, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-7, -25, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-7, -9, OAM_DIMS_16x16, OAM_NO_FLIP, 0x16, 0, 0),
    OAM_ENTRY(-14, -30, OAM_DIMS_16x16, OAM_NO_FLIP, 0x2, 0, 0)
};

static const u16 sSamusOam_Left_MidAir_Frame5[] = {
    4,
    OAM_ENTRY(-8, -36, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-8, -25, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-8, -9, OAM_DIMS_16x16, OAM_NO_FLIP, 0x16, 0, 0),
    OAM_ENTRY(-14, -29, OAM_DIMS_16x16, OAM_NO_FLIP, 0x2, 0, 0)
};

static const u16 sSamusOam_Left_Landing_Frame0[] = {
    4,
    OAM_ENTRY(-8, -29, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-9, -23, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-9, -7, OAM_DIMS_16x8, OAM_NO_FLIP, 0x16, 0, 0),
    OAM_ENTRY(-13, -22, OAM_DIMS_16x16, OAM_NO_FLIP, 0x2, 0, 0)
};

static const u16 sSamusOam_Left_Landing_Frame1[] = {
    5,
    OAM_ENTRY(-8, -31, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-8, -39, OAM_DIMS_8x8, OAM_NO_FLIP, 0x4, 0, 0),
    OAM_ENTRY(-8, -15, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-8, -23, OAM_DIMS_16x8, OAM_NO_FLIP, 0x16, 0, 0),
    OAM_ENTRY(-13, -24, OAM_DIMS_16x16, OAM_NO_FLIP, 0x2, 0, 0)
};

static const u16 sSamusOam_2c347a[] = {
    5,
    OAM_ENTRY(-9, -39, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-9, -47, OAM_DIMS_8x8, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-9, -16, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-9, -24, OAM_DIMS_16x8, OAM_NO_FLIP, 0x16, 0, 0),
    OAM_ENTRY(7, -8, OAM_DIMS_8x8, OAM_NO_FLIP, 0x18, 0, 0)
};

static const u16 sSamusOam_Left_Up_MidAir_Frame0[] = {
    5,
    OAM_ENTRY(-9, -40, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-9, -48, OAM_DIMS_8x8, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-8, -26, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-8, -10, OAM_DIMS_16x8, OAM_NO_FLIP, 0x16, 0, 0),
    OAM_ENTRY(0, -2, OAM_DIMS_8x8, OAM_NO_FLIP, 0x18, 0, 0)
};

static const u16 sSamusOam_Left_Up_MidAir_Frame1[] = {
    4,
    OAM_ENTRY(-9, -37, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-9, -45, OAM_DIMS_8x8, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-8, -24, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-8, -8, OAM_DIMS_16x8, OAM_NO_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_Left_Up_MidAir_Frame2[] = {
    4,
    OAM_ENTRY(-9, -34, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-9, -42, OAM_DIMS_8x8, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-8, -20, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(0, -4, OAM_DIMS_8x8, OAM_NO_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_Left_Up_MidAir_Frame3[] = {
    4,
    OAM_ENTRY(-9, -36, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-9, -44, OAM_DIMS_8x8, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-8, -23, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-8, -7, OAM_DIMS_16x8, OAM_NO_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_Left_Up_MidAir_Frame4[] = {
    4,
    OAM_ENTRY(-9, -39, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-9, -47, OAM_DIMS_8x8, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-7, -25, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-7, -9, OAM_DIMS_16x16, OAM_NO_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_Left_Up_MidAir_Frame5[] = {
    4,
    OAM_ENTRY(-9, -38, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-9, -46, OAM_DIMS_8x8, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-8, -25, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-8, -9, OAM_DIMS_16x16, OAM_NO_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_Left_Up_Landing_Frame0[] = {
    4,
    OAM_ENTRY(-9, -33, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-9, -41, OAM_DIMS_8x8, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-9, -23, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-9, -7, OAM_DIMS_16x8, OAM_NO_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_Left_Up_Landing_Frame1[] = {
    4,
    OAM_ENTRY(-9, -36, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-9, -44, OAM_DIMS_8x8, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-8, -15, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-8, -23, OAM_DIMS_16x8, OAM_NO_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_2c3570[] = {
    5,
    OAM_ENTRY(-9, -37, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-17, -37, OAM_DIMS_8x16, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-9, -16, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-9, -24, OAM_DIMS_16x8, OAM_NO_FLIP, 0x16, 0, 0),
    OAM_ENTRY(7, -8, OAM_DIMS_8x8, OAM_NO_FLIP, 0x18, 0, 0)
};

static const u16 sSamusOam_Left_DiagonalUp_MidAir_Frame0[] = {
    5,
    OAM_ENTRY(-10, -39, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-18, -39, OAM_DIMS_8x16, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-8, -26, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-8, -10, OAM_DIMS_16x8, OAM_NO_FLIP, 0x16, 0, 0),
    OAM_ENTRY(0, -2, OAM_DIMS_8x8, OAM_NO_FLIP, 0x18, 0, 0)
};

static const u16 sSamusOam_Left_DiagonalUp_MidAir_Frame1[] = {
    4,
    OAM_ENTRY(-10, -37, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-18, -37, OAM_DIMS_8x16, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-8, -24, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-8, -8, OAM_DIMS_16x8, OAM_NO_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_Left_DiagonalUp_MidAir_Frame2[] = {
    4,
    OAM_ENTRY(-10, -31, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-18, -31, OAM_DIMS_8x16, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-8, -20, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(0, -4, OAM_DIMS_8x8, OAM_NO_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_Left_DiagonalUp_MidAir_Frame3[] = {
    4,
    OAM_ENTRY(-10, -35, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-18, -35, OAM_DIMS_8x16, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-8, -23, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-8, -7, OAM_DIMS_16x8, OAM_NO_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_Left_DiagonalUp_MidAir_Frame4[] = {
    4,
    OAM_ENTRY(-10, -38, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-18, -38, OAM_DIMS_8x16, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-7, -25, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-7, -9, OAM_DIMS_16x16, OAM_NO_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_Left_DiagonalUp_MidAir_Frame5[] = {
    4,
    OAM_ENTRY(-9, -38, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-17, -38, OAM_DIMS_8x16, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-8, -25, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-8, -9, OAM_DIMS_16x16, OAM_NO_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_Left_DiagonalUp_Landing_Frame0[] = {
    4,
    OAM_ENTRY(-10, -29, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-18, -29, OAM_DIMS_8x16, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-9, -23, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-9, -7, OAM_DIMS_16x8, OAM_NO_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_Left_DiagonalUp_Landing_Frame1[] = {
    4,
    OAM_ENTRY(-10, -33, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-18, -33, OAM_DIMS_8x16, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-8, -15, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-8, -23, OAM_DIMS_16x8, OAM_NO_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_2c3666[] = {
    6,
    OAM_ENTRY(-9, -34, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-8, -42, OAM_DIMS_8x8, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-17, -26, OAM_DIMS_8x8, OAM_NO_FLIP, 0x3, 0, 0),
    OAM_ENTRY(-9, -16, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-9, -24, OAM_DIMS_16x8, OAM_NO_FLIP, 0x16, 0, 0),
    OAM_ENTRY(7, -8, OAM_DIMS_8x8, OAM_NO_FLIP, 0x18, 0, 0)
};

static const u16 sSamusOam_Left_Forward_MidAir_Frame0[] = {
    6,
    OAM_ENTRY(-10, -36, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-9, -44, OAM_DIMS_8x8, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-18, -28, OAM_DIMS_8x8, OAM_NO_FLIP, 0x3, 0, 0),
    OAM_ENTRY(-8, -26, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-8, -10, OAM_DIMS_16x8, OAM_NO_FLIP, 0x16, 0, 0),
    OAM_ENTRY(0, -2, OAM_DIMS_8x8, OAM_NO_FLIP, 0x18, 0, 0)
};

static const u16 sSamusOam_Left_Forward_MidAir_Frame1[] = {
    5,
    OAM_ENTRY(-10, -35, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-9, -43, OAM_DIMS_8x8, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-18, -27, OAM_DIMS_8x8, OAM_NO_FLIP, 0x3, 0, 0),
    OAM_ENTRY(-8, -24, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-8, -8, OAM_DIMS_16x8, OAM_NO_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_Left_Forward_MidAir_Frame2[] = {
    5,
    OAM_ENTRY(-10, -30, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-9, -38, OAM_DIMS_8x8, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-18, -22, OAM_DIMS_8x8, OAM_NO_FLIP, 0x3, 0, 0),
    OAM_ENTRY(-8, -20, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(0, -4, OAM_DIMS_8x8, OAM_NO_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_Left_Forward_MidAir_Frame3[] = {
    5,
    OAM_ENTRY(-10, -33, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-9, -41, OAM_DIMS_8x8, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-18, -25, OAM_DIMS_8x8, OAM_NO_FLIP, 0x3, 0, 0),
    OAM_ENTRY(-8, -23, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-8, -7, OAM_DIMS_16x8, OAM_NO_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_Left_Forward_MidAir_Frame4[] = {
    5,
    OAM_ENTRY(-10, -36, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-9, -44, OAM_DIMS_8x8, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-18, -28, OAM_DIMS_8x8, OAM_NO_FLIP, 0x3, 0, 0),
    OAM_ENTRY(-7, -25, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-7, -9, OAM_DIMS_16x16, OAM_NO_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_Left_Forward_MidAir_Frame5[] = {
    5,
    OAM_ENTRY(-10, -35, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-9, -43, OAM_DIMS_8x8, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-18, -27, OAM_DIMS_8x8, OAM_NO_FLIP, 0x3, 0, 0),
    OAM_ENTRY(-8, -25, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-8, -9, OAM_DIMS_16x16, OAM_NO_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_Left_Forward_Landing_Frame0[] = {
    5,
    OAM_ENTRY(-10, -28, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-9, -36, OAM_DIMS_8x8, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-18, -20, OAM_DIMS_8x8, OAM_NO_FLIP, 0x3, 0, 0),
    OAM_ENTRY(-9, -23, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-9, -7, OAM_DIMS_16x8, OAM_NO_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_Left_Forward_Landing_Frame1[] = {
    5,
    OAM_ENTRY(-10, -31, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-9, -39, OAM_DIMS_8x8, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-18, -23, OAM_DIMS_8x8, OAM_NO_FLIP, 0x3, 0, 0),
    OAM_ENTRY(-8, -15, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-8, -23, OAM_DIMS_16x8, OAM_NO_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_2c3792[] = {
    5,
    OAM_ENTRY(-16, -22, OAM_DIMS_16x8, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-8, -38, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-9, -16, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-9, -24, OAM_DIMS_16x8, OAM_NO_FLIP, 0x16, 0, 0),
    OAM_ENTRY(7, -8, OAM_DIMS_8x8, OAM_NO_FLIP, 0x18, 0, 0)
};

static const u16 sSamusOam_Left_DiagonalDown_MidAir_Frame0[] = {
    5,
    OAM_ENTRY(-17, -24, OAM_DIMS_16x8, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-9, -40, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-8, -26, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-8, -10, OAM_DIMS_16x8, OAM_NO_FLIP, 0x16, 0, 0),
    OAM_ENTRY(0, -2, OAM_DIMS_8x8, OAM_NO_FLIP, 0x18, 0, 0)
};

static const u16 sSamusOam_Left_DiagonalDown_MidAir_Frame1[] = {
    4,
    OAM_ENTRY(-17, -24, OAM_DIMS_16x8, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-8, -24, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-8, -8, OAM_DIMS_16x8, OAM_NO_FLIP, 0x16, 0, 0),
    OAM_ENTRY(-9, -40, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0)
};

static const u16 sSamusOam_Left_DiagonalDown_MidAir_Frame2[] = {
    4,
    OAM_ENTRY(-16, -19, OAM_DIMS_16x8, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-8, -35, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-8, -20, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(0, -4, OAM_DIMS_8x8, OAM_NO_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_Left_DiagonalDown_MidAir_Frame3[] = {
    4,
    OAM_ENTRY(-17, -22, OAM_DIMS_16x8, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-9, -38, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-8, -23, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-8, -7, OAM_DIMS_16x8, OAM_NO_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_Left_DiagonalDown_MidAir_Frame4[] = {
    4,
    OAM_ENTRY(-17, -25, OAM_DIMS_16x8, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-9, -41, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-7, -25, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-7, -9, OAM_DIMS_16x16, OAM_NO_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_Left_DiagonalDown_MidAir_Frame5[] = {
    4,
    OAM_ENTRY(-17, -23, OAM_DIMS_16x8, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-9, -39, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-8, -25, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-8, -9, OAM_DIMS_16x16, OAM_NO_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_Left_DiagonalDown_Landing_Frame0[] = {
    4,
    OAM_ENTRY(-16, -17, OAM_DIMS_16x8, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-8, -33, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-9, -23, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-9, -7, OAM_DIMS_16x8, OAM_NO_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_Left_DiagonalDown_Landing_Frame1[] = {
    4,
    OAM_ENTRY(-17, -20, OAM_DIMS_16x8, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-9, -36, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-8, -15, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-8, -23, OAM_DIMS_16x8, OAM_NO_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_2c42a8_Frame0[] = {
    4,
    OAM_ENTRY(-9, -35, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-9, -43, OAM_DIMS_8x8, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-8, -23, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-8, -7, OAM_DIMS_16x8, OAM_NO_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_2c42c8_Frame0[] = {
    4,
    OAM_ENTRY(-11, -37, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-19, -37, OAM_DIMS_8x16, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-8, -23, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-8, -7, OAM_DIMS_16x8, OAM_NO_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_2c42e8_Frame0[] = {
    4,
    OAM_ENTRY(-11, -32, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-11, -40, OAM_DIMS_16x8, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-8, -23, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-8, -7, OAM_DIMS_16x8, OAM_NO_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_2c4308_Frame0[] = {
    4,
    OAM_ENTRY(-17, -20, OAM_DIMS_16x8, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-9, -36, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-8, -23, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-8, -7, OAM_DIMS_16x8, OAM_NO_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_Left_Down_MidAir_Frame0[] = {
    4,
    OAM_ENTRY(-12, -30, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-12, -14, OAM_DIMS_16x16, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-2, -30, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-2, -14, OAM_DIMS_16x16, OAM_NO_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_Left_Down_MidAir_Frame1[] = {
    4,
    OAM_ENTRY(-12, -30, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-12, -14, OAM_DIMS_16x16, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-4, -30, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-4, -14, OAM_DIMS_16x16, OAM_NO_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_Right_DelayBeforeShinesparking_Frame0[] = {
    5,
    OAM_ENTRY(-3, -27, OAM_DIMS_16x8, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-8, -36, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-7, -24, OAM_DIMS_16x16, OAM_X_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-7, -8, OAM_DIMS_16x8, OAM_X_FLIP, 0x16, 0, 0),
    OAM_ENTRY(-15, -8, OAM_DIMS_8x8, OAM_X_FLIP, 0x18, 0, 0)
};

static const u16 sSamusOam_Right_MidAir_Frame0[] = {
    5,
    OAM_ENTRY(-3, -32, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-8, -38, OAM_DIMS_16x16, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-8, -26, OAM_DIMS_16x16, OAM_X_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-8, -10, OAM_DIMS_16x8, OAM_X_FLIP, 0x16, 0, 0),
    OAM_ENTRY(-8, -2, OAM_DIMS_8x8, OAM_X_FLIP, 0x18, 0, 0)
};

static const u16 sSamusOam_Right_MidAir_Frame1[] = {
    4,
    OAM_ENTRY(-3, -30, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-8, -36, OAM_DIMS_16x16, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-8, -24, OAM_DIMS_16x16, OAM_X_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-8, -8, OAM_DIMS_16x8, OAM_X_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_Right_MidAir_Frame2[] = {
    4,
    OAM_ENTRY(-3, -24, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-8, -32, OAM_DIMS_16x16, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-8, -20, OAM_DIMS_16x16, OAM_X_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-8, -4, OAM_DIMS_8x8, OAM_X_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_Right_MidAir_Frame3[] = {
    4,
    OAM_ENTRY(-3, -27, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-8, -34, OAM_DIMS_16x16, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-8, -23, OAM_DIMS_16x16, OAM_X_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-8, -7, OAM_DIMS_16x8, OAM_X_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_Right_MidAir_Frame4[] = {
    4,
    OAM_ENTRY(-2, -30, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-8, -37, OAM_DIMS_16x16, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-9, -25, OAM_DIMS_16x16, OAM_X_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-9, -9, OAM_DIMS_16x16, OAM_X_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_Right_MidAir_Frame5[] = {
    4,
    OAM_ENTRY(-2, -29, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-8, -36, OAM_DIMS_16x16, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-8, -25, OAM_DIMS_16x16, OAM_X_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-8, -9, OAM_DIMS_16x16, OAM_X_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_Right_Landing_Frame0[] = {
    4,
    OAM_ENTRY(-3, -22, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-8, -29, OAM_DIMS_16x16, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-7, -23, OAM_DIMS_16x16, OAM_X_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-7, -7, OAM_DIMS_16x8, OAM_X_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_Right_Landing_Frame1[] = {
    5,
    OAM_ENTRY(-3, -24, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-8, -31, OAM_DIMS_16x16, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-8, -23, OAM_DIMS_16x16, OAM_X_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-8, -7, OAM_DIMS_16x8, OAM_X_FLIP, 0x16, 0, 0),
    OAM_ENTRY(0, -39, OAM_DIMS_8x8, OAM_X_FLIP, 0x4, 0, 0)
};

static const u16 sSamusOam_2c3a20[] = {
    4,
    OAM_ENTRY(-7, -39, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-7, -24, OAM_DIMS_16x16, OAM_X_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-7, -8, OAM_DIMS_16x8, OAM_X_FLIP, 0x16, 0, 0),
    OAM_ENTRY(-15, -8, OAM_DIMS_8x8, OAM_X_FLIP, 0x18, 0, 0)
};

static const u16 sSamusOam_Right_Up_MidAir_Frame0[] = {
    4,
    OAM_ENTRY(-7, -40, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-8, -26, OAM_DIMS_16x16, OAM_X_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-8, -10, OAM_DIMS_16x8, OAM_X_FLIP, 0x16, 0, 0),
    OAM_ENTRY(-8, -2, OAM_DIMS_8x8, OAM_X_FLIP, 0x18, 0, 0)
};

static const u16 sSamusOam_Right_Up_MidAir_Frame1[] = {
    3,
    OAM_ENTRY(-7, -37, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-8, -24, OAM_DIMS_16x16, OAM_X_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-8, -8, OAM_DIMS_16x8, OAM_X_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_Right_Up_MidAir_Frame2[] = {
    3,
    OAM_ENTRY(-7, -33, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-8, -20, OAM_DIMS_16x16, OAM_X_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-8, -4, OAM_DIMS_8x8, OAM_X_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_Right_Up_MidAir_Frame3[] = {
    3,
    OAM_ENTRY(-7, -36, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-8, -23, OAM_DIMS_16x16, OAM_X_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-8, -7, OAM_DIMS_16x8, OAM_X_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_Right_Up_MidAir_Frame4[] = {
    3,
    OAM_ENTRY(-7, -39, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-9, -25, OAM_DIMS_16x16, OAM_X_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-9, -9, OAM_DIMS_16x16, OAM_X_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_Right_Up_MidAir_Frame5[] = {
    3,
    OAM_ENTRY(-7, -38, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-8, -25, OAM_DIMS_16x16, OAM_X_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-8, -9, OAM_DIMS_16x16, OAM_X_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_Right_Up_Landing_Frame0[] = {
    3,
    OAM_ENTRY(-6, -33, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-7, -23, OAM_DIMS_16x16, OAM_X_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-7, -7, OAM_DIMS_16x8, OAM_X_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_2c3acc[] = {
    5,
    OAM_ENTRY(-7, -37, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(9, -37, OAM_DIMS_8x16, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-7, -24, OAM_DIMS_16x16, OAM_X_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-7, -8, OAM_DIMS_16x8, OAM_X_FLIP, 0x16, 0, 0),
    OAM_ENTRY(-15, -8, OAM_DIMS_8x8, OAM_X_FLIP, 0x18, 0, 0)
};

static const u16 sSamusOam_Right_DiagonalUp_MidAir_Frame0[] = {
    5,
    OAM_ENTRY(-6, -39, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(10, -39, OAM_DIMS_8x16, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-8, -26, OAM_DIMS_16x16, OAM_X_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-8, -10, OAM_DIMS_16x8, OAM_X_FLIP, 0x16, 0, 0),
    OAM_ENTRY(-8, -2, OAM_DIMS_8x8, OAM_X_FLIP, 0x18, 0, 0)
};

static const u16 sSamusOam_Right_DiagonalUp_MidAir_Frame1[] = {
    4,
    OAM_ENTRY(-6, -37, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(10, -37, OAM_DIMS_8x16, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-8, -24, OAM_DIMS_16x16, OAM_X_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-8, -8, OAM_DIMS_16x8, OAM_X_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_Right_DiagonalUp_MidAir_Frame2[] = {
    4,
    OAM_ENTRY(-6, -31, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(10, -31, OAM_DIMS_8x16, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-8, -20, OAM_DIMS_16x16, OAM_X_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-8, -4, OAM_DIMS_8x8, OAM_X_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_Right_DiagonalUp_MidAir_Frame3[] = {
    4,
    OAM_ENTRY(-6, -35, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(10, -35, OAM_DIMS_8x16, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-8, -23, OAM_DIMS_16x16, OAM_X_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-8, -7, OAM_DIMS_16x8, OAM_X_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_Right_DiagonalUp_MidAir_Frame4[] = {
    4,
    OAM_ENTRY(-6, -38, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(10, -38, OAM_DIMS_8x16, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-9, -25, OAM_DIMS_16x16, OAM_X_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-9, -9, OAM_DIMS_16x16, OAM_X_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_Right_DiagonalUp_MidAir_Frame5[] = {
    4,
    OAM_ENTRY(-7, -40, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(9, -40, OAM_DIMS_8x16, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-8, -27, OAM_DIMS_16x16, OAM_X_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-8, -11, OAM_DIMS_16x16, OAM_X_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_Right_DiagonalUp_Landing_Frame0[] = {
    4,
    OAM_ENTRY(-6, -29, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(10, -29, OAM_DIMS_8x16, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-7, -23, OAM_DIMS_16x16, OAM_X_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-7, -7, OAM_DIMS_16x8, OAM_X_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_Right_DiagonalUp_Landing_Frame1[] = {
    4,
    OAM_ENTRY(-6, -33, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(10, -33, OAM_DIMS_8x16, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-8, -23, OAM_DIMS_16x16, OAM_X_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-8, -7, OAM_DIMS_16x8, OAM_X_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_2c3bc2[] = {
    5,
    OAM_ENTRY(0, -42, OAM_DIMS_8x8, OAM_X_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-7, -34, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-7, -24, OAM_DIMS_16x16, OAM_X_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-7, -8, OAM_DIMS_16x8, OAM_X_FLIP, 0x16, 0, 0),
    OAM_ENTRY(-15, -8, OAM_DIMS_8x8, OAM_X_FLIP, 0x18, 0, 0)
};

static const u16 sSamusOam_Right_Forward_MidAir_Frame0[] = {
    5,
    OAM_ENTRY(1, -44, OAM_DIMS_8x8, OAM_X_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-6, -36, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-8, -26, OAM_DIMS_16x16, OAM_X_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-8, -10, OAM_DIMS_16x8, OAM_X_FLIP, 0x16, 0, 0),
    OAM_ENTRY(-8, -2, OAM_DIMS_8x8, OAM_X_FLIP, 0x18, 0, 0)
};

static const u16 sSamusOam_Right_Forward_MidAir_Frame1[] = {
    4,
    OAM_ENTRY(1, -43, OAM_DIMS_8x8, OAM_X_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-6, -35, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-8, -24, OAM_DIMS_16x16, OAM_X_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-8, -8, OAM_DIMS_16x8, OAM_X_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_Right_Forward_MidAir_Frame2[] = {
    4,
    OAM_ENTRY(1, -38, OAM_DIMS_8x8, OAM_X_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-6, -30, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-8, -20, OAM_DIMS_16x16, OAM_X_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-8, -4, OAM_DIMS_8x8, OAM_X_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_Right_Forward_MidAir_Frame3[] = {
    4,
    OAM_ENTRY(1, -41, OAM_DIMS_8x8, OAM_X_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-6, -33, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-8, -23, OAM_DIMS_16x16, OAM_X_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-8, -7, OAM_DIMS_16x8, OAM_X_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_Right_Forward_MidAir_Frame4[] = {
    4,
    OAM_ENTRY(1, -44, OAM_DIMS_8x8, OAM_X_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-6, -36, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-9, -25, OAM_DIMS_16x16, OAM_X_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-9, -9, OAM_DIMS_16x16, OAM_X_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_Right_Forward_MidAir_Frame5[] = {
    4,
    OAM_ENTRY(1, -43, OAM_DIMS_8x8, OAM_X_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-6, -35, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-8, -25, OAM_DIMS_16x16, OAM_X_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-8, -9, OAM_DIMS_16x16, OAM_X_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_Right_Forward_Landing_Frame0[] = {
    4,
    OAM_ENTRY(1, -36, OAM_DIMS_8x8, OAM_X_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-6, -28, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-7, -23, OAM_DIMS_16x16, OAM_X_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-7, -7, OAM_DIMS_16x8, OAM_X_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_Right_Forward_Landing_Frame1[] = {
    4,
    OAM_ENTRY(1, -39, OAM_DIMS_8x8, OAM_X_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-6, -31, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-8, -23, OAM_DIMS_16x16, OAM_X_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-8, -7, OAM_DIMS_16x8, OAM_X_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_2c3cb8[] = {
    5,
    OAM_ENTRY(0, -22, OAM_DIMS_8x8, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-8, -38, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-7, -24, OAM_DIMS_16x16, OAM_X_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-7, -8, OAM_DIMS_16x8, OAM_X_FLIP, 0x16, 0, 0),
    OAM_ENTRY(-15, -8, OAM_DIMS_8x8, OAM_X_FLIP, 0x18, 0, 0)
};

static const u16 sSamusOam_Right_DiagonalDown_MidAir_Frame0[] = {
    5,
    OAM_ENTRY(-7, -40, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(1, -24, OAM_DIMS_8x8, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-8, -26, OAM_DIMS_16x16, OAM_X_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-8, -10, OAM_DIMS_16x8, OAM_X_FLIP, 0x16, 0, 0),
    OAM_ENTRY(-8, -2, OAM_DIMS_8x8, OAM_X_FLIP, 0x18, 0, 0)
};

static const u16 sSamusOam_Right_DiagonalDown_MidAir_Frame1[] = {
    4,
    OAM_ENTRY(-7, -40, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(1, -24, OAM_DIMS_8x8, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-8, -24, OAM_DIMS_16x16, OAM_X_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-8, -8, OAM_DIMS_16x8, OAM_X_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_Right_DiagonalDown_MidAir_Frame2[] = {
    4,
    OAM_ENTRY(-8, -35, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(0, -19, OAM_DIMS_8x8, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-8, -20, OAM_DIMS_16x16, OAM_X_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-8, -4, OAM_DIMS_8x8, OAM_X_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_Right_DiagonalDown_MidAir_Frame3[] = {
    4,
    OAM_ENTRY(-7, -38, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(1, -22, OAM_DIMS_8x8, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-8, -23, OAM_DIMS_16x16, OAM_X_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-8, -7, OAM_DIMS_16x8, OAM_X_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_Right_DiagonalDown_MidAir_Frame4[] = {
    4,
    OAM_ENTRY(-7, -41, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(1, -25, OAM_DIMS_8x8, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-9, -25, OAM_DIMS_16x16, OAM_X_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-9, -9, OAM_DIMS_16x16, OAM_X_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_Right_DiagonalDown_MidAir_Frame5[] = {
    4,
    OAM_ENTRY(-7, -39, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(1, -23, OAM_DIMS_8x8, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-8, -25, OAM_DIMS_16x16, OAM_X_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-8, -9, OAM_DIMS_16x16, OAM_X_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_Right_DiagonalDown_Landing_Frame0[] = {
    4,
    OAM_ENTRY(-8, -33, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(0, -17, OAM_DIMS_8x8, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-7, -23, OAM_DIMS_16x16, OAM_X_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-7, -7, OAM_DIMS_16x8, OAM_X_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_Right_DiagonalDown_Landing_Frame1[] = {
    4,
    OAM_ENTRY(-7, -36, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(1, -20, OAM_DIMS_8x8, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-8, -23, OAM_DIMS_16x16, OAM_X_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-8, -7, OAM_DIMS_16x8, OAM_X_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_2c4668_Frame0[] = {
    3,
    OAM_ENTRY(-7, -35, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-8, -23, OAM_DIMS_16x16, OAM_X_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-8, -7, OAM_DIMS_16x8, OAM_X_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_2c4688_Frame0[] = {
    4,
    OAM_ENTRY(-5, -37, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(11, -37, OAM_DIMS_8x16, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-8, -23, OAM_DIMS_16x16, OAM_X_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-8, -7, OAM_DIMS_16x8, OAM_X_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_2c46a8_Frame0[] = {
    4,
    OAM_ENTRY(-5, -40, OAM_DIMS_16x8, OAM_X_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-5, -32, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-8, -23, OAM_DIMS_16x16, OAM_X_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-8, -7, OAM_DIMS_16x8, OAM_X_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_Right_Down_MidAir_Frame0[] = {
    4,
    OAM_ENTRY(-4, -30, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-4, -14, OAM_DIMS_16x16, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-14, -30, OAM_DIMS_16x16, OAM_X_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-14, -14, OAM_DIMS_16x16, OAM_X_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_Right_Down_MidAir_Frame1[] = {
    4,
    OAM_ENTRY(-4, -30, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-4, -14, OAM_DIMS_16x16, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-12, -30, OAM_DIMS_16x16, OAM_X_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-12, -14, OAM_DIMS_16x16, OAM_X_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_Left_Spinning_Frame0[] = {
    2,
    OAM_ENTRY(-16, -29, OAM_DIMS_32x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-16, -13, OAM_DIMS_32x16, OAM_NO_FLIP, 0x4, 0, 0)
};

static const u16 sSamusOam_Left_Spinning_Frame1[] = {
    1,
    OAM_ENTRY(-16, -21, OAM_DIMS_32x16, OAM_NO_FLIP, 0x0, 0, 0)
};

static const u16 sSamusOam_Left_Spinning_Frame3[] = {
    2,
    OAM_ENTRY(-8, -29, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-8, -13, OAM_DIMS_16x16, OAM_NO_FLIP, 0x2, 0, 0)
};

static const u16 sSamusOam_Left_Spinning_Frame4[] = {
    2,
    OAM_ENTRY(-16, -13, OAM_DIMS_32x16, OAM_XY_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-16, -29, OAM_DIMS_32x16, OAM_XY_FLIP, 0x4, 0, 0)
};

static const u16 sSamusOam_Left_Spinning_Frame5[] = {
    1,
    OAM_ENTRY(-16, -21, OAM_DIMS_32x16, OAM_XY_FLIP, 0x0, 0, 0)
};

static const u16 sSamusOam_Left_Spinning_Frame7[] = {
    2,
    OAM_ENTRY(-8, -14, OAM_DIMS_16x16, OAM_XY_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-8, -30, OAM_DIMS_16x16, OAM_XY_FLIP, 0x2, 0, 0)
};

static const u16 sSamusOam_Left_StartingSpinJump_Frame0[] = {
    4,
    OAM_ENTRY(-10, -28, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-8, -23, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-8, -7, OAM_DIMS_16x8, OAM_NO_FLIP, 0x16, 0, 0),
    OAM_ENTRY(-12, -21, OAM_DIMS_16x16, OAM_NO_FLIP, 0x2, 0, 0)
};

static const u16 sSamusOam_Right_StartingSpinJump_Frame0[] = {
    4,
    OAM_ENTRY(-6, -27, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(10, -19, OAM_DIMS_8x8, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-8, -23, OAM_DIMS_16x16, OAM_X_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-8, -7, OAM_DIMS_16x8, OAM_X_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_Left_Shinesparking_Frame0[] = {
    4,
    OAM_ENTRY(-4, -33, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-7, -38, OAM_DIMS_16x16, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-8, -26, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-8, -10, OAM_DIMS_16x16, OAM_NO_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_Left_Shinesparking_Frame1[] = {
    4,
    OAM_ENTRY(-4, -36, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-7, -40, OAM_DIMS_16x16, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-8, -26, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-8, -10, OAM_DIMS_16x16, OAM_NO_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_Right_Shinesparking_Frame0[] = {
    4,
    OAM_ENTRY(-11, -33, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-9, -38, OAM_DIMS_16x16, OAM_X_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-8, -26, OAM_DIMS_16x16, OAM_X_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-8, -10, OAM_DIMS_16x16, OAM_X_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_Right_Shinesparking_Frame1[] = {
    4,
    OAM_ENTRY(-12, -36, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-9, -40, OAM_DIMS_16x16, OAM_X_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-8, -26, OAM_DIMS_16x16, OAM_X_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-8, -10, OAM_DIMS_16x16, OAM_X_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_Left_Sidewards_Shinesparking_Frame0[] = {
    4,
    OAM_ENTRY(-9, -20, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-11, -32, OAM_DIMS_16x16, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(5, -32, OAM_DIMS_8x16, OAM_NO_FLIP, 0x4, 0, 0),
    OAM_ENTRY(-11, -16, OAM_DIMS_32x16, OAM_NO_FLIP, 0x14, 0, 0)
};

static const u16 sSamusOam_Left_Sidewards_Shinesparking_Frame1[] = {
    5,
    OAM_ENTRY(-8, -19, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-10, -32, OAM_DIMS_16x16, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(6, -32, OAM_DIMS_8x16, OAM_NO_FLIP, 0x4, 0, 0),
    OAM_ENTRY(-10, -16, OAM_DIMS_32x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(22, -14, OAM_DIMS_8x8, OAM_NO_FLIP, 0x18, 0, 0)
};

static const u16 sSamusOam_Right_Sidewards_Shinesparking_Frame0[] = {
    5,
    OAM_ENTRY(-7, -20, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-7, -20, OAM_DIMS_16x16, OAM_X_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-13, -32, OAM_DIMS_16x16, OAM_NO_FLIP, 0x4, 0, 0),
    OAM_ENTRY(3, -32, OAM_DIMS_8x16, OAM_NO_FLIP, 0x6, 0, 0),
    OAM_ENTRY(-21, -16, OAM_DIMS_32x16, OAM_X_FLIP, 0x14, 0, 0)
};

static const u16 sSamusOam_Right_Sidewards_Shinesparking_Frame1[] = {
    5,
    OAM_ENTRY(-8, -19, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-14, -32, OAM_DIMS_16x16, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(2, -32, OAM_DIMS_8x16, OAM_NO_FLIP, 0x4, 0, 0),
    OAM_ENTRY(-22, -16, OAM_DIMS_32x16, OAM_X_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-30, -14, OAM_DIMS_8x8, OAM_X_FLIP, 0x18, 0, 0)
};

const struct SamusAnimationData sSamusAnim_Left_MidAir[7] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_Left_MidAir_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_MidAir_Frame0,
        .pOam = sSamusOam_Left_MidAir_Frame0,
        .timer = 4
    },
    [1] = {
        .pTopGfx = sSamusGfx_Top_Left_MidAir_Frame1,
        .pBottomGfx = sSamusGfx_Bottom_MidAir_Frame1,
        .pOam = sSamusOam_Left_MidAir_Frame1,
        .timer = 6
    },
    [2] = {
        .pTopGfx = sSamusGfx_Top_Left_MidAir_Frame2,
        .pBottomGfx = sSamusGfx_Bottom_MidAir_Frame2,
        .pOam = sSamusOam_Left_MidAir_Frame2,
        .timer = 4
    },
    [3] = {
        .pTopGfx = sSamusGfx_Top_Left_MidAir_Frame3,
        .pBottomGfx = sSamusGfx_Bottom_MidAir_Frame3,
        .pOam = sSamusOam_Left_MidAir_Frame3,
        .timer = 2
    },
    [4] = {
        .pTopGfx = sSamusGfx_Top_Left_MidAir_Frame4,
        .pBottomGfx = sSamusGfx_Bottom_MidAir_Frame4,
        .pOam = sSamusOam_Left_MidAir_Frame4,
        .timer = 2
    },
    [5] = {
        .pTopGfx = sSamusGfx_Top_Left_MidAir_Frame5,
        .pBottomGfx = sSamusGfx_Bottom_MidAir_Frame5,
        .pOam = sSamusOam_Left_MidAir_Frame5,
        .timer = 6
    },
    [6] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Left_Landing[3] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_Left_Landing_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_Landing_Frame0,
        .pOam = sSamusOam_Left_Landing_Frame0,
        .timer = 2
    },
    [1] = {
        .pTopGfx = sSamusGfx_Top_Left_Landing_Frame1,
        .pBottomGfx = sSamusGfx_Bottom_Left_Landing_Frame1,
        .pOam = sSamusOam_Left_Landing_Frame1,
        .timer = 1
    },
    [2] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Left_Up_MidAir[7] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_Left_Up_MidAir_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_MidAir_Frame0,
        .pOam = sSamusOam_Left_Up_MidAir_Frame0,
        .timer = 2
    },
    [1] = {
        .pTopGfx = sSamusGfx_Top_Left_Up_MidAir_Frame1,
        .pBottomGfx = sSamusGfx_Bottom_MidAir_Frame1,
        .pOam = sSamusOam_Left_Up_MidAir_Frame1,
        .timer = 6
    },
    [2] = {
        .pTopGfx = sSamusGfx_Top_Left_Up_MidAir_Frame2,
        .pBottomGfx = sSamusGfx_Bottom_MidAir_Frame2,
        .pOam = sSamusOam_Left_Up_MidAir_Frame2,
        .timer = 4
    },
    [3] = {
        .pTopGfx = sSamusGfx_Top_Left_Up_MidAir_Frame1,
        .pBottomGfx = sSamusGfx_Bottom_MidAir_Frame3,
        .pOam = sSamusOam_Left_Up_MidAir_Frame3,
        .timer = 2
    },
    [4] = {
        .pTopGfx = sSamusGfx_Top_Left_Up_MidAir_Frame1,
        .pBottomGfx = sSamusGfx_Bottom_MidAir_Frame4,
        .pOam = sSamusOam_Left_Up_MidAir_Frame4,
        .timer = 2
    },
    [5] = {
        .pTopGfx = sSamusGfx_Top_Left_Up_MidAir_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_MidAir_Frame5,
        .pOam = sSamusOam_Left_Up_MidAir_Frame5,
        .timer = 6
    },
    [6] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Left_Up_Landing[3] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_Left_Up_MidAir_Frame2,
        .pBottomGfx = sSamusGfx_Bottom_Landing_Frame0,
        .pOam = sSamusOam_Left_Up_Landing_Frame0,
        .timer = 2
    },
    [1] = {
        .pTopGfx = sSamusGfx_Top_Left_Up_MidAir_Frame1,
        .pBottomGfx = sSamusGfx_Bottom_Left_Landing_Frame1,
        .pOam = sSamusOam_Left_Up_Landing_Frame1,
        .timer = 1
    },
    [2] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Left_DiagonalUp_MidAir[7] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_Left_DiagonalUp_MidAir_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_MidAir_Frame0,
        .pOam = sSamusOam_Left_DiagonalUp_MidAir_Frame0,
        .timer = 2
    },
    [1] = {
        .pTopGfx = sSamusGfx_Top_Left_DiagonalUp_MidAir_Frame1,
        .pBottomGfx = sSamusGfx_Bottom_MidAir_Frame1,
        .pOam = sSamusOam_Left_DiagonalUp_MidAir_Frame1,
        .timer = 6
    },
    [2] = {
        .pTopGfx = sSamusGfx_Top_Left_DiagonalUp_MidAir_Frame2,
        .pBottomGfx = sSamusGfx_Bottom_MidAir_Frame2,
        .pOam = sSamusOam_Left_DiagonalUp_MidAir_Frame2,
        .timer = 4
    },
    [3] = {
        .pTopGfx = sSamusGfx_Top_Left_DiagonalUp_MidAir_Frame1,
        .pBottomGfx = sSamusGfx_Bottom_MidAir_Frame3,
        .pOam = sSamusOam_Left_DiagonalUp_MidAir_Frame3,
        .timer = 2
    },
    [4] = {
        .pTopGfx = sSamusGfx_Top_Left_DiagonalUp_MidAir_Frame1,
        .pBottomGfx = sSamusGfx_Bottom_MidAir_Frame4,
        .pOam = sSamusOam_Left_DiagonalUp_MidAir_Frame4,
        .timer = 2
    },
    [5] = {
        .pTopGfx = sSamusGfx_Top_Left_DiagonalUp_MidAir_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_MidAir_Frame5,
        .pOam = sSamusOam_Left_DiagonalUp_MidAir_Frame5,
        .timer = 6
    },
    [6] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Left_DiagonalUp_Landing[3] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_Left_DiagonalUp_MidAir_Frame2,
        .pBottomGfx = sSamusGfx_Bottom_Landing_Frame0,
        .pOam = sSamusOam_Left_DiagonalUp_Landing_Frame0,
        .timer = 2
    },
    [1] = {
        .pTopGfx = sSamusGfx_Top_Left_DiagonalUp_MidAir_Frame1,
        .pBottomGfx = sSamusGfx_Bottom_Left_Landing_Frame1,
        .pOam = sSamusOam_Left_DiagonalUp_Landing_Frame1,
        .timer = 1
    },
    [2] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Left_Forward_MidAir[7] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_Left_Forward_MidAir_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_MidAir_Frame0,
        .pOam = sSamusOam_Left_Forward_MidAir_Frame0,
        .timer = 2
    },
    [1] = {
        .pTopGfx = sSamusGfx_Top_Left_Forward_MidAir_Frame1,
        .pBottomGfx = sSamusGfx_Bottom_MidAir_Frame1,
        .pOam = sSamusOam_Left_Forward_MidAir_Frame1,
        .timer = 6
    },
    [2] = {
        .pTopGfx = sSamusGfx_Top_Left_Forward_MidAir_Frame2,
        .pBottomGfx = sSamusGfx_Bottom_MidAir_Frame2,
        .pOam = sSamusOam_Left_Forward_MidAir_Frame2,
        .timer = 4
    },
    [3] = {
        .pTopGfx = sSamusGfx_Top_Left_Forward_MidAir_Frame1,
        .pBottomGfx = sSamusGfx_Bottom_MidAir_Frame3,
        .pOam = sSamusOam_Left_Forward_MidAir_Frame3,
        .timer = 2
    },
    [4] = {
        .pTopGfx = sSamusGfx_Top_Left_Forward_MidAir_Frame1,
        .pBottomGfx = sSamusGfx_Bottom_MidAir_Frame4,
        .pOam = sSamusOam_Left_Forward_MidAir_Frame4,
        .timer = 2
    },
    [5] = {
        .pTopGfx = sSamusGfx_Top_Left_Forward_MidAir_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_MidAir_Frame5,
        .pOam = sSamusOam_Left_Forward_MidAir_Frame5,
        .timer = 6
    },
    [6] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Left_Forward_Landing[3] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_Left_Forward_MidAir_Frame2,
        .pBottomGfx = sSamusGfx_Bottom_Landing_Frame0,
        .pOam = sSamusOam_Left_Forward_Landing_Frame0,
        .timer = 2
    },
    [1] = {
        .pTopGfx = sSamusGfx_Top_Left_Forward_MidAir_Frame1,
        .pBottomGfx = sSamusGfx_Bottom_Left_Landing_Frame1,
        .pOam = sSamusOam_Left_Forward_Landing_Frame1,
        .timer = 1
    },
    [2] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Left_DiagonalDown_MidAir[7] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_Left_DiagonalDown_MidAir_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_MidAir_Frame0,
        .pOam = sSamusOam_Left_DiagonalDown_MidAir_Frame0,
        .timer = 2
    },
    [1] = {
        .pTopGfx = sSamusGfx_Top_Left_DiagonalDown_MidAir_Frame1,
        .pBottomGfx = sSamusGfx_Bottom_MidAir_Frame1,
        .pOam = sSamusOam_Left_DiagonalDown_MidAir_Frame1,
        .timer = 6
    },
    [2] = {
        .pTopGfx = sSamusGfx_Top_Left_DiagonalDown_MidAir_Frame2,
        .pBottomGfx = sSamusGfx_Bottom_MidAir_Frame2,
        .pOam = sSamusOam_Left_DiagonalDown_MidAir_Frame2,
        .timer = 4
    },
    [3] = {
        .pTopGfx = sSamusGfx_Top_Left_DiagonalDown_MidAir_Frame1,
        .pBottomGfx = sSamusGfx_Bottom_MidAir_Frame3,
        .pOam = sSamusOam_Left_DiagonalDown_MidAir_Frame3,
        .timer = 2
    },
    [4] = {
        .pTopGfx = sSamusGfx_Top_Left_DiagonalDown_MidAir_Frame1,
        .pBottomGfx = sSamusGfx_Bottom_MidAir_Frame4,
        .pOam = sSamusOam_Left_DiagonalDown_MidAir_Frame4,
        .timer = 2
    },
    [5] = {
        .pTopGfx = sSamusGfx_Top_Left_DiagonalDown_MidAir_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_MidAir_Frame5,
        .pOam = sSamusOam_Left_DiagonalDown_MidAir_Frame5,
        .timer = 6
    },
    [6] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Left_DiagonalDown_Landing[3] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_Left_DiagonalDown_MidAir_Frame2,
        .pBottomGfx = sSamusGfx_Bottom_Landing_Frame0,
        .pOam = sSamusOam_Left_DiagonalDown_Landing_Frame0,
        .timer = 2
    },
    [1] = {
        .pTopGfx = sSamusGfx_Top_Left_DiagonalDown_MidAir_Frame1,
        .pBottomGfx = sSamusGfx_Bottom_Left_Landing_Frame1,
        .pOam = sSamusOam_Left_DiagonalDown_Landing_Frame1,
        .timer = 1
    },
    [2] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_2c42a8[2] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_2c42a8_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_MidAir_Frame3,
        .pOam = sSamusOam_2c42a8_Frame0,
        .timer = 4
    },
    [1] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_2c42c8[2] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_2c42c8_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_MidAir_Frame3,
        .pOam = sSamusOam_2c42c8_Frame0,
        .timer = 4
    },
    [1] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_2c42e8[2] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_2c42e8_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_MidAir_Frame3,
        .pOam = sSamusOam_2c42e8_Frame0,
        .timer = 4
    },
    [1] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_2c4308[2] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_2c4308_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_MidAir_Frame3,
        .pOam = sSamusOam_2c4308_Frame0,
        .timer = 4
    },
    [1] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_2c4328[2] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_Left_Down_MidAir_Frame1,
        .pBottomGfx = sSamusGfx_Bottom_Down_MidAir_Frame1,
        .pOam = sSamusOam_Left_Down_MidAir_Frame1,
        .timer = 4
    },
    [1] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Right_MidAir[7] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_Right_MidAir_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_MidAir_Frame0,
        .pOam = sSamusOam_Right_MidAir_Frame0,
        .timer = 2
    },
    [1] = {
        .pTopGfx = sSamusGfx_Top_Right_MidAir_Frame1,
        .pBottomGfx = sSamusGfx_Bottom_MidAir_Frame1,
        .pOam = sSamusOam_Right_MidAir_Frame1,
        .timer = 6
    },
    [2] = {
        .pTopGfx = sSamusGfx_Top_Right_MidAir_Frame2,
        .pBottomGfx = sSamusGfx_Bottom_MidAir_Frame2,
        .pOam = sSamusOam_Right_MidAir_Frame2,
        .timer = 4
    },
    [3] = {
        .pTopGfx = sSamusGfx_Top_Right_MidAir_Frame3,
        .pBottomGfx = sSamusGfx_Bottom_MidAir_Frame3,
        .pOam = sSamusOam_Right_MidAir_Frame3,
        .timer = 2
    },
    [4] = {
        .pTopGfx = sSamusGfx_Top_Right_MidAir_Frame4,
        .pBottomGfx = sSamusGfx_Bottom_MidAir_Frame4,
        .pOam = sSamusOam_Right_MidAir_Frame4,
        .timer = 2
    },
    [5] = {
        .pTopGfx = sSamusGfx_Top_Right_MidAir_Frame5,
        .pBottomGfx = sSamusGfx_Bottom_MidAir_Frame5,
        .pOam = sSamusOam_Right_MidAir_Frame5,
        .timer = 6
    },
    [6] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Right_Landing[3] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_Right_Landing_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_Landing_Frame0,
        .pOam = sSamusOam_Right_Landing_Frame0,
        .timer = 2
    },
    [1] = {
        .pTopGfx = sSamusGfx_Top_Right_Landing_Frame1,
        .pBottomGfx = sSamusGfx_Bottom_Right_Landing_Frame1,
        .pOam = sSamusOam_Right_Landing_Frame1,
        .timer = 1
    },
    [2] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Right_Up_MidAir[7] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_Right_Up_MidAir_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_MidAir_Frame0,
        .pOam = sSamusOam_Right_Up_MidAir_Frame0,
        .timer = 2
    },
    [1] = {
        .pTopGfx = sSamusGfx_Top_Right_Up_MidAir_Frame1,
        .pBottomGfx = sSamusGfx_Bottom_MidAir_Frame1,
        .pOam = sSamusOam_Right_Up_MidAir_Frame1,
        .timer = 6
    },
    [2] = {
        .pTopGfx = sSamusGfx_Top_Right_Up_MidAir_Frame2,
        .pBottomGfx = sSamusGfx_Bottom_MidAir_Frame2,
        .pOam = sSamusOam_Right_Up_MidAir_Frame2,
        .timer = 4
    },
    [3] = {
        .pTopGfx = sSamusGfx_Top_Right_Up_MidAir_Frame1,
        .pBottomGfx = sSamusGfx_Bottom_MidAir_Frame3,
        .pOam = sSamusOam_Right_Up_MidAir_Frame3,
        .timer = 2
    },
    [4] = {
        .pTopGfx = sSamusGfx_Top_Right_Up_MidAir_Frame1,
        .pBottomGfx = sSamusGfx_Bottom_MidAir_Frame4,
        .pOam = sSamusOam_Right_Up_MidAir_Frame4,
        .timer = 2
    },
    [5] = {
        .pTopGfx = sSamusGfx_Top_Right_Up_MidAir_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_MidAir_Frame5,
        .pOam = sSamusOam_Right_Up_MidAir_Frame5,
        .timer = 6
    },
    [6] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Right_Up_Landing[3] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_Right_Up_MidAir_Frame2,
        .pBottomGfx = sSamusGfx_Bottom_Landing_Frame0,
        .pOam = sSamusOam_Right_Up_Landing_Frame0,
        .timer = 2
    },
    [1] = {
        .pTopGfx = sSamusGfx_Top_Right_Up_MidAir_Frame1,
        .pBottomGfx = sSamusGfx_Bottom_Right_Landing_Frame1,
        .pOam = sSamusOam_Right_Up_MidAir_Frame3,
        .timer = 1
    },
    [2] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Right_DiagonalUp_MidAir[7] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_Right_DiagonalUp_MidAir_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_MidAir_Frame0,
        .pOam = sSamusOam_Right_DiagonalUp_MidAir_Frame0,
        .timer = 2
    },
    [1] = {
        .pTopGfx = sSamusGfx_Top_Right_DiagonalUp_MidAir_Frame1,
        .pBottomGfx = sSamusGfx_Bottom_MidAir_Frame1,
        .pOam = sSamusOam_Right_DiagonalUp_MidAir_Frame1,
        .timer = 6
    },
    [2] = {
        .pTopGfx = sSamusGfx_Top_Right_DiagonalUp_MidAir_Frame2,
        .pBottomGfx = sSamusGfx_Bottom_MidAir_Frame2,
        .pOam = sSamusOam_Right_DiagonalUp_MidAir_Frame2,
        .timer = 4
    },
    [3] = {
        .pTopGfx = sSamusGfx_Top_Right_DiagonalUp_MidAir_Frame1,
        .pBottomGfx = sSamusGfx_Bottom_MidAir_Frame3,
        .pOam = sSamusOam_Right_DiagonalUp_MidAir_Frame3,
        .timer = 2
    },
    [4] = {
        .pTopGfx = sSamusGfx_Top_Right_DiagonalUp_MidAir_Frame1,
        .pBottomGfx = sSamusGfx_Bottom_MidAir_Frame4,
        .pOam = sSamusOam_Right_DiagonalUp_MidAir_Frame4,
        .timer = 2
    },
    [5] = {
        .pTopGfx = sSamusGfx_Top_Right_DiagonalUp_MidAir_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_MidAir_Frame5,
        .pOam = sSamusOam_Right_DiagonalUp_MidAir_Frame5,
        .timer = 6
    },
    [6] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Right_DiagonalUp_Landing[3] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_Right_DiagonalUp_MidAir_Frame2,
        .pBottomGfx = sSamusGfx_Bottom_Landing_Frame0,
        .pOam = sSamusOam_Right_DiagonalUp_Landing_Frame0,
        .timer = 2
    },
    [1] = {
        .pTopGfx = sSamusGfx_Top_Right_DiagonalUp_MidAir_Frame1,
        .pBottomGfx = sSamusGfx_Bottom_Right_Landing_Frame1,
        .pOam = sSamusOam_Right_DiagonalUp_Landing_Frame1,
        .timer = 1
    },
    [2] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Right_Forward_MidAir[7] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_Right_Forward_MidAir_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_MidAir_Frame0,
        .pOam = sSamusOam_Right_Forward_MidAir_Frame0,
        .timer = 2
    },
    [1] = {
        .pTopGfx = sSamusGfx_Top_Right_Forward_MidAir_Frame1,
        .pBottomGfx = sSamusGfx_Bottom_MidAir_Frame1,
        .pOam = sSamusOam_Right_Forward_MidAir_Frame1,
        .timer = 6
    },
    [2] = {
        .pTopGfx = sSamusGfx_Top_Right_Forward_MidAir_Frame2,
        .pBottomGfx = sSamusGfx_Bottom_MidAir_Frame2,
        .pOam = sSamusOam_Right_Forward_MidAir_Frame2,
        .timer = 4
    },
    [3] = {
        .pTopGfx = sSamusGfx_Top_Right_Forward_MidAir_Frame1,
        .pBottomGfx = sSamusGfx_Bottom_MidAir_Frame3,
        .pOam = sSamusOam_Right_Forward_MidAir_Frame3,
        .timer = 2
    },
    [4] = {
        .pTopGfx = sSamusGfx_Top_Right_Forward_MidAir_Frame1,
        .pBottomGfx = sSamusGfx_Bottom_MidAir_Frame4,
        .pOam = sSamusOam_Right_Forward_MidAir_Frame4,
        .timer = 2
    },
    [5] = {
        .pTopGfx = sSamusGfx_Top_Right_Forward_MidAir_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_MidAir_Frame5,
        .pOam = sSamusOam_Right_Forward_MidAir_Frame5,
        .timer = 6
    },
    [6] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Right_Forward_Landing[3] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_Right_Forward_MidAir_Frame2,
        .pBottomGfx = sSamusGfx_Bottom_Landing_Frame0,
        .pOam = sSamusOam_Right_Forward_Landing_Frame0,
        .timer = 2
    },
    [1] = {
        .pTopGfx = sSamusGfx_Top_Right_Forward_MidAir_Frame1,
        .pBottomGfx = sSamusGfx_Bottom_Right_Landing_Frame1,
        .pOam = sSamusOam_Right_Forward_Landing_Frame1,
        .timer = 1
    },
    [2] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Right_DiagonalDown_MidAir[7] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_Right_DiagonalDown_MidAir_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_MidAir_Frame0,
        .pOam = sSamusOam_Right_DiagonalDown_MidAir_Frame0,
        .timer = 2
    },
    [1] = {
        .pTopGfx = sSamusGfx_Top_Right_DiagonalDown_MidAir_Frame1,
        .pBottomGfx = sSamusGfx_Bottom_MidAir_Frame1,
        .pOam = sSamusOam_Right_DiagonalDown_MidAir_Frame1,
        .timer = 6
    },
    [2] = {
        .pTopGfx = sSamusGfx_Top_Right_DiagonalDown_MidAir_Frame2,
        .pBottomGfx = sSamusGfx_Bottom_MidAir_Frame2,
        .pOam = sSamusOam_Right_DiagonalDown_MidAir_Frame2,
        .timer = 4
    },
    [3] = {
        .pTopGfx = sSamusGfx_Top_Right_DiagonalDown_MidAir_Frame1,
        .pBottomGfx = sSamusGfx_Bottom_MidAir_Frame3,
        .pOam = sSamusOam_Right_DiagonalDown_MidAir_Frame3,
        .timer = 2
    },
    [4] = {
        .pTopGfx = sSamusGfx_Top_Right_DiagonalDown_MidAir_Frame1,
        .pBottomGfx = sSamusGfx_Bottom_MidAir_Frame4,
        .pOam = sSamusOam_Right_DiagonalDown_MidAir_Frame4,
        .timer = 2
    },
    [5] = {
        .pTopGfx = sSamusGfx_Top_Right_DiagonalDown_MidAir_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_MidAir_Frame5,
        .pOam = sSamusOam_Right_DiagonalDown_MidAir_Frame5,
        .timer = 6
    },
    [6] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Right_DiagonalDown_Landing[3] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_Right_DiagonalDown_MidAir_Frame2,
        .pBottomGfx = sSamusGfx_Bottom_Landing_Frame0,
        .pOam = sSamusOam_Right_DiagonalDown_Landing_Frame0,
        .timer = 2
    },
    [1] = {
        .pTopGfx = sSamusGfx_Top_Right_DiagonalDown_MidAir_Frame1,
        .pBottomGfx = sSamusGfx_Bottom_Right_Landing_Frame1,
        .pOam = sSamusOam_Right_DiagonalDown_Landing_Frame1,
        .timer = 1
    },
    [2] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_2c4668[2] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_2c4668_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_MidAir_Frame3,
        .pOam = sSamusOam_2c4668_Frame0,
        .timer = 4
    },
    [1] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_2c4688[2] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_2c4688_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_MidAir_Frame3,
        .pOam = sSamusOam_2c4688_Frame0,
        .timer = 4
    },
    [1] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_2c46a8[2] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_2c46a8_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_MidAir_Frame3,
        .pOam = sSamusOam_2c46a8_Frame0,
        .timer = 4
    },
    [1] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_2c46c8[2] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_2c46c8_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_MidAir_Frame3,
        .pOam = sSamusOam_Right_DiagonalDown_Landing_Frame1,
        .timer = 4
    },
    [1] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_2c46e8[2] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_Right_Down_MidAir_Frame1,
        .pBottomGfx = sSamusGfx_Bottom_Down_MidAir_Frame1,
        .pOam = sSamusOam_Right_Down_MidAir_Frame1,
        .timer = 4
    },
    [1] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Left_Down_MidAir[7] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_Left_Down_MidAir_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_Down_MidAir_Frame0,
        .pOam = sSamusOam_Left_Down_MidAir_Frame0,
        .timer = 4
    },
    [1] = {
        .pTopGfx = sSamusGfx_Top_Left_Down_MidAir_Frame1,
        .pBottomGfx = sSamusGfx_Bottom_Down_MidAir_Frame1,
        .pOam = sSamusOam_Left_Down_MidAir_Frame1,
        .timer = 6
    },
    [2] = {
        .pTopGfx = sSamusGfx_Top_Left_Down_MidAir_Frame1,
        .pBottomGfx = sSamusGfx_Bottom_Down_MidAir_Frame1,
        .pOam = sSamusOam_Left_Down_MidAir_Frame1,
        .timer = 4
    },
    [3] = {
        .pTopGfx = sSamusGfx_Top_Left_Down_MidAir_Frame1,
        .pBottomGfx = sSamusGfx_Bottom_Down_MidAir_Frame1,
        .pOam = sSamusOam_Left_Down_MidAir_Frame1,
        .timer = 2
    },
    [4] = {
        .pTopGfx = sSamusGfx_Top_Left_Down_MidAir_Frame1,
        .pBottomGfx = sSamusGfx_Bottom_Down_MidAir_Frame1,
        .pOam = sSamusOam_Left_Down_MidAir_Frame1,
        .timer = 2
    },
    [5] = {
        .pTopGfx = sSamusGfx_Top_Left_Down_MidAir_Frame1,
        .pBottomGfx = sSamusGfx_Bottom_Down_MidAir_Frame1,
        .pOam = sSamusOam_Left_Down_MidAir_Frame1,
        .timer = 6
    },
    [6] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Right_Down_MidAir[7] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_Right_Down_MidAir_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_Down_MidAir_Frame0,
        .pOam = sSamusOam_Right_Down_MidAir_Frame0,
        .timer = 4
    },
    [1] = {
        .pTopGfx = sSamusGfx_Top_Right_Down_MidAir_Frame1,
        .pBottomGfx = sSamusGfx_Bottom_Down_MidAir_Frame1,
        .pOam = sSamusOam_Right_Down_MidAir_Frame1,
        .timer = 6
    },
    [2] = {
        .pTopGfx = sSamusGfx_Top_Right_Down_MidAir_Frame1,
        .pBottomGfx = sSamusGfx_Bottom_Down_MidAir_Frame1,
        .pOam = sSamusOam_Right_Down_MidAir_Frame1,
        .timer = 4
    },
    [3] = {
        .pTopGfx = sSamusGfx_Top_Right_Down_MidAir_Frame1,
        .pBottomGfx = sSamusGfx_Bottom_Down_MidAir_Frame1,
        .pOam = sSamusOam_Right_Down_MidAir_Frame1,
        .timer = 2
    },
    [4] = {
        .pTopGfx = sSamusGfx_Top_Right_Down_MidAir_Frame1,
        .pBottomGfx = sSamusGfx_Bottom_Down_MidAir_Frame1,
        .pOam = sSamusOam_Right_Down_MidAir_Frame1,
        .timer = 2
    },
    [5] = {
        .pTopGfx = sSamusGfx_Top_Right_Down_MidAir_Frame1,
        .pBottomGfx = sSamusGfx_Bottom_Down_MidAir_Frame1,
        .pOam = sSamusOam_Right_Down_MidAir_Frame1,
        .timer = 6
    },
    [6] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Left_Spinning[9] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_Left_Spinning_Frame0,
        .pBottomGfx = sSamusGfx_Empty,
        .pOam = sSamusOam_Left_Spinning_Frame0,
        .timer = 2
    },
    [1] = {
        .pTopGfx = sSamusGfx_Top_Left_Spinning_Frame1,
        .pBottomGfx = sSamusGfx_Empty,
        .pOam = sSamusOam_Left_Spinning_Frame1,
        .timer = 2
    },
    [2] = {
        .pTopGfx = sSamusGfx_Top_Left_Spinning_Frame2,
        .pBottomGfx = sSamusGfx_Empty,
        .pOam = sSamusOam_Left_Spinning_Frame0,
        .timer = 2
    },
    [3] = {
        .pTopGfx = sSamusGfx_Top_Left_Spinning_Frame3,
        .pBottomGfx = sSamusGfx_Empty,
        .pOam = sSamusOam_Left_Spinning_Frame3,
        .timer = 2
    },
    [4] = {
        .pTopGfx = sSamusGfx_Top_Left_Spinning_Frame0,
        .pBottomGfx = sSamusGfx_Empty,
        .pOam = sSamusOam_Left_Spinning_Frame4,
        .timer = 2
    },
    [5] = {
        .pTopGfx = sSamusGfx_Top_Left_Spinning_Frame1,
        .pBottomGfx = sSamusGfx_Empty,
        .pOam = sSamusOam_Left_Spinning_Frame5,
        .timer = 2
    },
    [6] = {
        .pTopGfx = sSamusGfx_Top_Left_Spinning_Frame2,
        .pBottomGfx = sSamusGfx_Empty,
        .pOam = sSamusOam_Left_Spinning_Frame4,
        .timer = 2
    },
    [7] = {
        .pTopGfx = sSamusGfx_Top_Left_Spinning_Frame3,
        .pBottomGfx = sSamusGfx_Empty,
        .pOam = sSamusOam_Left_Spinning_Frame7,
        .timer = 2
    },
    [8] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Right_Spinning[9] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_Right_Spinning_Frame0,
        .pBottomGfx = sSamusGfx_Empty,
        .pOam = sSamusOam_Left_Spinning_Frame0,
        .timer = 2
    },
    [1] = {
        .pTopGfx = sSamusGfx_Top_Right_Spinning_Frame1,
        .pBottomGfx = sSamusGfx_Empty,
        .pOam = sSamusOam_Left_Spinning_Frame1,
        .timer = 2
    },
    [2] = {
        .pTopGfx = sSamusGfx_Top_Right_Spinning_Frame2,
        .pBottomGfx = sSamusGfx_Empty,
        .pOam = sSamusOam_Left_Spinning_Frame0,
        .timer = 2
    },
    [3] = {
        .pTopGfx = sSamusGfx_Top_Right_Spinning_Frame3,
        .pBottomGfx = sSamusGfx_Empty,
        .pOam = sSamusOam_Left_Spinning_Frame3,
        .timer = 2
    },
    [4] = {
        .pTopGfx = sSamusGfx_Top_Right_Spinning_Frame0,
        .pBottomGfx = sSamusGfx_Empty,
        .pOam = sSamusOam_Left_Spinning_Frame4,
        .timer = 2
    },
    [5] = {
        .pTopGfx = sSamusGfx_Top_Right_Spinning_Frame1,
        .pBottomGfx = sSamusGfx_Empty,
        .pOam = sSamusOam_Left_Spinning_Frame5,
        .timer = 2
    },
    [6] = {
        .pTopGfx = sSamusGfx_Top_Right_Spinning_Frame2,
        .pBottomGfx = sSamusGfx_Empty,
        .pOam = sSamusOam_Left_Spinning_Frame4,
        .timer = 2
    },
    [7] = {
        .pTopGfx = sSamusGfx_Top_Right_Spinning_Frame3,
        .pBottomGfx = sSamusGfx_Empty,
        .pOam = sSamusOam_Left_Spinning_Frame7,
        .timer = 2
    },
    [8] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Left_StartingSpinJump[2] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_Left_StartingSpinJump_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_StartingSpinJump_Frame0,
        .pOam = sSamusOam_Left_StartingSpinJump_Frame0,
        .timer = 2
    },
    [1] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Right_StartingSpinJump[2] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_Right_StartingSpinJump_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_StartingSpinJump_Frame0,
        .pOam = sSamusOam_Right_StartingSpinJump_Frame0,
        .timer = 2
    },
    [1] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Left_DelayBeforeShinesparking[5] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_Left_DelayBeforeShinesparking_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_Left_DelayBeforeShinesparking_Frame0,
        .pOam = sSamusOam_Left_DelayBeforeShinesparking_Frame0,
        .timer = 4
    },
    [1] = {
        .pTopGfx = sSamusGfx_Top_Left_MidAir_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_MidAir_Frame0,
        .pOam = sSamusOam_Left_MidAir_Frame0,
        .timer = 4
    },
    [2] = {
        .pTopGfx = sSamusGfx_Top_Left_MidAir_Frame1,
        .pBottomGfx = sSamusGfx_Bottom_MidAir_Frame1,
        .pOam = sSamusOam_Left_MidAir_Frame1,
        .timer = 6
    },
    [3] = {
        .pTopGfx = sSamusGfx_Top_Left_MidAir_Frame2,
        .pBottomGfx = sSamusGfx_Bottom_MidAir_Frame2,
        .pOam = sSamusOam_Left_MidAir_Frame2,
        .timer = 16
    },
    [4] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Left_Shinesparking[3] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_Left_Shinesparking_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_Shinesparking_Frame0,
        .pOam = sSamusOam_Left_Shinesparking_Frame0,
        .timer = 8
    },
    [1] = {
        .pTopGfx = sSamusGfx_Top_Left_Shinesparking_Frame1,
        .pBottomGfx = sSamusGfx_Bottom_Shinesparking_Frame1,
        .pOam = sSamusOam_Left_Shinesparking_Frame1,
        .timer = 255
    },
    [2] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Right_DelayBeforeShinesparking[5] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_Right_DelayBeforeShinesparking_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_Right_DelayBeforeShinesparking_Frame0,
        .pOam = sSamusOam_Right_DelayBeforeShinesparking_Frame0,
        .timer = 4
    },
    [1] = {
        .pTopGfx = sSamusGfx_Top_Right_MidAir_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_MidAir_Frame0,
        .pOam = sSamusOam_Right_MidAir_Frame0,
        .timer = 4
    },
    [2] = {
        .pTopGfx = sSamusGfx_Top_Right_MidAir_Frame1,
        .pBottomGfx = sSamusGfx_Bottom_MidAir_Frame1,
        .pOam = sSamusOam_Right_MidAir_Frame1,
        .timer = 6
    },
    [3] = {
        .pTopGfx = sSamusGfx_Top_Right_MidAir_Frame2,
        .pBottomGfx = sSamusGfx_Bottom_MidAir_Frame2,
        .pOam = sSamusOam_Right_MidAir_Frame2,
        .timer = 16
    },
    [4] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Right_Shinesparking[3] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_Right_Shinesparking_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_Shinesparking_Frame0,
        .pOam = sSamusOam_Right_Shinesparking_Frame0,
        .timer = 8
    },
    [1] = {
        .pTopGfx = sSamusGfx_Top_Right_Shinesparking_Frame1,
        .pBottomGfx = sSamusGfx_Bottom_Shinesparking_Frame1,
        .pOam = sSamusOam_Right_Shinesparking_Frame1,
        .timer = 255
    },
    [2] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Left_Sidewards_Shinesparking[3] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_Left_Sidewards_Shinesparking_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_Sidewards_Shinesparking_Frame0,
        .pOam = sSamusOam_Left_Sidewards_Shinesparking_Frame0,
        .timer = 8
    },
    [1] = {
        .pTopGfx = sSamusGfx_Top_Left_Sidewards_Shinesparking_Frame1,
        .pBottomGfx = sSamusGfx_Bottom_Sidewards_Shinesparking_Frame1,
        .pOam = sSamusOam_Left_Sidewards_Shinesparking_Frame1,
        .timer = 255
    },
    [2] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Right_Sidewards_Shinesparking[3] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_Right_Sidewards_Shinesparking_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_Sidewards_Shinesparking_Frame0,
        .pOam = sSamusOam_Right_Sidewards_Shinesparking_Frame0,
        .timer = 8
    },
    [1] = {
        .pTopGfx = sSamusGfx_Top_Right_Sidewards_Shinesparking_Frame1,
        .pBottomGfx = sSamusGfx_Bottom_Sidewards_Shinesparking_Frame1,
        .pOam = sSamusOam_Right_Sidewards_Shinesparking_Frame1,
        .timer = 255
    },
    [2] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Left_DelayAfterShinesparking[10] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_Left_Shinesparking_Frame1,
        .pBottomGfx = sSamusGfx_Bottom_Shinesparking_Frame1,
        .pOam = sSamusOam_Left_Shinesparking_Frame1,
        .timer = 16
    },
    [1] = {
        .pTopGfx = sSamusGfx_Top_Left_Spinning_Frame0,
        .pBottomGfx = sSamusGfx_Empty,
        .pOam = sSamusOam_Left_Spinning_Frame0,
        .timer = 2
    },
    [2] = {
        .pTopGfx = sSamusGfx_Top_Left_Spinning_Frame1,
        .pBottomGfx = sSamusGfx_Empty,
        .pOam = sSamusOam_Left_Spinning_Frame1,
        .timer = 2
    },
    [3] = {
        .pTopGfx = sSamusGfx_Top_Left_Spinning_Frame2,
        .pBottomGfx = sSamusGfx_Empty,
        .pOam = sSamusOam_Left_Spinning_Frame0,
        .timer = 2
    },
    [4] = {
        .pTopGfx = sSamusGfx_Top_Left_Spinning_Frame3,
        .pBottomGfx = sSamusGfx_Empty,
        .pOam = sSamusOam_Left_Spinning_Frame3,
        .timer = 2
    },
    [5] = {
        .pTopGfx = sSamusGfx_Top_Left_Spinning_Frame0,
        .pBottomGfx = sSamusGfx_Empty,
        .pOam = sSamusOam_Left_Spinning_Frame4,
        .timer = 2
    },
    [6] = {
        .pTopGfx = sSamusGfx_Top_Left_Spinning_Frame1,
        .pBottomGfx = sSamusGfx_Empty,
        .pOam = sSamusOam_Left_Spinning_Frame5,
        .timer = 2
    },
    [7] = {
        .pTopGfx = sSamusGfx_Top_Left_Spinning_Frame2,
        .pBottomGfx = sSamusGfx_Empty,
        .pOam = sSamusOam_Left_Spinning_Frame4,
        .timer = 2
    },
    [8] = {
        .pTopGfx = sSamusGfx_Top_Left_Spinning_Frame3,
        .pBottomGfx = sSamusGfx_Empty,
        .pOam = sSamusOam_Left_Spinning_Frame7,
        .timer = 2
    },
    [9] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Right_DelayAfterShinesparking[10] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_Right_Shinesparking_Frame1,
        .pBottomGfx = sSamusGfx_Bottom_Shinesparking_Frame1,
        .pOam = sSamusOam_Right_Shinesparking_Frame1,
        .timer = 16
    },
    [1] = {
        .pTopGfx = sSamusGfx_Top_Right_Spinning_Frame0,
        .pBottomGfx = sSamusGfx_Empty,
        .pOam = sSamusOam_Left_Spinning_Frame0,
        .timer = 2
    },
    [2] = {
        .pTopGfx = sSamusGfx_Top_Right_Spinning_Frame1,
        .pBottomGfx = sSamusGfx_Empty,
        .pOam = sSamusOam_Left_Spinning_Frame1,
        .timer = 2
    },
    [3] = {
        .pTopGfx = sSamusGfx_Top_Right_Spinning_Frame2,
        .pBottomGfx = sSamusGfx_Empty,
        .pOam = sSamusOam_Left_Spinning_Frame0,
        .timer = 2
    },
    [4] = {
        .pTopGfx = sSamusGfx_Top_Right_Spinning_Frame3,
        .pBottomGfx = sSamusGfx_Empty,
        .pOam = sSamusOam_Left_Spinning_Frame3,
        .timer = 2
    },
    [5] = {
        .pTopGfx = sSamusGfx_Top_Right_Spinning_Frame0,
        .pBottomGfx = sSamusGfx_Empty,
        .pOam = sSamusOam_Left_Spinning_Frame4,
        .timer = 2
    },
    [6] = {
        .pTopGfx = sSamusGfx_Top_Right_Spinning_Frame1,
        .pBottomGfx = sSamusGfx_Empty,
        .pOam = sSamusOam_Left_Spinning_Frame5,
        .timer = 2
    },
    [7] = {
        .pTopGfx = sSamusGfx_Top_Right_Spinning_Frame2,
        .pBottomGfx = sSamusGfx_Empty,
        .pOam = sSamusOam_Left_Spinning_Frame4,
        .timer = 2
    },
    [8] = {
        .pTopGfx = sSamusGfx_Top_Right_Spinning_Frame3,
        .pBottomGfx = sSamusGfx_Empty,
        .pOam = sSamusOam_Left_Spinning_Frame7,
        .timer = 2
    },
    [9] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Left_Sidewards_DelayAfterShinesparking[10] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_Left_Sidewards_Shinesparking_Frame1,
        .pBottomGfx = sSamusGfx_Bottom_Sidewards_Shinesparking_Frame1,
        .pOam = sSamusOam_Left_Sidewards_Shinesparking_Frame1,
        .timer = 16
    },
    [1] = {
        .pTopGfx = sSamusGfx_Top_Left_Spinning_Frame0,
        .pBottomGfx = sSamusGfx_Empty,
        .pOam = sSamusOam_Left_Spinning_Frame0,
        .timer = 2
    },
    [2] = {
        .pTopGfx = sSamusGfx_Top_Left_Spinning_Frame1,
        .pBottomGfx = sSamusGfx_Empty,
        .pOam = sSamusOam_Left_Spinning_Frame1,
        .timer = 2
    },
    [3] = {
        .pTopGfx = sSamusGfx_Top_Left_Spinning_Frame2,
        .pBottomGfx = sSamusGfx_Empty,
        .pOam = sSamusOam_Left_Spinning_Frame0,
        .timer = 2
    },
    [4] = {
        .pTopGfx = sSamusGfx_Top_Left_Spinning_Frame3,
        .pBottomGfx = sSamusGfx_Empty,
        .pOam = sSamusOam_Left_Spinning_Frame3,
        .timer = 2
    },
    [5] = {
        .pTopGfx = sSamusGfx_Top_Left_Spinning_Frame0,
        .pBottomGfx = sSamusGfx_Empty,
        .pOam = sSamusOam_Left_Spinning_Frame4,
        .timer = 2
    },
    [6] = {
        .pTopGfx = sSamusGfx_Top_Left_Spinning_Frame1,
        .pBottomGfx = sSamusGfx_Empty,
        .pOam = sSamusOam_Left_Spinning_Frame5,
        .timer = 2
    },
    [7] = {
        .pTopGfx = sSamusGfx_Top_Left_Spinning_Frame2,
        .pBottomGfx = sSamusGfx_Empty,
        .pOam = sSamusOam_Left_Spinning_Frame4,
        .timer = 2
    },
    [8] = {
        .pTopGfx = sSamusGfx_Top_Left_Spinning_Frame3,
        .pBottomGfx = sSamusGfx_Empty,
        .pOam = sSamusOam_Left_Spinning_Frame7,
        .timer = 2
    },
    [9] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Right_Sidewards_DelayAfterShinesparking[10] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_Right_Sidewards_Shinesparking_Frame1,
        .pBottomGfx = sSamusGfx_Bottom_Sidewards_Shinesparking_Frame1,
        .pOam = sSamusOam_Right_Sidewards_Shinesparking_Frame1,
        .timer = 16
    },
    [1] = {
        .pTopGfx = sSamusGfx_Top_Right_Spinning_Frame0,
        .pBottomGfx = sSamusGfx_Empty,
        .pOam = sSamusOam_Left_Spinning_Frame0,
        .timer = 2
    },
    [2] = {
        .pTopGfx = sSamusGfx_Top_Right_Spinning_Frame1,
        .pBottomGfx = sSamusGfx_Empty,
        .pOam = sSamusOam_Left_Spinning_Frame1,
        .timer = 2
    },
    [3] = {
        .pTopGfx = sSamusGfx_Top_Right_Spinning_Frame2,
        .pBottomGfx = sSamusGfx_Empty,
        .pOam = sSamusOam_Left_Spinning_Frame0,
        .timer = 2
    },
    [4] = {
        .pTopGfx = sSamusGfx_Top_Right_Spinning_Frame3,
        .pBottomGfx = sSamusGfx_Empty,
        .pOam = sSamusOam_Left_Spinning_Frame3,
        .timer = 2
    },
    [5] = {
        .pTopGfx = sSamusGfx_Top_Right_Spinning_Frame0,
        .pBottomGfx = sSamusGfx_Empty,
        .pOam = sSamusOam_Left_Spinning_Frame4,
        .timer = 2
    },
    [6] = {
        .pTopGfx = sSamusGfx_Top_Right_Spinning_Frame1,
        .pBottomGfx = sSamusGfx_Empty,
        .pOam = sSamusOam_Left_Spinning_Frame5,
        .timer = 2
    },
    [7] = {
        .pTopGfx = sSamusGfx_Top_Right_Spinning_Frame2,
        .pBottomGfx = sSamusGfx_Empty,
        .pOam = sSamusOam_Left_Spinning_Frame4,
        .timer = 2
    },
    [8] = {
        .pTopGfx = sSamusGfx_Top_Right_Spinning_Frame3,
        .pBottomGfx = sSamusGfx_Empty,
        .pOam = sSamusOam_Left_Spinning_Frame7,
        .timer = 2
    },
    [9] = SAMUS_ANIM_TERMINATOR
};

static const u8 sSamusGfx_Top_Left_Up_UnusedCrouching_Frame0[] = {
    3, 2,
    _INCBIN_U8("data/samus/gfx/Top_Left_Up_UnusedCrouching_Frame0.gfx")
};

static const u8 sSamusGfx_2c4dca[] = {
    5, 3,
    _INCBIN_U8("data/samus/gfx/2c4dca.gfx")
};

static const u8 sSamusGfx_Top_Left_Up_TurningAround_Frame0[] = {
    3, 2,
    _INCBIN_U8("data/samus/gfx/Top_Left_Up_TurningAround_Frame0.gfx")
};

static const u8 sSamusGfx_Bottom_Up_TurningAround_Frame0[] = {
    5, 3,
    _INCBIN_U8("data/samus/gfx/Bottom_Up_TurningAround_Frame0.gfx")
};

static const u8 sSamusGfx_Top_Left_Up_TurningAround_Frame1[] = {
    3, 2,
    _INCBIN_U8("data/samus/gfx/Top_Left_Up_TurningAround_Frame1.gfx")
};

static const u8 sSamusGfx_Top_Right_Up_UnusedCrouching_Frame0[] = {
    3, 2,
    _INCBIN_U8("data/samus/gfx/Top_Right_Up_UnusedCrouching_Frame0.gfx")
};

static const u8 sSamusGfx_Top_Left_DiagonalUp_UnusedCrouching_Frame0[] = {
    3, 3,
    _INCBIN_U8("data/samus/gfx/Top_Left_DiagonalUp_UnusedCrouching_Frame0.gfx")
};

static const u8 sSamusGfx_2c5276[] = {
    5, 3,
    _INCBIN_U8("data/samus/gfx/2c5276.gfx")
};

static const u8 sSamusGfx_Top_Left_DiagonalUp_TurningAround_Frame0[] = {
    3, 3,
    _INCBIN_U8("data/samus/gfx/Top_Left_DiagonalUp_TurningAround_Frame0.gfx")
};

static const u8 sSamusGfx_Bottom_DiagonalUp_TurningAround_Frame0[] = {
    5, 3,
    _INCBIN_U8("data/samus/gfx/Bottom_DiagonalUp_TurningAround_Frame0.gfx")
};

static const u8 sSamusGfx_Top_Left_DiagonalUp_TurningAround_Frame1[] = {
    3, 2,
    _INCBIN_U8("data/samus/gfx/Top_Left_DiagonalUp_TurningAround_Frame1.gfx")
};

static const u8 sSamusGfx_Top_Right_DiagonalUp_UnusedCrouching_Frame0[] = {
    3, 3,
    _INCBIN_U8("data/samus/gfx/Top_Right_DiagonalUp_UnusedCrouching_Frame0.gfx")
};

static const u8 sSamusGfx_Top_Left_UnusedCrouching_Frame0[] = {
    5, 2,
    _INCBIN_U8("data/samus/gfx/Top_Left_UnusedCrouching_Frame0.gfx")
};

static const u8 sSamusGfx_2c5782[] = {
    5, 3,
    _INCBIN_U8("data/samus/gfx/2c5782.gfx")
};

static const u8 sSamusGfx_Top_Left_TurningAround_Frame0[] = {
    5, 3,
    _INCBIN_U8("data/samus/gfx/Top_Left_TurningAround_Frame0.gfx")
};

static const u8 sSamusGfx_Top_Left_TurningAround_Frame1[] = {
    5, 2,
    _INCBIN_U8("data/samus/gfx/Top_Left_TurningAround_Frame1.gfx")
};

static const u8 sSamusGfx_2c5a68[] = {
    5, 2,
    _INCBIN_U8("data/samus/gfx/2c5a68.gfx")
};

static const u8 sSamusGfx_Top_Left_DiagonalDown_UnusedCrouching_Frame0[] = {
    4, 4,
    _INCBIN_U8("data/samus/gfx/Top_Left_DiagonalDown_UnusedCrouching_Frame0.gfx")
};

static const u8 sSamusGfx_2c5c4c[] = {
    5, 3,
    _INCBIN_U8("data/samus/gfx/2c5c4c.gfx")
};

static const u8 sSamusGfx_Top_Left_DiagonalDown_TurningAround_Frame0[] = {
    5, 3,
    _INCBIN_U8("data/samus/gfx/Top_Left_DiagonalDown_TurningAround_Frame0.gfx")
};

static const u8 sSamusGfx_Top_Left_DiagonalDown_TurningAround_Frame1[] = {
    5, 3,
    _INCBIN_U8("data/samus/gfx/Top_Left_DiagonalDown_TurningAround_Frame1.gfx")
};

static const u8 sSamusGfx_2c5f52[] = {
    5, 2,
    _INCBIN_U8("data/samus/gfx/2c5f52.gfx")
};

static const u8 sSamusGfx_Bottom_Up_UnusedCrouching_Frame0[] = {
    3, 3,
    _INCBIN_U8("data/samus/gfx/Bottom_Up_UnusedCrouching_Frame0.gfx")
};

static const u8 sSamusGfx_Bottom_Up_TurningAroundAndCrouching_Frame0[] = {
    3, 3,
    _INCBIN_U8("data/samus/gfx/Bottom_Up_TurningAroundAndCrouching_Frame0.gfx")
};

static const u8 sSamusGfx_Bottom_DiagonalUp_UnusedCrouching_Frame0[] = {
    3, 3,
    _INCBIN_U8("data/samus/gfx/Bottom_DiagonalUp_UnusedCrouching_Frame0.gfx")
};

static const u8 sSamusGfx_Bottom_UnusedCrouching_Frame0[] = {
    3, 3,
    _INCBIN_U8("data/samus/gfx/Bottom_UnusedCrouching_Frame0.gfx")
};

static const u8 sSamusGfx_Top_Right_UnusedCrouching_Frame0[] = {
    4, 2,
    _INCBIN_U8("data/samus/gfx/Top_Right_UnusedCrouching_Frame0.gfx")
};

static const u8 sSamusGfx_Bottom_DiagonalDown_UnusedCrouching_Frame0[] = {
    3, 3,
    _INCBIN_U8("data/samus/gfx/Bottom_DiagonalDown_UnusedCrouching_Frame0.gfx")
};

static const u8 sSamusGfx_Top_Right_DiagonalDown_UnusedCrouching_Frame0[] = {
    3, 2,
    _INCBIN_U8("data/samus/gfx/Top_Right_DiagonalDown_UnusedCrouching_Frame0.gfx")
};

static const u8 sSamusGfx_Bottom_Up_TurningAroundMidAir_Frame0[] = {
    4, 2,
    _INCBIN_U8("data/samus/gfx/Bottom_Up_TurningAroundMidAir_Frame0.gfx")
};

static const u8 sSamusGfx_Top_Left_DiagonalDown_TurningAroundMidAir_Frame0[] = {
    6, 3,
    _INCBIN_U8("data/samus/gfx/Top_Left_DiagonalDown_TurningAroundMidAir_Frame0.gfx")
};

static const u8 sSamusGfx_2c6746[] = {
    5, 4,
    _INCBIN_U8("data/samus/gfx/2c6746.gfx")
};

static const u8 sSamusGfx_Top_Left_Unmorphing_Frame2[] = {
    5, 3,
    _INCBIN_U8("data/samus/gfx/Top_Left_Unmorphing_Frame2.gfx")
};

static const u8 sSamusGfx_Top_Morphing_Frame0[] = {
    5, 3,
    _INCBIN_U8("data/samus/gfx/Top_Morphing_Frame0.gfx")
};

static const u8 sSamusGfx_Top_Morphing_Frame1[] = {
    2, 2,
    _INCBIN_U8("data/samus/gfx/Top_Morphing_Frame1.gfx")
};

static const u8 sSamusGfx_Top_MorphBall_Frame0[] = {
    3, 2,
    _INCBIN_U8("data/samus/gfx/Top_MorphBall_Frame0.gfx")
};

static const u8 sSamusGfx_Top_MorphBall_Frame1[] = {
    3, 2,
    _INCBIN_U8("data/samus/gfx/Top_MorphBall_Frame1.gfx")
};

static const u8 sSamusGfx_Top_MorphBall_Frame2[] = {
    3, 2,
    _INCBIN_U8("data/samus/gfx/Top_MorphBall_Frame2.gfx")
};

static const u8 sSamusGfx_Top_FacingForeground_Frame0[] = {
    9, 6,
    _INCBIN_U8("data/samus/gfx/Top_FacingForeground_Frame0.gfx")
};

static const u8 sSamusGfx_Top_FacingForeground_Frame1[] = {
    9, 6,
    _INCBIN_U8("data/samus/gfx/Top_FacingForeground_Frame1.gfx")
};

static const u8 sSamusGfx_Top_FacingForeground_Frame2[] = {
    9, 6,
    _INCBIN_U8("data/samus/gfx/Top_FacingForeground_Frame2.gfx")
};

static const u8 sSamusGfx_Top_Left_OnNavigationPad_Frame0[] = {
    4, 2,
    _INCBIN_U8("data/samus/gfx/Top_Left_OnNavigationPad_Frame0.gfx")
};

static const u8 sSamusGfx_Bottom_OnNavigationPad_Frame0[] = {
    2, 2,
    _INCBIN_U8("data/samus/gfx/Bottom_OnNavigationPad_Frame0.gfx")
};

static const u8 sSamusGfx_Top_Left_OnNavigationPad_Frame1[] = {
    6, 3,
    _INCBIN_U8("data/samus/gfx/Top_Left_OnNavigationPad_Frame1.gfx")
};

static const u8 sSamusGfx_Bottom_OnNavigationPad_Frame1[] = {
    3, 3,
    _INCBIN_U8("data/samus/gfx/Bottom_OnNavigationPad_Frame1.gfx")
};

static const u8 sSamusGfx_Top_Right_OnNavigationPad_Frame0[] = {
    6, 4,
    _INCBIN_U8("data/samus/gfx/Top_Right_OnNavigationPad_Frame0.gfx")
};

static const u8 sSamusGfx_Top_Left_OnNavigationPad_Frame2[] = {
    6, 3,
    _INCBIN_U8("data/samus/gfx/Top_Left_OnNavigationPad_Frame2.gfx")
};

static const u8 sSamusGfx_Top_Left_OnNavigationPad_Frame3[] = {
    6, 3,
    _INCBIN_U8("data/samus/gfx/Top_Left_OnNavigationPad_Frame3.gfx")
};

static const u8 sSamusGfx_Top_Left_OnNavigationPad_Frame6[] = {
    7, 4,
    _INCBIN_U8("data/samus/gfx/Top_Left_OnNavigationPad_Frame6.gfx")
};

static const u8 sSamusGfx_Top_Left_OnNavigationPad_Frame7[] = {
    8, 4,
    _INCBIN_U8("data/samus/gfx/Top_Left_OnNavigationPad_Frame7.gfx")
};

static const u8 sSamusGfx_Top_Left_OnNavigationPad_Frame14[] = {
    6, 3,
    _INCBIN_U8("data/samus/gfx/Top_Left_OnNavigationPad_Frame14.gfx")
};

static const u8 sSamusGfx_Top_Left_OnNavigationPad_Frame12[] = {
    6, 3,
    _INCBIN_U8("data/samus/gfx/Top_Left_OnNavigationPad_Frame12.gfx")
};

static const u8 sSamusGfx_Top_Left_UsingAnElevator_Frame0[] = {
    4, 2,
    _INCBIN_U8("data/samus/gfx/Top_Left_UsingAnElevator_Frame0.gfx")
};

static const u8 sSamusGfx_Bottom_UsingAnElevator_Frame0[] = {
    2, 2,
    _INCBIN_U8("data/samus/gfx/Bottom_UsingAnElevator_Frame0.gfx")
};

static const u8 sSamusGfx_Top_UsingAnElevator_Frame2[] = {
    6, 3,
    _INCBIN_U8("data/samus/gfx/Top_UsingAnElevator_Frame2.gfx")
};

static const u8 sSamusGfx_Bottom_UsingAnElevator_Frame2[] = {
    3, 3,
    _INCBIN_U8("data/samus/gfx/Bottom_UsingAnElevator_Frame2.gfx")
};

static const u8 sSamusGfx_2c8178[] = {
    6, 3,
    _INCBIN_U8("data/samus/gfx/2c8178.gfx")
};

static const u8 sSamusGfx_2c829a[] = {
    3, 3,
    _INCBIN_U8("data/samus/gfx/2c829a.gfx")
};

static const u8 sSamusGfx_Top_Right_UsingAnElevator_Frame0[] = {
    5, 3,
    _INCBIN_U8("data/samus/gfx/Top_Right_UsingAnElevator_Frame0.gfx")
};

static const u8 sSamusGfx_Top_DownloadingAbility_Frame0[] = {
    6, 3,
    _INCBIN_U8("data/samus/gfx/Top_DownloadingAbility_Frame0.gfx")
};

static const u8 sSamusGfx_Bottom_DownloadingAbility_Frame0[] = {
    3, 3,
    _INCBIN_U8("data/samus/gfx/Bottom_DownloadingAbility_Frame0.gfx")
};

static const u8 sSamusGfx_Top_DownloadingAbility_Frame2[] = {
    6, 3,
    _INCBIN_U8("data/samus/gfx/Top_DownloadingAbility_Frame2.gfx")
};

static const u8 sSamusGfx_Bottom_DownloadingAbility_Frame2[] = {
    3, 3,
    _INCBIN_U8("data/samus/gfx/Bottom_DownloadingAbility_Frame2.gfx")
};

static const u8 sSamusGfx_Top_DownloadingAbility_Frame4[] = {
    6, 3,
    _INCBIN_U8("data/samus/gfx/Top_DownloadingAbility_Frame4.gfx")
};

static const u8 sSamusGfx_Bottom_DownloadingAbility_Frame4[] = {
    3, 3,
    _INCBIN_U8("data/samus/gfx/Bottom_DownloadingAbility_Frame4.gfx")
};

static const u8 sSamusGfx_Top_DownloadingAbility_Frame6[] = {
    6, 3,
    _INCBIN_U8("data/samus/gfx/Top_DownloadingAbility_Frame6.gfx")
};

static const u8 sSamusGfx_Bottom_DownloadingAbility_Frame6[] = {
    3, 3,
    _INCBIN_U8("data/samus/gfx/Bottom_DownloadingAbility_Frame6.gfx")
};

static const u8 sSamusGfx_Top_DownloadingAbility_Frame3[] = {
    6, 3,
    _INCBIN_U8("data/samus/gfx/Top_DownloadingAbility_Frame3.gfx")
};

static const u8 sSamusGfx_Bottom_DownloadingAbility_Frame3[] = {
    3, 3,
    _INCBIN_U8("data/samus/gfx/Bottom_DownloadingAbility_Frame3.gfx")
};

static const u8 sSamusGfx_Top_DownloadingAbility_Frame5[] = {
    6, 3,
    _INCBIN_U8("data/samus/gfx/Top_DownloadingAbility_Frame5.gfx")
};

static const u8 sSamusGfx_Bottom_DownloadingAbility_Frame5[] = {
    3, 3,
    _INCBIN_U8("data/samus/gfx/Bottom_DownloadingAbility_Frame5.gfx")
};

static const u8 sSamusGfx_Top_DownloadingAbility_Frame7[] = {
    6, 3,
    _INCBIN_U8("data/samus/gfx/Top_DownloadingAbility_Frame7.gfx")
};

static const u8 sSamusGfx_Bottom_DownloadingAbility_Frame7[] = {
    3, 3,
    _INCBIN_U8("data/samus/gfx/Bottom_DownloadingAbility_Frame7.gfx")
};

static const u8 sSamusGfx_Top_DownloadingAbility_Frame9[] = {
    6, 3,
    _INCBIN_U8("data/samus/gfx/Top_DownloadingAbility_Frame9.gfx")
};

static const u8 sSamusGfx_Bottom_DownloadingAbility_Frame9[] = {
    3, 3,
    _INCBIN_U8("data/samus/gfx/Bottom_DownloadingAbility_Frame9.gfx")
};

static const u8 sSamusGfx_Top_Left_BeingRecharged_Frame0[] = {
    5, 2,
    _INCBIN_U8("data/samus/gfx/Top_Left_BeingRecharged_Frame0.gfx")
};

static const u8 sSamusGfx_Bottom_BeingRecharged_Frame0[] = {
    3, 3,
    _INCBIN_U8("data/samus/gfx/Bottom_BeingRecharged_Frame0.gfx")
};

static const u8 sSamusGfx_Top_Left_BeingRecharged_Frame2[] = {
    5, 2,
    _INCBIN_U8("data/samus/gfx/Top_Left_BeingRecharged_Frame2.gfx")
};

static const u8 sSamusGfx_Bottom_BeingRecharged_Frame2[] = {
    3, 3,
    _INCBIN_U8("data/samus/gfx/Bottom_BeingRecharged_Frame2.gfx")
};

static const u8 sSamusGfx_Top_Left_BeingRecharged_Frame4[] = {
    5, 2,
    _INCBIN_U8("data/samus/gfx/Top_Left_BeingRecharged_Frame4.gfx")
};

static const u8 sSamusGfx_Bottom_BeingRecharged_Frame4[] = {
    3, 3,
    _INCBIN_U8("data/samus/gfx/Bottom_BeingRecharged_Frame4.gfx")
};

static const u8 sSamusGfx_Top_Left_BeingRecharged_Frame6[] = {
    5, 2,
    _INCBIN_U8("data/samus/gfx/Top_Left_BeingRecharged_Frame6.gfx")
};

static const u8 sSamusGfx_Bottom_BeingRecharged_Frame6[] = {
    3, 3,
    _INCBIN_U8("data/samus/gfx/Bottom_BeingRecharged_Frame6.gfx")
};

static const u8 sSamusGfx_Top_Left_BeingRecharged_Frame1[] = {
    5, 2,
    _INCBIN_U8("data/samus/gfx/Top_Left_BeingRecharged_Frame1.gfx")
};

static const u8 sSamusGfx_Bottom_BeingRecharged_Frame1[] = {
    3, 3,
    _INCBIN_U8("data/samus/gfx/Bottom_BeingRecharged_Frame1.gfx")
};

static const u8 sSamusGfx_Top_Right_BeingRecharged_Frame0[] = {
    4, 2,
    _INCBIN_U8("data/samus/gfx/Top_Right_BeingRecharged_Frame0.gfx")
};

static const u8 sSamusGfx_Top_Right_BeingRecharged_Frame2[] = {
    4, 2,
    _INCBIN_U8("data/samus/gfx/Top_Right_BeingRecharged_Frame2.gfx")
};

static const u8 sSamusGfx_Top_Right_BeingRecharged_Frame4[] = {
    4, 2,
    _INCBIN_U8("data/samus/gfx/Top_Right_BeingRecharged_Frame4.gfx")
};

static const u8 sSamusGfx_Top_Right_BeingRecharged_Frame6[] = {
    4, 2,
    _INCBIN_U8("data/samus/gfx/Top_Right_BeingRecharged_Frame6.gfx")
};

static const u8 sSamusGfx_Top_Right_BeingRecharged_Frame1[] = {
    4, 2,
    _INCBIN_U8("data/samus/gfx/Top_Right_BeingRecharged_Frame1.gfx")
};

static const u8 sSamusGfx_Top_Left_UnlockingSecurity_Frame0[] = {
    7, 2,
    _INCBIN_U8("data/samus/gfx/Top_Left_UnlockingSecurity_Frame0.gfx")
};

static const u8 sSamusGfx_Top_Right_UnlockingSecurity_Frame0[] = {
    6, 2,
    _INCBIN_U8("data/samus/gfx/Top_Right_UnlockingSecurity_Frame0.gfx")
};

static const u8 sSamusGfx_Top_UnlockingHabitationsDeck_Frame0[] = {
    6, 3,
    _INCBIN_U8("data/samus/gfx/Top_UnlockingHabitationsDeck_Frame0.gfx")
};

static const u8 sSamusGfx_Bottom_UnlockingHabitationsDeck_Frame0[] = {
    3, 3,
    _INCBIN_U8("data/samus/gfx/Bottom_UnlockingHabitationsDeck_Frame0.gfx")
};

static const u8 sSamusGfx_Top_UnlockingHabitationsDeck_Frame1[] = {
    6, 3,
    _INCBIN_U8("data/samus/gfx/Top_UnlockingHabitationsDeck_Frame1.gfx")
};

static const u8 sSamusGfx_Top_UnlockingHabitationsDeck_Frame4[] = {
    6, 3,
    _INCBIN_U8("data/samus/gfx/Top_UnlockingHabitationsDeck_Frame4.gfx")
};

static const u8 sSamusGfx_Bottom_UnlockingHabitationsDeck_Frame4[] = {
    3, 2,
    _INCBIN_U8("data/samus/gfx/Bottom_UnlockingHabitationsDeck_Frame4.gfx")
};

static const u16 sSamusOam_2ca66a[] = {
    5,
    OAM_ENTRY(-9, -38, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-9, -46, OAM_DIMS_8x8, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-10, -16, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(6, -16, OAM_DIMS_8x16, OAM_NO_FLIP, 0x16, 0, 0),
    OAM_ENTRY(-10, -24, OAM_DIMS_16x8, OAM_NO_FLIP, 0x17, 0, 0)
};

static const u16 sSamusOam_Left_Up_TurningAround_Frame0[] = {
    5,
    OAM_ENTRY(-8, -38, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-8, -46, OAM_DIMS_8x8, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-6, -16, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-14, -16, OAM_DIMS_8x16, OAM_NO_FLIP, 0x16, 0, 0),
    OAM_ENTRY(-6, -24, OAM_DIMS_16x8, OAM_NO_FLIP, 0x17, 0, 0)
};

static const u16 sSamusOam_Left_Up_TurningAround_Frame1[] = {
    5,
    OAM_ENTRY(-7, -38, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(0, -46, OAM_DIMS_8x8, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-10, -16, OAM_DIMS_16x16, OAM_X_FLIP, 0x14, 0, 0),
    OAM_ENTRY(6, -16, OAM_DIMS_8x16, OAM_X_FLIP, 0x16, 0, 0),
    OAM_ENTRY(-10, -24, OAM_DIMS_16x8, OAM_X_FLIP, 0x17, 0, 0)
};

static const u16 sSamusOam_2ca6ca[] = {
    5,
    OAM_ENTRY(-7, -38, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(1, -46, OAM_DIMS_8x8, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-6, -16, OAM_DIMS_16x16, OAM_X_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-14, -16, OAM_DIMS_8x16, OAM_X_FLIP, 0x16, 0, 0),
    OAM_ENTRY(-6, -24, OAM_DIMS_16x8, OAM_X_FLIP, 0x17, 0, 0)
};

static const u16 sSamusOam_2ca6ea[] = {
    5,
    OAM_ENTRY(-11, -38, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-19, -38, OAM_DIMS_8x16, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-10, -16, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-10, -24, OAM_DIMS_16x8, OAM_NO_FLIP, 0x17, 0, 0),
    OAM_ENTRY(6, -16, OAM_DIMS_8x16, OAM_NO_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_Left_DiagonalUp_TurningAround_Frame0[] = {
    5,
    OAM_ENTRY(-8, -38, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-16, -38, OAM_DIMS_8x16, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-6, -16, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-6, -24, OAM_DIMS_16x8, OAM_NO_FLIP, 0x17, 0, 0),
    OAM_ENTRY(-14, -16, OAM_DIMS_8x16, OAM_NO_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_Left_DiagonalUp_TurningAround_Frame1[] = {
    5,
    OAM_ENTRY(-6, -38, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(10, -38, OAM_DIMS_8x8, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-10, -16, OAM_DIMS_16x16, OAM_X_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-10, -24, OAM_DIMS_16x8, OAM_X_FLIP, 0x17, 0, 0),
    OAM_ENTRY(6, -16, OAM_DIMS_8x16, OAM_X_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_2ca74a[] = {
    5,
    OAM_ENTRY(-5, -38, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(11, -38, OAM_DIMS_8x16, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-6, -16, OAM_DIMS_16x16, OAM_X_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-6, -24, OAM_DIMS_16x8, OAM_X_FLIP, 0x17, 0, 0),
    OAM_ENTRY(-14, -16, OAM_DIMS_8x16, OAM_X_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_2ca76a[] = {
    6,
    OAM_ENTRY(-9, -33, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-9, -41, OAM_DIMS_16x8, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-17, -25, OAM_DIMS_8x8, OAM_NO_FLIP, 0x4, 0, 0),
    OAM_ENTRY(-6, -16, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-14, -16, OAM_DIMS_8x16, OAM_NO_FLIP, 0x16, 0, 0),
    OAM_ENTRY(-6, -24, OAM_DIMS_16x8, OAM_NO_FLIP, 0x17, 0, 0)
};

static const u16 sSamusOam_Left_TurningAround_Frame0[] = {
    6,
    OAM_ENTRY(-8, -32, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-8, -40, OAM_DIMS_16x8, OAM_NO_FLIP, 0x3, 0, 0),
    OAM_ENTRY(-16, -32, OAM_DIMS_8x16, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-6, -16, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-6, -24, OAM_DIMS_16x8, OAM_NO_FLIP, 0x17, 0, 0),
    OAM_ENTRY(-14, -16, OAM_DIMS_8x16, OAM_NO_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_Left_TurningAround_Frame1[] = {
    6,
    OAM_ENTRY(-8, -33, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-8, -41, OAM_DIMS_16x8, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(8, -32, OAM_DIMS_8x8, OAM_NO_FLIP, 0x4, 0, 0),
    OAM_ENTRY(-10, -16, OAM_DIMS_16x16, OAM_X_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-10, -24, OAM_DIMS_16x8, OAM_X_FLIP, 0x17, 0, 0),
    OAM_ENTRY(6, -16, OAM_DIMS_8x16, OAM_X_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_2ca7dc[] = {
    6,
    OAM_ENTRY(-7, -33, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-7, -41, OAM_DIMS_16x8, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(9, -25, OAM_DIMS_8x8, OAM_NO_FLIP, 0x4, 0, 0),
    OAM_ENTRY(-10, -16, OAM_DIMS_16x16, OAM_X_FLIP, 0x14, 0, 0),
    OAM_ENTRY(6, -16, OAM_DIMS_8x16, OAM_X_FLIP, 0x16, 0, 0),
    OAM_ENTRY(-10, -24, OAM_DIMS_16x8, OAM_X_FLIP, 0x17, 0, 0)
};

static const u16 sSamusOam_2ca802[] = {
    5,
    OAM_ENTRY(-10, -35, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-18, -27, OAM_DIMS_16x16, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-6, -16, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-14, -16, OAM_DIMS_8x16, OAM_NO_FLIP, 0x16, 0, 0),
    OAM_ENTRY(-6, -24, OAM_DIMS_16x8, OAM_NO_FLIP, 0x17, 0, 0)
};

static const u16 sSamusOam_Left_DiagonalDown_TurningAround_Frame0[] = {
    6,
    OAM_ENTRY(-13, -35, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(3, -35, OAM_DIMS_8x16, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-13, -19, OAM_DIMS_16x8, OAM_NO_FLIP, 0x3, 0, 0),
    OAM_ENTRY(-6, -16, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-6, -24, OAM_DIMS_16x8, OAM_NO_FLIP, 0x17, 0, 0),
    OAM_ENTRY(-14, -16, OAM_DIMS_8x16, OAM_NO_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_Left_DiagonalDown_TurningAround_Frame1[] = {
    6,
    OAM_ENTRY(-8, -35, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(8, -35, OAM_DIMS_8x16, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-8, -19, OAM_DIMS_16x8, OAM_NO_FLIP, 0x3, 0, 0),
    OAM_ENTRY(-10, -16, OAM_DIMS_16x16, OAM_X_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-10, -24, OAM_DIMS_16x8, OAM_X_FLIP, 0x17, 0, 0),
    OAM_ENTRY(6, -16, OAM_DIMS_8x16, OAM_X_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_2ca86e[] = {
    6,
    OAM_ENTRY(-5, -35, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(3, -19, OAM_DIMS_16x8, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(11, -27, OAM_DIMS_8x8, OAM_NO_FLIP, 0x4, 0, 0),
    OAM_ENTRY(-10, -16, OAM_DIMS_16x16, OAM_X_FLIP, 0x14, 0, 0),
    OAM_ENTRY(6, -16, OAM_DIMS_8x16, OAM_X_FLIP, 0x16, 0, 0),
    OAM_ENTRY(-10, -24, OAM_DIMS_16x8, OAM_X_FLIP, 0x17, 0, 0)
};

static const u16 sSamusOam_Left_Up_TurningAroundAndCrouching_Frame0[] = {
    4,
    OAM_ENTRY(-8, -30, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-8, -38, OAM_DIMS_8x8, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-7, -16, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-15, -16, OAM_DIMS_8x16, OAM_NO_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_Left_Up_TurningAroundAndCrouching_Frame1[] = {
    4,
    OAM_ENTRY(-7, -30, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(0, -38, OAM_DIMS_8x8, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-9, -16, OAM_DIMS_16x16, OAM_X_FLIP, 0x14, 0, 0),
    OAM_ENTRY(7, -16, OAM_DIMS_8x16, OAM_X_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_Right_Up_UnusedCrouching_Frame0[] = {
    4,
    OAM_ENTRY(-8, -30, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(0, -38, OAM_DIMS_8x8, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-9, -16, OAM_DIMS_16x16, OAM_X_FLIP, 0x14, 0, 0),
    OAM_ENTRY(7, -16, OAM_DIMS_8x16, OAM_X_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_Left_DiagonalUp_UnusedCrouching_Frame0[] = {
    4,
    OAM_ENTRY(-9, -30, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-17, -30, OAM_DIMS_8x16, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-7, -16, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-15, -16, OAM_DIMS_8x16, OAM_NO_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_Left_DiagonalUp_TurningAroundAndCrouching_Frame0[] = {
    4,
    OAM_ENTRY(-7, -30, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-15, -30, OAM_DIMS_8x16, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-7, -16, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-15, -16, OAM_DIMS_8x16, OAM_NO_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_Left_DiagonalUp_TurningAroundAndCrouching_Frame1[] = {
    4,
    OAM_ENTRY(-7, -30, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(9, -30, OAM_DIMS_8x8, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-9, -16, OAM_DIMS_16x16, OAM_X_FLIP, 0x14, 0, 0),
    OAM_ENTRY(7, -16, OAM_DIMS_8x16, OAM_X_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_Right_DiagonalUp_UnusedCrouching_Frame0[] = {
    4,
    OAM_ENTRY(-7, -30, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(9, -30, OAM_DIMS_8x16, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-9, -16, OAM_DIMS_16x16, OAM_X_FLIP, 0x14, 0, 0),
    OAM_ENTRY(7, -16, OAM_DIMS_8x16, OAM_X_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_Left_UnusedCrouching_Frame0[] = {
    5,
    OAM_ENTRY(-9, -25, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-9, -33, OAM_DIMS_16x8, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-17, -17, OAM_DIMS_8x8, OAM_NO_FLIP, 0x4, 0, 0),
    OAM_ENTRY(-7, -16, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-15, -16, OAM_DIMS_8x16, OAM_NO_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_Left_TurningAroundAndCrouching_Frame0[] = {
    5,
    OAM_ENTRY(-9, -24, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-9, -32, OAM_DIMS_16x8, OAM_NO_FLIP, 0x3, 0, 0),
    OAM_ENTRY(-17, -24, OAM_DIMS_8x16, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-7, -16, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-15, -16, OAM_DIMS_8x16, OAM_NO_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_Left_TurningAroundAndCrouching_Frame1[] = {
    5,
    OAM_ENTRY(-8, -25, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-8, -33, OAM_DIMS_16x8, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(8, -24, OAM_DIMS_8x8, OAM_NO_FLIP, 0x4, 0, 0),
    OAM_ENTRY(-9, -16, OAM_DIMS_16x16, OAM_X_FLIP, 0x14, 0, 0),
    OAM_ENTRY(7, -16, OAM_DIMS_8x16, OAM_X_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_Right_UnusedCrouching_Frame0[] = {
    4,
    OAM_ENTRY(-7, -25, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-7, -33, OAM_DIMS_16x8, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-9, -16, OAM_DIMS_16x16, OAM_X_FLIP, 0x14, 0, 0),
    OAM_ENTRY(7, -16, OAM_DIMS_8x16, OAM_X_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_Left_DiagonalDown_UnusedCrouching_Frame0[] = {
    4,
    OAM_ENTRY(-10, -25, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-18, -17, OAM_DIMS_16x16, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-7, -16, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-15, -16, OAM_DIMS_8x16, OAM_NO_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_Left_DiagonalDown_TurningAroundAndCrouching_Frame0[] = {
    5,
    OAM_ENTRY(-14, -25, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(2, -25, OAM_DIMS_8x16, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-14, -9, OAM_DIMS_16x8, OAM_NO_FLIP, 0x3, 0, 0),
    OAM_ENTRY(-7, -16, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-15, -16, OAM_DIMS_8x16, OAM_NO_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_Left_DiagonalDown_TurningAroundAndCrouching_Frame1[] = {
    5,
    OAM_ENTRY(-8, -25, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(8, -25, OAM_DIMS_8x16, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-8, -9, OAM_DIMS_16x8, OAM_NO_FLIP, 0x3, 0, 0),
    OAM_ENTRY(-9, -16, OAM_DIMS_16x16, OAM_X_FLIP, 0x14, 0, 0),
    OAM_ENTRY(7, -16, OAM_DIMS_8x16, OAM_X_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_Right_DiagonalDown_UnusedCrouching_Frame0[] = {
    4,
    OAM_ENTRY(-5, -25, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(3, -9, OAM_DIMS_8x8, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-9, -16, OAM_DIMS_16x16, OAM_X_FLIP, 0x14, 0, 0),
    OAM_ENTRY(7, -16, OAM_DIMS_8x16, OAM_X_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_Left_Up_TurningAroundMidAir_Frame0[] = {
    4,
    OAM_ENTRY(-8, -34, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-8, -42, OAM_DIMS_8x8, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-8, -21, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-8, -5, OAM_DIMS_16x8, OAM_NO_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_Left_Up_TurningAroundMidAir_Frame1[] = {
    4,
    OAM_ENTRY(-7, -34, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(0, -42, OAM_DIMS_8x8, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-8, -21, OAM_DIMS_16x16, OAM_X_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-8, -5, OAM_DIMS_16x8, OAM_X_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_Left_DiagonalUp_TurningAroundMidAir_Frame0[] = {
    4,
    OAM_ENTRY(-8, -34, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-16, -34, OAM_DIMS_8x16, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-8, -21, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-8, -5, OAM_DIMS_16x8, OAM_NO_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_Left_DiagonalUp_TurningAroundMidAir_Frame1[] = {
    4,
    OAM_ENTRY(-6, -34, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(10, -34, OAM_DIMS_8x8, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-8, -21, OAM_DIMS_16x16, OAM_X_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-8, -5, OAM_DIMS_16x8, OAM_X_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_Left_TurningAroundMidAir_Frame0[] = {
    5,
    OAM_ENTRY(-8, -28, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-8, -36, OAM_DIMS_16x8, OAM_NO_FLIP, 0x3, 0, 0),
    OAM_ENTRY(-16, -28, OAM_DIMS_8x16, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-8, -21, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-8, -5, OAM_DIMS_16x8, OAM_NO_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_Left_TurningAroundMidAir_Frame1[] = {
    5,
    OAM_ENTRY(-8, -29, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-8, -37, OAM_DIMS_16x8, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(8, -28, OAM_DIMS_8x8, OAM_NO_FLIP, 0x4, 0, 0),
    OAM_ENTRY(-8, -21, OAM_DIMS_16x16, OAM_X_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-8, -5, OAM_DIMS_16x8, OAM_X_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_Left_DiagonalDown_TurningAroundMidAir_Frame0[] = {
    6,
    OAM_ENTRY(-13, -31, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(3, -31, OAM_DIMS_8x16, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-13, -15, OAM_DIMS_16x8, OAM_NO_FLIP, 0x3, 0, 0),
    OAM_ENTRY(-8, -21, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-8, -5, OAM_DIMS_16x8, OAM_NO_FLIP, 0x16, 0, 0),
    OAM_ENTRY(-15, -14, OAM_DIMS_8x8, OAM_NO_FLIP, 0x5, 1, 0)
};

static const u16 sSamusOam_Left_DiagonalDown_TurningAroundMidAir_Frame1[] = {
    5,
    OAM_ENTRY(-8, -31, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(8, -31, OAM_DIMS_8x16, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-8, -15, OAM_DIMS_16x8, OAM_NO_FLIP, 0x3, 0, 0),
    OAM_ENTRY(-8, -21, OAM_DIMS_16x16, OAM_X_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-8, -5, OAM_DIMS_16x8, OAM_X_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_2cab26[] = {
    6,
    OAM_ENTRY(-6, -33, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-6, -41, OAM_DIMS_8x8, OAM_NO_FLIP, 0x4, 0, 0),
    OAM_ENTRY(-6, -16, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-14, -16, OAM_DIMS_8x16, OAM_NO_FLIP, 0x16, 0, 0),
    OAM_ENTRY(-6, -24, OAM_DIMS_16x8, OAM_NO_FLIP, 0x17, 0, 0),
    OAM_ENTRY(-15, -28, OAM_DIMS_16x16, OAM_NO_FLIP, 0x2, 0, 0)
};

static const u16 sSamusOam_2cab4c[] = {
    6,
    OAM_ENTRY(-10, -33, OAM_DIMS_16x16, OAM_X_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-2, -41, OAM_DIMS_8x8, OAM_X_FLIP, 0x4, 0, 0),
    OAM_ENTRY(-10, -16, OAM_DIMS_16x16, OAM_X_FLIP, 0x14, 0, 0),
    OAM_ENTRY(6, -16, OAM_DIMS_8x16, OAM_X_FLIP, 0x16, 0, 0),
    OAM_ENTRY(-10, -24, OAM_DIMS_16x8, OAM_X_FLIP, 0x17, 0, 0),
    OAM_ENTRY(-1, -28, OAM_DIMS_16x16, OAM_X_FLIP, 0x2, 0, 0)
};

static const u16 sSamusOam_Left_Unmorphing_Frame2[] = {
    3,
    OAM_ENTRY(-10, -16, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(6, -16, OAM_DIMS_8x16, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-10, -24, OAM_DIMS_16x8, OAM_NO_FLIP, 0x3, 0, 0)
};

static const u16 sSamusOam_Left_Morphing_Frame0[] = {
    3,
    OAM_ENTRY(-10, -16, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-10, -24, OAM_DIMS_16x8, OAM_NO_FLIP, 0x3, 0, 0),
    OAM_ENTRY(6, -16, OAM_DIMS_8x16, OAM_NO_FLIP, 0x2, 0, 0)
};

static const u16 sSamusOam_Left_Morphing_Frame1[] = {
    1,
    OAM_ENTRY(-9, -17, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0)
};

static const u16 sSamusOam_Left_MorphBall_Frame0[] = {
    2,
    OAM_ENTRY(-8, -16, OAM_DIMS_8x8, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-8, -16, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0)
};

static const u16 sSamusOam_Left_MorphBall_Frame1[] = {
    2,
    OAM_ENTRY(-8, -16, OAM_DIMS_8x8, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-8, -17, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0)
};

static const u16 sSamusOam_Left_MorphBall_Frame2[] = {
    2,
    OAM_ENTRY(-8, -17, OAM_DIMS_8x8, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-8, -18, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0)
};

static const u16 sSamusOam_Left_MorphBall_Frame3[] = {
    2,
    OAM_ENTRY(-8, -16, OAM_DIMS_8x8, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-8, -17, OAM_DIMS_16x16, OAM_Y_FLIP, 0x0, 0, 0)
};

static const u16 sSamusOam_Left_MorphBall_Frame4[] = {
    2,
    OAM_ENTRY(-8, -16, OAM_DIMS_8x8, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-8, -16, OAM_DIMS_16x16, OAM_Y_FLIP, 0x0, 0, 0)
};

static const u16 sSamusOam_Left_MorphBall_Frame5[] = {
    2,
    OAM_ENTRY(-8, -16, OAM_DIMS_8x8, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-8, -17, OAM_DIMS_16x16, OAM_XY_FLIP, 0x0, 0, 0)
};

static const u16 sSamusOam_Left_MorphBall_Frame6[] = {
    2,
    OAM_ENTRY(-8, -17, OAM_DIMS_8x8, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-8, -18, OAM_DIMS_16x16, OAM_X_FLIP, 0x0, 0, 0)
};

static const u16 sSamusOam_Left_Morphing_Frame2[] = {
    2,
    OAM_ENTRY(-8, -16, OAM_DIMS_8x8, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-8, -17, OAM_DIMS_16x16, OAM_X_FLIP, 0x0, 0, 0)
};

static const u16 sSamusOam_Right_Unmorphing_Frame2[] = {
    3,
    OAM_ENTRY(-6, -16, OAM_DIMS_16x16, OAM_X_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-14, -16, OAM_DIMS_8x16, OAM_X_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-6, -24, OAM_DIMS_16x8, OAM_X_FLIP, 0x3, 0, 0)
};

static const u16 sSamusOam_Right_Morphing_Frame0[] = {
    3,
    OAM_ENTRY(-6, -16, OAM_DIMS_16x16, OAM_X_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-6, -24, OAM_DIMS_16x8, OAM_X_FLIP, 0x3, 0, 0),
    OAM_ENTRY(-14, -16, OAM_DIMS_8x16, OAM_X_FLIP, 0x2, 0, 0)
};

static const u16 sSamusOam_Right_Morphing_Frame1[] = {
    1,
    OAM_ENTRY(-7, -17, OAM_DIMS_16x16, OAM_X_FLIP, 0x0, 0, 0)
};

static const u16 sSamusOam_FacingForeground_Frame0[] = {
    6,
    OAM_ENTRY(-12, -40, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(4, -40, OAM_DIMS_8x16, OAM_NO_FLIP, 0x4, 0, 0),
    OAM_ENTRY(-12, -8, OAM_DIMS_16x8, OAM_NO_FLIP, 0x6, 0, 0),
    OAM_ENTRY(4, -8, OAM_DIMS_8x8, OAM_NO_FLIP, 0x8, 0, 0),
    OAM_ENTRY(-12, -24, OAM_DIMS_16x16, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(4, -24, OAM_DIMS_8x16, OAM_NO_FLIP, 0x5, 0, 0)
};

static const u16 sSamusOam_Left_OnNavigationPad_Frame0[] = {
    3,
    OAM_ENTRY(-8, -40, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-8, -24, OAM_DIMS_16x8, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-8, -16, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0)
};

static const u16 sSamusOam_Left_OnNavigationPad_Frame1[] = {
    6,
    OAM_ENTRY(-11, -40, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(5, -40, OAM_DIMS_8x16, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-11, -24, OAM_DIMS_16x8, OAM_NO_FLIP, 0x3, 0, 0),
    OAM_ENTRY(5, -24, OAM_DIMS_8x8, OAM_NO_FLIP, 0x5, 0, 0),
    OAM_ENTRY(-11, -16, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(5, -16, OAM_DIMS_8x16, OAM_NO_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_Right_OnNavigationPad_Frame0[] = {
    4,
    OAM_ENTRY(-2, -28, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-7, -40, OAM_DIMS_16x16, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-7, -24, OAM_DIMS_16x8, OAM_NO_FLIP, 0x4, 0, 0),
    OAM_ENTRY(-7, -16, OAM_DIMS_16x16, OAM_X_FLIP, 0x14, 0, 0)
};

static const u16 sSamusOam_Left_OnNavigationPad_Frame2[] = {
    6,
    OAM_ENTRY(-11, -40, OAM_DIMS_8x16, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-11, -24, OAM_DIMS_8x8, OAM_NO_FLIP, 0x5, 0, 0),
    OAM_ENTRY(-3, -40, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-3, -24, OAM_DIMS_16x8, OAM_NO_FLIP, 0x3, 0, 0),
    OAM_ENTRY(-11, -16, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(5, -16, OAM_DIMS_8x16, OAM_NO_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_Left_OnNavigationPad_Frame6[] = {
    6,
    OAM_ENTRY(-19, -40, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-11, -24, OAM_DIMS_8x8, OAM_NO_FLIP, 0x6, 0, 0),
    OAM_ENTRY(-3, -40, OAM_DIMS_16x16, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-3, -24, OAM_DIMS_16x8, OAM_NO_FLIP, 0x4, 0, 0),
    OAM_ENTRY(-11, -16, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(5, -16, OAM_DIMS_8x16, OAM_NO_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_Left_OnNavigationPad_Frame7[] = {
    6,
    OAM_ENTRY(-19, -40, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-19, -24, OAM_DIMS_16x8, OAM_NO_FLIP, 0x4, 0, 0),
    OAM_ENTRY(-3, -40, OAM_DIMS_16x16, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-3, -24, OAM_DIMS_16x8, OAM_NO_FLIP, 0x6, 0, 0),
    OAM_ENTRY(-11, -16, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(5, -16, OAM_DIMS_8x16, OAM_NO_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_Left_OnNavigationPad_Frame12[] = {
    6,
    OAM_ENTRY(-3, -40, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-3, -24, OAM_DIMS_16x8, OAM_NO_FLIP, 0x3, 0, 0),
    OAM_ENTRY(-11, -40, OAM_DIMS_8x16, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-11, -24, OAM_DIMS_8x8, OAM_NO_FLIP, 0x5, 0, 0),
    OAM_ENTRY(-11, -16, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(5, -16, OAM_DIMS_8x16, OAM_NO_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_UsingAnElevator_Frame2[] = {
    6,
    OAM_ENTRY(-11, -16, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(5, -16, OAM_DIMS_8x16, OAM_NO_FLIP, 0x16, 0, 0),
    OAM_ENTRY(-11, -40, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(5, -40, OAM_DIMS_8x16, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-11, -24, OAM_DIMS_16x8, OAM_NO_FLIP, 0x3, 0, 0),
    OAM_ENTRY(5, -24, OAM_DIMS_8x8, OAM_NO_FLIP, 0x5, 0, 0)
};

static const u16 sSamusOam_2cad7a[] = {
    6,
    OAM_ENTRY(-9, -40, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(7, -40, OAM_DIMS_8x16, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-10, -16, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(6, -16, OAM_DIMS_8x16, OAM_NO_FLIP, 0x16, 0, 0),
    OAM_ENTRY(-10, -24, OAM_DIMS_16x8, OAM_NO_FLIP, 0x3, 0, 0),
    OAM_ENTRY(6, -24, OAM_DIMS_8x8, OAM_NO_FLIP, 0x5, 0, 0)
};

static const u16 sSamusOam_Right_UsingAnElevator_Frame0[] = {
    4,
    OAM_ENTRY(-9, -29, OAM_DIMS_8x16, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-8, -16, OAM_DIMS_16x16, OAM_X_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-8, -40, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-8, -24, OAM_DIMS_16x8, OAM_NO_FLIP, 0x3, 0, 0)
};

static const u16 sSamusOam_DownloadingAbility_Frame0[] = {
    6,
    OAM_ENTRY(-12, -40, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(4, -40, OAM_DIMS_8x16, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-12, -24, OAM_DIMS_16x8, OAM_NO_FLIP, 0x3, 0, 0),
    OAM_ENTRY(4, -24, OAM_DIMS_8x8, OAM_NO_FLIP, 0x5, 0, 0),
    OAM_ENTRY(-12, -16, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(4, -16, OAM_DIMS_8x16, OAM_NO_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_Left_BeingRecharged_Frame0[] = {
    5,
    OAM_ENTRY(-11, -32, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-11, -40, OAM_DIMS_16x8, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-19, -24, OAM_DIMS_8x8, OAM_NO_FLIP, 0x4, 0, 0),
    OAM_ENTRY(-6, -16, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-14, -16, OAM_DIMS_8x16, OAM_NO_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_Right_BeingRecharged_Frame0[] = {
    4,
    OAM_ENTRY(-10, -16, OAM_DIMS_16x16, OAM_X_FLIP, 0x14, 0, 0),
    OAM_ENTRY(6, -16, OAM_DIMS_8x16, OAM_X_FLIP, 0x16, 0, 0),
    OAM_ENTRY(-5, -40, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-5, -24, OAM_DIMS_16x8, OAM_NO_FLIP, 0x2, 0, 0)
};

static const u16 sSamusOam_Right_BeingRecharged_Frame1[] = {
    4,
    OAM_ENTRY(-5, -40, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-5, -24, OAM_DIMS_16x8, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-10, -16, OAM_DIMS_16x16, OAM_X_FLIP, 0x14, 0, 0),
    OAM_ENTRY(6, -16, OAM_DIMS_8x16, OAM_X_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_Left_UnlockingSecurity_Frame0[] = {
    6,
    OAM_ENTRY(-11, -32, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-11, -40, OAM_DIMS_16x8, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-19, -24, OAM_DIMS_8x8, OAM_NO_FLIP, 0x6, 0, 0),
    OAM_ENTRY(-6, -16, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-14, -16, OAM_DIMS_8x16, OAM_NO_FLIP, 0x16, 0, 0),
    OAM_ENTRY(-19, -24, OAM_DIMS_16x8, OAM_NO_FLIP, 0x4, 0, 0)
};

static const u16 sSamusOam_Right_UnlockingSecurity_Frame0[] = {
    5,
    OAM_ENTRY(-5, -40, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-5, -24, OAM_DIMS_16x8, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-10, -16, OAM_DIMS_16x16, OAM_X_FLIP, 0x14, 0, 0),
    OAM_ENTRY(6, -16, OAM_DIMS_8x16, OAM_X_FLIP, 0x16, 0, 0),
    OAM_ENTRY(3, -24, OAM_DIMS_16x8, OAM_NO_FLIP, 0x4, 0, 0)
};

static const u16 sSamusOam_UnlockingHabitationsDeck_Frame0[] = {
    6,
    OAM_ENTRY(-13, -40, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(3, -38, OAM_DIMS_8x16, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-13, -24, OAM_DIMS_16x8, OAM_NO_FLIP, 0x3, 0, 0),
    OAM_ENTRY(3, -22, OAM_DIMS_8x8, OAM_NO_FLIP, 0x5, 0, 0),
    OAM_ENTRY(-11, -16, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(5, -16, OAM_DIMS_8x16, OAM_NO_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_UnlockingHabitationsDeck_Frame4[] = {
    6,
    OAM_ENTRY(-9, -40, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(7, -39, OAM_DIMS_8x16, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-9, -24, OAM_DIMS_16x8, OAM_NO_FLIP, 0x3, 0, 0),
    OAM_ENTRY(7, -23, OAM_DIMS_8x8, OAM_NO_FLIP, 0x5, 0, 0),
    OAM_ENTRY(-9, -16, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(7, -8, OAM_DIMS_8x8, OAM_NO_FLIP, 0x16, 0, 0)
};

const struct SamusAnimationData sSamusAnim_Left_Up_TurningAround[3] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_Left_Up_TurningAround_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_Up_TurningAround_Frame0,
        .pOam = sSamusOam_Left_Up_TurningAround_Frame0,
        .timer = 2
    },
    [1] = {
        .pTopGfx = sSamusGfx_Top_Left_Up_TurningAround_Frame1,
        .pBottomGfx = sSamusGfx_Bottom_Up_TurningAround_Frame0,
        .pOam = sSamusOam_Left_Up_TurningAround_Frame1,
        .timer = 2
    },
    [2] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Right_Up_TurningAround[3] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_Left_Up_TurningAround_Frame1,
        .pBottomGfx = sSamusGfx_Bottom_Up_TurningAround_Frame0,
        .pOam = sSamusOam_Left_Up_TurningAround_Frame1,
        .timer = 2
    },
    [1] = {
        .pTopGfx = sSamusGfx_Top_Left_Up_TurningAround_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_Up_TurningAround_Frame0,
        .pOam = sSamusOam_Left_Up_TurningAround_Frame0,
        .timer = 2
    },
    [2] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Left_DiagonalUp_TurningAround[3] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_Left_DiagonalUp_TurningAround_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_DiagonalUp_TurningAround_Frame0,
        .pOam = sSamusOam_Left_DiagonalUp_TurningAround_Frame0,
        .timer = 2
    },
    [1] = {
        .pTopGfx = sSamusGfx_Top_Left_DiagonalUp_TurningAround_Frame1,
        .pBottomGfx = sSamusGfx_Bottom_DiagonalUp_TurningAround_Frame0,
        .pOam = sSamusOam_Left_DiagonalUp_TurningAround_Frame1,
        .timer = 2
    },
    [2] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Right_DiagonalUp_TurningAround[3] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_Left_DiagonalUp_TurningAround_Frame1,
        .pBottomGfx = sSamusGfx_Bottom_DiagonalUp_TurningAround_Frame0,
        .pOam = sSamusOam_Left_DiagonalUp_TurningAround_Frame1,
        .timer = 2
    },
    [1] = {
        .pTopGfx = sSamusGfx_Top_Left_DiagonalUp_TurningAround_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_DiagonalUp_TurningAround_Frame0,
        .pOam = sSamusOam_Left_DiagonalUp_TurningAround_Frame0,
        .timer = 2
    },
    [2] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Left_TurningAround[3] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_Left_TurningAround_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_DiagonalUp_TurningAround_Frame0,
        .pOam = sSamusOam_Left_TurningAround_Frame0,
        .timer = 2
    },
    [1] = {
        .pTopGfx = sSamusGfx_Top_Left_TurningAround_Frame1,
        .pBottomGfx = sSamusGfx_Bottom_DiagonalUp_TurningAround_Frame0,
        .pOam = sSamusOam_Left_TurningAround_Frame1,
        .timer = 2
    },
    [2] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Right_TurningAround[3] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_Left_TurningAround_Frame1,
        .pBottomGfx = sSamusGfx_Bottom_DiagonalUp_TurningAround_Frame0,
        .pOam = sSamusOam_Left_TurningAround_Frame1,
        .timer = 2
    },
    [1] = {
        .pTopGfx = sSamusGfx_Top_Left_TurningAround_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_DiagonalUp_TurningAround_Frame0,
        .pOam = sSamusOam_Left_TurningAround_Frame0,
        .timer = 2
    },
    [2] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Left_DiagonalDown_TurningAround[3] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_Left_DiagonalDown_TurningAround_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_DiagonalUp_TurningAround_Frame0,
        .pOam = sSamusOam_Left_DiagonalDown_TurningAround_Frame0,
        .timer = 2
    },
    [1] = {
        .pTopGfx = sSamusGfx_Top_Left_DiagonalDown_TurningAround_Frame1,
        .pBottomGfx = sSamusGfx_Bottom_DiagonalUp_TurningAround_Frame0,
        .pOam = sSamusOam_Left_DiagonalDown_TurningAround_Frame1,
        .timer = 2
    },
    [2] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Right_DiagonalDown_TurningAround[3] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_Left_DiagonalDown_TurningAround_Frame1,
        .pBottomGfx = sSamusGfx_Bottom_DiagonalUp_TurningAround_Frame0,
        .pOam = sSamusOam_Left_DiagonalDown_TurningAround_Frame1,
        .timer = 2
    },
    [1] = {
        .pTopGfx = sSamusGfx_Top_Left_DiagonalDown_TurningAround_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_DiagonalUp_TurningAround_Frame0,
        .pOam = sSamusOam_Left_DiagonalDown_TurningAround_Frame0,
        .timer = 2
    },
    [2] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Left_Up_TurningAroundAndCrouching[3] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_Left_Up_TurningAround_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_Up_TurningAroundAndCrouching_Frame0,
        .pOam = sSamusOam_Left_Up_TurningAroundAndCrouching_Frame0,
        .timer = 2
    },
    [1] = {
        .pTopGfx = sSamusGfx_Top_Left_Up_TurningAround_Frame1,
        .pBottomGfx = sSamusGfx_Bottom_Up_TurningAroundAndCrouching_Frame0,
        .pOam = sSamusOam_Left_Up_TurningAroundAndCrouching_Frame1,
        .timer = 2
    },
    [2] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Right_Up_TurningAroundAndCrouching[3] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_Left_Up_TurningAround_Frame1,
        .pBottomGfx = sSamusGfx_Bottom_Up_TurningAroundAndCrouching_Frame0,
        .pOam = sSamusOam_Left_Up_TurningAroundAndCrouching_Frame1,
        .timer = 2
    },
    [1] = {
        .pTopGfx = sSamusGfx_Top_Left_Up_TurningAround_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_Up_TurningAroundAndCrouching_Frame0,
        .pOam = sSamusOam_Left_Up_TurningAroundAndCrouching_Frame0,
        .timer = 2
    },
    [2] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Left_DiagonalUp_TurningAroundAndCrouching[3] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_Left_DiagonalUp_TurningAround_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_Up_TurningAroundAndCrouching_Frame0,
        .pOam = sSamusOam_Left_DiagonalUp_TurningAroundAndCrouching_Frame0,
        .timer = 2
    },
    [1] = {
        .pTopGfx = sSamusGfx_Top_Left_DiagonalUp_TurningAround_Frame1,
        .pBottomGfx = sSamusGfx_Bottom_Up_TurningAroundAndCrouching_Frame0,
        .pOam = sSamusOam_Left_DiagonalUp_TurningAroundAndCrouching_Frame1,
        .timer = 2
    },
    [2] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Right_DiagonalUp_TurningAroundAndCrouching[3] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_Left_DiagonalUp_TurningAround_Frame1,
        .pBottomGfx = sSamusGfx_Bottom_Up_TurningAroundAndCrouching_Frame0,
        .pOam = sSamusOam_Left_DiagonalUp_TurningAroundAndCrouching_Frame1,
        .timer = 2
    },
    [1] = {
        .pTopGfx = sSamusGfx_Top_Left_DiagonalUp_TurningAround_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_Up_TurningAroundAndCrouching_Frame0,
        .pOam = sSamusOam_Left_DiagonalUp_TurningAroundAndCrouching_Frame0,
        .timer = 2
    },
    [2] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Left_TurningAroundAndCrouching[3] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_Left_TurningAround_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_Up_TurningAroundAndCrouching_Frame0,
        .pOam = sSamusOam_Left_TurningAroundAndCrouching_Frame0,
        .timer = 2
    },
    [1] = {
        .pTopGfx = sSamusGfx_Top_Left_TurningAround_Frame1,
        .pBottomGfx = sSamusGfx_Bottom_Up_TurningAroundAndCrouching_Frame0,
        .pOam = sSamusOam_Left_TurningAroundAndCrouching_Frame1,
        .timer = 2
    },
    [2] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Right_TurningAroundAndCrouching[3] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_Left_TurningAround_Frame1,
        .pBottomGfx = sSamusGfx_Bottom_Up_TurningAroundAndCrouching_Frame0,
        .pOam = sSamusOam_Left_TurningAroundAndCrouching_Frame1,
        .timer = 2
    },
    [1] = {
        .pTopGfx = sSamusGfx_Top_Left_TurningAround_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_Up_TurningAroundAndCrouching_Frame0,
        .pOam = sSamusOam_Left_TurningAroundAndCrouching_Frame0,
        .timer = 2
    },
    [2] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Left_DiagonalDown_TurningAroundAndCrouching[3] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_Left_DiagonalDown_TurningAround_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_Up_TurningAroundAndCrouching_Frame0,
        .pOam = sSamusOam_Left_DiagonalDown_TurningAroundAndCrouching_Frame0,
        .timer = 2
    },
    [1] = {
        .pTopGfx = sSamusGfx_Top_Left_DiagonalDown_TurningAround_Frame1,
        .pBottomGfx = sSamusGfx_Bottom_Up_TurningAroundAndCrouching_Frame0,
        .pOam = sSamusOam_Left_DiagonalDown_TurningAroundAndCrouching_Frame1,
        .timer = 2
    },
    [2] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Right_DiagonalDown_TurningAroundAndCrouching[3] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_Left_DiagonalDown_TurningAround_Frame1,
        .pBottomGfx = sSamusGfx_Bottom_Up_TurningAroundAndCrouching_Frame0,
        .pOam = sSamusOam_Left_DiagonalDown_TurningAroundAndCrouching_Frame1,
        .timer = 2
    },
    [1] = {
        .pTopGfx = sSamusGfx_Top_Left_DiagonalDown_TurningAround_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_Up_TurningAroundAndCrouching_Frame0,
        .pOam = sSamusOam_Left_DiagonalDown_TurningAroundAndCrouching_Frame0,
        .timer = 2
    },
    [2] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Left_Up_TurningAroundMidAir[3] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_Left_Up_TurningAround_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_Up_TurningAroundMidAir_Frame0,
        .pOam = sSamusOam_Left_Up_TurningAroundMidAir_Frame0,
        .timer = 2
    },
    [1] = {
        .pTopGfx = sSamusGfx_Top_Left_Up_TurningAround_Frame1,
        .pBottomGfx = sSamusGfx_Bottom_Up_TurningAroundMidAir_Frame0,
        .pOam = sSamusOam_Left_Up_TurningAroundMidAir_Frame1,
        .timer = 2
    },
    [2] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Right_Up_TurningAroundMidAir[3] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_Left_Up_TurningAround_Frame1,
        .pBottomGfx = sSamusGfx_Bottom_Up_TurningAroundMidAir_Frame0,
        .pOam = sSamusOam_Left_Up_TurningAroundMidAir_Frame1,
        .timer = 2
    },
    [1] = {
        .pTopGfx = sSamusGfx_Top_Left_Up_TurningAround_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_Up_TurningAroundMidAir_Frame0,
        .pOam = sSamusOam_Left_Up_TurningAroundMidAir_Frame0,
        .timer = 2
    },
    [2] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Left_DiagonalUp_TurningAroundMidAir[3] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_Left_DiagonalUp_TurningAround_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_Up_TurningAroundMidAir_Frame0,
        .pOam = sSamusOam_Left_DiagonalUp_TurningAroundMidAir_Frame0,
        .timer = 2
    },
    [1] = {
        .pTopGfx = sSamusGfx_Top_Left_DiagonalUp_TurningAround_Frame1,
        .pBottomGfx = sSamusGfx_Bottom_Up_TurningAroundMidAir_Frame0,
        .pOam = sSamusOam_Left_DiagonalUp_TurningAroundMidAir_Frame1,
        .timer = 2
    },
    [2] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Right_DiagonalUp_TurningAroundMidAir[3] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_Left_DiagonalUp_TurningAround_Frame1,
        .pBottomGfx = sSamusGfx_Bottom_Up_TurningAroundMidAir_Frame0,
        .pOam = sSamusOam_Left_DiagonalUp_TurningAroundMidAir_Frame1,
        .timer = 2
    },
    [1] = {
        .pTopGfx = sSamusGfx_Top_Left_DiagonalUp_TurningAround_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_Up_TurningAroundMidAir_Frame0,
        .pOam = sSamusOam_Left_DiagonalUp_TurningAroundMidAir_Frame0,
        .timer = 2
    },
    [2] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Left_TurningAroundMidAir[3] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_Left_TurningAround_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_Up_TurningAroundMidAir_Frame0,
        .pOam = sSamusOam_Left_TurningAroundMidAir_Frame0,
        .timer = 2
    },
    [1] = {
        .pTopGfx = sSamusGfx_Top_Left_TurningAround_Frame1,
        .pBottomGfx = sSamusGfx_Bottom_Up_TurningAroundMidAir_Frame0,
        .pOam = sSamusOam_Left_TurningAroundMidAir_Frame1,
        .timer = 2
    },
    [2] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Right_TurningAroundMidAir[3] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_Left_TurningAround_Frame1,
        .pBottomGfx = sSamusGfx_Bottom_Up_TurningAroundMidAir_Frame0,
        .pOam = sSamusOam_Left_TurningAroundMidAir_Frame1,
        .timer = 2
    },
    [1] = {
        .pTopGfx = sSamusGfx_Top_Left_TurningAround_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_Up_TurningAroundMidAir_Frame0,
        .pOam = sSamusOam_Left_TurningAroundMidAir_Frame0,
        .timer = 2
    },
    [2] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Left_DiagonalDown_TurningAroundMidAir[3] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_Left_DiagonalDown_TurningAroundMidAir_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_Up_TurningAroundMidAir_Frame0,
        .pOam = sSamusOam_Left_DiagonalDown_TurningAroundMidAir_Frame0,
        .timer = 2
    },
    [1] = {
        .pTopGfx = sSamusGfx_Top_Left_DiagonalDown_TurningAround_Frame1,
        .pBottomGfx = sSamusGfx_Bottom_Up_TurningAroundMidAir_Frame0,
        .pOam = sSamusOam_Left_DiagonalDown_TurningAroundMidAir_Frame1,
        .timer = 2
    },
    [2] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Right_DiagonalDown_TurningAroundMidAir[3] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_Left_DiagonalDown_TurningAround_Frame1,
        .pBottomGfx = sSamusGfx_Bottom_Up_TurningAroundMidAir_Frame0,
        .pOam = sSamusOam_Left_DiagonalDown_TurningAroundMidAir_Frame1,
        .timer = 2
    },
    [1] = {
        .pTopGfx = sSamusGfx_Top_Left_DiagonalDown_TurningAroundMidAir_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_Up_TurningAroundMidAir_Frame0,
        .pOam = sSamusOam_Left_DiagonalDown_TurningAroundMidAir_Frame0,
        .timer = 2
    },
    [2] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Left_Up_UnusedCrouching[2] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_Left_Up_UnusedCrouching_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_Up_UnusedCrouching_Frame0,
        .pOam = sSamusOam_Left_Up_TurningAroundAndCrouching_Frame0,
        .timer = 4
    },
    [1] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Right_Up_UnusedCrouching[2] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_Right_Up_UnusedCrouching_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_Up_UnusedCrouching_Frame0,
        .pOam = sSamusOam_Right_Up_UnusedCrouching_Frame0,
        .timer = 4
    },
    [1] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Left_DiagonalUp_UnusedCrouching[2] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_Left_DiagonalUp_UnusedCrouching_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_DiagonalUp_UnusedCrouching_Frame0,
        .pOam = sSamusOam_Left_DiagonalUp_UnusedCrouching_Frame0,
        .timer = 4
    },
    [1] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Right_DiagonalUp_UnusedCrouching[2] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_Right_DiagonalUp_UnusedCrouching_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_DiagonalUp_UnusedCrouching_Frame0,
        .pOam = sSamusOam_Right_DiagonalUp_UnusedCrouching_Frame0,
        .timer = 4
    },
    [1] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Left_UnusedCrouching[2] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_Left_UnusedCrouching_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_UnusedCrouching_Frame0,
        .pOam = sSamusOam_Left_UnusedCrouching_Frame0,
        .timer = 4
    },
    [1] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Right_UnusedCrouching[2] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_Right_UnusedCrouching_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_UnusedCrouching_Frame0,
        .pOam = sSamusOam_Right_UnusedCrouching_Frame0,
        .timer = 4
    },
    [1] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Left_DiagonalDown_UnusedCrouching[2] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_Left_DiagonalDown_UnusedCrouching_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_DiagonalDown_UnusedCrouching_Frame0,
        .pOam = sSamusOam_Left_DiagonalDown_UnusedCrouching_Frame0,
        .timer = 4
    },
    [1] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Right_DiagonalDown_UnusedCrouching[2] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_Right_DiagonalDown_UnusedCrouching_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_DiagonalDown_UnusedCrouching_Frame0,
        .pOam = sSamusOam_Right_DiagonalDown_UnusedCrouching_Frame0,
        .timer = 4
    },
    [1] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Left_Morphing[4] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_Morphing_Frame0,
        .pBottomGfx = sSamusGfx_Empty,
        .pOam = sSamusOam_Left_Morphing_Frame0,
        .timer = 2
    },
    [1] = {
        .pTopGfx = sSamusGfx_Top_Morphing_Frame1,
        .pBottomGfx = sSamusGfx_Empty,
        .pOam = sSamusOam_Left_Morphing_Frame1,
        .timer = 1
    },
    [2] = {
        .pTopGfx = sSamusGfx_Top_MorphBall_Frame1,
        .pBottomGfx = sSamusGfx_Empty,
        .pOam = sSamusOam_Left_Morphing_Frame2,
        .timer = 2
    },
    [3] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Left_MorphBall[9] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_MorphBall_Frame0,
        .pBottomGfx = sSamusGfx_Empty,
        .pOam = sSamusOam_Left_MorphBall_Frame0,
        .timer = 3
    },
    [1] = {
        .pTopGfx = sSamusGfx_Top_MorphBall_Frame1,
        .pBottomGfx = sSamusGfx_Empty,
        .pOam = sSamusOam_Left_MorphBall_Frame1,
        .timer = 3
    },
    [2] = {
        .pTopGfx = sSamusGfx_Top_MorphBall_Frame2,
        .pBottomGfx = sSamusGfx_Empty,
        .pOam = sSamusOam_Left_MorphBall_Frame2,
        .timer = 3
    },
    [3] = {
        .pTopGfx = sSamusGfx_Top_MorphBall_Frame1,
        .pBottomGfx = sSamusGfx_Empty,
        .pOam = sSamusOam_Left_MorphBall_Frame3,
        .timer = 3
    },
    [4] = {
        .pTopGfx = sSamusGfx_Top_MorphBall_Frame0,
        .pBottomGfx = sSamusGfx_Empty,
        .pOam = sSamusOam_Left_MorphBall_Frame4,
        .timer = 3
    },
    [5] = {
        .pTopGfx = sSamusGfx_Top_MorphBall_Frame1,
        .pBottomGfx = sSamusGfx_Empty,
        .pOam = sSamusOam_Left_MorphBall_Frame5,
        .timer = 3
    },
    [6] = {
        .pTopGfx = sSamusGfx_Top_MorphBall_Frame2,
        .pBottomGfx = sSamusGfx_Empty,
        .pOam = sSamusOam_Left_MorphBall_Frame6,
        .timer = 3
    },
    [7] = {
        .pTopGfx = sSamusGfx_Top_MorphBall_Frame1,
        .pBottomGfx = sSamusGfx_Empty,
        .pOam = sSamusOam_Left_Morphing_Frame2,
        .timer = 3
    },
    [8] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Left_Unmorphing[4] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_Morphing_Frame1,
        .pBottomGfx = sSamusGfx_Empty,
        .pOam = sSamusOam_Left_Morphing_Frame1,
        .timer = 1
    },
    [1] = {
        .pTopGfx = sSamusGfx_Top_Morphing_Frame0,
        .pBottomGfx = sSamusGfx_Empty,
        .pOam = sSamusOam_Left_Morphing_Frame0,
        .timer = 2
    },
    [2] = {
        .pTopGfx = sSamusGfx_Top_Left_Unmorphing_Frame2,
        .pBottomGfx = sSamusGfx_Empty,
        .pOam = sSamusOam_Left_Unmorphing_Frame2,
        .timer = 1
    },
    [3] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Right_Morphing[4] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_Morphing_Frame0,
        .pBottomGfx = sSamusGfx_Empty,
        .pOam = sSamusOam_Right_Morphing_Frame0,
        .timer = 2
    },
    [1] = {
        .pTopGfx = sSamusGfx_Top_Morphing_Frame1,
        .pBottomGfx = sSamusGfx_Empty,
        .pOam = sSamusOam_Right_Morphing_Frame1,
        .timer = 1
    },
    [2] = {
        .pTopGfx = sSamusGfx_Top_MorphBall_Frame1,
        .pBottomGfx = sSamusGfx_Empty,
        .pOam = sSamusOam_Left_MorphBall_Frame1,
        .timer = 2
    },
    [3] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Right_MorphBall[9] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_MorphBall_Frame0,
        .pBottomGfx = sSamusGfx_Empty,
        .pOam = sSamusOam_Left_MorphBall_Frame0,
        .timer = 3
    },
    [1] = {
        .pTopGfx = sSamusGfx_Top_MorphBall_Frame1,
        .pBottomGfx = sSamusGfx_Empty,
        .pOam = sSamusOam_Left_Morphing_Frame2,
        .timer = 3
    },
    [2] = {
        .pTopGfx = sSamusGfx_Top_MorphBall_Frame2,
        .pBottomGfx = sSamusGfx_Empty,
        .pOam = sSamusOam_Left_MorphBall_Frame6,
        .timer = 3
    },
    [3] = {
        .pTopGfx = sSamusGfx_Top_MorphBall_Frame1,
        .pBottomGfx = sSamusGfx_Empty,
        .pOam = sSamusOam_Left_MorphBall_Frame5,
        .timer = 3
    },
    [4] = {
        .pTopGfx = sSamusGfx_Top_MorphBall_Frame0,
        .pBottomGfx = sSamusGfx_Empty,
        .pOam = sSamusOam_Left_MorphBall_Frame4,
        .timer = 3
    },
    [5] = {
        .pTopGfx = sSamusGfx_Top_MorphBall_Frame1,
        .pBottomGfx = sSamusGfx_Empty,
        .pOam = sSamusOam_Left_MorphBall_Frame3,
        .timer = 3
    },
    [6] = {
        .pTopGfx = sSamusGfx_Top_MorphBall_Frame2,
        .pBottomGfx = sSamusGfx_Empty,
        .pOam = sSamusOam_Left_MorphBall_Frame2,
        .timer = 3
    },
    [7] = {
        .pTopGfx = sSamusGfx_Top_MorphBall_Frame1,
        .pBottomGfx = sSamusGfx_Empty,
        .pOam = sSamusOam_Left_MorphBall_Frame1,
        .timer = 3
    },
    [8] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Right_Unmorphing[4] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_Morphing_Frame1,
        .pBottomGfx = sSamusGfx_Empty,
        .pOam = sSamusOam_Right_Morphing_Frame1,
        .timer = 1
    },
    [1] = {
        .pTopGfx = sSamusGfx_Top_Morphing_Frame0,
        .pBottomGfx = sSamusGfx_Empty,
        .pOam = sSamusOam_Right_Morphing_Frame0,
        .timer = 2
    },
    [2] = {
        .pTopGfx = sSamusGfx_Top_Left_Unmorphing_Frame2,
        .pBottomGfx = sSamusGfx_Empty,
        .pOam = sSamusOam_Right_Unmorphing_Frame2,
        .timer = 1
    },
    [3] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Left_OnSavePad[5] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_Left_TurningAround_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_DiagonalUp_TurningAround_Frame0,
        .pOam = sSamusOam_Left_TurningAround_Frame0,
        .timer = 4
    },
    [1] = {
        .pTopGfx = sSamusGfx_Top_FacingForeground_Frame0,
        .pBottomGfx = sSamusGfx_Empty,
        .pOam = sSamusOam_FacingForeground_Frame0,
        .timer = 16
    },
    [2] = {
        .pTopGfx = sSamusGfx_Top_FacingForeground_Frame1,
        .pBottomGfx = sSamusGfx_Empty,
        .pOam = sSamusOam_FacingForeground_Frame0,
        .timer = 16
    },
    [3] = {
        .pTopGfx = sSamusGfx_Top_FacingForeground_Frame2,
        .pBottomGfx = sSamusGfx_Empty,
        .pOam = sSamusOam_FacingForeground_Frame0,
        .timer = 16
    },
    [4] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Right_OnSavePad[5] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_Left_TurningAround_Frame1,
        .pBottomGfx = sSamusGfx_Bottom_DiagonalUp_TurningAround_Frame0,
        .pOam = sSamusOam_Left_TurningAround_Frame1,
        .timer = 4
    },
    [1] = {
        .pTopGfx = sSamusGfx_Top_FacingForeground_Frame0,
        .pBottomGfx = sSamusGfx_Empty,
        .pOam = sSamusOam_FacingForeground_Frame0,
        .timer = 16
    },
    [2] = {
        .pTopGfx = sSamusGfx_Top_FacingForeground_Frame1,
        .pBottomGfx = sSamusGfx_Empty,
        .pOam = sSamusOam_FacingForeground_Frame0,
        .timer = 16
    },
    [3] = {
        .pTopGfx = sSamusGfx_Top_FacingForeground_Frame2,
        .pBottomGfx = sSamusGfx_Empty,
        .pOam = sSamusOam_FacingForeground_Frame0,
        .timer = 16
    },
    [4] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Left_FacingForeground[5] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_FacingForeground_Frame0,
        .pBottomGfx = sSamusGfx_Empty,
        .pOam = sSamusOam_FacingForeground_Frame0,
        .timer = 16
    },
    [1] = {
        .pTopGfx = sSamusGfx_Top_FacingForeground_Frame1,
        .pBottomGfx = sSamusGfx_Empty,
        .pOam = sSamusOam_FacingForeground_Frame0,
        .timer = 16
    },
    [2] = {
        .pTopGfx = sSamusGfx_Top_FacingForeground_Frame2,
        .pBottomGfx = sSamusGfx_Empty,
        .pOam = sSamusOam_FacingForeground_Frame0,
        .timer = 16
    },
    [3] = {
        .pTopGfx = sSamusGfx_Top_Left_TurningAround_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_DiagonalUp_TurningAround_Frame0,
        .pOam = sSamusOam_Left_TurningAround_Frame0,
        .timer = 4
    },
    [4] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Right_FacingForeground[5] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_FacingForeground_Frame0,
        .pBottomGfx = sSamusGfx_Empty,
        .pOam = sSamusOam_FacingForeground_Frame0,
        .timer = 16
    },
    [1] = {
        .pTopGfx = sSamusGfx_Top_FacingForeground_Frame1,
        .pBottomGfx = sSamusGfx_Empty,
        .pOam = sSamusOam_FacingForeground_Frame0,
        .timer = 16
    },
    [2] = {
        .pTopGfx = sSamusGfx_Top_FacingForeground_Frame2,
        .pBottomGfx = sSamusGfx_Empty,
        .pOam = sSamusOam_FacingForeground_Frame0,
        .timer = 16
    },
    [3] = {
        .pTopGfx = sSamusGfx_Top_Left_TurningAround_Frame1,
        .pBottomGfx = sSamusGfx_Bottom_DiagonalUp_TurningAround_Frame0,
        .pOam = sSamusOam_Left_TurningAround_Frame1,
        .timer = 4
    },
    [4] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Left_OnNavigationPad[17] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_Left_OnNavigationPad_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_OnNavigationPad_Frame0,
        .pOam = sSamusOam_Left_OnNavigationPad_Frame0,
        .timer = 6
    },
    [1] = {
        .pTopGfx = sSamusGfx_Top_Left_OnNavigationPad_Frame1,
        .pBottomGfx = sSamusGfx_Bottom_OnNavigationPad_Frame1,
        .pOam = sSamusOam_Left_OnNavigationPad_Frame1,
        .timer = 2
    },
    [2] = {
        .pTopGfx = sSamusGfx_Top_Left_OnNavigationPad_Frame2,
        .pBottomGfx = sSamusGfx_Bottom_OnNavigationPad_Frame1,
        .pOam = sSamusOam_Left_OnNavigationPad_Frame2,
        .timer = 4
    },
    [3] = {
        .pTopGfx = sSamusGfx_Top_Left_OnNavigationPad_Frame3,
        .pBottomGfx = sSamusGfx_Bottom_OnNavigationPad_Frame1,
        .pOam = sSamusOam_Left_OnNavigationPad_Frame2,
        .timer = 4
    },
    [4] = {
        .pTopGfx = sSamusGfx_Top_Left_OnNavigationPad_Frame2,
        .pBottomGfx = sSamusGfx_Bottom_OnNavigationPad_Frame1,
        .pOam = sSamusOam_Left_OnNavigationPad_Frame2,
        .timer = 4
    },
    [5] = {
        .pTopGfx = sSamusGfx_Top_Left_OnNavigationPad_Frame3,
        .pBottomGfx = sSamusGfx_Bottom_OnNavigationPad_Frame1,
        .pOam = sSamusOam_Left_OnNavigationPad_Frame2,
        .timer = 4
    },
    [6] = {
        .pTopGfx = sSamusGfx_Top_Left_OnNavigationPad_Frame6,
        .pBottomGfx = sSamusGfx_Bottom_OnNavigationPad_Frame1,
        .pOam = sSamusOam_Left_OnNavigationPad_Frame6,
        .timer = 4
    },
    [7] = {
        .pTopGfx = sSamusGfx_Top_Left_OnNavigationPad_Frame7,
        .pBottomGfx = sSamusGfx_Bottom_OnNavigationPad_Frame1,
        .pOam = sSamusOam_Left_OnNavigationPad_Frame7,
        .timer = 4
    },
    [8] = {
        .pTopGfx = sSamusGfx_Top_Left_OnNavigationPad_Frame6,
        .pBottomGfx = sSamusGfx_Bottom_OnNavigationPad_Frame1,
        .pOam = sSamusOam_Left_OnNavigationPad_Frame6,
        .timer = 4
    },
    [9] = {
        .pTopGfx = sSamusGfx_Top_Left_OnNavigationPad_Frame7,
        .pBottomGfx = sSamusGfx_Bottom_OnNavigationPad_Frame1,
        .pOam = sSamusOam_Left_OnNavigationPad_Frame7,
        .timer = 4
    },
    [10] = {
        .pTopGfx = sSamusGfx_Top_Left_OnNavigationPad_Frame2,
        .pBottomGfx = sSamusGfx_Bottom_OnNavigationPad_Frame1,
        .pOam = sSamusOam_Left_OnNavigationPad_Frame2,
        .timer = 4
    },
    [11] = {
        .pTopGfx = sSamusGfx_Top_Left_OnNavigationPad_Frame6,
        .pBottomGfx = sSamusGfx_Bottom_OnNavigationPad_Frame1,
        .pOam = sSamusOam_Left_OnNavigationPad_Frame6,
        .timer = 4
    },
    [12] = {
        .pTopGfx = sSamusGfx_Top_Left_OnNavigationPad_Frame12,
        .pBottomGfx = sSamusGfx_Bottom_OnNavigationPad_Frame1,
        .pOam = sSamusOam_Left_OnNavigationPad_Frame12,
        .timer = 4
    },
    [13] = {
        .pTopGfx = sSamusGfx_Top_Left_OnNavigationPad_Frame1,
        .pBottomGfx = sSamusGfx_Bottom_OnNavigationPad_Frame1,
        .pOam = sSamusOam_Left_OnNavigationPad_Frame1,
        .timer = 12
    },
    [14] = {
        .pTopGfx = sSamusGfx_Top_Left_OnNavigationPad_Frame14,
        .pBottomGfx = sSamusGfx_Bottom_OnNavigationPad_Frame1,
        .pOam = sSamusOam_Left_OnNavigationPad_Frame1,
        .timer = 30
    },
    [15] = {
        .pTopGfx = sSamusGfx_Top_Left_OnNavigationPad_Frame1,
        .pBottomGfx = sSamusGfx_Bottom_OnNavigationPad_Frame1,
        .pOam = sSamusOam_Left_OnNavigationPad_Frame1,
        .timer = 8
    },
    [16] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Left_FacingBackground[5] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_Left_OnNavigationPad_Frame1,
        .pBottomGfx = sSamusGfx_Bottom_OnNavigationPad_Frame1,
        .pOam = sSamusOam_Left_OnNavigationPad_Frame1,
        .timer = 16
    },
    [1] = {
        .pTopGfx = sSamusGfx_Top_Left_OnNavigationPad_Frame1,
        .pBottomGfx = sSamusGfx_Bottom_OnNavigationPad_Frame1,
        .pOam = sSamusOam_Left_OnNavigationPad_Frame1,
        .timer = 16
    },
    [2] = {
        .pTopGfx = sSamusGfx_Top_Left_OnNavigationPad_Frame1,
        .pBottomGfx = sSamusGfx_Bottom_OnNavigationPad_Frame1,
        .pOam = sSamusOam_Left_OnNavigationPad_Frame1,
        .timer = 16
    },
    [3] = {
        .pTopGfx = sSamusGfx_Top_Left_OnNavigationPad_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_OnNavigationPad_Frame0,
        .pOam = sSamusOam_Left_OnNavigationPad_Frame0,
        .timer = 4
    },
    [4] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Right_OnNavigationPad[17] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_Right_OnNavigationPad_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_OnNavigationPad_Frame0,
        .pOam = sSamusOam_Right_OnNavigationPad_Frame0,
        .timer = 6
    },
    [1] = {
        .pTopGfx = sSamusGfx_Top_Left_OnNavigationPad_Frame1,
        .pBottomGfx = sSamusGfx_Bottom_OnNavigationPad_Frame1,
        .pOam = sSamusOam_Left_OnNavigationPad_Frame1,
        .timer = 2
    },
    [2] = {
        .pTopGfx = sSamusGfx_Top_Left_OnNavigationPad_Frame2,
        .pBottomGfx = sSamusGfx_Bottom_OnNavigationPad_Frame1,
        .pOam = sSamusOam_Left_OnNavigationPad_Frame2,
        .timer = 4
    },
    [3] = {
        .pTopGfx = sSamusGfx_Top_Left_OnNavigationPad_Frame3,
        .pBottomGfx = sSamusGfx_Bottom_OnNavigationPad_Frame1,
        .pOam = sSamusOam_Left_OnNavigationPad_Frame2,
        .timer = 4
    },
    [4] = {
        .pTopGfx = sSamusGfx_Top_Left_OnNavigationPad_Frame2,
        .pBottomGfx = sSamusGfx_Bottom_OnNavigationPad_Frame1,
        .pOam = sSamusOam_Left_OnNavigationPad_Frame2,
        .timer = 4
    },
    [5] = {
        .pTopGfx = sSamusGfx_Top_Left_OnNavigationPad_Frame3,
        .pBottomGfx = sSamusGfx_Bottom_OnNavigationPad_Frame1,
        .pOam = sSamusOam_Left_OnNavigationPad_Frame2,
        .timer = 4
    },
    [6] = {
        .pTopGfx = sSamusGfx_Top_Left_OnNavigationPad_Frame6,
        .pBottomGfx = sSamusGfx_Bottom_OnNavigationPad_Frame1,
        .pOam = sSamusOam_Left_OnNavigationPad_Frame6,
        .timer = 4
    },
    [7] = {
        .pTopGfx = sSamusGfx_Top_Left_OnNavigationPad_Frame7,
        .pBottomGfx = sSamusGfx_Bottom_OnNavigationPad_Frame1,
        .pOam = sSamusOam_Left_OnNavigationPad_Frame7,
        .timer = 4
    },
    [8] = {
        .pTopGfx = sSamusGfx_Top_Left_OnNavigationPad_Frame6,
        .pBottomGfx = sSamusGfx_Bottom_OnNavigationPad_Frame1,
        .pOam = sSamusOam_Left_OnNavigationPad_Frame6,
        .timer = 4
    },
    [9] = {
        .pTopGfx = sSamusGfx_Top_Left_OnNavigationPad_Frame7,
        .pBottomGfx = sSamusGfx_Bottom_OnNavigationPad_Frame1,
        .pOam = sSamusOam_Left_OnNavigationPad_Frame7,
        .timer = 4
    },
    [10] = {
        .pTopGfx = sSamusGfx_Top_Left_OnNavigationPad_Frame2,
        .pBottomGfx = sSamusGfx_Bottom_OnNavigationPad_Frame1,
        .pOam = sSamusOam_Left_OnNavigationPad_Frame2,
        .timer = 4
    },
    [11] = {
        .pTopGfx = sSamusGfx_Top_Left_OnNavigationPad_Frame6,
        .pBottomGfx = sSamusGfx_Bottom_OnNavigationPad_Frame1,
        .pOam = sSamusOam_Left_OnNavigationPad_Frame6,
        .timer = 4
    },
    [12] = {
        .pTopGfx = sSamusGfx_Top_Left_OnNavigationPad_Frame12,
        .pBottomGfx = sSamusGfx_Bottom_OnNavigationPad_Frame1,
        .pOam = sSamusOam_Left_OnNavigationPad_Frame12,
        .timer = 4
    },
    [13] = {
        .pTopGfx = sSamusGfx_Top_Left_OnNavigationPad_Frame1,
        .pBottomGfx = sSamusGfx_Bottom_OnNavigationPad_Frame1,
        .pOam = sSamusOam_Left_OnNavigationPad_Frame1,
        .timer = 12
    },
    [14] = {
        .pTopGfx = sSamusGfx_Top_Left_OnNavigationPad_Frame14,
        .pBottomGfx = sSamusGfx_Bottom_OnNavigationPad_Frame1,
        .pOam = sSamusOam_Left_OnNavigationPad_Frame1,
        .timer = 30
    },
    [15] = {
        .pTopGfx = sSamusGfx_Top_Left_OnNavigationPad_Frame1,
        .pBottomGfx = sSamusGfx_Bottom_OnNavigationPad_Frame1,
        .pOam = sSamusOam_Left_OnNavigationPad_Frame1,
        .timer = 8
    },
    [16] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Right_FacingBackground[5] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_Left_OnNavigationPad_Frame1,
        .pBottomGfx = sSamusGfx_Bottom_OnNavigationPad_Frame1,
        .pOam = sSamusOam_Left_OnNavigationPad_Frame1,
        .timer = 16
    },
    [1] = {
        .pTopGfx = sSamusGfx_Top_Left_OnNavigationPad_Frame1,
        .pBottomGfx = sSamusGfx_Bottom_OnNavigationPad_Frame1,
        .pOam = sSamusOam_Left_OnNavigationPad_Frame1,
        .timer = 16
    },
    [2] = {
        .pTopGfx = sSamusGfx_Top_Left_OnNavigationPad_Frame1,
        .pBottomGfx = sSamusGfx_Bottom_OnNavigationPad_Frame1,
        .pOam = sSamusOam_Left_OnNavigationPad_Frame1,
        .timer = 16
    },
    [3] = {
        .pTopGfx = sSamusGfx_Top_Right_OnNavigationPad_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_OnNavigationPad_Frame0,
        .pOam = sSamusOam_Right_OnNavigationPad_Frame0,
        .timer = 8
    },
    [4] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Left_UsingAnElevator[6] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_Left_UsingAnElevator_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_UsingAnElevator_Frame0,
        .pOam = sSamusOam_Left_OnNavigationPad_Frame0,
        .timer = 6
    },
    [1] = {
        .pTopGfx = sSamusGfx_Top_FacingForeground_Frame0,
        .pBottomGfx = sSamusGfx_Empty,
        .pOam = sSamusOam_FacingForeground_Frame0,
        .timer = 6
    },
    [2] = {
        .pTopGfx = sSamusGfx_Top_UsingAnElevator_Frame2,
        .pBottomGfx = sSamusGfx_Bottom_UsingAnElevator_Frame2,
        .pOam = sSamusOam_UsingAnElevator_Frame2,
        .timer = 6
    },
    [3] = {
        .pTopGfx = sSamusGfx_Top_UsingAnElevator_Frame2,
        .pBottomGfx = sSamusGfx_Bottom_UsingAnElevator_Frame2,
        .pOam = sSamusOam_UsingAnElevator_Frame2,
        .timer = 255
    },
    [4] = {
        .pTopGfx = sSamusGfx_Top_UsingAnElevator_Frame2,
        .pBottomGfx = sSamusGfx_Bottom_UsingAnElevator_Frame2,
        .pOam = sSamusOam_UsingAnElevator_Frame2,
        .timer = 4
    },
    [5] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Right_UsingAnElevator[6] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_Right_UsingAnElevator_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_UsingAnElevator_Frame0,
        .pOam = sSamusOam_Right_UsingAnElevator_Frame0,
        .timer = 6
    },
    [1] = {
        .pTopGfx = sSamusGfx_Top_FacingForeground_Frame0,
        .pBottomGfx = sSamusGfx_Empty,
        .pOam = sSamusOam_FacingForeground_Frame0,
        .timer = 6
    },
    [2] = {
        .pTopGfx = sSamusGfx_Top_UsingAnElevator_Frame2,
        .pBottomGfx = sSamusGfx_Bottom_UsingAnElevator_Frame2,
        .pOam = sSamusOam_UsingAnElevator_Frame2,
        .timer = 6
    },
    [3] = {
        .pTopGfx = sSamusGfx_Top_UsingAnElevator_Frame2,
        .pBottomGfx = sSamusGfx_Bottom_UsingAnElevator_Frame2,
        .pOam = sSamusOam_UsingAnElevator_Frame2,
        .timer = 255
    },
    [4] = {
        .pTopGfx = sSamusGfx_Top_UsingAnElevator_Frame2,
        .pBottomGfx = sSamusGfx_Bottom_UsingAnElevator_Frame2,
        .pOam = sSamusOam_UsingAnElevator_Frame2,
        .timer = 4
    },
    [5] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Left_DownloadingAbility[17] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_DownloadingAbility_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_DownloadingAbility_Frame0,
        .pOam = sSamusOam_DownloadingAbility_Frame0,
        .timer = 1
    },
    [1] = {
        .pTopGfx = sSamusGfx_Top_FacingForeground_Frame2,
        .pBottomGfx = sSamusGfx_Empty,
        .pOam = sSamusOam_FacingForeground_Frame0,
        .timer = 1
    },
    [2] = {
        .pTopGfx = sSamusGfx_Top_DownloadingAbility_Frame2,
        .pBottomGfx = sSamusGfx_Bottom_DownloadingAbility_Frame2,
        .pOam = sSamusOam_DownloadingAbility_Frame0,
        .timer = 1
    },
    [3] = {
        .pTopGfx = sSamusGfx_Top_DownloadingAbility_Frame3,
        .pBottomGfx = sSamusGfx_Bottom_DownloadingAbility_Frame3,
        .pOam = sSamusOam_DownloadingAbility_Frame0,
        .timer = 1
    },
    [4] = {
        .pTopGfx = sSamusGfx_Top_DownloadingAbility_Frame4,
        .pBottomGfx = sSamusGfx_Bottom_DownloadingAbility_Frame4,
        .pOam = sSamusOam_DownloadingAbility_Frame0,
        .timer = 1
    },
    [5] = {
        .pTopGfx = sSamusGfx_Top_DownloadingAbility_Frame5,
        .pBottomGfx = sSamusGfx_Bottom_DownloadingAbility_Frame5,
        .pOam = sSamusOam_DownloadingAbility_Frame0,
        .timer = 1
    },
    [6] = {
        .pTopGfx = sSamusGfx_Top_DownloadingAbility_Frame6,
        .pBottomGfx = sSamusGfx_Bottom_DownloadingAbility_Frame6,
        .pOam = sSamusOam_DownloadingAbility_Frame0,
        .timer = 1
    },
    [7] = {
        .pTopGfx = sSamusGfx_Top_DownloadingAbility_Frame7,
        .pBottomGfx = sSamusGfx_Bottom_DownloadingAbility_Frame7,
        .pOam = sSamusOam_DownloadingAbility_Frame0,
        .timer = 1
    },
    [8] = {
        .pTopGfx = sSamusGfx_Top_DownloadingAbility_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_DownloadingAbility_Frame0,
        .pOam = sSamusOam_DownloadingAbility_Frame0,
        .timer = 1
    },
    [9] = {
        .pTopGfx = sSamusGfx_Top_DownloadingAbility_Frame9,
        .pBottomGfx = sSamusGfx_Bottom_DownloadingAbility_Frame9,
        .pOam = sSamusOam_DownloadingAbility_Frame0,
        .timer = 1
    },
    [10] = {
        .pTopGfx = sSamusGfx_Top_DownloadingAbility_Frame2,
        .pBottomGfx = sSamusGfx_Bottom_DownloadingAbility_Frame2,
        .pOam = sSamusOam_DownloadingAbility_Frame0,
        .timer = 1
    },
    [11] = {
        .pTopGfx = sSamusGfx_Top_DownloadingAbility_Frame7,
        .pBottomGfx = sSamusGfx_Bottom_DownloadingAbility_Frame7,
        .pOam = sSamusOam_DownloadingAbility_Frame0,
        .timer = 1
    },
    [12] = {
        .pTopGfx = sSamusGfx_Top_DownloadingAbility_Frame4,
        .pBottomGfx = sSamusGfx_Bottom_DownloadingAbility_Frame4,
        .pOam = sSamusOam_DownloadingAbility_Frame0,
        .timer = 1
    },
    [13] = {
        .pTopGfx = sSamusGfx_Top_DownloadingAbility_Frame5,
        .pBottomGfx = sSamusGfx_Bottom_DownloadingAbility_Frame5,
        .pOam = sSamusOam_DownloadingAbility_Frame0,
        .timer = 1
    },
    [14] = {
        .pTopGfx = sSamusGfx_Top_DownloadingAbility_Frame6,
        .pBottomGfx = sSamusGfx_Bottom_DownloadingAbility_Frame6,
        .pOam = sSamusOam_DownloadingAbility_Frame0,
        .timer = 1
    },
    [15] = {
        .pTopGfx = sSamusGfx_Top_DownloadingAbility_Frame3,
        .pBottomGfx = sSamusGfx_Bottom_DownloadingAbility_Frame3,
        .pOam = sSamusOam_DownloadingAbility_Frame0,
        .timer = 1
    },
    [16] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Right_DownloadingAbility[17] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_DownloadingAbility_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_DownloadingAbility_Frame0,
        .pOam = sSamusOam_DownloadingAbility_Frame0,
        .timer = 1
    },
    [1] = {
        .pTopGfx = sSamusGfx_Top_FacingForeground_Frame2,
        .pBottomGfx = sSamusGfx_Empty,
        .pOam = sSamusOam_FacingForeground_Frame0,
        .timer = 1
    },
    [2] = {
        .pTopGfx = sSamusGfx_Top_DownloadingAbility_Frame2,
        .pBottomGfx = sSamusGfx_Bottom_DownloadingAbility_Frame2,
        .pOam = sSamusOam_DownloadingAbility_Frame0,
        .timer = 1
    },
    [3] = {
        .pTopGfx = sSamusGfx_Top_DownloadingAbility_Frame3,
        .pBottomGfx = sSamusGfx_Bottom_DownloadingAbility_Frame3,
        .pOam = sSamusOam_DownloadingAbility_Frame0,
        .timer = 1
    },
    [4] = {
        .pTopGfx = sSamusGfx_Top_DownloadingAbility_Frame4,
        .pBottomGfx = sSamusGfx_Bottom_DownloadingAbility_Frame4,
        .pOam = sSamusOam_DownloadingAbility_Frame0,
        .timer = 1
    },
    [5] = {
        .pTopGfx = sSamusGfx_Top_DownloadingAbility_Frame5,
        .pBottomGfx = sSamusGfx_Bottom_DownloadingAbility_Frame5,
        .pOam = sSamusOam_DownloadingAbility_Frame0,
        .timer = 1
    },
    [6] = {
        .pTopGfx = sSamusGfx_Top_DownloadingAbility_Frame6,
        .pBottomGfx = sSamusGfx_Bottom_DownloadingAbility_Frame6,
        .pOam = sSamusOam_DownloadingAbility_Frame0,
        .timer = 1
    },
    [7] = {
        .pTopGfx = sSamusGfx_Top_DownloadingAbility_Frame7,
        .pBottomGfx = sSamusGfx_Bottom_DownloadingAbility_Frame7,
        .pOam = sSamusOam_DownloadingAbility_Frame0,
        .timer = 1
    },
    [8] = {
        .pTopGfx = sSamusGfx_Top_DownloadingAbility_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_DownloadingAbility_Frame0,
        .pOam = sSamusOam_DownloadingAbility_Frame0,
        .timer = 1
    },
    [9] = {
        .pTopGfx = sSamusGfx_Top_DownloadingAbility_Frame9,
        .pBottomGfx = sSamusGfx_Bottom_DownloadingAbility_Frame9,
        .pOam = sSamusOam_DownloadingAbility_Frame0,
        .timer = 1
    },
    [10] = {
        .pTopGfx = sSamusGfx_Top_DownloadingAbility_Frame2,
        .pBottomGfx = sSamusGfx_Bottom_DownloadingAbility_Frame2,
        .pOam = sSamusOam_DownloadingAbility_Frame0,
        .timer = 1
    },
    [11] = {
        .pTopGfx = sSamusGfx_Top_DownloadingAbility_Frame7,
        .pBottomGfx = sSamusGfx_Bottom_DownloadingAbility_Frame7,
        .pOam = sSamusOam_DownloadingAbility_Frame0,
        .timer = 1
    },
    [12] = {
        .pTopGfx = sSamusGfx_Top_DownloadingAbility_Frame4,
        .pBottomGfx = sSamusGfx_Bottom_DownloadingAbility_Frame4,
        .pOam = sSamusOam_DownloadingAbility_Frame0,
        .timer = 1
    },
    [13] = {
        .pTopGfx = sSamusGfx_Top_DownloadingAbility_Frame5,
        .pBottomGfx = sSamusGfx_Bottom_DownloadingAbility_Frame5,
        .pOam = sSamusOam_DownloadingAbility_Frame0,
        .timer = 1
    },
    [14] = {
        .pTopGfx = sSamusGfx_Top_DownloadingAbility_Frame6,
        .pBottomGfx = sSamusGfx_Bottom_DownloadingAbility_Frame6,
        .pOam = sSamusOam_DownloadingAbility_Frame0,
        .timer = 1
    },
    [15] = {
        .pTopGfx = sSamusGfx_Top_DownloadingAbility_Frame3,
        .pBottomGfx = sSamusGfx_Bottom_DownloadingAbility_Frame3,
        .pOam = sSamusOam_DownloadingAbility_Frame0,
        .timer = 1
    },
    [16] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Left_BeingRecharged[9] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_Left_BeingRecharged_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_BeingRecharged_Frame0,
        .pOam = sSamusOam_Left_BeingRecharged_Frame0,
        .timer = 1
    },
    [1] = {
        .pTopGfx = sSamusGfx_Top_Left_BeingRecharged_Frame1,
        .pBottomGfx = sSamusGfx_Bottom_BeingRecharged_Frame1,
        .pOam = sSamusOam_Left_BeingRecharged_Frame0,
        .timer = 1
    },
    [2] = {
        .pTopGfx = sSamusGfx_Top_Left_BeingRecharged_Frame2,
        .pBottomGfx = sSamusGfx_Bottom_BeingRecharged_Frame2,
        .pOam = sSamusOam_Left_BeingRecharged_Frame0,
        .timer = 1
    },
    [3] = {
        .pTopGfx = sSamusGfx_Top_Left_BeingRecharged_Frame1,
        .pBottomGfx = sSamusGfx_Bottom_BeingRecharged_Frame1,
        .pOam = sSamusOam_Left_BeingRecharged_Frame0,
        .timer = 1
    },
    [4] = {
        .pTopGfx = sSamusGfx_Top_Left_BeingRecharged_Frame4,
        .pBottomGfx = sSamusGfx_Bottom_BeingRecharged_Frame4,
        .pOam = sSamusOam_Left_BeingRecharged_Frame0,
        .timer = 1
    },
    [5] = {
        .pTopGfx = sSamusGfx_Top_Left_BeingRecharged_Frame1,
        .pBottomGfx = sSamusGfx_Bottom_BeingRecharged_Frame1,
        .pOam = sSamusOam_Left_BeingRecharged_Frame0,
        .timer = 1
    },
    [6] = {
        .pTopGfx = sSamusGfx_Top_Left_BeingRecharged_Frame6,
        .pBottomGfx = sSamusGfx_Bottom_BeingRecharged_Frame6,
        .pOam = sSamusOam_Left_BeingRecharged_Frame0,
        .timer = 1
    },
    [7] = {
        .pTopGfx = sSamusGfx_Top_Left_BeingRecharged_Frame1,
        .pBottomGfx = sSamusGfx_Bottom_BeingRecharged_Frame1,
        .pOam = sSamusOam_Left_BeingRecharged_Frame0,
        .timer = 1
    },
    [8] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Right_BeingRecharged[9] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_Right_BeingRecharged_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_BeingRecharged_Frame0,
        .pOam = sSamusOam_Right_BeingRecharged_Frame0,
        .timer = 1
    },
    [1] = {
        .pTopGfx = sSamusGfx_Top_Right_BeingRecharged_Frame1,
        .pBottomGfx = sSamusGfx_Bottom_BeingRecharged_Frame1,
        .pOam = sSamusOam_Right_BeingRecharged_Frame1,
        .timer = 1
    },
    [2] = {
        .pTopGfx = sSamusGfx_Top_Right_BeingRecharged_Frame2,
        .pBottomGfx = sSamusGfx_Bottom_BeingRecharged_Frame2,
        .pOam = sSamusOam_Right_BeingRecharged_Frame0,
        .timer = 1
    },
    [3] = {
        .pTopGfx = sSamusGfx_Top_Right_BeingRecharged_Frame1,
        .pBottomGfx = sSamusGfx_Bottom_BeingRecharged_Frame1,
        .pOam = sSamusOam_Right_BeingRecharged_Frame1,
        .timer = 1
    },
    [4] = {
        .pTopGfx = sSamusGfx_Top_Right_BeingRecharged_Frame4,
        .pBottomGfx = sSamusGfx_Bottom_BeingRecharged_Frame4,
        .pOam = sSamusOam_Right_BeingRecharged_Frame0,
        .timer = 1
    },
    [5] = {
        .pTopGfx = sSamusGfx_Top_Right_BeingRecharged_Frame1,
        .pBottomGfx = sSamusGfx_Bottom_BeingRecharged_Frame1,
        .pOam = sSamusOam_Right_BeingRecharged_Frame1,
        .timer = 1
    },
    [6] = {
        .pTopGfx = sSamusGfx_Top_Right_BeingRecharged_Frame6,
        .pBottomGfx = sSamusGfx_Bottom_BeingRecharged_Frame6,
        .pOam = sSamusOam_Right_BeingRecharged_Frame0,
        .timer = 1
    },
    [7] = {
        .pTopGfx = sSamusGfx_Top_Right_BeingRecharged_Frame1,
        .pBottomGfx = sSamusGfx_Bottom_BeingRecharged_Frame1,
        .pOam = sSamusOam_Right_BeingRecharged_Frame1,
        .timer = 1
    },
    [8] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Left_UnlockingSecurity[2] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_Left_UnlockingSecurity_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_BeingRecharged_Frame1,
        .pOam = sSamusOam_Left_UnlockingSecurity_Frame0,
        .timer = 60
    },
    [1] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Right_UnlockingSecurity[2] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_Right_UnlockingSecurity_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_BeingRecharged_Frame1,
        .pOam = sSamusOam_Right_UnlockingSecurity_Frame0,
        .timer = 60
    },
    [1] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_UnlockingHabitationsDeck[7] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_UnlockingHabitationsDeck_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_UnlockingHabitationsDeck_Frame0,
        .pOam = sSamusOam_UnlockingHabitationsDeck_Frame0,
        .timer = 8
    },
    [1] = {
        .pTopGfx = sSamusGfx_Top_UnlockingHabitationsDeck_Frame1,
        .pBottomGfx = sSamusGfx_Bottom_UnlockingHabitationsDeck_Frame0,
        .pOam = sSamusOam_UnlockingHabitationsDeck_Frame0,
        .timer = 1
    },
    [2] = {
        .pTopGfx = sSamusGfx_Top_UnlockingHabitationsDeck_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_UnlockingHabitationsDeck_Frame0,
        .pOam = sSamusOam_UnlockingHabitationsDeck_Frame0,
        .timer = 4
    },
    [3] = {
        .pTopGfx = sSamusGfx_Top_Left_OnNavigationPad_Frame7,
        .pBottomGfx = sSamusGfx_Bottom_OnNavigationPad_Frame1,
        .pOam = sSamusOam_Left_OnNavigationPad_Frame7,
        .timer = 4
    },
    [4] = {
        .pTopGfx = sSamusGfx_Top_UnlockingHabitationsDeck_Frame4,
        .pBottomGfx = sSamusGfx_Bottom_UnlockingHabitationsDeck_Frame4,
        .pOam = sSamusOam_UnlockingHabitationsDeck_Frame4,
        .timer = 32
    },
    [5] = {
        .pTopGfx = sSamusGfx_Top_Right_OnNavigationPad_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_OnNavigationPad_Frame0,
        .pOam = sSamusOam_Right_OnNavigationPad_Frame0,
        .timer = 4
    },
    [6] = SAMUS_ANIM_TERMINATOR
};

static const u8 sSamusGfx_Top_Left_HangingFromVerticalLadder_Frame3[] = {
    6, 6,
    _INCBIN_U8("data/samus/gfx/Top_Left_HangingFromVerticalLadder_Frame3.gfx")
};

static const u8 sSamusGfx_Bottom_HangingFromVerticalLadder_Frame3[] = {
    4, 2,
    _INCBIN_U8("data/samus/gfx/Bottom_HangingFromVerticalLadder_Frame3.gfx")
};

static const u8 sSamusGfx_Top_Left_HangingFromVerticalLadder_Frame4[] = {
    6, 6,
    _INCBIN_U8("data/samus/gfx/Top_Left_HangingFromVerticalLadder_Frame4.gfx")
};

static const u8 sSamusGfx_Bottom_HangingFromVerticalLadder_Frame4[] = {
    4, 2,
    _INCBIN_U8("data/samus/gfx/Bottom_HangingFromVerticalLadder_Frame4.gfx")
};

static const u8 sSamusGfx_Top_Left_HangingFromVerticalLadder_Frame5[] = {
    6, 6,
    _INCBIN_U8("data/samus/gfx/Top_Left_HangingFromVerticalLadder_Frame5.gfx")
};

static const u8 sSamusGfx_Bottom_HangingFromVerticalLadder_Frame5[] = {
    4, 2,
    _INCBIN_U8("data/samus/gfx/Bottom_HangingFromVerticalLadder_Frame5.gfx")
};

static const u8 sSamusGfx_Top_Left_HangingFromVerticalLadder_Frame0[] = {
    6, 6,
    _INCBIN_U8("data/samus/gfx/Top_Left_HangingFromVerticalLadder_Frame0.gfx")
};

static const u8 sSamusGfx_Bottom_HangingFromVerticalLadder_Frame0[] = {
    4, 2,
    _INCBIN_U8("data/samus/gfx/Bottom_HangingFromVerticalLadder_Frame0.gfx")
};

static const u8 sSamusGfx_Top_Left_HangingFromVerticalLadder_Frame1[] = {
    6, 6,
    _INCBIN_U8("data/samus/gfx/Top_Left_HangingFromVerticalLadder_Frame1.gfx")
};

static const u8 sSamusGfx_Bottom_HangingFromVerticalLadder_Frame1[] = {
    4, 2,
    _INCBIN_U8("data/samus/gfx/Bottom_HangingFromVerticalLadder_Frame1.gfx")
};

static const u8 sSamusGfx_Top_Left_HangingFromVerticalLadder_Frame2[] = {
    6, 6,
    _INCBIN_U8("data/samus/gfx/Top_Left_HangingFromVerticalLadder_Frame2.gfx")
};

static const u8 sSamusGfx_Bottom_HangingFromVerticalLadder_Frame2[] = {
    4, 2,
    _INCBIN_U8("data/samus/gfx/Bottom_HangingFromVerticalLadder_Frame2.gfx")
};

static const u8 sSamusGfx_Top_Right_HangingFromVerticalLadder_Frame0[] = {
    6, 6,
    _INCBIN_U8("data/samus/gfx/Top_Right_HangingFromVerticalLadder_Frame0.gfx")
};

static const u8 sSamusGfx_Top_Right_HangingFromVerticalLadder_Frame1[] = {
    6, 6,
    _INCBIN_U8("data/samus/gfx/Top_Right_HangingFromVerticalLadder_Frame1.gfx")
};

static const u8 sSamusGfx_Top_Right_HangingFromVerticalLadder_Frame2[] = {
    6, 6,
    _INCBIN_U8("data/samus/gfx/Top_Right_HangingFromVerticalLadder_Frame2.gfx")
};

static const u8 sSamusGfx_Top_Right_HangingFromVerticalLadder_Frame3[] = {
    6, 6,
    _INCBIN_U8("data/samus/gfx/Top_Right_HangingFromVerticalLadder_Frame3.gfx")
};

static const u8 sSamusGfx_Top_Right_HangingFromVerticalLadder_Frame4[] = {
    6, 6,
    _INCBIN_U8("data/samus/gfx/Top_Right_HangingFromVerticalLadder_Frame4.gfx")
};

static const u8 sSamusGfx_Top_Right_HangingFromVerticalLadder_Frame5[] = {
    5, 4,
    _INCBIN_U8("data/samus/gfx/Top_Right_HangingFromVerticalLadder_Frame5.gfx")
};

static const u8 sSamusGfx_Top_Left_StartingToHoldYourArmCannonOutOnAVerticalLadder_Frame0[] = {
    6, 6,
    _INCBIN_U8("data/samus/gfx/Top_Left_StartingToHoldYourArmCannonOutOnAVerticalLadder_Frame0.gfx")
};

static const u8 sSamusGfx_Bottom_Left_StartingToHoldYourArmCannonOutOnAVerticalLadder_Frame0[] = {
    4, 2,
    _INCBIN_U8("data/samus/gfx/Bottom_Left_StartingToHoldYourArmCannonOutOnAVerticalLadder_Frame0.gfx")
};

static const u8 sSamusGfx_Top_Left_StartingToHoldYourArmCannonOutOnAVerticalLadder_Frame1[] = {
    6, 4,
    _INCBIN_U8("data/samus/gfx/Top_Left_StartingToHoldYourArmCannonOutOnAVerticalLadder_Frame1.gfx")
};

static const u8 sSamusGfx_Bottom_Left_StartingToHoldYourArmCannonOutOnAVerticalLadder_Frame1[] = {
    2, 2,
    _INCBIN_U8("data/samus/gfx/Bottom_Left_StartingToHoldYourArmCannonOutOnAVerticalLadder_Frame1.gfx")
};

static const u8 sSamusGfx_Top_Left_DiagonalUp_HoldingYourArmCannonOutOnAVerticalLadder_Frame0[] = {
    5, 2,
    _INCBIN_U8("data/samus/gfx/Top_Left_DiagonalUp_HoldingYourArmCannonOutOnAVerticalLadder_Frame0.gfx")
};

static const u8 sSamusGfx_Bottom_Left_DiagonalUp_HoldingYourArmCannonOutOnAVerticalLadder_Frame0[] = {
    2, 2,
    _INCBIN_U8("data/samus/gfx/Bottom_Left_DiagonalUp_HoldingYourArmCannonOutOnAVerticalLadder_Frame0.gfx")
};

static const u8 sSamusGfx_Top_Left_DiagonalUp_ShootingOnVerticalLadder_Frame0[] = {
    5, 2,
    _INCBIN_U8("data/samus/gfx/Top_Left_DiagonalUp_ShootingOnVerticalLadder_Frame0.gfx")
};

static const u8 sSamusGfx_Bottom_Left_DiagonalUp_ShootingOnVerticalLadder_Frame0[] = {
    2, 2,
    _INCBIN_U8("data/samus/gfx/Bottom_Left_DiagonalUp_ShootingOnVerticalLadder_Frame0.gfx")
};

static const u8 sSamusGfx_Top_Left_HoldingYourArmCannonOutOnAVerticalLadder_Frame0[] = {
    5, 3,
    _INCBIN_U8("data/samus/gfx/Top_Left_HoldingYourArmCannonOutOnAVerticalLadder_Frame0.gfx")
};

static const u8 sSamusGfx_Top_Left_ShootingOnVerticalLadder_Frame0[] = {
    5, 3,
    _INCBIN_U8("data/samus/gfx/Top_Left_ShootingOnVerticalLadder_Frame0.gfx")
};

static const u8 sSamusGfx_Top_Left_DiagonalDown_HoldingYourArmCannonOutOnAVerticalLadder_Frame0[] = {
    5, 2,
    _INCBIN_U8("data/samus/gfx/Top_Left_DiagonalDown_HoldingYourArmCannonOutOnAVerticalLadder_Frame0.gfx")
};

static const u8 sSamusGfx_Top_Left_DiagonalDown_ShootingOnVerticalLadder_Frame0[] = {
    5, 2,
    _INCBIN_U8("data/samus/gfx/Top_Left_DiagonalDown_ShootingOnVerticalLadder_Frame0.gfx")
};

static const u8 sSamusGfx_Top_Right_StartingToHoldYourArmCannonOutOnAVerticalLadder_Frame0[] = {
    5, 3,
    _INCBIN_U8("data/samus/gfx/Top_Right_StartingToHoldYourArmCannonOutOnAVerticalLadder_Frame0.gfx")
};

static const u8 sSamusGfx_Bottom_Right_StartingToHoldYourArmCannonOutOnAVerticalLadder_Frame0[] = {
    2, 2,
    _INCBIN_U8("data/samus/gfx/Bottom_Right_StartingToHoldYourArmCannonOutOnAVerticalLadder_Frame0.gfx")
};

static const u8 sSamusGfx_Top_Right_StartingToHoldYourArmCannonOutOnAVerticalLadder_Frame1[] = {
    4, 2,
    _INCBIN_U8("data/samus/gfx/Top_Right_StartingToHoldYourArmCannonOutOnAVerticalLadder_Frame1.gfx")
};

static const u8 sSamusGfx_Bottom_Right_StartingToHoldYourArmCannonOutOnAVerticalLadder_Frame1[] = {
    2, 2,
    _INCBIN_U8("data/samus/gfx/Bottom_Right_StartingToHoldYourArmCannonOutOnAVerticalLadder_Frame1.gfx")
};

static const u8 sSamusGfx_Top_Right_DiagonalUp_HoldingYourArmCannonOutOnAVerticalLadder_Frame0[] = {
    4, 2,
    _INCBIN_U8("data/samus/gfx/Top_Right_DiagonalUp_HoldingYourArmCannonOutOnAVerticalLadder_Frame0.gfx")
};

static const u8 sSamusGfx_Bottom_Right_DiagonalUp_HoldingYourArmCannonOutOnAVerticalLadder_Frame0[] = {
    2, 2,
    _INCBIN_U8("data/samus/gfx/Bottom_Right_DiagonalUp_HoldingYourArmCannonOutOnAVerticalLadder_Frame0.gfx")
};

static const u8 sSamusGfx_Top_Right_DiagonalUp_ShootingOnVerticalLadder_Frame0[] = {
    4, 2,
    _INCBIN_U8("data/samus/gfx/Top_Right_DiagonalUp_ShootingOnVerticalLadder_Frame0.gfx")
};

static const u8 sSamusGfx_Bottom_Right_DiagonalUp_ShootingOnVerticalLadder_Frame0[] = {
    2, 2,
    _INCBIN_U8("data/samus/gfx/Bottom_Right_DiagonalUp_ShootingOnVerticalLadder_Frame0.gfx")
};

static const u8 sSamusGfx_Top_Right_HoldingYourArmCannonOutOnAVerticalLadder_Frame0[] = {
    4, 2,
    _INCBIN_U8("data/samus/gfx/Top_Right_HoldingYourArmCannonOutOnAVerticalLadder_Frame0.gfx")
};

static const u8 sSamusGfx_Top_Right_ShootingOnVerticalLadder_Frame0[] = {
    4, 2,
    _INCBIN_U8("data/samus/gfx/Top_Right_ShootingOnVerticalLadder_Frame0.gfx")
};

static const u8 sSamusGfx_Top_Right_DiagonalDown_HoldingYourArmCannonOutOnAVerticalLadder_Frame0[] = {
    4, 3,
    _INCBIN_U8("data/samus/gfx/Top_Right_DiagonalDown_HoldingYourArmCannonOutOnAVerticalLadder_Frame0.gfx")
};

static const u8 sSamusGfx_Top_Right_DiagonalDown_ShootingOnVerticalLadder_Frame0[] = {
    4, 3,
    _INCBIN_U8("data/samus/gfx/Top_Right_DiagonalDown_ShootingOnVerticalLadder_Frame0.gfx")
};

static const u8 sSamusGfx_Top_Left_StartingWallJump_Frame0[] = {
    7, 7,
    _INCBIN_U8("data/samus/gfx/Top_Left_StartingWallJump_Frame0.gfx")
};

static const u8 sSamusGfx_Top_Left_StartingWallJump_Frame1[] = {
    6, 3,
    _INCBIN_U8("data/samus/gfx/Top_Left_StartingWallJump_Frame1.gfx")
};

static const u8 sSamusGfx_Top_Right_StartingWallJump_Frame0[] = {
    7, 7,
    _INCBIN_U8("data/samus/gfx/Top_Right_StartingWallJump_Frame0.gfx")
};

static const u8 sSamusGfx_Top_Right_StartingWallJump_Frame1[] = {
    6, 3,
    _INCBIN_U8("data/samus/gfx/Top_Right_StartingWallJump_Frame1.gfx")
};

static const u8 sSamusGfx_Top_Left_HangingOnLedge_Frame2[] = {
    4, 4,
    _INCBIN_U8("data/samus/gfx/Top_Left_HangingOnLedge_Frame2.gfx")
};

static const u8 sSamusGfx_Bottom_HangingOnLedge_Frame2[] = {
    4, 2,
    _INCBIN_U8("data/samus/gfx/Bottom_HangingOnLedge_Frame2.gfx")
};

static const u8 sSamusGfx_Top_Left_HangingOnLedge_Frame3[] = {
    4, 4,
    _INCBIN_U8("data/samus/gfx/Top_Left_HangingOnLedge_Frame3.gfx")
};

static const u8 sSamusGfx_Bottom_HangingOnLedge_Frame3[] = {
    4, 2,
    _INCBIN_U8("data/samus/gfx/Bottom_HangingOnLedge_Frame3.gfx")
};

static const u8 sSamusGfx_Top_Left_HangingOnLedge_Frame1[] = {
    4, 4,
    _INCBIN_U8("data/samus/gfx/Top_Left_HangingOnLedge_Frame1.gfx")
};

static const u8 sSamusGfx_Bottom_HangingOnLedge_Frame1[] = {
    3, 2,
    _INCBIN_U8("data/samus/gfx/Bottom_HangingOnLedge_Frame1.gfx")
};

static const u8 sSamusGfx_Top_Left_HangingOnLedge_Frame5[] = {
    4, 4,
    _INCBIN_U8("data/samus/gfx/Top_Left_HangingOnLedge_Frame5.gfx")
};

static const u8 sSamusGfx_Bottom_HangingOnLedge_Frame5[] = {
    3, 2,
    _INCBIN_U8("data/samus/gfx/Bottom_HangingOnLedge_Frame5.gfx")
};

static const u8 sSamusGfx_Top_Left_HangingOnLedge_Frame0[] = {
    4, 4,
    _INCBIN_U8("data/samus/gfx/Top_Left_HangingOnLedge_Frame0.gfx")
};

static const u8 sSamusGfx_Bottom_HangingOnLedge_Frame0[] = {
    3, 2,
    _INCBIN_U8("data/samus/gfx/Bottom_HangingOnLedge_Frame0.gfx")
};

static const u8 sSamusGfx_Top_Left_PullingYourselfUpFromHanging_Frame1[] = {
    4, 4,
    _INCBIN_U8("data/samus/gfx/Top_Left_PullingYourselfUpFromHanging_Frame1.gfx")
};

static const u8 sSamusGfx_Bottom_PullingYourselfUpFromHanging_Frame1[] = {
    4, 2,
    _INCBIN_U8("data/samus/gfx/Bottom_PullingYourselfUpFromHanging_Frame1.gfx")
};

static const u8 sSamusGfx_Top_Left_PullingYourselfUpFromHanging_Frame2[] = {
    4, 4,
    _INCBIN_U8("data/samus/gfx/Top_Left_PullingYourselfUpFromHanging_Frame2.gfx")
};

static const u8 sSamusGfx_Bottom_PullingYourselfUpFromHanging_Frame2[] = {
    4, 2,
    _INCBIN_U8("data/samus/gfx/Bottom_PullingYourselfUpFromHanging_Frame2.gfx")
};

static const u8 sSamusGfx_Top_Left_PullingYourselfForwardFromHanging_Frame0[] = {
    4, 4,
    _INCBIN_U8("data/samus/gfx/Top_Left_PullingYourselfForwardFromHanging_Frame0.gfx")
};

static const u8 sSamusGfx_Bottom_PullingYourselfForwardFromHanging_Frame0[] = {
    4, 2,
    _INCBIN_U8("data/samus/gfx/Bottom_PullingYourselfForwardFromHanging_Frame0.gfx")
};

static const u8 sSamusGfx_Top_Left_PullingYourselfForwardFromHanging_Frame1[] = {
    3, 3,
    _INCBIN_U8("data/samus/gfx/Top_Left_PullingYourselfForwardFromHanging_Frame1.gfx")
};

static const u8 sSamusGfx_Bottom_PullingYourselfForwardFromHanging_Frame1[] = {
    3, 2,
    _INCBIN_U8("data/samus/gfx/Bottom_PullingYourselfForwardFromHanging_Frame1.gfx")
};

static const u8 sSamusGfx_Top_Left_PullingYourselfForwardFromHanging_Frame2[] = {
    4, 2,
    _INCBIN_U8("data/samus/gfx/Top_Left_PullingYourselfForwardFromHanging_Frame2.gfx")
};

static const u8 sSamusGfx_Bottom_PullingYourselfForwardFromHanging_Frame2[] = {
    4, 2,
    _INCBIN_U8("data/samus/gfx/Bottom_PullingYourselfForwardFromHanging_Frame2.gfx")
};

static const u8 sSamusGfx_Top_Left_PullingYourselfForwardFromHanging_Frame3[] = {
    4, 4,
    _INCBIN_U8("data/samus/gfx/Top_Left_PullingYourselfForwardFromHanging_Frame3.gfx")
};

static const u8 sSamusGfx_Bottom_PullingYourselfForwardFromHanging_Frame3[] = {
    4, 2,
    _INCBIN_U8("data/samus/gfx/Bottom_PullingYourselfForwardFromHanging_Frame3.gfx")
};

static const u8 sSamusGfx_Top_Right_HangingOnLedge_Frame2[] = {
    4, 4,
    _INCBIN_U8("data/samus/gfx/Top_Right_HangingOnLedge_Frame2.gfx")
};

static const u8 sSamusGfx_Top_Right_HangingOnLedge_Frame3[] = {
    4, 4,
    _INCBIN_U8("data/samus/gfx/Top_Right_HangingOnLedge_Frame3.gfx")
};

static const u8 sSamusGfx_Top_Right_HangingOnLedge_Frame1[] = {
    4, 4,
    _INCBIN_U8("data/samus/gfx/Top_Right_HangingOnLedge_Frame1.gfx")
};

static const u8 sSamusGfx_Top_Right_HangingOnLedge_Frame5[] = {
    4, 4,
    _INCBIN_U8("data/samus/gfx/Top_Right_HangingOnLedge_Frame5.gfx")
};

static const u8 sSamusGfx_Top_Right_HangingOnLedge_Frame0[] = {
    4, 4,
    _INCBIN_U8("data/samus/gfx/Top_Right_HangingOnLedge_Frame0.gfx")
};

static const u8 sSamusGfx_Top_Right_PullingYourselfUpFromHanging_Frame1[] = {
    4, 4,
    _INCBIN_U8("data/samus/gfx/Top_Right_PullingYourselfUpFromHanging_Frame1.gfx")
};

static const u8 sSamusGfx_Top_Right_PullingYourselfUpFromHanging_Frame2[] = {
    4, 4,
    _INCBIN_U8("data/samus/gfx/Top_Right_PullingYourselfUpFromHanging_Frame2.gfx")
};

static const u8 sSamusGfx_Top_Right_PullingYourselfForwardFromHanging_Frame0[] = {
    3, 3,
    _INCBIN_U8("data/samus/gfx/Top_Right_PullingYourselfForwardFromHanging_Frame0.gfx")
};

static const u8 sSamusGfx_Top_Right_PullingYourselfForwardFromHanging_Frame1[] = {
    3, 3,
    _INCBIN_U8("data/samus/gfx/Top_Right_PullingYourselfForwardFromHanging_Frame1.gfx")
};

static const u8 sSamusGfx_Top_Right_PullingYourselfForwardFromHanging_Frame2[] = {
    4, 4,
    _INCBIN_U8("data/samus/gfx/Top_Right_PullingYourselfForwardFromHanging_Frame2.gfx")
};

static const u8 sSamusGfx_Bottom_Right_PullingYourselfForwardFromHanging_Frame2[] = {
    4, 2,
    _INCBIN_U8("data/samus/gfx/Bottom_Right_PullingYourselfForwardFromHanging_Frame2.gfx")
};

static const u8 sSamusGfx_Top_Right_PullingYourselfForwardFromHanging_Frame3[] = {
    4, 4,
    _INCBIN_U8("data/samus/gfx/Top_Right_PullingYourselfForwardFromHanging_Frame3.gfx")
};

static const u8 sSamusGfx_Top_Left_PullingYourselfIntoMorphBallTunnel_Frame0[] = {
    7, 3,
    _INCBIN_U8("data/samus/gfx/Top_Left_PullingYourselfIntoMorphBallTunnel_Frame0.gfx")
};

static const u8 sSamusGfx_Top_Right_PullingYourselfIntoMorphBallTunnel_Frame0[] = {
    7, 4,
    _INCBIN_U8("data/samus/gfx/Top_Right_PullingYourselfIntoMorphBallTunnel_Frame0.gfx")
};

static const u8 sSamusGfx_Top_2d67bc_Frame0[] = {
    4, 4,
    _INCBIN_U8("data/samus/gfx/Top_2d67bc_Frame0.gfx")
};

static const u8 sSamusGfx_Bottom_2d67bc_Frame0[] = {
    3, 2,
    _INCBIN_U8("data/samus/gfx/Bottom_2d67bc_Frame0.gfx")
};

static const u8 sSamusGfx_Top_2d67bc_Frame1[] = {
    4, 4,
    _INCBIN_U8("data/samus/gfx/Top_2d67bc_Frame1.gfx")
};

static const u8 sSamusGfx_Bottom_2d67bc_Frame1[] = {
    3, 2,
    _INCBIN_U8("data/samus/gfx/Bottom_2d67bc_Frame1.gfx")
};

static const u8 sSamusGfx_Top_2d67bc_Frame2[] = {
    4, 4,
    _INCBIN_U8("data/samus/gfx/Top_2d67bc_Frame2.gfx")
};

static const u8 sSamusGfx_Bottom_2d67bc_Frame2[] = {
    3, 2,
    _INCBIN_U8("data/samus/gfx/Bottom_2d67bc_Frame2.gfx")
};

static const u8 sSamusGfx_Top_Left_MovingOnHorizontalLadder_Frame0[] = {
    5, 5,
    _INCBIN_U8("data/samus/gfx/Top_Left_MovingOnHorizontalLadder_Frame0.gfx")
};

static const u8 sSamusGfx_Bottom_MovingOnHorizontalLadder_Frame0[] = {
    4, 2,
    _INCBIN_U8("data/samus/gfx/Bottom_MovingOnHorizontalLadder_Frame0.gfx")
};

static const u8 sSamusGfx_Top_Left_MovingOnHorizontalLadder_Frame1[] = {
    5, 2,
    _INCBIN_U8("data/samus/gfx/Top_Left_MovingOnHorizontalLadder_Frame1.gfx")
};

static const u8 sSamusGfx_Bottom_MovingOnHorizontalLadder_Frame1[] = {
    4, 2,
    _INCBIN_U8("data/samus/gfx/Bottom_MovingOnHorizontalLadder_Frame1.gfx")
};

static const u8 sSamusGfx_Top_Left_MovingOnHorizontalLadder_Frame2[] = {
    4, 4,
    _INCBIN_U8("data/samus/gfx/Top_Left_MovingOnHorizontalLadder_Frame2.gfx")
};

static const u8 sSamusGfx_Bottom_MovingOnHorizontalLadder_Frame2[] = {
    4, 2,
    _INCBIN_U8("data/samus/gfx/Bottom_MovingOnHorizontalLadder_Frame2.gfx")
};

static const u8 sSamusGfx_Top_Left_MovingOnHorizontalLadder_Frame3[] = {
    5, 2,
    _INCBIN_U8("data/samus/gfx/Top_Left_MovingOnHorizontalLadder_Frame3.gfx")
};

static const u8 sSamusGfx_Bottom_MovingOnHorizontalLadder_Frame3[] = {
    4, 2,
    _INCBIN_U8("data/samus/gfx/Bottom_MovingOnHorizontalLadder_Frame3.gfx")
};

static const u8 sSamusGfx_Top_Left_MovingOnHorizontalLadder_Frame4[] = {
    5, 3,
    _INCBIN_U8("data/samus/gfx/Top_Left_MovingOnHorizontalLadder_Frame4.gfx")
};

static const u8 sSamusGfx_Bottom_MovingOnHorizontalLadder_Frame4[] = {
    3, 2,
    _INCBIN_U8("data/samus/gfx/Bottom_MovingOnHorizontalLadder_Frame4.gfx")
};

static const u8 sSamusGfx_Top_Left_MovingOnHorizontalLadder_Frame5[] = {
    5, 4,
    _INCBIN_U8("data/samus/gfx/Top_Left_MovingOnHorizontalLadder_Frame5.gfx")
};

static const u8 sSamusGfx_Bottom_MovingOnHorizontalLadder_Frame5[] = {
    4, 2,
    _INCBIN_U8("data/samus/gfx/Bottom_MovingOnHorizontalLadder_Frame5.gfx")
};

static const u8 sSamusGfx_Top_Left_MovingOnHorizontalLadder_Frame6[] = {
    4, 3,
    _INCBIN_U8("data/samus/gfx/Top_Left_MovingOnHorizontalLadder_Frame6.gfx")
};

static const u8 sSamusGfx_Bottom_MovingOnHorizontalLadder_Frame6[] = {
    4, 2,
    _INCBIN_U8("data/samus/gfx/Bottom_MovingOnHorizontalLadder_Frame6.gfx")
};

static const u8 sSamusGfx_Top_Left_MovingOnHorizontalLadder_Frame7[] = {
    4, 3,
    _INCBIN_U8("data/samus/gfx/Top_Left_MovingOnHorizontalLadder_Frame7.gfx")
};

static const u8 sSamusGfx_Bottom_MovingOnHorizontalLadder_Frame7[] = {
    4, 2,
    _INCBIN_U8("data/samus/gfx/Bottom_MovingOnHorizontalLadder_Frame7.gfx")
};

static const u8 sSamusGfx_Top_Left_MovingOnHorizontalLadder_Frame8[] = {
    4, 4,
    _INCBIN_U8("data/samus/gfx/Top_Left_MovingOnHorizontalLadder_Frame8.gfx")
};

static const u8 sSamusGfx_Bottom_MovingOnHorizontalLadder_Frame8[] = {
    4, 2,
    _INCBIN_U8("data/samus/gfx/Bottom_MovingOnHorizontalLadder_Frame8.gfx")
};

static const u8 sSamusGfx_Top_Left_TurningAroundOnHorizontalLadder_Frame0[] = {
    4, 2,
    _INCBIN_U8("data/samus/gfx/Top_Left_TurningAroundOnHorizontalLadder_Frame0.gfx")
};

static const u8 sSamusGfx_Bottom_TurningAroundOnHorizontalLadder_Frame0[] = {
    3, 2,
    _INCBIN_U8("data/samus/gfx/Bottom_TurningAroundOnHorizontalLadder_Frame0.gfx")
};

static const u8 sSamusGfx_Top_Left_TurningAroundOnHorizontalLadder_Frame1[] = {
    4, 2,
    _INCBIN_U8("data/samus/gfx/Top_Left_TurningAroundOnHorizontalLadder_Frame1.gfx")
};

static const u8 sSamusGfx_Top_2d691c_Frame0[] = {
    4, 4,
    _INCBIN_U8("data/samus/gfx/Top_2d691c_Frame0.gfx")
};

static const u8 sSamusGfx_Top_2d691c_Frame1[] = {
    4, 4,
    _INCBIN_U8("data/samus/gfx/Top_2d691c_Frame1.gfx")
};

static const u8 sSamusGfx_Top_2d691c_Frame2[] = {
    4, 4,
    _INCBIN_U8("data/samus/gfx/Top_2d691c_Frame2.gfx")
};

static const u8 sSamusGfx_Top_Right_MovingOnHorizontalLadder_Frame0[] = {
    5, 5,
    _INCBIN_U8("data/samus/gfx/Top_Right_MovingOnHorizontalLadder_Frame0.gfx")
};

static const u8 sSamusGfx_Top_Right_MovingOnHorizontalLadder_Frame1[] = {
    5, 5,
    _INCBIN_U8("data/samus/gfx/Top_Right_MovingOnHorizontalLadder_Frame1.gfx")
};

static const u8 sSamusGfx_Top_Right_MovingOnHorizontalLadder_Frame2[] = {
    5, 5,
    _INCBIN_U8("data/samus/gfx/Top_Right_MovingOnHorizontalLadder_Frame2.gfx")
};

static const u8 sSamusGfx_Top_Right_MovingOnHorizontalLadder_Frame3[] = {
    4, 4,
    _INCBIN_U8("data/samus/gfx/Top_Right_MovingOnHorizontalLadder_Frame3.gfx")
};

static const u8 sSamusGfx_Top_Right_MovingOnHorizontalLadder_Frame4[] = {
    4, 4,
    _INCBIN_U8("data/samus/gfx/Top_Right_MovingOnHorizontalLadder_Frame4.gfx")
};

static const u8 sSamusGfx_Top_Right_MovingOnHorizontalLadder_Frame5[] = {
    5, 5,
    _INCBIN_U8("data/samus/gfx/Top_Right_MovingOnHorizontalLadder_Frame5.gfx")
};

static const u8 sSamusGfx_Top_Right_MovingOnHorizontalLadder_Frame6[] = {
    5, 3,
    _INCBIN_U8("data/samus/gfx/Top_Right_MovingOnHorizontalLadder_Frame6.gfx")
};

static const u8 sSamusGfx_Top_Right_MovingOnHorizontalLadder_Frame7[] = {
    4, 4,
    _INCBIN_U8("data/samus/gfx/Top_Right_MovingOnHorizontalLadder_Frame7.gfx")
};

static const u8 sSamusGfx_Top_Right_MovingOnHorizontalLadder_Frame8[] = {
    5, 3,
    _INCBIN_U8("data/samus/gfx/Top_Right_MovingOnHorizontalLadder_Frame8.gfx")
};

static const u8 sSamusGfx_Top_Left_HangingOnHorizontalLadder_Frame0[] = {
    3, 2,
    _INCBIN_U8("data/samus/gfx/Top_Left_HangingOnHorizontalLadder_Frame0.gfx")
};

static const u8 sSamusGfx_Bottom_HangingOnHorizontalLadder_Frame0[] = {
    3, 2,
    _INCBIN_U8("data/samus/gfx/Bottom_HangingOnHorizontalLadder_Frame0.gfx")
};

static const u8 sSamusGfx_Top_Left_ShootingOnHorizontalLadder_Frame0[] = {
    3, 3,
    _INCBIN_U8("data/samus/gfx/Top_Left_ShootingOnHorizontalLadder_Frame0.gfx")
};

static const u8 sSamusGfx_Bottom_ShootingOnHorizontalLadder_Frame0[] = {
    4, 2,
    _INCBIN_U8("data/samus/gfx/Bottom_ShootingOnHorizontalLadder_Frame0.gfx")
};

static const u8 sSamusGfx_Top_Left_DiagonalDown_HangingOnHorizontalLadder_Frame0[] = {
    3, 3,
    _INCBIN_U8("data/samus/gfx/Top_Left_DiagonalDown_HangingOnHorizontalLadder_Frame0.gfx")
};

static const u8 sSamusGfx_Bottom_DiagonalDown_HangingOnHorizontalLadder_Frame0[] = {
    4, 2,
    _INCBIN_U8("data/samus/gfx/Bottom_DiagonalDown_HangingOnHorizontalLadder_Frame0.gfx")
};

static const u8 sSamusGfx_Top_Left_DiagonalDown_ShootingOnHorizontalLadder_Frame0[] = {
    3, 3,
    _INCBIN_U8("data/samus/gfx/Top_Left_DiagonalDown_ShootingOnHorizontalLadder_Frame0.gfx")
};

static const u8 sSamusGfx_Bottom_DiagonalDown_ShootingOnHorizontalLadder_Frame0[] = {
    4, 2,
    _INCBIN_U8("data/samus/gfx/Bottom_DiagonalDown_ShootingOnHorizontalLadder_Frame0.gfx")
};

static const u8 sSamusGfx_Top_Left_Down_DelayAfterShootingOnHorizontalLadder_Frame0[] = {
    3, 2,
    _INCBIN_U8("data/samus/gfx/Top_Left_Down_DelayAfterShootingOnHorizontalLadder_Frame0.gfx")
};

static const u8 sSamusGfx_Bottom_Down_DelayAfterShootingOnHorizontalLadder_Frame0[] = {
    3, 2,
    _INCBIN_U8("data/samus/gfx/Bottom_Down_DelayAfterShootingOnHorizontalLadder_Frame0.gfx")
};

static const u8 sSamusGfx_Top_Left_Down_ShootingOnHorizontalLadder_Frame0[] = {
    3, 3,
    _INCBIN_U8("data/samus/gfx/Top_Left_Down_ShootingOnHorizontalLadder_Frame0.gfx")
};

static const u8 sSamusGfx_Bottom_Down_ShootingOnHorizontalLadder_Frame0[] = {
    3, 2,
    _INCBIN_U8("data/samus/gfx/Bottom_Down_ShootingOnHorizontalLadder_Frame0.gfx")
};

static const u8 sSamusGfx_Top_Right_HangingOnHorizontalLadder_Frame0[] = {
    4, 4,
    _INCBIN_U8("data/samus/gfx/Top_Right_HangingOnHorizontalLadder_Frame0.gfx")
};

static const u8 sSamusGfx_Top_Right_ShootingOnHorizontalLadder_Frame0[] = {
    4, 4,
    _INCBIN_U8("data/samus/gfx/Top_Right_ShootingOnHorizontalLadder_Frame0.gfx")
};

static const u8 sSamusGfx_Top_Right_DiagonalDown_HangingOnHorizontalLadder_Frame0[] = {
    5, 5,
    _INCBIN_U8("data/samus/gfx/Top_Right_DiagonalDown_HangingOnHorizontalLadder_Frame0.gfx")
};

static const u8 sSamusGfx_Top_Right_DiagonalDown_ShootingOnHorizontalLadder_Frame0[] = {
    5, 5,
    _INCBIN_U8("data/samus/gfx/Top_Right_DiagonalDown_ShootingOnHorizontalLadder_Frame0.gfx")
};

static const u8 sSamusGfx_Top_Right_Down_DelayAfterShootingOnHorizontalLadder_Frame0[] = {
    3, 2,
    _INCBIN_U8("data/samus/gfx/Top_Right_Down_DelayAfterShootingOnHorizontalLadder_Frame0.gfx")
};

static const u8 sSamusGfx_Top_Right_Down_ShootingOnHorizontalLadder_Frame0[] = {
    3, 3,
    _INCBIN_U8("data/samus/gfx/Top_Right_Down_ShootingOnHorizontalLadder_Frame0.gfx")
};

static const u8 sSamusGfx_Top_2d6c5c_Frame0[] = {
    5, 4,
    _INCBIN_U8("data/samus/gfx/Top_2d6c5c_Frame0.gfx")
};

static const u8 sSamusGfx_Top_2d6c5c_Frame4[] = {
    5, 4,
    _INCBIN_U8("data/samus/gfx/Top_2d6c5c_Frame4.gfx")
};

static const u8 sSamusGfx_Top_2d6c5c_Frame5[] = {
    5, 4,
    _INCBIN_U8("data/samus/gfx/Top_2d6c5c_Frame5.gfx")
};

static const u8 sSamusGfx_Top_2d6cdc_Frame0[] = {
    5, 4,
    _INCBIN_U8("data/samus/gfx/Top_2d6cdc_Frame0.gfx")
};

static const u8 sSamusGfx_Top_2d6cdc_Frame4[] = {
    5, 4,
    _INCBIN_U8("data/samus/gfx/Top_2d6cdc_Frame4.gfx")
};

static const u8 sSamusGfx_Top_2d6cdc_Frame5[] = {
    5, 4,
    _INCBIN_U8("data/samus/gfx/Top_2d6cdc_Frame5.gfx")
};

static const u8 sSamusGfx_Top_Right_Up_HoldingYourArmCannonOutOnAVerticalLadder_Frame0[] = {
    3, 2,
    _INCBIN_U8("data/samus/gfx/Top_Right_Up_HoldingYourArmCannonOutOnAVerticalLadder_Frame0.gfx")
};

static const u8 sSamusGfx_Bottom_Right_Up_HoldingYourArmCannonOutOnAVerticalLadder_Frame0[] = {
    3, 2,
    _INCBIN_U8("data/samus/gfx/Bottom_Right_Up_HoldingYourArmCannonOutOnAVerticalLadder_Frame0.gfx")
};

static const u8 sSamusGfx_Top_Right_Up_ShootingOnVerticalLadder_Frame0[] = {
    3, 2,
    _INCBIN_U8("data/samus/gfx/Top_Right_Up_ShootingOnVerticalLadder_Frame0.gfx")
};

static const u8 sSamusGfx_Bottom_Right_Up_ShootingOnVerticalLadder_Frame0[] = {
    3, 2,
    _INCBIN_U8("data/samus/gfx/Bottom_Right_Up_ShootingOnVerticalLadder_Frame0.gfx")
};

static const u8 sSamusGfx_Top_Right_Down_HoldingYourArmCannonOutOnAVerticalLadder_Frame0[] = {
    3, 2,
    _INCBIN_U8("data/samus/gfx/Top_Right_Down_HoldingYourArmCannonOutOnAVerticalLadder_Frame0.gfx")
};

static const u8 sSamusGfx_Bottom_Right_Down_HoldingYourArmCannonOutOnAVerticalLadder_Frame0[] = {
    2, 2,
    _INCBIN_U8("data/samus/gfx/Bottom_Right_Down_HoldingYourArmCannonOutOnAVerticalLadder_Frame0.gfx")
};

static const u8 sSamusGfx_Top_Right_Down_ShootingOnVerticalLadder_Frame0[] = {
    3, 2,
    _INCBIN_U8("data/samus/gfx/Top_Right_Down_ShootingOnVerticalLadder_Frame0.gfx")
};

static const u8 sSamusGfx_Bottom_Right_Down_ShootingOnVerticalLadder_Frame0[] = {
    2, 2,
    _INCBIN_U8("data/samus/gfx/Bottom_Right_Down_ShootingOnVerticalLadder_Frame0.gfx")
};

static const u8 sSamusGfx_Top_Left_Up_HoldingYourArmCannonOutOnAVerticalLadder_Frame0[] = {
    3, 2,
    _INCBIN_U8("data/samus/gfx/Top_Left_Up_HoldingYourArmCannonOutOnAVerticalLadder_Frame0.gfx")
};

static const u8 sSamusGfx_Bottom_Left_Up_HoldingYourArmCannonOutOnAVerticalLadder_Frame0[] = {
    3, 2,
    _INCBIN_U8("data/samus/gfx/Bottom_Left_Up_HoldingYourArmCannonOutOnAVerticalLadder_Frame0.gfx")
};

static const u8 sSamusGfx_Top_Left_Up_ShootingOnVerticalLadder_Frame0[] = {
    3, 2,
    _INCBIN_U8("data/samus/gfx/Top_Left_Up_ShootingOnVerticalLadder_Frame0.gfx")
};

static const u8 sSamusGfx_Bottom_Left_Up_ShootingOnVerticalLadder_Frame0[] = {
    3, 2,
    _INCBIN_U8("data/samus/gfx/Bottom_Left_Up_ShootingOnVerticalLadder_Frame0.gfx")
};

static const u8 sSamusGfx_Top_Left_Down_HoldingYourArmCannonOutOnAVerticalLadder_Frame0[] = {
    3, 2,
    _INCBIN_U8("data/samus/gfx/Top_Left_Down_HoldingYourArmCannonOutOnAVerticalLadder_Frame0.gfx")
};

static const u8 sSamusGfx_Bottom_Left_Down_HoldingYourArmCannonOutOnAVerticalLadder_Frame0[] = {
    3, 2,
    _INCBIN_U8("data/samus/gfx/Bottom_Left_Down_HoldingYourArmCannonOutOnAVerticalLadder_Frame0.gfx")
};

static const u8 sSamusGfx_Top_Left_Down_ShootingOnVerticalLadder_Frame0[] = {
    4, 2,
    _INCBIN_U8("data/samus/gfx/Top_Left_Down_ShootingOnVerticalLadder_Frame0.gfx")
};

static const u8 sSamusGfx_Bottom_Left_Down_ShootingOnVerticalLadder_Frame0[] = {
    2, 2,
    _INCBIN_U8("data/samus/gfx/Bottom_Left_Down_ShootingOnVerticalLadder_Frame0.gfx")
};

static const u8 sSamusGfx_Top_Left_ReadyToJump_HangingOnLedge_Frame0[] = {
    3, 3,
    _INCBIN_U8("data/samus/gfx/Top_Left_ReadyToJump_HangingOnLedge_Frame0.gfx")
};

static const u8 sSamusGfx_Bottom_Left_ReadyToJump_HangingOnLedge_Frame0[] = {
    4, 2,
    _INCBIN_U8("data/samus/gfx/Bottom_Left_ReadyToJump_HangingOnLedge_Frame0.gfx")
};

static const u8 sSamusGfx_Top_Right_ReadyToJump_HangingOnLedge_Frame0[] = {
    3, 3,
    _INCBIN_U8("data/samus/gfx/Top_Right_ReadyToJump_HangingOnLedge_Frame0.gfx")
};

static const u8 sSamusGfx_Bottom_Right_ReadyToJump_HangingOnLedge_Frame0[] = {
    4, 2,
    _INCBIN_U8("data/samus/gfx/Bottom_Right_ReadyToJump_HangingOnLedge_Frame0.gfx")
};

static const u16 sSamusOam_Left_HangingFromVerticalLadder_Frame3[] = {
    5,
    OAM_ENTRY(-9, -32, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-5, -34, OAM_DIMS_16x16, OAM_X_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-8, -21, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-8, -5, OAM_DIMS_16x8, OAM_NO_FLIP, 0x16, 0, 0),
    OAM_ENTRY(-12, -40, OAM_DIMS_16x16, OAM_NO_FLIP, 0x4, 0, 0)
};

static const u16 sSamusOam_Left_HangingFromVerticalLadder_Frame4[] = {
    5,
    OAM_ENTRY(-9, -36, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-5, -36, OAM_DIMS_16x16, OAM_X_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-8, -23, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-8, -7, OAM_DIMS_16x8, OAM_NO_FLIP, 0x16, 0, 0),
    OAM_ENTRY(-12, -37, OAM_DIMS_16x16, OAM_NO_FLIP, 0x4, 0, 0)
};

static const u16 sSamusOam_Left_HangingFromVerticalLadder_Frame5[] = {
    5,
    OAM_ENTRY(-10, -40, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-6, -36, OAM_DIMS_16x16, OAM_X_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-8, -23, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-8, -7, OAM_DIMS_16x8, OAM_NO_FLIP, 0x16, 0, 0),
    OAM_ENTRY(-11, -33, OAM_DIMS_16x16, OAM_NO_FLIP, 0x4, 0, 0)
};

static const u16 sSamusOam_Left_HangingFromVerticalLadder_Frame0[] = {
    5,
    OAM_ENTRY(-10, -41, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-6, -35, OAM_DIMS_16x16, OAM_X_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-9, -22, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-9, -6, OAM_DIMS_16x8, OAM_NO_FLIP, 0x16, 0, 0),
    OAM_ENTRY(-10, -32, OAM_DIMS_16x16, OAM_NO_FLIP, 0x4, 0, 0)
};

static const u16 sSamusOam_Left_HangingFromVerticalLadder_Frame1[] = {
    5,
    OAM_ENTRY(-11, -34, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-6, -34, OAM_DIMS_16x16, OAM_X_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-8, -21, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-8, -5, OAM_DIMS_16x8, OAM_NO_FLIP, 0x16, 0, 0),
    OAM_ENTRY(-10, -35, OAM_DIMS_16x16, OAM_NO_FLIP, 0x4, 0, 0)
};

static const u16 sSamusOam_Left_HangingFromVerticalLadder_Frame2[] = {
    5,
    OAM_ENTRY(-9, -33, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-7, -34, OAM_DIMS_16x16, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-8, -21, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-8, -5, OAM_DIMS_16x8, OAM_NO_FLIP, 0x16, 0, 0),
    OAM_ENTRY(-11, -40, OAM_DIMS_16x16, OAM_NO_FLIP, 0x4, 0, 0)
};

static const u16 sSamusOam_Right_HangingFromVerticalLadder_Frame0[] = {
    5,
    OAM_ENTRY(-7, -33, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-11, -34, OAM_DIMS_16x16, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-8, -21, OAM_DIMS_16x16, OAM_X_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-8, -5, OAM_DIMS_16x8, OAM_X_FLIP, 0x16, 0, 0),
    OAM_ENTRY(-5, -40, OAM_DIMS_16x16, OAM_NO_FLIP, 0x4, 0, 0)
};

static const u16 sSamusOam_Right_HangingFromVerticalLadder_Frame1[] = {
    5,
    OAM_ENTRY(-8, -37, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-11, -36, OAM_DIMS_16x16, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-8, -23, OAM_DIMS_16x16, OAM_X_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-8, -7, OAM_DIMS_16x8, OAM_X_FLIP, 0x16, 0, 0),
    OAM_ENTRY(-6, -37, OAM_DIMS_16x16, OAM_NO_FLIP, 0x4, 0, 0)
};

static const u16 sSamusOam_Right_HangingFromVerticalLadder_Frame2[] = {
    5,
    OAM_ENTRY(-7, -41, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-10, -36, OAM_DIMS_16x16, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-8, -23, OAM_DIMS_16x16, OAM_X_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-8, -7, OAM_DIMS_16x8, OAM_X_FLIP, 0x16, 0, 0),
    OAM_ENTRY(-6, -34, OAM_DIMS_16x16, OAM_NO_FLIP, 0x4, 0, 0)
};

static const u16 sSamusOam_Right_HangingFromVerticalLadder_Frame3[] = {
    5,
    OAM_ENTRY(-6, -41, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-10, -35, OAM_DIMS_16x16, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-7, -22, OAM_DIMS_16x16, OAM_X_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-7, -6, OAM_DIMS_16x8, OAM_X_FLIP, 0x16, 0, 0),
    OAM_ENTRY(-8, -32, OAM_DIMS_16x16, OAM_NO_FLIP, 0x4, 0, 0)
};

static const u16 sSamusOam_Right_HangingFromVerticalLadder_Frame4[] = {
    5,
    OAM_ENTRY(-4, -33, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-10, -34, OAM_DIMS_16x16, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-8, -21, OAM_DIMS_16x16, OAM_X_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-8, -5, OAM_DIMS_16x8, OAM_X_FLIP, 0x16, 0, 0),
    OAM_ENTRY(-7, -34, OAM_DIMS_16x16, OAM_NO_FLIP, 0x4, 0, 0)
};

static const u16 sSamusOam_Right_HangingFromVerticalLadder_Frame5[] = {
    5,
    OAM_ENTRY(7, -31, OAM_DIMS_8x8, OAM_NO_FLIP, 0x4, 0, 0),
    OAM_ENTRY(-9, -34, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-8, -21, OAM_DIMS_16x16, OAM_X_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-8, -5, OAM_DIMS_16x8, OAM_X_FLIP, 0x16, 0, 0),
    OAM_ENTRY(-6, -36, OAM_DIMS_16x16, OAM_NO_FLIP, 0x2, 0, 0)
};

static const u16 sSamusOam_Left_StartingToHoldYourArmCannonOutOnAVerticalLadder_Frame0[] = {
    5,
    OAM_ENTRY(-7, -29, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-9, -33, OAM_DIMS_16x16, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-8, -17, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-8, -1, OAM_DIMS_16x8, OAM_NO_FLIP, 0x16, 0, 0),
    OAM_ENTRY(-6, -41, OAM_DIMS_16x16, OAM_NO_FLIP, 0x4, 0, 0)
};

static const u16 sSamusOam_Left_StartingToHoldYourArmCannonOutOnAVerticalLadder_Frame1[] = {
    4,
    OAM_ENTRY(-14, -28, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-10, -30, OAM_DIMS_16x16, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-7, -38, OAM_DIMS_16x8, OAM_NO_FLIP, 0x4, 0, 0),
    OAM_ENTRY(-8, -14, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0)
};

static const u16 sSamusOam_Left_DiagonalUp_HoldingYourArmCannonOutOnAVerticalLadder_Frame0[] = {
    4,
    OAM_ENTRY(-14, -28, OAM_DIMS_8x8, OAM_NO_FLIP, 0x4, 0, 0),
    OAM_ENTRY(-8, -30, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-7, -38, OAM_DIMS_16x8, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-8, -14, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0)
};

static const u16 sSamusOam_Left_DiagonalUp_ShootingOnVerticalLadder_Frame0[] = {
    4,
    OAM_ENTRY(-14, -27, OAM_DIMS_8x8, OAM_NO_FLIP, 0x4, 0, 0),
    OAM_ENTRY(-7, -38, OAM_DIMS_16x8, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-7, -14, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-7, -30, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0)
};

static const u16 sSamusOam_Left_HoldingYourArmCannonOutOnAVerticalLadder_Frame0[] = {
    4,
    OAM_ENTRY(-14, -31, OAM_DIMS_8x16, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-8, -30, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-8, -14, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-7, -38, OAM_DIMS_16x8, OAM_NO_FLIP, 0x3, 0, 0)
};

static const u16 sSamusOam_Left_ShootingOnVerticalLadder_Frame0[] = {
    4,
    OAM_ENTRY(-13, -31, OAM_DIMS_8x16, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-7, -30, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-7, -14, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-7, -38, OAM_DIMS_16x8, OAM_NO_FLIP, 0x3, 0, 0)
};

static const u16 sSamusOam_Left_DiagonalDown_HoldingYourArmCannonOutOnAVerticalLadder_Frame0[] = {
    4,
    OAM_ENTRY(-14, -25, OAM_DIMS_8x8, OAM_NO_FLIP, 0x4, 0, 0),
    OAM_ENTRY(-8, -14, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-8, -30, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-7, -38, OAM_DIMS_16x8, OAM_NO_FLIP, 0x2, 0, 0)
};

static const u16 sSamusOam_Left_DiagonalDown_ShootingOnVerticalLadder_Frame0[] = {
    4,
    OAM_ENTRY(-13, -26, OAM_DIMS_8x8, OAM_NO_FLIP, 0x4, 0, 0),
    OAM_ENTRY(-7, -14, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-7, -30, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-7, -38, OAM_DIMS_16x8, OAM_NO_FLIP, 0x2, 0, 0)
};

static const u16 sSamusOam_Right_StartingToHoldYourArmCannonOutOnAVerticalLadder_Frame0[] = {
    4,
    OAM_ENTRY(-9, -30, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(7, -30, OAM_DIMS_8x16, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-9, -38, OAM_DIMS_16x8, OAM_NO_FLIP, 0x3, 0, 0),
    OAM_ENTRY(-9, -14, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0)
};

static const u16 sSamusOam_Right_StartingToHoldYourArmCannonOutOnAVerticalLadder_Frame1[] = {
    4,
    OAM_ENTRY(-7, -30, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(9, -22, OAM_DIMS_8x8, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-9, -38, OAM_DIMS_8x8, OAM_NO_FLIP, 0x3, 0, 0),
    OAM_ENTRY(-9, -14, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0)
};

static const u16 sSamusOam_Right_DiagonalUp_HoldingYourArmCannonOutOnAVerticalLadder_Frame0[] = {
    4,
    OAM_ENTRY(-9, -38, OAM_DIMS_8x8, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-8, -30, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-9, -14, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(6, -28, OAM_DIMS_8x8, OAM_NO_FLIP, 0x3, 0, 0)
};

static const u16 sSamusOam_Right_DiagonalUp_ShootingOnVerticalLadder_Frame0[] = {
    4,
    OAM_ENTRY(-9, -38, OAM_DIMS_8x8, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-9, -14, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-9, -30, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(5, -27, OAM_DIMS_8x8, OAM_NO_FLIP, 0x3, 0, 0)
};

static const u16 sSamusOam_Right_HoldingYourArmCannonOutOnAVerticalLadder_Frame0[] = {
    4,
    OAM_ENTRY(9, -23, OAM_DIMS_8x8, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-6, -30, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-9, -38, OAM_DIMS_8x8, OAM_NO_FLIP, 0x3, 0, 0),
    OAM_ENTRY(-9, -14, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0)
};

static const u16 sSamusOam_Right_ShootingOnVerticalLadder_Frame0[] = {
    4,
    OAM_ENTRY(7, -23, OAM_DIMS_8x8, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-9, -38, OAM_DIMS_8x8, OAM_NO_FLIP, 0x3, 0, 0),
    OAM_ENTRY(-9, -14, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-8, -30, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0)
};

static const u16 sSamusOam_Right_DiagonalDown_HoldingYourArmCannonOutOnAVerticalLadder_Frame0[] = {
    4,
    OAM_ENTRY(7, -25, OAM_DIMS_8x16, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-8, -30, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-9, -38, OAM_DIMS_8x8, OAM_NO_FLIP, 0x3, 0, 0),
    OAM_ENTRY(-9, -14, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0)
};

static const u16 sSamusOam_Right_DiagonalDown_ShootingOnVerticalLadder_Frame0[] = {
    4,
    OAM_ENTRY(5, -26, OAM_DIMS_8x16, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-9, -38, OAM_DIMS_8x8, OAM_NO_FLIP, 0x3, 0, 0),
    OAM_ENTRY(-9, -14, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-8, -30, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0)
};

static const u16 sSamusOam_Left_StartingWallJump_Frame0[] = {
    3,
    OAM_ENTRY(-22, -33, OAM_DIMS_16x16, OAM_NO_FLIP, 0x4, 0, 0),
    OAM_ENTRY(250, -33, OAM_DIMS_8x16, OAM_NO_FLIP, 0x6, 0, 0),
    OAM_ENTRY(-24, -17, OAM_DIMS_32x16, OAM_NO_FLIP, 0x0, 0, 0)
};

static const u16 sSamusOam_Left_StartingWallJump_Frame1[] = {
    4,
    OAM_ENTRY(-24, -26, OAM_DIMS_16x8, OAM_NO_FLIP, 0x3, 0, 0),
    OAM_ENTRY(-8, -26, OAM_DIMS_8x8, OAM_NO_FLIP, 0x5, 0, 0),
    OAM_ENTRY(-18, -18, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-2, -18, OAM_DIMS_8x16, OAM_NO_FLIP, 0x2, 0, 0)
};

static const u16 sSamusOam_Right_StartingWallJump_Frame0[] = {
    3,
    OAM_ENTRY(-2, -34, OAM_DIMS_16x16, OAM_NO_FLIP, 0x4, 0, 0),
    OAM_ENTRY(14, -34, OAM_DIMS_8x16, OAM_NO_FLIP, 0x6, 0, 0),
    OAM_ENTRY(-8, -18, OAM_DIMS_32x16, OAM_NO_FLIP, 0x0, 0, 0)
};

static const u16 sSamusOam_Right_StartingWallJump_Frame1[] = {
    4,
    OAM_ENTRY(-6, -18, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(10, -18, OAM_DIMS_8x16, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(0, -26, OAM_DIMS_16x8, OAM_NO_FLIP, 0x3, 0, 0),
    OAM_ENTRY(16, -26, OAM_DIMS_8x8, OAM_NO_FLIP, 0x5, 0, 0)
};

static const u16 sSamusOam_Left_HangingOnLedge_Frame2[] = {
    4,
    OAM_ENTRY(-10, -38, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-8, -31, OAM_DIMS_16x16, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-8, -9, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-8, -17, OAM_DIMS_16x8, OAM_NO_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_Left_HangingOnLedge_Frame3[] = {
    4,
    OAM_ENTRY(-10, -38, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-8, -31, OAM_DIMS_16x16, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-10, -17, OAM_DIMS_16x8, OAM_NO_FLIP, 0x16, 0, 0),
    OAM_ENTRY(-10, -9, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0)
};

static const u16 sSamusOam_Left_HangingOnLedge_Frame1[] = {
    4,
    OAM_ENTRY(-10, -39, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-8, -31, OAM_DIMS_16x16, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-8, -9, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-8, -17, OAM_DIMS_8x8, OAM_NO_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_Left_HangingOnLedge_Frame5[] = {
    4,
    OAM_ENTRY(-10, -38, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-8, -32, OAM_DIMS_16x16, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-8, -9, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-8, -17, OAM_DIMS_8x8, OAM_NO_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_Left_HangingOnLedge_Frame0[] = {
    4,
    OAM_ENTRY(-10, -39, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-7, -33, OAM_DIMS_16x16, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-6, -19, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-5, -3, OAM_DIMS_8x8, OAM_NO_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_Left_PullingYourselfUpFromHanging_Frame1[] = {
    4,
    OAM_ENTRY(-10, -30, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-8, -31, OAM_DIMS_16x16, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-9, -21, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-9, -5, OAM_DIMS_16x8, OAM_NO_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_Left_PullingYourselfUpFromHanging_Frame2[] = {
    4,
    OAM_ENTRY(-10, -32, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-8, -33, OAM_DIMS_16x16, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-7, -24, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-7, -8, OAM_DIMS_16x8, OAM_NO_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_Left_PullingYourselfForwardFromHanging_Frame0[] = {
    5,
    OAM_ENTRY(-7, -27, OAM_DIMS_8x16, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-10, -31, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-7, -24, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-7, -8, OAM_DIMS_16x8, OAM_NO_FLIP, 0x16, 0, 0),
    OAM_ENTRY(-9, -25, OAM_DIMS_8x16, OAM_X_FLIP, 0x3, 0, 0)
};

static const u16 sSamusOam_Left_PullingYourselfForwardFromHanging_Frame1[] = {
    4,
    OAM_ENTRY(-7, -24, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-9, -28, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(1, -8, OAM_DIMS_8x8, OAM_NO_FLIP, 0x16, 0, 0),
    OAM_ENTRY(-8, -23, OAM_DIMS_8x16, OAM_X_FLIP, 0x2, 0, 0)
};

static const u16 sSamusOam_Left_PullingYourselfForwardFromHanging_Frame2[] = {
    4,
    OAM_ENTRY(-11, -28, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-5, -24, OAM_DIMS_16x8, OAM_NO_FLIP, 0x16, 0, 0),
    OAM_ENTRY(-5, -16, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-19, -12, OAM_DIMS_16x8, OAM_NO_FLIP, 0x2, 0, 0)
};

static const u16 sSamusOam_Left_PullingYourselfForwardFromHanging_Frame3[] = {
    4,
    OAM_ENTRY(-9, -32, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-17, -24, OAM_DIMS_16x16, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-5, -24, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-5, -8, OAM_DIMS_16x8, OAM_NO_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_Right_HangingOnLedge_Frame2[] = {
    4,
    OAM_ENTRY(-6, -39, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-8, -31, OAM_DIMS_16x16, OAM_X_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-8, -9, OAM_DIMS_16x16, OAM_X_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-8, -17, OAM_DIMS_16x8, OAM_X_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_Right_HangingOnLedge_Frame3[] = {
    4,
    OAM_ENTRY(-5, -40, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-8, -31, OAM_DIMS_16x16, OAM_X_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-6, -17, OAM_DIMS_16x8, OAM_X_FLIP, 0x16, 0, 0),
    OAM_ENTRY(-6, -9, OAM_DIMS_16x16, OAM_X_FLIP, 0x14, 0, 0)
};

static const u16 sSamusOam_Right_HangingOnLedge_Frame1[] = {
    4,
    OAM_ENTRY(-5, -40, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-8, -31, OAM_DIMS_16x16, OAM_X_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-8, -9, OAM_DIMS_16x16, OAM_X_FLIP, 0x14, 0, 0),
    OAM_ENTRY(0, -17, OAM_DIMS_8x8, OAM_X_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_Right_HangingOnLedge_Frame5[] = {
    4,
    OAM_ENTRY(-5, -40, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-8, -32, OAM_DIMS_16x16, OAM_X_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-9, -9, OAM_DIMS_16x16, OAM_X_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-1, -17, OAM_DIMS_8x8, OAM_X_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_Right_HangingOnLedge_Frame0[] = {
    4,
    OAM_ENTRY(-4, -39, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-8, -33, OAM_DIMS_16x16, OAM_X_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-10, -19, OAM_DIMS_16x16, OAM_X_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-3, -3, OAM_DIMS_8x8, OAM_X_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_Right_PullingYourselfUpFromHanging_Frame1[] = {
    4,
    OAM_ENTRY(-6, -32, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-8, -31, OAM_DIMS_16x16, OAM_X_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-7, -21, OAM_DIMS_16x16, OAM_X_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-7, -5, OAM_DIMS_16x8, OAM_X_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_Right_PullingYourselfUpFromHanging_Frame2[] = {
    4,
    OAM_ENTRY(-6, -30, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-8, -33, OAM_DIMS_16x16, OAM_X_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-9, -24, OAM_DIMS_16x16, OAM_X_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-9, -8, OAM_DIMS_16x8, OAM_X_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_Right_PullingYourselfForwardFromHanging_Frame0[] = {
    4,
    OAM_ENTRY(-1, -28, OAM_DIMS_8x16, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-6, -31, OAM_DIMS_16x16, OAM_X_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-9, -24, OAM_DIMS_16x16, OAM_X_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-9, -8, OAM_DIMS_16x8, OAM_X_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_Right_PullingYourselfForwardFromHanging_Frame1[] = {
    4,
    OAM_ENTRY(-9, -24, OAM_DIMS_16x16, OAM_X_FLIP, 0x14, 0, 0),
    OAM_ENTRY(0, -23, OAM_DIMS_8x16, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-7, -28, OAM_DIMS_16x16, OAM_X_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-9, -8, OAM_DIMS_8x8, OAM_X_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_Right_PullingYourselfForwardFromHanging_Frame2[] = {
    4,
    OAM_ENTRY(1, -23, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-5, -29, OAM_DIMS_16x16, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-11, -24, OAM_DIMS_16x16, OAM_X_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-11, -8, OAM_DIMS_16x8, OAM_X_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_Right_PullingYourselfForwardFromHanging_Frame3[] = {
    4,
    OAM_ENTRY(1, -24, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-7, -32, OAM_DIMS_16x16, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-11, -24, OAM_DIMS_16x16, OAM_X_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-11, -8, OAM_DIMS_16x8, OAM_X_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_Left_PullingYourselfIntoMorphBallTunnel_Frame0[] = {
    5,
    OAM_ENTRY(-7, -14, OAM_DIMS_8x8, OAM_NO_FLIP, 0x5, 0, 0),
    OAM_ENTRY(-12, -29, OAM_DIMS_16x8, OAM_NO_FLIP, 0x3, 0, 0),
    OAM_ENTRY(-12, -21, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(4, -22, OAM_DIMS_8x16, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(4, -6, OAM_DIMS_8x8, OAM_NO_FLIP, 0x6, 0, 0)
};

static const u16 sSamusOam_Right_PullingYourselfIntoMorphBallTunnel_Frame0[] = {
    5,
    OAM_ENTRY(-2, -20, OAM_DIMS_8x16, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-4, -29, OAM_DIMS_16x8, OAM_X_FLIP, 0x4, 0, 0),
    OAM_ENTRY(-4, -21, OAM_DIMS_16x16, OAM_X_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-12, -22, OAM_DIMS_8x16, OAM_X_FLIP, 0x3, 0, 0),
    OAM_ENTRY(-12, -6, OAM_DIMS_8x8, OAM_X_FLIP, 0x6, 0, 0)
};

static const u16 sSamusOam_2d67bc_Frame0[] = {
    5,
    OAM_ENTRY(-2, -37, OAM_DIMS_8x16, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-8, -29, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-10, -14, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-2, 2, OAM_DIMS_8x8, OAM_NO_FLIP, 0x16, 0, 0),
    OAM_ENTRY(0, -24, OAM_DIMS_8x16, OAM_NO_FLIP, 0x3, 0, 0)
};

static const u16 sSamusOam_2d67bc_Frame2[] = {
    5,
    OAM_ENTRY(-2, -37, OAM_DIMS_8x16, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-8, -29, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-10, -14, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-2, 2, OAM_DIMS_8x8, OAM_NO_FLIP, 0x16, 0, 0),
    OAM_ENTRY(0, -24, OAM_DIMS_8x16, OAM_X_FLIP, 0x3, 0, 0)
};

static const u16 sSamusOam_Left_MovingOnHorizontalLadder_Frame0[] = {
    5,
    OAM_ENTRY(-2, -37, OAM_DIMS_8x16, OAM_NO_FLIP, 0x4, 0, 0),
    OAM_ENTRY(-9, -29, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-8, -14, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-8, 2, OAM_DIMS_16x8, OAM_NO_FLIP, 0x16, 0, 0),
    OAM_ENTRY(-10, -24, OAM_DIMS_16x16, OAM_X_FLIP, 0x2, 0, 0)
};

static const u16 sSamusOam_Left_MovingOnHorizontalLadder_Frame1[] = {
    5,
    OAM_ENTRY(-8, -29, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(0, -37, OAM_DIMS_8x8, OAM_NO_FLIP, 0x4, 0, 0),
    OAM_ENTRY(-8, -14, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-8, 2, OAM_DIMS_16x8, OAM_NO_FLIP, 0x16, 0, 0),
    OAM_ENTRY(-17, -21, OAM_DIMS_16x8, OAM_NO_FLIP, 0x2, 0, 0)
};

static const u16 sSamusOam_Left_MovingOnHorizontalLadder_Frame2[] = {
    5,
    OAM_ENTRY(3, -37, OAM_DIMS_8x16, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-13, -37, OAM_DIMS_8x16, OAM_NO_FLIP, 0x3, 0, 0),
    OAM_ENTRY(-5, -29, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-8, -14, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-8, 2, OAM_DIMS_16x8, OAM_NO_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_Left_MovingOnHorizontalLadder_Frame3[] = {
    5,
    OAM_ENTRY(-4, -24, OAM_DIMS_16x8, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-9, -29, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-9, -37, OAM_DIMS_8x8, OAM_NO_FLIP, 0x4, 0, 0),
    OAM_ENTRY(-6, -14, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-6, 2, OAM_DIMS_16x8, OAM_NO_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_Left_MovingOnHorizontalLadder_Frame4[] = {
    5,
    OAM_ENTRY(-12, -22, OAM_DIMS_16x8, OAM_NO_FLIP, 0x3, 0, 0),
    OAM_ENTRY(-9, -29, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-7, -37, OAM_DIMS_8x16, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-9, -14, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-1, 2, OAM_DIMS_8x8, OAM_NO_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_Left_MovingOnHorizontalLadder_Frame5[] = {
    5,
    OAM_ENTRY(-15, -31, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-9, -29, OAM_DIMS_16x16, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-9, -14, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-9, 2, OAM_DIMS_16x8, OAM_NO_FLIP, 0x16, 0, 0),
    OAM_ENTRY(-1, -37, OAM_DIMS_8x8, OAM_NO_FLIP, 0x4, 0, 0)
};

static const u16 sSamusOam_Left_MovingOnHorizontalLadder_Frame6[] = {
    5,
    OAM_ENTRY(-15, -38, OAM_DIMS_8x16, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-8, -30, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(1, -38, OAM_DIMS_8x8, OAM_NO_FLIP, 0x3, 0, 0),
    OAM_ENTRY(-10, -15, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-10, 1, OAM_DIMS_16x8, OAM_NO_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_Left_MovingOnHorizontalLadder_Frame7[] = {
    5,
    OAM_ENTRY(-11, -38, OAM_DIMS_8x8, OAM_NO_FLIP, 0x3, 0, 0),
    OAM_ENTRY(-10, -15, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-10, 1, OAM_DIMS_16x8, OAM_NO_FLIP, 0x16, 0, 0),
    OAM_ENTRY(-10, -30, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(5, -30, OAM_DIMS_8x16, OAM_NO_FLIP, 0x2, 0, 0)
};

static const u16 sSamusOam_Left_MovingOnHorizontalLadder_Frame8[] = {
    5,
    OAM_ENTRY(-10, -37, OAM_DIMS_8x16, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-7, -29, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-7, -14, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-7, 2, OAM_DIMS_16x8, OAM_NO_FLIP, 0x16, 0, 0),
    OAM_ENTRY(1, -23, OAM_DIMS_8x16, OAM_NO_FLIP, 0x3, 0, 0)
};

static const u16 sSamusOam_Left_TurningAroundOnHorizontalLadder_Frame0[] = {
    5,
    OAM_ENTRY(-4, -37, OAM_DIMS_8x8, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-12, -29, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-12, -13, OAM_DIMS_8x8, OAM_NO_FLIP, 0x3, 0, 0),
    OAM_ENTRY(-12, -14, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-4, 2, OAM_DIMS_8x8, OAM_NO_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_Left_TurningAroundOnHorizontalLadder_Frame1[] = {
    5,
    OAM_ENTRY(-10, -29, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-2, -37, OAM_DIMS_8x8, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-9, -13, OAM_DIMS_8x8, OAM_NO_FLIP, 0x3, 0, 0),
    OAM_ENTRY(-8, -14, OAM_DIMS_16x16, OAM_X_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-8, 2, OAM_DIMS_8x8, OAM_X_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_2d691c_Frame0[] = {
    5,
    OAM_ENTRY(-8, -24, OAM_DIMS_8x16, OAM_X_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-8, -29, OAM_DIMS_16x16, OAM_X_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-6, -37, OAM_DIMS_8x16, OAM_X_FLIP, 0x3, 0, 0),
    OAM_ENTRY(-7, -14, OAM_DIMS_16x16, OAM_X_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-7, 2, OAM_DIMS_8x8, OAM_X_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_2d691c_Frame2[] = {
    5,
    OAM_ENTRY(-8, -24, OAM_DIMS_8x16, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-8, -29, OAM_DIMS_16x16, OAM_X_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-7, -14, OAM_DIMS_16x16, OAM_X_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-7, 2, OAM_DIMS_8x8, OAM_X_FLIP, 0x16, 0, 0),
    OAM_ENTRY(-6, -37, OAM_DIMS_8x16, OAM_X_FLIP, 0x3, 0, 0)
};

static const u16 sSamusOam_Right_MovingOnHorizontalLadder_Frame0[] = {
    5,
    OAM_ENTRY(-6, -23, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-7, -29, OAM_DIMS_16x16, OAM_X_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-7, -14, OAM_DIMS_16x16, OAM_X_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-7, 2, OAM_DIMS_8x8, OAM_X_FLIP, 0x16, 0, 0),
    OAM_ENTRY(-5, -37, OAM_DIMS_8x16, OAM_X_FLIP, 0x4, 0, 0)
};

static const u16 sSamusOam_Right_MovingOnHorizontalLadder_Frame1[] = {
    5,
    OAM_ENTRY(0, -34, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-9, -37, OAM_DIMS_8x16, OAM_NO_FLIP, 0x4, 0, 0),
    OAM_ENTRY(-7, -29, OAM_DIMS_16x16, OAM_X_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-7, -14, OAM_DIMS_16x16, OAM_X_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-7, 2, OAM_DIMS_16x8, OAM_X_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_Right_MovingOnHorizontalLadder_Frame2[] = {
    5,
    OAM_ENTRY(-10, -38, OAM_DIMS_8x16, OAM_NO_FLIP, 0x4, 0, 0),
    OAM_ENTRY(0, -38, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-8, -30, OAM_DIMS_16x16, OAM_X_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-6, -15, OAM_DIMS_16x16, OAM_X_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-6, 1, OAM_DIMS_16x8, OAM_X_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_Right_MovingOnHorizontalLadder_Frame3[] = {
    5,
    OAM_ENTRY(4, -38, OAM_DIMS_8x16, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-6, -15, OAM_DIMS_16x16, OAM_X_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-6, 1, OAM_DIMS_16x8, OAM_X_FLIP, 0x16, 0, 0),
    OAM_ENTRY(-11, -30, OAM_DIMS_8x16, OAM_NO_FLIP, 0x3, 0, 0),
    OAM_ENTRY(-6, -30, OAM_DIMS_16x16, OAM_X_FLIP, 0x0, 0, 0)
};

static const u16 sSamusOam_Right_MovingOnHorizontalLadder_Frame4[] = {
    5,
    OAM_ENTRY(1, -37, OAM_DIMS_8x16, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-9, -29, OAM_DIMS_16x16, OAM_X_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-9, -14, OAM_DIMS_16x16, OAM_X_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-9, 2, OAM_DIMS_16x8, OAM_X_FLIP, 0x16, 0, 0),
    OAM_ENTRY(-9, -23, OAM_DIMS_8x16, OAM_NO_FLIP, 0x3, 0, 0)
};

static const u16 sSamusOam_Right_MovingOnHorizontalLadder_Frame5[] = {
    5,
    OAM_ENTRY(-6, -37, OAM_DIMS_8x16, OAM_NO_FLIP, 0x4, 0, 0),
    OAM_ENTRY(-7, -29, OAM_DIMS_16x16, OAM_X_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-8, -14, OAM_DIMS_16x16, OAM_X_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-8, 2, OAM_DIMS_16x8, OAM_X_FLIP, 0x16, 0, 0),
    OAM_ENTRY(-5, -24, OAM_DIMS_16x16, OAM_NO_FLIP, 0x2, 0, 0)
};

static const u16 sSamusOam_Right_MovingOnHorizontalLadder_Frame6[] = {
    5,
    OAM_ENTRY(-8, -37, OAM_DIMS_8x16, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-8, -29, OAM_DIMS_16x16, OAM_X_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-8, -14, OAM_DIMS_16x16, OAM_X_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-8, 2, OAM_DIMS_16x8, OAM_X_FLIP, 0x16, 0, 0),
    OAM_ENTRY(-2, -20, OAM_DIMS_16x8, OAM_NO_FLIP, 0x3, 0, 0)
};

static const u16 sSamusOam_Right_MovingOnHorizontalLadder_Frame7[] = {
    5,
    OAM_ENTRY(-13, -37, OAM_DIMS_8x16, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-11, -29, OAM_DIMS_16x16, OAM_X_FLIP, 0x0, 0, 0),
    OAM_ENTRY(2, -37, OAM_DIMS_8x16, OAM_NO_FLIP, 0x3, 0, 0),
    OAM_ENTRY(-8, -14, OAM_DIMS_16x16, OAM_X_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-8, 2, OAM_DIMS_16x8, OAM_X_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_Right_MovingOnHorizontalLadder_Frame8[] = {
    5,
    OAM_ENTRY(-12, -23, OAM_DIMS_16x8, OAM_NO_FLIP, 0x3, 0, 0),
    OAM_ENTRY(1, -36, OAM_DIMS_8x16, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-7, -28, OAM_DIMS_16x16, OAM_X_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-10, -13, OAM_DIMS_16x16, OAM_X_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-10, 3, OAM_DIMS_16x8, OAM_X_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_Left_HangingOnHorizontalLadder_Frame0[] = {
    4,
    OAM_ENTRY(-9, -29, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-3, -37, OAM_DIMS_8x8, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-11, -14, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-3, 2, OAM_DIMS_8x8, OAM_NO_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_Left_ShootingOnHorizontalLadder_Frame0[] = {
    4,
    OAM_ENTRY(-2, -37, OAM_DIMS_8x16, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-8, -29, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-11, -14, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-11, 2, OAM_DIMS_16x8, OAM_NO_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_Left_DiagonalDown_HangingOnHorizontalLadder_Frame0[] = {
    4,
    OAM_ENTRY(-2, -37, OAM_DIMS_8x16, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-10, -29, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-9, -14, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-9, 2, OAM_DIMS_16x8, OAM_NO_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_Left_DiagonalDown_ShootingOnHorizontalLadder_Frame0[] = {
    4,
    OAM_ENTRY(-2, -37, OAM_DIMS_8x16, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-9, -29, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-8, -14, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-8, 2, OAM_DIMS_16x8, OAM_NO_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_Left_Down_DelayAfterShootingOnHorizontalLadder_Frame0[] = {
    4,
    OAM_ENTRY(-10, -29, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-2, -37, OAM_DIMS_8x8, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-9, -14, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-1, 2, OAM_DIMS_8x8, OAM_NO_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_Left_Down_ShootingOnHorizontalLadder_Frame0[] = {
    4,
    OAM_ENTRY(-2, -37, OAM_DIMS_8x16, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-9, -30, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-8, -15, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(0, 1, OAM_DIMS_8x8, OAM_NO_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_Right_HangingOnHorizontalLadder_Frame0[] = {
    5,
    OAM_ENTRY(-3, -28, OAM_DIMS_8x16, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-8, -29, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-5, -14, OAM_DIMS_16x16, OAM_X_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-5, 2, OAM_DIMS_8x8, OAM_X_FLIP, 0x16, 0, 0),
    OAM_ENTRY(-6, -37, OAM_DIMS_8x16, OAM_X_FLIP, 0x3, 0, 0)
};

static const u16 sSamusOam_Right_ShootingOnHorizontalLadder_Frame0[] = {
    5,
    OAM_ENTRY(-4, -28, OAM_DIMS_8x16, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-9, -29, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-6, -37, OAM_DIMS_8x16, OAM_X_FLIP, 0x3, 0, 0),
    OAM_ENTRY(-5, -14, OAM_DIMS_16x16, OAM_X_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-5, 2, OAM_DIMS_16x8, OAM_X_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_Right_DiagonalDown_HangingOnHorizontalLadder_Frame0[] = {
    5,
    OAM_ENTRY(-4, -25, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-6, -29, OAM_DIMS_16x16, OAM_X_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-7, -14, OAM_DIMS_16x16, OAM_X_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-7, 2, OAM_DIMS_16x8, OAM_X_FLIP, 0x16, 0, 0),
    OAM_ENTRY(-6, -37, OAM_DIMS_8x16, OAM_X_FLIP, 0x4, 0, 0)
};

static const u16 sSamusOam_Right_DiagonalDown_ShootingOnHorizontalLadder_Frame0[] = {
    5,
    OAM_ENTRY(-6, -25, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-7, -29, OAM_DIMS_16x16, OAM_X_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-8, -14, OAM_DIMS_16x16, OAM_X_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-8, 2, OAM_DIMS_16x8, OAM_X_FLIP, 0x16, 0, 0),
    OAM_ENTRY(-6, -37, OAM_DIMS_8x16, OAM_X_FLIP, 0x4, 0, 0)
};

static const u16 sSamusOam_Right_Down_DelayAfterShootingOnHorizontalLadder_Frame0[] = {
    4,
    OAM_ENTRY(-6, -29, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-7, -14, OAM_DIMS_16x16, OAM_X_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-7, 2, OAM_DIMS_8x8, OAM_X_FLIP, 0x16, 0, 0),
    OAM_ENTRY(-6, -37, OAM_DIMS_8x8, OAM_X_FLIP, 0x2, 0, 0)
};

static const u16 sSamusOam_Right_Down_ShootingOnHorizontalLadder_Frame0[] = {
    4,
    OAM_ENTRY(-7, -30, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-8, -15, OAM_DIMS_16x16, OAM_X_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-8, 1, OAM_DIMS_8x8, OAM_X_FLIP, 0x16, 0, 0),
    OAM_ENTRY(-6, -37, OAM_DIMS_8x16, OAM_X_FLIP, 0x2, 0, 0)
};

static const u16 sSamusOam_2d6c5c_Frame0[] = {
    5,
    OAM_ENTRY(-10, -38, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-3, -33, OAM_DIMS_8x8, OAM_NO_FLIP, 0x4, 0, 0),
    OAM_ENTRY(-7, -32, OAM_DIMS_16x16, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-10, -18, OAM_DIMS_16x8, OAM_NO_FLIP, 0x16, 0, 0),
    OAM_ENTRY(-10, -10, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0)
};

static const u16 sSamusOam_2d6c5c_Frame4[] = {
    5,
    OAM_ENTRY(-10, -39, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-3, -33, OAM_DIMS_8x8, OAM_NO_FLIP, 0x4, 0, 0),
    OAM_ENTRY(-7, -32, OAM_DIMS_16x16, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-8, -10, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-8, -18, OAM_DIMS_8x8, OAM_NO_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_2d6c5c_Frame5[] = {
    5,
    OAM_ENTRY(-10, -38, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-3, -33, OAM_DIMS_8x8, OAM_NO_FLIP, 0x4, 0, 0),
    OAM_ENTRY(-7, -33, OAM_DIMS_16x16, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-8, -10, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-8, -18, OAM_DIMS_8x8, OAM_NO_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_2d6cdc_Frame0[] = {
    5,
    OAM_ENTRY(-5, -40, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-5, -33, OAM_DIMS_8x8, OAM_X_FLIP, 0x4, 0, 0),
    OAM_ENTRY(-9, -32, OAM_DIMS_16x16, OAM_X_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-6, -18, OAM_DIMS_16x8, OAM_X_FLIP, 0x16, 0, 0),
    OAM_ENTRY(-6, -10, OAM_DIMS_16x16, OAM_X_FLIP, 0x14, 0, 0)
};

static const u16 sSamusOam_2d5f76[] = {
    5,
    OAM_ENTRY(-5, -40, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-5, -33, OAM_DIMS_8x8, OAM_X_FLIP, 0x4, 0, 0),
    OAM_ENTRY(-9, -32, OAM_DIMS_16x16, OAM_X_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-8, -10, OAM_DIMS_16x16, OAM_X_FLIP, 0x14, 0, 0),
    OAM_ENTRY(0, -18, OAM_DIMS_8x8, OAM_X_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_2d6cdc_Frame5[] = {
    5,
    OAM_ENTRY(-5, -40, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-5, -33, OAM_DIMS_8x8, OAM_X_FLIP, 0x4, 0, 0),
    OAM_ENTRY(-9, -33, OAM_DIMS_16x16, OAM_X_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-9, -10, OAM_DIMS_16x16, OAM_X_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-1, -18, OAM_DIMS_8x8, OAM_X_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_Right_Up_HoldingYourArmCannonOutOnAVerticalLadder_Frame0[] = {
    4,
    OAM_ENTRY(-9, -40, OAM_DIMS_8x8, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-6, -32, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-8, -22, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-8, -6, OAM_DIMS_8x8, OAM_NO_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_Right_Down_HoldingYourArmCannonOutOnAVerticalLadder_Frame0[] = {
    3,
    OAM_ENTRY(-9, -38, OAM_DIMS_8x8, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-6, -30, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-8, -14, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0)
};

static const u16 sSamusOam_Left_Up_HoldingYourArmCannonOutOnAVerticalLadder_Frame0[] = {
    4,
    OAM_ENTRY(-10, -32, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(1, -40, OAM_DIMS_8x8, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-8, -22, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(0, -6, OAM_DIMS_8x8, OAM_NO_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_Left_Up_ShootingOnVerticalLadder_Frame0[] = {
    4,
    OAM_ENTRY(1, -40, OAM_DIMS_8x8, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-10, -32, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-8, -22, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(0, -6, OAM_DIMS_8x8, OAM_NO_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_Left_Down_HoldingYourArmCannonOutOnAVerticalLadder_Frame0[] = {
    4,
    OAM_ENTRY(1, -38, OAM_DIMS_8x8, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-10, -30, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-8, -14, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-16, -14, OAM_DIMS_8x8, OAM_NO_FLIP, 0x16, 0, 0)
};

static const u16 sSamusOam_Left_Down_ShootingOnVerticalLadder_Frame0[] = {
    3,
    OAM_ENTRY(0, -38, OAM_DIMS_16x8, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-10, -30, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-8, -14, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0)
};

static const u16 sSamusOam_Left_ReadyToJump_HangingOnLedge_Frame0[] = {
    4,
    OAM_ENTRY(-10, -21, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-10, -5, OAM_DIMS_16x8, OAM_NO_FLIP, 0x16, 0, 0),
    OAM_ENTRY(-10, -37, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(6, -37, OAM_DIMS_8x16, OAM_NO_FLIP, 0x2, 0, 0)
};

static const u16 sSamusOam_Right_ReadyToJump_HangingOnLedge_Frame0[] = {
    4,
    OAM_ENTRY(-14, -37, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(2, -37, OAM_DIMS_8x16, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-7, -21, OAM_DIMS_16x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-7, -5, OAM_DIMS_16x8, OAM_NO_FLIP, 0x16, 0, 0)
};

const struct SamusAnimationData sSamusAnim_Left_HangingFromVerticalLadder[8] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_Left_HangingFromVerticalLadder_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_HangingFromVerticalLadder_Frame0,
        .pOam = sSamusOam_Left_HangingFromVerticalLadder_Frame0,
        .timer = 4
    },
    [1] = {
        .pTopGfx = sSamusGfx_Top_Left_HangingFromVerticalLadder_Frame1,
        .pBottomGfx = sSamusGfx_Bottom_HangingFromVerticalLadder_Frame1,
        .pOam = sSamusOam_Left_HangingFromVerticalLadder_Frame1,
        .timer = 4
    },
    [2] = {
        .pTopGfx = sSamusGfx_Top_Left_HangingFromVerticalLadder_Frame2,
        .pBottomGfx = sSamusGfx_Bottom_HangingFromVerticalLadder_Frame2,
        .pOam = sSamusOam_Left_HangingFromVerticalLadder_Frame2,
        .timer = 4
    },
    [3] = {
        .pTopGfx = sSamusGfx_Top_Left_HangingFromVerticalLadder_Frame3,
        .pBottomGfx = sSamusGfx_Bottom_HangingFromVerticalLadder_Frame3,
        .pOam = sSamusOam_Left_HangingFromVerticalLadder_Frame3,
        .timer = 4
    },
    [4] = {
        .pTopGfx = sSamusGfx_Top_Left_HangingFromVerticalLadder_Frame4,
        .pBottomGfx = sSamusGfx_Bottom_HangingFromVerticalLadder_Frame4,
        .pOam = sSamusOam_Left_HangingFromVerticalLadder_Frame4,
        .timer = 4
    },
    [5] = {
        .pTopGfx = sSamusGfx_Top_Left_HangingFromVerticalLadder_Frame5,
        .pBottomGfx = sSamusGfx_Bottom_HangingFromVerticalLadder_Frame5,
        .pOam = sSamusOam_Left_HangingFromVerticalLadder_Frame5,
        .timer = 4
    },
    [6] = {
        .pTopGfx = sSamusGfx_Top_Left_HangingFromVerticalLadder_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_HangingFromVerticalLadder_Frame0,
        .pOam = sSamusOam_Left_HangingFromVerticalLadder_Frame0,
        .timer = 4
    },
    [7] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Right_HangingFromVerticalLadder[8] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_Right_HangingFromVerticalLadder_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_HangingFromVerticalLadder_Frame3,
        .pOam = sSamusOam_Right_HangingFromVerticalLadder_Frame0,
        .timer = 4
    },
    [1] = {
        .pTopGfx = sSamusGfx_Top_Right_HangingFromVerticalLadder_Frame1,
        .pBottomGfx = sSamusGfx_Bottom_HangingFromVerticalLadder_Frame4,
        .pOam = sSamusOam_Right_HangingFromVerticalLadder_Frame1,
        .timer = 4
    },
    [2] = {
        .pTopGfx = sSamusGfx_Top_Right_HangingFromVerticalLadder_Frame2,
        .pBottomGfx = sSamusGfx_Bottom_HangingFromVerticalLadder_Frame5,
        .pOam = sSamusOam_Right_HangingFromVerticalLadder_Frame2,
        .timer = 4
    },
    [3] = {
        .pTopGfx = sSamusGfx_Top_Right_HangingFromVerticalLadder_Frame3,
        .pBottomGfx = sSamusGfx_Bottom_HangingFromVerticalLadder_Frame0,
        .pOam = sSamusOam_Right_HangingFromVerticalLadder_Frame3,
        .timer = 4
    },
    [4] = {
        .pTopGfx = sSamusGfx_Top_Right_HangingFromVerticalLadder_Frame4,
        .pBottomGfx = sSamusGfx_Bottom_HangingFromVerticalLadder_Frame1,
        .pOam = sSamusOam_Right_HangingFromVerticalLadder_Frame4,
        .timer = 4
    },
    [5] = {
        .pTopGfx = sSamusGfx_Top_Right_HangingFromVerticalLadder_Frame5,
        .pBottomGfx = sSamusGfx_Bottom_HangingFromVerticalLadder_Frame2,
        .pOam = sSamusOam_Right_HangingFromVerticalLadder_Frame5,
        .timer = 4
    },
    [6] = {
        .pTopGfx = sSamusGfx_Top_Right_HangingFromVerticalLadder_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_HangingFromVerticalLadder_Frame3,
        .pOam = sSamusOam_Right_HangingFromVerticalLadder_Frame0,
        .timer = 4
    },
    [7] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_2d617c[7] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_Left_HangingFromVerticalLadder_Frame5,
        .pBottomGfx = sSamusGfx_Bottom_HangingFromVerticalLadder_Frame5,
        .pOam = sSamusOam_Left_HangingFromVerticalLadder_Frame5,
        .timer = 4
    },
    [1] = {
        .pTopGfx = sSamusGfx_Top_Left_HangingFromVerticalLadder_Frame4,
        .pBottomGfx = sSamusGfx_Bottom_HangingFromVerticalLadder_Frame4,
        .pOam = sSamusOam_Left_HangingFromVerticalLadder_Frame4,
        .timer = 4
    },
    [2] = {
        .pTopGfx = sSamusGfx_Top_Left_HangingFromVerticalLadder_Frame3,
        .pBottomGfx = sSamusGfx_Bottom_HangingFromVerticalLadder_Frame3,
        .pOam = sSamusOam_Left_HangingFromVerticalLadder_Frame3,
        .timer = 4
    },
    [3] = {
        .pTopGfx = sSamusGfx_Top_Left_HangingFromVerticalLadder_Frame2,
        .pBottomGfx = sSamusGfx_Bottom_HangingFromVerticalLadder_Frame2,
        .pOam = sSamusOam_Left_HangingFromVerticalLadder_Frame2,
        .timer = 4
    },
    [4] = {
        .pTopGfx = sSamusGfx_Top_Left_HangingFromVerticalLadder_Frame1,
        .pBottomGfx = sSamusGfx_Bottom_HangingFromVerticalLadder_Frame1,
        .pOam = sSamusOam_Left_HangingFromVerticalLadder_Frame1,
        .timer = 4
    },
    [5] = {
        .pTopGfx = sSamusGfx_Top_Left_HangingFromVerticalLadder_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_HangingFromVerticalLadder_Frame0,
        .pOam = sSamusOam_Left_HangingFromVerticalLadder_Frame0,
        .timer = 4
    },
    [6] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_2d61ec[7] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_Right_HangingFromVerticalLadder_Frame5,
        .pBottomGfx = sSamusGfx_Bottom_HangingFromVerticalLadder_Frame2,
        .pOam = sSamusOam_Right_HangingFromVerticalLadder_Frame5,
        .timer = 4
    },
    [1] = {
        .pTopGfx = sSamusGfx_Top_Right_HangingFromVerticalLadder_Frame4,
        .pBottomGfx = sSamusGfx_Bottom_HangingFromVerticalLadder_Frame1,
        .pOam = sSamusOam_Right_HangingFromVerticalLadder_Frame4,
        .timer = 4
    },
    [2] = {
        .pTopGfx = sSamusGfx_Top_Right_HangingFromVerticalLadder_Frame3,
        .pBottomGfx = sSamusGfx_Bottom_HangingFromVerticalLadder_Frame0,
        .pOam = sSamusOam_Right_HangingFromVerticalLadder_Frame3,
        .timer = 4
    },
    [3] = {
        .pTopGfx = sSamusGfx_Top_Right_HangingFromVerticalLadder_Frame2,
        .pBottomGfx = sSamusGfx_Bottom_HangingFromVerticalLadder_Frame5,
        .pOam = sSamusOam_Right_HangingFromVerticalLadder_Frame2,
        .timer = 4
    },
    [4] = {
        .pTopGfx = sSamusGfx_Top_Right_HangingFromVerticalLadder_Frame1,
        .pBottomGfx = sSamusGfx_Bottom_HangingFromVerticalLadder_Frame4,
        .pOam = sSamusOam_Right_HangingFromVerticalLadder_Frame1,
        .timer = 4
    },
    [5] = {
        .pTopGfx = sSamusGfx_Top_Right_HangingFromVerticalLadder_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_HangingFromVerticalLadder_Frame3,
        .pOam = sSamusOam_Right_HangingFromVerticalLadder_Frame0,
        .timer = 4
    },
    [6] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Left_StartingToHoldYourArmCannonOutOnAVerticalLadder[3] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_Left_StartingToHoldYourArmCannonOutOnAVerticalLadder_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_Left_StartingToHoldYourArmCannonOutOnAVerticalLadder_Frame0,
        .pOam = sSamusOam_Left_StartingToHoldYourArmCannonOutOnAVerticalLadder_Frame0,
        .timer = 2
    },
    [1] = {
        .pTopGfx = sSamusGfx_Top_Left_StartingToHoldYourArmCannonOutOnAVerticalLadder_Frame1,
        .pBottomGfx = sSamusGfx_Bottom_Left_StartingToHoldYourArmCannonOutOnAVerticalLadder_Frame1,
        .pOam = sSamusOam_Left_StartingToHoldYourArmCannonOutOnAVerticalLadder_Frame1,
        .timer = 2
    },
    [2] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Left_StartingToPutAwayYourArmCannonOutOnAVerticalLadder[3] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_Left_StartingToHoldYourArmCannonOutOnAVerticalLadder_Frame1,
        .pBottomGfx = sSamusGfx_Bottom_Left_StartingToHoldYourArmCannonOutOnAVerticalLadder_Frame1,
        .pOam = sSamusOam_Left_StartingToHoldYourArmCannonOutOnAVerticalLadder_Frame1,
        .timer = 2
    },
    [1] = {
        .pTopGfx = sSamusGfx_Top_Left_StartingToHoldYourArmCannonOutOnAVerticalLadder_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_Left_StartingToHoldYourArmCannonOutOnAVerticalLadder_Frame0,
        .pOam = sSamusOam_Left_StartingToHoldYourArmCannonOutOnAVerticalLadder_Frame0,
        .timer = 2
    },
    [2] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Left_DiagonalUp_HoldingYourArmCannonOutOnAVerticalLadder[2] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_Left_DiagonalUp_HoldingYourArmCannonOutOnAVerticalLadder_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_Left_DiagonalUp_HoldingYourArmCannonOutOnAVerticalLadder_Frame0,
        .pOam = sSamusOam_Left_DiagonalUp_HoldingYourArmCannonOutOnAVerticalLadder_Frame0,
        .timer = 4
    },
    [1] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Left_DiagonalUp_ShootingOnVerticalLadder[3] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_Left_DiagonalUp_ShootingOnVerticalLadder_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_Left_DiagonalUp_ShootingOnVerticalLadder_Frame0,
        .pOam = sSamusOam_Left_DiagonalUp_ShootingOnVerticalLadder_Frame0,
        .timer = 4
    },
    [1] = {
        .pTopGfx = sSamusGfx_Top_Left_DiagonalUp_HoldingYourArmCannonOutOnAVerticalLadder_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_Left_DiagonalUp_HoldingYourArmCannonOutOnAVerticalLadder_Frame0,
        .pOam = sSamusOam_Left_DiagonalUp_HoldingYourArmCannonOutOnAVerticalLadder_Frame0,
        .timer = 4
    },
    [2] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Left_HoldingYourArmCannonOutOnAVerticalLadder[2] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_Left_HoldingYourArmCannonOutOnAVerticalLadder_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_Left_DiagonalUp_HoldingYourArmCannonOutOnAVerticalLadder_Frame0,
        .pOam = sSamusOam_Left_HoldingYourArmCannonOutOnAVerticalLadder_Frame0,
        .timer = 4
    },
    [1] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Left_ShootingOnVerticalLadder[3] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_Left_ShootingOnVerticalLadder_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_Left_DiagonalUp_ShootingOnVerticalLadder_Frame0,
        .pOam = sSamusOam_Left_ShootingOnVerticalLadder_Frame0,
        .timer = 4
    },
    [1] = {
        .pTopGfx = sSamusGfx_Top_Left_HoldingYourArmCannonOutOnAVerticalLadder_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_Left_DiagonalUp_HoldingYourArmCannonOutOnAVerticalLadder_Frame0,
        .pOam = sSamusOam_Left_HoldingYourArmCannonOutOnAVerticalLadder_Frame0,
        .timer = 4
    },
    [2] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Left_DiagonalDown_HoldingYourArmCannonOutOnAVerticalLadder[2] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_Left_DiagonalDown_HoldingYourArmCannonOutOnAVerticalLadder_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_Left_DiagonalUp_HoldingYourArmCannonOutOnAVerticalLadder_Frame0,
        .pOam = sSamusOam_Left_DiagonalDown_HoldingYourArmCannonOutOnAVerticalLadder_Frame0,
        .timer = 4
    },
    [1] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Left_DiagonalDown_ShootingOnVerticalLadder[3] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_Left_DiagonalDown_ShootingOnVerticalLadder_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_Left_DiagonalUp_ShootingOnVerticalLadder_Frame0,
        .pOam = sSamusOam_Left_DiagonalDown_ShootingOnVerticalLadder_Frame0,
        .timer = 4
    },
    [1] = {
        .pTopGfx = sSamusGfx_Top_Left_DiagonalDown_HoldingYourArmCannonOutOnAVerticalLadder_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_Left_DiagonalUp_HoldingYourArmCannonOutOnAVerticalLadder_Frame0,
        .pOam = sSamusOam_Left_DiagonalDown_HoldingYourArmCannonOutOnAVerticalLadder_Frame0,
        .timer = 4
    },
    [2] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Right_StartingToHoldYourArmCannonOutOnAVerticalLadder[3] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_Right_StartingToHoldYourArmCannonOutOnAVerticalLadder_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_Right_StartingToHoldYourArmCannonOutOnAVerticalLadder_Frame0,
        .pOam = sSamusOam_Right_StartingToHoldYourArmCannonOutOnAVerticalLadder_Frame0,
        .timer = 2
    },
    [1] = {
        .pTopGfx = sSamusGfx_Top_Right_StartingToHoldYourArmCannonOutOnAVerticalLadder_Frame1,
        .pBottomGfx = sSamusGfx_Bottom_Right_StartingToHoldYourArmCannonOutOnAVerticalLadder_Frame1,
        .pOam = sSamusOam_Right_StartingToHoldYourArmCannonOutOnAVerticalLadder_Frame1,
        .timer = 2
    },
    [2] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Right_StartingToPutAwayYourArmCannonOutOnAVerticalLadder[3] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_Right_StartingToHoldYourArmCannonOutOnAVerticalLadder_Frame1,
        .pBottomGfx = sSamusGfx_Bottom_Right_StartingToHoldYourArmCannonOutOnAVerticalLadder_Frame1,
        .pOam = sSamusOam_Right_StartingToHoldYourArmCannonOutOnAVerticalLadder_Frame1,
        .timer = 2
    },
    [1] = {
        .pTopGfx = sSamusGfx_Top_Right_StartingToHoldYourArmCannonOutOnAVerticalLadder_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_Right_StartingToHoldYourArmCannonOutOnAVerticalLadder_Frame0,
        .pOam = sSamusOam_Right_StartingToHoldYourArmCannonOutOnAVerticalLadder_Frame0,
        .timer = 2
    },
    [2] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Right_DiagonalUp_HoldingYourArmCannonOutOnAVerticalLadder[2] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_Right_DiagonalUp_HoldingYourArmCannonOutOnAVerticalLadder_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_Right_DiagonalUp_HoldingYourArmCannonOutOnAVerticalLadder_Frame0,
        .pOam = sSamusOam_Right_DiagonalUp_HoldingYourArmCannonOutOnAVerticalLadder_Frame0,
        .timer = 4
    },
    [1] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Right_DiagonalUp_ShootingOnVerticalLadder[3] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_Right_DiagonalUp_ShootingOnVerticalLadder_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_Right_DiagonalUp_ShootingOnVerticalLadder_Frame0,
        .pOam = sSamusOam_Right_DiagonalUp_ShootingOnVerticalLadder_Frame0,
        .timer = 4
    },
    [1] = {
        .pTopGfx = sSamusGfx_Top_Right_DiagonalUp_HoldingYourArmCannonOutOnAVerticalLadder_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_Right_DiagonalUp_HoldingYourArmCannonOutOnAVerticalLadder_Frame0,
        .pOam = sSamusOam_Right_DiagonalUp_HoldingYourArmCannonOutOnAVerticalLadder_Frame0,
        .timer = 4
    },
    [2] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Right_HoldingYourArmCannonOutOnAVerticalLadder[2] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_Right_HoldingYourArmCannonOutOnAVerticalLadder_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_Right_DiagonalUp_HoldingYourArmCannonOutOnAVerticalLadder_Frame0,
        .pOam = sSamusOam_Right_HoldingYourArmCannonOutOnAVerticalLadder_Frame0,
        .timer = 4
    },
    [1] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Right_ShootingOnVerticalLadder[3] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_Right_ShootingOnVerticalLadder_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_Right_DiagonalUp_ShootingOnVerticalLadder_Frame0,
        .pOam = sSamusOam_Right_ShootingOnVerticalLadder_Frame0,
        .timer = 4
    },
    [1] = {
        .pTopGfx = sSamusGfx_Top_Right_HoldingYourArmCannonOutOnAVerticalLadder_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_Right_DiagonalUp_HoldingYourArmCannonOutOnAVerticalLadder_Frame0,
        .pOam = sSamusOam_Right_HoldingYourArmCannonOutOnAVerticalLadder_Frame0,
        .timer = 4
    },
    [2] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Right_DiagonalDown_HoldingYourArmCannonOutOnAVerticalLadder[2] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_Right_DiagonalDown_HoldingYourArmCannonOutOnAVerticalLadder_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_Right_DiagonalUp_HoldingYourArmCannonOutOnAVerticalLadder_Frame0,
        .pOam = sSamusOam_Right_DiagonalDown_HoldingYourArmCannonOutOnAVerticalLadder_Frame0,
        .timer = 4
    },
    [1] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Right_DiagonalDown_ShootingOnVerticalLadder[3] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_Right_DiagonalDown_ShootingOnVerticalLadder_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_Right_DiagonalUp_ShootingOnVerticalLadder_Frame0,
        .pOam = sSamusOam_Right_DiagonalDown_ShootingOnVerticalLadder_Frame0,
        .timer = 4
    },
    [1] = {
        .pTopGfx = sSamusGfx_Top_Right_DiagonalDown_HoldingYourArmCannonOutOnAVerticalLadder_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_Right_DiagonalUp_HoldingYourArmCannonOutOnAVerticalLadder_Frame0,
        .pOam = sSamusOam_Right_DiagonalDown_HoldingYourArmCannonOutOnAVerticalLadder_Frame0,
        .timer = 4
    },
    [2] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Left_StartingWallJump[3] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_Left_StartingWallJump_Frame0,
        .pBottomGfx = sSamusGfx_Empty,
        .pOam = sSamusOam_Left_StartingWallJump_Frame0,
        .timer = 2
    },
    [1] = {
        .pTopGfx = sSamusGfx_Top_Left_StartingWallJump_Frame1,
        .pBottomGfx = sSamusGfx_Empty,
        .pOam = sSamusOam_Left_StartingWallJump_Frame1,
        .timer = 2
    },
    [2] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Right_StartingWallJump[3] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_Right_StartingWallJump_Frame0,
        .pBottomGfx = sSamusGfx_Empty,
        .pOam = sSamusOam_Right_StartingWallJump_Frame0,
        .timer = 2
    },
    [1] = {
        .pTopGfx = sSamusGfx_Top_Right_StartingWallJump_Frame1,
        .pBottomGfx = sSamusGfx_Empty,
        .pOam = sSamusOam_Right_StartingWallJump_Frame1,
        .timer = 2
    },
    [2] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Left_HangingOnLedge[8] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_Left_HangingOnLedge_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_HangingOnLedge_Frame0,
        .pOam = sSamusOam_Left_HangingOnLedge_Frame0,
        .timer = 2
    },
    [1] = {
        .pTopGfx = sSamusGfx_Top_Left_HangingOnLedge_Frame1,
        .pBottomGfx = sSamusGfx_Bottom_HangingOnLedge_Frame1,
        .pOam = sSamusOam_Left_HangingOnLedge_Frame1,
        .timer = 2
    },
    [2] = {
        .pTopGfx = sSamusGfx_Top_Left_HangingOnLedge_Frame2,
        .pBottomGfx = sSamusGfx_Bottom_HangingOnLedge_Frame2,
        .pOam = sSamusOam_Left_HangingOnLedge_Frame2,
        .timer = 2
    },
    [3] = {
        .pTopGfx = sSamusGfx_Top_Left_HangingOnLedge_Frame3,
        .pBottomGfx = sSamusGfx_Bottom_HangingOnLedge_Frame3,
        .pOam = sSamusOam_Left_HangingOnLedge_Frame3,
        .timer = 16
    },
    [4] = {
        .pTopGfx = sSamusGfx_Top_Left_HangingOnLedge_Frame1,
        .pBottomGfx = sSamusGfx_Bottom_HangingOnLedge_Frame1,
        .pOam = sSamusOam_Left_HangingOnLedge_Frame1,
        .timer = 16
    },
    [5] = {
        .pTopGfx = sSamusGfx_Top_Left_HangingOnLedge_Frame5,
        .pBottomGfx = sSamusGfx_Bottom_HangingOnLedge_Frame5,
        .pOam = sSamusOam_Left_HangingOnLedge_Frame5,
        .timer = 16
    },
    [6] = {
        .pTopGfx = sSamusGfx_Top_Left_HangingOnLedge_Frame1,
        .pBottomGfx = sSamusGfx_Bottom_HangingOnLedge_Frame1,
        .pOam = sSamusOam_Left_HangingOnLedge_Frame1,
        .timer = 16
    },
    [7] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Left_PullingYourselfUpFromHanging[4] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_Left_HangingOnLedge_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_HangingOnLedge_Frame0,
        .pOam = sSamusOam_Left_HangingOnLedge_Frame0,
        .timer = 3
    },
    [1] = {
        .pTopGfx = sSamusGfx_Top_Left_PullingYourselfUpFromHanging_Frame1,
        .pBottomGfx = sSamusGfx_Bottom_PullingYourselfUpFromHanging_Frame1,
        .pOam = sSamusOam_Left_PullingYourselfUpFromHanging_Frame1,
        .timer = 3
    },
    [2] = {
        .pTopGfx = sSamusGfx_Top_Left_PullingYourselfUpFromHanging_Frame2,
        .pBottomGfx = sSamusGfx_Bottom_PullingYourselfUpFromHanging_Frame2,
        .pOam = sSamusOam_Left_PullingYourselfUpFromHanging_Frame2,
        .timer = 3
    },
    [3] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Left_PullingYourselfForwardFromHanging[5] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_Left_PullingYourselfForwardFromHanging_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_PullingYourselfForwardFromHanging_Frame0,
        .pOam = sSamusOam_Left_PullingYourselfForwardFromHanging_Frame0,
        .timer = 4
    },
    [1] = {
        .pTopGfx = sSamusGfx_Top_Left_PullingYourselfForwardFromHanging_Frame1,
        .pBottomGfx = sSamusGfx_Bottom_PullingYourselfForwardFromHanging_Frame1,
        .pOam = sSamusOam_Left_PullingYourselfForwardFromHanging_Frame1,
        .timer = 6
    },
    [2] = {
        .pTopGfx = sSamusGfx_Top_Left_PullingYourselfForwardFromHanging_Frame2,
        .pBottomGfx = sSamusGfx_Bottom_PullingYourselfForwardFromHanging_Frame2,
        .pOam = sSamusOam_Left_PullingYourselfForwardFromHanging_Frame2,
        .timer = 2
    },
    [3] = {
        .pTopGfx = sSamusGfx_Top_Left_PullingYourselfForwardFromHanging_Frame3,
        .pBottomGfx = sSamusGfx_Bottom_PullingYourselfForwardFromHanging_Frame3,
        .pOam = sSamusOam_Left_PullingYourselfForwardFromHanging_Frame3,
        .timer = 2
    },
    [4] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Left_PullingYourselfIntoMorphBallTunnel[2] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_Left_PullingYourselfIntoMorphBallTunnel_Frame0,
        .pBottomGfx = sSamusGfx_Empty,
        .pOam = sSamusOam_Left_PullingYourselfIntoMorphBallTunnel_Frame0,
        .timer = 4
    },
    [1] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Right_HangingOnLedge[8] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_Right_HangingOnLedge_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_HangingOnLedge_Frame0,
        .pOam = sSamusOam_Right_HangingOnLedge_Frame0,
        .timer = 2
    },
    [1] = {
        .pTopGfx = sSamusGfx_Top_Right_HangingOnLedge_Frame1,
        .pBottomGfx = sSamusGfx_Bottom_HangingOnLedge_Frame1,
        .pOam = sSamusOam_Right_HangingOnLedge_Frame1,
        .timer = 2
    },
    [2] = {
        .pTopGfx = sSamusGfx_Top_Right_HangingOnLedge_Frame2,
        .pBottomGfx = sSamusGfx_Bottom_HangingOnLedge_Frame2,
        .pOam = sSamusOam_Right_HangingOnLedge_Frame2,
        .timer = 2
    },
    [3] = {
        .pTopGfx = sSamusGfx_Top_Right_HangingOnLedge_Frame3,
        .pBottomGfx = sSamusGfx_Bottom_HangingOnLedge_Frame3,
        .pOam = sSamusOam_Right_HangingOnLedge_Frame3,
        .timer = 16
    },
    [4] = {
        .pTopGfx = sSamusGfx_Top_Right_HangingOnLedge_Frame1,
        .pBottomGfx = sSamusGfx_Bottom_HangingOnLedge_Frame1,
        .pOam = sSamusOam_Right_HangingOnLedge_Frame1,
        .timer = 16
    },
    [5] = {
        .pTopGfx = sSamusGfx_Top_Right_HangingOnLedge_Frame5,
        .pBottomGfx = sSamusGfx_Bottom_HangingOnLedge_Frame5,
        .pOam = sSamusOam_Right_HangingOnLedge_Frame5,
        .timer = 16
    },
    [6] = {
        .pTopGfx = sSamusGfx_Top_Right_HangingOnLedge_Frame1,
        .pBottomGfx = sSamusGfx_Bottom_HangingOnLedge_Frame1,
        .pOam = sSamusOam_Right_HangingOnLedge_Frame1,
        .timer = 16
    },
    [7] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Right_PullingYourselfUpFromHanging[4] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_Right_HangingOnLedge_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_HangingOnLedge_Frame0,
        .pOam = sSamusOam_Right_HangingOnLedge_Frame0,
        .timer = 3
    },
    [1] = {
        .pTopGfx = sSamusGfx_Top_Right_PullingYourselfUpFromHanging_Frame1,
        .pBottomGfx = sSamusGfx_Bottom_PullingYourselfUpFromHanging_Frame1,
        .pOam = sSamusOam_Right_PullingYourselfUpFromHanging_Frame1,
        .timer = 3
    },
    [2] = {
        .pTopGfx = sSamusGfx_Top_Right_PullingYourselfUpFromHanging_Frame2,
        .pBottomGfx = sSamusGfx_Bottom_PullingYourselfUpFromHanging_Frame2,
        .pOam = sSamusOam_Right_PullingYourselfUpFromHanging_Frame2,
        .timer = 3
    },
    [3] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Right_PullingYourselfForwardFromHanging[5] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_Right_PullingYourselfForwardFromHanging_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_PullingYourselfForwardFromHanging_Frame0,
        .pOam = sSamusOam_Right_PullingYourselfForwardFromHanging_Frame0,
        .timer = 4
    },
    [1] = {
        .pTopGfx = sSamusGfx_Top_Right_PullingYourselfForwardFromHanging_Frame1,
        .pBottomGfx = sSamusGfx_Bottom_PullingYourselfForwardFromHanging_Frame1,
        .pOam = sSamusOam_Right_PullingYourselfForwardFromHanging_Frame1,
        .timer = 6
    },
    [2] = {
        .pTopGfx = sSamusGfx_Top_Right_PullingYourselfForwardFromHanging_Frame2,
        .pBottomGfx = sSamusGfx_Bottom_Right_PullingYourselfForwardFromHanging_Frame2,
        .pOam = sSamusOam_Right_PullingYourselfForwardFromHanging_Frame2,
        .timer = 2
    },
    [3] = {
        .pTopGfx = sSamusGfx_Top_Right_PullingYourselfForwardFromHanging_Frame3,
        .pBottomGfx = sSamusGfx_Bottom_PullingYourselfForwardFromHanging_Frame3,
        .pOam = sSamusOam_Right_PullingYourselfForwardFromHanging_Frame3,
        .timer = 2
    },
    [4] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Right_PullingYourselfIntoMorphBallTunnel[2] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_Right_PullingYourselfIntoMorphBallTunnel_Frame0,
        .pBottomGfx = sSamusGfx_Empty,
        .pOam = sSamusOam_Right_PullingYourselfIntoMorphBallTunnel_Frame0,
        .timer = 4
    },
    [1] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_2d67bc[5] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_2d67bc_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_2d67bc_Frame0,
        .pOam = sSamusOam_2d67bc_Frame0,
        .timer = 14
    },
    [1] = {
        .pTopGfx = sSamusGfx_Top_2d67bc_Frame1,
        .pBottomGfx = sSamusGfx_Bottom_2d67bc_Frame1,
        .pOam = sSamusOam_2d67bc_Frame0,
        .timer = 14
    },
    [2] = {
        .pTopGfx = sSamusGfx_Top_2d67bc_Frame2,
        .pBottomGfx = sSamusGfx_Bottom_2d67bc_Frame2,
        .pOam = sSamusOam_2d67bc_Frame2,
        .timer = 14
    },
    [3] = {
        .pTopGfx = sSamusGfx_Top_2d67bc_Frame1,
        .pBottomGfx = sSamusGfx_Bottom_2d67bc_Frame1,
        .pOam = sSamusOam_2d67bc_Frame0,
        .timer = 14
    },
    [4] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Left_MovingOnHorizontalLadder[11] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_Left_MovingOnHorizontalLadder_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_MovingOnHorizontalLadder_Frame0,
        .pOam = sSamusOam_Left_MovingOnHorizontalLadder_Frame0,
        .timer = 4
    },
    [1] = {
        .pTopGfx = sSamusGfx_Top_Left_MovingOnHorizontalLadder_Frame1,
        .pBottomGfx = sSamusGfx_Bottom_MovingOnHorizontalLadder_Frame1,
        .pOam = sSamusOam_Left_MovingOnHorizontalLadder_Frame1,
        .timer = 5
    },
    [2] = {
        .pTopGfx = sSamusGfx_Top_Left_MovingOnHorizontalLadder_Frame2,
        .pBottomGfx = sSamusGfx_Bottom_MovingOnHorizontalLadder_Frame2,
        .pOam = sSamusOam_Left_MovingOnHorizontalLadder_Frame2,
        .timer = 4
    },
    [3] = {
        .pTopGfx = sSamusGfx_Top_Left_MovingOnHorizontalLadder_Frame3,
        .pBottomGfx = sSamusGfx_Bottom_MovingOnHorizontalLadder_Frame3,
        .pOam = sSamusOam_Left_MovingOnHorizontalLadder_Frame3,
        .timer = 4
    },
    [4] = {
        .pTopGfx = sSamusGfx_Top_Left_MovingOnHorizontalLadder_Frame4,
        .pBottomGfx = sSamusGfx_Bottom_MovingOnHorizontalLadder_Frame4,
        .pOam = sSamusOam_Left_MovingOnHorizontalLadder_Frame4,
        .timer = 4
    },
    [5] = {
        .pTopGfx = sSamusGfx_Top_Left_MovingOnHorizontalLadder_Frame5,
        .pBottomGfx = sSamusGfx_Bottom_MovingOnHorizontalLadder_Frame5,
        .pOam = sSamusOam_Left_MovingOnHorizontalLadder_Frame5,
        .timer = 4
    },
    [6] = {
        .pTopGfx = sSamusGfx_Top_Left_MovingOnHorizontalLadder_Frame6,
        .pBottomGfx = sSamusGfx_Bottom_MovingOnHorizontalLadder_Frame6,
        .pOam = sSamusOam_Left_MovingOnHorizontalLadder_Frame6,
        .timer = 5
    },
    [7] = {
        .pTopGfx = sSamusGfx_Top_Left_MovingOnHorizontalLadder_Frame7,
        .pBottomGfx = sSamusGfx_Bottom_MovingOnHorizontalLadder_Frame7,
        .pOam = sSamusOam_Left_MovingOnHorizontalLadder_Frame7,
        .timer = 4
    },
    [8] = {
        .pTopGfx = sSamusGfx_Top_Left_MovingOnHorizontalLadder_Frame8,
        .pBottomGfx = sSamusGfx_Bottom_MovingOnHorizontalLadder_Frame8,
        .pOam = sSamusOam_Left_MovingOnHorizontalLadder_Frame8,
        .timer = 4
    },
    [9] = {
        .pTopGfx = sSamusGfx_Top_2d67bc_Frame2,
        .pBottomGfx = sSamusGfx_Bottom_2d67bc_Frame2,
        .pOam = sSamusOam_2d67bc_Frame2,
        .timer = 4
    },
    [10] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Left_TurningAroundOnHorizontalLadder[3] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_Left_TurningAroundOnHorizontalLadder_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_TurningAroundOnHorizontalLadder_Frame0,
        .pOam = sSamusOam_Left_TurningAroundOnHorizontalLadder_Frame0,
        .timer = 2
    },
    [1] = {
        .pTopGfx = sSamusGfx_Top_Left_TurningAroundOnHorizontalLadder_Frame1,
        .pBottomGfx = sSamusGfx_Bottom_TurningAroundOnHorizontalLadder_Frame0,
        .pOam = sSamusOam_Left_TurningAroundOnHorizontalLadder_Frame1,
        .timer = 2
    },
    [2] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Right_TurningAroundOnHorizontalLadder[3] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_Left_TurningAroundOnHorizontalLadder_Frame1,
        .pBottomGfx = sSamusGfx_Bottom_TurningAroundOnHorizontalLadder_Frame0,
        .pOam = sSamusOam_Left_TurningAroundOnHorizontalLadder_Frame1,
        .timer = 2
    },
    [1] = {
        .pTopGfx = sSamusGfx_Top_Left_TurningAroundOnHorizontalLadder_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_TurningAroundOnHorizontalLadder_Frame0,
        .pOam = sSamusOam_Left_TurningAroundOnHorizontalLadder_Frame0,
        .timer = 2
    },
    [2] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_2d691c[5] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_2d691c_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_2d67bc_Frame0,
        .pOam = sSamusOam_2d691c_Frame0,
        .timer = 14
    },
    [1] = {
        .pTopGfx = sSamusGfx_Top_2d691c_Frame1,
        .pBottomGfx = sSamusGfx_Bottom_2d67bc_Frame1,
        .pOam = sSamusOam_2d691c_Frame0,
        .timer = 14
    },
    [2] = {
        .pTopGfx = sSamusGfx_Top_2d691c_Frame2,
        .pBottomGfx = sSamusGfx_Bottom_2d67bc_Frame2,
        .pOam = sSamusOam_2d691c_Frame2,
        .timer = 14
    },
    [3] = {
        .pTopGfx = sSamusGfx_Top_2d691c_Frame1,
        .pBottomGfx = sSamusGfx_Bottom_2d67bc_Frame1,
        .pOam = sSamusOam_2d691c_Frame0,
        .timer = 14
    },
    [4] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Right_MovingOnHorizontalLadder[11] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_Right_MovingOnHorizontalLadder_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_MovingOnHorizontalLadder_Frame4,
        .pOam = sSamusOam_Right_MovingOnHorizontalLadder_Frame0,
        .timer = 4
    },
    [1] = {
        .pTopGfx = sSamusGfx_Top_Right_MovingOnHorizontalLadder_Frame1,
        .pBottomGfx = sSamusGfx_Bottom_MovingOnHorizontalLadder_Frame5,
        .pOam = sSamusOam_Right_MovingOnHorizontalLadder_Frame1,
        .timer = 4
    },
    [2] = {
        .pTopGfx = sSamusGfx_Top_Right_MovingOnHorizontalLadder_Frame2,
        .pBottomGfx = sSamusGfx_Bottom_MovingOnHorizontalLadder_Frame6,
        .pOam = sSamusOam_Right_MovingOnHorizontalLadder_Frame2,
        .timer = 5
    },
    [3] = {
        .pTopGfx = sSamusGfx_Top_Right_MovingOnHorizontalLadder_Frame3,
        .pBottomGfx = sSamusGfx_Bottom_MovingOnHorizontalLadder_Frame7,
        .pOam = sSamusOam_Right_MovingOnHorizontalLadder_Frame3,
        .timer = 4
    },
    [4] = {
        .pTopGfx = sSamusGfx_Top_Right_MovingOnHorizontalLadder_Frame4,
        .pBottomGfx = sSamusGfx_Bottom_MovingOnHorizontalLadder_Frame8,
        .pOam = sSamusOam_Right_MovingOnHorizontalLadder_Frame4,
        .timer = 4
    },
    [5] = {
        .pTopGfx = sSamusGfx_Top_Right_MovingOnHorizontalLadder_Frame5,
        .pBottomGfx = sSamusGfx_Bottom_MovingOnHorizontalLadder_Frame0,
        .pOam = sSamusOam_Right_MovingOnHorizontalLadder_Frame5,
        .timer = 4
    },
    [6] = {
        .pTopGfx = sSamusGfx_Top_Right_MovingOnHorizontalLadder_Frame6,
        .pBottomGfx = sSamusGfx_Bottom_MovingOnHorizontalLadder_Frame1,
        .pOam = sSamusOam_Right_MovingOnHorizontalLadder_Frame6,
        .timer = 5
    },
    [7] = {
        .pTopGfx = sSamusGfx_Top_Right_MovingOnHorizontalLadder_Frame7,
        .pBottomGfx = sSamusGfx_Bottom_MovingOnHorizontalLadder_Frame2,
        .pOam = sSamusOam_Right_MovingOnHorizontalLadder_Frame7,
        .timer = 4
    },
    [8] = {
        .pTopGfx = sSamusGfx_Top_Right_MovingOnHorizontalLadder_Frame8,
        .pBottomGfx = sSamusGfx_Bottom_MovingOnHorizontalLadder_Frame3,
        .pOam = sSamusOam_Right_MovingOnHorizontalLadder_Frame8,
        .timer = 4
    },
    [9] = {
        .pTopGfx = sSamusGfx_Top_2d691c_Frame2,
        .pBottomGfx = sSamusGfx_Bottom_2d67bc_Frame2,
        .pOam = sSamusOam_2d691c_Frame2,
        .timer = 4
    },
    [10] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Left_HangingOnHorizontalLadder[2] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_Left_HangingOnHorizontalLadder_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_HangingOnHorizontalLadder_Frame0,
        .pOam = sSamusOam_Left_HangingOnHorizontalLadder_Frame0,
        .timer = 4
    },
    [1] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Left_ShootingOnHorizontalLadder[3] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_Left_ShootingOnHorizontalLadder_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_ShootingOnHorizontalLadder_Frame0,
        .pOam = sSamusOam_Left_ShootingOnHorizontalLadder_Frame0,
        .timer = 4
    },
    [1] = {
        .pTopGfx = sSamusGfx_Top_Left_HangingOnHorizontalLadder_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_HangingOnHorizontalLadder_Frame0,
        .pOam = sSamusOam_Left_HangingOnHorizontalLadder_Frame0,
        .timer = 4
    },
    [2] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Left_DiagonalDown_HangingOnHorizontalLadder[2] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_Left_DiagonalDown_HangingOnHorizontalLadder_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_DiagonalDown_HangingOnHorizontalLadder_Frame0,
        .pOam = sSamusOam_Left_DiagonalDown_HangingOnHorizontalLadder_Frame0,
        .timer = 4
    },
    [1] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Left_DiagonalDown_ShootingOnHorizontalLadder[3] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_Left_DiagonalDown_ShootingOnHorizontalLadder_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_DiagonalDown_ShootingOnHorizontalLadder_Frame0,
        .pOam = sSamusOam_Left_DiagonalDown_ShootingOnHorizontalLadder_Frame0,
        .timer = 4
    },
    [1] = {
        .pTopGfx = sSamusGfx_Top_Left_DiagonalDown_HangingOnHorizontalLadder_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_DiagonalDown_HangingOnHorizontalLadder_Frame0,
        .pOam = sSamusOam_Left_DiagonalDown_HangingOnHorizontalLadder_Frame0,
        .timer = 4
    },
    [2] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Left_Down_DelayAfterShootingOnHorizontalLadder[2] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_Left_Down_DelayAfterShootingOnHorizontalLadder_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_Down_DelayAfterShootingOnHorizontalLadder_Frame0,
        .pOam = sSamusOam_Left_Down_DelayAfterShootingOnHorizontalLadder_Frame0,
        .timer = 4
    },
    [1] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Left_Down_ShootingOnHorizontalLadder[3] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_Left_Down_ShootingOnHorizontalLadder_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_Down_ShootingOnHorizontalLadder_Frame0,
        .pOam = sSamusOam_Left_Down_ShootingOnHorizontalLadder_Frame0,
        .timer = 4
    },
    [1] = {
        .pTopGfx = sSamusGfx_Top_Left_Down_DelayAfterShootingOnHorizontalLadder_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_Down_DelayAfterShootingOnHorizontalLadder_Frame0,
        .pOam = sSamusOam_Left_Down_DelayAfterShootingOnHorizontalLadder_Frame0,
        .timer = 4
    },
    [2] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Right_HangingOnHorizontalLadder[2] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_Right_HangingOnHorizontalLadder_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_HangingOnHorizontalLadder_Frame0,
        .pOam = sSamusOam_Right_HangingOnHorizontalLadder_Frame0,
        .timer = 4
    },
    [1] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Right_ShootingOnHorizontalLadder[3] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_Right_ShootingOnHorizontalLadder_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_ShootingOnHorizontalLadder_Frame0,
        .pOam = sSamusOam_Right_ShootingOnHorizontalLadder_Frame0,
        .timer = 4
    },
    [1] = {
        .pTopGfx = sSamusGfx_Top_Right_HangingOnHorizontalLadder_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_HangingOnHorizontalLadder_Frame0,
        .pOam = sSamusOam_Right_HangingOnHorizontalLadder_Frame0,
        .timer = 4
    },
    [2] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Right_DiagonalDown_HangingOnHorizontalLadder[2] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_Right_DiagonalDown_HangingOnHorizontalLadder_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_DiagonalDown_HangingOnHorizontalLadder_Frame0,
        .pOam = sSamusOam_Right_DiagonalDown_HangingOnHorizontalLadder_Frame0,
        .timer = 4
    },
    [1] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Right_DiagonalDown_ShootingOnHorizontalLadder[3] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_Right_DiagonalDown_ShootingOnHorizontalLadder_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_DiagonalDown_ShootingOnHorizontalLadder_Frame0,
        .pOam = sSamusOam_Right_DiagonalDown_ShootingOnHorizontalLadder_Frame0,
        .timer = 4
    },
    [1] = {
        .pTopGfx = sSamusGfx_Top_Right_DiagonalDown_HangingOnHorizontalLadder_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_DiagonalDown_HangingOnHorizontalLadder_Frame0,
        .pOam = sSamusOam_Right_DiagonalDown_HangingOnHorizontalLadder_Frame0,
        .timer = 4
    },
    [2] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Right_Down_DelayAfterShootingOnHorizontalLadder[2] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_Right_Down_DelayAfterShootingOnHorizontalLadder_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_Down_DelayAfterShootingOnHorizontalLadder_Frame0,
        .pOam = sSamusOam_Right_Down_DelayAfterShootingOnHorizontalLadder_Frame0,
        .timer = 4
    },
    [1] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Right_Down_ShootingOnHorizontalLadder[3] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_Right_Down_ShootingOnHorizontalLadder_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_Down_ShootingOnHorizontalLadder_Frame0,
        .pOam = sSamusOam_Right_Down_ShootingOnHorizontalLadder_Frame0,
        .timer = 4
    },
    [1] = {
        .pTopGfx = sSamusGfx_Top_Right_Down_DelayAfterShootingOnHorizontalLadder_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_Down_DelayAfterShootingOnHorizontalLadder_Frame0,
        .pOam = sSamusOam_Right_Down_DelayAfterShootingOnHorizontalLadder_Frame0,
        .timer = 4
    },
    [2] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Left_PullingYourselfDownToStartHanging[3] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_Left_PullingYourselfUpFromHanging_Frame1,
        .pBottomGfx = sSamusGfx_Bottom_PullingYourselfUpFromHanging_Frame1,
        .pOam = sSamusOam_Left_PullingYourselfUpFromHanging_Frame1,
        .timer = 3
    },
    [1] = {
        .pTopGfx = sSamusGfx_Top_Left_HangingOnLedge_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_HangingOnLedge_Frame0,
        .pOam = sSamusOam_Left_HangingOnLedge_Frame0,
        .timer = 3
    },
    [2] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Right_PullingYourselfDownToStartHanging[3] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_Right_PullingYourselfUpFromHanging_Frame1,
        .pBottomGfx = sSamusGfx_Bottom_PullingYourselfUpFromHanging_Frame1,
        .pOam = sSamusOam_Right_PullingYourselfUpFromHanging_Frame1,
        .timer = 3
    },
    [1] = {
        .pTopGfx = sSamusGfx_Top_Right_HangingOnLedge_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_HangingOnLedge_Frame0,
        .pOam = sSamusOam_Right_HangingOnLedge_Frame0,
        .timer = 3
    },
    [2] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_2d6c5c[8] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_2d6c5c_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_HangingOnLedge_Frame3,
        .pOam = sSamusOam_2d6c5c_Frame0,
        .timer = 16
    },
    [1] = {
        .pTopGfx = sSamusGfx_Top_2d6c5c_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_HangingOnLedge_Frame3,
        .pOam = sSamusOam_2d6c5c_Frame0,
        .timer = 16
    },
    [2] = {
        .pTopGfx = sSamusGfx_Top_2d6c5c_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_HangingOnLedge_Frame3,
        .pOam = sSamusOam_2d6c5c_Frame0,
        .timer = 16
    },
    [3] = {
        .pTopGfx = sSamusGfx_Top_2d6c5c_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_HangingOnLedge_Frame3,
        .pOam = sSamusOam_2d6c5c_Frame0,
        .timer = 16
    },
    [4] = {
        .pTopGfx = sSamusGfx_Top_2d6c5c_Frame4,
        .pBottomGfx = sSamusGfx_Bottom_HangingOnLedge_Frame1,
        .pOam = sSamusOam_2d6c5c_Frame4,
        .timer = 16
    },
    [5] = {
        .pTopGfx = sSamusGfx_Top_2d6c5c_Frame5,
        .pBottomGfx = sSamusGfx_Bottom_HangingOnLedge_Frame5,
        .pOam = sSamusOam_2d6c5c_Frame5,
        .timer = 16
    },
    [6] = {
        .pTopGfx = sSamusGfx_Top_2d6c5c_Frame4,
        .pBottomGfx = sSamusGfx_Bottom_HangingOnLedge_Frame1,
        .pOam = sSamusOam_2d6c5c_Frame4,
        .timer = 16
    },
    [7] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_2d6cdc[8] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_2d6cdc_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_HangingOnLedge_Frame3,
        .pOam = sSamusOam_2d6cdc_Frame0,
        .timer = 16
    },
    [1] = {
        .pTopGfx = sSamusGfx_Top_2d6cdc_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_HangingOnLedge_Frame3,
        .pOam = sSamusOam_2d6cdc_Frame0,
        .timer = 16
    },
    [2] = {
        .pTopGfx = sSamusGfx_Top_2d6cdc_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_HangingOnLedge_Frame3,
        .pOam = sSamusOam_2d6cdc_Frame0,
        .timer = 16
    },
    [3] = {
        .pTopGfx = sSamusGfx_Top_2d6cdc_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_HangingOnLedge_Frame3,
        .pOam = sSamusOam_2d6cdc_Frame0,
        .timer = 16
    },
    [4] = {
        .pTopGfx = sSamusGfx_Top_2d6cdc_Frame4,
        .pBottomGfx = sSamusGfx_Bottom_HangingOnLedge_Frame1,
        .pOam = sSamusOam_2d6cdc_Frame0,
        .timer = 16
    },
    [5] = {
        .pTopGfx = sSamusGfx_Top_2d6cdc_Frame5,
        .pBottomGfx = sSamusGfx_Bottom_HangingOnLedge_Frame5,
        .pOam = sSamusOam_2d6cdc_Frame5,
        .timer = 16
    },
    [6] = {
        .pTopGfx = sSamusGfx_Top_2d6cdc_Frame4,
        .pBottomGfx = sSamusGfx_Bottom_HangingOnLedge_Frame1,
        .pOam = sSamusOam_2d6cdc_Frame0,
        .timer = 16
    },
    [7] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Right_Up_HoldingYourArmCannonOutOnAVerticalLadder[2] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_Right_Up_HoldingYourArmCannonOutOnAVerticalLadder_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_Right_Up_HoldingYourArmCannonOutOnAVerticalLadder_Frame0,
        .pOam = sSamusOam_Right_Up_HoldingYourArmCannonOutOnAVerticalLadder_Frame0,
        .timer = 4
    },
    [1] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Right_Up_ShootingOnVerticalLadder[3] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_Right_Up_ShootingOnVerticalLadder_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_Right_Up_ShootingOnVerticalLadder_Frame0,
        .pOam = sSamusOam_Right_Up_HoldingYourArmCannonOutOnAVerticalLadder_Frame0,
        .timer = 4
    },
    [1] = {
        .pTopGfx = sSamusGfx_Top_Right_Up_HoldingYourArmCannonOutOnAVerticalLadder_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_Right_Up_HoldingYourArmCannonOutOnAVerticalLadder_Frame0,
        .pOam = sSamusOam_Right_Up_HoldingYourArmCannonOutOnAVerticalLadder_Frame0,
        .timer = 4
    },
    [2] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Right_Down_HoldingYourArmCannonOutOnAVerticalLadder[2] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_Right_Down_HoldingYourArmCannonOutOnAVerticalLadder_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_Right_Down_HoldingYourArmCannonOutOnAVerticalLadder_Frame0,
        .pOam = sSamusOam_Right_Down_HoldingYourArmCannonOutOnAVerticalLadder_Frame0,
        .timer = 4
    },
    [1] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Right_Down_ShootingOnVerticalLadder[3] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_Right_Down_ShootingOnVerticalLadder_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_Right_Down_ShootingOnVerticalLadder_Frame0,
        .pOam = sSamusOam_Right_Down_HoldingYourArmCannonOutOnAVerticalLadder_Frame0,
        .timer = 4
    },
    [1] = {
        .pTopGfx = sSamusGfx_Top_Right_Down_HoldingYourArmCannonOutOnAVerticalLadder_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_Right_Down_HoldingYourArmCannonOutOnAVerticalLadder_Frame0,
        .pOam = sSamusOam_Right_Down_HoldingYourArmCannonOutOnAVerticalLadder_Frame0,
        .timer = 4
    },
    [2] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Left_Up_HoldingYourArmCannonOutOnAVerticalLadder[2] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_Left_Up_HoldingYourArmCannonOutOnAVerticalLadder_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_Left_Up_HoldingYourArmCannonOutOnAVerticalLadder_Frame0,
        .pOam = sSamusOam_Left_Up_HoldingYourArmCannonOutOnAVerticalLadder_Frame0,
        .timer = 4
    },
    [1] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Left_Up_ShootingOnVerticalLadder[3] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_Left_Up_ShootingOnVerticalLadder_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_Left_Up_ShootingOnVerticalLadder_Frame0,
        .pOam = sSamusOam_Left_Up_ShootingOnVerticalLadder_Frame0,
        .timer = 4
    },
    [1] = {
        .pTopGfx = sSamusGfx_Top_Left_Up_HoldingYourArmCannonOutOnAVerticalLadder_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_Left_Up_HoldingYourArmCannonOutOnAVerticalLadder_Frame0,
        .pOam = sSamusOam_Left_Up_HoldingYourArmCannonOutOnAVerticalLadder_Frame0,
        .timer = 4
    },
    [2] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Left_Down_HoldingYourArmCannonOutOnAVerticalLadder[2] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_Left_Down_HoldingYourArmCannonOutOnAVerticalLadder_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_Left_Down_HoldingYourArmCannonOutOnAVerticalLadder_Frame0,
        .pOam = sSamusOam_Left_Down_HoldingYourArmCannonOutOnAVerticalLadder_Frame0,
        .timer = 4
    },
    [1] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Left_Down_ShootingOnVerticalLadder[3] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_Left_Down_ShootingOnVerticalLadder_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_Left_Down_ShootingOnVerticalLadder_Frame0,
        .pOam = sSamusOam_Left_Down_ShootingOnVerticalLadder_Frame0,
        .timer = 4
    },
    [1] = {
        .pTopGfx = sSamusGfx_Top_Left_Down_HoldingYourArmCannonOutOnAVerticalLadder_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_Left_Down_HoldingYourArmCannonOutOnAVerticalLadder_Frame0,
        .pOam = sSamusOam_Left_Down_HoldingYourArmCannonOutOnAVerticalLadder_Frame0,
        .timer = 4
    },
    [2] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Left_ReadyToJump_HangingOnLedge[8] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_Left_ReadyToJump_HangingOnLedge_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_Left_ReadyToJump_HangingOnLedge_Frame0,
        .pOam = sSamusOam_Left_ReadyToJump_HangingOnLedge_Frame0,
        .timer = 16
    },
    [1] = {
        .pTopGfx = sSamusGfx_Top_Left_ReadyToJump_HangingOnLedge_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_Left_ReadyToJump_HangingOnLedge_Frame0,
        .pOam = sSamusOam_Left_ReadyToJump_HangingOnLedge_Frame0,
        .timer = 16
    },
    [2] = {
        .pTopGfx = sSamusGfx_Top_Left_ReadyToJump_HangingOnLedge_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_Left_ReadyToJump_HangingOnLedge_Frame0,
        .pOam = sSamusOam_Left_ReadyToJump_HangingOnLedge_Frame0,
        .timer = 16
    },
    [3] = {
        .pTopGfx = sSamusGfx_Top_Left_ReadyToJump_HangingOnLedge_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_Left_ReadyToJump_HangingOnLedge_Frame0,
        .pOam = sSamusOam_Left_ReadyToJump_HangingOnLedge_Frame0,
        .timer = 16
    },
    [4] = {
        .pTopGfx = sSamusGfx_Top_Left_ReadyToJump_HangingOnLedge_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_Left_ReadyToJump_HangingOnLedge_Frame0,
        .pOam = sSamusOam_Left_ReadyToJump_HangingOnLedge_Frame0,
        .timer = 16
    },
    [5] = {
        .pTopGfx = sSamusGfx_Top_Left_ReadyToJump_HangingOnLedge_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_Left_ReadyToJump_HangingOnLedge_Frame0,
        .pOam = sSamusOam_Left_ReadyToJump_HangingOnLedge_Frame0,
        .timer = 16
    },
    [6] = {
        .pTopGfx = sSamusGfx_Top_Left_ReadyToJump_HangingOnLedge_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_Left_ReadyToJump_HangingOnLedge_Frame0,
        .pOam = sSamusOam_Left_ReadyToJump_HangingOnLedge_Frame0,
        .timer = 16
    },
    [7] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Right_ReadyToJump_HangingOnLedge[8] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_Right_ReadyToJump_HangingOnLedge_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_Right_ReadyToJump_HangingOnLedge_Frame0,
        .pOam = sSamusOam_Right_ReadyToJump_HangingOnLedge_Frame0,
        .timer = 16
    },
    [1] = {
        .pTopGfx = sSamusGfx_Top_Right_ReadyToJump_HangingOnLedge_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_Right_ReadyToJump_HangingOnLedge_Frame0,
        .pOam = sSamusOam_Right_ReadyToJump_HangingOnLedge_Frame0,
        .timer = 16
    },
    [2] = {
        .pTopGfx = sSamusGfx_Top_Right_ReadyToJump_HangingOnLedge_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_Right_ReadyToJump_HangingOnLedge_Frame0,
        .pOam = sSamusOam_Right_ReadyToJump_HangingOnLedge_Frame0,
        .timer = 16
    },
    [3] = {
        .pTopGfx = sSamusGfx_Top_Right_ReadyToJump_HangingOnLedge_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_Right_ReadyToJump_HangingOnLedge_Frame0,
        .pOam = sSamusOam_Right_ReadyToJump_HangingOnLedge_Frame0,
        .timer = 16
    },
    [4] = {
        .pTopGfx = sSamusGfx_Top_Right_ReadyToJump_HangingOnLedge_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_Right_ReadyToJump_HangingOnLedge_Frame0,
        .pOam = sSamusOam_Right_ReadyToJump_HangingOnLedge_Frame0,
        .timer = 16
    },
    [5] = {
        .pTopGfx = sSamusGfx_Top_Right_ReadyToJump_HangingOnLedge_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_Right_ReadyToJump_HangingOnLedge_Frame0,
        .pOam = sSamusOam_Right_ReadyToJump_HangingOnLedge_Frame0,
        .timer = 16
    },
    [6] = {
        .pTopGfx = sSamusGfx_Top_Right_ReadyToJump_HangingOnLedge_Frame0,
        .pBottomGfx = sSamusGfx_Bottom_Right_ReadyToJump_HangingOnLedge_Frame0,
        .pOam = sSamusOam_Right_ReadyToJump_HangingOnLedge_Frame0,
        .timer = 16
    },
    [7] = SAMUS_ANIM_TERMINATOR
};

static const u8 sSamusGfx_Top_Left_SpaceJumping_Frame0[] = {
    8, 8,
    _INCBIN_U8("data/samus/gfx/Top_Left_SpaceJumping_Frame0.gfx")
};

static const u8 sSamusGfx_Top_Left_SpaceJumping_Frame1[] = {
    8, 8,
    _INCBIN_U8("data/samus/gfx/Top_Left_SpaceJumping_Frame1.gfx")
};

static const u8 sSamusGfx_Top_Left_SpaceJumping_Frame2[] = {
    8, 8,
    _INCBIN_U8("data/samus/gfx/Top_Left_SpaceJumping_Frame2.gfx")
};

static const u8 sSamusGfx_Top_Left_SpaceJumping_Frame3[] = {
    8, 8,
    _INCBIN_U8("data/samus/gfx/Top_Left_SpaceJumping_Frame3.gfx")
};

static const u8 sSamusGfx_Top_Left_ScrewAttacking_Frame8[] = {
    8, 8,
    _INCBIN_U8("data/samus/gfx/Top_Left_ScrewAttacking_Frame8.gfx")
};

static const u8 sSamusGfx_Top_Left_ScrewAttacking_Frame5[] = {
    8, 8,
    _INCBIN_U8("data/samus/gfx/Top_Left_ScrewAttacking_Frame5.gfx")
};

static const u8 sSamusGfx_Top_Left_ScrewAttacking_Frame6[] = {
    8, 8,
    _INCBIN_U8("data/samus/gfx/Top_Left_ScrewAttacking_Frame6.gfx")
};

static const u8 sSamusGfx_Top_Left_ScrewAttacking_Frame7[] = {
    8, 8,
    _INCBIN_U8("data/samus/gfx/Top_Left_ScrewAttacking_Frame7.gfx")
};

static const u16 sSamusOam_Left_SpaceJumping_Frame0[] = {
    2,
    OAM_ENTRY(-16, -27, OAM_DIMS_32x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-16, -11, OAM_DIMS_32x16, OAM_NO_FLIP, 0x4, 0, 0)
};

static const u16 sSamusOam_Left_SpaceJumping_Frame4[] = {
    2,
    OAM_ENTRY(-16, -11, OAM_DIMS_32x16, OAM_XY_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-16, -27, OAM_DIMS_32x16, OAM_XY_FLIP, 0x4, 0, 0)
};

static const u16 sSamusOam_Right_SpaceJumping_Frame0[] = {
    2,
    OAM_ENTRY(-16, -27, OAM_DIMS_32x16, OAM_X_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-16, -11, OAM_DIMS_32x16, OAM_X_FLIP, 0x4, 0, 0)
};

static const u16 sSamusOam_Right_SpaceJumping_Frame4[] = {
    2,
    OAM_ENTRY(-16, -11, OAM_DIMS_32x16, OAM_Y_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-16, -27, OAM_DIMS_32x16, OAM_Y_FLIP, 0x4, 0, 0)
};

const struct SamusAnimationData sSamusAnim_Left_SpaceJumping[9] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_Left_SpaceJumping_Frame0,
        .pBottomGfx = sSamusGfx_Empty,
        .pOam = sSamusOam_Left_SpaceJumping_Frame0,
        .timer = 1
    },
    [1] = {
        .pTopGfx = sSamusGfx_Top_Left_SpaceJumping_Frame1,
        .pBottomGfx = sSamusGfx_Empty,
        .pOam = sSamusOam_Left_SpaceJumping_Frame0,
        .timer = 1
    },
    [2] = {
        .pTopGfx = sSamusGfx_Top_Left_SpaceJumping_Frame2,
        .pBottomGfx = sSamusGfx_Empty,
        .pOam = sSamusOam_Left_SpaceJumping_Frame0,
        .timer = 1
    },
    [3] = {
        .pTopGfx = sSamusGfx_Top_Left_SpaceJumping_Frame3,
        .pBottomGfx = sSamusGfx_Empty,
        .pOam = sSamusOam_Left_SpaceJumping_Frame0,
        .timer = 1
    },
    [4] = {
        .pTopGfx = sSamusGfx_Top_Left_SpaceJumping_Frame0,
        .pBottomGfx = sSamusGfx_Empty,
        .pOam = sSamusOam_Left_SpaceJumping_Frame4,
        .timer = 1
    },
    [5] = {
        .pTopGfx = sSamusGfx_Top_Left_SpaceJumping_Frame1,
        .pBottomGfx = sSamusGfx_Empty,
        .pOam = sSamusOam_Left_SpaceJumping_Frame4,
        .timer = 1
    },
    [6] = {
        .pTopGfx = sSamusGfx_Top_Left_SpaceJumping_Frame2,
        .pBottomGfx = sSamusGfx_Empty,
        .pOam = sSamusOam_Left_SpaceJumping_Frame4,
        .timer = 1
    },
    [7] = {
        .pTopGfx = sSamusGfx_Top_Left_SpaceJumping_Frame3,
        .pBottomGfx = sSamusGfx_Empty,
        .pOam = sSamusOam_Left_SpaceJumping_Frame4,
        .timer = 1
    },
    [8] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Right_SpaceJumping[9] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_Left_SpaceJumping_Frame0,
        .pBottomGfx = sSamusGfx_Empty,
        .pOam = sSamusOam_Right_SpaceJumping_Frame0,
        .timer = 1
    },
    [1] = {
        .pTopGfx = sSamusGfx_Top_Left_SpaceJumping_Frame1,
        .pBottomGfx = sSamusGfx_Empty,
        .pOam = sSamusOam_Right_SpaceJumping_Frame0,
        .timer = 1
    },
    [2] = {
        .pTopGfx = sSamusGfx_Top_Left_SpaceJumping_Frame2,
        .pBottomGfx = sSamusGfx_Empty,
        .pOam = sSamusOam_Right_SpaceJumping_Frame0,
        .timer = 1
    },
    [3] = {
        .pTopGfx = sSamusGfx_Top_Left_SpaceJumping_Frame3,
        .pBottomGfx = sSamusGfx_Empty,
        .pOam = sSamusOam_Right_SpaceJumping_Frame0,
        .timer = 1
    },
    [4] = {
        .pTopGfx = sSamusGfx_Top_Left_SpaceJumping_Frame0,
        .pBottomGfx = sSamusGfx_Empty,
        .pOam = sSamusOam_Right_SpaceJumping_Frame4,
        .timer = 1
    },
    [5] = {
        .pTopGfx = sSamusGfx_Top_Left_SpaceJumping_Frame1,
        .pBottomGfx = sSamusGfx_Empty,
        .pOam = sSamusOam_Right_SpaceJumping_Frame4,
        .timer = 1
    },
    [6] = {
        .pTopGfx = sSamusGfx_Top_Left_SpaceJumping_Frame2,
        .pBottomGfx = sSamusGfx_Empty,
        .pOam = sSamusOam_Right_SpaceJumping_Frame4,
        .timer = 1
    },
    [7] = {
        .pTopGfx = sSamusGfx_Top_Left_SpaceJumping_Frame3,
        .pBottomGfx = sSamusGfx_Empty,
        .pOam = sSamusOam_Right_SpaceJumping_Frame4,
        .timer = 1
    },
    [8] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Left_ScrewAttacking[17] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_Left_SpaceJumping_Frame0,
        .pBottomGfx = sSamusGfx_Empty,
        .pOam = sSamusOam_Left_SpaceJumping_Frame0,
        .timer = 1
    },
    [1] = {
        .pTopGfx = sSamusGfx_Top_Left_SpaceJumping_Frame1,
        .pBottomGfx = sSamusGfx_Empty,
        .pOam = sSamusOam_Left_SpaceJumping_Frame0,
        .timer = 1
    },
    [2] = {
        .pTopGfx = sSamusGfx_Top_Left_SpaceJumping_Frame2,
        .pBottomGfx = sSamusGfx_Empty,
        .pOam = sSamusOam_Left_SpaceJumping_Frame0,
        .timer = 1
    },
    [3] = {
        .pTopGfx = sSamusGfx_Top_Left_SpaceJumping_Frame3,
        .pBottomGfx = sSamusGfx_Empty,
        .pOam = sSamusOam_Left_SpaceJumping_Frame0,
        .timer = 1
    },
    [4] = {
        .pTopGfx = sSamusGfx_Top_Left_SpaceJumping_Frame0,
        .pBottomGfx = sSamusGfx_Empty,
        .pOam = sSamusOam_Left_SpaceJumping_Frame4,
        .timer = 1
    },
    [5] = {
        .pTopGfx = sSamusGfx_Top_Left_ScrewAttacking_Frame5,
        .pBottomGfx = sSamusGfx_Empty,
        .pOam = sSamusOam_Left_SpaceJumping_Frame4,
        .timer = 1
    },
    [6] = {
        .pTopGfx = sSamusGfx_Top_Left_ScrewAttacking_Frame6,
        .pBottomGfx = sSamusGfx_Empty,
        .pOam = sSamusOam_Left_SpaceJumping_Frame4,
        .timer = 1
    },
    [7] = {
        .pTopGfx = sSamusGfx_Top_Left_ScrewAttacking_Frame7,
        .pBottomGfx = sSamusGfx_Empty,
        .pOam = sSamusOam_Left_SpaceJumping_Frame4,
        .timer = 1
    },
    [8] = {
        .pTopGfx = sSamusGfx_Top_Left_ScrewAttacking_Frame8,
        .pBottomGfx = sSamusGfx_Empty,
        .pOam = sSamusOam_Left_SpaceJumping_Frame0,
        .timer = 1
    },
    [9] = {
        .pTopGfx = sSamusGfx_Top_Left_ScrewAttacking_Frame5,
        .pBottomGfx = sSamusGfx_Empty,
        .pOam = sSamusOam_Left_SpaceJumping_Frame0,
        .timer = 1
    },
    [10] = {
        .pTopGfx = sSamusGfx_Top_Left_ScrewAttacking_Frame6,
        .pBottomGfx = sSamusGfx_Empty,
        .pOam = sSamusOam_Left_SpaceJumping_Frame0,
        .timer = 1
    },
    [11] = {
        .pTopGfx = sSamusGfx_Top_Left_ScrewAttacking_Frame7,
        .pBottomGfx = sSamusGfx_Empty,
        .pOam = sSamusOam_Left_SpaceJumping_Frame0,
        .timer = 1
    },
    [12] = {
        .pTopGfx = sSamusGfx_Top_Left_ScrewAttacking_Frame8,
        .pBottomGfx = sSamusGfx_Empty,
        .pOam = sSamusOam_Left_SpaceJumping_Frame4,
        .timer = 1
    },
    [13] = {
        .pTopGfx = sSamusGfx_Top_Left_ScrewAttacking_Frame5,
        .pBottomGfx = sSamusGfx_Empty,
        .pOam = sSamusOam_Left_SpaceJumping_Frame4,
        .timer = 1
    },
    [14] = {
        .pTopGfx = sSamusGfx_Top_Left_ScrewAttacking_Frame6,
        .pBottomGfx = sSamusGfx_Empty,
        .pOam = sSamusOam_Left_SpaceJumping_Frame4,
        .timer = 1
    },
    [15] = {
        .pTopGfx = sSamusGfx_Top_Left_ScrewAttacking_Frame7,
        .pBottomGfx = sSamusGfx_Empty,
        .pOam = sSamusOam_Left_SpaceJumping_Frame4,
        .timer = 1
    },
    [16] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Right_ScrewAttacking[17] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_Left_SpaceJumping_Frame0,
        .pBottomGfx = sSamusGfx_Empty,
        .pOam = sSamusOam_Right_SpaceJumping_Frame0,
        .timer = 1
    },
    [1] = {
        .pTopGfx = sSamusGfx_Top_Left_SpaceJumping_Frame1,
        .pBottomGfx = sSamusGfx_Empty,
        .pOam = sSamusOam_Right_SpaceJumping_Frame0,
        .timer = 1
    },
    [2] = {
        .pTopGfx = sSamusGfx_Top_Left_SpaceJumping_Frame2,
        .pBottomGfx = sSamusGfx_Empty,
        .pOam = sSamusOam_Right_SpaceJumping_Frame0,
        .timer = 1
    },
    [3] = {
        .pTopGfx = sSamusGfx_Top_Left_SpaceJumping_Frame3,
        .pBottomGfx = sSamusGfx_Empty,
        .pOam = sSamusOam_Right_SpaceJumping_Frame0,
        .timer = 1
    },
    [4] = {
        .pTopGfx = sSamusGfx_Top_Left_SpaceJumping_Frame0,
        .pBottomGfx = sSamusGfx_Empty,
        .pOam = sSamusOam_Right_SpaceJumping_Frame4,
        .timer = 1
    },
    [5] = {
        .pTopGfx = sSamusGfx_Top_Left_ScrewAttacking_Frame5,
        .pBottomGfx = sSamusGfx_Empty,
        .pOam = sSamusOam_Right_SpaceJumping_Frame4,
        .timer = 1
    },
    [6] = {
        .pTopGfx = sSamusGfx_Top_Left_ScrewAttacking_Frame6,
        .pBottomGfx = sSamusGfx_Empty,
        .pOam = sSamusOam_Right_SpaceJumping_Frame4,
        .timer = 1
    },
    [7] = {
        .pTopGfx = sSamusGfx_Top_Left_ScrewAttacking_Frame7,
        .pBottomGfx = sSamusGfx_Empty,
        .pOam = sSamusOam_Right_SpaceJumping_Frame4,
        .timer = 1
    },
    [8] = {
        .pTopGfx = sSamusGfx_Top_Left_ScrewAttacking_Frame8,
        .pBottomGfx = sSamusGfx_Empty,
        .pOam = sSamusOam_Right_SpaceJumping_Frame0,
        .timer = 1
    },
    [9] = {
        .pTopGfx = sSamusGfx_Top_Left_ScrewAttacking_Frame5,
        .pBottomGfx = sSamusGfx_Empty,
        .pOam = sSamusOam_Right_SpaceJumping_Frame0,
        .timer = 1
    },
    [10] = {
        .pTopGfx = sSamusGfx_Top_Left_ScrewAttacking_Frame6,
        .pBottomGfx = sSamusGfx_Empty,
        .pOam = sSamusOam_Right_SpaceJumping_Frame0,
        .timer = 1
    },
    [11] = {
        .pTopGfx = sSamusGfx_Top_Left_ScrewAttacking_Frame7,
        .pBottomGfx = sSamusGfx_Empty,
        .pOam = sSamusOam_Right_SpaceJumping_Frame0,
        .timer = 1
    },
    [12] = {
        .pTopGfx = sSamusGfx_Top_Left_ScrewAttacking_Frame8,
        .pBottomGfx = sSamusGfx_Empty,
        .pOam = sSamusOam_Right_SpaceJumping_Frame4,
        .timer = 1
    },
    [13] = {
        .pTopGfx = sSamusGfx_Top_Left_ScrewAttacking_Frame5,
        .pBottomGfx = sSamusGfx_Empty,
        .pOam = sSamusOam_Right_SpaceJumping_Frame4,
        .timer = 1
    },
    [14] = {
        .pTopGfx = sSamusGfx_Top_Left_ScrewAttacking_Frame6,
        .pBottomGfx = sSamusGfx_Empty,
        .pOam = sSamusOam_Right_SpaceJumping_Frame4,
        .timer = 1
    },
    [15] = {
        .pTopGfx = sSamusGfx_Top_Left_ScrewAttacking_Frame7,
        .pBottomGfx = sSamusGfx_Empty,
        .pOam = sSamusOam_Right_SpaceJumping_Frame4,
        .timer = 1
    },
    [16] = SAMUS_ANIM_TERMINATOR
};

static const u8 sSamusGfx_Top_Left_Dying_Frame0[] = {
    8, 8,
    _INCBIN_U8("data/samus/gfx/Top_Left_Dying_Frame0.gfx")
};

static const u8 sSamusGfx_Top_Left_Dying_Frame1[] = {
    8, 8,
    _INCBIN_U8("data/samus/gfx/Top_Left_Dying_Frame1.gfx")
};

static const u8 sSamusGfx_Top_Left_Dying_Frame2[] = {
    8, 8,
    _INCBIN_U8("data/samus/gfx/Top_Left_Dying_Frame2.gfx")
};

static const u8 sSamusGfx_Top_Left_Dying_Frame4[] = {
    8, 8,
    _INCBIN_U8("data/samus/gfx/Top_Left_Dying_Frame4.gfx")
};

static const u8 sSamusGfx_Top_Left_Dying_Frame5[] = {
    8, 8,
    _INCBIN_U8("data/samus/gfx/Top_Left_Dying_Frame5.gfx")
};

static const u8 sSamusGfx_Top_Left_Dying_Frame6[] = {
    9, 8,
    _INCBIN_U8("data/samus/gfx/Top_Left_Dying_Frame6.gfx")
};

static const u8 sSamusGfx_Top_Left_Dying_Frame7[] = {
    4, 0,
    _INCBIN_U8("data/samus/gfx/Top_Left_Dying_Frame7.gfx")
};

static const u8 sSamusGfx_Top_Left_Dying_Frame8[] = {
    2, 0,
    _INCBIN_U8("data/samus/gfx/Top_Left_Dying_Frame8.gfx")
};

static const u16 sSamusOam_Left_Dying_Frame0[] = {
    2,
    OAM_ENTRY(-16, -32, OAM_DIMS_32x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-16, -16, OAM_DIMS_32x16, OAM_NO_FLIP, 0x4, 0, 0)
};

static const u16 sSamusOam_Left_Dying_Frame6[] = {
    3,
    OAM_ENTRY(-16, -32, OAM_DIMS_32x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-16, -16, OAM_DIMS_32x16, OAM_NO_FLIP, 0x4, 0, 0),
    OAM_ENTRY(-8, -40, OAM_DIMS_8x8, OAM_NO_FLIP, 0x8, 0, 0)
};

static const u16 sSamusOam_Left_Dying_Frame7[] = {
    4,
    OAM_ENTRY(-21, -34, OAM_DIMS_8x8, OAM_X_FLIP, 0x0, 0, 0),
    OAM_ENTRY(2, -34, OAM_DIMS_8x8, OAM_Y_FLIP, 0x1, 0, 0),
    OAM_ENTRY(-18, -9, OAM_DIMS_8x8, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(10, -49, OAM_DIMS_8x8, OAM_NO_FLIP, 0x3, 0, 0)
};

static const u16 sSamusOam_Left_Dying_Frame8[] = {
    2,
    OAM_ENTRY(4, -34, OAM_DIMS_8x8, OAM_XY_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-26, -26, OAM_DIMS_8x8, OAM_NO_FLIP, 0x1, 0, 0)
};

static const u16 sSamusOam_Right_Dying_Frame0[] = {
    2,
    OAM_ENTRY(-16, -32, OAM_DIMS_32x16, OAM_X_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-16, -16, OAM_DIMS_32x16, OAM_X_FLIP, 0x4, 0, 0)
};

static const u16 sSamusOam_Right_Dying_Frame6[] = {
    3,
    OAM_ENTRY(-16, -32, OAM_DIMS_32x16, OAM_X_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-16, -16, OAM_DIMS_32x16, OAM_X_FLIP, 0x4, 0, 0),
    OAM_ENTRY(0, -40, OAM_DIMS_8x8, OAM_X_FLIP, 0x8, 0, 0)
};

static const u16 sSamusOam_Right_Dying_Frame7[] = {
    4,
    OAM_ENTRY(13, -34, OAM_DIMS_8x8, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-10, -34, OAM_DIMS_8x8, OAM_XY_FLIP, 0x1, 0, 0),
    OAM_ENTRY(10, -9, OAM_DIMS_8x8, OAM_X_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-18, -49, OAM_DIMS_8x8, OAM_X_FLIP, 0x3, 0, 0)
};

static const u16 sSamusOam_Right_Dying_Frame8[] = {
    2,
    OAM_ENTRY(-12, -34, OAM_DIMS_8x8, OAM_Y_FLIP, 0x0, 0, 0),
    OAM_ENTRY(18, -26, OAM_DIMS_8x8, OAM_X_FLIP, 0x1, 0, 0)
};

const struct SamusAnimationData sSamusAnim_Left_Dying[11] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_Left_Dying_Frame0,
        .pBottomGfx = sSamusGfx_Empty,
        .pOam = sSamusOam_Left_Dying_Frame0,
        .timer = 1
    },
    [1] = {
        .pTopGfx = sSamusGfx_Top_Left_Dying_Frame1,
        .pBottomGfx = sSamusGfx_Empty,
        .pOam = sSamusOam_Left_Dying_Frame0,
        .timer = 2
    },
    [2] = {
        .pTopGfx = sSamusGfx_Top_Left_Dying_Frame2,
        .pBottomGfx = sSamusGfx_Empty,
        .pOam = sSamusOam_Left_Dying_Frame0,
        .timer = 1
    },
    [3] = {
        .pTopGfx = sSamusGfx_Top_Left_Dying_Frame0,
        .pBottomGfx = sSamusGfx_Empty,
        .pOam = sSamusOam_Left_Dying_Frame0,
        .timer = 4
    },
    [4] = {
        .pTopGfx = sSamusGfx_Top_Left_Dying_Frame4,
        .pBottomGfx = sSamusGfx_Empty,
        .pOam = sSamusOam_Left_Dying_Frame0,
        .timer = 2
    },
    [5] = {
        .pTopGfx = sSamusGfx_Top_Left_Dying_Frame5,
        .pBottomGfx = sSamusGfx_Empty,
        .pOam = sSamusOam_Left_Dying_Frame0,
        .timer = 2
    },
    [6] = {
        .pTopGfx = sSamusGfx_Top_Left_Dying_Frame6,
        .pBottomGfx = sSamusGfx_Empty,
        .pOam = sSamusOam_Left_Dying_Frame6,
        .timer = 3
    },
    [7] = {
        .pTopGfx = sSamusGfx_Top_Left_Dying_Frame7,
        .pBottomGfx = sSamusGfx_Empty,
        .pOam = sSamusOam_Left_Dying_Frame7,
        .timer = 4
    },
    [8] = {
        .pTopGfx = sSamusGfx_Top_Left_Dying_Frame8,
        .pBottomGfx = sSamusGfx_Empty,
        .pOam = sSamusOam_Left_Dying_Frame8,
        .timer = 4
    },
    [9] = {
        .pTopGfx = sSamusGfx_Top_Left_Dying_Frame8,
        .pBottomGfx = sSamusGfx_Empty,
        .pOam = sSamusOam_Empty,
        .timer = 4
    },
    [10] = SAMUS_ANIM_TERMINATOR
};

const struct SamusAnimationData sSamusAnim_Right_Dying[11] = {
    [0] = {
        .pTopGfx = sSamusGfx_Top_Left_Dying_Frame0,
        .pBottomGfx = sSamusGfx_Empty,
        .pOam = sSamusOam_Right_Dying_Frame0,
        .timer = 1
    },
    [1] = {
        .pTopGfx = sSamusGfx_Top_Left_Dying_Frame1,
        .pBottomGfx = sSamusGfx_Empty,
        .pOam = sSamusOam_Right_Dying_Frame0,
        .timer = 2
    },
    [2] = {
        .pTopGfx = sSamusGfx_Top_Left_Dying_Frame2,
        .pBottomGfx = sSamusGfx_Empty,
        .pOam = sSamusOam_Right_Dying_Frame0,
        .timer = 1
    },
    [3] = {
        .pTopGfx = sSamusGfx_Top_Left_Dying_Frame0,
        .pBottomGfx = sSamusGfx_Empty,
        .pOam = sSamusOam_Right_Dying_Frame0,
        .timer = 4
    },
    [4] = {
        .pTopGfx = sSamusGfx_Top_Left_Dying_Frame4,
        .pBottomGfx = sSamusGfx_Empty,
        .pOam = sSamusOam_Right_Dying_Frame0,
        .timer = 2
    },
    [5] = {
        .pTopGfx = sSamusGfx_Top_Left_Dying_Frame5,
        .pBottomGfx = sSamusGfx_Empty,
        .pOam = sSamusOam_Right_Dying_Frame0,
        .timer = 2
    },
    [6] = {
        .pTopGfx = sSamusGfx_Top_Left_Dying_Frame6,
        .pBottomGfx = sSamusGfx_Empty,
        .pOam = sSamusOam_Right_Dying_Frame6,
        .timer = 3
    },
    [7] = {
        .pTopGfx = sSamusGfx_Top_Left_Dying_Frame7,
        .pBottomGfx = sSamusGfx_Empty,
        .pOam = sSamusOam_Right_Dying_Frame7,
        .timer = 4
    },
    [8] = {
        .pTopGfx = sSamusGfx_Top_Left_Dying_Frame8,
        .pBottomGfx = sSamusGfx_Empty,
        .pOam = sSamusOam_Right_Dying_Frame8,
        .timer = 4
    },
    [9] = {
        .pTopGfx = sSamusGfx_Top_Left_Dying_Frame8,
        .pBottomGfx = sSamusGfx_Empty,
        .pOam = sSamusOam_Empty,
        .timer = 4
    },
    [10] = SAMUS_ANIM_TERMINATOR
};

static const u8 sSamusGfx_Top_LoadingSave_Frame1[] = {
    5, 3,
    _INCBIN_U8("data/samus/gfx/Top_LoadingSave_Frame1.gfx")
};

static const u8 sSamusGfx_Top_LoadingSave_Frame3[] = {
    5, 5,
    _INCBIN_U8("data/samus/gfx/Top_LoadingSave_Frame3.gfx")
};

static const u8 sSamusGfx_Top_LoadingSave_Frame5[] = {
    8, 5,
    _INCBIN_U8("data/samus/gfx/Top_LoadingSave_Frame5.gfx")
};

static const u8 sSamusGfx_Top_LoadingSave_Frame2[] = {
    8, 6,
    _INCBIN_U8("data/samus/gfx/Top_LoadingSave_Frame2.gfx")
};

static const u8 sSamusGfx_Top_LoadingSave_Frame4[] = {
    8, 6,
    _INCBIN_U8("data/samus/gfx/Top_LoadingSave_Frame4.gfx")
};

static const u8 sSamusGfx_Top_LoadingSave_Frame6[] = {
    9, 6,
    _INCBIN_U8("data/samus/gfx/Top_LoadingSave_Frame6.gfx")
};

static const u16 sSamusOam_LoadingSave_Frame1[] = {
    3,
    OAM_ENTRY(-12, -38, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(4, -38, OAM_DIMS_8x16, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-12, -22, OAM_DIMS_16x8, OAM_NO_FLIP, 0x3, 0, 0)
};

static const u16 sSamusOam_LoadingSave_Frame3[] = {
    3,
    OAM_ENTRY(-11, -40, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(5, -37, OAM_DIMS_8x16, OAM_NO_FLIP, 0x4, 0, 0),
    OAM_ENTRY(-11, -24, OAM_DIMS_16x16, OAM_NO_FLIP, 0x2, 0, 0)
};

static const u16 sSamusOam_LoadingSave_Frame5[] = {
    5,
    OAM_ENTRY(-13, -39, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(3, -39, OAM_DIMS_8x16, OAM_NO_FLIP, 0x4, 0, 0),
    OAM_ENTRY(-5, -23, OAM_DIMS_16x16, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-13, -23, OAM_DIMS_8x8, OAM_NO_FLIP, 0x7, 0, 0),
    OAM_ENTRY(-5, -7, OAM_DIMS_16x8, OAM_NO_FLIP, 0x5, 0, 0)
};

static const u16 sSamusOam_LoadingSave_Frame2[] = {
    5,
    OAM_ENTRY(-12, -40, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(4, -40, OAM_DIMS_8x16, OAM_NO_FLIP, 0x4, 0, 0),
    OAM_ENTRY(-12, -24, OAM_DIMS_16x16, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(4, -24, OAM_DIMS_8x16, OAM_NO_FLIP, 0x5, 0, 0),
    OAM_ENTRY(-9, -8, OAM_DIMS_16x8, OAM_NO_FLIP, 0x6, 0, 0)
};

static const u16 sSamusOam_LoadingSave_Frame4[] = {
    5,
    OAM_ENTRY(-12, -40, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(4, -40, OAM_DIMS_8x16, OAM_NO_FLIP, 0x4, 0, 0),
    OAM_ENTRY(-12, -24, OAM_DIMS_16x16, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(4, -24, OAM_DIMS_8x16, OAM_NO_FLIP, 0x5, 0, 0),
    OAM_ENTRY(-6, -8, OAM_DIMS_16x8, OAM_NO_FLIP, 0x6, 0, 0)
};

static const u16 sSamusOam_LoadingSave_Frame6[] = {
    6,
    OAM_ENTRY(-12, -40, OAM_DIMS_16x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(4, -40, OAM_DIMS_8x16, OAM_NO_FLIP, 0x4, 0, 0),
    OAM_ENTRY(-12, -8, OAM_DIMS_16x8, OAM_NO_FLIP, 0x6, 0, 0),
    OAM_ENTRY(4, -8, OAM_DIMS_8x8, OAM_NO_FLIP, 0x8, 0, 0),
    OAM_ENTRY(-12, -24, OAM_DIMS_16x16, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(4, -24, OAM_DIMS_8x16, OAM_NO_FLIP, 0x5, 0, 0)
};

const struct SamusAnimationData sSamusAnim_LoadingSave[29] = {
    [0] = {
        .pTopGfx = sSamusGfx_Empty,
        .pBottomGfx = sSamusGfx_Empty,
        .pOam = sSamusOam_Empty,
        .timer = 10
    },
    [1] = {
        .pTopGfx = sSamusGfx_Top_LoadingSave_Frame1,
        .pBottomGfx = sSamusGfx_Empty,
        .pOam = sSamusOam_LoadingSave_Frame1,
        .timer = 7
    },
    [2] = {
        .pTopGfx = sSamusGfx_Top_LoadingSave_Frame2,
        .pBottomGfx = sSamusGfx_Empty,
        .pOam = sSamusOam_LoadingSave_Frame2,
        .timer = 1
    },
    [3] = {
        .pTopGfx = sSamusGfx_Top_LoadingSave_Frame3,
        .pBottomGfx = sSamusGfx_Empty,
        .pOam = sSamusOam_LoadingSave_Frame3,
        .timer = 7
    },
    [4] = {
        .pTopGfx = sSamusGfx_Top_LoadingSave_Frame4,
        .pBottomGfx = sSamusGfx_Empty,
        .pOam = sSamusOam_LoadingSave_Frame4,
        .timer = 1
    },
    [5] = {
        .pTopGfx = sSamusGfx_Top_LoadingSave_Frame5,
        .pBottomGfx = sSamusGfx_Empty,
        .pOam = sSamusOam_LoadingSave_Frame5,
        .timer = 7
    },
    [6] = {
        .pTopGfx = sSamusGfx_Top_LoadingSave_Frame6,
        .pBottomGfx = sSamusGfx_Empty,
        .pOam = sSamusOam_LoadingSave_Frame6,
        .timer = 1
    },
    [7] = {
        .pTopGfx = sSamusGfx_Top_LoadingSave_Frame2,
        .pBottomGfx = sSamusGfx_Empty,
        .pOam = sSamusOam_LoadingSave_Frame2,
        .timer = 7
    },
    [8] = {
        .pTopGfx = sSamusGfx_Top_LoadingSave_Frame6,
        .pBottomGfx = sSamusGfx_Empty,
        .pOam = sSamusOam_LoadingSave_Frame6,
        .timer = 1
    },
    [9] = {
        .pTopGfx = sSamusGfx_Top_LoadingSave_Frame4,
        .pBottomGfx = sSamusGfx_Empty,
        .pOam = sSamusOam_LoadingSave_Frame4,
        .timer = 7
    },
    [10] = {
        .pTopGfx = sSamusGfx_Top_LoadingSave_Frame6,
        .pBottomGfx = sSamusGfx_Empty,
        .pOam = sSamusOam_LoadingSave_Frame6,
        .timer = 4
    },
    [11] = {
        .pTopGfx = sSamusGfx_Top_LoadingSave_Frame6,
        .pBottomGfx = sSamusGfx_Empty,
        .pOam = sSamusOam_LoadingSave_Frame6,
        .timer = 1
    },
    [12] = {
        .pTopGfx = sSamusGfx_Top_LoadingSave_Frame6,
        .pBottomGfx = sSamusGfx_Empty,
        .pOam = sSamusOam_LoadingSave_Frame6,
        .timer = 4
    },
    [13] = {
        .pTopGfx = sSamusGfx_Top_LoadingSave_Frame6,
        .pBottomGfx = sSamusGfx_Empty,
        .pOam = sSamusOam_LoadingSave_Frame6,
        .timer = 1
    },
    [14] = {
        .pTopGfx = sSamusGfx_Top_LoadingSave_Frame6,
        .pBottomGfx = sSamusGfx_Empty,
        .pOam = sSamusOam_LoadingSave_Frame6,
        .timer = 4
    },
    [15] = {
        .pTopGfx = sSamusGfx_Top_LoadingSave_Frame6,
        .pBottomGfx = sSamusGfx_Empty,
        .pOam = sSamusOam_LoadingSave_Frame6,
        .timer = 1
    },
    [16] = {
        .pTopGfx = sSamusGfx_Top_LoadingSave_Frame6,
        .pBottomGfx = sSamusGfx_Empty,
        .pOam = sSamusOam_LoadingSave_Frame6,
        .timer = 4
    },
    [17] = {
        .pTopGfx = sSamusGfx_Top_LoadingSave_Frame6,
        .pBottomGfx = sSamusGfx_Empty,
        .pOam = sSamusOam_LoadingSave_Frame6,
        .timer = 1
    },
    [18] = {
        .pTopGfx = sSamusGfx_Top_LoadingSave_Frame6,
        .pBottomGfx = sSamusGfx_Empty,
        .pOam = sSamusOam_LoadingSave_Frame6,
        .timer = 4
    },
    [19] = {
        .pTopGfx = sSamusGfx_Top_LoadingSave_Frame6,
        .pBottomGfx = sSamusGfx_Empty,
        .pOam = sSamusOam_LoadingSave_Frame6,
        .timer = 1
    },
    [20] = {
        .pTopGfx = sSamusGfx_Top_LoadingSave_Frame6,
        .pBottomGfx = sSamusGfx_Empty,
        .pOam = sSamusOam_LoadingSave_Frame6,
        .timer = 4
    },
    [21] = {
        .pTopGfx = sSamusGfx_Top_LoadingSave_Frame6,
        .pBottomGfx = sSamusGfx_Empty,
        .pOam = sSamusOam_LoadingSave_Frame6,
        .timer = 1
    },
    [22] = {
        .pTopGfx = sSamusGfx_Top_LoadingSave_Frame6,
        .pBottomGfx = sSamusGfx_Empty,
        .pOam = sSamusOam_LoadingSave_Frame6,
        .timer = 4
    },
    [23] = {
        .pTopGfx = sSamusGfx_Top_LoadingSave_Frame6,
        .pBottomGfx = sSamusGfx_Empty,
        .pOam = sSamusOam_LoadingSave_Frame6,
        .timer = 1
    },
    [24] = {
        .pTopGfx = sSamusGfx_Top_LoadingSave_Frame6,
        .pBottomGfx = sSamusGfx_Empty,
        .pOam = sSamusOam_LoadingSave_Frame6,
        .timer = 4
    },
    [25] = {
        .pTopGfx = sSamusGfx_Top_LoadingSave_Frame6,
        .pBottomGfx = sSamusGfx_Empty,
        .pOam = sSamusOam_LoadingSave_Frame6,
        .timer = 1
    },
    [26] = {
        .pTopGfx = sSamusGfx_Top_LoadingSave_Frame6,
        .pBottomGfx = sSamusGfx_Empty,
        .pOam = sSamusOam_LoadingSave_Frame6,
        .timer = 4
    },
    [27] = {
        .pTopGfx = sSamusGfx_Top_LoadingSave_Frame6,
        .pBottomGfx = sSamusGfx_Empty,
        .pOam = sSamusOam_LoadingSave_Frame6,
        .timer = 180
    },
    [28] = SAMUS_ANIM_TERMINATOR
};

static const u8 sSamusGfx_Top_Saving_Frame32[] = {
    19, 1,
    _INCBIN_U8("data/samus/gfx/Top_Saving_Frame32.gfx")
};

static const u8 sSamusGfx_Bottom_Saving_Frame0[] = {
    10, 8,
    _INCBIN_U8("data/samus/gfx/Bottom_Saving_Frame0.gfx")
};

static const u8 sSamusGfx_Top_Saving_Frame34[] = {
    17, 2,
    _INCBIN_U8("data/samus/gfx/Top_Saving_Frame34.gfx")
};

static const u8 sSamusGfx_Top_Saving_Frame36[] = {
    16, 3,
    _INCBIN_U8("data/samus/gfx/Top_Saving_Frame36.gfx")
};

static const u8 sSamusGfx_Top_Saving_Frame38[] = {
    16, 3,
    _INCBIN_U8("data/samus/gfx/Top_Saving_Frame38.gfx")
};

static const u8 sSamusGfx_Top_Saving_Frame33[] = {
    20, 16,
    _INCBIN_U8("data/samus/gfx/Top_Saving_Frame33.gfx")
};

static const u8 sSamusGfx_Bottom_Saving_Frame9[] = {
    12, 8,
    _INCBIN_U8("data/samus/gfx/Bottom_Saving_Frame9.gfx")
};

static const u8 sSamusGfx_Top_Saving_Frame35[] = {
    20, 15,
    _INCBIN_U8("data/samus/gfx/Top_Saving_Frame35.gfx")
};

static const u8 sSamusGfx_Top_Saving_Frame37[] = {
    20, 15,
    _INCBIN_U8("data/samus/gfx/Top_Saving_Frame37.gfx")
};

static const u8 sSamusGfx_Top_Saving_Frame39[] = {
    20, 15,
    _INCBIN_U8("data/samus/gfx/Top_Saving_Frame39.gfx")
};

static const u8 sSamusGfx_Top_Saving_Frame1[] = {
    4, 4,
    _INCBIN_U8("data/samus/gfx/Top_Saving_Frame1.gfx")
};

static const u8 sSamusGfx_Top_Saving_Frame3[] = {
    4, 4,
    _INCBIN_U8("data/samus/gfx/Top_Saving_Frame3.gfx")
};

static const u8 sSamusGfx_Top_Saving_Frame5[] = {
    4, 4,
    _INCBIN_U8("data/samus/gfx/Top_Saving_Frame5.gfx")
};

static const u8 sSamusGfx_Top_Saving_Frame7[] = {
    4, 4,
    _INCBIN_U8("data/samus/gfx/Top_Saving_Frame7.gfx")
};

static const u8 sSamusGfx_Top_Saving_Frame9[] = {
    13, 5,
    _INCBIN_U8("data/samus/gfx/Top_Saving_Frame9.gfx")
};

static const u8 sSamusGfx_Top_Saving_Frame11[] = {
    11, 5,
    _INCBIN_U8("data/samus/gfx/Top_Saving_Frame11.gfx")
};

static const u8 sSamusGfx_Top_Saving_Frame13[] = {
    11, 5,
    _INCBIN_U8("data/samus/gfx/Top_Saving_Frame13.gfx")
};

static const u8 sSamusGfx_Top_Saving_Frame15[] = {
    12, 6,
    _INCBIN_U8("data/samus/gfx/Top_Saving_Frame15.gfx")
};

static const u8 sSamusGfx_Top_Saving_Frame17[] = {
    17, 9,
    _INCBIN_U8("data/samus/gfx/Top_Saving_Frame17.gfx")
};

static const u8 sSamusGfx_Top_Saving_Frame19[] = {
    15, 9,
    _INCBIN_U8("data/samus/gfx/Top_Saving_Frame19.gfx")
};

static const u8 sSamusGfx_Top_Saving_Frame21[] = {
    15, 9,
    _INCBIN_U8("data/samus/gfx/Top_Saving_Frame21.gfx")
};

static const u8 sSamusGfx_Top_Saving_Frame23[] = {
    16, 10,
    _INCBIN_U8("data/samus/gfx/Top_Saving_Frame23.gfx")
};

static const u8 sSamusGfx_Top_Saving_Frame16[] = {
    10, 0,
    _INCBIN_U8("data/samus/gfx/Top_Saving_Frame16.gfx")
};

static const u8 sSamusGfx_Top_Saving_Frame18[] = {
    10, 1,
    _INCBIN_U8("data/samus/gfx/Top_Saving_Frame18.gfx")
};

static const u8 sSamusGfx_Top_Saving_Frame20[] = {
    9, 2,
    _INCBIN_U8("data/samus/gfx/Top_Saving_Frame20.gfx")
};

static const u8 sSamusGfx_Top_Saving_Frame22[] = {
    8, 1,
    _INCBIN_U8("data/samus/gfx/Top_Saving_Frame22.gfx")
};

static const u16 sSamusOam_Saving_Frame32[] = {
    20,
    OAM_ENTRY(16, -29, OAM_DIMS_8x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(5, -13, OAM_DIMS_8x8, OAM_NO_FLIP, 0xb, 0, 0),
    OAM_ENTRY(-27, -15, OAM_DIMS_8x8, OAM_NO_FLIP, 0xc, 0, 0),
    OAM_ENTRY(-19, -8, OAM_DIMS_16x8, OAM_NO_FLIP, 0x1, 0, 0),
    OAM_ENTRY(-3, -8, OAM_DIMS_8x8, OAM_NO_FLIP, 0xd, 0, 0),
    OAM_ENTRY(-5, -35, OAM_DIMS_16x8, OAM_NO_FLIP, 0x3, 0, 0),
    OAM_ENTRY(-21, -35, OAM_DIMS_16x8, OAM_NO_FLIP, 0x5, 0, 0),
    OAM_ENTRY(7, -27, OAM_DIMS_8x8, OAM_NO_FLIP, 0xe, 0, 0),
    OAM_ENTRY(-16, -40, OAM_DIMS_32x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-16, -24, OAM_DIMS_32x16, OAM_NO_FLIP, 0x18, 0, 0),
    OAM_ENTRY(-8, -8, OAM_DIMS_16x8, OAM_NO_FLIP, 0x1c, 0, 0),
    OAM_ENTRY(-24, -30, OAM_DIMS_8x8, OAM_NO_FLIP, 0xf, 0, 0),
    OAM_ENTRY(-16, -24, OAM_DIMS_8x8, OAM_NO_FLIP, 0x10, 0, 0),
    OAM_ENTRY(-8, -20, OAM_DIMS_16x8, OAM_NO_FLIP, 0x7, 0, 0),
    OAM_ENTRY(8, -21, OAM_DIMS_8x8, OAM_NO_FLIP, 0x11, 0, 0),
    OAM_ENTRY(-26, -21, OAM_DIMS_8x8, OAM_NO_FLIP, 0x12, 0, 0),
    OAM_ENTRY(-19, -32, OAM_DIMS_8x8, OAM_NO_FLIP, 0x12, 0, 0),
    OAM_ENTRY(-10, -38, OAM_DIMS_8x8, OAM_NO_FLIP, 0x12, 0, 0),
    OAM_ENTRY(0, -40, OAM_DIMS_16x8, OAM_NO_FLIP, 0x9, 0, 0),
    OAM_ENTRY(18, -36, OAM_DIMS_8x8, OAM_NO_FLIP, 0x12, 0, 0)
};

static const u16 sSamusOam_Saving_Frame34[] = {
    19,
    OAM_ENTRY(-24, -14, OAM_DIMS_8x8, OAM_NO_FLIP, 0xc, 0, 0),
    OAM_ENTRY(-16, -8, OAM_DIMS_8x8, OAM_NO_FLIP, 0xd, 0, 0),
    OAM_ENTRY(-2, -10, OAM_DIMS_8x8, OAM_NO_FLIP, 0xe, 0, 0),
    OAM_ENTRY(8, -14, OAM_DIMS_8x8, OAM_NO_FLIP, 0xe, 0, 0),
    OAM_ENTRY(16, -32, OAM_DIMS_8x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-5, -35, OAM_DIMS_16x8, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-21, -35, OAM_DIMS_16x8, OAM_NO_FLIP, 0x4, 0, 0),
    OAM_ENTRY(8, -27, OAM_DIMS_8x16, OAM_NO_FLIP, 0x1, 0, 0),
    OAM_ENTRY(-16, -40, OAM_DIMS_32x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-16, -24, OAM_DIMS_32x16, OAM_NO_FLIP, 0x18, 0, 0),
    OAM_ENTRY(-8, -8, OAM_DIMS_16x8, OAM_NO_FLIP, 0x1c, 0, 0),
    OAM_ENTRY(-20, -29, OAM_DIMS_8x8, OAM_NO_FLIP, 0xf, 0, 0),
    OAM_ENTRY(-20, -21, OAM_DIMS_16x8, OAM_NO_FLIP, 0x6, 0, 0),
    OAM_ENTRY(0, -20, OAM_DIMS_16x8, OAM_NO_FLIP, 0x8, 0, 0),
    OAM_ENTRY(-26, -18, OAM_DIMS_8x8, OAM_NO_FLIP, 0x10, 0, 0),
    OAM_ENTRY(-2, -40, OAM_DIMS_16x8, OAM_NO_FLIP, 0xa, 0, 0),
    OAM_ENTRY(-21, -30, OAM_DIMS_8x8, OAM_NO_FLIP, 0x10, 0, 0),
    OAM_ENTRY(-13, -37, OAM_DIMS_8x8, OAM_NO_FLIP, 0x10, 0, 0),
    OAM_ENTRY(17, -38, OAM_DIMS_8x8, OAM_NO_FLIP, 0x10, 0, 0)
};

static const u16 sSamusOam_Saving_Frame36[] = {
    20,
    OAM_ENTRY(-26, -11, OAM_DIMS_8x8, OAM_NO_FLIP, 0xb, 0, 0),
    OAM_ENTRY(-13, -8, OAM_DIMS_8x8, OAM_NO_FLIP, 0xc, 0, 0),
    OAM_ENTRY(1, -10, OAM_DIMS_8x8, OAM_NO_FLIP, 0xc, 0, 0),
    OAM_ENTRY(10, -16, OAM_DIMS_8x8, OAM_NO_FLIP, 0xd, 0, 0),
    OAM_ENTRY(16, -33, OAM_DIMS_8x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-8, -35, OAM_DIMS_16x8, OAM_NO_FLIP, 0x3, 0, 0),
    OAM_ENTRY(-24, -35, OAM_DIMS_16x8, OAM_NO_FLIP, 0x5, 0, 0),
    OAM_ENTRY(8, -32, OAM_DIMS_8x16, OAM_NO_FLIP, 0x1, 0, 0),
    OAM_ENTRY(-16, -40, OAM_DIMS_32x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-16, -24, OAM_DIMS_32x16, OAM_NO_FLIP, 0x18, 0, 0),
    OAM_ENTRY(-8, -8, OAM_DIMS_16x8, OAM_NO_FLIP, 0x1c, 0, 0),
    OAM_ENTRY(-22, -32, OAM_DIMS_8x16, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-11, -22, OAM_DIMS_8x8, OAM_NO_FLIP, 0xe, 0, 0),
    OAM_ENTRY(-3, -19, OAM_DIMS_8x8, OAM_NO_FLIP, 0xe, 0, 0),
    OAM_ENTRY(2, -19, OAM_DIMS_16x8, OAM_NO_FLIP, 0x7, 0, 0),
    OAM_ENTRY(-29, -16, OAM_DIMS_8x8, OAM_NO_FLIP, 0xf, 0, 0),
    OAM_ENTRY(-26, -28, OAM_DIMS_8x8, OAM_NO_FLIP, 0xf, 0, 0),
    OAM_ENTRY(-18, -36, OAM_DIMS_8x8, OAM_NO_FLIP, 0xf, 0, 0),
    OAM_ENTRY(-8, -40, OAM_DIMS_8x8, OAM_NO_FLIP, 0xf, 0, 0),
    OAM_ENTRY(8, -40, OAM_DIMS_16x8, OAM_NO_FLIP, 0x9, 0, 0)
};

static const u16 sSamusOam_Saving_Frame38[] = {
    20,
    OAM_ENTRY(-24, -8, OAM_DIMS_8x8, OAM_NO_FLIP, 0x9, 0, 0),
    OAM_ENTRY(-10, -8, OAM_DIMS_8x8, OAM_NO_FLIP, 0xa, 0, 0),
    OAM_ENTRY(4, -11, OAM_DIMS_8x8, OAM_NO_FLIP, 0xa, 0, 0),
    OAM_ENTRY(14, -16, OAM_DIMS_8x8, OAM_NO_FLIP, 0xb, 0, 0),
    OAM_ENTRY(16, -38, OAM_DIMS_8x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-19, -35, OAM_DIMS_8x8, OAM_NO_FLIP, 0xc, 0, 0),
    OAM_ENTRY(-9, -34, OAM_DIMS_8x8, OAM_NO_FLIP, 0xc, 0, 0),
    OAM_ENTRY(-1, -33, OAM_DIMS_16x8, OAM_NO_FLIP, 0x3, 0, 0),
    OAM_ENTRY(7, -25, OAM_DIMS_8x8, OAM_NO_FLIP, 0xd, 0, 0),
    OAM_ENTRY(-16, -40, OAM_DIMS_32x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-16, -24, OAM_DIMS_32x16, OAM_NO_FLIP, 0x18, 0, 0),
    OAM_ENTRY(-8, -8, OAM_DIMS_16x8, OAM_NO_FLIP, 0x1c, 0, 0),
    OAM_ENTRY(-23, -32, OAM_DIMS_8x16, OAM_NO_FLIP, 0x1, 0, 0),
    OAM_ENTRY(-16, -24, OAM_DIMS_8x8, OAM_NO_FLIP, 0xe, 0, 0),
    OAM_ENTRY(-7, -20, OAM_DIMS_8x8, OAM_NO_FLIP, 0xe, 0, 0),
    OAM_ENTRY(1, -20, OAM_DIMS_16x8, OAM_NO_FLIP, 0x5, 0, 0),
    OAM_ENTRY(-25, -24, OAM_DIMS_8x16, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-17, -35, OAM_DIMS_8x8, OAM_NO_FLIP, 0xf, 0, 0),
    OAM_ENTRY(-8, -40, OAM_DIMS_16x8, OAM_NO_FLIP, 0x7, 0, 0),
    OAM_ENTRY(14, -41, OAM_DIMS_8x8, OAM_NO_FLIP, 0xf, 0, 0)
};

static const u16 sSamusOam_Saving_Frame33[] = {
    26,
    OAM_ENTRY(16, -29, OAM_DIMS_8x16, OAM_NO_FLIP, 0x8, 0, 0),
    OAM_ENTRY(5, -13, OAM_DIMS_8x8, OAM_NO_FLIP, 0x13, 0, 0),
    OAM_ENTRY(-27, -15, OAM_DIMS_8x8, OAM_NO_FLIP, 0x29, 0, 0),
    OAM_ENTRY(-19, -8, OAM_DIMS_16x8, OAM_NO_FLIP, 0x9, 0, 0),
    OAM_ENTRY(-3, -8, OAM_DIMS_8x8, OAM_NO_FLIP, 0x2a, 0, 0),
    OAM_ENTRY(-5, -35, OAM_DIMS_16x8, OAM_NO_FLIP, 0xb, 0, 0),
    OAM_ENTRY(-21, -35, OAM_DIMS_16x8, OAM_NO_FLIP, 0xd, 0, 0),
    OAM_ENTRY(7, -27, OAM_DIMS_8x8, OAM_NO_FLIP, 0x2b, 0, 0),
    OAM_ENTRY(-16, -40, OAM_DIMS_32x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-16, -24, OAM_DIMS_32x16, OAM_NO_FLIP, 0x18, 0, 0),
    OAM_ENTRY(-8, -8, OAM_DIMS_16x8, OAM_NO_FLIP, 0x1c, 0, 0),
    OAM_ENTRY(-24, -30, OAM_DIMS_8x8, OAM_NO_FLIP, 0x2c, 0, 0),
    OAM_ENTRY(-16, -24, OAM_DIMS_8x8, OAM_NO_FLIP, 0x2d, 0, 0),
    OAM_ENTRY(-8, -20, OAM_DIMS_16x8, OAM_NO_FLIP, 0xf, 0, 0),
    OAM_ENTRY(8, -21, OAM_DIMS_8x8, OAM_NO_FLIP, 0x2e, 0, 0),
    OAM_ENTRY(-26, -21, OAM_DIMS_8x8, OAM_NO_FLIP, 0x2f, 0, 0),
    OAM_ENTRY(-19, -32, OAM_DIMS_8x8, OAM_NO_FLIP, 0x2f, 0, 0),
    OAM_ENTRY(-10, -38, OAM_DIMS_8x8, OAM_NO_FLIP, 0x2f, 0, 0),
    OAM_ENTRY(0, -40, OAM_DIMS_16x8, OAM_NO_FLIP, 0x11, 0, 0),
    OAM_ENTRY(18, -36, OAM_DIMS_8x8, OAM_NO_FLIP, 0x2f, 0, 0),
    OAM_ENTRY(-16, -16, OAM_DIMS_32x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-16, -48, OAM_DIMS_32x16, OAM_NO_FLIP, 0x4, 0, 0),
    OAM_ENTRY(-16, -32, OAM_DIMS_16x8, OAM_NO_FLIP, 0x1e, 0, 0),
    OAM_ENTRY(-16, -24, OAM_DIMS_16x8, OAM_NO_FLIP, 0x1e, 0, 0),
    OAM_ENTRY(0, -32, OAM_DIMS_16x8, OAM_X_FLIP, 0x1e, 0, 0),
    OAM_ENTRY(0, -24, OAM_DIMS_16x8, OAM_X_FLIP, 0x1e, 0, 0)
};

static const u16 sSamusOam_Saving_Frame35[] = {
    25,
    OAM_ENTRY(-24, -14, OAM_DIMS_8x8, OAM_NO_FLIP, 0x2a, 0, 0),
    OAM_ENTRY(-16, -8, OAM_DIMS_8x8, OAM_NO_FLIP, 0x2b, 0, 0),
    OAM_ENTRY(-2, -10, OAM_DIMS_8x8, OAM_NO_FLIP, 0x2c, 0, 0),
    OAM_ENTRY(8, -14, OAM_DIMS_8x8, OAM_NO_FLIP, 0x2c, 0, 0),
    OAM_ENTRY(16, -32, OAM_DIMS_8x16, OAM_NO_FLIP, 0x8, 0, 0),
    OAM_ENTRY(-5, -35, OAM_DIMS_16x8, OAM_NO_FLIP, 0xa, 0, 0),
    OAM_ENTRY(-21, -35, OAM_DIMS_16x8, OAM_NO_FLIP, 0xc, 0, 0),
    OAM_ENTRY(8, -27, OAM_DIMS_8x16, OAM_NO_FLIP, 0x9, 0, 0),
    OAM_ENTRY(-16, -40, OAM_DIMS_32x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-16, -24, OAM_DIMS_32x16, OAM_NO_FLIP, 0x18, 0, 0),
    OAM_ENTRY(-8, -8, OAM_DIMS_16x8, OAM_NO_FLIP, 0x1c, 0, 0),
    OAM_ENTRY(-20, -29, OAM_DIMS_8x8, OAM_NO_FLIP, 0x2d, 0, 0),
    OAM_ENTRY(-20, -21, OAM_DIMS_16x8, OAM_NO_FLIP, 0xe, 0, 0),
    OAM_ENTRY(0, -20, OAM_DIMS_16x8, OAM_NO_FLIP, 0x10, 0, 0),
    OAM_ENTRY(-26, -18, OAM_DIMS_8x8, OAM_NO_FLIP, 0x2e, 0, 0),
    OAM_ENTRY(-2, -40, OAM_DIMS_16x8, OAM_NO_FLIP, 0x12, 0, 0),
    OAM_ENTRY(-21, -30, OAM_DIMS_8x8, OAM_NO_FLIP, 0x2e, 0, 0),
    OAM_ENTRY(-13, -37, OAM_DIMS_8x8, OAM_NO_FLIP, 0x2e, 0, 0),
    OAM_ENTRY(17, -38, OAM_DIMS_8x8, OAM_NO_FLIP, 0x2e, 0, 0),
    OAM_ENTRY(-16, -16, OAM_DIMS_32x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-16, -48, OAM_DIMS_32x16, OAM_NO_FLIP, 0x4, 0, 0),
    OAM_ENTRY(0, -32, OAM_DIMS_16x8, OAM_X_FLIP, 0x1e, 0, 0),
    OAM_ENTRY(0, -24, OAM_DIMS_16x8, OAM_X_FLIP, 0x1e, 0, 0),
    OAM_ENTRY(-16, -32, OAM_DIMS_16x8, OAM_NO_FLIP, 0x1e, 0, 0),
    OAM_ENTRY(-16, -24, OAM_DIMS_16x8, OAM_NO_FLIP, 0x1e, 0, 0)
};

static const u16 sSamusOam_Saving_Frame37[] = {
    26,
    OAM_ENTRY(-26, -11, OAM_DIMS_8x8, OAM_NO_FLIP, 0x13, 0, 0),
    OAM_ENTRY(-13, -8, OAM_DIMS_8x8, OAM_NO_FLIP, 0x2b, 0, 0),
    OAM_ENTRY(1, -10, OAM_DIMS_8x8, OAM_NO_FLIP, 0x2b, 0, 0),
    OAM_ENTRY(10, -16, OAM_DIMS_8x8, OAM_NO_FLIP, 0x2c, 0, 0),
    OAM_ENTRY(16, -33, OAM_DIMS_8x16, OAM_NO_FLIP, 0x8, 0, 0),
    OAM_ENTRY(-8, -35, OAM_DIMS_16x8, OAM_NO_FLIP, 0xb, 0, 0),
    OAM_ENTRY(-24, -35, OAM_DIMS_16x8, OAM_NO_FLIP, 0xd, 0, 0),
    OAM_ENTRY(8, -32, OAM_DIMS_8x16, OAM_NO_FLIP, 0x9, 0, 0),
    OAM_ENTRY(-16, -40, OAM_DIMS_32x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-16, -24, OAM_DIMS_32x16, OAM_NO_FLIP, 0x18, 0, 0),
    OAM_ENTRY(-8, -8, OAM_DIMS_16x8, OAM_NO_FLIP, 0x1c, 0, 0),
    OAM_ENTRY(-22, -32, OAM_DIMS_8x16, OAM_NO_FLIP, 0xa, 0, 0),
    OAM_ENTRY(-11, -22, OAM_DIMS_8x8, OAM_NO_FLIP, 0x2d, 0, 0),
    OAM_ENTRY(-3, -19, OAM_DIMS_8x8, OAM_NO_FLIP, 0x2d, 0, 0),
    OAM_ENTRY(2, -19, OAM_DIMS_16x8, OAM_NO_FLIP, 0xf, 0, 0),
    OAM_ENTRY(-29, -16, OAM_DIMS_8x8, OAM_NO_FLIP, 0x2e, 0, 0),
    OAM_ENTRY(-26, -28, OAM_DIMS_8x8, OAM_NO_FLIP, 0x2e, 0, 0),
    OAM_ENTRY(-18, -36, OAM_DIMS_8x8, OAM_NO_FLIP, 0x2e, 0, 0),
    OAM_ENTRY(-8, -40, OAM_DIMS_8x8, OAM_NO_FLIP, 0x2e, 0, 0),
    OAM_ENTRY(8, -40, OAM_DIMS_16x8, OAM_NO_FLIP, 0x11, 0, 0),
    OAM_ENTRY(-16, -16, OAM_DIMS_32x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-16, -48, OAM_DIMS_32x16, OAM_NO_FLIP, 0x4, 0, 0),
    OAM_ENTRY(-16, -32, OAM_DIMS_16x8, OAM_NO_FLIP, 0x1e, 0, 0),
    OAM_ENTRY(-16, -24, OAM_DIMS_16x8, OAM_NO_FLIP, 0x1e, 0, 0),
    OAM_ENTRY(0, -32, OAM_DIMS_16x8, OAM_X_FLIP, 0x1e, 0, 0),
    OAM_ENTRY(0, -24, OAM_DIMS_16x8, OAM_X_FLIP, 0x1e, 0, 0)
};

static const u16 sSamusOam_Saving_Frame39[] = {
    26,
    OAM_ENTRY(-24, -8, OAM_DIMS_8x8, OAM_NO_FLIP, 0x11, 0, 0),
    OAM_ENTRY(-10, -8, OAM_DIMS_8x8, OAM_NO_FLIP, 0x12, 0, 0),
    OAM_ENTRY(4, -11, OAM_DIMS_8x8, OAM_NO_FLIP, 0x12, 0, 0),
    OAM_ENTRY(14, -16, OAM_DIMS_8x8, OAM_NO_FLIP, 0x13, 0, 0),
    OAM_ENTRY(16, -38, OAM_DIMS_8x16, OAM_NO_FLIP, 0x8, 0, 0),
    OAM_ENTRY(-19, -35, OAM_DIMS_8x8, OAM_NO_FLIP, 0x2b, 0, 0),
    OAM_ENTRY(-9, -34, OAM_DIMS_8x8, OAM_NO_FLIP, 0x2b, 0, 0),
    OAM_ENTRY(-1, -33, OAM_DIMS_16x8, OAM_NO_FLIP, 0xb, 0, 0),
    OAM_ENTRY(7, -25, OAM_DIMS_8x8, OAM_NO_FLIP, 0x2c, 0, 0),
    OAM_ENTRY(-16, -40, OAM_DIMS_32x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-16, -24, OAM_DIMS_32x16, OAM_NO_FLIP, 0x18, 0, 0),
    OAM_ENTRY(-8, -8, OAM_DIMS_16x8, OAM_NO_FLIP, 0x1c, 0, 0),
    OAM_ENTRY(-23, -32, OAM_DIMS_8x16, OAM_NO_FLIP, 0x9, 0, 0),
    OAM_ENTRY(-16, -24, OAM_DIMS_8x8, OAM_NO_FLIP, 0x2d, 0, 0),
    OAM_ENTRY(-7, -20, OAM_DIMS_8x8, OAM_NO_FLIP, 0x2d, 0, 0),
    OAM_ENTRY(1, -20, OAM_DIMS_16x8, OAM_NO_FLIP, 0xd, 0, 0),
    OAM_ENTRY(-25, -24, OAM_DIMS_8x16, OAM_NO_FLIP, 0xa, 0, 0),
    OAM_ENTRY(-17, -35, OAM_DIMS_8x8, OAM_NO_FLIP, 0x2e, 0, 0),
    OAM_ENTRY(-8, -40, OAM_DIMS_16x8, OAM_NO_FLIP, 0xf, 0, 0),
    OAM_ENTRY(14, -41, OAM_DIMS_8x8, OAM_NO_FLIP, 0x2e, 0, 0),
    OAM_ENTRY(-16, -16, OAM_DIMS_32x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-16, -48, OAM_DIMS_32x16, OAM_NO_FLIP, 0x4, 0, 0),
    OAM_ENTRY(-16, -32, OAM_DIMS_16x8, OAM_NO_FLIP, 0x1e, 0, 0),
    OAM_ENTRY(-16, -24, OAM_DIMS_16x8, OAM_NO_FLIP, 0x1e, 0, 0),
    OAM_ENTRY(0, -32, OAM_DIMS_16x8, OAM_X_FLIP, 0x1e, 0, 0),
    OAM_ENTRY(0, -24, OAM_DIMS_16x8, OAM_X_FLIP, 0x1e, 0, 0)
};

static const u16 sSamusOam_Saving_Frame1[] = {
    4,
    OAM_ENTRY(-16, -40, OAM_DIMS_32x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-16, -24, OAM_DIMS_32x16, OAM_NO_FLIP, 0x18, 0, 0),
    OAM_ENTRY(-8, -8, OAM_DIMS_16x8, OAM_NO_FLIP, 0x1c, 0, 0),
    OAM_ENTRY(-16, -16, OAM_DIMS_32x16, OAM_NO_FLIP, 0x0, 0, 0)
};

static const u16 sSamusOam_Saving_Frame9[] = {
    18,
    OAM_ENTRY(16, -29, OAM_DIMS_8x16, OAM_NO_FLIP, 0x4, 0, 0),
    OAM_ENTRY(5, -13, OAM_DIMS_8x8, OAM_NO_FLIP, 0x9, 0, 0),
    OAM_ENTRY(-27, -15, OAM_DIMS_8x8, OAM_NO_FLIP, 0xa, 0, 0),
    OAM_ENTRY(-19, -8, OAM_DIMS_16x8, OAM_NO_FLIP, 0x5, 0, 0),
    OAM_ENTRY(-3, -8, OAM_DIMS_8x8, OAM_NO_FLIP, 0xb, 0, 0),
    OAM_ENTRY(-16, -40, OAM_DIMS_32x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-16, -24, OAM_DIMS_32x16, OAM_NO_FLIP, 0x18, 0, 0),
    OAM_ENTRY(-8, -8, OAM_DIMS_16x8, OAM_NO_FLIP, 0x1c, 0, 0),
    OAM_ENTRY(-26, -21, OAM_DIMS_8x8, OAM_NO_FLIP, 0xc, 0, 0),
    OAM_ENTRY(-19, -32, OAM_DIMS_8x8, OAM_NO_FLIP, 0xc, 0, 0),
    OAM_ENTRY(-10, -38, OAM_DIMS_8x8, OAM_NO_FLIP, 0xc, 0, 0),
    OAM_ENTRY(0, -40, OAM_DIMS_16x8, OAM_NO_FLIP, 0x7, 0, 0),
    OAM_ENTRY(18, -36, OAM_DIMS_8x8, OAM_NO_FLIP, 0xc, 0, 0),
    OAM_ENTRY(-16, -32, OAM_DIMS_32x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-16, -16, OAM_DIMS_16x8, OAM_NO_FLIP, 0x1e, 0, 0),
    OAM_ENTRY(-16, -8, OAM_DIMS_16x8, OAM_NO_FLIP, 0x1e, 0, 0),
    OAM_ENTRY(0, -16, OAM_DIMS_16x8, OAM_X_FLIP, 0x1e, 0, 0),
    OAM_ENTRY(0, -8, OAM_DIMS_16x8, OAM_X_FLIP, 0x1e, 0, 0)
};

static const u16 sSamusOam_Saving_Frame11[] = {
    18,
    OAM_ENTRY(-24, -14, OAM_DIMS_8x8, OAM_NO_FLIP, 0x7, 0, 0),
    OAM_ENTRY(-16, -8, OAM_DIMS_8x8, OAM_NO_FLIP, 0x8, 0, 0),
    OAM_ENTRY(-2, -10, OAM_DIMS_8x8, OAM_NO_FLIP, 0x9, 0, 0),
    OAM_ENTRY(8, -14, OAM_DIMS_8x8, OAM_NO_FLIP, 0x9, 0, 0),
    OAM_ENTRY(16, -32, OAM_DIMS_8x16, OAM_NO_FLIP, 0x4, 0, 0),
    OAM_ENTRY(-16, -40, OAM_DIMS_32x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-16, -24, OAM_DIMS_32x16, OAM_NO_FLIP, 0x18, 0, 0),
    OAM_ENTRY(-8, -8, OAM_DIMS_16x8, OAM_NO_FLIP, 0x1c, 0, 0),
    OAM_ENTRY(-26, -18, OAM_DIMS_8x8, OAM_NO_FLIP, 0xa, 0, 0),
    OAM_ENTRY(-2, -40, OAM_DIMS_16x8, OAM_NO_FLIP, 0x5, 0, 0),
    OAM_ENTRY(-21, -30, OAM_DIMS_8x8, OAM_NO_FLIP, 0xa, 0, 0),
    OAM_ENTRY(-13, -37, OAM_DIMS_8x8, OAM_NO_FLIP, 0xa, 0, 0),
    OAM_ENTRY(17, -38, OAM_DIMS_8x8, OAM_NO_FLIP, 0xa, 0, 0),
    OAM_ENTRY(-16, -32, OAM_DIMS_32x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-16, -16, OAM_DIMS_16x8, OAM_NO_FLIP, 0x1e, 0, 0),
    OAM_ENTRY(-16, -8, OAM_DIMS_16x8, OAM_NO_FLIP, 0x1e, 0, 0),
    OAM_ENTRY(0, -16, OAM_DIMS_16x8, OAM_X_FLIP, 0x1e, 0, 0),
    OAM_ENTRY(0, -8, OAM_DIMS_16x8, OAM_X_FLIP, 0x1e, 0, 0)
};

static const u16 sSamusOam_Saving_Frame13[] = {
    18,
    OAM_ENTRY(-26, -11, OAM_DIMS_8x8, OAM_NO_FLIP, 0x7, 0, 0),
    OAM_ENTRY(-13, -8, OAM_DIMS_8x8, OAM_NO_FLIP, 0x8, 0, 0),
    OAM_ENTRY(1, -10, OAM_DIMS_8x8, OAM_NO_FLIP, 0x8, 0, 0),
    OAM_ENTRY(10, -16, OAM_DIMS_8x8, OAM_NO_FLIP, 0x9, 0, 0),
    OAM_ENTRY(16, -33, OAM_DIMS_8x16, OAM_NO_FLIP, 0x4, 0, 0),
    OAM_ENTRY(-16, -40, OAM_DIMS_32x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-16, -24, OAM_DIMS_32x16, OAM_NO_FLIP, 0x18, 0, 0),
    OAM_ENTRY(-8, -8, OAM_DIMS_16x8, OAM_NO_FLIP, 0x1c, 0, 0),
    OAM_ENTRY(-29, -16, OAM_DIMS_8x8, OAM_NO_FLIP, 0xa, 0, 0),
    OAM_ENTRY(-26, -28, OAM_DIMS_8x8, OAM_NO_FLIP, 0xa, 0, 0),
    OAM_ENTRY(-18, -36, OAM_DIMS_8x8, OAM_NO_FLIP, 0xa, 0, 0),
    OAM_ENTRY(-8, -40, OAM_DIMS_8x8, OAM_NO_FLIP, 0xa, 0, 0),
    OAM_ENTRY(8, -40, OAM_DIMS_16x8, OAM_NO_FLIP, 0x5, 0, 0),
    OAM_ENTRY(-16, -32, OAM_DIMS_32x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-16, -16, OAM_DIMS_16x8, OAM_NO_FLIP, 0x1e, 0, 0),
    OAM_ENTRY(-16, -8, OAM_DIMS_16x8, OAM_NO_FLIP, 0x1e, 0, 0),
    OAM_ENTRY(0, -16, OAM_DIMS_16x8, OAM_X_FLIP, 0x1e, 0, 0),
    OAM_ENTRY(0, -8, OAM_DIMS_16x8, OAM_X_FLIP, 0x1e, 0, 0)
};

static const u16 sSamusOam_Saving_Frame15[] = {
    17,
    OAM_ENTRY(-24, -8, OAM_DIMS_8x8, OAM_NO_FLIP, 0x8, 0, 0),
    OAM_ENTRY(-10, -8, OAM_DIMS_8x8, OAM_NO_FLIP, 0x9, 0, 0),
    OAM_ENTRY(4, -11, OAM_DIMS_8x8, OAM_NO_FLIP, 0x9, 0, 0),
    OAM_ENTRY(14, -16, OAM_DIMS_8x8, OAM_NO_FLIP, 0xa, 0, 0),
    OAM_ENTRY(16, -38, OAM_DIMS_8x16, OAM_NO_FLIP, 0x4, 0, 0),
    OAM_ENTRY(-16, -40, OAM_DIMS_32x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-16, -24, OAM_DIMS_32x16, OAM_NO_FLIP, 0x18, 0, 0),
    OAM_ENTRY(-8, -8, OAM_DIMS_16x8, OAM_NO_FLIP, 0x1c, 0, 0),
    OAM_ENTRY(-25, -24, OAM_DIMS_8x16, OAM_NO_FLIP, 0x5, 0, 0),
    OAM_ENTRY(-17, -35, OAM_DIMS_8x8, OAM_NO_FLIP, 0xb, 0, 0),
    OAM_ENTRY(-8, -40, OAM_DIMS_16x8, OAM_NO_FLIP, 0x6, 0, 0),
    OAM_ENTRY(14, -41, OAM_DIMS_8x8, OAM_NO_FLIP, 0xb, 0, 0),
    OAM_ENTRY(-16, -32, OAM_DIMS_32x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-16, -16, OAM_DIMS_16x8, OAM_NO_FLIP, 0x1e, 0, 0),
    OAM_ENTRY(-16, -8, OAM_DIMS_16x8, OAM_NO_FLIP, 0x1e, 0, 0),
    OAM_ENTRY(0, -16, OAM_DIMS_16x8, OAM_X_FLIP, 0x1e, 0, 0),
    OAM_ENTRY(0, -8, OAM_DIMS_16x8, OAM_X_FLIP, 0x1e, 0, 0)
};

static const u16 sSamusOam_Saving_Frame17[] = {
    19,
    OAM_ENTRY(16, -29, OAM_DIMS_8x16, OAM_NO_FLIP, 0x8, 0, 0),
    OAM_ENTRY(5, -13, OAM_DIMS_8x8, OAM_NO_FLIP, 0xd, 0, 0),
    OAM_ENTRY(-27, -15, OAM_DIMS_8x8, OAM_NO_FLIP, 0xe, 0, 0),
    OAM_ENTRY(-19, -8, OAM_DIMS_16x8, OAM_NO_FLIP, 0x9, 0, 0),
    OAM_ENTRY(-3, -8, OAM_DIMS_8x8, OAM_NO_FLIP, 0xf, 0, 0),
    OAM_ENTRY(-16, -40, OAM_DIMS_32x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-16, -24, OAM_DIMS_32x16, OAM_NO_FLIP, 0x18, 0, 0),
    OAM_ENTRY(-8, -8, OAM_DIMS_16x8, OAM_NO_FLIP, 0x1c, 0, 0),
    OAM_ENTRY(-26, -21, OAM_DIMS_8x8, OAM_NO_FLIP, 0x10, 0, 0),
    OAM_ENTRY(-19, -32, OAM_DIMS_8x8, OAM_NO_FLIP, 0x10, 0, 0),
    OAM_ENTRY(-10, -38, OAM_DIMS_8x8, OAM_NO_FLIP, 0x10, 0, 0),
    OAM_ENTRY(0, -40, OAM_DIMS_16x8, OAM_NO_FLIP, 0xb, 0, 0),
    OAM_ENTRY(18, -36, OAM_DIMS_8x8, OAM_NO_FLIP, 0x10, 0, 0),
    OAM_ENTRY(-16, -48, OAM_DIMS_32x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-16, -32, OAM_DIMS_16x8, OAM_NO_FLIP, 0x1e, 0, 0),
    OAM_ENTRY(-16, -24, OAM_DIMS_16x8, OAM_NO_FLIP, 0x1e, 0, 0),
    OAM_ENTRY(-16, -16, OAM_DIMS_32x16, OAM_NO_FLIP, 0x4, 0, 0),
    OAM_ENTRY(0, -32, OAM_DIMS_16x8, OAM_X_FLIP, 0x1e, 0, 0),
    OAM_ENTRY(0, -24, OAM_DIMS_16x8, OAM_X_FLIP, 0x1e, 0, 0)
};

static const u16 sSamusOam_Saving_Frame19[] = {
    19,
    OAM_ENTRY(-24, -14, OAM_DIMS_8x8, OAM_NO_FLIP, 0xb, 0, 0),
    OAM_ENTRY(-16, -8, OAM_DIMS_8x8, OAM_NO_FLIP, 0xc, 0, 0),
    OAM_ENTRY(-2, -10, OAM_DIMS_8x8, OAM_NO_FLIP, 0xd, 0, 0),
    OAM_ENTRY(8, -14, OAM_DIMS_8x8, OAM_NO_FLIP, 0xd, 0, 0),
    OAM_ENTRY(16, -32, OAM_DIMS_8x16, OAM_NO_FLIP, 0x8, 0, 0),
    OAM_ENTRY(-16, -40, OAM_DIMS_32x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-16, -24, OAM_DIMS_32x16, OAM_NO_FLIP, 0x18, 0, 0),
    OAM_ENTRY(-8, -8, OAM_DIMS_16x8, OAM_NO_FLIP, 0x1c, 0, 0),
    OAM_ENTRY(-26, -18, OAM_DIMS_8x8, OAM_NO_FLIP, 0xe, 0, 0),
    OAM_ENTRY(-2, -40, OAM_DIMS_16x8, OAM_NO_FLIP, 0x9, 0, 0),
    OAM_ENTRY(-21, -30, OAM_DIMS_8x8, OAM_NO_FLIP, 0xe, 0, 0),
    OAM_ENTRY(-13, -37, OAM_DIMS_8x8, OAM_NO_FLIP, 0xe, 0, 0),
    OAM_ENTRY(17, -38, OAM_DIMS_8x8, OAM_NO_FLIP, 0xe, 0, 0),
    OAM_ENTRY(-16, -48, OAM_DIMS_32x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-16, -32, OAM_DIMS_16x8, OAM_NO_FLIP, 0x1e, 0, 0),
    OAM_ENTRY(-16, -24, OAM_DIMS_16x8, OAM_NO_FLIP, 0x1e, 0, 0),
    OAM_ENTRY(-16, -16, OAM_DIMS_32x16, OAM_NO_FLIP, 0x4, 0, 0),
    OAM_ENTRY(0, -32, OAM_DIMS_16x8, OAM_X_FLIP, 0x1e, 0, 0),
    OAM_ENTRY(0, -24, OAM_DIMS_16x8, OAM_X_FLIP, 0x1e, 0, 0)
};

static const u16 sSamusOam_Saving_Frame21[] = {
    19,
    OAM_ENTRY(-26, -11, OAM_DIMS_8x8, OAM_NO_FLIP, 0xb, 0, 0),
    OAM_ENTRY(-13, -8, OAM_DIMS_8x8, OAM_NO_FLIP, 0xc, 0, 0),
    OAM_ENTRY(1, -10, OAM_DIMS_8x8, OAM_NO_FLIP, 0xc, 0, 0),
    OAM_ENTRY(10, -16, OAM_DIMS_8x8, OAM_NO_FLIP, 0xd, 0, 0),
    OAM_ENTRY(16, -33, OAM_DIMS_8x16, OAM_NO_FLIP, 0x8, 0, 0),
    OAM_ENTRY(-16, -40, OAM_DIMS_32x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-16, -24, OAM_DIMS_32x16, OAM_NO_FLIP, 0x18, 0, 0),
    OAM_ENTRY(-8, -8, OAM_DIMS_16x8, OAM_NO_FLIP, 0x1c, 0, 0),
    OAM_ENTRY(-29, -16, OAM_DIMS_8x8, OAM_NO_FLIP, 0xe, 0, 0),
    OAM_ENTRY(-26, -28, OAM_DIMS_8x8, OAM_NO_FLIP, 0xe, 0, 0),
    OAM_ENTRY(-18, -36, OAM_DIMS_8x8, OAM_NO_FLIP, 0xe, 0, 0),
    OAM_ENTRY(-8, -40, OAM_DIMS_8x8, OAM_NO_FLIP, 0xe, 0, 0),
    OAM_ENTRY(8, -40, OAM_DIMS_16x8, OAM_NO_FLIP, 0x9, 0, 0),
    OAM_ENTRY(-16, -48, OAM_DIMS_32x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-16, -32, OAM_DIMS_16x8, OAM_NO_FLIP, 0x1e, 0, 0),
    OAM_ENTRY(-16, -24, OAM_DIMS_16x8, OAM_NO_FLIP, 0x1e, 0, 0),
    OAM_ENTRY(-16, -16, OAM_DIMS_32x16, OAM_NO_FLIP, 0x4, 0, 0),
    OAM_ENTRY(0, -32, OAM_DIMS_16x8, OAM_X_FLIP, 0x1e, 0, 0),
    OAM_ENTRY(0, -24, OAM_DIMS_16x8, OAM_X_FLIP, 0x1e, 0, 0)
};

static const u16 sSamusOam_Saving_Frame23[] = {
    18,
    OAM_ENTRY(-24, -8, OAM_DIMS_8x8, OAM_NO_FLIP, 0xc, 0, 0),
    OAM_ENTRY(-10, -8, OAM_DIMS_8x8, OAM_NO_FLIP, 0xd, 0, 0),
    OAM_ENTRY(4, -11, OAM_DIMS_8x8, OAM_NO_FLIP, 0xd, 0, 0),
    OAM_ENTRY(14, -16, OAM_DIMS_8x8, OAM_NO_FLIP, 0xe, 0, 0),
    OAM_ENTRY(16, -38, OAM_DIMS_8x16, OAM_NO_FLIP, 0x8, 0, 0),
    OAM_ENTRY(-16, -40, OAM_DIMS_32x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-16, -24, OAM_DIMS_32x16, OAM_NO_FLIP, 0x18, 0, 0),
    OAM_ENTRY(-8, -8, OAM_DIMS_16x8, OAM_NO_FLIP, 0x1c, 0, 0),
    OAM_ENTRY(-25, -24, OAM_DIMS_8x16, OAM_NO_FLIP, 0x9, 0, 0),
    OAM_ENTRY(-17, -35, OAM_DIMS_8x8, OAM_NO_FLIP, 0xf, 0, 0),
    OAM_ENTRY(-8, -40, OAM_DIMS_16x8, OAM_NO_FLIP, 0xa, 0, 0),
    OAM_ENTRY(14, -41, OAM_DIMS_8x8, OAM_NO_FLIP, 0xf, 0, 0),
    OAM_ENTRY(-16, -48, OAM_DIMS_32x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-16, -32, OAM_DIMS_16x8, OAM_NO_FLIP, 0x1e, 0, 0),
    OAM_ENTRY(-16, -24, OAM_DIMS_16x8, OAM_NO_FLIP, 0x1e, 0, 0),
    OAM_ENTRY(-16, -16, OAM_DIMS_32x16, OAM_NO_FLIP, 0x4, 0, 0),
    OAM_ENTRY(0, -32, OAM_DIMS_16x8, OAM_X_FLIP, 0x1e, 0, 0),
    OAM_ENTRY(0, -24, OAM_DIMS_16x8, OAM_X_FLIP, 0x1e, 0, 0)
};

static const u16 sSamusOam_Saving_Frame16[] = {
    10,
    OAM_ENTRY(-5, -35, OAM_DIMS_16x8, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-21, -35, OAM_DIMS_16x8, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(7, -27, OAM_DIMS_8x8, OAM_NO_FLIP, 0x6, 0, 0),
    OAM_ENTRY(-16, -40, OAM_DIMS_32x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-16, -24, OAM_DIMS_32x16, OAM_NO_FLIP, 0x18, 0, 0),
    OAM_ENTRY(-8, -8, OAM_DIMS_16x8, OAM_NO_FLIP, 0x1c, 0, 0),
    OAM_ENTRY(-24, -30, OAM_DIMS_8x8, OAM_NO_FLIP, 0x7, 0, 0),
    OAM_ENTRY(-16, -24, OAM_DIMS_8x8, OAM_NO_FLIP, 0x8, 0, 0),
    OAM_ENTRY(-8, -20, OAM_DIMS_16x8, OAM_NO_FLIP, 0x4, 0, 0),
    OAM_ENTRY(8, -21, OAM_DIMS_8x8, OAM_NO_FLIP, 0x9, 0, 0)
};

static const u16 sSamusOam_Saving_Frame18[] = {
    9,
    OAM_ENTRY(-5, -35, OAM_DIMS_16x8, OAM_NO_FLIP, 0x1, 0, 0),
    OAM_ENTRY(-21, -35, OAM_DIMS_16x8, OAM_NO_FLIP, 0x3, 0, 0),
    OAM_ENTRY(8, -27, OAM_DIMS_8x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-16, -40, OAM_DIMS_32x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-16, -24, OAM_DIMS_32x16, OAM_NO_FLIP, 0x18, 0, 0),
    OAM_ENTRY(-8, -8, OAM_DIMS_16x8, OAM_NO_FLIP, 0x1c, 0, 0),
    OAM_ENTRY(-20, -29, OAM_DIMS_8x8, OAM_NO_FLIP, 0x9, 0, 0),
    OAM_ENTRY(-20, -21, OAM_DIMS_16x8, OAM_NO_FLIP, 0x5, 0, 0),
    OAM_ENTRY(0, -20, OAM_DIMS_16x8, OAM_NO_FLIP, 0x7, 0, 0)
};

static const u16 sSamusOam_Saving_Frame20[] = {
    10,
    OAM_ENTRY(-8, -35, OAM_DIMS_16x8, OAM_NO_FLIP, 0x2, 0, 0),
    OAM_ENTRY(-24, -35, OAM_DIMS_16x8, OAM_NO_FLIP, 0x4, 0, 0),
    OAM_ENTRY(8, -32, OAM_DIMS_8x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-16, -40, OAM_DIMS_32x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-16, -24, OAM_DIMS_32x16, OAM_NO_FLIP, 0x18, 0, 0),
    OAM_ENTRY(-8, -8, OAM_DIMS_16x8, OAM_NO_FLIP, 0x1c, 0, 0),
    OAM_ENTRY(-22, -32, OAM_DIMS_8x16, OAM_NO_FLIP, 0x1, 0, 0),
    OAM_ENTRY(-11, -22, OAM_DIMS_8x8, OAM_NO_FLIP, 0x8, 0, 0),
    OAM_ENTRY(-3, -19, OAM_DIMS_8x8, OAM_NO_FLIP, 0x8, 0, 0),
    OAM_ENTRY(2, -19, OAM_DIMS_16x8, OAM_NO_FLIP, 0x6, 0, 0)
};

static const u16 sSamusOam_Saving_Frame22[] = {
    11,
    OAM_ENTRY(-19, -35, OAM_DIMS_8x8, OAM_NO_FLIP, 0x5, 0, 0),
    OAM_ENTRY(-9, -34, OAM_DIMS_8x8, OAM_NO_FLIP, 0x5, 0, 0),
    OAM_ENTRY(-1, -33, OAM_DIMS_16x8, OAM_NO_FLIP, 0x1, 0, 0),
    OAM_ENTRY(7, -25, OAM_DIMS_8x8, OAM_NO_FLIP, 0x6, 0, 0),
    OAM_ENTRY(-16, -40, OAM_DIMS_32x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-16, -24, OAM_DIMS_32x16, OAM_NO_FLIP, 0x18, 0, 0),
    OAM_ENTRY(-8, -8, OAM_DIMS_16x8, OAM_NO_FLIP, 0x1c, 0, 0),
    OAM_ENTRY(-23, -32, OAM_DIMS_8x16, OAM_NO_FLIP, 0x0, 0, 0),
    OAM_ENTRY(-16, -24, OAM_DIMS_8x8, OAM_NO_FLIP, 0x7, 0, 0),
    OAM_ENTRY(-7, -20, OAM_DIMS_8x8, OAM_NO_FLIP, 0x7, 0, 0),
    OAM_ENTRY(1, -20, OAM_DIMS_16x8, OAM_NO_FLIP, 0x3, 0, 0)
};

static const u16 sSamusOam_Saving_Frame0[] = {
    3,
    OAM_ENTRY(-16, -40, OAM_DIMS_32x16, OAM_NO_FLIP, 0x14, 0, 0),
    OAM_ENTRY(-16, -24, OAM_DIMS_32x16, OAM_NO_FLIP, 0x18, 0, 0),
    OAM_ENTRY(-8, -8, OAM_DIMS_16x8, OAM_NO_FLIP, 0x1c, 0, 0)
};

const struct SamusAnimationData sSamusAnim_Saving[73] = {
    [0] = {
        .pTopGfx = sSamusGfx_Empty,
        .pBottomGfx = sSamusGfx_Bottom_Saving_Frame0,
        .pOam = sSamusOam_Saving_Frame0,
        .timer = 1
    },
    [1] = {
        .pTopGfx = sSamusGfx_Top_Saving_Frame1,
        .pBottomGfx = sSamusGfx_Bottom_Saving_Frame0,
        .pOam = sSamusOam_Saving_Frame1,
        .timer = 1
    },
    [2] = {
        .pTopGfx = sSamusGfx_Empty,
        .pBottomGfx = sSamusGfx_Bottom_Saving_Frame0,
        .pOam = sSamusOam_Saving_Frame0,
        .timer = 1
    },
    [3] = {
        .pTopGfx = sSamusGfx_Top_Saving_Frame3,
        .pBottomGfx = sSamusGfx_Bottom_Saving_Frame0,
        .pOam = sSamusOam_Saving_Frame1,
        .timer = 1
    },
    [4] = {
        .pTopGfx = sSamusGfx_Empty,
        .pBottomGfx = sSamusGfx_Bottom_Saving_Frame0,
        .pOam = sSamusOam_Saving_Frame0,
        .timer = 1
    },
    [5] = {
        .pTopGfx = sSamusGfx_Top_Saving_Frame5,
        .pBottomGfx = sSamusGfx_Bottom_Saving_Frame0,
        .pOam = sSamusOam_Saving_Frame1,
        .timer = 1
    },
    [6] = {
        .pTopGfx = sSamusGfx_Empty,
        .pBottomGfx = sSamusGfx_Bottom_Saving_Frame0,
        .pOam = sSamusOam_Saving_Frame0,
        .timer = 1
    },
    [7] = {
        .pTopGfx = sSamusGfx_Top_Saving_Frame7,
        .pBottomGfx = sSamusGfx_Bottom_Saving_Frame0,
        .pOam = sSamusOam_Saving_Frame1,
        .timer = 1
    },
    [8] = {
        .pTopGfx = sSamusGfx_Empty,
        .pBottomGfx = sSamusGfx_Bottom_Saving_Frame0,
        .pOam = sSamusOam_Saving_Frame0,
        .timer = 1
    },
    [9] = {
        .pTopGfx = sSamusGfx_Top_Saving_Frame9,
        .pBottomGfx = sSamusGfx_Bottom_Saving_Frame9,
        .pOam = sSamusOam_Saving_Frame9,
        .timer = 1
    },
    [10] = {
        .pTopGfx = sSamusGfx_Empty,
        .pBottomGfx = sSamusGfx_Bottom_Saving_Frame0,
        .pOam = sSamusOam_Saving_Frame0,
        .timer = 1
    },
    [11] = {
        .pTopGfx = sSamusGfx_Top_Saving_Frame11,
        .pBottomGfx = sSamusGfx_Bottom_Saving_Frame9,
        .pOam = sSamusOam_Saving_Frame11,
        .timer = 1
    },
    [12] = {
        .pTopGfx = sSamusGfx_Empty,
        .pBottomGfx = sSamusGfx_Bottom_Saving_Frame0,
        .pOam = sSamusOam_Saving_Frame0,
        .timer = 1
    },
    [13] = {
        .pTopGfx = sSamusGfx_Top_Saving_Frame13,
        .pBottomGfx = sSamusGfx_Bottom_Saving_Frame9,
        .pOam = sSamusOam_Saving_Frame13,
        .timer = 1
    },
    [14] = {
        .pTopGfx = sSamusGfx_Empty,
        .pBottomGfx = sSamusGfx_Bottom_Saving_Frame0,
        .pOam = sSamusOam_Saving_Frame0,
        .timer = 1
    },
    [15] = {
        .pTopGfx = sSamusGfx_Top_Saving_Frame15,
        .pBottomGfx = sSamusGfx_Bottom_Saving_Frame9,
        .pOam = sSamusOam_Saving_Frame15,
        .timer = 1
    },
    [16] = {
        .pTopGfx = sSamusGfx_Top_Saving_Frame16,
        .pBottomGfx = sSamusGfx_Bottom_Saving_Frame0,
        .pOam = sSamusOam_Saving_Frame16,
        .timer = 1
    },
    [17] = {
        .pTopGfx = sSamusGfx_Top_Saving_Frame17,
        .pBottomGfx = sSamusGfx_Bottom_Saving_Frame9,
        .pOam = sSamusOam_Saving_Frame17,
        .timer = 1
    },
    [18] = {
        .pTopGfx = sSamusGfx_Top_Saving_Frame18,
        .pBottomGfx = sSamusGfx_Bottom_Saving_Frame0,
        .pOam = sSamusOam_Saving_Frame18,
        .timer = 1
    },
    [19] = {
        .pTopGfx = sSamusGfx_Top_Saving_Frame19,
        .pBottomGfx = sSamusGfx_Bottom_Saving_Frame9,
        .pOam = sSamusOam_Saving_Frame19,
        .timer = 1
    },
    [20] = {
        .pTopGfx = sSamusGfx_Top_Saving_Frame20,
        .pBottomGfx = sSamusGfx_Bottom_Saving_Frame0,
        .pOam = sSamusOam_Saving_Frame20,
        .timer = 1
    },
    [21] = {
        .pTopGfx = sSamusGfx_Top_Saving_Frame21,
        .pBottomGfx = sSamusGfx_Bottom_Saving_Frame9,
        .pOam = sSamusOam_Saving_Frame21,
        .timer = 1
    },
    [22] = {
        .pTopGfx = sSamusGfx_Top_Saving_Frame22,
        .pBottomGfx = sSamusGfx_Bottom_Saving_Frame0,
        .pOam = sSamusOam_Saving_Frame22,
        .timer = 1
    },
    [23] = {
        .pTopGfx = sSamusGfx_Top_Saving_Frame23,
        .pBottomGfx = sSamusGfx_Bottom_Saving_Frame9,
        .pOam = sSamusOam_Saving_Frame23,
        .timer = 1
    },
    [24] = {
        .pTopGfx = sSamusGfx_Top_Saving_Frame16,
        .pBottomGfx = sSamusGfx_Bottom_Saving_Frame0,
        .pOam = sSamusOam_Saving_Frame16,
        .timer = 1
    },
    [25] = {
        .pTopGfx = sSamusGfx_Top_Saving_Frame17,
        .pBottomGfx = sSamusGfx_Bottom_Saving_Frame9,
        .pOam = sSamusOam_Saving_Frame17,
        .timer = 1
    },
    [26] = {
        .pTopGfx = sSamusGfx_Top_Saving_Frame18,
        .pBottomGfx = sSamusGfx_Bottom_Saving_Frame0,
        .pOam = sSamusOam_Saving_Frame18,
        .timer = 1
    },
    [27] = {
        .pTopGfx = sSamusGfx_Top_Saving_Frame19,
        .pBottomGfx = sSamusGfx_Bottom_Saving_Frame9,
        .pOam = sSamusOam_Saving_Frame19,
        .timer = 1
    },
    [28] = {
        .pTopGfx = sSamusGfx_Top_Saving_Frame20,
        .pBottomGfx = sSamusGfx_Bottom_Saving_Frame0,
        .pOam = sSamusOam_Saving_Frame20,
        .timer = 1
    },
    [29] = {
        .pTopGfx = sSamusGfx_Top_Saving_Frame21,
        .pBottomGfx = sSamusGfx_Bottom_Saving_Frame9,
        .pOam = sSamusOam_Saving_Frame21,
        .timer = 1
    },
    [30] = {
        .pTopGfx = sSamusGfx_Top_Saving_Frame22,
        .pBottomGfx = sSamusGfx_Bottom_Saving_Frame0,
        .pOam = sSamusOam_Saving_Frame22,
        .timer = 1
    },
    [31] = {
        .pTopGfx = sSamusGfx_Top_Saving_Frame23,
        .pBottomGfx = sSamusGfx_Bottom_Saving_Frame9,
        .pOam = sSamusOam_Saving_Frame23,
        .timer = 1
    },
    [32] = {
        .pTopGfx = sSamusGfx_Top_Saving_Frame32,
        .pBottomGfx = sSamusGfx_Bottom_Saving_Frame0,
        .pOam = sSamusOam_Saving_Frame32,
        .timer = 1
    },
    [33] = {
        .pTopGfx = sSamusGfx_Top_Saving_Frame33,
        .pBottomGfx = sSamusGfx_Bottom_Saving_Frame9,
        .pOam = sSamusOam_Saving_Frame33,
        .timer = 1
    },
    [34] = {
        .pTopGfx = sSamusGfx_Top_Saving_Frame34,
        .pBottomGfx = sSamusGfx_Bottom_Saving_Frame0,
        .pOam = sSamusOam_Saving_Frame34,
        .timer = 1
    },
    [35] = {
        .pTopGfx = sSamusGfx_Top_Saving_Frame35,
        .pBottomGfx = sSamusGfx_Bottom_Saving_Frame9,
        .pOam = sSamusOam_Saving_Frame35,
        .timer = 1
    },
    [36] = {
        .pTopGfx = sSamusGfx_Top_Saving_Frame36,
        .pBottomGfx = sSamusGfx_Bottom_Saving_Frame0,
        .pOam = sSamusOam_Saving_Frame36,
        .timer = 1
    },
    [37] = {
        .pTopGfx = sSamusGfx_Top_Saving_Frame37,
        .pBottomGfx = sSamusGfx_Bottom_Saving_Frame9,
        .pOam = sSamusOam_Saving_Frame37,
        .timer = 1
    },
    [38] = {
        .pTopGfx = sSamusGfx_Top_Saving_Frame38,
        .pBottomGfx = sSamusGfx_Bottom_Saving_Frame0,
        .pOam = sSamusOam_Saving_Frame38,
        .timer = 1
    },
    [39] = {
        .pTopGfx = sSamusGfx_Top_Saving_Frame39,
        .pBottomGfx = sSamusGfx_Bottom_Saving_Frame9,
        .pOam = sSamusOam_Saving_Frame39,
        .timer = 1
    },
    [40] = {
        .pTopGfx = sSamusGfx_Top_Saving_Frame16,
        .pBottomGfx = sSamusGfx_Bottom_Saving_Frame0,
        .pOam = sSamusOam_Saving_Frame16,
        .timer = 1
    },
    [41] = {
        .pTopGfx = sSamusGfx_Top_Saving_Frame17,
        .pBottomGfx = sSamusGfx_Bottom_Saving_Frame9,
        .pOam = sSamusOam_Saving_Frame17,
        .timer = 1
    },
    [42] = {
        .pTopGfx = sSamusGfx_Top_Saving_Frame18,
        .pBottomGfx = sSamusGfx_Bottom_Saving_Frame0,
        .pOam = sSamusOam_Saving_Frame18,
        .timer = 1
    },
    [43] = {
        .pTopGfx = sSamusGfx_Top_Saving_Frame19,
        .pBottomGfx = sSamusGfx_Bottom_Saving_Frame9,
        .pOam = sSamusOam_Saving_Frame19,
        .timer = 1
    },
    [44] = {
        .pTopGfx = sSamusGfx_Top_Saving_Frame20,
        .pBottomGfx = sSamusGfx_Bottom_Saving_Frame0,
        .pOam = sSamusOam_Saving_Frame20,
        .timer = 1
    },
    [45] = {
        .pTopGfx = sSamusGfx_Top_Saving_Frame21,
        .pBottomGfx = sSamusGfx_Bottom_Saving_Frame9,
        .pOam = sSamusOam_Saving_Frame21,
        .timer = 1
    },
    [46] = {
        .pTopGfx = sSamusGfx_Top_Saving_Frame22,
        .pBottomGfx = sSamusGfx_Bottom_Saving_Frame0,
        .pOam = sSamusOam_Saving_Frame22,
        .timer = 1
    },
    [47] = {
        .pTopGfx = sSamusGfx_Top_Saving_Frame23,
        .pBottomGfx = sSamusGfx_Bottom_Saving_Frame9,
        .pOam = sSamusOam_Saving_Frame23,
        .timer = 1
    },
    [48] = {
        .pTopGfx = sSamusGfx_Top_Saving_Frame16,
        .pBottomGfx = sSamusGfx_Bottom_Saving_Frame0,
        .pOam = sSamusOam_Saving_Frame16,
        .timer = 1
    },
    [49] = {
        .pTopGfx = sSamusGfx_Top_Saving_Frame17,
        .pBottomGfx = sSamusGfx_Bottom_Saving_Frame9,
        .pOam = sSamusOam_Saving_Frame17,
        .timer = 1
    },
    [50] = {
        .pTopGfx = sSamusGfx_Top_Saving_Frame18,
        .pBottomGfx = sSamusGfx_Bottom_Saving_Frame0,
        .pOam = sSamusOam_Saving_Frame18,
        .timer = 1
    },
    [51] = {
        .pTopGfx = sSamusGfx_Top_Saving_Frame19,
        .pBottomGfx = sSamusGfx_Bottom_Saving_Frame9,
        .pOam = sSamusOam_Saving_Frame19,
        .timer = 1
    },
    [52] = {
        .pTopGfx = sSamusGfx_Top_Saving_Frame20,
        .pBottomGfx = sSamusGfx_Bottom_Saving_Frame0,
        .pOam = sSamusOam_Saving_Frame20,
        .timer = 1
    },
    [53] = {
        .pTopGfx = sSamusGfx_Top_Saving_Frame21,
        .pBottomGfx = sSamusGfx_Bottom_Saving_Frame9,
        .pOam = sSamusOam_Saving_Frame21,
        .timer = 1
    },
    [54] = {
        .pTopGfx = sSamusGfx_Top_Saving_Frame22,
        .pBottomGfx = sSamusGfx_Bottom_Saving_Frame0,
        .pOam = sSamusOam_Saving_Frame22,
        .timer = 1
    },
    [55] = {
        .pTopGfx = sSamusGfx_Top_Saving_Frame23,
        .pBottomGfx = sSamusGfx_Bottom_Saving_Frame9,
        .pOam = sSamusOam_Saving_Frame23,
        .timer = 1
    },
    [56] = {
        .pTopGfx = sSamusGfx_Empty,
        .pBottomGfx = sSamusGfx_Bottom_Saving_Frame0,
        .pOam = sSamusOam_Saving_Frame0,
        .timer = 1
    },
    [57] = {
        .pTopGfx = sSamusGfx_Top_Saving_Frame9,
        .pBottomGfx = sSamusGfx_Bottom_Saving_Frame9,
        .pOam = sSamusOam_Saving_Frame9,
        .timer = 1
    },
    [58] = {
        .pTopGfx = sSamusGfx_Empty,
        .pBottomGfx = sSamusGfx_Bottom_Saving_Frame0,
        .pOam = sSamusOam_Saving_Frame0,
        .timer = 1
    },
    [59] = {
        .pTopGfx = sSamusGfx_Top_Saving_Frame11,
        .pBottomGfx = sSamusGfx_Bottom_Saving_Frame9,
        .pOam = sSamusOam_Saving_Frame11,
        .timer = 1
    },
    [60] = {
        .pTopGfx = sSamusGfx_Empty,
        .pBottomGfx = sSamusGfx_Bottom_Saving_Frame0,
        .pOam = sSamusOam_Saving_Frame0,
        .timer = 1
    },
    [61] = {
        .pTopGfx = sSamusGfx_Top_Saving_Frame13,
        .pBottomGfx = sSamusGfx_Bottom_Saving_Frame9,
        .pOam = sSamusOam_Saving_Frame13,
        .timer = 1
    },
    [62] = {
        .pTopGfx = sSamusGfx_Empty,
        .pBottomGfx = sSamusGfx_Bottom_Saving_Frame0,
        .pOam = sSamusOam_Saving_Frame0,
        .timer = 1
    },
    [63] = {
        .pTopGfx = sSamusGfx_Top_Saving_Frame15,
        .pBottomGfx = sSamusGfx_Bottom_Saving_Frame9,
        .pOam = sSamusOam_Saving_Frame15,
        .timer = 1
    },
    [64] = {
        .pTopGfx = sSamusGfx_Empty,
        .pBottomGfx = sSamusGfx_Bottom_Saving_Frame0,
        .pOam = sSamusOam_Saving_Frame0,
        .timer = 1
    },
    [65] = {
        .pTopGfx = sSamusGfx_Top_Saving_Frame1,
        .pBottomGfx = sSamusGfx_Bottom_Saving_Frame0,
        .pOam = sSamusOam_Saving_Frame1,
        .timer = 1
    },
    [66] = {
        .pTopGfx = sSamusGfx_Empty,
        .pBottomGfx = sSamusGfx_Bottom_Saving_Frame0,
        .pOam = sSamusOam_Saving_Frame0,
        .timer = 1
    },
    [67] = {
        .pTopGfx = sSamusGfx_Top_Saving_Frame3,
        .pBottomGfx = sSamusGfx_Bottom_Saving_Frame0,
        .pOam = sSamusOam_Saving_Frame1,
        .timer = 1
    },
    [68] = {
        .pTopGfx = sSamusGfx_Empty,
        .pBottomGfx = sSamusGfx_Bottom_Saving_Frame0,
        .pOam = sSamusOam_Saving_Frame0,
        .timer = 1
    },
    [69] = {
        .pTopGfx = sSamusGfx_Top_Saving_Frame5,
        .pBottomGfx = sSamusGfx_Bottom_Saving_Frame0,
        .pOam = sSamusOam_Saving_Frame1,
        .timer = 1
    },
    [70] = {
        .pTopGfx = sSamusGfx_Empty,
        .pBottomGfx = sSamusGfx_Bottom_Saving_Frame0,
        .pOam = sSamusOam_Saving_Frame0,
        .timer = 1
    },
    [71] = {
        .pTopGfx = sSamusGfx_Top_Saving_Frame7,
        .pBottomGfx = sSamusGfx_Bottom_Saving_Frame0,
        .pOam = sSamusOam_Saving_Frame1,
        .timer = 1
    },
    [72] = SAMUS_ANIM_TERMINATOR
};

static const u8 sBlob_2de9b0_2e4904[] = INCBIN_U8("data/Blob_2de9b0_2e4904.bin");
