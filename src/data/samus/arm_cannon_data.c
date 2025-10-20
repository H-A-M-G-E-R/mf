#include "data/samus/arm_cannon_data.h"
#include "data/samus_data.h"

static const u16 sArmCannonOam_Left_DiagonalUp_Running_Frame0[] = {
    3 | ARM_CANNON_OAM_ORDER_BEHIND,
    OAM_ENTRY(-32, -36, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(-16, -44, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(-16, -28, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_Left_DiagonalUp_Running_Frame1[] = {
    3 | ARM_CANNON_OAM_ORDER_BEHIND,
    OAM_ENTRY(-33, -37, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(-17, -45, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(-17, -29, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_Left_DiagonalUp_Running_Frame2[] = {
    3 | ARM_CANNON_OAM_ORDER_BEHIND,
    OAM_ENTRY(-35, -39, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(-19, -47, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(-19, -31, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_Left_DiagonalUp_Running_Frame3[] = {
    3 | ARM_CANNON_OAM_ORDER_BEHIND,
    OAM_ENTRY(-35, -40, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(-19, -48, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(-19, -32, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_2899e4[] = {
    3 | ARM_CANNON_OAM_ORDER_BEHIND,
    OAM_ENTRY(-33, -37, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(-17, -45, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(-17, -29, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_Left_DiagonalUp_Running_Frame5[] = {
    3 | ARM_CANNON_OAM_ORDER_BEHIND,
    OAM_ENTRY(-33, -36, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(-17, -44, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(-17, -28, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_Left_DiagonalUp_Running_Frame6[] = {
    3 | ARM_CANNON_OAM_ORDER_BEHIND,
    OAM_ENTRY(-34, -37, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(-18, -45, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(-18, -29, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_Left_DiagonalUp_Running_Frame7[] = {
    3 | ARM_CANNON_OAM_ORDER_BEHIND,
    OAM_ENTRY(-36, -39, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(-20, -47, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(-20, -31, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_289a34[] = {
    3 | ARM_CANNON_OAM_ORDER_BEHIND,
    OAM_ENTRY(-35, -40, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(-19, -48, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(-19, -32, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_289a48[] = {
    3 | ARM_CANNON_OAM_ORDER_BEHIND,
    OAM_ENTRY(-34, -37, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(-18, -45, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(-18, -29, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_Left_Forward_Running_Frame0[] = {
    3 | ARM_CANNON_OAM_ORDER_BEHIND,
    OAM_ENTRY(-17, -38, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(-17, -22, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(-1, -30, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_Left_Forward_Running_Frame1[] = {
    3 | ARM_CANNON_OAM_ORDER_BEHIND,
    OAM_ENTRY(-19, -39, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(-19, -23, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(-3, -31, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_Left_Forward_Running_Frame2[] = {
    3 | ARM_CANNON_OAM_ORDER_BEHIND,
    OAM_ENTRY(-20, -39, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(-20, -23, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(-4, -31, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_Left_Forward_Running_Frame3[] = {
    3 | ARM_CANNON_OAM_ORDER_BEHIND,
    OAM_ENTRY(-20, -40, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(-20, -24, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(-4, -32, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_Left_Forward_Running_Frame4[] = {
    3 | ARM_CANNON_OAM_ORDER_BEHIND,
    OAM_ENTRY(-18, -38, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(-18, -22, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(-2, -30, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_289ac0[] = {
    3 | ARM_CANNON_OAM_ORDER_BEHIND,
    OAM_ENTRY(-18, -38, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(-18, -22, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(-2, -30, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_Left_Forward_Running_Frame6[] = {
    3 | ARM_CANNON_OAM_ORDER_BEHIND,
    OAM_ENTRY(-19, -38, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(-19, -22, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(-3, -30, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_Left_Forward_Running_Frame7[] = {
    3 | ARM_CANNON_OAM_ORDER_BEHIND,
    OAM_ENTRY(-21, -39, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(-21, -23, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(-5, -31, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_Left_Forward_Running_Frame8[] = {
    3 | ARM_CANNON_OAM_ORDER_BEHIND,
    OAM_ENTRY(-21, -40, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(-21, -24, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(-5, -32, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_289b10[] = {
    3 | ARM_CANNON_OAM_ORDER_BEHIND,
    OAM_ENTRY(-19, -38, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(-19, -22, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(-3, -30, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_Left_DiagonalDown_Running_Frame0[] = {
    3 | ARM_CANNON_OAM_ORDER_BEHIND,
    OAM_ENTRY(-31, -29, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(-15, -37, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(-15, -21, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_Left_DiagonalDown_Running_Frame1[] = {
    3 | ARM_CANNON_OAM_ORDER_BEHIND,
    OAM_ENTRY(-33, -30, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(-17, -38, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(-17, -22, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_289b4c[] = {
    3 | ARM_CANNON_OAM_ORDER_BEHIND,
    OAM_ENTRY(-33, -30, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(-17, -38, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(-17, -22, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_Left_DiagonalDown_Running_Frame3[] = {
    3 | ARM_CANNON_OAM_ORDER_BEHIND,
    OAM_ENTRY(-33, -31, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(-17, -39, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(-17, -23, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_289b74[] = {
    3 | ARM_CANNON_OAM_ORDER_BEHIND,
    OAM_ENTRY(-31, -29, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(-15, -37, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(-15, -21, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_Left_DiagonalDown_Running_Frame5[] = {
    3 | ARM_CANNON_OAM_ORDER_BEHIND,
    OAM_ENTRY(-32, -29, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(-16, -37, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(-16, -21, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_289b9c[] = {
    3 | ARM_CANNON_OAM_ORDER_BEHIND,
    OAM_ENTRY(-33, -30, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(-17, -38, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(-17, -22, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_Left_DiagonalDown_Running_Frame7[] = {
    3 | ARM_CANNON_OAM_ORDER_BEHIND,
    OAM_ENTRY(-34, -30, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(-18, -38, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(-18, -22, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_Left_DiagonalDown_Running_Frame8[] = {
    3 | ARM_CANNON_OAM_ORDER_BEHIND,
    OAM_ENTRY(-34, -31, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(-18, -39, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(-18, -23, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_289bd8[] = {
    3 | ARM_CANNON_OAM_ORDER_BEHIND,
    OAM_ENTRY(-32, -29, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(-16, -37, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(-16, -21, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_Left_Up_Standing_Frame0[] = {
    3 | ARM_CANNON_OAM_ORDER_BEHIND,
    OAM_ENTRY(-21, -48, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(-5, -48, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(-13, -32, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_289c00[] = {
    3 | ARM_CANNON_OAM_ORDER_BEHIND,
    OAM_ENTRY(-21, -48, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(-5, -48, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(-13, -32, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_289c14[] = {
    3 | ARM_CANNON_OAM_ORDER_BEHIND,
    OAM_ENTRY(-21, -48, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(-5, -48, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(-13, -32, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_Left_Up_Shooting_Frame0[] = {
    3 | ARM_CANNON_OAM_ORDER_BEHIND,
    OAM_ENTRY(-21, -47, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(-5, -47, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(-13, -31, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_Left_DiagonalUp_Standing_Frame0[] = {
    3 | ARM_CANNON_OAM_ORDER_BEHIND,
    OAM_ENTRY(-36, -39, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(-20, -47, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(-20, -31, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_Left_DiagonalUp_Standing_Frame1[] = {
    3 | ARM_CANNON_OAM_ORDER_BEHIND,
    OAM_ENTRY(-36, -39, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(-20, -47, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(-20, -31, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_Left_DiagonalUp_Standing_Frame2[] = {
    3 | ARM_CANNON_OAM_ORDER_BEHIND,
    OAM_ENTRY(-36, -39, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(-20, -47, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(-20, -31, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_Left_DiagonalUp_Shooting_Frame0[] = {
    3 | ARM_CANNON_OAM_ORDER_BEHIND,
    OAM_ENTRY(-35, -39, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(-19, -47, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(-19, -31, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_Left_Standing_Frame0[] = {
    3 | ARM_CANNON_OAM_ORDER_BEHIND,
    OAM_ENTRY(-20, -37, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(-20, -21, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(-4, -29, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_289ca0[] = {
    3 | ARM_CANNON_OAM_ORDER_BEHIND,
    OAM_ENTRY(-20, -37, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(-20, -21, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(-4, -29, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_289cb4[] = {
    3 | ARM_CANNON_OAM_ORDER_BEHIND,
    OAM_ENTRY(-20, -37, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(-20, -21, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(-4, -29, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_Left_Shooting_Frame0[] = {
    3 | ARM_CANNON_OAM_ORDER_BEHIND,
    OAM_ENTRY(-18, -37, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(-18, -21, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(-2, -29, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_Left_DiagonalDown_Standing_Frame0[] = {
    3 | ARM_CANNON_OAM_ORDER_BEHIND,
    OAM_ENTRY(-35, -27, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(-19, -35, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(-19, -19, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_289cf0[] = {
    3 | ARM_CANNON_OAM_ORDER_BEHIND,
    OAM_ENTRY(-35, -27, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(-19, -35, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(-19, -19, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_289d04[] = {
    3 | ARM_CANNON_OAM_ORDER_BEHIND,
    OAM_ENTRY(-35, -27, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(-19, -35, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(-19, -19, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_Left_DiagonalDown_Shooting_Frame0[] = {
    3 | ARM_CANNON_OAM_ORDER_BEHIND,
    OAM_ENTRY(-34, -28, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(-18, -36, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(-18, -20, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_Left_Up_Crouching_Frame1[] = {
    3 | ARM_CANNON_OAM_ORDER_BEHIND,
    OAM_ENTRY(-20, -40, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(-4, -40, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(-12, -24, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_Left_Up_Crouching_Frame0[] = {
    3 | ARM_CANNON_OAM_ORDER_BEHIND,
    OAM_ENTRY(-21, -39, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(-5, -39, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(-13, -23, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_Left_DiagonalUp_Crouching_Frame1[] = {
    3 | ARM_CANNON_OAM_ORDER_BEHIND,
    OAM_ENTRY(-35, -31, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(-19, -39, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(-19, -23, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_Left_DiagonalUp_Crouching_Frame0[] = {
    3 | ARM_CANNON_OAM_ORDER_BEHIND,
    OAM_ENTRY(-34, -31, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(-18, -39, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(-18, -23, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_Left_Crouching_Frame1[] = {
    3 | ARM_CANNON_OAM_ORDER_BEHIND,
    OAM_ENTRY(-19, -28, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(-19, -12, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(-3, -20, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_Left_Crouching_Frame0[] = {
    3 | ARM_CANNON_OAM_ORDER_BEHIND,
    OAM_ENTRY(-17, -28, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(-17, -12, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(-1, -20, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_Left_DiagonalDown_Crouching_Frame1[] = {
    3 | ARM_CANNON_OAM_ORDER_BEHIND,
    OAM_ENTRY(-35, -17, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(-19, -25, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(-19, -9, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_Left_DiagonalDown_Crouching_Frame0[] = {
    3 | ARM_CANNON_OAM_ORDER_BEHIND,
    OAM_ENTRY(-34, -18, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(-18, -26, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(-18, -10, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_Right_DiagonalUp_Running_Frame0[] = {
    3 | ARM_CANNON_OAM_ORDER_IN_FRONT,
    OAM_ENTRY(0, -44, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(16, -36, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(0, -28, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_Right_DiagonalUp_Running_Frame1[] = {
    3 | ARM_CANNON_OAM_ORDER_IN_FRONT,
    OAM_ENTRY(1, -45, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(17, -37, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(1, -29, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_Right_DiagonalUp_Running_Frame2[] = {
    3 | ARM_CANNON_OAM_ORDER_IN_FRONT,
    OAM_ENTRY(3, -47, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(19, -39, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(3, -31, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_Right_DiagonalUp_Running_Frame3[] = {
    3 | ARM_CANNON_OAM_ORDER_IN_FRONT,
    OAM_ENTRY(3, -48, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(19, -40, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(3, -32, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_289e1c[] = {
    3 | ARM_CANNON_OAM_ORDER_IN_FRONT,
    OAM_ENTRY(1, -45, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(17, -37, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(1, -29, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_Right_DiagonalUp_Running_Frame5[] = {
    3 | ARM_CANNON_OAM_ORDER_IN_FRONT,
    OAM_ENTRY(1, -44, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(17, -36, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(1, -28, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_Right_DiagonalUp_Running_Frame6[] = {
    3 | ARM_CANNON_OAM_ORDER_IN_FRONT,
    OAM_ENTRY(2, -45, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(18, -37, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(2, -29, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_Right_DiagonalUp_Running_Frame7[] = {
    3 | ARM_CANNON_OAM_ORDER_IN_FRONT,
    OAM_ENTRY(4, -47, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(20, -39, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(4, -31, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_289e6c[] = {
    3 | ARM_CANNON_OAM_ORDER_IN_FRONT,
    OAM_ENTRY(3, -48, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(19, -40, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(3, -32, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_289e80[] = {
    3 | ARM_CANNON_OAM_ORDER_IN_FRONT,
    OAM_ENTRY(2, -45, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(18, -37, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(2, -29, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_Right_Forward_Running_Frame0[] = {
    3 | ARM_CANNON_OAM_ORDER_IN_FRONT,
    OAM_ENTRY(-15, -30, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(1, -38, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(1, -22, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_Right_Forward_Running_Frame1[] = {
    3 | ARM_CANNON_OAM_ORDER_IN_FRONT,
    OAM_ENTRY(-13, -31, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(3, -39, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(3, -23, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_Right_Forward_Running_Frame2[] = {
    3 | ARM_CANNON_OAM_ORDER_IN_FRONT,
    OAM_ENTRY(-12, -31, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(4, -39, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(4, -23, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_Right_Forward_Running_Frame3[] = {
    3 | ARM_CANNON_OAM_ORDER_IN_FRONT,
    OAM_ENTRY(-12, -32, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(4, -40, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(4, -24, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_Right_Forward_Running_Frame4[] = {
    3 | ARM_CANNON_OAM_ORDER_IN_FRONT,
    OAM_ENTRY(-14, -30, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(2, -38, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(2, -22, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_289ef8[] = {
    3 | ARM_CANNON_OAM_ORDER_IN_FRONT,
    OAM_ENTRY(-14, -30, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(2, -38, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(2, -22, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_Right_Forward_Running_Frame6[] = {
    3 | ARM_CANNON_OAM_ORDER_IN_FRONT,
    OAM_ENTRY(-13, -30, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(3, -38, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(3, -22, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_Right_Forward_Running_Frame7[] = {
    3 | ARM_CANNON_OAM_ORDER_IN_FRONT,
    OAM_ENTRY(-11, -31, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(5, -39, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(5, -23, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_Right_Forward_Running_Frame8[] = {
    3 | ARM_CANNON_OAM_ORDER_IN_FRONT,
    OAM_ENTRY(-11, -32, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(5, -40, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(5, -24, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_289f48[] = {
    3 | ARM_CANNON_OAM_ORDER_IN_FRONT,
    OAM_ENTRY(-13, -30, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(3, -38, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(3, -22, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_Right_DiagonalDown_Running_Frame0[] = {
    3 | ARM_CANNON_OAM_ORDER_IN_FRONT,
    OAM_ENTRY(-1, -37, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(15, -29, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(-1, -21, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_Right_DiagonalDown_Running_Frame1[] = {
    3 | ARM_CANNON_OAM_ORDER_IN_FRONT,
    OAM_ENTRY(1, -38, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(17, -30, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(1, -22, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_289f84[] = {
    3 | ARM_CANNON_OAM_ORDER_IN_FRONT,
    OAM_ENTRY(1, -38, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(17, -30, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(1, -22, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_Right_DiagonalDown_Running_Frame3[] = {
    3 | ARM_CANNON_OAM_ORDER_IN_FRONT,
    OAM_ENTRY(1, -39, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(17, -31, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(1, -23, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_Right_DiagonalDown_Running_Frame4[] = {
    3 | ARM_CANNON_OAM_ORDER_IN_FRONT,
    OAM_ENTRY(0, -37, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(16, -29, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(0, -21, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_289fc0[] = {
    3 | ARM_CANNON_OAM_ORDER_IN_FRONT,
    OAM_ENTRY(0, -37, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(16, -29, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(0, -21, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_289fd4[] = {
    3 | ARM_CANNON_OAM_ORDER_IN_FRONT,
    OAM_ENTRY(1, -38, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(17, -30, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(1, -22, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_Right_DiagonalDown_Running_Frame7[] = {
    3 | ARM_CANNON_OAM_ORDER_IN_FRONT,
    OAM_ENTRY(2, -38, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(18, -30, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(2, -22, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_Right_DiagonalDown_Running_Frame8[] = {
    3 | ARM_CANNON_OAM_ORDER_IN_FRONT,
    OAM_ENTRY(2, -39, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(18, -31, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(2, -23, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_Right_DiagonalDown_Running_Frame9[] = {
    3 | ARM_CANNON_OAM_ORDER_IN_FRONT,
    OAM_ENTRY(1, -37, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(17, -29, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(1, -21, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_Right_Up_Standing_Frame0[] = {
    2 | ARM_CANNON_OAM_ORDER_IN_FRONT,
    OAM_ENTRY(-11, -48, OAM_DIMS_32x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(-3, -32, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_28a032[] = {
    2 | ARM_CANNON_OAM_ORDER_IN_FRONT,
    OAM_ENTRY(-11, -48, OAM_DIMS_32x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(-3, -32, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_28a040[] = {
    2 | ARM_CANNON_OAM_ORDER_IN_FRONT,
    OAM_ENTRY(-11, -48, OAM_DIMS_32x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(-3, -32, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_Right_Up_Shooting_Frame0[] = {
    2 | ARM_CANNON_OAM_ORDER_IN_FRONT,
    OAM_ENTRY(-11, -47, OAM_DIMS_32x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(-3, -31, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_28a05c[] = {
    3 | ARM_CANNON_OAM_ORDER_IN_FRONT,
    OAM_ENTRY(4, -47, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(20, -39, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(4, -31, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_28a070[] = {
    3 | ARM_CANNON_OAM_ORDER_IN_FRONT,
    OAM_ENTRY(4, -47, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(20, -39, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(4, -31, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_28a084[] = {
    3 | ARM_CANNON_OAM_ORDER_IN_FRONT,
    OAM_ENTRY(4, -47, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(20, -39, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(4, -31, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_Right_DiagonalUp_Shooting_Frame0[] = {
    3 | ARM_CANNON_OAM_ORDER_IN_FRONT,
    OAM_ENTRY(3, -47, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(19, -39, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(3, -31, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_Right_Standing_Frame0[] = {
    3 | ARM_CANNON_OAM_ORDER_IN_FRONT,
    OAM_ENTRY(-12, -29, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(4, -37, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(4, -21, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_28a0c0[] = {
    3 | ARM_CANNON_OAM_ORDER_IN_FRONT,
    OAM_ENTRY(-12, -29, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(4, -37, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(4, -21, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_28a0d4[] = {
    3 | ARM_CANNON_OAM_ORDER_IN_FRONT,
    OAM_ENTRY(-12, -29, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(4, -37, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(4, -21, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_Right_Shooting_Frame0[] = {
    3 | ARM_CANNON_OAM_ORDER_IN_FRONT,
    OAM_ENTRY(-13, -29, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(3, -37, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(3, -21, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_Right_DiagonalDown_Standing_Frame0[] = {
    3 | ARM_CANNON_OAM_ORDER_IN_FRONT,
    OAM_ENTRY(3, -35, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(19, -27, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(3, -19, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_28a110[] = {
    3 | ARM_CANNON_OAM_ORDER_IN_FRONT,
    OAM_ENTRY(3, -35, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(19, -27, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(3, -19, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_28a124[] = {
    3 | ARM_CANNON_OAM_ORDER_IN_FRONT,
    OAM_ENTRY(3, -35, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(19, -27, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(3, -19, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_Right_DiagonalDown_Shooting_Frame0[] = {
    3 | ARM_CANNON_OAM_ORDER_IN_FRONT,
    OAM_ENTRY(2, -35, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(18, -27, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(2, -19, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_Right_Up_Crouching_Frame1[] = {
    2 | ARM_CANNON_OAM_ORDER_IN_FRONT,
    OAM_ENTRY(-12, -39, OAM_DIMS_32x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(-4, -23, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_Right_Up_Crouching_Frame0[] = {
    2 | ARM_CANNON_OAM_ORDER_IN_FRONT,
    OAM_ENTRY(-12, -38, OAM_DIMS_32x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(-4, -22, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_Right_DiagonalUp_Crouching_Frame1[] = {
    3 | ARM_CANNON_OAM_ORDER_IN_FRONT,
    OAM_ENTRY(2, -39, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(18, -31, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(2, -23, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_Right_DiagonalUp_Crouching_Frame0[] = {
    3 | ARM_CANNON_OAM_ORDER_IN_FRONT,
    OAM_ENTRY(1, -39, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(17, -31, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(1, -23, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_Right_Crouching_Frame1[] = {
    3 | ARM_CANNON_OAM_ORDER_IN_FRONT,
    OAM_ENTRY(-13, -20, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(3, -28, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(3, -12, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_Right_Crouching_Frame0[] = {
    OAM_ENTRY(1, -28, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(1, -12, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0),
    OAM_ENTRY(11, -16, OAM_DIMS_8x8, OAM_NO_FLIP, 0x5f, 1, 0),
    0
};

static const u16 sArmCannonOam_Right_DiagonalDown_Crouching_Frame1[] = {
    3 | ARM_CANNON_OAM_ORDER_IN_FRONT,
    OAM_ENTRY(3, -25, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(19, -17, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(3, -9, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_Right_DiagonalDown_Crouching_Frame0[] = {
    3 | ARM_CANNON_OAM_ORDER_IN_FRONT,
    OAM_ENTRY(2, -26, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(18, -18, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(2, -10, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const s16 sArmCannonOffset_Left_Running_Frame0[2] = {
    C_S8_2_S16(-21),
    C_S9_2_S16(-7)
};

static const s16 sArmCannonOffset_Left_Running_Frame1[2] = {
    C_S8_2_S16(-22),
    C_S9_2_S16(-9)
};

static const s16 sArmCannonOffset_Left_Running_Frame2[2] = {
    C_S8_2_S16(-28),
    C_S9_2_S16(-12)
};

static const s16 sArmCannonOffset_Left_Running_Frame3[2] = {
    C_S8_2_S16(-25),
    C_S9_2_S16(-11)
};

static const s16 sArmCannonOffset_Left_Running_Frame4[2] = {
    C_S8_2_S16(-23),
    C_S9_2_S16(-9)
};

static const s16 sArmCannonOffset_Left_Running_Frame6[2] = {
    C_S8_2_S16(-23),
    C_S9_2_S16(3)
};

static const s16 sArmCannonOffset_Left_Running_Frame7[2] = {
    C_S8_2_S16(-23),
    C_S9_2_S16(0)
};

static const s16 sArmCannonOffset_Left_Running_Frame8[2] = {
    C_S8_2_S16(-23),
    C_S9_2_S16(-2)
};

static const s16 sArmCannonOffset_Left_Running_Frame9[2] = {
    C_S8_2_S16(-23),
    C_S9_2_S16(-5)
};

static const s16 sArmCannonOffset_Left_DiagonalUp_Running_Frame0[2] = {
    C_S8_2_S16(-34),
    C_S9_2_S16(-15)
};

static const s16 sArmCannonOffset_Left_DiagonalUp_Running_Frame1[2] = {
    C_S8_2_S16(-35),
    C_S9_2_S16(-16)
};

static const s16 sArmCannonOffset_Left_DiagonalUp_Running_Frame2[2] = {
    C_S8_2_S16(-37),
    C_S9_2_S16(-18)
};

static const s16 sArmCannonOffset_Left_DiagonalUp_Running_Frame3[2] = {
    C_S8_2_S16(-38),
    C_S9_2_S16(-18)
};

static const s16 sArmCannonOffset_Left_DiagonalUp_Running_Frame5[2] = {
    C_S8_2_S16(-34),
    C_S9_2_S16(-16)
};

static const s16 sArmCannonOffset_Left_DiagonalUp_Running_Frame6[2] = {
    C_S8_2_S16(-35),
    C_S9_2_S16(-17)
};

static const s16 sArmCannonOffset_Left_DiagonalUp_Running_Frame7[2] = {
    C_S8_2_S16(-37),
    C_S9_2_S16(-19)
};

static const s16 sArmCannonOffset_Left_Forward_Running_Frame0[2] = {
    C_S8_2_S16(-22),
    C_S9_2_S16(-15)
};

static const s16 sArmCannonOffset_Left_Forward_Running_Frame1[2] = {
    C_S8_2_S16(-23),
    C_S9_2_S16(-17)
};

static const s16 sArmCannonOffset_Left_Forward_Running_Frame2[2] = {
    C_S8_2_S16(-23),
    C_S9_2_S16(-18)
};

static const s16 sArmCannonOffset_Left_Forward_Running_Frame3[2] = {
    C_S8_2_S16(-24),
    C_S9_2_S16(-18)
};

static const s16 sArmCannonOffset_Left_Forward_Running_Frame4[2] = {
    C_S8_2_S16(-22),
    C_S9_2_S16(-16)
};

static const s16 sArmCannonOffset_Left_Forward_Running_Frame6[2] = {
    C_S8_2_S16(-22),
    C_S9_2_S16(-17)
};

static const s16 sArmCannonOffset_Left_Forward_Running_Frame7[2] = {
    C_S8_2_S16(-23),
    C_S9_2_S16(-19)
};

static const s16 sArmCannonOffset_Left_Forward_Running_Frame8[2] = {
    C_S8_2_S16(-24),
    C_S9_2_S16(-19)
};

static const s16 sArmCannonOffset_Left_DiagonalDown_Running_Frame0[2] = {
    C_S8_2_S16(-15),
    C_S9_2_S16(-13)
};

static const s16 sArmCannonOffset_Left_DiagonalDown_Running_Frame1[2] = {
    C_S8_2_S16(-16),
    C_S9_2_S16(-15)
};

static const s16 sArmCannonOffset_Left_DiagonalDown_Running_Frame3[2] = {
    C_S8_2_S16(-17),
    C_S9_2_S16(-15)
};

static const s16 sArmCannonOffset_Left_DiagonalDown_Running_Frame5[2] = {
    C_S8_2_S16(-15),
    C_S9_2_S16(-14)
};

static const s16 sArmCannonOffset_Left_DiagonalDown_Running_Frame7[2] = {
    C_S8_2_S16(-16),
    C_S9_2_S16(-16)
};

static const s16 sArmCannonOffset_Left_DiagonalDown_Running_Frame8[2] = {
    C_S8_2_S16(-17),
    C_S9_2_S16(-16)
};

static const s16 sArmCannonOffset_Left_Up_Standing_Frame0[2] = {
    C_S8_2_S16(-46),
    C_S9_2_S16(-5)
};

static const s16 sArmCannonOffset_Left_Up_Shooting_Frame0[2] = {
    C_S8_2_S16(-45),
    C_S9_2_S16(-5)
};

static const s16 sArmCannonOffset_Left_DiagonalUp_Shooting_Frame0[2] = {
    C_S8_2_S16(-37),
    C_S9_2_S16(-17)
};

static const s16 sArmCannonOffset_Left_Standing_Frame0[2] = {
    C_S8_2_S16(-21),
    C_S9_2_S16(-18)
};

static const s16 sArmCannonOffset_Left_Shooting_Frame0[2] = {
    C_S8_2_S16(-21),
    C_S9_2_S16(-16)
};

static const s16 sArmCannonOffset_Left_DiagonalDown_Standing_Frame0[2] = {
    C_S8_2_S16(-13),
    C_S9_2_S16(-17)
};

static const s16 sArmCannonOffset_Left_DiagonalDown_Shooting_Frame0[2] = {
    C_S8_2_S16(-14),
    C_S9_2_S16(-16)
};

static const s16 sArmCannonOffset_Left_Up_Crouching_Frame1[2] = {
    C_S8_2_S16(-38),
    C_S9_2_S16(-4)
};

static const s16 sArmCannonOffset_Left_Up_Crouching_Frame0[2] = {
    C_S8_2_S16(-37),
    C_S9_2_S16(-5)
};

static const s16 sArmCannonOffset_Left_DiagonalUp_Crouching_Frame1[2] = {
    C_S8_2_S16(-29),
    C_S9_2_S16(-17)
};

static const s16 sArmCannonOffset_Left_DiagonalUp_Crouching_Frame0[2] = {
    C_S8_2_S16(-29),
    C_S9_2_S16(-16)
};

static const s16 sArmCannonOffset_Left_Crouching_Frame1[2] = {
    C_S8_2_S16(-12),
    C_S9_2_S16(-17)
};

static const s16 sArmCannonOffset_Left_Crouching_Frame0[2] = {
    C_S8_2_S16(-12),
    C_S9_2_S16(-15)
};

static const s16 sArmCannonOffset_Left_DiagonalDown_Crouching_Frame1[2] = {
    C_S8_2_S16(-3),
    C_S9_2_S16(-17)
};

static const s16 sArmCannonOffset_Left_DiagonalDown_Crouching_Frame0[2] = {
    C_S8_2_S16(-4),
    C_S9_2_S16(-16)
};

static const s16 sArmCannonOffset_Right_Running_Frame0[2] = {
    C_S8_2_S16(-21),
    C_S9_2_S16(11)
};

static const s16 sArmCannonOffset_Right_Running_Frame1[2] = {
    C_S8_2_S16(-17),
    C_S9_2_S16(7)
};

static const s16 sArmCannonOffset_Right_Running_Frame2[2] = {
    C_S8_2_S16(-17),
    C_S9_2_S16(-2)
};

static const s16 sArmCannonOffset_Right_Running_Frame3[2] = {
    C_S8_2_S16(-15),
    C_S9_2_S16(7)
};

static const s16 sArmCannonOffset_Right_Running_Frame4[2] = {
    C_S8_2_S16(-17),
    C_S9_2_S16(9)
};

static const s16 sArmCannonOffset_Right_Running_Frame5[2] = {
    C_S8_2_S16(-24),
    C_S9_2_S16(10)
};

static const s16 sArmCannonOffset_Right_Running_Frame6[2] = {
    C_S8_2_S16(-26),
    C_S9_2_S16(12)
};

static const s16 sArmCannonOffset_Right_Running_Frame7[2] = {
    C_S8_2_S16(-30),
    C_S9_2_S16(14)
};

static const s16 sArmCannonOffset_Right_Running_Frame8[2] = {
    C_S8_2_S16(-30),
    C_S9_2_S16(13)
};

static const s16 sArmCannonOffset_Right_Running_Frame9[2] = {
    C_S8_2_S16(-25),
    C_S9_2_S16(13)
};

static const s16 sArmCannonOffset_Right_DiagonalUp_Running_Frame0[2] = {
    C_S8_2_S16(-34),
    C_S9_2_S16(15)
};

static const s16 sArmCannonOffset_Right_DiagonalUp_Running_Frame1[2] = {
    C_S8_2_S16(-35),
    C_S9_2_S16(16)
};

static const s16 sArmCannonOffset_Right_DiagonalUp_Running_Frame2[2] = {
    C_S8_2_S16(-37),
    C_S9_2_S16(18)
};

static const s16 sArmCannonOffset_Right_DiagonalUp_Running_Frame3[2] = {
    C_S8_2_S16(-38),
    C_S9_2_S16(18)
};

static const s16 sArmCannonOffset_Right_DiagonalUp_Running_Frame5[2] = {
    C_S8_2_S16(-34),
    C_S9_2_S16(16)
};

static const s16 sArmCannonOffset_Right_DiagonalUp_Running_Frame6[2] = {
    C_S8_2_S16(-35),
    C_S9_2_S16(17)
};

static const s16 sArmCannonOffset_Right_DiagonalUp_Running_Frame7[2] = {
    C_S8_2_S16(-37),
    C_S9_2_S16(19)
};

static const s16 sArmCannonOffset_Right_Forward_Running_Frame0[2] = {
    C_S8_2_S16(-22),
    C_S9_2_S16(15)
};

static const s16 sArmCannonOffset_Right_Forward_Running_Frame1[2] = {
    C_S8_2_S16(-23),
    C_S9_2_S16(17)
};

static const s16 sArmCannonOffset_Right_Forward_Running_Frame2[2] = {
    C_S8_2_S16(-23),
    C_S9_2_S16(18)
};

static const s16 sArmCannonOffset_Right_Forward_Running_Frame3[2] = {
    C_S8_2_S16(-24),
    C_S9_2_S16(18)
};

static const s16 sArmCannonOffset_Right_Forward_Running_Frame4[2] = {
    C_S8_2_S16(-22),
    C_S9_2_S16(16)
};

static const s16 sArmCannonOffset_Right_Forward_Running_Frame6[2] = {
    C_S8_2_S16(-22),
    C_S9_2_S16(17)
};

static const s16 sArmCannonOffset_Right_Forward_Running_Frame7[2] = {
    C_S8_2_S16(-23),
    C_S9_2_S16(19)
};

static const s16 sArmCannonOffset_Right_Forward_Running_Frame8[2] = {
    C_S8_2_S16(-24),
    C_S9_2_S16(19)
};

static const s16 sArmCannonOffset_Right_DiagonalDown_Running_Frame0[2] = {
    C_S8_2_S16(-15),
    C_S9_2_S16(13)
};

static const s16 sArmCannonOffset_Right_DiagonalDown_Running_Frame1[2] = {
    C_S8_2_S16(-16),
    C_S9_2_S16(15)
};

static const s16 sArmCannonOffset_Right_DiagonalDown_Running_Frame3[2] = {
    C_S8_2_S16(-17),
    C_S9_2_S16(15)
};

static const s16 sArmCannonOffset_Right_DiagonalDown_Running_Frame4[2] = {
    C_S8_2_S16(-15),
    C_S9_2_S16(14)
};

static const s16 sArmCannonOffset_Right_DiagonalDown_Running_Frame7[2] = {
    C_S8_2_S16(-16),
    C_S9_2_S16(16)
};

static const s16 sArmCannonOffset_Right_DiagonalDown_Running_Frame8[2] = {
    C_S8_2_S16(-17),
    C_S9_2_S16(16)
};

static const s16 sArmCannonOffset_Right_DiagonalDown_Running_Frame9[2] = {
    C_S8_2_S16(-15),
    C_S9_2_S16(15)
};

static const s16 sArmCannonOffset_Right_Up_Standing_Frame0[2] = {
    C_S8_2_S16(-46),
    C_S9_2_S16(5)
};

static const s16 sArmCannonOffset_Right_Up_Shooting_Frame0[2] = {
    C_S8_2_S16(-45),
    C_S9_2_S16(5)
};

static const s16 sArmCannonOffset_Right_DiagonalUp_Shooting_Frame0[2] = {
    C_S8_2_S16(-37),
    C_S9_2_S16(17)
};

static const s16 sArmCannonOffset_Right_Standing_Frame0[2] = {
    C_S8_2_S16(-21),
    C_S9_2_S16(18)
};

static const s16 sArmCannonOffset_Right_Shooting_Frame0[2] = {
    C_S8_2_S16(-21),
    C_S9_2_S16(17)
};

static const s16 sArmCannonOffset_Right_DiagonalDown_Standing_Frame0[2] = {
    C_S8_2_S16(-13),
    C_S9_2_S16(17)
};

static const s16 sArmCannonOffset_Right_DiagonalDown_Shooting_Frame0[2] = {
    C_S8_2_S16(-13),
    C_S9_2_S16(16)
};

static const s16 sArmCannonOffset_Right_Up_Crouching_Frame1[2] = {
    C_S8_2_S16(-37),
    C_S9_2_S16(4)
};

static const s16 sArmCannonOffset_Right_Up_Crouching_Frame0[2] = {
    C_S8_2_S16(-36),
    C_S9_2_S16(4)
};

static const s16 sArmCannonOffset_Right_DiagonalUp_Crouching_Frame1[2] = {
    C_S8_2_S16(-29),
    C_S9_2_S16(16)
};

static const s16 sArmCannonOffset_Right_DiagonalUp_Crouching_Frame0[2] = {
    C_S8_2_S16(-29),
    C_S9_2_S16(15)
};

static const s16 sArmCannonOffset_Right_Crouching_Frame1[2] = {
    C_S8_2_S16(-12),
    C_S9_2_S16(17)
};

static const s16 sArmCannonOffset_Right_Crouching_Frame0[2] = {
    C_S8_2_S16(-12),
    C_S9_2_S16(15)
};

static const s16 sArmCannonOffset_Right_DiagonalDown_Crouching_Frame1[2] = {
    C_S8_2_S16(-3),
    C_S9_2_S16(17)
};

static const s16 sArmCannonOffset_Right_DiagonalDown_Crouching_Frame0[2] = {
    C_S8_2_S16(-4),
    C_S9_2_S16(16)
};

static const s16 sArmCannonOffset_Left_Skidding_Frame0[2] = {
    C_S8_2_S16(-28),
    C_S9_2_S16(-11)
};

static const s16 sArmCannonOffset_Right_DiagonalDown_Crouching_Frame25[2] = {
    C_S8_2_S16(-24),
    C_S9_2_S16(-10)
};

static const s16 sArmCannonOffset_Right_DiagonalDown_Crouching_Frame30[2] = {
    C_S8_2_S16(-22),
    C_S9_2_S16(-1)
};

static const s16 sArmCannonOffset_28a35c[2] = {
    C_S8_2_S16(-14),
    C_S9_2_S16(6)
};

static const s16 sArmCannonOffset_Right_Skidding_Frame0[2] = {
    C_S8_2_S16(-26),
    C_S9_2_S16(13)
};

static const s16 sArmCannonOffset_Left_HitByOmegaMetroid_Frame0[2] = {
    C_S8_2_S16(-3),
    C_S9_2_S16(-12)
};

static const s16 sArmCannonOffset_Left_HitByOmegaMetroid_Frame1[2] = {
    C_S8_2_S16(-3),
    C_S9_2_S16(-11)
};

static const s16 sArmCannonOffset_Left_HitByOmegaMetroid_Frame2[2] = {
    C_S8_2_S16(-3),
    C_S9_2_S16(-10)
};

static const s16 sArmCannonOffset_Right_HitByOmegaMetroid_Frame0[2] = {
    C_S8_2_S16(-6),
    C_S9_2_S16(3)
};

static const s16 sArmCannonOffset_Right_HitByOmegaMetroid_Frame1[2] = {
    C_S8_2_S16(-4),
    C_S9_2_S16(0)
};

static const s16 sArmCannonOffset_Right_HitByOmegaMetroid_Frame2[2] = {
    C_S8_2_S16(-4),
    C_S9_2_S16(-2)
};

const struct ArmCannonAnimationData sArmCannonAnim_Left_Running[10] = {
    [0] = {
        .pOffset = sArmCannonOffset_Left_Running_Frame0,
        .pOam = sSamusOam_Empty
    },
    [1] = {
        .pOffset = sArmCannonOffset_Left_Running_Frame1,
        .pOam = sSamusOam_Empty
    },
    [2] = {
        .pOffset = sArmCannonOffset_Left_Running_Frame2,
        .pOam = sSamusOam_Empty
    },
    [3] = {
        .pOffset = sArmCannonOffset_Left_Running_Frame3,
        .pOam = sSamusOam_Empty
    },
    [4] = {
        .pOffset = sArmCannonOffset_Left_Running_Frame4,
        .pOam = sSamusOam_Empty
    },
    [5] = {
        .pOffset = sArmCannonOffset_Empty,
        .pOam = sSamusOam_Empty
    },
    [6] = {
        .pOffset = sArmCannonOffset_Left_Running_Frame6,
        .pOam = sSamusOam_Empty
    },
    [7] = {
        .pOffset = sArmCannonOffset_Left_Running_Frame7,
        .pOam = sSamusOam_Empty
    },
    [8] = {
        .pOffset = sArmCannonOffset_Left_Running_Frame8,
        .pOam = sSamusOam_Empty
    },
    [9] = {
        .pOffset = sArmCannonOffset_Left_Running_Frame9,
        .pOam = sSamusOam_Empty
    }
};

const struct ArmCannonAnimationData sArmCannonAnim_Left_DiagonalUp_Running[10] = {
    [0] = {
        .pOffset = sArmCannonOffset_Left_DiagonalUp_Running_Frame0,
        .pOam = sArmCannonOam_Left_DiagonalUp_Running_Frame0
    },
    [1] = {
        .pOffset = sArmCannonOffset_Left_DiagonalUp_Running_Frame1,
        .pOam = sArmCannonOam_Left_DiagonalUp_Running_Frame1
    },
    [2] = {
        .pOffset = sArmCannonOffset_Left_DiagonalUp_Running_Frame2,
        .pOam = sArmCannonOam_Left_DiagonalUp_Running_Frame2
    },
    [3] = {
        .pOffset = sArmCannonOffset_Left_DiagonalUp_Running_Frame3,
        .pOam = sArmCannonOam_Left_DiagonalUp_Running_Frame3
    },
    [4] = {
        .pOffset = sArmCannonOffset_Left_DiagonalUp_Running_Frame1,
        .pOam = sArmCannonOam_Left_DiagonalUp_Running_Frame1
    },
    [5] = {
        .pOffset = sArmCannonOffset_Left_DiagonalUp_Running_Frame5,
        .pOam = sArmCannonOam_Left_DiagonalUp_Running_Frame5
    },
    [6] = {
        .pOffset = sArmCannonOffset_Left_DiagonalUp_Running_Frame6,
        .pOam = sArmCannonOam_Left_DiagonalUp_Running_Frame6
    },
    [7] = {
        .pOffset = sArmCannonOffset_Left_DiagonalUp_Running_Frame7,
        .pOam = sArmCannonOam_Left_DiagonalUp_Running_Frame7
    },
    [8] = {
        .pOffset = sArmCannonOffset_Left_DiagonalUp_Running_Frame3,
        .pOam = sArmCannonOam_Left_DiagonalUp_Running_Frame3
    },
    [9] = {
        .pOffset = sArmCannonOffset_Left_DiagonalUp_Running_Frame6,
        .pOam = sArmCannonOam_Left_DiagonalUp_Running_Frame6
    }
};

const struct ArmCannonAnimationData sArmCannonAnim_Left_Forward_Running[10] = {
    [0] = {
        .pOffset = sArmCannonOffset_Left_Forward_Running_Frame0,
        .pOam = sArmCannonOam_Left_Forward_Running_Frame0
    },
    [1] = {
        .pOffset = sArmCannonOffset_Left_Forward_Running_Frame1,
        .pOam = sArmCannonOam_Left_Forward_Running_Frame1
    },
    [2] = {
        .pOffset = sArmCannonOffset_Left_Forward_Running_Frame2,
        .pOam = sArmCannonOam_Left_Forward_Running_Frame2
    },
    [3] = {
        .pOffset = sArmCannonOffset_Left_Forward_Running_Frame3,
        .pOam = sArmCannonOam_Left_Forward_Running_Frame3
    },
    [4] = {
        .pOffset = sArmCannonOffset_Left_Forward_Running_Frame4,
        .pOam = sArmCannonOam_Left_Forward_Running_Frame4
    },
    [5] = {
        .pOffset = sArmCannonOffset_Left_Forward_Running_Frame4,
        .pOam = sArmCannonOam_Left_Forward_Running_Frame4
    },
    [6] = {
        .pOffset = sArmCannonOffset_Left_Forward_Running_Frame6,
        .pOam = sArmCannonOam_Left_Forward_Running_Frame6
    },
    [7] = {
        .pOffset = sArmCannonOffset_Left_Forward_Running_Frame7,
        .pOam = sArmCannonOam_Left_Forward_Running_Frame7
    },
    [8] = {
        .pOffset = sArmCannonOffset_Left_Forward_Running_Frame8,
        .pOam = sArmCannonOam_Left_Forward_Running_Frame8
    },
    [9] = {
        .pOffset = sArmCannonOffset_Left_Forward_Running_Frame6,
        .pOam = sArmCannonOam_Left_Forward_Running_Frame6
    }
};

const struct ArmCannonAnimationData sArmCannonAnim_Left_DiagonalDown_Running[10] = {
    [0] = {
        .pOffset = sArmCannonOffset_Left_DiagonalDown_Running_Frame0,
        .pOam = sArmCannonOam_Left_DiagonalDown_Running_Frame0
    },
    [1] = {
        .pOffset = sArmCannonOffset_Left_DiagonalDown_Running_Frame1,
        .pOam = sArmCannonOam_Left_DiagonalDown_Running_Frame1
    },
    [2] = {
        .pOffset = sArmCannonOffset_Left_DiagonalDown_Running_Frame1,
        .pOam = sArmCannonOam_Left_DiagonalDown_Running_Frame1
    },
    [3] = {
        .pOffset = sArmCannonOffset_Left_DiagonalDown_Running_Frame3,
        .pOam = sArmCannonOam_Left_DiagonalDown_Running_Frame3
    },
    [4] = {
        .pOffset = sArmCannonOffset_Left_DiagonalDown_Running_Frame0,
        .pOam = sArmCannonOam_Left_DiagonalDown_Running_Frame0
    },
    [5] = {
        .pOffset = sArmCannonOffset_Left_DiagonalDown_Running_Frame5,
        .pOam = sArmCannonOam_Left_DiagonalDown_Running_Frame5
    },
    [6] = {
        .pOffset = sArmCannonOffset_Left_DiagonalDown_Running_Frame1,
        .pOam = sArmCannonOam_Left_DiagonalDown_Running_Frame1
    },
    [7] = {
        .pOffset = sArmCannonOffset_Left_DiagonalDown_Running_Frame7,
        .pOam = sArmCannonOam_Left_DiagonalDown_Running_Frame7
    },
    [8] = {
        .pOffset = sArmCannonOffset_Left_DiagonalDown_Running_Frame8,
        .pOam = sArmCannonOam_Left_DiagonalDown_Running_Frame8
    },
    [9] = {
        .pOffset = sArmCannonOffset_Left_DiagonalDown_Running_Frame5,
        .pOam = sArmCannonOam_Left_DiagonalDown_Running_Frame5
    }
};

const struct ArmCannonAnimationData sArmCannonAnim_Left_Up_Standing[3] = {
    [0] = {
        .pOffset = sArmCannonOffset_Left_Up_Standing_Frame0,
        .pOam = sArmCannonOam_Left_Up_Standing_Frame0
    },
    [1] = {
        .pOffset = sArmCannonOffset_Left_Up_Standing_Frame0,
        .pOam = sArmCannonOam_Left_Up_Standing_Frame0
    },
    [2] = {
        .pOffset = sArmCannonOffset_Left_Up_Standing_Frame0,
        .pOam = sArmCannonOam_Left_Up_Standing_Frame0
    }
};

const struct ArmCannonAnimationData sArmCannonAnim_Left_Up_Shooting[2] = {
    [0] = {
        .pOffset = sArmCannonOffset_Left_Up_Shooting_Frame0,
        .pOam = sArmCannonOam_Left_Up_Shooting_Frame0
    },
    [1] = {
        .pOffset = sArmCannonOffset_Left_Up_Standing_Frame0,
        .pOam = sArmCannonOam_Left_Up_Standing_Frame0
    }
};

const struct ArmCannonAnimationData sArmCannonAnim_Left_DiagonalUp_Standing[3] = {
    [0] = {
        .pOffset = sArmCannonOffset_Left_DiagonalUp_Running_Frame2,
        .pOam = sArmCannonOam_Left_DiagonalUp_Standing_Frame0
    },
    [1] = {
        .pOffset = sArmCannonOffset_Left_DiagonalUp_Running_Frame2,
        .pOam = sArmCannonOam_Left_DiagonalUp_Standing_Frame1
    },
    [2] = {
        .pOffset = sArmCannonOffset_Left_DiagonalUp_Running_Frame2,
        .pOam = sArmCannonOam_Left_DiagonalUp_Standing_Frame2
    }
};

const struct ArmCannonAnimationData sArmCannonAnim_Left_DiagonalUp_Shooting[2] = {
    [0] = {
        .pOffset = sArmCannonOffset_Left_DiagonalUp_Shooting_Frame0,
        .pOam = sArmCannonOam_Left_DiagonalUp_Shooting_Frame0
    },
    [1] = {
        .pOffset = sArmCannonOffset_Left_DiagonalUp_Running_Frame2,
        .pOam = sArmCannonOam_Left_DiagonalUp_Standing_Frame0
    }
};

const struct ArmCannonAnimationData sArmCannonAnim_Left_Standing[3] = {
    [0] = {
        .pOffset = sArmCannonOffset_Left_Standing_Frame0,
        .pOam = sArmCannonOam_Left_Standing_Frame0
    },
    [1] = {
        .pOffset = sArmCannonOffset_Left_Standing_Frame0,
        .pOam = sArmCannonOam_Left_Standing_Frame0
    },
    [2] = {
        .pOffset = sArmCannonOffset_Left_Standing_Frame0,
        .pOam = sArmCannonOam_Left_Standing_Frame0
    }
};

const struct ArmCannonAnimationData sArmCannonAnim_Left_Shooting[2] = {
    [0] = {
        .pOffset = sArmCannonOffset_Left_Shooting_Frame0,
        .pOam = sArmCannonOam_Left_Shooting_Frame0
    },
    [1] = {
        .pOffset = sArmCannonOffset_Left_Standing_Frame0,
        .pOam = sArmCannonOam_Left_Standing_Frame0
    }
};

const struct ArmCannonAnimationData sArmCannonAnim_Left_DiagonalDown_Standing[3] = {
    [0] = {
        .pOffset = sArmCannonOffset_Left_DiagonalDown_Standing_Frame0,
        .pOam = sArmCannonOam_Left_DiagonalDown_Standing_Frame0
    },
    [1] = {
        .pOffset = sArmCannonOffset_Left_DiagonalDown_Standing_Frame0,
        .pOam = sArmCannonOam_Left_DiagonalDown_Standing_Frame0
    },
    [2] = {
        .pOffset = sArmCannonOffset_Left_DiagonalDown_Standing_Frame0,
        .pOam = sArmCannonOam_Left_DiagonalDown_Standing_Frame0
    }
};

const struct ArmCannonAnimationData sArmCannonAnim_Left_DiagonalDown_Shooting[2] = {
    [0] = {
        .pOffset = sArmCannonOffset_Left_DiagonalDown_Shooting_Frame0,
        .pOam = sArmCannonOam_Left_DiagonalDown_Shooting_Frame0
    },
    [1] = {
        .pOffset = sArmCannonOffset_Left_DiagonalDown_Standing_Frame0,
        .pOam = sArmCannonOam_Left_DiagonalDown_Standing_Frame0
    }
};

const struct ArmCannonAnimationData sArmCannonAnim_Left_Up_Crouching[2] = {
    [0] = {
        .pOffset = sArmCannonOffset_Left_Up_Crouching_Frame0,
        .pOam = sArmCannonOam_Left_Up_Crouching_Frame0
    },
    [1] = {
        .pOffset = sArmCannonOffset_Left_Up_Crouching_Frame1,
        .pOam = sArmCannonOam_Left_Up_Crouching_Frame1
    }
};

const struct ArmCannonAnimationData sArmCannonAnim_Left_DiagonalUp_Crouching[2] = {
    [0] = {
        .pOffset = sArmCannonOffset_Left_DiagonalUp_Crouching_Frame0,
        .pOam = sArmCannonOam_Left_DiagonalUp_Crouching_Frame0
    },
    [1] = {
        .pOffset = sArmCannonOffset_Left_DiagonalUp_Crouching_Frame1,
        .pOam = sArmCannonOam_Left_DiagonalUp_Crouching_Frame1
    }
};

const struct ArmCannonAnimationData sArmCannonAnim_Left_Crouching[2] = {
    [0] = {
        .pOffset = sArmCannonOffset_Left_Crouching_Frame0,
        .pOam = sArmCannonOam_Left_Crouching_Frame0
    },
    [1] = {
        .pOffset = sArmCannonOffset_Left_Crouching_Frame1,
        .pOam = sArmCannonOam_Left_Crouching_Frame1
    }
};

const struct ArmCannonAnimationData sArmCannonAnim_Left_DiagonalDown_Crouching[2] = {
    [0] = {
        .pOffset = sArmCannonOffset_Left_DiagonalDown_Crouching_Frame0,
        .pOam = sArmCannonOam_Left_DiagonalDown_Crouching_Frame0
    },
    [1] = {
        .pOffset = sArmCannonOffset_Left_DiagonalDown_Crouching_Frame1,
        .pOam = sArmCannonOam_Left_DiagonalDown_Crouching_Frame1
    }
};

const struct ArmCannonAnimationData sArmCannonAnim_Right_Running[10] = {
    [0] = {
        .pOffset = sArmCannonOffset_Right_Running_Frame0,
        .pOam = sSamusOam_Empty
    },
    [1] = {
        .pOffset = sArmCannonOffset_Right_Running_Frame1,
        .pOam = sSamusOam_Empty
    },
    [2] = {
        .pOffset = sArmCannonOffset_Right_Running_Frame2,
        .pOam = sSamusOam_Empty
    },
    [3] = {
        .pOffset = sArmCannonOffset_Right_Running_Frame3,
        .pOam = sSamusOam_Empty
    },
    [4] = {
        .pOffset = sArmCannonOffset_Right_Running_Frame4,
        .pOam = sSamusOam_Empty
    },
    [5] = {
        .pOffset = sArmCannonOffset_Right_Running_Frame5,
        .pOam = sSamusOam_Empty
    },
    [6] = {
        .pOffset = sArmCannonOffset_Right_Running_Frame6,
        .pOam = sSamusOam_Empty
    },
    [7] = {
        .pOffset = sArmCannonOffset_Right_Running_Frame7,
        .pOam = sSamusOam_Empty
    },
    [8] = {
        .pOffset = sArmCannonOffset_Right_Running_Frame8,
        .pOam = sSamusOam_Empty
    },
    [9] = {
        .pOffset = sArmCannonOffset_Right_Running_Frame9,
        .pOam = sSamusOam_Empty
    }
};

const struct ArmCannonAnimationData sArmCannonAnim_Right_DiagonalUp_Running[10] = {
    [0] = {
        .pOffset = sArmCannonOffset_Right_DiagonalUp_Running_Frame0,
        .pOam = sArmCannonOam_Right_DiagonalUp_Running_Frame0
    },
    [1] = {
        .pOffset = sArmCannonOffset_Right_DiagonalUp_Running_Frame1,
        .pOam = sArmCannonOam_Right_DiagonalUp_Running_Frame1
    },
    [2] = {
        .pOffset = sArmCannonOffset_Right_DiagonalUp_Running_Frame2,
        .pOam = sArmCannonOam_Right_DiagonalUp_Running_Frame2
    },
    [3] = {
        .pOffset = sArmCannonOffset_Right_DiagonalUp_Running_Frame3,
        .pOam = sArmCannonOam_Right_DiagonalUp_Running_Frame3
    },
    [4] = {
        .pOffset = sArmCannonOffset_Right_DiagonalUp_Running_Frame1,
        .pOam = sArmCannonOam_Right_DiagonalUp_Running_Frame1
    },
    [5] = {
        .pOffset = sArmCannonOffset_Right_DiagonalUp_Running_Frame5,
        .pOam = sArmCannonOam_Right_DiagonalUp_Running_Frame5
    },
    [6] = {
        .pOffset = sArmCannonOffset_Right_DiagonalUp_Running_Frame6,
        .pOam = sArmCannonOam_Right_DiagonalUp_Running_Frame6
    },
    [7] = {
        .pOffset = sArmCannonOffset_Right_DiagonalUp_Running_Frame7,
        .pOam = sArmCannonOam_Right_DiagonalUp_Running_Frame7
    },
    [8] = {
        .pOffset = sArmCannonOffset_Right_DiagonalUp_Running_Frame3,
        .pOam = sArmCannonOam_Right_DiagonalUp_Running_Frame3
    },
    [9] = {
        .pOffset = sArmCannonOffset_Right_DiagonalUp_Running_Frame6,
        .pOam = sArmCannonOam_Right_DiagonalUp_Running_Frame6
    }
};

const struct ArmCannonAnimationData sArmCannonAnim_Right_Forward_Running[10] = {
    [0] = {
        .pOffset = sArmCannonOffset_Right_Forward_Running_Frame0,
        .pOam = sArmCannonOam_Right_Forward_Running_Frame0
    },
    [1] = {
        .pOffset = sArmCannonOffset_Right_Forward_Running_Frame1,
        .pOam = sArmCannonOam_Right_Forward_Running_Frame1
    },
    [2] = {
        .pOffset = sArmCannonOffset_Right_Forward_Running_Frame2,
        .pOam = sArmCannonOam_Right_Forward_Running_Frame2
    },
    [3] = {
        .pOffset = sArmCannonOffset_Right_Forward_Running_Frame3,
        .pOam = sArmCannonOam_Right_Forward_Running_Frame3
    },
    [4] = {
        .pOffset = sArmCannonOffset_Right_Forward_Running_Frame4,
        .pOam = sArmCannonOam_Right_Forward_Running_Frame4
    },
    [5] = {
        .pOffset = sArmCannonOffset_Right_Forward_Running_Frame4,
        .pOam = sArmCannonOam_Right_Forward_Running_Frame4
    },
    [6] = {
        .pOffset = sArmCannonOffset_Right_Forward_Running_Frame6,
        .pOam = sArmCannonOam_Right_Forward_Running_Frame6
    },
    [7] = {
        .pOffset = sArmCannonOffset_Right_Forward_Running_Frame7,
        .pOam = sArmCannonOam_Right_Forward_Running_Frame7
    },
    [8] = {
        .pOffset = sArmCannonOffset_Right_Forward_Running_Frame8,
        .pOam = sArmCannonOam_Right_Forward_Running_Frame8
    },
    [9] = {
        .pOffset = sArmCannonOffset_Right_Forward_Running_Frame6,
        .pOam = sArmCannonOam_Right_Forward_Running_Frame6
    }
};

const struct ArmCannonAnimationData sArmCannonAnim_Right_DiagonalDown_Running[10] = {
    [0] = {
        .pOffset = sArmCannonOffset_Right_DiagonalDown_Running_Frame0,
        .pOam = sArmCannonOam_Right_DiagonalDown_Running_Frame0
    },
    [1] = {
        .pOffset = sArmCannonOffset_Right_DiagonalDown_Running_Frame1,
        .pOam = sArmCannonOam_Right_DiagonalDown_Running_Frame1
    },
    [2] = {
        .pOffset = sArmCannonOffset_Right_DiagonalDown_Running_Frame1,
        .pOam = sArmCannonOam_Right_DiagonalDown_Running_Frame1
    },
    [3] = {
        .pOffset = sArmCannonOffset_Right_DiagonalDown_Running_Frame3,
        .pOam = sArmCannonOam_Right_DiagonalDown_Running_Frame3
    },
    [4] = {
        .pOffset = sArmCannonOffset_Right_DiagonalDown_Running_Frame4,
        .pOam = sArmCannonOam_Right_DiagonalDown_Running_Frame4
    },
    [5] = {
        .pOffset = sArmCannonOffset_Right_DiagonalDown_Running_Frame4,
        .pOam = sArmCannonOam_Right_DiagonalDown_Running_Frame4
    },
    [6] = {
        .pOffset = sArmCannonOffset_Right_DiagonalDown_Running_Frame1,
        .pOam = sArmCannonOam_Right_DiagonalDown_Running_Frame1
    },
    [7] = {
        .pOffset = sArmCannonOffset_Right_DiagonalDown_Running_Frame7,
        .pOam = sArmCannonOam_Right_DiagonalDown_Running_Frame7
    },
    [8] = {
        .pOffset = sArmCannonOffset_Right_DiagonalDown_Running_Frame8,
        .pOam = sArmCannonOam_Right_DiagonalDown_Running_Frame8
    },
    [9] = {
        .pOffset = sArmCannonOffset_Right_DiagonalDown_Running_Frame9,
        .pOam = sArmCannonOam_Right_DiagonalDown_Running_Frame9
    }
};

const struct ArmCannonAnimationData sArmCannonAnim_Right_Up_Standing[3] = {
    [0] = {
        .pOffset = sArmCannonOffset_Right_Up_Standing_Frame0,
        .pOam = sArmCannonOam_Right_Up_Standing_Frame0
    },
    [1] = {
        .pOffset = sArmCannonOffset_Right_Up_Standing_Frame0,
        .pOam = sArmCannonOam_Right_Up_Standing_Frame0
    },
    [2] = {
        .pOffset = sArmCannonOffset_Right_Up_Standing_Frame0,
        .pOam = sArmCannonOam_Right_Up_Standing_Frame0
    }
};

const struct ArmCannonAnimationData sArmCannonAnim_Right_Up_Shooting[2] = {
    [0] = {
        .pOffset = sArmCannonOffset_Right_Up_Shooting_Frame0,
        .pOam = sArmCannonOam_Right_Up_Shooting_Frame0
    },
    [1] = {
        .pOffset = sArmCannonOffset_Right_Up_Standing_Frame0,
        .pOam = sArmCannonOam_Right_Up_Standing_Frame0
    }
};

const struct ArmCannonAnimationData sArmCannonAnim_Right_DiagonalUp_Standing[3] = {
    [0] = {
        .pOffset = sArmCannonOffset_Right_DiagonalUp_Running_Frame2,
        .pOam = sArmCannonOam_Right_DiagonalUp_Running_Frame2
    },
    [1] = {
        .pOffset = sArmCannonOffset_Right_DiagonalUp_Running_Frame2,
        .pOam = sArmCannonOam_Right_DiagonalUp_Running_Frame2
    },
    [2] = {
        .pOffset = sArmCannonOffset_Right_DiagonalUp_Running_Frame2,
        .pOam = sArmCannonOam_Right_DiagonalUp_Running_Frame2
    }
};

const struct ArmCannonAnimationData sArmCannonAnim_Right_DiagonalUp_Shooting[2] = {
    [0] = {
        .pOffset = sArmCannonOffset_Right_DiagonalUp_Shooting_Frame0,
        .pOam = sArmCannonOam_Right_DiagonalUp_Shooting_Frame0
    },
    [1] = {
        .pOffset = sArmCannonOffset_Right_DiagonalUp_Running_Frame2,
        .pOam = sArmCannonOam_Right_DiagonalUp_Running_Frame2
    }
};

const struct ArmCannonAnimationData sArmCannonAnim_Right_Standing[3] = {
    [0] = {
        .pOffset = sArmCannonOffset_Right_Standing_Frame0,
        .pOam = sArmCannonOam_Right_Standing_Frame0
    },
    [1] = {
        .pOffset = sArmCannonOffset_Right_Standing_Frame0,
        .pOam = sArmCannonOam_Right_Standing_Frame0
    },
    [2] = {
        .pOffset = sArmCannonOffset_Right_Standing_Frame0,
        .pOam = sArmCannonOam_Right_Standing_Frame0
    }
};

const struct ArmCannonAnimationData sArmCannonAnim_Right_Shooting[2] = {
    [0] = {
        .pOffset = sArmCannonOffset_Right_Shooting_Frame0,
        .pOam = sArmCannonOam_Right_Shooting_Frame0
    },
    [1] = {
        .pOffset = sArmCannonOffset_Right_Standing_Frame0,
        .pOam = sArmCannonOam_Right_Standing_Frame0
    }
};

const struct ArmCannonAnimationData sArmCannonAnim_Right_DiagonalDown_Standing[3] = {
    [0] = {
        .pOffset = sArmCannonOffset_Right_DiagonalDown_Standing_Frame0,
        .pOam = sArmCannonOam_Right_DiagonalDown_Standing_Frame0
    },
    [1] = {
        .pOffset = sArmCannonOffset_Right_DiagonalDown_Standing_Frame0,
        .pOam = sArmCannonOam_Right_DiagonalDown_Standing_Frame0
    },
    [2] = {
        .pOffset = sArmCannonOffset_Right_DiagonalDown_Standing_Frame0,
        .pOam = sArmCannonOam_Right_DiagonalDown_Standing_Frame0
    }
};

const struct ArmCannonAnimationData sArmCannonAnim_Right_DiagonalDown_Shooting[2] = {
    [0] = {
        .pOffset = sArmCannonOffset_Right_DiagonalDown_Shooting_Frame0,
        .pOam = sArmCannonOam_Right_DiagonalDown_Shooting_Frame0
    },
    [1] = {
        .pOffset = sArmCannonOffset_Right_DiagonalDown_Standing_Frame0,
        .pOam = sArmCannonOam_Right_DiagonalDown_Standing_Frame0
    }
};

const struct ArmCannonAnimationData sArmCannonAnim_Right_Up_Crouching[2] = {
    [0] = {
        .pOffset = sArmCannonOffset_Right_Up_Crouching_Frame0,
        .pOam = sArmCannonOam_Right_Up_Crouching_Frame0
    },
    [1] = {
        .pOffset = sArmCannonOffset_Right_Up_Crouching_Frame1,
        .pOam = sArmCannonOam_Right_Up_Crouching_Frame1
    }
};

const struct ArmCannonAnimationData sArmCannonAnim_Right_DiagonalUp_Crouching[2] = {
    [0] = {
        .pOffset = sArmCannonOffset_Right_DiagonalUp_Crouching_Frame0,
        .pOam = sArmCannonOam_Right_DiagonalUp_Crouching_Frame0
    },
    [1] = {
        .pOffset = sArmCannonOffset_Right_DiagonalUp_Crouching_Frame1,
        .pOam = sArmCannonOam_Right_DiagonalUp_Crouching_Frame1
    }
};

const struct ArmCannonAnimationData sArmCannonAnim_Right_Crouching[2] = {
    [0] = {
        .pOffset = sArmCannonOffset_Right_Crouching_Frame0,
        .pOam = sArmCannonOam_Right_Crouching_Frame0
    },
    [1] = {
        .pOffset = sArmCannonOffset_Right_Crouching_Frame1,
        .pOam = sArmCannonOam_Right_Crouching_Frame1
    }
};

const struct ArmCannonAnimationData sArmCannonAnim_Right_DiagonalDown_Crouching[42] = {
    [0] = {
        .pOffset = sArmCannonOffset_Right_DiagonalDown_Crouching_Frame0,
        .pOam = sArmCannonOam_Right_DiagonalDown_Crouching_Frame0
    },
    [1] = {
        .pOffset = sArmCannonOffset_Right_DiagonalDown_Crouching_Frame1,
        .pOam = sArmCannonOam_Right_DiagonalDown_Crouching_Frame1
    },
    [2] = {
        .pOffset = sArmCannonOffset_Left_Running_Frame0,
        .pOam = sSamusOam_Empty
    },
    [3] = {
        .pOffset = sArmCannonOffset_Left_Running_Frame1,
        .pOam = sSamusOam_Empty
    },
    [4] = {
        .pOffset = sArmCannonOffset_Left_Running_Frame2,
        .pOam = sSamusOam_Empty
    },
    [5] = {
        .pOffset = sArmCannonOffset_Left_Running_Frame3,
        .pOam = sSamusOam_Empty
    },
    [6] = {
        .pOffset = sArmCannonOffset_Left_Running_Frame4,
        .pOam = sSamusOam_Empty
    },
    [7] = {
        .pOffset = sArmCannonOffset_Left_Running_Frame6,
        .pOam = sSamusOam_Empty
    },
    [8] = {
        .pOffset = sArmCannonOffset_Left_Running_Frame6,
        .pOam = sSamusOam_Empty
    },
    [9] = {
        .pOffset = sArmCannonOffset_Left_Running_Frame7,
        .pOam = sSamusOam_Empty
    },
    [10] = {
        .pOffset = sArmCannonOffset_Left_Running_Frame8,
        .pOam = sSamusOam_Empty
    },
    [11] = {
        .pOffset = sArmCannonOffset_Left_Running_Frame9,
        .pOam = sSamusOam_Empty
    },
    [12] = {
        .pOffset = sArmCannonOffset_Right_Running_Frame0,
        .pOam = sSamusOam_Empty
    },
    [13] = {
        .pOffset = sArmCannonOffset_Right_Running_Frame1,
        .pOam = sSamusOam_Empty
    },
    [14] = {
        .pOffset = sArmCannonOffset_Right_Running_Frame2,
        .pOam = sSamusOam_Empty
    },
    [15] = {
        .pOffset = sArmCannonOffset_Right_Running_Frame3,
        .pOam = sSamusOam_Empty
    },
    [16] = {
        .pOffset = sArmCannonOffset_Right_Running_Frame4,
        .pOam = sSamusOam_Empty
    },
    [17] = {
        .pOffset = sArmCannonOffset_Right_Running_Frame5,
        .pOam = sSamusOam_Empty
    },
    [18] = {
        .pOffset = sArmCannonOffset_Right_Running_Frame6,
        .pOam = sSamusOam_Empty
    },
    [19] = {
        .pOffset = sArmCannonOffset_Right_Running_Frame7,
        .pOam = sSamusOam_Empty
    },
    [20] = {
        .pOffset = sArmCannonOffset_Right_Running_Frame8,
        .pOam = sSamusOam_Empty
    },
    [21] = {
        .pOffset = sArmCannonOffset_Right_Running_Frame9,
        .pOam = sSamusOam_Empty
    },
    [22] = {
        .pOffset = sArmCannonOffset_Left_Running_Frame0,
        .pOam = sSamusOam_Empty
    },
    [23] = {
        .pOffset = sArmCannonOffset_Left_Running_Frame1,
        .pOam = sSamusOam_Empty
    },
    [24] = {
        .pOffset = sArmCannonOffset_Left_Running_Frame2,
        .pOam = sSamusOam_Empty
    },
    [25] = {
        .pOffset = sArmCannonOffset_Right_DiagonalDown_Crouching_Frame25,
        .pOam = sSamusOam_Empty
    },
    [26] = {
        .pOffset = sArmCannonOffset_Left_Running_Frame4,
        .pOam = sSamusOam_Empty
    },
    [27] = {
        .pOffset = sArmCannonOffset_Left_Running_Frame6,
        .pOam = sSamusOam_Empty
    },
    [28] = {
        .pOffset = sArmCannonOffset_Left_Running_Frame6,
        .pOam = sSamusOam_Empty
    },
    [29] = {
        .pOffset = sArmCannonOffset_Left_Running_Frame7,
        .pOam = sSamusOam_Empty
    },
    [30] = {
        .pOffset = sArmCannonOffset_Right_DiagonalDown_Crouching_Frame30,
        .pOam = sSamusOam_Empty
    },
    [31] = {
        .pOffset = sArmCannonOffset_Left_Running_Frame9,
        .pOam = sSamusOam_Empty
    },
    [32] = {
        .pOffset = sArmCannonOffset_Right_Running_Frame0,
        .pOam = sSamusOam_Empty
    },
    [33] = {
        .pOffset = sArmCannonOffset_Right_Running_Frame1,
        .pOam = sSamusOam_Empty
    },
    [34] = {
        .pOffset = sArmCannonOffset_Right_Running_Frame2,
        .pOam = sSamusOam_Empty
    },
    [35] = {
        .pOffset = sArmCannonOffset_Right_Running_Frame3,
        .pOam = sSamusOam_Empty
    },
    [36] = {
        .pOffset = sArmCannonOffset_Right_Running_Frame4,
        .pOam = sSamusOam_Empty
    },
    [37] = {
        .pOffset = sArmCannonOffset_Right_Running_Frame5,
        .pOam = sSamusOam_Empty
    },
    [38] = {
        .pOffset = sArmCannonOffset_Right_Running_Frame6,
        .pOam = sSamusOam_Empty
    },
    [39] = {
        .pOffset = sArmCannonOffset_Right_Running_Frame7,
        .pOam = sSamusOam_Empty
    },
    [40] = {
        .pOffset = sArmCannonOffset_Right_Running_Frame8,
        .pOam = sSamusOam_Empty
    },
    [41] = {
        .pOffset = sArmCannonOffset_Right_Running_Frame9,
        .pOam = sSamusOam_Empty
    }
};

const struct ArmCannonAnimationData sArmCannonAnim_Left_Skidding[2] = {
    [0] = {
        .pOffset = sArmCannonOffset_Left_Skidding_Frame0,
        .pOam = sSamusOam_Empty
    },
    [1] = {
        .pOffset = sArmCannonOffset_Left_Skidding_Frame0,
        .pOam = sSamusOam_Empty
    }
};

const struct ArmCannonAnimationData sArmCannonAnim_Right_Skidding[2] = {
    [0] = {
        .pOffset = sArmCannonOffset_Right_Skidding_Frame0,
        .pOam = sSamusOam_Empty
    },
    [1] = {
        .pOffset = sArmCannonOffset_Right_Skidding_Frame0,
        .pOam = sSamusOam_Empty
    }
};

const struct ArmCannonAnimationData sArmCannonAnim_Left_HitByOmegaMetroid[8] = {
    [0] = {
        .pOffset = sArmCannonOffset_Left_HitByOmegaMetroid_Frame0,
        .pOam = sSamusOam_Empty
    },
    [1] = {
        .pOffset = sArmCannonOffset_Left_HitByOmegaMetroid_Frame1,
        .pOam = sSamusOam_Empty
    },
    [2] = {
        .pOffset = sArmCannonOffset_Left_HitByOmegaMetroid_Frame2,
        .pOam = sSamusOam_Empty
    },
    [3] = {
        .pOffset = sArmCannonOffset_Left_HitByOmegaMetroid_Frame1,
        .pOam = sSamusOam_Empty
    },
    [4] = {
        .pOffset = sArmCannonOffset_Left_HitByOmegaMetroid_Frame0,
        .pOam = sSamusOam_Empty
    },
    [5] = {
        .pOffset = sArmCannonOffset_Left_HitByOmegaMetroid_Frame1,
        .pOam = sSamusOam_Empty
    },
    [6] = {
        .pOffset = sArmCannonOffset_Left_HitByOmegaMetroid_Frame2,
        .pOam = sSamusOam_Empty
    },
    [7] = {
        .pOffset = sArmCannonOffset_Left_HitByOmegaMetroid_Frame1,
        .pOam = sSamusOam_Empty
    }
};

const struct ArmCannonAnimationData sArmCannonAnim_Right_HitByOmegaMetroid[8] = {
    [0] = {
        .pOffset = sArmCannonOffset_Right_HitByOmegaMetroid_Frame0,
        .pOam = sSamusOam_Empty
    },
    [1] = {
        .pOffset = sArmCannonOffset_Right_HitByOmegaMetroid_Frame1,
        .pOam = sSamusOam_Empty
    },
    [2] = {
        .pOffset = sArmCannonOffset_Right_HitByOmegaMetroid_Frame2,
        .pOam = sSamusOam_Empty
    },
    [3] = {
        .pOffset = sArmCannonOffset_Right_HitByOmegaMetroid_Frame1,
        .pOam = sSamusOam_Empty
    },
    [4] = {
        .pOffset = sArmCannonOffset_Right_HitByOmegaMetroid_Frame0,
        .pOam = sSamusOam_Empty
    },
    [5] = {
        .pOffset = sArmCannonOffset_Right_HitByOmegaMetroid_Frame1,
        .pOam = sSamusOam_Empty
    },
    [6] = {
        .pOffset = sArmCannonOffset_Right_HitByOmegaMetroid_Frame2,
        .pOam = sSamusOam_Empty
    },
    [7] = {
        .pOffset = sArmCannonOffset_Right_HitByOmegaMetroid_Frame1,
        .pOam = sSamusOam_Empty
    }
};

static const u16 sArmCannonOam_28a99c[] = {
    3 | ARM_CANNON_OAM_ORDER_BEHIND,
    OAM_ENTRY(-21, -49, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(-5, -49, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(-13, -33, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_Left_Up_MidAir_Frame0[] = {
    3 | ARM_CANNON_OAM_ORDER_BEHIND,
    OAM_ENTRY(-21, -50, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(-5, -50, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(-13, -34, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_Left_Up_MidAir_Frame1[] = {
    3 | ARM_CANNON_OAM_ORDER_BEHIND,
    OAM_ENTRY(-21, -46, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(-5, -46, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(-13, -30, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_Left_Up_MidAir_Frame2[] = {
    3 | ARM_CANNON_OAM_ORDER_BEHIND,
    OAM_ENTRY(-21, -42, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(-5, -42, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(-13, -26, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_Left_Up_MidAir_Frame3[] = {
    3 | ARM_CANNON_OAM_ORDER_BEHIND,
    OAM_ENTRY(-21, -45, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(-5, -45, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(-13, -29, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_Left_Up_MidAir_Frame4[] = {
    3 | ARM_CANNON_OAM_ORDER_BEHIND,
    OAM_ENTRY(-21, -48, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(-5, -48, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(-13, -32, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_Left_Up_Landing_Frame0[] = {
    3 | ARM_CANNON_OAM_ORDER_BEHIND,
    OAM_ENTRY(-21, -41, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(-5, -41, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(-13, -25, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_Left_DiagonalUp_MidAir_Frame1[] = {
    3 | ARM_CANNON_OAM_ORDER_BEHIND,
    OAM_ENTRY(-34, -38, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(-18, -46, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(-18, -30, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_Left_DiagonalUp_MidAir_Frame0[] = {
    3 | ARM_CANNON_OAM_ORDER_BEHIND,
    OAM_ENTRY(-35, -40, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(-19, -48, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(-19, -32, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_28aa50[] = {
    3 | ARM_CANNON_OAM_ORDER_BEHIND,
    OAM_ENTRY(-34, -38, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(-18, -46, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(-18, -30, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_Left_DiagonalUp_MidAir_Frame2[] = {
    3 | ARM_CANNON_OAM_ORDER_BEHIND,
    OAM_ENTRY(-33, -32, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(-17, -40, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(-17, -24, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_Left_DiagonalUp_MidAir_Frame3[] = {
    3 | ARM_CANNON_OAM_ORDER_BEHIND,
    OAM_ENTRY(-34, -36, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(-18, -44, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(-18, -28, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_Left_DiagonalUp_MidAir_Frame4[] = {
    3 | ARM_CANNON_OAM_ORDER_BEHIND,
    OAM_ENTRY(-34, -39, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(-18, -47, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(-18, -31, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_Left_DiagonalUp_Landing_Frame0[] = {
    3 | ARM_CANNON_OAM_ORDER_BEHIND,
    OAM_ENTRY(-33, -30, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(-17, -38, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(-17, -22, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_Left_DiagonalUp_Landing_Frame1[] = {
    3 | ARM_CANNON_OAM_ORDER_BEHIND,
    OAM_ENTRY(-34, -34, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(-18, -42, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(-18, -26, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_28aac8[] = {
    3 | ARM_CANNON_OAM_ORDER_BEHIND,
    OAM_ENTRY(-19, -38, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(-19, -22, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(-3, -30, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_Left_Forward_MidAir_Frame0[] = {
    3 | ARM_CANNON_OAM_ORDER_BEHIND,
    OAM_ENTRY(-20, -40, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(-20, -24, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(-4, -32, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_Left_Forward_MidAir_Frame1[] = {
    3 | ARM_CANNON_OAM_ORDER_BEHIND,
    OAM_ENTRY(-19, -39, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(-19, -23, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(-3, -31, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_Left_Forward_MidAir_Frame2[] = {
    3 | ARM_CANNON_OAM_ORDER_BEHIND,
    OAM_ENTRY(-18, -34, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(-18, -18, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(-2, -26, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_Left_Forward_MidAir_Frame3[] = {
    3 | ARM_CANNON_OAM_ORDER_BEHIND,
    OAM_ENTRY(-19, -37, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(-19, -21, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(-3, -29, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_Left_Forward_MidAir_Frame4[] = {
    3 | ARM_CANNON_OAM_ORDER_BEHIND,
    OAM_ENTRY(-19, -40, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(-19, -24, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(-3, -32, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_Left_Forward_MidAir_Frame5[] = {
    3 | ARM_CANNON_OAM_ORDER_BEHIND,
    OAM_ENTRY(-20, -39, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(-20, -23, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(-4, -31, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_Left_Forward_Landing_Frame0[] = {
    3 | ARM_CANNON_OAM_ORDER_BEHIND,
    OAM_ENTRY(-18, -32, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(-18, -16, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(-2, -24, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_Left_Forward_Landing_Frame1[] = {
    3 | ARM_CANNON_OAM_ORDER_BEHIND,
    OAM_ENTRY(-19, -35, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(-19, -19, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(-3, -27, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_28ab7c[] = {
    3 | ARM_CANNON_OAM_ORDER_BEHIND,
    OAM_ENTRY(-33, -29, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(-17, -37, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(-17, -21, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_Left_DiagonalDown_MidAir_Frame0[] = {
    3 | ARM_CANNON_OAM_ORDER_BEHIND,
    OAM_ENTRY(-34, -31, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(-18, -39, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(-18, -23, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_Left_DiagonalDown_MidAir_Frame1[] = {
    3 | ARM_CANNON_OAM_ORDER_BEHIND,
    OAM_ENTRY(-34, -31, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(-18, -39, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(-18, -23, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_Left_DiagonalDown_MidAir_Frame2[] = {
    3 | ARM_CANNON_OAM_ORDER_BEHIND,
    OAM_ENTRY(-33, -26, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(-17, -34, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(-17, -18, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_Left_DiagonalDown_MidAir_Frame3[] = {
    3 | ARM_CANNON_OAM_ORDER_BEHIND,
    OAM_ENTRY(-34, -29, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(-18, -37, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(-18, -21, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_Left_DiagonalDown_MidAir_Frame4[] = {
    3 | ARM_CANNON_OAM_ORDER_BEHIND,
    OAM_ENTRY(-34, -32, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(-18, -40, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(-18, -24, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_Left_DiagonalDown_MidAir_Frame5[] = {
    3 | ARM_CANNON_OAM_ORDER_BEHIND,
    OAM_ENTRY(-34, -30, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(-18, -38, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(-18, -22, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_Left_DiagonalDown_Landing_Frame0[] = {
    3 | ARM_CANNON_OAM_ORDER_BEHIND,
    OAM_ENTRY(-33, -24, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(-17, -32, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(-17, -16, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_Left_DiagonalDown_Landing_Frame1[] = {
    3 | ARM_CANNON_OAM_ORDER_BEHIND,
    OAM_ENTRY(-34, -27, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(-18, -35, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(-18, -19, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_28ac30[] = {
    3 | ARM_CANNON_OAM_ORDER_BEHIND,
    OAM_ENTRY(-21, -45, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(-5, -45, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(-13, -29, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_Left_DiagonalDown_Landing_Frame3[] = {
    3 | ARM_CANNON_OAM_ORDER_BEHIND,
    OAM_ENTRY(-36, -38, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(-20, -46, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(-20, -30, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_Left_DiagonalDown_Landing_Frame4[] = {
    3 | ARM_CANNON_OAM_ORDER_BEHIND,
    OAM_ENTRY(-17, -36, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(-17, -20, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(-1, -28, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_28ac6c[] = {
    3 | ARM_CANNON_OAM_ORDER_BEHIND,
    OAM_ENTRY(-34, -27, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(-18, -35, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(-18, -19, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_Left_DiagonalDown_Landing_Frame6[] = {
    3 | ARM_CANNON_OAM_ORDER_BEHIND,
    OAM_ENTRY(-21, -16, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(-5, -16, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(-13, -32, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_28ac94[] = {
    3 | ARM_CANNON_OAM_ORDER_BEHIND,
    OAM_ENTRY(-21, -16, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(-5, -16, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(-13, -32, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_28aca8[] = {
    2 | ARM_CANNON_OAM_ORDER_IN_FRONT,
    OAM_ENTRY(-11, -49, OAM_DIMS_32x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(-3, -33, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_Right_Up_MidAir_Frame0[] = {
    2 | ARM_CANNON_OAM_ORDER_IN_FRONT,
    OAM_ENTRY(-11, -50, OAM_DIMS_32x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(-3, -34, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_Right_Up_MidAir_Frame1[] = {
    2 | ARM_CANNON_OAM_ORDER_IN_FRONT,
    OAM_ENTRY(-11, -46, OAM_DIMS_32x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(-3, -30, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_Right_Up_MidAir_Frame2[] = {
    2 | ARM_CANNON_OAM_ORDER_IN_FRONT,
    OAM_ENTRY(-11, -41, OAM_DIMS_32x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(-3, -25, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_Right_Up_MidAir_Frame3[] = {
    2 | ARM_CANNON_OAM_ORDER_IN_FRONT,
    OAM_ENTRY(-11, -45, OAM_DIMS_32x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(-3, -29, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_Right_Up_MidAir_Frame4[] = {
    2 | ARM_CANNON_OAM_ORDER_IN_FRONT,
    OAM_ENTRY(-11, -48, OAM_DIMS_32x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(-3, -32, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_28acfc[] = {
    2 | ARM_CANNON_OAM_ORDER_IN_FRONT,
    OAM_ENTRY(-11, -48, OAM_DIMS_32x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(-3, -32, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_Right_Up_Landing_Frame0[] = {
    2 | ARM_CANNON_OAM_ORDER_IN_FRONT,
    OAM_ENTRY(-10, -41, OAM_DIMS_32x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(-2, -25, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_28ad18[] = {
    2 | ARM_CANNON_OAM_ORDER_IN_FRONT,
    OAM_ENTRY(-11, -45, OAM_DIMS_32x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(-3, -29, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_Right_DiagonalUp_MidAir_Frame1[] = {
    3 | ARM_CANNON_OAM_ORDER_IN_FRONT,
    OAM_ENTRY(2, -46, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(-14, -38, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(2, -30, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_Right_DiagonalUp_MidAir_Frame0[] = {
    3 | ARM_CANNON_OAM_ORDER_IN_FRONT,
    OAM_ENTRY(3, -48, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(-13, -40, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(3, -32, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_28ad4e[] = {
    3 | ARM_CANNON_OAM_ORDER_IN_FRONT,
    OAM_ENTRY(2, -46, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(-14, -38, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(2, -30, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_Right_DiagonalUp_MidAir_Frame2[] = {
    3 | ARM_CANNON_OAM_ORDER_IN_FRONT,
    OAM_ENTRY(1, -40, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(-15, -32, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(1, -24, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_Right_DiagonalUp_MidAir_Frame3[] = {
    3 | ARM_CANNON_OAM_ORDER_IN_FRONT,
    OAM_ENTRY(2, -44, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(-14, -36, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(2, -28, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_Right_DiagonalUp_MidAir_Frame4[] = {
    3 | ARM_CANNON_OAM_ORDER_IN_FRONT,
    OAM_ENTRY(2, -47, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(-14, -39, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(2, -31, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_Right_DiagonalUp_MidAir_Frame5[] = {
    3 | ARM_CANNON_OAM_ORDER_IN_FRONT,
    OAM_ENTRY(2, -49, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(-14, -41, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(2, -33, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_Right_DiagonalUp_Landing_Frame0[] = {
    3 | ARM_CANNON_OAM_ORDER_IN_FRONT,
    OAM_ENTRY(1, -38, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(-15, -30, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(1, -22, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_Right_DiagonalUp_Landing_Frame1[] = {
    3 | ARM_CANNON_OAM_ORDER_IN_FRONT,
    OAM_ENTRY(2, -42, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(-14, -34, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(2, -26, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_28adda[] = {
    3 | ARM_CANNON_OAM_ORDER_IN_FRONT,
    OAM_ENTRY(-13, -30, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(3, -38, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(3, -22, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_Right_Forward_MidAir_Frame0[] = {
    3 | ARM_CANNON_OAM_ORDER_IN_FRONT,
    OAM_ENTRY(-12, -32, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(4, -40, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(4, -24, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_Right_Forward_MidAir_Frame1[] = {
    3 | ARM_CANNON_OAM_ORDER_IN_FRONT,
    OAM_ENTRY(-13, -31, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(3, -39, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(3, -23, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_Right_Forward_MidAir_Frame2[] = {
    3 | ARM_CANNON_OAM_ORDER_IN_FRONT,
    OAM_ENTRY(-14, -26, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(2, -34, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(2, -18, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_Right_Forward_MidAir_Frame3[] = {
    3 | ARM_CANNON_OAM_ORDER_IN_FRONT,
    OAM_ENTRY(-13, -29, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(3, -37, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(3, -21, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_Right_Forward_MidAir_Frame4[] = {
    3 | ARM_CANNON_OAM_ORDER_IN_FRONT,
    OAM_ENTRY(-13, -32, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(3, -40, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(3, -24, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_Right_Forward_MidAir_Frame5[] = {
    3 | ARM_CANNON_OAM_ORDER_IN_FRONT,
    OAM_ENTRY(-12, -31, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(4, -39, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(4, -23, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_Right_Forward_Landing_Frame0[] = {
    3 | ARM_CANNON_OAM_ORDER_IN_FRONT,
    OAM_ENTRY(-14, -24, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(2, -32, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(2, -16, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_Right_Forward_Landing_Frame1[] = {
    3 | ARM_CANNON_OAM_ORDER_IN_FRONT,
    OAM_ENTRY(-13, -27, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(3, -35, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(3, -19, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_28ae8e[] = {
    3 | ARM_CANNON_OAM_ORDER_IN_FRONT,
    OAM_ENTRY(1, -37, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(17, -29, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(1, -21, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_Right_DiagonalDown_MidAir_Frame0[] = {
    3 | ARM_CANNON_OAM_ORDER_IN_FRONT,
    OAM_ENTRY(2, -39, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(18, -31, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(2, -23, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_28aeb6[] = {
    3 | ARM_CANNON_OAM_ORDER_IN_FRONT,
    OAM_ENTRY(2, -39, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(18, -31, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(2, -23, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_Right_DiagonalDown_MidAir_Frame2[] = {
    3 | ARM_CANNON_OAM_ORDER_IN_FRONT,
    OAM_ENTRY(1, -34, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(17, -26, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(1, -18, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_Right_DiagonalDown_MidAir_Frame3[] = {
    3 | ARM_CANNON_OAM_ORDER_IN_FRONT,
    OAM_ENTRY(2, -37, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(18, -29, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(2, -21, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_Right_DiagonalDown_MidAir_Frame4[] = {
    3 | ARM_CANNON_OAM_ORDER_IN_FRONT,
    OAM_ENTRY(2, -40, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(18, -32, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(2, -24, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_Right_DiagonalDown_MidAir_Frame5[] = {
    3 | ARM_CANNON_OAM_ORDER_IN_FRONT,
    OAM_ENTRY(2, -38, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(18, -30, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(2, -22, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_Right_DiagonalDown_Landing_Frame0[] = {
    3 | ARM_CANNON_OAM_ORDER_IN_FRONT,
    OAM_ENTRY(1, -32, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(17, -24, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(1, -16, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_Right_DiagonalDown_Landing_Frame1[] = {
    3 | ARM_CANNON_OAM_ORDER_IN_FRONT,
    OAM_ENTRY(2, -35, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(18, -27, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(2, -19, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_28af42[] = {
    2 | ARM_CANNON_OAM_ORDER_IN_FRONT,
    OAM_ENTRY(-11, -45, OAM_DIMS_32x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(-3, -29, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_Right_DiagonalDown_Landing_Frame3[] = {
    3 | ARM_CANNON_OAM_ORDER_IN_FRONT,
    OAM_ENTRY(4, -46, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(-12, -38, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(4, -30, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_Right_DiagonalDown_Landing_Frame4[] = {
    3 | ARM_CANNON_OAM_ORDER_IN_FRONT,
    OAM_ENTRY(-15, -28, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(1, -36, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(1, -20, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_28af78[] = {
    3 | ARM_CANNON_OAM_ORDER_IN_FRONT,
    OAM_ENTRY(2, -35, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(18, -27, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(2, -19, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_Right_DiagonalDown_Landing_Frame6[] = {
    2 | ARM_CANNON_OAM_ORDER_IN_FRONT,
    OAM_ENTRY(-11, -16, OAM_DIMS_32x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(-3, -32, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_28af9a[] = {
    2 | ARM_CANNON_OAM_ORDER_IN_FRONT,
    OAM_ENTRY(-11, -16, OAM_DIMS_32x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(-3, -32, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const s16 sArmCannonOffset_Left_DelayBeforeShinesparking_Frame0[2] = {
    C_S8_2_S16(-25),
    C_S9_2_S16(-10)
};

static const s16 sArmCannonOffset_Left_MidAir_Frame0[2] = {
    C_S8_2_S16(-24),
    C_S9_2_S16(-14)
};

static const s16 sArmCannonOffset_Left_MidAir_Frame1[2] = {
    C_S8_2_S16(-21),
    C_S9_2_S16(-13)
};

static const s16 sArmCannonOffset_Left_MidAir_Frame2[2] = {
    C_S8_2_S16(-15),
    C_S9_2_S16(-12)
};

static const s16 sArmCannonOffset_Left_MidAir_Frame4[2] = {
    C_S8_2_S16(-17),
    C_S9_2_S16(-12)
};

static const s16 sArmCannonOffset_Left_MidAir_Frame5[2] = {
    C_S8_2_S16(-16),
    C_S9_2_S16(-12)
};

static const s16 sArmCannonOffset_Left_Landing_Frame0[2] = {
    C_S8_2_S16(-8),
    C_S9_2_S16(-11)
};

static const s16 sArmCannonOffset_Left_Landing_Frame1[2] = {
    C_S8_2_S16(-10),
    C_S9_2_S16(-11)
};

static const s16 sArmCannonOffset_28afc8[2] = {
    C_S8_2_S16(-47),
    C_S9_2_S16(-5)
};

static const s16 sArmCannonOffset_Left_Up_MidAir_Frame0[2] = {
    C_S8_2_S16(-42),
    C_S9_2_S16(-5)
};

static const s16 sArmCannonOffset_28afd0[2] = {
    C_S8_2_S16(-44),
    C_S9_2_S16(-5)
};

static const s16 sArmCannonOffset_Left_Up_MidAir_Frame2[2] = {
    C_S8_2_S16(-40),
    C_S9_2_S16(-5)
};

static const s16 sArmCannonOffset_Left_Up_Landing_Frame1[2] = {
    C_S8_2_S16(-43),
    C_S9_2_S16(-5)
};

static const s16 sArmCannonOffset_28afdc[2] = {
    C_S8_2_S16(-46),
    C_S9_2_S16(-5)
};

static const s16 sArmCannonOffset_Left_Up_Landing_Frame0[2] = {
    C_S8_2_S16(-39),
    C_S9_2_S16(-5)
};

static const s16 sArmCannonOffset_Left_DiagonalUp_MidAir_Frame1[2] = {
    C_S8_2_S16(-36),
    C_S9_2_S16(-16)
};

static const s16 sArmCannonOffset_Left_DiagonalUp_MidAir_Frame0[2] = {
    C_S8_2_S16(-38),
    C_S9_2_S16(-17)
};

static const s16 sArmCannonOffset_Left_DiagonalUp_MidAir_Frame2[2] = {
    C_S8_2_S16(-30),
    C_S9_2_S16(-15)
};

static const s16 sArmCannonOffset_Left_DiagonalUp_MidAir_Frame3[2] = {
    C_S8_2_S16(-34),
    C_S9_2_S16(-16)
};

static const s16 sArmCannonOffset_Left_DiagonalUp_MidAir_Frame4[2] = {
    C_S8_2_S16(-37),
    C_S9_2_S16(-16)
};

static const s16 sArmCannonOffset_Left_DiagonalUp_Landing_Frame0[2] = {
    C_S8_2_S16(-28),
    C_S9_2_S16(-15)
};

static const s16 sArmCannonOffset_Left_DiagonalUp_Landing_Frame1[2] = {
    C_S8_2_S16(-32),
    C_S9_2_S16(-16)
};

static const s16 sArmCannonOffset_28b000[2] = {
    C_S8_2_S16(-22),
    C_S9_2_S16(-17)
};

static const s16 sArmCannonOffset_Left_Forward_MidAir_Frame0[2] = {
    C_S8_2_S16(-24),
    C_S9_2_S16(-18)
};

static const s16 sArmCannonOffset_Left_Forward_MidAir_Frame1[2] = {
    C_S8_2_S16(-23),
    C_S9_2_S16(-17)
};

static const s16 sArmCannonOffset_Left_Forward_MidAir_Frame2[2] = {
    C_S8_2_S16(-18),
    C_S9_2_S16(-16)
};

static const s16 sArmCannonOffset_Left_Forward_MidAir_Frame3[2] = {
    C_S8_2_S16(-21),
    C_S9_2_S16(-17)
};

static const s16 sArmCannonOffset_Left_Forward_MidAir_Frame4[2] = {
    C_S8_2_S16(-24),
    C_S9_2_S16(-17)
};

static const s16 sArmCannonOffset_Left_Forward_MidAir_Frame5[2] = {
    C_S8_2_S16(-23),
    C_S9_2_S16(-18)
};

static const s16 sArmCannonOffset_Left_Forward_Landing_Frame0[2] = {
    C_S8_2_S16(-16),
    C_S9_2_S16(-16)
};

static const s16 sArmCannonOffset_Left_Forward_Landing_Frame1[2] = {
    C_S8_2_S16(-19),
    C_S9_2_S16(-17)
};

static const s16 sArmCannonOffset_28b024[2] = {
    C_S8_2_S16(-15),
    C_S9_2_S16(-15)
};

static const s16 sArmCannonOffset_Left_DiagonalDown_MidAir_Frame0[2] = {
    C_S8_2_S16(-17),
    C_S9_2_S16(-16)
};

static const s16 sArmCannonOffset_Left_DiagonalDown_MidAir_Frame2[2] = {
    C_S8_2_S16(-12),
    C_S9_2_S16(-15)
};

static const s16 sArmCannonOffset_Left_DiagonalDown_MidAir_Frame3[2] = {
    C_S8_2_S16(-15),
    C_S9_2_S16(-16)
};

static const s16 sArmCannonOffset_Left_DiagonalDown_Landing_Frame0[2] = {
    C_S8_2_S16(-10),
    C_S9_2_S16(-15)
};

static const s16 sArmCannonOffset_Left_DiagonalDown_Landing_Frame1[2] = {
    C_S8_2_S16(-13),
    C_S9_2_S16(-16)
};

static const s16 sArmCannonOffset_Left_DiagonalDown_Landing_Frame3[2] = {
    C_S8_2_S16(-36),
    C_S9_2_S16(-18)
};

static const s16 sArmCannonOffset_Left_DiagonalDown_Landing_Frame4[2] = {
    C_S8_2_S16(-20),
    C_S9_2_S16(-15)
};

static const s16 sArmCannonOffset_Left_DiagonalDown_Landing_Frame6[2] = {
    C_S8_2_S16(-2),
    C_S9_2_S16(-5)
};

static const s16 sArmCannonOffset_Right_DelayBeforeShinesparking_Frame0[2] = {
    C_S8_2_S16(-24),
    C_S9_2_S16(10)
};

static const s16 sArmCannonOffset_Right_MidAir_Frame0[2] = {
    C_S8_2_S16(-24),
    C_S9_2_S16(13)
};

static const s16 sArmCannonOffset_Right_MidAir_Frame1[2] = {
    C_S8_2_S16(-20),
    C_S9_2_S16(11)
};

static const s16 sArmCannonOffset_Right_MidAir_Frame2[2] = {
    C_S8_2_S16(-13),
    C_S9_2_S16(11)
};

static const s16 sArmCannonOffset_Right_MidAir_Frame3[2] = {
    C_S8_2_S16(-15),
    C_S9_2_S16(11)
};

static const s16 sArmCannonOffset_Right_MidAir_Frame4[2] = {
    C_S8_2_S16(-18),
    C_S9_2_S16(12)
};

static const s16 sArmCannonOffset_Right_MidAir_Frame5[2] = {
    C_S8_2_S16(-17),
    C_S9_2_S16(12)
};

static const s16 sArmCannonOffset_Right_Landing_Frame0[2] = {
    C_S8_2_S16(-8),
    C_S9_2_S16(11)
};

static const s16 sArmCannonOffset_28b068[2] = {
    C_S8_2_S16(-47),
    C_S9_2_S16(5)
};

static const s16 sArmCannonOffset_Right_Up_MidAir_Frame0[2] = {
    C_S8_2_S16(-42),
    C_S9_2_S16(5)
};

static const s16 sArmCannonOffset_28b070[2] = {
    C_S8_2_S16(-44),
    C_S9_2_S16(5)
};

static const s16 sArmCannonOffset_Right_Up_MidAir_Frame2[2] = {
    C_S8_2_S16(-39),
    C_S9_2_S16(5)
};

static const s16 sArmCannonOffset_Right_Up_Landing_Frame1[2] = {
    C_S8_2_S16(-43),
    C_S9_2_S16(5)
};

static const s16 sArmCannonOffset_28b07c[2] = {
    C_S8_2_S16(-46),
    C_S9_2_S16(5)
};

static const s16 sArmCannonOffset_Right_Up_Landing_Frame0[2] = {
    C_S8_2_S16(-39),
    C_S9_2_S16(6)
};

static const s16 sArmCannonOffset_Right_DiagonalUp_MidAir_Frame1[2] = {
    C_S8_2_S16(-36),
    C_S9_2_S16(16)
};

static const s16 sArmCannonOffset_Right_DiagonalUp_MidAir_Frame0[2] = {
    C_S8_2_S16(-38),
    C_S9_2_S16(17)
};

static const s16 sArmCannonOffset_Right_DiagonalUp_MidAir_Frame2[2] = {
    C_S8_2_S16(-30),
    C_S9_2_S16(15)
};

static const s16 sArmCannonOffset_Right_DiagonalUp_MidAir_Frame3[2] = {
    C_S8_2_S16(-34),
    C_S9_2_S16(16)
};

static const s16 sArmCannonOffset_Right_DiagonalUp_MidAir_Frame4[2] = {
    C_S8_2_S16(-37),
    C_S9_2_S16(16)
};

static const s16 sArmCannonOffset_Right_DiagonalUp_MidAir_Frame5[2] = {
    C_S8_2_S16(-39),
    C_S9_2_S16(16)
};

static const s16 sArmCannonOffset_Right_DiagonalUp_Landing_Frame0[2] = {
    C_S8_2_S16(-28),
    C_S9_2_S16(15)
};

static const s16 sArmCannonOffset_Right_DiagonalUp_Landing_Frame1[2] = {
    C_S8_2_S16(-32),
    C_S9_2_S16(16)
};

static const s16 sArmCannonOffset_28b0a4[2] = {
    C_S8_2_S16(-22),
    C_S9_2_S16(17)
};

static const s16 sArmCannonOffset_Right_Forward_MidAir_Frame0[2] = {
    C_S8_2_S16(-24),
    C_S9_2_S16(18)
};

static const s16 sArmCannonOffset_Right_Forward_MidAir_Frame1[2] = {
    C_S8_2_S16(-23),
    C_S9_2_S16(17)
};

static const s16 sArmCannonOffset_Right_Forward_MidAir_Frame2[2] = {
    C_S8_2_S16(-18),
    C_S9_2_S16(16)
};

static const s16 sArmCannonOffset_Right_Forward_MidAir_Frame3[2] = {
    C_S8_2_S16(-21),
    C_S9_2_S16(17)
};

static const s16 sArmCannonOffset_Right_Forward_MidAir_Frame4[2] = {
    C_S8_2_S16(-24),
    C_S9_2_S16(17)
};

static const s16 sArmCannonOffset_Right_Forward_MidAir_Frame5[2] = {
    C_S8_2_S16(-23),
    C_S9_2_S16(18)
};

static const s16 sArmCannonOffset_Right_Forward_Landing_Frame0[2] = {
    C_S8_2_S16(-16),
    C_S9_2_S16(16)
};

static const s16 sArmCannonOffset_Right_Forward_Landing_Frame1[2] = {
    C_S8_2_S16(-19),
    C_S9_2_S16(17)
};

static const s16 sArmCannonOffset_28b0c8[2] = {
    C_S8_2_S16(-15),
    C_S9_2_S16(15)
};

static const s16 sArmCannonOffset_Right_DiagonalDown_MidAir_Frame0[2] = {
    C_S8_2_S16(-17),
    C_S9_2_S16(16)
};

static const s16 sArmCannonOffset_Right_DiagonalDown_MidAir_Frame2[2] = {
    C_S8_2_S16(-12),
    C_S9_2_S16(15)
};

static const s16 sArmCannonOffset_Right_DiagonalDown_MidAir_Frame3[2] = {
    C_S8_2_S16(-15),
    C_S9_2_S16(16)
};

static const s16 sArmCannonOffset_Right_DiagonalDown_Landing_Frame0[2] = {
    C_S8_2_S16(-10),
    C_S9_2_S16(15)
};

static const s16 sArmCannonOffset_Right_DiagonalDown_Landing_Frame1[2] = {
    C_S8_2_S16(-13),
    C_S9_2_S16(16)
};

static const s16 sArmCannonOffset_Right_DiagonalDown_Landing_Frame3[2] = {
    C_S8_2_S16(-36),
    C_S9_2_S16(18)
};

static const s16 sArmCannonOffset_Right_DiagonalDown_Landing_Frame4[2] = {
    C_S8_2_S16(-20),
    C_S9_2_S16(15)
};

static const s16 sArmCannonOffset_Right_DiagonalDown_Landing_Frame6[2] = {
    C_S8_2_S16(-2),
    C_S9_2_S16(5)
};

static const s16 sArmCannonOffset_Left_Spinning_Frame0[2] = {
    C_S8_2_S16(-3),
    C_S9_2_S16(0)
};

static const s16 sArmCannonOffset_Left_Spinning_Frame1[2] = {
    C_S8_2_S16(-7),
    C_S9_2_S16(7)
};

static const s16 sArmCannonOffset_Left_Spinning_Frame2[2] = {
    C_S8_2_S16(-12),
    C_S9_2_S16(10)
};

static const s16 sArmCannonOffset_Left_Spinning_Frame3[2] = {
    C_S8_2_S16(-19),
    C_S9_2_S16(6)
};

static const s16 sArmCannonOffset_Left_Spinning_Frame4[2] = {
    C_S8_2_S16(-23),
    C_S9_2_S16(0)
};

static const s16 sArmCannonOffset_Left_Spinning_Frame5[2] = {
    C_S8_2_S16(-20),
    C_S9_2_S16(-7)
};

static const s16 sArmCannonOffset_Left_Spinning_Frame6[2] = {
    C_S8_2_S16(-14),
    C_S9_2_S16(-10)
};

static const s16 sArmCannonOffset_Left_Spinning_Frame7[2] = {
    C_S8_2_S16(-8),
    C_S9_2_S16(-6)
};

static const s16 sArmCannonOffset_Right_Spinning_Frame0[2] = {
    C_S8_2_S16(-3),
    C_S9_2_S16(3)
};

static const s16 sArmCannonOffset_Right_Spinning_Frame1[2] = {
    C_S8_2_S16(-6),
    C_S9_2_S16(-8)
};

static const s16 sArmCannonOffset_Right_Spinning_Frame3[2] = {
    C_S8_2_S16(-21),
    C_S9_2_S16(-8)
};

static const s16 sArmCannonOffset_Right_Spinning_Frame4[2] = {
    C_S8_2_S16(-23),
    C_S9_2_S16(-3)
};

static const s16 sArmCannonOffset_Right_Spinning_Frame5[2] = {
    C_S8_2_S16(-21),
    C_S9_2_S16(8)
};

static const s16 sArmCannonOffset_Right_Spinning_Frame6[2] = {
    C_S8_2_S16(-8),
    C_S9_2_S16(10)
};

static const s16 sArmCannonOffset_Right_Spinning_Frame7[2] = {
    C_S8_2_S16(-5),
    C_S9_2_S16(8)
};

static const s16 sArmCannonOffset_Left_StartingSpinJump_Frame0[2] = {
    C_S8_2_S16(-11),
    C_S9_2_S16(-11)
};

static const s16 sArmCannonOffset_Left_Shinesparking_Frame0[2] = {
    C_S8_2_S16(-18),
    C_S9_2_S16(-4)
};

static const s16 sArmCannonOffset_Left_Shinesparking_Frame1[2] = {
    C_S8_2_S16(-19),
    C_S9_2_S16(-2)
};

static const s16 sArmCannonOffset_Right_Shinesparking_Frame0[2] = {
    C_S8_2_S16(-17),
    C_S9_2_S16(-2)
};

static const s16 sArmCannonOffset_Right_Shinesparking_Frame1[2] = {
    C_S8_2_S16(-20),
    C_S9_2_S16(-6)
};

static const s16 sArmCannonOffset_Left_Sidewards_Shinesparking_Frame0[2] = {
    C_S8_2_S16(-17),
    C_S9_2_S16(5)
};

static const s16 sArmCannonOffset_Left_Sidewards_Shinesparking_Frame1[2] = {
    C_S8_2_S16(-15),
    C_S9_2_S16(7)
};

static const s16 sArmCannonOffset_Right_Sidewards_Shinesparking_Frame0[2] = {
    C_S8_2_S16(-21),
    C_S9_2_S16(-10)
};

static const s16 sArmCannonOffset_Right_Sidewards_Shinesparking_Frame1[2] = {
    C_S8_2_S16(-26),
    C_S9_2_S16(-13)
};

const struct ArmCannonAnimationData sArmCannonAnim_Left_MidAir[6] = {
    [0] = {
        .pOffset = sArmCannonOffset_Left_MidAir_Frame0,
        .pOam = sSamusOam_Empty
    },
    [1] = {
        .pOffset = sArmCannonOffset_Left_MidAir_Frame1,
        .pOam = sSamusOam_Empty
    },
    [2] = {
        .pOffset = sArmCannonOffset_Left_MidAir_Frame2,
        .pOam = sSamusOam_Empty
    },
    [3] = {
        .pOffset = sArmCannonOffset_Left_MidAir_Frame2,
        .pOam = sSamusOam_Empty
    },
    [4] = {
        .pOffset = sArmCannonOffset_Left_MidAir_Frame4,
        .pOam = sSamusOam_Empty
    },
    [5] = {
        .pOffset = sArmCannonOffset_Left_MidAir_Frame5,
        .pOam = sSamusOam_Empty
    }
};

const struct ArmCannonAnimationData sArmCannonAnim_Left_Landing[2] = {
    [0] = {
        .pOffset = sArmCannonOffset_Left_Landing_Frame0,
        .pOam = sSamusOam_Empty
    },
    [1] = {
        .pOffset = sArmCannonOffset_Left_Landing_Frame1,
        .pOam = sSamusOam_Empty
    }
};

const struct ArmCannonAnimationData sArmCannonAnim_Left_Up_MidAir[6] = {
    [0] = {
        .pOffset = sArmCannonOffset_Left_Up_MidAir_Frame0,
        .pOam = sArmCannonOam_Left_Up_MidAir_Frame0
    },
    [1] = {
        .pOffset = sArmCannonOffset_Left_Up_MidAir_Frame0,
        .pOam = sArmCannonOam_Left_Up_MidAir_Frame1
    },
    [2] = {
        .pOffset = sArmCannonOffset_Left_Up_MidAir_Frame2,
        .pOam = sArmCannonOam_Left_Up_MidAir_Frame2
    },
    [3] = {
        .pOffset = sArmCannonOffset_Left_Up_MidAir_Frame0,
        .pOam = sArmCannonOam_Left_Up_MidAir_Frame3
    },
    [4] = {
        .pOffset = sArmCannonOffset_Left_Up_MidAir_Frame0,
        .pOam = sArmCannonOam_Left_Up_MidAir_Frame4
    },
    [5] = {
        .pOffset = sArmCannonOffset_Left_Up_MidAir_Frame0,
        .pOam = sArmCannonOam_Left_Up_MidAir_Frame4
    }
};

const struct ArmCannonAnimationData sArmCannonAnim_Left_Up_Landing[2] = {
    [0] = {
        .pOffset = sArmCannonOffset_Left_Up_Landing_Frame0,
        .pOam = sArmCannonOam_Left_Up_Landing_Frame0
    },
    [1] = {
        .pOffset = sArmCannonOffset_Left_Up_Landing_Frame1,
        .pOam = sArmCannonOam_Left_Up_MidAir_Frame3
    }
};

const struct ArmCannonAnimationData sArmCannonAnim_Left_DiagonalUp_MidAir[6] = {
    [0] = {
        .pOffset = sArmCannonOffset_Left_DiagonalUp_MidAir_Frame0,
        .pOam = sArmCannonOam_Left_DiagonalUp_MidAir_Frame0
    },
    [1] = {
        .pOffset = sArmCannonOffset_Left_DiagonalUp_MidAir_Frame1,
        .pOam = sArmCannonOam_Left_DiagonalUp_MidAir_Frame1
    },
    [2] = {
        .pOffset = sArmCannonOffset_Left_DiagonalUp_MidAir_Frame2,
        .pOam = sArmCannonOam_Left_DiagonalUp_MidAir_Frame2
    },
    [3] = {
        .pOffset = sArmCannonOffset_Left_DiagonalUp_MidAir_Frame3,
        .pOam = sArmCannonOam_Left_DiagonalUp_MidAir_Frame3
    },
    [4] = {
        .pOffset = sArmCannonOffset_Left_DiagonalUp_MidAir_Frame4,
        .pOam = sArmCannonOam_Left_DiagonalUp_MidAir_Frame4
    },
    [5] = {
        .pOffset = sArmCannonOffset_Left_DiagonalUp_MidAir_Frame4,
        .pOam = sArmCannonOam_Left_DiagonalUp_MidAir_Frame4
    }
};

const struct ArmCannonAnimationData sArmCannonAnim_Left_DiagonalUp_Landing[2] = {
    [0] = {
        .pOffset = sArmCannonOffset_Left_DiagonalUp_Landing_Frame0,
        .pOam = sArmCannonOam_Left_DiagonalUp_Landing_Frame0
    },
    [1] = {
        .pOffset = sArmCannonOffset_Left_DiagonalUp_Landing_Frame1,
        .pOam = sArmCannonOam_Left_DiagonalUp_Landing_Frame1
    }
};

const struct ArmCannonAnimationData sArmCannonAnim_Left_Forward_MidAir[6] = {
    [0] = {
        .pOffset = sArmCannonOffset_Left_Forward_MidAir_Frame0,
        .pOam = sArmCannonOam_Left_Forward_MidAir_Frame0
    },
    [1] = {
        .pOffset = sArmCannonOffset_Left_Forward_MidAir_Frame1,
        .pOam = sArmCannonOam_Left_Forward_MidAir_Frame1
    },
    [2] = {
        .pOffset = sArmCannonOffset_Left_Forward_MidAir_Frame2,
        .pOam = sArmCannonOam_Left_Forward_MidAir_Frame2
    },
    [3] = {
        .pOffset = sArmCannonOffset_Left_Forward_MidAir_Frame3,
        .pOam = sArmCannonOam_Left_Forward_MidAir_Frame3
    },
    [4] = {
        .pOffset = sArmCannonOffset_Left_Forward_MidAir_Frame4,
        .pOam = sArmCannonOam_Left_Forward_MidAir_Frame4
    },
    [5] = {
        .pOffset = sArmCannonOffset_Left_Forward_MidAir_Frame5,
        .pOam = sArmCannonOam_Left_Forward_MidAir_Frame5
    }
};

const struct ArmCannonAnimationData sArmCannonAnim_Left_Forward_Landing[2] = {
    [0] = {
        .pOffset = sArmCannonOffset_Left_Forward_Landing_Frame0,
        .pOam = sArmCannonOam_Left_Forward_Landing_Frame0
    },
    [1] = {
        .pOffset = sArmCannonOffset_Left_Forward_Landing_Frame1,
        .pOam = sArmCannonOam_Left_Forward_Landing_Frame1
    }
};

const struct ArmCannonAnimationData sArmCannonAnim_Left_DiagonalDown_MidAir[6] = {
    [0] = {
        .pOffset = sArmCannonOffset_Left_DiagonalDown_MidAir_Frame0,
        .pOam = sArmCannonOam_Left_DiagonalDown_MidAir_Frame0
    },
    [1] = {
        .pOffset = sArmCannonOffset_Left_DiagonalDown_MidAir_Frame0,
        .pOam = sArmCannonOam_Left_DiagonalDown_MidAir_Frame1
    },
    [2] = {
        .pOffset = sArmCannonOffset_Left_DiagonalDown_MidAir_Frame2,
        .pOam = sArmCannonOam_Left_DiagonalDown_MidAir_Frame2
    },
    [3] = {
        .pOffset = sArmCannonOffset_Left_DiagonalDown_MidAir_Frame3,
        .pOam = sArmCannonOam_Left_DiagonalDown_MidAir_Frame3
    },
    [4] = {
        .pOffset = sArmCannonOffset_Left_Forward_MidAir_Frame2,
        .pOam = sArmCannonOam_Left_DiagonalDown_MidAir_Frame4
    },
    [5] = {
        .pOffset = sArmCannonOffset_Left_Forward_Landing_Frame0,
        .pOam = sArmCannonOam_Left_DiagonalDown_MidAir_Frame5
    }
};

const struct ArmCannonAnimationData sArmCannonAnim_Left_DiagonalDown_Landing[7] = {
    [0] = {
        .pOffset = sArmCannonOffset_Left_DiagonalDown_Landing_Frame0,
        .pOam = sArmCannonOam_Left_DiagonalDown_Landing_Frame0
    },
    [1] = {
        .pOffset = sArmCannonOffset_Left_DiagonalDown_Landing_Frame1,
        .pOam = sArmCannonOam_Left_DiagonalDown_Landing_Frame1
    },
    [2] = {
        .pOffset = sArmCannonOffset_Left_Up_Landing_Frame1,
        .pOam = sArmCannonOam_Left_Up_MidAir_Frame3
    },
    [3] = {
        .pOffset = sArmCannonOffset_Left_DiagonalDown_Landing_Frame3,
        .pOam = sArmCannonOam_Left_DiagonalDown_Landing_Frame3
    },
    [4] = {
        .pOffset = sArmCannonOffset_Left_DiagonalDown_Landing_Frame4,
        .pOam = sArmCannonOam_Left_DiagonalDown_Landing_Frame4
    },
    [5] = {
        .pOffset = sArmCannonOffset_Left_DiagonalDown_Landing_Frame1,
        .pOam = sArmCannonOam_Left_DiagonalDown_Landing_Frame1
    },
    [6] = {
        .pOffset = sArmCannonOffset_Left_DiagonalDown_Landing_Frame6,
        .pOam = sArmCannonOam_Left_DiagonalDown_Landing_Frame6
    }
};

const struct ArmCannonAnimationData sArmCannonAnim_Right_MidAir[6] = {
    [0] = {
        .pOffset = sArmCannonOffset_Right_MidAir_Frame0,
        .pOam = sSamusOam_Empty
    },
    [1] = {
        .pOffset = sArmCannonOffset_Right_MidAir_Frame1,
        .pOam = sSamusOam_Empty
    },
    [2] = {
        .pOffset = sArmCannonOffset_Right_MidAir_Frame2,
        .pOam = sSamusOam_Empty
    },
    [3] = {
        .pOffset = sArmCannonOffset_Right_MidAir_Frame3,
        .pOam = sSamusOam_Empty
    },
    [4] = {
        .pOffset = sArmCannonOffset_Right_MidAir_Frame4,
        .pOam = sSamusOam_Empty
    },
    [5] = {
        .pOffset = sArmCannonOffset_Right_MidAir_Frame5,
        .pOam = sSamusOam_Empty
    }
};

const struct ArmCannonAnimationData sArmCannonAnim_Right_Landing[2] = {
    [0] = {
        .pOffset = sArmCannonOffset_Right_Landing_Frame0,
        .pOam = sSamusOam_Empty
    },
    [1] = {
        .pOffset = sArmCannonOffset_Right_Landing_Frame0,
        .pOam = sSamusOam_Empty
    }
};

const struct ArmCannonAnimationData sArmCannonAnim_Right_Up_MidAir[6] = {
    [0] = {
        .pOffset = sArmCannonOffset_Right_Up_MidAir_Frame0,
        .pOam = sArmCannonOam_Right_Up_MidAir_Frame0
    },
    [1] = {
        .pOffset = sArmCannonOffset_Right_Up_MidAir_Frame0,
        .pOam = sArmCannonOam_Right_Up_MidAir_Frame1
    },
    [2] = {
        .pOffset = sArmCannonOffset_Right_Up_MidAir_Frame2,
        .pOam = sArmCannonOam_Right_Up_MidAir_Frame2
    },
    [3] = {
        .pOffset = sArmCannonOffset_Right_Up_MidAir_Frame0,
        .pOam = sArmCannonOam_Right_Up_MidAir_Frame3
    },
    [4] = {
        .pOffset = sArmCannonOffset_Right_Up_MidAir_Frame0,
        .pOam = sArmCannonOam_Right_Up_MidAir_Frame4
    },
    [5] = {
        .pOffset = sArmCannonOffset_Right_Up_MidAir_Frame0,
        .pOam = sArmCannonOam_Right_Up_MidAir_Frame4
    }
};

const struct ArmCannonAnimationData sArmCannonAnim_Right_Up_Landing[2] = {
    [0] = {
        .pOffset = sArmCannonOffset_Right_Up_Landing_Frame0,
        .pOam = sArmCannonOam_Right_Up_Landing_Frame0
    },
    [1] = {
        .pOffset = sArmCannonOffset_Right_Up_Landing_Frame1,
        .pOam = sArmCannonOam_Right_Up_MidAir_Frame3
    }
};

const struct ArmCannonAnimationData sArmCannonAnim_Right_DiagonalUp_MidAir[6] = {
    [0] = {
        .pOffset = sArmCannonOffset_Right_DiagonalUp_MidAir_Frame0,
        .pOam = sArmCannonOam_Right_DiagonalUp_MidAir_Frame0
    },
    [1] = {
        .pOffset = sArmCannonOffset_Right_DiagonalUp_MidAir_Frame1,
        .pOam = sArmCannonOam_Right_DiagonalUp_MidAir_Frame1
    },
    [2] = {
        .pOffset = sArmCannonOffset_Right_DiagonalUp_MidAir_Frame2,
        .pOam = sArmCannonOam_Right_DiagonalUp_MidAir_Frame2
    },
    [3] = {
        .pOffset = sArmCannonOffset_Right_DiagonalUp_MidAir_Frame3,
        .pOam = sArmCannonOam_Right_DiagonalUp_MidAir_Frame3
    },
    [4] = {
        .pOffset = sArmCannonOffset_Right_DiagonalUp_MidAir_Frame4,
        .pOam = sArmCannonOam_Right_DiagonalUp_MidAir_Frame4
    },
    [5] = {
        .pOffset = sArmCannonOffset_Right_DiagonalUp_MidAir_Frame5,
        .pOam = sArmCannonOam_Right_DiagonalUp_MidAir_Frame5
    }
};

const struct ArmCannonAnimationData sArmCannonAnim_Right_DiagonalUp_Landing[2] = {
    [0] = {
        .pOffset = sArmCannonOffset_Right_DiagonalUp_Landing_Frame0,
        .pOam = sArmCannonOam_Right_DiagonalUp_Landing_Frame0
    },
    [1] = {
        .pOffset = sArmCannonOffset_Right_DiagonalUp_Landing_Frame1,
        .pOam = sArmCannonOam_Right_DiagonalUp_Landing_Frame1
    }
};

const struct ArmCannonAnimationData sArmCannonAnim_Right_Forward_MidAir[6] = {
    [0] = {
        .pOffset = sArmCannonOffset_Right_Forward_MidAir_Frame0,
        .pOam = sArmCannonOam_Right_Forward_MidAir_Frame0
    },
    [1] = {
        .pOffset = sArmCannonOffset_Right_Forward_MidAir_Frame1,
        .pOam = sArmCannonOam_Right_Forward_MidAir_Frame1
    },
    [2] = {
        .pOffset = sArmCannonOffset_Right_Forward_MidAir_Frame2,
        .pOam = sArmCannonOam_Right_Forward_MidAir_Frame2
    },
    [3] = {
        .pOffset = sArmCannonOffset_Right_Forward_MidAir_Frame3,
        .pOam = sArmCannonOam_Right_Forward_MidAir_Frame3
    },
    [4] = {
        .pOffset = sArmCannonOffset_Right_Forward_MidAir_Frame4,
        .pOam = sArmCannonOam_Right_Forward_MidAir_Frame4
    },
    [5] = {
        .pOffset = sArmCannonOffset_Right_Forward_MidAir_Frame5,
        .pOam = sArmCannonOam_Right_Forward_MidAir_Frame5
    }
};

const struct ArmCannonAnimationData sArmCannonAnim_Right_Forward_Landing[2] = {
    [0] = {
        .pOffset = sArmCannonOffset_Right_Forward_Landing_Frame0,
        .pOam = sArmCannonOam_Right_Forward_Landing_Frame0
    },
    [1] = {
        .pOffset = sArmCannonOffset_Right_Forward_Landing_Frame1,
        .pOam = sArmCannonOam_Right_Forward_Landing_Frame1
    }
};

const struct ArmCannonAnimationData sArmCannonAnim_Right_DiagonalDown_MidAir[6] = {
    [0] = {
        .pOffset = sArmCannonOffset_Right_DiagonalDown_MidAir_Frame0,
        .pOam = sArmCannonOam_Right_DiagonalDown_MidAir_Frame0
    },
    [1] = {
        .pOffset = sArmCannonOffset_Right_DiagonalDown_MidAir_Frame0,
        .pOam = sArmCannonOam_Right_DiagonalDown_MidAir_Frame0
    },
    [2] = {
        .pOffset = sArmCannonOffset_Right_DiagonalDown_MidAir_Frame2,
        .pOam = sArmCannonOam_Right_DiagonalDown_MidAir_Frame2
    },
    [3] = {
        .pOffset = sArmCannonOffset_Right_DiagonalDown_MidAir_Frame3,
        .pOam = sArmCannonOam_Right_DiagonalDown_MidAir_Frame3
    },
    [4] = {
        .pOffset = sArmCannonOffset_Right_Forward_MidAir_Frame2,
        .pOam = sArmCannonOam_Right_DiagonalDown_MidAir_Frame4
    },
    [5] = {
        .pOffset = sArmCannonOffset_Right_Forward_Landing_Frame0,
        .pOam = sArmCannonOam_Right_DiagonalDown_MidAir_Frame5
    }
};

const struct ArmCannonAnimationData sArmCannonAnim_Right_DiagonalDown_Landing[7] = {
    [0] = {
        .pOffset = sArmCannonOffset_Right_DiagonalDown_Landing_Frame0,
        .pOam = sArmCannonOam_Right_DiagonalDown_Landing_Frame0
    },
    [1] = {
        .pOffset = sArmCannonOffset_Right_DiagonalDown_Landing_Frame1,
        .pOam = sArmCannonOam_Right_DiagonalDown_Landing_Frame1
    },
    [2] = {
        .pOffset = sArmCannonOffset_Right_Up_Landing_Frame1,
        .pOam = sArmCannonOam_Right_Up_MidAir_Frame3
    },
    [3] = {
        .pOffset = sArmCannonOffset_Right_DiagonalDown_Landing_Frame3,
        .pOam = sArmCannonOam_Right_DiagonalDown_Landing_Frame3
    },
    [4] = {
        .pOffset = sArmCannonOffset_Right_DiagonalDown_Landing_Frame4,
        .pOam = sArmCannonOam_Right_DiagonalDown_Landing_Frame4
    },
    [5] = {
        .pOffset = sArmCannonOffset_Right_DiagonalDown_Landing_Frame1,
        .pOam = sArmCannonOam_Right_DiagonalDown_Landing_Frame1
    },
    [6] = {
        .pOffset = sArmCannonOffset_Right_DiagonalDown_Landing_Frame6,
        .pOam = sArmCannonOam_Right_DiagonalDown_Landing_Frame6
    }
};

const struct ArmCannonAnimationData sArmCannonAnim_Left_Down_MidAir[6] = {
    [0] = {
        .pOffset = sArmCannonOffset_Left_DiagonalDown_Landing_Frame6,
        .pOam = sArmCannonOam_Left_DiagonalDown_Landing_Frame6
    },
    [1] = {
        .pOffset = sArmCannonOffset_Left_DiagonalDown_Landing_Frame6,
        .pOam = sArmCannonOam_Left_DiagonalDown_Landing_Frame6
    },
    [2] = {
        .pOffset = sArmCannonOffset_Left_DiagonalDown_Landing_Frame6,
        .pOam = sArmCannonOam_Left_DiagonalDown_Landing_Frame6
    },
    [3] = {
        .pOffset = sArmCannonOffset_Left_DiagonalDown_Landing_Frame6,
        .pOam = sArmCannonOam_Left_DiagonalDown_Landing_Frame6
    },
    [4] = {
        .pOffset = sArmCannonOffset_Left_DiagonalDown_Landing_Frame6,
        .pOam = sArmCannonOam_Left_DiagonalDown_Landing_Frame6
    },
    [5] = {
        .pOffset = sArmCannonOffset_Left_DiagonalDown_Landing_Frame6,
        .pOam = sArmCannonOam_Left_DiagonalDown_Landing_Frame6
    }
};

const struct ArmCannonAnimationData sArmCannonAnim_Right_Down_MidAir[6] = {
    [0] = {
        .pOffset = sArmCannonOffset_Right_DiagonalDown_Landing_Frame6,
        .pOam = sArmCannonOam_Right_DiagonalDown_Landing_Frame6
    },
    [1] = {
        .pOffset = sArmCannonOffset_Right_DiagonalDown_Landing_Frame6,
        .pOam = sArmCannonOam_Right_DiagonalDown_Landing_Frame6
    },
    [2] = {
        .pOffset = sArmCannonOffset_Right_DiagonalDown_Landing_Frame6,
        .pOam = sArmCannonOam_Right_DiagonalDown_Landing_Frame6
    },
    [3] = {
        .pOffset = sArmCannonOffset_Right_DiagonalDown_Landing_Frame6,
        .pOam = sArmCannonOam_Right_DiagonalDown_Landing_Frame6
    },
    [4] = {
        .pOffset = sArmCannonOffset_Right_DiagonalDown_Landing_Frame6,
        .pOam = sArmCannonOam_Right_DiagonalDown_Landing_Frame6
    },
    [5] = {
        .pOffset = sArmCannonOffset_Right_DiagonalDown_Landing_Frame6,
        .pOam = sArmCannonOam_Right_DiagonalDown_Landing_Frame6
    }
};

const struct ArmCannonAnimationData sArmCannonAnim_Left_Spinning[8] = {
    [0] = {
        .pOffset = sArmCannonOffset_Left_Spinning_Frame0,
        .pOam = sSamusOam_Empty
    },
    [1] = {
        .pOffset = sArmCannonOffset_Left_Spinning_Frame1,
        .pOam = sSamusOam_Empty
    },
    [2] = {
        .pOffset = sArmCannonOffset_Left_Spinning_Frame2,
        .pOam = sSamusOam_Empty
    },
    [3] = {
        .pOffset = sArmCannonOffset_Left_Spinning_Frame3,
        .pOam = sSamusOam_Empty
    },
    [4] = {
        .pOffset = sArmCannonOffset_Left_Spinning_Frame4,
        .pOam = sSamusOam_Empty
    },
    [5] = {
        .pOffset = sArmCannonOffset_Left_Spinning_Frame5,
        .pOam = sSamusOam_Empty
    },
    [6] = {
        .pOffset = sArmCannonOffset_Left_Spinning_Frame6,
        .pOam = sSamusOam_Empty
    },
    [7] = {
        .pOffset = sArmCannonOffset_Left_Spinning_Frame7,
        .pOam = sSamusOam_Empty
    }
};

const struct ArmCannonAnimationData sArmCannonAnim_Right_Spinning[8] = {
    [0] = {
        .pOffset = sArmCannonOffset_Right_Spinning_Frame0,
        .pOam = sSamusOam_Empty
    },
    [1] = {
        .pOffset = sArmCannonOffset_Right_Spinning_Frame1,
        .pOam = sSamusOam_Empty
    },
    [2] = {
        .pOffset = sArmCannonOffset_Left_Landing_Frame1,
        .pOam = sSamusOam_Empty
    },
    [3] = {
        .pOffset = sArmCannonOffset_Right_Spinning_Frame3,
        .pOam = sSamusOam_Empty
    },
    [4] = {
        .pOffset = sArmCannonOffset_Right_Spinning_Frame4,
        .pOam = sSamusOam_Empty
    },
    [5] = {
        .pOffset = sArmCannonOffset_Right_Spinning_Frame5,
        .pOam = sSamusOam_Empty
    },
    [6] = {
        .pOffset = sArmCannonOffset_Right_Spinning_Frame6,
        .pOam = sSamusOam_Empty
    },
    [7] = {
        .pOffset = sArmCannonOffset_Right_Spinning_Frame7,
        .pOam = sSamusOam_Empty
    }
};

const struct ArmCannonAnimationData sArmCannonAnim_Left_StartingSpinJump[1] = {
    [0] = {
        .pOffset = sArmCannonOffset_Left_StartingSpinJump_Frame0,
        .pOam = sSamusOam_Empty
    }
};

const struct ArmCannonAnimationData sArmCannonAnim_Right_StartingSpinJump[1] = {
    [0] = {
        .pOffset = sArmCannonOffset_Right_Spinning_Frame7,
        .pOam = sSamusOam_Empty
    }
};

const struct ArmCannonAnimationData sArmCannonAnim_Left_DelayBeforeShinesparking[4] = {
    [0] = {
        .pOffset = sArmCannonOffset_Left_DelayBeforeShinesparking_Frame0,
        .pOam = sSamusOam_Empty
    },
    [1] = {
        .pOffset = sArmCannonOffset_Left_MidAir_Frame0,
        .pOam = sSamusOam_Empty
    },
    [2] = {
        .pOffset = sArmCannonOffset_Left_MidAir_Frame1,
        .pOam = sSamusOam_Empty
    },
    [3] = {
        .pOffset = sArmCannonOffset_Left_MidAir_Frame2,
        .pOam = sSamusOam_Empty
    }
};

const struct ArmCannonAnimationData sArmCannonAnim_Left_Shinesparking[2] = {
    [0] = {
        .pOffset = sArmCannonOffset_Left_Shinesparking_Frame0,
        .pOam = sSamusOam_Empty
    },
    [1] = {
        .pOffset = sArmCannonOffset_Left_Shinesparking_Frame1,
        .pOam = sSamusOam_Empty
    }
};

const struct ArmCannonAnimationData sArmCannonAnim_Right_DelayBeforeShinesparking[4] = {
    [0] = {
        .pOffset = sArmCannonOffset_Right_DelayBeforeShinesparking_Frame0,
        .pOam = sSamusOam_Empty
    },
    [1] = {
        .pOffset = sArmCannonOffset_Right_MidAir_Frame0,
        .pOam = sSamusOam_Empty
    },
    [2] = {
        .pOffset = sArmCannonOffset_Right_MidAir_Frame1,
        .pOam = sSamusOam_Empty
    },
    [3] = {
        .pOffset = sArmCannonOffset_Right_MidAir_Frame2,
        .pOam = sSamusOam_Empty
    }
};

const struct ArmCannonAnimationData sArmCannonAnim_Right_Shinesparking[2] = {
    [0] = {
        .pOffset = sArmCannonOffset_Right_Shinesparking_Frame0,
        .pOam = sSamusOam_Empty
    },
    [1] = {
        .pOffset = sArmCannonOffset_Right_Shinesparking_Frame1,
        .pOam = sSamusOam_Empty
    }
};

const struct ArmCannonAnimationData sArmCannonAnim_Left_Sidewards_Shinesparking[2] = {
    [0] = {
        .pOffset = sArmCannonOffset_Left_Sidewards_Shinesparking_Frame0,
        .pOam = sSamusOam_Empty
    },
    [1] = {
        .pOffset = sArmCannonOffset_Left_Sidewards_Shinesparking_Frame1,
        .pOam = sSamusOam_Empty
    }
};

const struct ArmCannonAnimationData sArmCannonAnim_Right_Sidewards_Shinesparking[2] = {
    [0] = {
        .pOffset = sArmCannonOffset_Right_Sidewards_Shinesparking_Frame0,
        .pOam = sSamusOam_Empty
    },
    [1] = {
        .pOffset = sArmCannonOffset_Right_Sidewards_Shinesparking_Frame1,
        .pOam = sSamusOam_Empty
    }
};

const struct ArmCannonAnimationData sArmCannonAnim_Left_DelayAfterShinesparking[9] = {
    [0] = {
        .pOffset = sArmCannonOffset_Left_Shinesparking_Frame1,
        .pOam = sSamusOam_Empty
    },
    [1] = {
        .pOffset = sArmCannonOffset_Left_Spinning_Frame0,
        .pOam = sSamusOam_Empty
    },
    [2] = {
        .pOffset = sArmCannonOffset_Left_Spinning_Frame1,
        .pOam = sSamusOam_Empty
    },
    [3] = {
        .pOffset = sArmCannonOffset_Left_Spinning_Frame2,
        .pOam = sSamusOam_Empty
    },
    [4] = {
        .pOffset = sArmCannonOffset_Left_Spinning_Frame3,
        .pOam = sSamusOam_Empty
    },
    [5] = {
        .pOffset = sArmCannonOffset_Left_Spinning_Frame4,
        .pOam = sSamusOam_Empty
    },
    [6] = {
        .pOffset = sArmCannonOffset_Left_Spinning_Frame5,
        .pOam = sSamusOam_Empty
    },
    [7] = {
        .pOffset = sArmCannonOffset_Left_Spinning_Frame6,
        .pOam = sSamusOam_Empty
    },
    [8] = {
        .pOffset = sArmCannonOffset_Left_Spinning_Frame7,
        .pOam = sSamusOam_Empty
    }
};

const struct ArmCannonAnimationData sArmCannonAnim_Right_DelayAfterShinesparking[9] = {
    [0] = {
        .pOffset = sArmCannonOffset_Right_Shinesparking_Frame1,
        .pOam = sSamusOam_Empty
    },
    [1] = {
        .pOffset = sArmCannonOffset_Right_Spinning_Frame0,
        .pOam = sSamusOam_Empty
    },
    [2] = {
        .pOffset = sArmCannonOffset_Right_Spinning_Frame1,
        .pOam = sSamusOam_Empty
    },
    [3] = {
        .pOffset = sArmCannonOffset_Left_Landing_Frame1,
        .pOam = sSamusOam_Empty
    },
    [4] = {
        .pOffset = sArmCannonOffset_Right_Spinning_Frame3,
        .pOam = sSamusOam_Empty
    },
    [5] = {
        .pOffset = sArmCannonOffset_Right_Spinning_Frame4,
        .pOam = sSamusOam_Empty
    },
    [6] = {
        .pOffset = sArmCannonOffset_Right_Spinning_Frame5,
        .pOam = sSamusOam_Empty
    },
    [7] = {
        .pOffset = sArmCannonOffset_Right_Spinning_Frame6,
        .pOam = sSamusOam_Empty
    },
    [8] = {
        .pOffset = sArmCannonOffset_Right_Spinning_Frame7,
        .pOam = sSamusOam_Empty
    }
};

const struct ArmCannonAnimationData sArmCannonAnim_Left_Sidewards_DelayAfterShinesparking[9] = {
    [0] = {
        .pOffset = sArmCannonOffset_Left_Sidewards_Shinesparking_Frame1,
        .pOam = sSamusOam_Empty
    },
    [1] = {
        .pOffset = sArmCannonOffset_Left_Spinning_Frame0,
        .pOam = sSamusOam_Empty
    },
    [2] = {
        .pOffset = sArmCannonOffset_Left_Spinning_Frame1,
        .pOam = sSamusOam_Empty
    },
    [3] = {
        .pOffset = sArmCannonOffset_Left_Spinning_Frame2,
        .pOam = sSamusOam_Empty
    },
    [4] = {
        .pOffset = sArmCannonOffset_Left_Spinning_Frame3,
        .pOam = sSamusOam_Empty
    },
    [5] = {
        .pOffset = sArmCannonOffset_Left_Spinning_Frame4,
        .pOam = sSamusOam_Empty
    },
    [6] = {
        .pOffset = sArmCannonOffset_Left_Spinning_Frame5,
        .pOam = sSamusOam_Empty
    },
    [7] = {
        .pOffset = sArmCannonOffset_Left_Spinning_Frame6,
        .pOam = sSamusOam_Empty
    },
    [8] = {
        .pOffset = sArmCannonOffset_Left_Spinning_Frame7,
        .pOam = sSamusOam_Empty
    }
};

const struct ArmCannonAnimationData sArmCannonAnim_Right_Sidewards_DelayAfterShinesparking[9] = {
    [0] = {
        .pOffset = sArmCannonOffset_Right_Sidewards_Shinesparking_Frame1,
        .pOam = sSamusOam_Empty
    },
    [1] = {
        .pOffset = sArmCannonOffset_Right_Spinning_Frame0,
        .pOam = sSamusOam_Empty
    },
    [2] = {
        .pOffset = sArmCannonOffset_Right_Spinning_Frame1,
        .pOam = sSamusOam_Empty
    },
    [3] = {
        .pOffset = sArmCannonOffset_Left_Landing_Frame1,
        .pOam = sSamusOam_Empty
    },
    [4] = {
        .pOffset = sArmCannonOffset_Right_Spinning_Frame3,
        .pOam = sSamusOam_Empty
    },
    [5] = {
        .pOffset = sArmCannonOffset_Right_Spinning_Frame4,
        .pOam = sSamusOam_Empty
    },
    [6] = {
        .pOffset = sArmCannonOffset_Right_Spinning_Frame5,
        .pOam = sSamusOam_Empty
    },
    [7] = {
        .pOffset = sArmCannonOffset_Right_Spinning_Frame6,
        .pOam = sSamusOam_Empty
    },
    [8] = {
        .pOffset = sArmCannonOffset_Right_Spinning_Frame7,
        .pOam = sSamusOam_Empty
    }
};

static const u16 sArmCannonOam_Left_Up_UnusedCrouching_Frame0[] = {
    3 | ARM_CANNON_OAM_ORDER_BEHIND,
    OAM_ENTRY(-20, -40, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(-4, -40, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(-12, -24, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_Right_Up_UnusedCrouching_Frame0[] = {
    2 | ARM_CANNON_OAM_ORDER_IN_FRONT,
    OAM_ENTRY(-12, -39, OAM_DIMS_32x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(-4, -23, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_Left_DiagonalUp_UnusedCrouching_Frame0[] = {
    3 | ARM_CANNON_OAM_ORDER_BEHIND,
    OAM_ENTRY(-35, -31, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(-19, -39, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(-19, -23, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_Right_DiagonalUp_UnusedCrouching_Frame0[] = {
    3 | ARM_CANNON_OAM_ORDER_IN_FRONT,
    OAM_ENTRY(2, -39, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(18, -31, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(2, -23, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_Left_UnusedCrouching_Frame0[] = {
    3 | ARM_CANNON_OAM_ORDER_BEHIND,
    OAM_ENTRY(-19, -28, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(-19, -12, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(-3, -20, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_Right_UnusedCrouching_Frame0[] = {
    3 | ARM_CANNON_OAM_ORDER_IN_FRONT,
    OAM_ENTRY(-13, -20, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(3, -28, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(3, -12, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_Left_DiagonalDown_UnusedCrouching_Frame0[] = {
    3 | ARM_CANNON_OAM_ORDER_BEHIND,
    OAM_ENTRY(-35, -17, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(-19, -25, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(-19, -9, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_Right_DiagonalDown_UnusedCrouching_Frame0[] = {
    3 | ARM_CANNON_OAM_ORDER_IN_FRONT,
    OAM_ENTRY(3, -25, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(19, -17, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(3, -9, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_Left_BeingRecharged_Frame0[] = {
    3 | ARM_CANNON_OAM_ORDER_BEHIND,
    OAM_ENTRY(-20, -37, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(-20, -21, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(-4, -29, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_28b75a[] = {
    3 | ARM_CANNON_OAM_ORDER_BEHIND,
    OAM_ENTRY(-20, -37, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(-20, -21, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(-4, -29, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_28b76e[] = {
    3 | ARM_CANNON_OAM_ORDER_BEHIND,
    OAM_ENTRY(-20, -37, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(-20, -21, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(-4, -29, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_28b782[] = {
    3 | ARM_CANNON_OAM_ORDER_BEHIND,
    OAM_ENTRY(-20, -37, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(-20, -21, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(-4, -29, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_28b796[] = {
    3 | ARM_CANNON_OAM_ORDER_BEHIND,
    OAM_ENTRY(-20, -37, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(-20, -21, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(-4, -29, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_Right_BeingRecharged_Frame0[] = {
    3 | ARM_CANNON_OAM_ORDER_IN_FRONT,
    OAM_ENTRY(-12, -29, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(4, -37, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(4, -21, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_28b7be[] = {
    3 | ARM_CANNON_OAM_ORDER_IN_FRONT,
    OAM_ENTRY(-12, -29, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(4, -37, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(4, -21, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_28b7d2[] = {
    3 | ARM_CANNON_OAM_ORDER_IN_FRONT,
    OAM_ENTRY(-12, -29, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(4, -37, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(4, -21, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_28b7e6[] = {
    3 | ARM_CANNON_OAM_ORDER_IN_FRONT,
    OAM_ENTRY(-12, -29, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(4, -37, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(4, -21, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_28b7fa[] = {
    3 | ARM_CANNON_OAM_ORDER_IN_FRONT,
    OAM_ENTRY(-12, -29, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(4, -37, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(4, -21, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const s16 sArmCannonOffset_28b80e[2] = {
    C_S8_2_S16(-46),
    C_S9_2_S16(-5)
};

static const s16 sArmCannonOffset_Left_Up_TurningAround_Frame0[2] = {
    C_S8_2_S16(-46),
    C_S9_2_S16(-3)
};

static const s16 sArmCannonOffset_Left_Up_TurningAround_Frame1[2] = {
    C_S8_2_S16(-46),
    C_S9_2_S16(3)
};

static const s16 sArmCannonOffset_28b81a[2] = {
    C_S8_2_S16(-46),
    C_S9_2_S16(5)
};

static const s16 sArmCannonOffset_28b81e[2] = {
    C_S8_2_S16(-37),
    C_S9_2_S16(-18)
};

static const s16 sArmCannonOffset_Left_DiagonalUp_TurningAround_Frame0[2] = {
    C_S8_2_S16(-35),
    C_S9_2_S16(-11)
};

static const s16 sArmCannonOffset_Left_DiagonalUp_TurningAround_Frame1[2] = {
    C_S8_2_S16(-35),
    C_S9_2_S16(8)
};

static const s16 sArmCannonOffset_28b82a[2] = {
    C_S8_2_S16(-37),
    C_S9_2_S16(18)
};

static const s16 sArmCannonOffset_28b82e[2] = {
    C_S8_2_S16(-21),
    C_S9_2_S16(-17)
};

static const s16 sArmCannonOffset_Left_TurningAround_Frame0[2] = {
    C_S8_2_S16(-21),
    C_S9_2_S16(-10)
};

static const s16 sArmCannonOffset_Left_TurningAround_Frame1[2] = {
    C_S8_2_S16(-21),
    C_S9_2_S16(6)
};

static const s16 sArmCannonOffset_28b83a[2] = {
    C_S8_2_S16(-21),
    C_S9_2_S16(17)
};

static const s16 sArmCannonOffset_Left_UnusedCrouching_Frame0[2] = {
    C_S8_2_S16(-13),
    C_S9_2_S16(-17)
};

static const s16 sArmCannonOffset_Left_DiagonalDown_TurningAround_Frame0[2] = {
    C_S8_2_S16(-14),
    C_S9_2_S16(-11)
};

static const s16 sArmCannonOffset_Left_DiagonalDown_TurningAround_Frame1[2] = {
    C_S8_2_S16(-14),
    C_S9_2_S16(2)
};

static const s16 sArmCannonOffset_28b84a[2] = {
    C_S8_2_S16(-13),
    C_S9_2_S16(17)
};

static const s16 sArmCannonOffset_Left_Up_UnusedCrouching_Frame0[2] = {
    C_S8_2_S16(-38),
    C_S9_2_S16(-4)
};

static const s16 sArmCannonOffset_Left_Up_TurningAroundAndCrouching_Frame0[2] = {
    C_S8_2_S16(-38),
    C_S9_2_S16(-3)
};

static const s16 sArmCannonOffset_Right_Up_UnusedCrouching_Frame0[2] = {
    C_S8_2_S16(-37),
    C_S9_2_S16(4)
};

static const s16 sArmCannonOffset_Left_DiagonalUp_UnusedCrouching_Frame0[2] = {
    C_S8_2_S16(-29),
    C_S9_2_S16(-17)
};

static const s16 sArmCannonOffset_Left_DiagonalUp_TurningAroundAndCrouching_Frame0[2] = {
    C_S8_2_S16(-27),
    C_S9_2_S16(-10)
};

static const s16 sArmCannonOffset_Left_DiagonalUp_TurningAroundAndCrouching_Frame1[2] = {
    C_S8_2_S16(-27),
    C_S9_2_S16(7)
};

static const s16 sArmCannonOffset_Right_DiagonalUp_UnusedCrouching_Frame0[2] = {
    C_S8_2_S16(-29),
    C_S9_2_S16(16)
};

static const s16 sArmCannonOffset_Left_TurningAroundAndCrouching_Frame0[2] = {
    C_S8_2_S16(-13),
    C_S9_2_S16(-11)
};

static const s16 sArmCannonOffset_Left_TurningAroundAndCrouching_Frame1[2] = {
    C_S8_2_S16(-13),
    C_S9_2_S16(6)
};

static const s16 sArmCannonOffset_Right_UnusedCrouching_Frame0[2] = {
    C_S8_2_S16(-12),
    C_S9_2_S16(17)
};

static const s16 sArmCannonOffset_Left_DiagonalDown_UnusedCrouching_Frame0[2] = {
    C_S8_2_S16(-3),
    C_S9_2_S16(-17)
};

static const s16 sArmCannonOffset_Left_DiagonalDown_TurningAroundAndCrouching_Frame0[2] = {
    C_S8_2_S16(-4),
    C_S9_2_S16(-12)
};

static const s16 sArmCannonOffset_Left_DiagonalDown_TurningAroundAndCrouching_Frame1[2] = {
    C_S8_2_S16(-4),
    C_S9_2_S16(2)
};

static const s16 sArmCannonOffset_Right_DiagonalDown_UnusedCrouching_Frame0[2] = {
    C_S8_2_S16(-3),
    C_S9_2_S16(17)
};

static const s16 sArmCannonOffset_Left_Up_TurningAroundMidAir_Frame0[2] = {
    C_S8_2_S16(-42),
    C_S9_2_S16(-3)
};

static const s16 sArmCannonOffset_Left_Up_TurningAroundMidAir_Frame1[2] = {
    C_S8_2_S16(-42),
    C_S9_2_S16(3)
};

static const s16 sArmCannonOffset_Left_DiagonalUp_TurningAroundMidAir_Frame0[2] = {
    C_S8_2_S16(-31),
    C_S9_2_S16(-11)
};

static const s16 sArmCannonOffset_Left_DiagonalUp_TurningAroundMidAir_Frame1[2] = {
    C_S8_2_S16(-31),
    C_S9_2_S16(8)
};

static const s16 sArmCannonOffset_Left_TurningAroundMidAir_Frame0[2] = {
    C_S8_2_S16(-17),
    C_S9_2_S16(-10)
};

static const s16 sArmCannonOffset_Left_TurningAroundMidAir_Frame1[2] = {
    C_S8_2_S16(-17),
    C_S9_2_S16(6)
};

static const s16 sArmCannonOffset_Left_DiagonalDown_TurningAroundMidAir_Frame0[2] = {
    C_S8_2_S16(-10),
    C_S9_2_S16(-11)
};

static const s16 sArmCannonOffset_Left_DiagonalDown_TurningAroundMidAir_Frame1[2] = {
    C_S8_2_S16(-10),
    C_S9_2_S16(2)
};

static const s16 sArmCannonOffset_28b8a6[2] = {
    C_S8_2_S16(-15),
    C_S9_2_S16(-13)
};

static const s16 sArmCannonOffset_28b8aa[2] = {
    C_S8_2_S16(-15),
    C_S9_2_S16(13)
};

static const s16 sArmCannonOffset_Left_Unmorphing_Frame2[2] = {
    C_S8_2_S16(-6),
    C_S9_2_S16(2)
};

static const s16 sArmCannonOffset_Left_Morphing_Frame0[2] = {
    C_S8_2_S16(-7),
    C_S9_2_S16(2)
};

static const s16 sArmCannonOffset_Left_Morphing_Frame1[2] = {
    C_S8_2_S16(-9),
    C_S9_2_S16(-1)
};

static const s16 sArmCannonOffset_Left_Morphing_Frame2[2] = {
    C_S8_2_S16(-8),
    C_S9_2_S16(0)
};

static const s16 sArmCannonOffset_Left_MorphBall_Frame1[2] = {
    C_S8_2_S16(-9),
    C_S9_2_S16(0)
};

static const s16 sArmCannonOffset_Left_MorphBall_Frame2[2] = {
    C_S8_2_S16(-10),
    C_S9_2_S16(0)
};

static const s16 sArmCannonOffset_Right_Unmorphing_Frame2[2] = {
    C_S8_2_S16(-6),
    C_S9_2_S16(-2)
};

static const s16 sArmCannonOffset_Right_Morphing_Frame0[2] = {
    C_S8_2_S16(-7),
    C_S9_2_S16(-2)
};

static const s16 sArmCannonOffset_Right_Morphing_Frame1[2] = {
    C_S8_2_S16(-9),
    C_S9_2_S16(1)
};

static const s16 sArmCannonOffset_Left_OnSavePad_Frame1[2] = {
    C_S8_2_S16(-16),
    C_S9_2_S16(-8)
};

static const s16 sArmCannonOffset_Left_OnNavigationPad_Frame0[2] = {
    C_S8_2_S16(-17),
    C_S9_2_S16(-1)
};

static const s16 sArmCannonOffset_Left_OnNavigationPad_Frame1[2] = {
    C_S8_2_S16(-15),
    C_S9_2_S16(10)
};

static const s16 sArmCannonOffset_Right_OnNavigationPad_Frame0[2] = {
    C_S8_2_S16(-18),
    C_S9_2_S16(9)
};

static const s16 sArmCannonOffset_Left_UsingAnElevator_Frame0[2] = {
    C_S8_2_S16(-16),
    C_S9_2_S16(-6)
};

static const s16 sArmCannonOffset_Left_UsingAnElevator_Frame2[2] = {
    C_S8_2_S16(-15),
    C_S9_2_S16(-8)
};

static const s16 sArmCannonOffset_Left_UsingAnElevator_Frame3[2] = {
    C_S8_2_S16(-15),
    C_S9_2_S16(-7)
};

static const s16 sArmCannonOffset_Right_UsingAnElevator_Frame0[2] = {
    C_S8_2_S16(-15),
    C_S9_2_S16(-3)
};

static const s16 sArmCannonOffset_Left_BeingRecharged_Frame0[2] = {
    C_S8_2_S16(-21),
    C_S9_2_S16(-18)
};

static const s16 sArmCannonOffset_Right_BeingRecharged_Frame0[2] = {
    C_S8_2_S16(-21),
    C_S9_2_S16(18)
};

static const s16 sArmCannonOffset_UnlockingHabitationsDeck_Frame0[2] = {
    C_S8_2_S16(-15),
    C_S9_2_S16(8)
};

static const s16 sArmCannonOffset_UnlockingHabitationsDeck_Frame1[2] = {
    C_S8_2_S16(-16),
    C_S9_2_S16(6)
};

static const s16 sArmCannonOffset_UnlockingHabitationsDeck_Frame4[2] = {
    C_S8_2_S16(-17),
    C_S9_2_S16(12)
};

const struct ArmCannonAnimationData sArmCannonAnim_Left_Up_TurningAround[2] = {
    [0] = {
        .pOffset = sArmCannonOffset_Left_Up_TurningAround_Frame0,
        .pOam = sSamusOam_Empty
    },
    [1] = {
        .pOffset = sArmCannonOffset_Left_Up_TurningAround_Frame1,
        .pOam = sSamusOam_Empty
    }
};

const struct ArmCannonAnimationData sArmCannonAnim_Right_Up_TurningAround[2] = {
    [0] = {
        .pOffset = sArmCannonOffset_Left_Up_TurningAround_Frame1,
        .pOam = sSamusOam_Empty
    },
    [1] = {
        .pOffset = sArmCannonOffset_Left_Up_TurningAround_Frame0,
        .pOam = sSamusOam_Empty
    }
};

const struct ArmCannonAnimationData sArmCannonAnim_Left_DiagonalUp_TurningAround[2] = {
    [0] = {
        .pOffset = sArmCannonOffset_Left_DiagonalUp_TurningAround_Frame0,
        .pOam = sSamusOam_Empty
    },
    [1] = {
        .pOffset = sArmCannonOffset_Left_DiagonalUp_TurningAround_Frame1,
        .pOam = sSamusOam_Empty
    }
};

const struct ArmCannonAnimationData sArmCannonAnim_Right_DiagonalUp_TurningAround[2] = {
    [0] = {
        .pOffset = sArmCannonOffset_Left_DiagonalUp_TurningAround_Frame1,
        .pOam = sSamusOam_Empty
    },
    [1] = {
        .pOffset = sArmCannonOffset_Left_DiagonalUp_TurningAround_Frame0,
        .pOam = sSamusOam_Empty
    }
};

const struct ArmCannonAnimationData sArmCannonAnim_Left_TurningAround[2] = {
    [0] = {
        .pOffset = sArmCannonOffset_Left_TurningAround_Frame0,
        .pOam = sSamusOam_Empty
    },
    [1] = {
        .pOffset = sArmCannonOffset_Left_TurningAround_Frame1,
        .pOam = sSamusOam_Empty
    }
};

const struct ArmCannonAnimationData sArmCannonAnim_Right_TurningAround[2] = {
    [0] = {
        .pOffset = sArmCannonOffset_Left_TurningAround_Frame1,
        .pOam = sSamusOam_Empty
    },
    [1] = {
        .pOffset = sArmCannonOffset_Left_TurningAround_Frame0,
        .pOam = sSamusOam_Empty
    }
};

const struct ArmCannonAnimationData sArmCannonAnim_Left_DiagonalDown_TurningAround[2] = {
    [0] = {
        .pOffset = sArmCannonOffset_Left_DiagonalDown_TurningAround_Frame0,
        .pOam = sSamusOam_Empty
    },
    [1] = {
        .pOffset = sArmCannonOffset_Left_DiagonalDown_TurningAround_Frame1,
        .pOam = sSamusOam_Empty
    }
};

const struct ArmCannonAnimationData sArmCannonAnim_Right_DiagonalDown_TurningAround[2] = {
    [0] = {
        .pOffset = sArmCannonOffset_Left_DiagonalDown_TurningAround_Frame1,
        .pOam = sSamusOam_Empty
    },
    [1] = {
        .pOffset = sArmCannonOffset_Left_DiagonalDown_TurningAround_Frame0,
        .pOam = sSamusOam_Empty
    }
};

const struct ArmCannonAnimationData sArmCannonAnim_Left_Up_TurningAroundAndCrouching[2] = {
    [0] = {
        .pOffset = sArmCannonOffset_Left_Up_TurningAroundAndCrouching_Frame0,
        .pOam = sSamusOam_Empty
    },
    [1] = {
        .pOffset = sArmCannonOffset_Left_Up_TurningAroundAndCrouching_Frame0,
        .pOam = sSamusOam_Empty
    }
};

const struct ArmCannonAnimationData sArmCannonAnim_Right_Up_TurningAroundAndCrouching[2] = {
    [0] = {
        .pOffset = sArmCannonOffset_Left_Up_TurningAroundAndCrouching_Frame0,
        .pOam = sSamusOam_Empty
    },
    [1] = {
        .pOffset = sArmCannonOffset_Left_Up_TurningAroundAndCrouching_Frame0,
        .pOam = sSamusOam_Empty
    }
};

const struct ArmCannonAnimationData sArmCannonAnim_Left_DiagonalUp_TurningAroundAndCrouching[2] = {
    [0] = {
        .pOffset = sArmCannonOffset_Left_DiagonalUp_TurningAroundAndCrouching_Frame0,
        .pOam = sSamusOam_Empty
    },
    [1] = {
        .pOffset = sArmCannonOffset_Left_DiagonalUp_TurningAroundAndCrouching_Frame1,
        .pOam = sSamusOam_Empty
    }
};

const struct ArmCannonAnimationData sArmCannonAnim_Right_DiagonalUp_TurningAroundAndCrouching[2] = {
    [0] = {
        .pOffset = sArmCannonOffset_Left_DiagonalUp_TurningAroundAndCrouching_Frame1,
        .pOam = sSamusOam_Empty
    },
    [1] = {
        .pOffset = sArmCannonOffset_Left_DiagonalUp_TurningAroundAndCrouching_Frame0,
        .pOam = sSamusOam_Empty
    }
};

const struct ArmCannonAnimationData sArmCannonAnim_Left_TurningAroundAndCrouching[2] = {
    [0] = {
        .pOffset = sArmCannonOffset_Left_TurningAroundAndCrouching_Frame0,
        .pOam = sSamusOam_Empty
    },
    [1] = {
        .pOffset = sArmCannonOffset_Left_TurningAroundAndCrouching_Frame1,
        .pOam = sSamusOam_Empty
    }
};

const struct ArmCannonAnimationData sArmCannonAnim_Right_TurningAroundAndCrouching[2] = {
    [0] = {
        .pOffset = sArmCannonOffset_Left_TurningAroundAndCrouching_Frame1,
        .pOam = sSamusOam_Empty
    },
    [1] = {
        .pOffset = sArmCannonOffset_Left_TurningAroundAndCrouching_Frame0,
        .pOam = sSamusOam_Empty
    }
};

const struct ArmCannonAnimationData sArmCannonAnim_Left_DiagonalDown_TurningAroundAndCrouching[2] = {
    [0] = {
        .pOffset = sArmCannonOffset_Left_DiagonalDown_TurningAroundAndCrouching_Frame0,
        .pOam = sSamusOam_Empty
    },
    [1] = {
        .pOffset = sArmCannonOffset_Left_DiagonalDown_TurningAroundAndCrouching_Frame1,
        .pOam = sSamusOam_Empty
    }
};

const struct ArmCannonAnimationData sArmCannonAnim_Right_DiagonalDown_TurningAroundAndCrouching[2] = {
    [0] = {
        .pOffset = sArmCannonOffset_Left_DiagonalDown_TurningAroundAndCrouching_Frame1,
        .pOam = sSamusOam_Empty
    },
    [1] = {
        .pOffset = sArmCannonOffset_Left_DiagonalDown_TurningAroundAndCrouching_Frame0,
        .pOam = sSamusOam_Empty
    }
};

const struct ArmCannonAnimationData sArmCannonAnim_Left_Up_TurningAroundMidAir[2] = {
    [0] = {
        .pOffset = sArmCannonOffset_Left_Up_TurningAroundMidAir_Frame0,
        .pOam = sSamusOam_Empty
    },
    [1] = {
        .pOffset = sArmCannonOffset_Left_Up_TurningAroundMidAir_Frame1,
        .pOam = sSamusOam_Empty
    }
};

const struct ArmCannonAnimationData sArmCannonAnim_Right_Up_TurningAroundMidAir[2] = {
    [0] = {
        .pOffset = sArmCannonOffset_Left_Up_TurningAroundMidAir_Frame1,
        .pOam = sSamusOam_Empty
    },
    [1] = {
        .pOffset = sArmCannonOffset_Left_Up_TurningAroundMidAir_Frame0,
        .pOam = sSamusOam_Empty
    }
};

const struct ArmCannonAnimationData sArmCannonAnim_Left_DiagonalUp_TurningAroundMidAir[2] = {
    [0] = {
        .pOffset = sArmCannonOffset_Left_DiagonalUp_TurningAroundMidAir_Frame0,
        .pOam = sSamusOam_Empty
    },
    [1] = {
        .pOffset = sArmCannonOffset_Left_DiagonalUp_TurningAroundMidAir_Frame1,
        .pOam = sSamusOam_Empty
    }
};

const struct ArmCannonAnimationData sArmCannonAnim_Right_DiagonalUp_TurningAroundMidAir[2] = {
    [0] = {
        .pOffset = sArmCannonOffset_Left_DiagonalUp_TurningAroundMidAir_Frame1,
        .pOam = sSamusOam_Empty
    },
    [1] = {
        .pOffset = sArmCannonOffset_Left_DiagonalUp_TurningAroundMidAir_Frame0,
        .pOam = sSamusOam_Empty
    }
};

const struct ArmCannonAnimationData sArmCannonAnim_Left_TurningAroundMidAir[2] = {
    [0] = {
        .pOffset = sArmCannonOffset_Left_TurningAroundMidAir_Frame0,
        .pOam = sSamusOam_Empty
    },
    [1] = {
        .pOffset = sArmCannonOffset_Left_TurningAroundMidAir_Frame1,
        .pOam = sSamusOam_Empty
    }
};

const struct ArmCannonAnimationData sArmCannonAnim_Right_TurningAroundMidAir[2] = {
    [0] = {
        .pOffset = sArmCannonOffset_Left_TurningAroundMidAir_Frame1,
        .pOam = sSamusOam_Empty
    },
    [1] = {
        .pOffset = sArmCannonOffset_Left_TurningAroundMidAir_Frame0,
        .pOam = sSamusOam_Empty
    }
};

const struct ArmCannonAnimationData sArmCannonAnim_Left_DiagonalDown_TurningAroundMidAir[2] = {
    [0] = {
        .pOffset = sArmCannonOffset_Left_DiagonalDown_TurningAroundMidAir_Frame0,
        .pOam = sSamusOam_Empty
    },
    [1] = {
        .pOffset = sArmCannonOffset_Left_DiagonalDown_TurningAroundMidAir_Frame1,
        .pOam = sSamusOam_Empty
    }
};

const struct ArmCannonAnimationData sArmCannonAnim_Right_DiagonalDown_TurningAroundMidAir[2] = {
    [0] = {
        .pOffset = sArmCannonOffset_Left_DiagonalDown_TurningAroundMidAir_Frame1,
        .pOam = sSamusOam_Empty
    },
    [1] = {
        .pOffset = sArmCannonOffset_Left_DiagonalDown_TurningAroundMidAir_Frame0,
        .pOam = sSamusOam_Empty
    }
};

const struct ArmCannonAnimationData sArmCannonAnim_Left_Up_UnusedCrouching[1] = {
    [0] = {
        .pOffset = sArmCannonOffset_Left_Up_UnusedCrouching_Frame0,
        .pOam = sArmCannonOam_Left_Up_UnusedCrouching_Frame0
    }
};

const struct ArmCannonAnimationData sArmCannonAnim_Right_Up_UnusedCrouching[1] = {
    [0] = {
        .pOffset = sArmCannonOffset_Right_Up_UnusedCrouching_Frame0,
        .pOam = sArmCannonOam_Right_Up_UnusedCrouching_Frame0
    }
};

const struct ArmCannonAnimationData sArmCannonAnim_Left_DiagonalUp_UnusedCrouching[1] = {
    [0] = {
        .pOffset = sArmCannonOffset_Left_DiagonalUp_UnusedCrouching_Frame0,
        .pOam = sArmCannonOam_Left_DiagonalUp_UnusedCrouching_Frame0
    }
};

const struct ArmCannonAnimationData sArmCannonAnim_Right_DiagonalUp_UnusedCrouching[1] = {
    [0] = {
        .pOffset = sArmCannonOffset_Right_DiagonalUp_UnusedCrouching_Frame0,
        .pOam = sArmCannonOam_Right_DiagonalUp_UnusedCrouching_Frame0
    }
};

const struct ArmCannonAnimationData sArmCannonAnim_Left_UnusedCrouching[1] = {
    [0] = {
        .pOffset = sArmCannonOffset_Left_UnusedCrouching_Frame0,
        .pOam = sArmCannonOam_Left_UnusedCrouching_Frame0
    }
};

const struct ArmCannonAnimationData sArmCannonAnim_Right_UnusedCrouching[1] = {
    [0] = {
        .pOffset = sArmCannonOffset_Right_UnusedCrouching_Frame0,
        .pOam = sArmCannonOam_Right_UnusedCrouching_Frame0
    }
};

const struct ArmCannonAnimationData sArmCannonAnim_Left_DiagonalDown_UnusedCrouching[1] = {
    [0] = {
        .pOffset = sArmCannonOffset_Left_DiagonalDown_UnusedCrouching_Frame0,
        .pOam = sArmCannonOam_Left_DiagonalDown_UnusedCrouching_Frame0
    }
};

const struct ArmCannonAnimationData sArmCannonAnim_Right_DiagonalDown_UnusedCrouching[1] = {
    [0] = {
        .pOffset = sArmCannonOffset_Right_DiagonalDown_UnusedCrouching_Frame0,
        .pOam = sArmCannonOam_Right_DiagonalDown_UnusedCrouching_Frame0
    }
};

const struct ArmCannonAnimationData sArmCannonAnim_Left_Morphing[3] = {
    [0] = {
        .pOffset = sArmCannonOffset_Left_Morphing_Frame0,
        .pOam = sSamusOam_Empty
    },
    [1] = {
        .pOffset = sArmCannonOffset_Left_Morphing_Frame1,
        .pOam = sSamusOam_Empty
    },
    [2] = {
        .pOffset = sArmCannonOffset_Left_Morphing_Frame2,
        .pOam = sSamusOam_Empty
    }
};

const struct ArmCannonAnimationData sArmCannonAnim_Left_MorphBall[8] = {
    [0] = {
        .pOffset = sArmCannonOffset_Left_Morphing_Frame2,
        .pOam = sSamusOam_Empty
    },
    [1] = {
        .pOffset = sArmCannonOffset_Left_MorphBall_Frame1,
        .pOam = sSamusOam_Empty
    },
    [2] = {
        .pOffset = sArmCannonOffset_Left_MorphBall_Frame2,
        .pOam = sSamusOam_Empty
    },
    [3] = {
        .pOffset = sArmCannonOffset_Left_MorphBall_Frame1,
        .pOam = sSamusOam_Empty
    },
    [4] = {
        .pOffset = sArmCannonOffset_Left_Morphing_Frame2,
        .pOam = sSamusOam_Empty
    },
    [5] = {
        .pOffset = sArmCannonOffset_Left_MorphBall_Frame2,
        .pOam = sSamusOam_Empty
    },
    [6] = {
        .pOffset = sArmCannonOffset_Left_MorphBall_Frame2,
        .pOam = sSamusOam_Empty
    },
    [7] = {
        .pOffset = sArmCannonOffset_Left_Morphing_Frame2,
        .pOam = sSamusOam_Empty
    }
};

const struct ArmCannonAnimationData sArmCannonAnim_Left_Unmorphing[3] = {
    [0] = {
        .pOffset = sArmCannonOffset_Left_Morphing_Frame1,
        .pOam = sSamusOam_Empty
    },
    [1] = {
        .pOffset = sArmCannonOffset_Left_Morphing_Frame0,
        .pOam = sSamusOam_Empty
    },
    [2] = {
        .pOffset = sArmCannonOffset_Left_Unmorphing_Frame2,
        .pOam = sSamusOam_Empty
    }
};

const struct ArmCannonAnimationData sArmCannonAnim_Right_Morphing[3] = {
    [0] = {
        .pOffset = sArmCannonOffset_Right_Morphing_Frame0,
        .pOam = sSamusOam_Empty
    },
    [1] = {
        .pOffset = sArmCannonOffset_Right_Morphing_Frame1,
        .pOam = sSamusOam_Empty
    },
    [2] = {
        .pOffset = sArmCannonOffset_Left_MorphBall_Frame1,
        .pOam = sSamusOam_Empty
    }
};

const struct ArmCannonAnimationData sArmCannonAnim_Right_MorphBall[8] = {
    [0] = {
        .pOffset = sArmCannonOffset_Left_Morphing_Frame2,
        .pOam = sSamusOam_Empty
    },
    [1] = {
        .pOffset = sArmCannonOffset_Left_Morphing_Frame2,
        .pOam = sSamusOam_Empty
    },
    [2] = {
        .pOffset = sArmCannonOffset_Left_MorphBall_Frame2,
        .pOam = sSamusOam_Empty
    },
    [3] = {
        .pOffset = sArmCannonOffset_Left_MorphBall_Frame2,
        .pOam = sSamusOam_Empty
    },
    [4] = {
        .pOffset = sArmCannonOffset_Left_Morphing_Frame2,
        .pOam = sSamusOam_Empty
    },
    [5] = {
        .pOffset = sArmCannonOffset_Left_MorphBall_Frame1,
        .pOam = sSamusOam_Empty
    },
    [6] = {
        .pOffset = sArmCannonOffset_Left_MorphBall_Frame2,
        .pOam = sSamusOam_Empty
    },
    [7] = {
        .pOffset = sArmCannonOffset_Left_MorphBall_Frame1,
        .pOam = sSamusOam_Empty
    }
};

const struct ArmCannonAnimationData sArmCannonAnim_Right_Unmorphing[3] = {
    [0] = {
        .pOffset = sArmCannonOffset_Right_Morphing_Frame1,
        .pOam = sSamusOam_Empty
    },
    [1] = {
        .pOffset = sArmCannonOffset_Right_Morphing_Frame0,
        .pOam = sSamusOam_Empty
    },
    [2] = {
        .pOffset = sArmCannonOffset_Right_Unmorphing_Frame2,
        .pOam = sSamusOam_Empty
    }
};

const struct ArmCannonAnimationData sArmCannonAnim_Left_OnSavePad[4] = {
    [0] = {
        .pOffset = sArmCannonOffset_Left_TurningAround_Frame0,
        .pOam = sSamusOam_Empty
    },
    [1] = {
        .pOffset = sArmCannonOffset_Left_OnSavePad_Frame1,
        .pOam = sSamusOam_Empty
    },
    [2] = {
        .pOffset = sArmCannonOffset_Left_OnSavePad_Frame1,
        .pOam = sSamusOam_Empty
    },
    [3] = {
        .pOffset = sArmCannonOffset_Left_OnSavePad_Frame1,
        .pOam = sSamusOam_Empty
    }
};

const struct ArmCannonAnimationData sArmCannonAnim_Right_OnSavePad[4] = {
    [0] = {
        .pOffset = sArmCannonOffset_Left_TurningAround_Frame1,
        .pOam = sSamusOam_Empty
    },
    [1] = {
        .pOffset = sArmCannonOffset_Left_OnSavePad_Frame1,
        .pOam = sSamusOam_Empty
    },
    [2] = {
        .pOffset = sArmCannonOffset_Left_OnSavePad_Frame1,
        .pOam = sSamusOam_Empty
    },
    [3] = {
        .pOffset = sArmCannonOffset_Left_OnSavePad_Frame1,
        .pOam = sSamusOam_Empty
    }
};

const struct ArmCannonAnimationData sArmCannonAnim_Left_FacingForeground[4] = {
    [0] = {
        .pOffset = sArmCannonOffset_Left_OnSavePad_Frame1,
        .pOam = sSamusOam_Empty
    },
    [1] = {
        .pOffset = sArmCannonOffset_Left_OnSavePad_Frame1,
        .pOam = sSamusOam_Empty
    },
    [2] = {
        .pOffset = sArmCannonOffset_Left_OnSavePad_Frame1,
        .pOam = sSamusOam_Empty
    },
    [3] = {
        .pOffset = sArmCannonOffset_Left_TurningAround_Frame0,
        .pOam = sSamusOam_Empty
    }
};

const struct ArmCannonAnimationData sArmCannonAnim_Right_FacingForeground[4] = {
    [0] = {
        .pOffset = sArmCannonOffset_Left_OnSavePad_Frame1,
        .pOam = sSamusOam_Empty
    },
    [1] = {
        .pOffset = sArmCannonOffset_Left_OnSavePad_Frame1,
        .pOam = sSamusOam_Empty
    },
    [2] = {
        .pOffset = sArmCannonOffset_Left_OnSavePad_Frame1,
        .pOam = sSamusOam_Empty
    },
    [3] = {
        .pOffset = sArmCannonOffset_Left_TurningAround_Frame1,
        .pOam = sSamusOam_Empty
    }
};

const struct ArmCannonAnimationData sArmCannonAnim_Left_OnNavigationPad[16] = {
    [0] = {
        .pOffset = sArmCannonOffset_Left_OnNavigationPad_Frame0,
        .pOam = sSamusOam_Empty
    },
    [1] = {
        .pOffset = sArmCannonOffset_Left_OnNavigationPad_Frame1,
        .pOam = sSamusOam_Empty
    },
    [2] = {
        .pOffset = sArmCannonOffset_Left_OnNavigationPad_Frame1,
        .pOam = sSamusOam_Empty
    },
    [3] = {
        .pOffset = sArmCannonOffset_Left_OnNavigationPad_Frame1,
        .pOam = sSamusOam_Empty
    },
    [4] = {
        .pOffset = sArmCannonOffset_Left_OnNavigationPad_Frame1,
        .pOam = sSamusOam_Empty
    },
    [5] = {
        .pOffset = sArmCannonOffset_Left_OnNavigationPad_Frame1,
        .pOam = sSamusOam_Empty
    },
    [6] = {
        .pOffset = sArmCannonOffset_Left_OnNavigationPad_Frame1,
        .pOam = sSamusOam_Empty
    },
    [7] = {
        .pOffset = sArmCannonOffset_Left_OnNavigationPad_Frame1,
        .pOam = sSamusOam_Empty
    },
    [8] = {
        .pOffset = sArmCannonOffset_Left_OnNavigationPad_Frame1,
        .pOam = sSamusOam_Empty
    },
    [9] = {
        .pOffset = sArmCannonOffset_Left_OnNavigationPad_Frame1,
        .pOam = sSamusOam_Empty
    },
    [10] = {
        .pOffset = sArmCannonOffset_Left_OnNavigationPad_Frame1,
        .pOam = sSamusOam_Empty
    },
    [11] = {
        .pOffset = sArmCannonOffset_Left_OnNavigationPad_Frame1,
        .pOam = sSamusOam_Empty
    },
    [12] = {
        .pOffset = sArmCannonOffset_Left_OnNavigationPad_Frame1,
        .pOam = sSamusOam_Empty
    },
    [13] = {
        .pOffset = sArmCannonOffset_Left_OnNavigationPad_Frame1,
        .pOam = sSamusOam_Empty
    },
    [14] = {
        .pOffset = sArmCannonOffset_Left_OnNavigationPad_Frame1,
        .pOam = sSamusOam_Empty
    },
    [15] = {
        .pOffset = sArmCannonOffset_Left_OnNavigationPad_Frame1,
        .pOam = sSamusOam_Empty
    }
};

const struct ArmCannonAnimationData sArmCannonAnim_Left_FacingBackground[4] = {
    [0] = {
        .pOffset = sArmCannonOffset_Left_OnNavigationPad_Frame1,
        .pOam = sSamusOam_Empty
    },
    [1] = {
        .pOffset = sArmCannonOffset_Left_OnNavigationPad_Frame1,
        .pOam = sSamusOam_Empty
    },
    [2] = {
        .pOffset = sArmCannonOffset_Left_OnNavigationPad_Frame1,
        .pOam = sSamusOam_Empty
    },
    [3] = {
        .pOffset = sArmCannonOffset_Left_OnNavigationPad_Frame0,
        .pOam = sSamusOam_Empty
    }
};

const struct ArmCannonAnimationData sArmCannonAnim_Right_OnNavigationPad[16] = {
    [0] = {
        .pOffset = sArmCannonOffset_Right_OnNavigationPad_Frame0,
        .pOam = sSamusOam_Empty
    },
    [1] = {
        .pOffset = sArmCannonOffset_Left_OnNavigationPad_Frame1,
        .pOam = sSamusOam_Empty
    },
    [2] = {
        .pOffset = sArmCannonOffset_Left_OnNavigationPad_Frame1,
        .pOam = sSamusOam_Empty
    },
    [3] = {
        .pOffset = sArmCannonOffset_Left_OnNavigationPad_Frame1,
        .pOam = sSamusOam_Empty
    },
    [4] = {
        .pOffset = sArmCannonOffset_Left_OnNavigationPad_Frame1,
        .pOam = sSamusOam_Empty
    },
    [5] = {
        .pOffset = sArmCannonOffset_Left_OnNavigationPad_Frame1,
        .pOam = sSamusOam_Empty
    },
    [6] = {
        .pOffset = sArmCannonOffset_Left_OnNavigationPad_Frame1,
        .pOam = sSamusOam_Empty
    },
    [7] = {
        .pOffset = sArmCannonOffset_Left_OnNavigationPad_Frame1,
        .pOam = sSamusOam_Empty
    },
    [8] = {
        .pOffset = sArmCannonOffset_Left_OnNavigationPad_Frame1,
        .pOam = sSamusOam_Empty
    },
    [9] = {
        .pOffset = sArmCannonOffset_Left_OnNavigationPad_Frame1,
        .pOam = sSamusOam_Empty
    },
    [10] = {
        .pOffset = sArmCannonOffset_Left_OnNavigationPad_Frame1,
        .pOam = sSamusOam_Empty
    },
    [11] = {
        .pOffset = sArmCannonOffset_Left_OnNavigationPad_Frame1,
        .pOam = sSamusOam_Empty
    },
    [12] = {
        .pOffset = sArmCannonOffset_Left_OnNavigationPad_Frame1,
        .pOam = sSamusOam_Empty
    },
    [13] = {
        .pOffset = sArmCannonOffset_Left_OnNavigationPad_Frame1,
        .pOam = sSamusOam_Empty
    },
    [14] = {
        .pOffset = sArmCannonOffset_Left_OnNavigationPad_Frame1,
        .pOam = sSamusOam_Empty
    },
    [15] = {
        .pOffset = sArmCannonOffset_Left_OnNavigationPad_Frame1,
        .pOam = sSamusOam_Empty
    }
};

const struct ArmCannonAnimationData sArmCannonAnim_Right_FacingBackground[4] = {
    [0] = {
        .pOffset = sArmCannonOffset_Left_OnNavigationPad_Frame1,
        .pOam = sSamusOam_Empty
    },
    [1] = {
        .pOffset = sArmCannonOffset_Left_OnNavigationPad_Frame1,
        .pOam = sSamusOam_Empty
    },
    [2] = {
        .pOffset = sArmCannonOffset_Left_OnNavigationPad_Frame1,
        .pOam = sSamusOam_Empty
    },
    [3] = {
        .pOffset = sArmCannonOffset_Right_OnNavigationPad_Frame0,
        .pOam = sSamusOam_Empty
    }
};

const struct ArmCannonAnimationData sArmCannonAnim_Left_UsingAnElevator[5] = {
    [0] = {
        .pOffset = sArmCannonOffset_Left_UsingAnElevator_Frame0,
        .pOam = sSamusOam_Empty
    },
    [1] = {
        .pOffset = sArmCannonOffset_Left_OnSavePad_Frame1,
        .pOam = sSamusOam_Empty
    },
    [2] = {
        .pOffset = sArmCannonOffset_Left_UsingAnElevator_Frame2,
        .pOam = sSamusOam_Empty
    },
    [3] = {
        .pOffset = sArmCannonOffset_Left_UsingAnElevator_Frame3,
        .pOam = sSamusOam_Empty
    },
    [4] = {
        .pOffset = sArmCannonOffset_Left_UsingAnElevator_Frame2,
        .pOam = sSamusOam_Empty
    }
};

const struct ArmCannonAnimationData sArmCannonAnim_Right_UsingAnElevator[5] = {
    [0] = {
        .pOffset = sArmCannonOffset_Right_UsingAnElevator_Frame0,
        .pOam = sSamusOam_Empty
    },
    [1] = {
        .pOffset = sArmCannonOffset_Left_OnSavePad_Frame1,
        .pOam = sSamusOam_Empty
    },
    [2] = {
        .pOffset = sArmCannonOffset_Left_UsingAnElevator_Frame2,
        .pOam = sSamusOam_Empty
    },
    [3] = {
        .pOffset = sArmCannonOffset_Left_UsingAnElevator_Frame3,
        .pOam = sSamusOam_Empty
    },
    [4] = {
        .pOffset = sArmCannonOffset_Left_UsingAnElevator_Frame2,
        .pOam = sSamusOam_Empty
    }
};

const struct ArmCannonAnimationData sArmCannonAnim_Left_DownloadingAbility[16] = {
    [0] = {
        .pOffset = sArmCannonOffset_Left_OnSavePad_Frame1,
        .pOam = sSamusOam_Empty
    },
    [1] = {
        .pOffset = sArmCannonOffset_Left_OnSavePad_Frame1,
        .pOam = sSamusOam_Empty
    },
    [2] = {
        .pOffset = sArmCannonOffset_Left_OnSavePad_Frame1,
        .pOam = sSamusOam_Empty
    },
    [3] = {
        .pOffset = sArmCannonOffset_Left_OnSavePad_Frame1,
        .pOam = sSamusOam_Empty
    },
    [4] = {
        .pOffset = sArmCannonOffset_Left_OnSavePad_Frame1,
        .pOam = sSamusOam_Empty
    },
    [5] = {
        .pOffset = sArmCannonOffset_Left_OnSavePad_Frame1,
        .pOam = sSamusOam_Empty
    },
    [6] = {
        .pOffset = sArmCannonOffset_Left_OnSavePad_Frame1,
        .pOam = sSamusOam_Empty
    },
    [7] = {
        .pOffset = sArmCannonOffset_Left_OnSavePad_Frame1,
        .pOam = sSamusOam_Empty
    },
    [8] = {
        .pOffset = sArmCannonOffset_Left_OnSavePad_Frame1,
        .pOam = sSamusOam_Empty
    },
    [9] = {
        .pOffset = sArmCannonOffset_Left_OnSavePad_Frame1,
        .pOam = sSamusOam_Empty
    },
    [10] = {
        .pOffset = sArmCannonOffset_Left_OnSavePad_Frame1,
        .pOam = sSamusOam_Empty
    },
    [11] = {
        .pOffset = sArmCannonOffset_Left_OnSavePad_Frame1,
        .pOam = sSamusOam_Empty
    },
    [12] = {
        .pOffset = sArmCannonOffset_Left_OnSavePad_Frame1,
        .pOam = sSamusOam_Empty
    },
    [13] = {
        .pOffset = sArmCannonOffset_Left_OnSavePad_Frame1,
        .pOam = sSamusOam_Empty
    },
    [14] = {
        .pOffset = sArmCannonOffset_Left_OnSavePad_Frame1,
        .pOam = sSamusOam_Empty
    },
    [15] = {
        .pOffset = sArmCannonOffset_Left_OnSavePad_Frame1,
        .pOam = sSamusOam_Empty
    }
};

const struct ArmCannonAnimationData sArmCannonAnim_Right_DownloadingAbility[16] = {
    [0] = {
        .pOffset = sArmCannonOffset_Left_OnSavePad_Frame1,
        .pOam = sSamusOam_Empty
    },
    [1] = {
        .pOffset = sArmCannonOffset_Left_OnSavePad_Frame1,
        .pOam = sSamusOam_Empty
    },
    [2] = {
        .pOffset = sArmCannonOffset_Left_OnSavePad_Frame1,
        .pOam = sSamusOam_Empty
    },
    [3] = {
        .pOffset = sArmCannonOffset_Left_OnSavePad_Frame1,
        .pOam = sSamusOam_Empty
    },
    [4] = {
        .pOffset = sArmCannonOffset_Left_OnSavePad_Frame1,
        .pOam = sSamusOam_Empty
    },
    [5] = {
        .pOffset = sArmCannonOffset_Left_OnSavePad_Frame1,
        .pOam = sSamusOam_Empty
    },
    [6] = {
        .pOffset = sArmCannonOffset_Left_OnSavePad_Frame1,
        .pOam = sSamusOam_Empty
    },
    [7] = {
        .pOffset = sArmCannonOffset_Left_OnSavePad_Frame1,
        .pOam = sSamusOam_Empty
    },
    [8] = {
        .pOffset = sArmCannonOffset_Left_OnSavePad_Frame1,
        .pOam = sSamusOam_Empty
    },
    [9] = {
        .pOffset = sArmCannonOffset_Left_OnSavePad_Frame1,
        .pOam = sSamusOam_Empty
    },
    [10] = {
        .pOffset = sArmCannonOffset_Left_OnSavePad_Frame1,
        .pOam = sSamusOam_Empty
    },
    [11] = {
        .pOffset = sArmCannonOffset_Left_OnSavePad_Frame1,
        .pOam = sSamusOam_Empty
    },
    [12] = {
        .pOffset = sArmCannonOffset_Left_OnSavePad_Frame1,
        .pOam = sSamusOam_Empty
    },
    [13] = {
        .pOffset = sArmCannonOffset_Left_OnSavePad_Frame1,
        .pOam = sSamusOam_Empty
    },
    [14] = {
        .pOffset = sArmCannonOffset_Left_OnSavePad_Frame1,
        .pOam = sSamusOam_Empty
    },
    [15] = {
        .pOffset = sArmCannonOffset_Left_OnSavePad_Frame1,
        .pOam = sSamusOam_Empty
    }
};

const struct ArmCannonAnimationData sArmCannonAnim_Left_BeingRecharged[8] = {
    [0] = {
        .pOffset = sArmCannonOffset_Left_BeingRecharged_Frame0,
        .pOam = sArmCannonOam_Left_BeingRecharged_Frame0
    },
    [1] = {
        .pOffset = sArmCannonOffset_Left_BeingRecharged_Frame0,
        .pOam = sArmCannonOam_Left_BeingRecharged_Frame0
    },
    [2] = {
        .pOffset = sArmCannonOffset_Left_BeingRecharged_Frame0,
        .pOam = sArmCannonOam_Left_BeingRecharged_Frame0
    },
    [3] = {
        .pOffset = sArmCannonOffset_Left_BeingRecharged_Frame0,
        .pOam = sArmCannonOam_Left_BeingRecharged_Frame0
    },
    [4] = {
        .pOffset = sArmCannonOffset_Left_BeingRecharged_Frame0,
        .pOam = sArmCannonOam_Left_BeingRecharged_Frame0
    },
    [5] = {
        .pOffset = sArmCannonOffset_Left_BeingRecharged_Frame0,
        .pOam = sArmCannonOam_Left_BeingRecharged_Frame0
    },
    [6] = {
        .pOffset = sArmCannonOffset_Left_BeingRecharged_Frame0,
        .pOam = sArmCannonOam_Left_BeingRecharged_Frame0
    },
    [7] = {
        .pOffset = sArmCannonOffset_Left_BeingRecharged_Frame0,
        .pOam = sArmCannonOam_Left_BeingRecharged_Frame0
    }
};

const struct ArmCannonAnimationData sArmCannonAnim_Right_BeingRecharged[8] = {
    [0] = {
        .pOffset = sArmCannonOffset_Right_BeingRecharged_Frame0,
        .pOam = sArmCannonOam_Right_BeingRecharged_Frame0
    },
    [1] = {
        .pOffset = sArmCannonOffset_Right_BeingRecharged_Frame0,
        .pOam = sArmCannonOam_Right_BeingRecharged_Frame0
    },
    [2] = {
        .pOffset = sArmCannonOffset_Right_BeingRecharged_Frame0,
        .pOam = sArmCannonOam_Right_BeingRecharged_Frame0
    },
    [3] = {
        .pOffset = sArmCannonOffset_Right_BeingRecharged_Frame0,
        .pOam = sArmCannonOam_Right_BeingRecharged_Frame0
    },
    [4] = {
        .pOffset = sArmCannonOffset_Right_BeingRecharged_Frame0,
        .pOam = sArmCannonOam_Right_BeingRecharged_Frame0
    },
    [5] = {
        .pOffset = sArmCannonOffset_Right_BeingRecharged_Frame0,
        .pOam = sArmCannonOam_Right_BeingRecharged_Frame0
    },
    [6] = {
        .pOffset = sArmCannonOffset_Right_BeingRecharged_Frame0,
        .pOam = sArmCannonOam_Right_BeingRecharged_Frame0
    },
    [7] = {
        .pOffset = sArmCannonOffset_Right_BeingRecharged_Frame0,
        .pOam = sArmCannonOam_Right_BeingRecharged_Frame0
    }
};

const struct ArmCannonAnimationData sArmCannonAnim_Left_UnlockingSecurity[1] = {
    [0] = {
        .pOffset = sArmCannonOffset_Left_BeingRecharged_Frame0,
        .pOam = sArmCannonOam_Left_BeingRecharged_Frame0
    }
};

const struct ArmCannonAnimationData sArmCannonAnim_Right_UnlockingSecurity[1] = {
    [0] = {
        .pOffset = sArmCannonOffset_Right_BeingRecharged_Frame0,
        .pOam = sArmCannonOam_Right_BeingRecharged_Frame0
    }
};

const struct ArmCannonAnimationData sArmCannonAnim_UnlockingHabitationsDeck[6] = {
    [0] = {
        .pOffset = sArmCannonOffset_UnlockingHabitationsDeck_Frame0,
        .pOam = sSamusOam_Empty
    },
    [1] = {
        .pOffset = sArmCannonOffset_UnlockingHabitationsDeck_Frame1,
        .pOam = sSamusOam_Empty
    },
    [2] = {
        .pOffset = sArmCannonOffset_UnlockingHabitationsDeck_Frame0,
        .pOam = sSamusOam_Empty
    },
    [3] = {
        .pOffset = sArmCannonOffset_Left_OnNavigationPad_Frame1,
        .pOam = sSamusOam_Empty
    },
    [4] = {
        .pOffset = sArmCannonOffset_UnlockingHabitationsDeck_Frame4,
        .pOam = sSamusOam_Empty
    },
    [5] = {
        .pOffset = sArmCannonOffset_Right_OnNavigationPad_Frame0,
        .pOam = sSamusOam_Empty
    }
};

static const u16 sSamusEffectAnim_UsingAnElevator_Frame0[] = {
    1,
    OAM_ENTRY(-16, -1, OAM_DIMS_32x8, OAM_NO_FLIP, 0x40, 3, 0)
};

static const u16 sSamusEffectAnim_UsingAnElevator_Frame1[] = {
    1,
    OAM_ENTRY(-16, -1, OAM_DIMS_32x8, OAM_NO_FLIP, 0x60, 3, 0)
};

static const u16 sSamusEffectAnim_UsingAnElevator_Frame2[] = {
    1,
    OAM_ENTRY(-8, -1, OAM_DIMS_16x8, OAM_NO_FLIP, 0x44, 3, 0)
};

static const u16 sSamusEffectAnim_UsingAnElevator_Frame3[] = {
    1,
    OAM_ENTRY(-8, -1, OAM_DIMS_16x8, OAM_NO_FLIP, 0x64, 3, 0)
};

const struct FrameData sSamusEffectAnim_UsingAnElevator[5] = {
    [0] = {
        .pFrame = sSamusEffectAnim_UsingAnElevator_Frame0,
        .timer = 1
    },
    [1] = {
        .pFrame = sSamusEffectAnim_UsingAnElevator_Frame1,
        .timer = 1
    },
    [2] = {
        .pFrame = sSamusEffectAnim_UsingAnElevator_Frame2,
        .timer = 2
    },
    [3] = {
        .pFrame = sSamusEffectAnim_UsingAnElevator_Frame3,
        .timer = 2
    },
    [4] = FRAME_DATA_TERMINATOR
};

static const u16 sArmCannonOam_Left_DiagonalUp_HoldingYourArmCannonOutOnAVerticalLadder_Frame0[] = {
    3 | ARM_CANNON_OAM_ORDER_IN_FRONT,
    OAM_ENTRY(-38, -34, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(-22, -42, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(-22, -26, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_Left_DiagonalUp_ShootingOnVerticalLadder_Frame0[] = {
    3 | ARM_CANNON_OAM_ORDER_IN_FRONT,
    OAM_ENTRY(-37, -33, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(-21, -41, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(-21, -25, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_Left_HoldingYourArmCannonOutOnAVerticalLadder_Frame0[] = {
    3 | ARM_CANNON_OAM_ORDER_IN_FRONT,
    OAM_ENTRY(-27, -35, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(-27, -19, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(-11, -27, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_Left_ShootingOnVerticalLadder_Frame0[] = {
    3 | ARM_CANNON_OAM_ORDER_IN_FRONT,
    OAM_ENTRY(-26, -35, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(-26, -19, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(-10, -27, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_Left_DiagonalDown_HoldingYourArmCannonOutOnAVerticalLadder_Frame0[] = {
    3 | ARM_CANNON_OAM_ORDER_IN_FRONT,
    OAM_ENTRY(-38, -25, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(-22, -33, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(-22, -17, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_Left_DiagonalDown_ShootingOnVerticalLadder_Frame0[] = {
    3 | ARM_CANNON_OAM_ORDER_IN_FRONT,
    OAM_ENTRY(-37, -27, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(-21, -35, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(-21, -19, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_Right_DiagonalUp_HoldingYourArmCannonOutOnAVerticalLadder_Frame0[] = {
    3 | ARM_CANNON_OAM_ORDER_BEHIND,
    OAM_ENTRY(6, -42, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(22, -34, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(6, -26, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_Right_DiagonalUp_ShootingOnVerticalLadder_Frame0[] = {
    3 | ARM_CANNON_OAM_ORDER_BEHIND,
    OAM_ENTRY(5, -41, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(21, -33, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(5, -25, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_Right_HoldingYourArmCannonOutOnAVerticalLadder_Frame0[] = {
    3 | ARM_CANNON_OAM_ORDER_IN_FRONT,
    OAM_ENTRY(-6, -27, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(10, -35, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(10, -19, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_Right_ShootingOnVerticalLadder_Frame0[] = {
    3 | ARM_CANNON_OAM_ORDER_IN_FRONT,
    OAM_ENTRY(-7, -27, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(9, -35, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(9, -19, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_Right_DiagonalDown_HoldingYourArmCannonOutOnAVerticalLadder_Frame0[] = {
    3 | ARM_CANNON_OAM_ORDER_IN_FRONT,
    OAM_ENTRY(6, -33, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(22, -25, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(6, -17, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_Right_DiagonalDown_ShootingOnVerticalLadder_Frame0[] = {
    3 | ARM_CANNON_OAM_ORDER_IN_FRONT,
    OAM_ENTRY(4, -34, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(20, -26, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(4, -18, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_Left_HangingOnHorizontalLadder_Frame0[] = {
    3 | ARM_CANNON_OAM_ORDER_BEHIND,
    OAM_ENTRY(-19, -32, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(-19, -16, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(-3, -24, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_Left_ShootingOnHorizontalLadder_Frame0[] = {
    3 | ARM_CANNON_OAM_ORDER_BEHIND,
    OAM_ENTRY(-17, -32, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(-17, -16, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(-1, -24, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_Left_DiagonalDown_HangingOnHorizontalLadder_Frame0[] = {
    3 | ARM_CANNON_OAM_ORDER_BEHIND,
    OAM_ENTRY(-31, -22, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(-15, -30, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(-15, -14, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_Left_DiagonalDown_ShootingOnHorizontalLadder_Frame0[] = {
    3 | ARM_CANNON_OAM_ORDER_BEHIND,
    OAM_ENTRY(-29, -23, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(-13, -31, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(-13, -15, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_Left_Down_DelayAfterShootingOnHorizontalLadder_Frame0[] = {
    3 | ARM_CANNON_OAM_ORDER_BEHIND,
    OAM_ENTRY(-20, -15, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(-4, -15, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(-12, -31, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_Left_Down_ShootingOnHorizontalLadder_Frame0[] = {
    3 | ARM_CANNON_OAM_ORDER_BEHIND,
    OAM_ENTRY(-20, -17, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(-4, -17, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(-12, -33, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_Right_HangingOnHorizontalLadder_Frame0[] = {
    3 | ARM_CANNON_OAM_ORDER_IN_FRONT,
    OAM_ENTRY(-13, -24, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(3, -32, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(3, -16, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_Right_ShootingOnHorizontalLadder_Frame0[] = {
    3 | ARM_CANNON_OAM_ORDER_IN_FRONT,
    OAM_ENTRY(-15, -24, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(1, -32, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(1, -16, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_Right_DiagonalDown_HangingOnHorizontalLadder_Frame0[] = {
    3 | ARM_CANNON_OAM_ORDER_IN_FRONT,
    OAM_ENTRY(0, -29, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(16, -21, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(0, -13, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_Right_DiagonalDown_ShootingOnHorizontalLadder_Frame0[] = {
    3 | ARM_CANNON_OAM_ORDER_IN_FRONT,
    OAM_ENTRY(-2, -30, OAM_DIMS_16x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(14, -22, OAM_DIMS_16x16, OAM_NO_FLIP, 0x42, 1, 0),
    OAM_ENTRY(-2, -14, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_Right_Down_DelayAfterShootingOnHorizontalLadder_Frame0[] = {
    2 | ARM_CANNON_OAM_ORDER_IN_FRONT,
    OAM_ENTRY(-12, -15, OAM_DIMS_32x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(-4, -31, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_Right_Down_ShootingOnHorizontalLadder_Frame0[] = {
    2 | ARM_CANNON_OAM_ORDER_IN_FRONT,
    OAM_ENTRY(-12, -17, OAM_DIMS_32x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(-4, -33, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_Right_Up_HoldingYourArmCannonOutOnAVerticalLadder_Frame0[] = {
    2 | ARM_CANNON_OAM_ORDER_BEHIND,
    OAM_ENTRY(-9, -43, OAM_DIMS_32x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(-1, -27, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_Right_Up_ShootingOnVerticalLadder_Frame0[] = {
    2 | ARM_CANNON_OAM_ORDER_BEHIND,
    OAM_ENTRY(-9, -41, OAM_DIMS_32x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(-1, -25, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_Right_Down_HoldingYourArmCannonOutOnAVerticalLadder_Frame0[] = {
    2 | ARM_CANNON_OAM_ORDER_BEHIND,
    OAM_ENTRY(-9, -18, OAM_DIMS_32x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(-1, -34, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_Right_Down_ShootingOnVerticalLadder_Frame0[] = {
    2 | ARM_CANNON_OAM_ORDER_BEHIND,
    OAM_ENTRY(-9, -20, OAM_DIMS_32x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(-1, -36, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_Left_Up_HoldingYourArmCannonOutOnAVerticalLadder_Frame0[] = {
    2 | ARM_CANNON_OAM_ORDER_IN_FRONT,
    OAM_ENTRY(-23, -43, OAM_DIMS_32x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(-15, -27, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_Left_Up_ShootingOnVerticalLadder_Frame0[] = {
    2 | ARM_CANNON_OAM_ORDER_IN_FRONT,
    OAM_ENTRY(-23, -41, OAM_DIMS_32x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(-15, -25, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_Left_Down_HoldingYourArmCannonOutOnAVerticalLadder_Frame0[] = {
    2 | ARM_CANNON_OAM_ORDER_IN_FRONT,
    OAM_ENTRY(-23, -16, OAM_DIMS_32x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(-15, -32, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sArmCannonOam_Left_Down_ShootingOnVerticalLadder_Frame0[] = {
    2 | ARM_CANNON_OAM_ORDER_IN_FRONT,
    OAM_ENTRY(-23, -18, OAM_DIMS_32x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(-15, -34, OAM_DIMS_16x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const s16 sArmCannonOffset_Left_HangingFromVerticalLadder_Frame3[2] = {
    C_S8_2_S16(-37),
    C_S9_2_S16(-9)
};

static const s16 sArmCannonOffset_Left_HangingFromVerticalLadder_Frame4[2] = {
    C_S8_2_S16(-35),
    C_S9_2_S16(-9)
};

static const s16 sArmCannonOffset_Left_HangingFromVerticalLadder_Frame5[2] = {
    C_S8_2_S16(-31),
    C_S9_2_S16(-9)
};

static const s16 sArmCannonOffset_Left_HangingFromVerticalLadder_Frame0[2] = {
    C_S8_2_S16(-29),
    C_S9_2_S16(-8)
};

static const s16 sArmCannonOffset_Left_HangingFromVerticalLadder_Frame1[2] = {
    C_S8_2_S16(-33),
    C_S9_2_S16(-8)
};

static const s16 sArmCannonOffset_Left_HangingFromVerticalLadder_Frame2[2] = {
    C_S8_2_S16(-36),
    C_S9_2_S16(-8)
};

static const s16 sArmCannonOffset_Right_HangingFromVerticalLadder_Frame0[2] = {
    C_S8_2_S16(-37),
    C_S9_2_S16(9)
};

static const s16 sArmCannonOffset_Right_HangingFromVerticalLadder_Frame1[2] = {
    C_S8_2_S16(-35),
    C_S9_2_S16(9)
};

static const s16 sArmCannonOffset_Right_HangingFromVerticalLadder_Frame2[2] = {
    C_S8_2_S16(-31),
    C_S9_2_S16(9)
};

static const s16 sArmCannonOffset_Right_HangingFromVerticalLadder_Frame3[2] = {
    C_S8_2_S16(-29),
    C_S9_2_S16(8)
};

static const s16 sArmCannonOffset_Right_HangingFromVerticalLadder_Frame4[2] = {
    C_S8_2_S16(-33),
    C_S9_2_S16(8)
};

static const s16 sArmCannonOffset_Right_HangingFromVerticalLadder_Frame5[2] = {
    C_S8_2_S16(-30),
    C_S9_2_S16(9)
};

static const s16 sArmCannonOffset_Left_StartingToHoldYourArmCannonOutOnAVerticalLadder_Frame0[2] = {
    C_S8_2_S16(-25),
    C_S9_2_S16(7)
};

static const s16 sArmCannonOffset_Left_StartingToHoldYourArmCannonOutOnAVerticalLadder_Frame1[2] = {
    C_S8_2_S16(-20),
    C_S9_2_S16(-2)
};

static const s16 sArmCannonOffset_Left_DiagonalUp_HoldingYourArmCannonOutOnAVerticalLadder_Frame0[2] = {
    C_S8_2_S16(-33),
    C_S9_2_S16(-21)
};

static const s16 sArmCannonOffset_Left_DiagonalUp_ShootingOnVerticalLadder_Frame0[2] = {
    C_S8_2_S16(-32),
    C_S9_2_S16(-20)
};

static const s16 sArmCannonOffset_Left_HoldingYourArmCannonOutOnAVerticalLadder_Frame0[2] = {
    C_S8_2_S16(-19),
    C_S9_2_S16(-25)
};

static const s16 sArmCannonOffset_Left_ShootingOnVerticalLadder_Frame0[2] = {
    C_S8_2_S16(-19),
    C_S9_2_S16(-24)
};

static const s16 sArmCannonOffset_Left_DiagonalDown_HoldingYourArmCannonOutOnAVerticalLadder_Frame0[2] = {
    C_S8_2_S16(-10),
    C_S9_2_S16(-21)
};

static const s16 sArmCannonOffset_Left_DiagonalDown_ShootingOnVerticalLadder_Frame0[2] = {
    C_S8_2_S16(-12),
    C_S9_2_S16(-20)
};

static const s16 sArmCannonOffset_Right_StartingToHoldYourArmCannonOutOnAVerticalLadder_Frame0[2] = {
    C_S8_2_S16(-26),
    C_S9_2_S16(-6)
};

static const s16 sArmCannonOffset_Right_StartingToHoldYourArmCannonOutOnAVerticalLadder_Frame1[2] = {
    C_S8_2_S16(-20),
    C_S9_2_S16(2)
};

static const s16 sArmCannonOffset_Right_DiagonalUp_HoldingYourArmCannonOutOnAVerticalLadder_Frame0[2] = {
    C_S8_2_S16(-33),
    C_S9_2_S16(21)
};

static const s16 sArmCannonOffset_Right_DiagonalUp_ShootingOnVerticalLadder_Frame0[2] = {
    C_S8_2_S16(-32),
    C_S9_2_S16(20)
};

static const s16 sArmCannonOffset_Right_HoldingYourArmCannonOutOnAVerticalLadder_Frame0[2] = {
    C_S8_2_S16(-19),
    C_S9_2_S16(24)
};

static const s16 sArmCannonOffset_Right_ShootingOnVerticalLadder_Frame0[2] = {
    C_S8_2_S16(-19),
    C_S9_2_S16(23)
};

static const s16 sArmCannonOffset_Right_DiagonalDown_HoldingYourArmCannonOutOnAVerticalLadder_Frame0[2] = {
    C_S8_2_S16(-10),
    C_S9_2_S16(21)
};

static const s16 sArmCannonOffset_Right_DiagonalDown_ShootingOnVerticalLadder_Frame0[2] = {
    C_S8_2_S16(-11),
    C_S9_2_S16(19)
};

static const s16 sArmCannonOffset_Left_StartingWallJump_Frame0[2] = {
    C_S8_2_S16(-8),
    C_S9_2_S16(-19)
};

static const s16 sArmCannonOffset_Left_StartingWallJump_Frame1[2] = {
    C_S8_2_S16(-7),
    C_S9_2_S16(-11)
};

static const s16 sArmCannonOffset_Right_StartingWallJump_Frame0[2] = {
    C_S8_2_S16(-8),
    C_S9_2_S16(19)
};

static const s16 sArmCannonOffset_Right_StartingWallJump_Frame1[2] = {
    C_S8_2_S16(-7),
    C_S9_2_S16(11)
};

static const s16 sArmCannonOffset_Left_HangingOnLedge_Frame1[2] = {
    C_S8_2_S16(-35),
    C_S9_2_S16(-8)
};

static const s16 sArmCannonOffset_Left_HangingOnLedge_Frame0[2] = {
    C_S8_2_S16(-32),
    C_S9_2_S16(-8)
};

static const s16 sArmCannonOffset_Left_PullingYourselfUpFromHanging_Frame1[2] = {
    C_S8_2_S16(-24),
    C_S9_2_S16(-8)
};

static const s16 sArmCannonOffset_Left_PullingYourselfUpFromHanging_Frame2[2] = {
    C_S8_2_S16(-16),
    C_S9_2_S16(-6)
};

static const s16 sArmCannonOffset_Left_PullingYourselfForwardFromHanging_Frame0[2] = {
    C_S8_2_S16(-12),
    C_S9_2_S16(-7)
};

static const s16 sArmCannonOffset_Left_PullingYourselfForwardFromHanging_Frame1[2] = {
    C_S8_2_S16(-10),
    C_S9_2_S16(-6)
};

static const s16 sArmCannonOffset_Left_PullingYourselfForwardFromHanging_Frame2[2] = {
    C_S8_2_S16(-9),
    C_S9_2_S16(-10)
};

static const s16 sArmCannonOffset_Left_PullingYourselfForwardFromHanging_Frame3[2] = {
    C_S8_2_S16(-10),
    C_S9_2_S16(-22)
};

static const s16 sArmCannonOffset_Right_HangingOnLedge_Frame2[2] = {
    C_S8_2_S16(-37),
    C_S9_2_S16(8)
};

static const s16 sArmCannonOffset_Right_HangingOnLedge_Frame1[2] = {
    C_S8_2_S16(-38),
    C_S9_2_S16(9)
};

static const s16 sArmCannonOffset_Right_HangingOnLedge_Frame0[2] = {
    C_S8_2_S16(-35),
    C_S9_2_S16(10)
};

static const s16 sArmCannonOffset_Right_PullingYourselfUpFromHanging_Frame1[2] = {
    C_S8_2_S16(-28),
    C_S9_2_S16(9)
};

static const s16 sArmCannonOffset_Right_PullingYourselfUpFromHanging_Frame2[2] = {
    C_S8_2_S16(-15),
    C_S9_2_S16(9)
};

static const s16 sArmCannonOffset_Right_PullingYourselfForwardFromHanging_Frame0[2] = {
    C_S8_2_S16(-13),
    C_S9_2_S16(7)
};

static const s16 sArmCannonOffset_Right_PullingYourselfForwardFromHanging_Frame1[2] = {
    C_S8_2_S16(-9),
    C_S9_2_S16(7)
};

static const s16 sArmCannonOffset_Right_PullingYourselfForwardFromHanging_Frame2[2] = {
    C_S8_2_S16(-8),
    C_S9_2_S16(10)
};

static const s16 sArmCannonOffset_Right_PullingYourselfForwardFromHanging_Frame3[2] = {
    C_S8_2_S16(-10),
    C_S9_2_S16(22)
};

static const s16 sArmCannonOffset_Left_PullingYourselfIntoMorphBallTunnel_Frame0[2] = {
    C_S8_2_S16(-7),
    C_S9_2_S16(-4)
};

static const s16 sArmCannonOffset_Right_PullingYourselfIntoMorphBallTunnel_Frame0[2] = {
    C_S8_2_S16(-7),
    C_S9_2_S16(4)
};

static const s16 sArmCannonOffset_Right_PullingYourselfIntoMorphBallTunnel_Frame1[2] = {
    C_S8_2_S16(-11),
    C_S9_2_S16(2)
};

static const s16 sArmCannonOffset_Left_MovingOnHorizontalLadder_Frame0[2] = {
    C_S8_2_S16(-9),
    C_S9_2_S16(-6)
};

static const s16 sArmCannonOffset_Left_MovingOnHorizontalLadder_Frame1[2] = {
    C_S8_2_S16(-19),
    C_S9_2_S16(-14)
};

static const s16 sArmCannonOffset_Left_MovingOnHorizontalLadder_Frame2[2] = {
    C_S8_2_S16(-37),
    C_S9_2_S16(-8)
};

static const s16 sArmCannonOffset_Left_MovingOnHorizontalLadder_Frame3[2] = {
    C_S8_2_S16(-37),
    C_S9_2_S16(-4)
};

static const s16 sArmCannonOffset_Left_MovingOnHorizontalLadder_Frame4[2] = {
    C_S8_2_S16(-37),
    C_S9_2_S16(-2)
};

static const s16 sArmCannonOffset_Left_MovingOnHorizontalLadder_Frame5[2] = {
    C_S8_2_S16(-37),
    C_S9_2_S16(4)
};

static const s16 sArmCannonOffset_Left_MovingOnHorizontalLadder_Frame6[2] = {
    C_S8_2_S16(-38),
    C_S9_2_S16(7)
};

static const s16 sArmCannonOffset_Left_MovingOnHorizontalLadder_Frame8[2] = {
    C_S8_2_S16(-11),
    C_S9_2_S16(3)
};

static const s16 sArmCannonOffset_Left_TurningAroundOnHorizontalLadder_Frame1[2] = {
    C_S8_2_S16(-9),
    C_S9_2_S16(-2)
};

static const s16 sArmCannonOffset_Right_TurningAroundOnHorizontalLadder_Frame2[2] = {
    C_S8_2_S16(-9),
    C_S9_2_S16(-1)
};

static const s16 sArmCannonOffset_Right_MovingOnHorizontalLadder_Frame0[2] = {
    C_S8_2_S16(-8),
    C_S9_2_S16(6)
};

static const s16 sArmCannonOffset_Right_MovingOnHorizontalLadder_Frame1[2] = {
    C_S8_2_S16(-30),
    C_S9_2_S16(15)
};

static const s16 sArmCannonOffset_Right_MovingOnHorizontalLadder_Frame2[2] = {
    C_S8_2_S16(-38),
    C_S9_2_S16(12)
};

static const s16 sArmCannonOffset_Right_MovingOnHorizontalLadder_Frame3[2] = {
    C_S8_2_S16(-38),
    C_S9_2_S16(8)
};

static const s16 sArmCannonOffset_Right_MovingOnHorizontalLadder_Frame4[2] = {
    C_S8_2_S16(-38),
    C_S9_2_S16(6)
};

static const s16 sArmCannonOffset_Right_MovingOnHorizontalLadder_Frame6[2] = {
    C_S8_2_S16(-37),
    C_S9_2_S16(-3)
};

static const s16 sArmCannonOffset_Right_MovingOnHorizontalLadder_Frame7[2] = {
    C_S8_2_S16(-37),
    C_S9_2_S16(-7)
};

static const s16 sArmCannonOffset_Right_MovingOnHorizontalLadder_Frame8[2] = {
    C_S8_2_S16(-18),
    C_S9_2_S16(3)
};

static const s16 sArmCannonOffset_Left_HangingOnHorizontalLadder_Frame0[2] = {
    C_S8_2_S16(-16),
    C_S9_2_S16(-17)
};

static const s16 sArmCannonOffset_Left_ShootingOnHorizontalLadder_Frame0[2] = {
    C_S8_2_S16(-16),
    C_S9_2_S16(-15)
};

static const s16 sArmCannonOffset_Left_DiagonalDown_HangingOnHorizontalLadder_Frame0[2] = {
    C_S8_2_S16(-7),
    C_S9_2_S16(-14)
};

static const s16 sArmCannonOffset_Left_DiagonalDown_ShootingOnHorizontalLadder_Frame0[2] = {
    C_S8_2_S16(-8),
    C_S9_2_S16(-12)
};

static const s16 sArmCannonOffset_Left_Down_DelayAfterShootingOnHorizontalLadder_Frame0[2] = {
    C_S8_2_S16(1),
    C_S9_2_S16(-4)
};

static const s16 sArmCannonOffset_Left_Down_ShootingOnHorizontalLadder_Frame0[2] = {
    C_S8_2_S16(-1),
    C_S9_2_S16(-4)
};

static const s16 sArmCannonOffset_Right_HangingOnHorizontalLadder_Frame0[2] = {
    C_S8_2_S16(-16),
    C_S9_2_S16(17)
};

static const s16 sArmCannonOffset_Right_ShootingOnHorizontalLadder_Frame0[2] = {
    C_S8_2_S16(-16),
    C_S9_2_S16(15)
};

static const s16 sArmCannonOffset_Right_DiagonalDown_HangingOnHorizontalLadder_Frame0[2] = {
    C_S8_2_S16(-7),
    C_S9_2_S16(14)
};

static const s16 sArmCannonOffset_Right_DiagonalDown_ShootingOnHorizontalLadder_Frame0[2] = {
    C_S8_2_S16(-8),
    C_S9_2_S16(12)
};

static const s16 sArmCannonOffset_Right_Down_DelayAfterShootingOnHorizontalLadder_Frame0[2] = {
    C_S8_2_S16(1),
    C_S9_2_S16(4)
};

static const s16 sArmCannonOffset_Right_Down_ShootingOnHorizontalLadder_Frame0[2] = {
    C_S8_2_S16(-1),
    C_S9_2_S16(4)
};

static const s16 sArmCannonOffset_Right_Up_HoldingYourArmCannonOutOnAVerticalLadder_Frame0[2] = {
    C_S8_2_S16(-41),
    C_S9_2_S16(7)
};

static const s16 sArmCannonOffset_Right_Up_ShootingOnVerticalLadder_Frame0[2] = {
    C_S8_2_S16(-39),
    C_S9_2_S16(7)
};

static const s16 sArmCannonOffset_Right_Down_HoldingYourArmCannonOutOnAVerticalLadder_Frame0[2] = {
    C_S8_2_S16(-4),
    C_S9_2_S16(7)
};

static const s16 sArmCannonOffset_Right_Down_ShootingOnVerticalLadder_Frame0[2] = {
    C_S8_2_S16(-6),
    C_S9_2_S16(7)
};

static const s16 sArmCannonOffset_Left_Up_HoldingYourArmCannonOutOnAVerticalLadder_Frame0[2] = {
    C_S8_2_S16(-41),
    C_S9_2_S16(-7)
};

static const s16 sArmCannonOffset_Left_Up_ShootingOnVerticalLadder_Frame0[2] = {
    C_S8_2_S16(-39),
    C_S9_2_S16(-7)
};

static const s16 sArmCannonOffset_Left_Down_HoldingYourArmCannonOutOnAVerticalLadder_Frame0[2] = {
    C_S8_2_S16(-2),
    C_S9_2_S16(-7)
};

static const s16 sArmCannonOffset_Left_Down_ShootingOnVerticalLadder_Frame0[2] = {
    C_S8_2_S16(-4),
    C_S9_2_S16(-7)
};

static const s16 sArmCannonOffset_Right_ReadyToJump_HangingOnLedge_Frame0[2] = {
    C_S8_2_S16(-30),
    C_S9_2_S16(8)
};

const struct ArmCannonAnimationData sArmCannonAnim_Left_HangingFromVerticalLadder[7] = {
    [0] = {
        .pOffset = sArmCannonOffset_Left_HangingFromVerticalLadder_Frame0,
        .pOam = sSamusOam_Empty
    },
    [1] = {
        .pOffset = sArmCannonOffset_Left_HangingFromVerticalLadder_Frame1,
        .pOam = sSamusOam_Empty
    },
    [2] = {
        .pOffset = sArmCannonOffset_Left_HangingFromVerticalLadder_Frame2,
        .pOam = sSamusOam_Empty
    },
    [3] = {
        .pOffset = sArmCannonOffset_Left_HangingFromVerticalLadder_Frame3,
        .pOam = sSamusOam_Empty
    },
    [4] = {
        .pOffset = sArmCannonOffset_Left_HangingFromVerticalLadder_Frame4,
        .pOam = sSamusOam_Empty
    },
    [5] = {
        .pOffset = sArmCannonOffset_Left_HangingFromVerticalLadder_Frame5,
        .pOam = sSamusOam_Empty
    },
    [6] = {
        .pOffset = sArmCannonOffset_Left_HangingFromVerticalLadder_Frame0,
        .pOam = sSamusOam_Empty
    }
};

const struct ArmCannonAnimationData sArmCannonAnim_Right_HangingFromVerticalLadder[19] = {
    [0] = {
        .pOffset = sArmCannonOffset_Right_HangingFromVerticalLadder_Frame0,
        .pOam = sSamusOam_Empty
    },
    [1] = {
        .pOffset = sArmCannonOffset_Right_HangingFromVerticalLadder_Frame1,
        .pOam = sSamusOam_Empty
    },
    [2] = {
        .pOffset = sArmCannonOffset_Right_HangingFromVerticalLadder_Frame2,
        .pOam = sSamusOam_Empty
    },
    [3] = {
        .pOffset = sArmCannonOffset_Right_HangingFromVerticalLadder_Frame3,
        .pOam = sSamusOam_Empty
    },
    [4] = {
        .pOffset = sArmCannonOffset_Right_HangingFromVerticalLadder_Frame4,
        .pOam = sSamusOam_Empty
    },
    [5] = {
        .pOffset = sArmCannonOffset_Right_HangingFromVerticalLadder_Frame5,
        .pOam = sSamusOam_Empty
    },
    [6] = {
        .pOffset = sArmCannonOffset_Right_HangingFromVerticalLadder_Frame0,
        .pOam = sSamusOam_Empty
    },
    [7] = {
        .pOffset = sArmCannonOffset_Left_HangingFromVerticalLadder_Frame5,
        .pOam = sSamusOam_Empty
    },
    [8] = {
        .pOffset = sArmCannonOffset_Left_HangingFromVerticalLadder_Frame4,
        .pOam = sSamusOam_Empty
    },
    [9] = {
        .pOffset = sArmCannonOffset_Left_HangingFromVerticalLadder_Frame3,
        .pOam = sSamusOam_Empty
    },
    [10] = {
        .pOffset = sArmCannonOffset_Left_HangingFromVerticalLadder_Frame2,
        .pOam = sSamusOam_Empty
    },
    [11] = {
        .pOffset = sArmCannonOffset_Left_HangingFromVerticalLadder_Frame1,
        .pOam = sSamusOam_Empty
    },
    [12] = {
        .pOffset = sArmCannonOffset_Left_HangingFromVerticalLadder_Frame0,
        .pOam = sSamusOam_Empty
    },
    [13] = {
        .pOffset = sArmCannonOffset_Right_HangingFromVerticalLadder_Frame5,
        .pOam = sSamusOam_Empty
    },
    [14] = {
        .pOffset = sArmCannonOffset_Right_HangingFromVerticalLadder_Frame4,
        .pOam = sSamusOam_Empty
    },
    [15] = {
        .pOffset = sArmCannonOffset_Right_HangingFromVerticalLadder_Frame3,
        .pOam = sSamusOam_Empty
    },
    [16] = {
        .pOffset = sArmCannonOffset_Right_HangingFromVerticalLadder_Frame2,
        .pOam = sSamusOam_Empty
    },
    [17] = {
        .pOffset = sArmCannonOffset_Right_HangingFromVerticalLadder_Frame1,
        .pOam = sSamusOam_Empty
    },
    [18] = {
        .pOffset = sArmCannonOffset_Right_HangingFromVerticalLadder_Frame0,
        .pOam = sSamusOam_Empty
    }
};

const struct ArmCannonAnimationData sArmCannonAnim_Left_StartingToHoldYourArmCannonOutOnAVerticalLadder[2] = {
    [0] = {
        .pOffset = sArmCannonOffset_Left_StartingToHoldYourArmCannonOutOnAVerticalLadder_Frame0,
        .pOam = sSamusOam_Empty
    },
    [1] = {
        .pOffset = sArmCannonOffset_Left_StartingToHoldYourArmCannonOutOnAVerticalLadder_Frame1,
        .pOam = sSamusOam_Empty
    }
};

const struct ArmCannonAnimationData sArmCannonAnim_Left_StartingToPutAwayYourArmCannonOutOnAVerticalLadder[2] = {
    [0] = {
        .pOffset = sArmCannonOffset_Left_StartingToHoldYourArmCannonOutOnAVerticalLadder_Frame1,
        .pOam = sSamusOam_Empty
    },
    [1] = {
        .pOffset = sArmCannonOffset_Left_StartingToHoldYourArmCannonOutOnAVerticalLadder_Frame0,
        .pOam = sSamusOam_Empty
    }
};

const struct ArmCannonAnimationData sArmCannonAnim_Left_DiagonalUp_HoldingYourArmCannonOutOnAVerticalLadder[1] = {
    [0] = {
        .pOffset = sArmCannonOffset_Left_DiagonalUp_HoldingYourArmCannonOutOnAVerticalLadder_Frame0,
        .pOam = sArmCannonOam_Left_DiagonalUp_HoldingYourArmCannonOutOnAVerticalLadder_Frame0
    }
};

const struct ArmCannonAnimationData sArmCannonAnim_Left_DiagonalUp_ShootingOnVerticalLadder[2] = {
    [0] = {
        .pOffset = sArmCannonOffset_Left_DiagonalUp_ShootingOnVerticalLadder_Frame0,
        .pOam = sArmCannonOam_Left_DiagonalUp_ShootingOnVerticalLadder_Frame0
    },
    [1] = {
        .pOffset = sArmCannonOffset_Left_DiagonalUp_HoldingYourArmCannonOutOnAVerticalLadder_Frame0,
        .pOam = sArmCannonOam_Left_DiagonalUp_HoldingYourArmCannonOutOnAVerticalLadder_Frame0
    }
};

const struct ArmCannonAnimationData sArmCannonAnim_Left_HoldingYourArmCannonOutOnAVerticalLadder[1] = {
    [0] = {
        .pOffset = sArmCannonOffset_Left_HoldingYourArmCannonOutOnAVerticalLadder_Frame0,
        .pOam = sArmCannonOam_Left_HoldingYourArmCannonOutOnAVerticalLadder_Frame0
    }
};

const struct ArmCannonAnimationData sArmCannonAnim_Left_ShootingOnVerticalLadder[2] = {
    [0] = {
        .pOffset = sArmCannonOffset_Left_ShootingOnVerticalLadder_Frame0,
        .pOam = sArmCannonOam_Left_ShootingOnVerticalLadder_Frame0
    },
    [1] = {
        .pOffset = sArmCannonOffset_Left_HoldingYourArmCannonOutOnAVerticalLadder_Frame0,
        .pOam = sArmCannonOam_Left_HoldingYourArmCannonOutOnAVerticalLadder_Frame0
    }
};

const struct ArmCannonAnimationData sArmCannonAnim_Left_DiagonalDown_HoldingYourArmCannonOutOnAVerticalLadder[1] = {
    [0] = {
        .pOffset = sArmCannonOffset_Left_DiagonalDown_HoldingYourArmCannonOutOnAVerticalLadder_Frame0,
        .pOam = sArmCannonOam_Left_DiagonalDown_HoldingYourArmCannonOutOnAVerticalLadder_Frame0
    }
};

const struct ArmCannonAnimationData sArmCannonAnim_Left_DiagonalDown_ShootingOnVerticalLadder[2] = {
    [0] = {
        .pOffset = sArmCannonOffset_Left_DiagonalDown_ShootingOnVerticalLadder_Frame0,
        .pOam = sArmCannonOam_Left_DiagonalDown_ShootingOnVerticalLadder_Frame0
    },
    [1] = {
        .pOffset = sArmCannonOffset_Left_DiagonalDown_HoldingYourArmCannonOutOnAVerticalLadder_Frame0,
        .pOam = sArmCannonOam_Left_DiagonalDown_HoldingYourArmCannonOutOnAVerticalLadder_Frame0
    }
};

const struct ArmCannonAnimationData sArmCannonAnim_Right_StartingToHoldYourArmCannonOutOnAVerticalLadder[2] = {
    [0] = {
        .pOffset = sArmCannonOffset_Right_StartingToHoldYourArmCannonOutOnAVerticalLadder_Frame0,
        .pOam = sSamusOam_Empty
    },
    [1] = {
        .pOffset = sArmCannonOffset_Right_StartingToHoldYourArmCannonOutOnAVerticalLadder_Frame1,
        .pOam = sSamusOam_Empty
    }
};

const struct ArmCannonAnimationData sArmCannonAnim_Right_StartingToPutAwayYourArmCannonOutOnAVerticalLadder[2] = {
    [0] = {
        .pOffset = sArmCannonOffset_Right_StartingToHoldYourArmCannonOutOnAVerticalLadder_Frame1,
        .pOam = sSamusOam_Empty
    },
    [1] = {
        .pOffset = sArmCannonOffset_Right_StartingToHoldYourArmCannonOutOnAVerticalLadder_Frame0,
        .pOam = sSamusOam_Empty
    }
};

const struct ArmCannonAnimationData sArmCannonAnim_Right_DiagonalUp_HoldingYourArmCannonOutOnAVerticalLadder[1] = {
    [0] = {
        .pOffset = sArmCannonOffset_Right_DiagonalUp_HoldingYourArmCannonOutOnAVerticalLadder_Frame0,
        .pOam = sArmCannonOam_Right_DiagonalUp_HoldingYourArmCannonOutOnAVerticalLadder_Frame0
    }
};

const struct ArmCannonAnimationData sArmCannonAnim_Right_DiagonalUp_ShootingOnVerticalLadder[2] = {
    [0] = {
        .pOffset = sArmCannonOffset_Right_DiagonalUp_ShootingOnVerticalLadder_Frame0,
        .pOam = sArmCannonOam_Right_DiagonalUp_ShootingOnVerticalLadder_Frame0
    },
    [1] = {
        .pOffset = sArmCannonOffset_Right_DiagonalUp_HoldingYourArmCannonOutOnAVerticalLadder_Frame0,
        .pOam = sArmCannonOam_Right_DiagonalUp_HoldingYourArmCannonOutOnAVerticalLadder_Frame0
    }
};

const struct ArmCannonAnimationData sArmCannonAnim_Right_HoldingYourArmCannonOutOnAVerticalLadder[1] = {
    [0] = {
        .pOffset = sArmCannonOffset_Right_HoldingYourArmCannonOutOnAVerticalLadder_Frame0,
        .pOam = sArmCannonOam_Right_HoldingYourArmCannonOutOnAVerticalLadder_Frame0
    }
};

const struct ArmCannonAnimationData sArmCannonAnim_Right_ShootingOnVerticalLadder[2] = {
    [0] = {
        .pOffset = sArmCannonOffset_Right_ShootingOnVerticalLadder_Frame0,
        .pOam = sArmCannonOam_Right_ShootingOnVerticalLadder_Frame0
    },
    [1] = {
        .pOffset = sArmCannonOffset_Right_HoldingYourArmCannonOutOnAVerticalLadder_Frame0,
        .pOam = sArmCannonOam_Right_HoldingYourArmCannonOutOnAVerticalLadder_Frame0
    }
};

const struct ArmCannonAnimationData sArmCannonAnim_Right_DiagonalDown_HoldingYourArmCannonOutOnAVerticalLadder[1] = {
    [0] = {
        .pOffset = sArmCannonOffset_Right_DiagonalDown_HoldingYourArmCannonOutOnAVerticalLadder_Frame0,
        .pOam = sArmCannonOam_Right_DiagonalDown_HoldingYourArmCannonOutOnAVerticalLadder_Frame0
    }
};

const struct ArmCannonAnimationData sArmCannonAnim_Right_DiagonalDown_ShootingOnVerticalLadder[2] = {
    [0] = {
        .pOffset = sArmCannonOffset_Right_DiagonalDown_ShootingOnVerticalLadder_Frame0,
        .pOam = sArmCannonOam_Right_DiagonalDown_ShootingOnVerticalLadder_Frame0
    },
    [1] = {
        .pOffset = sArmCannonOffset_Right_DiagonalDown_HoldingYourArmCannonOutOnAVerticalLadder_Frame0,
        .pOam = sArmCannonOam_Right_DiagonalDown_HoldingYourArmCannonOutOnAVerticalLadder_Frame0
    }
};

const struct ArmCannonAnimationData sArmCannonAnim_Left_StartingWallJump[2] = {
    [0] = {
        .pOffset = sArmCannonOffset_Left_StartingWallJump_Frame0,
        .pOam = sSamusOam_Empty
    },
    [1] = {
        .pOffset = sArmCannonOffset_Left_StartingWallJump_Frame1,
        .pOam = sSamusOam_Empty
    }
};

const struct ArmCannonAnimationData sArmCannonAnim_Right_StartingWallJump[2] = {
    [0] = {
        .pOffset = sArmCannonOffset_Right_StartingWallJump_Frame0,
        .pOam = sSamusOam_Empty
    },
    [1] = {
        .pOffset = sArmCannonOffset_Right_StartingWallJump_Frame1,
        .pOam = sSamusOam_Empty
    }
};

const struct ArmCannonAnimationData sArmCannonAnim_Left_HangingOnLedge[7] = {
    [0] = {
        .pOffset = sArmCannonOffset_Left_HangingOnLedge_Frame0,
        .pOam = sSamusOam_Empty
    },
    [1] = {
        .pOffset = sArmCannonOffset_Left_HangingOnLedge_Frame1,
        .pOam = sSamusOam_Empty
    },
    [2] = {
        .pOffset = sArmCannonOffset_Left_HangingOnLedge_Frame1,
        .pOam = sSamusOam_Empty
    },
    [3] = {
        .pOffset = sArmCannonOffset_Left_HangingOnLedge_Frame1,
        .pOam = sSamusOam_Empty
    },
    [4] = {
        .pOffset = sArmCannonOffset_Left_HangingOnLedge_Frame1,
        .pOam = sSamusOam_Empty
    },
    [5] = {
        .pOffset = sArmCannonOffset_Left_HangingOnLedge_Frame1,
        .pOam = sSamusOam_Empty
    },
    [6] = {
        .pOffset = sArmCannonOffset_Left_HangingOnLedge_Frame1,
        .pOam = sSamusOam_Empty
    }
};

const struct ArmCannonAnimationData sArmCannonAnim_Left_PullingYourselfUpFromHanging[3] = {
    [0] = {
        .pOffset = sArmCannonOffset_Left_HangingOnLedge_Frame0,
        .pOam = sSamusOam_Empty
    },
    [1] = {
        .pOffset = sArmCannonOffset_Left_PullingYourselfUpFromHanging_Frame1,
        .pOam = sSamusOam_Empty
    },
    [2] = {
        .pOffset = sArmCannonOffset_Left_PullingYourselfUpFromHanging_Frame2,
        .pOam = sSamusOam_Empty
    }
};

const struct ArmCannonAnimationData sArmCannonAnim_Left_PullingYourselfForwardFromHanging[4] = {
    [0] = {
        .pOffset = sArmCannonOffset_Left_PullingYourselfForwardFromHanging_Frame0,
        .pOam = sSamusOam_Empty
    },
    [1] = {
        .pOffset = sArmCannonOffset_Left_PullingYourselfForwardFromHanging_Frame1,
        .pOam = sSamusOam_Empty
    },
    [2] = {
        .pOffset = sArmCannonOffset_Left_PullingYourselfForwardFromHanging_Frame2,
        .pOam = sSamusOam_Empty
    },
    [3] = {
        .pOffset = sArmCannonOffset_Left_PullingYourselfForwardFromHanging_Frame3,
        .pOam = sSamusOam_Empty
    }
};

const struct ArmCannonAnimationData sArmCannonAnim_Left_PullingYourselfIntoMorphBallTunnel[1] = {
    [0] = {
        .pOffset = sArmCannonOffset_Left_PullingYourselfIntoMorphBallTunnel_Frame0,
        .pOam = sSamusOam_Empty
    }
};

const struct ArmCannonAnimationData sArmCannonAnim_Right_HangingOnLedge[7] = {
    [0] = {
        .pOffset = sArmCannonOffset_Right_HangingOnLedge_Frame0,
        .pOam = sSamusOam_Empty
    },
    [1] = {
        .pOffset = sArmCannonOffset_Right_HangingOnLedge_Frame1,
        .pOam = sSamusOam_Empty
    },
    [2] = {
        .pOffset = sArmCannonOffset_Right_HangingOnLedge_Frame2,
        .pOam = sSamusOam_Empty
    },
    [3] = {
        .pOffset = sArmCannonOffset_Right_HangingOnLedge_Frame1,
        .pOam = sSamusOam_Empty
    },
    [4] = {
        .pOffset = sArmCannonOffset_Right_HangingOnLedge_Frame1,
        .pOam = sSamusOam_Empty
    },
    [5] = {
        .pOffset = sArmCannonOffset_Right_HangingOnLedge_Frame1,
        .pOam = sSamusOam_Empty
    },
    [6] = {
        .pOffset = sArmCannonOffset_Right_HangingOnLedge_Frame1,
        .pOam = sSamusOam_Empty
    }
};

const struct ArmCannonAnimationData sArmCannonAnim_Right_PullingYourselfUpFromHanging[3] = {
    [0] = {
        .pOffset = sArmCannonOffset_Right_HangingOnLedge_Frame0,
        .pOam = sSamusOam_Empty
    },
    [1] = {
        .pOffset = sArmCannonOffset_Right_PullingYourselfUpFromHanging_Frame1,
        .pOam = sSamusOam_Empty
    },
    [2] = {
        .pOffset = sArmCannonOffset_Right_PullingYourselfUpFromHanging_Frame2,
        .pOam = sSamusOam_Empty
    }
};

const struct ArmCannonAnimationData sArmCannonAnim_Right_PullingYourselfForwardFromHanging[4] = {
    [0] = {
        .pOffset = sArmCannonOffset_Right_PullingYourselfForwardFromHanging_Frame0,
        .pOam = sSamusOam_Empty
    },
    [1] = {
        .pOffset = sArmCannonOffset_Right_PullingYourselfForwardFromHanging_Frame1,
        .pOam = sSamusOam_Empty
    },
    [2] = {
        .pOffset = sArmCannonOffset_Right_PullingYourselfForwardFromHanging_Frame2,
        .pOam = sSamusOam_Empty
    },
    [3] = {
        .pOffset = sArmCannonOffset_Right_PullingYourselfForwardFromHanging_Frame3,
        .pOam = sSamusOam_Empty
    }
};

const struct ArmCannonAnimationData sArmCannonAnim_Right_PullingYourselfIntoMorphBallTunnel[5] = {
    [0] = {
        .pOffset = sArmCannonOffset_Right_PullingYourselfIntoMorphBallTunnel_Frame0,
        .pOam = sSamusOam_Empty
    },
    [1] = {
        .pOffset = sArmCannonOffset_Right_PullingYourselfIntoMorphBallTunnel_Frame1,
        .pOam = sSamusOam_Empty
    },
    [2] = {
        .pOffset = sArmCannonOffset_Right_PullingYourselfIntoMorphBallTunnel_Frame1,
        .pOam = sSamusOam_Empty
    },
    [3] = {
        .pOffset = sArmCannonOffset_Right_PullingYourselfIntoMorphBallTunnel_Frame1,
        .pOam = sSamusOam_Empty
    },
    [4] = {
        .pOffset = sArmCannonOffset_Right_PullingYourselfIntoMorphBallTunnel_Frame1,
        .pOam = sSamusOam_Empty
    }
};

const struct ArmCannonAnimationData sArmCannonAnim_Left_MovingOnHorizontalLadder[10] = {
    [0] = {
        .pOffset = sArmCannonOffset_Left_MovingOnHorizontalLadder_Frame0,
        .pOam = sSamusOam_Empty
    },
    [1] = {
        .pOffset = sArmCannonOffset_Left_MovingOnHorizontalLadder_Frame1,
        .pOam = sSamusOam_Empty
    },
    [2] = {
        .pOffset = sArmCannonOffset_Left_MovingOnHorizontalLadder_Frame2,
        .pOam = sSamusOam_Empty
    },
    [3] = {
        .pOffset = sArmCannonOffset_Left_MovingOnHorizontalLadder_Frame3,
        .pOam = sSamusOam_Empty
    },
    [4] = {
        .pOffset = sArmCannonOffset_Left_MovingOnHorizontalLadder_Frame4,
        .pOam = sSamusOam_Empty
    },
    [5] = {
        .pOffset = sArmCannonOffset_Left_MovingOnHorizontalLadder_Frame5,
        .pOam = sSamusOam_Empty
    },
    [6] = {
        .pOffset = sArmCannonOffset_Left_MovingOnHorizontalLadder_Frame6,
        .pOam = sSamusOam_Empty
    },
    [7] = {
        .pOffset = sArmCannonOffset_Right_HangingFromVerticalLadder_Frame5,
        .pOam = sSamusOam_Empty
    },
    [8] = {
        .pOffset = sArmCannonOffset_Left_MovingOnHorizontalLadder_Frame8,
        .pOam = sSamusOam_Empty
    },
    [9] = {
        .pOffset = sArmCannonOffset_Right_PullingYourselfIntoMorphBallTunnel_Frame1,
        .pOam = sSamusOam_Empty
    }
};

const struct ArmCannonAnimationData sArmCannonAnim_Left_TurningAroundOnHorizontalLadder[2] = {
    [0] = {
        .pOffset = sArmCannonOffset_Left_PullingYourselfForwardFromHanging_Frame2,
        .pOam = sSamusOam_Empty
    },
    [1] = {
        .pOffset = sArmCannonOffset_Left_TurningAroundOnHorizontalLadder_Frame1,
        .pOam = sSamusOam_Empty
    }
};

const struct ArmCannonAnimationData sArmCannonAnim_Right_TurningAroundOnHorizontalLadder[6] = {
    [0] = {
        .pOffset = sArmCannonOffset_Left_TurningAroundOnHorizontalLadder_Frame1,
        .pOam = sSamusOam_Empty
    },
    [1] = {
        .pOffset = sArmCannonOffset_Left_PullingYourselfForwardFromHanging_Frame2,
        .pOam = sSamusOam_Empty
    },
    [2] = {
        .pOffset = sArmCannonOffset_Right_TurningAroundOnHorizontalLadder_Frame2,
        .pOam = sSamusOam_Empty
    },
    [3] = {
        .pOffset = sArmCannonOffset_Right_TurningAroundOnHorizontalLadder_Frame2,
        .pOam = sSamusOam_Empty
    },
    [4] = {
        .pOffset = sArmCannonOffset_Right_TurningAroundOnHorizontalLadder_Frame2,
        .pOam = sSamusOam_Empty
    },
    [5] = {
        .pOffset = sArmCannonOffset_Right_TurningAroundOnHorizontalLadder_Frame2,
        .pOam = sSamusOam_Empty
    }
};

const struct ArmCannonAnimationData sArmCannonAnim_Right_MovingOnHorizontalLadder[10] = {
    [0] = {
        .pOffset = sArmCannonOffset_Right_MovingOnHorizontalLadder_Frame0,
        .pOam = sSamusOam_Empty
    },
    [1] = {
        .pOffset = sArmCannonOffset_Right_MovingOnHorizontalLadder_Frame1,
        .pOam = sSamusOam_Empty
    },
    [2] = {
        .pOffset = sArmCannonOffset_Right_MovingOnHorizontalLadder_Frame2,
        .pOam = sSamusOam_Empty
    },
    [3] = {
        .pOffset = sArmCannonOffset_Right_MovingOnHorizontalLadder_Frame3,
        .pOam = sSamusOam_Empty
    },
    [4] = {
        .pOffset = sArmCannonOffset_Right_MovingOnHorizontalLadder_Frame4,
        .pOam = sSamusOam_Empty
    },
    [5] = {
        .pOffset = sArmCannonOffset_Left_MovingOnHorizontalLadder_Frame4,
        .pOam = sSamusOam_Empty
    },
    [6] = {
        .pOffset = sArmCannonOffset_Right_MovingOnHorizontalLadder_Frame6,
        .pOam = sSamusOam_Empty
    },
    [7] = {
        .pOffset = sArmCannonOffset_Right_MovingOnHorizontalLadder_Frame7,
        .pOam = sSamusOam_Empty
    },
    [8] = {
        .pOffset = sArmCannonOffset_Right_MovingOnHorizontalLadder_Frame8,
        .pOam = sSamusOam_Empty
    },
    [9] = {
        .pOffset = sArmCannonOffset_Right_TurningAroundOnHorizontalLadder_Frame2,
        .pOam = sSamusOam_Empty
    }
};

const struct ArmCannonAnimationData sArmCannonAnim_Left_HangingOnHorizontalLadder[1] = {
    [0] = {
        .pOffset = sArmCannonOffset_Left_HangingOnHorizontalLadder_Frame0,
        .pOam = sArmCannonOam_Left_HangingOnHorizontalLadder_Frame0
    }
};

const struct ArmCannonAnimationData sArmCannonAnim_Left_ShootingOnHorizontalLadder[2] = {
    [0] = {
        .pOffset = sArmCannonOffset_Left_ShootingOnHorizontalLadder_Frame0,
        .pOam = sArmCannonOam_Left_ShootingOnHorizontalLadder_Frame0
    },
    [1] = {
        .pOffset = sArmCannonOffset_Left_HangingOnHorizontalLadder_Frame0,
        .pOam = sArmCannonOam_Left_HangingOnHorizontalLadder_Frame0
    }
};

const struct ArmCannonAnimationData sArmCannonAnim_Left_DiagonalDown_HangingOnHorizontalLadder[1] = {
    [0] = {
        .pOffset = sArmCannonOffset_Left_DiagonalDown_HangingOnHorizontalLadder_Frame0,
        .pOam = sArmCannonOam_Left_DiagonalDown_HangingOnHorizontalLadder_Frame0
    }
};

const struct ArmCannonAnimationData sArmCannonAnim_Left_DiagonalDown_ShootingOnHorizontalLadder[2] = {
    [0] = {
        .pOffset = sArmCannonOffset_Left_DiagonalDown_ShootingOnHorizontalLadder_Frame0,
        .pOam = sArmCannonOam_Left_DiagonalDown_ShootingOnHorizontalLadder_Frame0
    },
    [1] = {
        .pOffset = sArmCannonOffset_Left_DiagonalDown_HangingOnHorizontalLadder_Frame0,
        .pOam = sArmCannonOam_Left_DiagonalDown_HangingOnHorizontalLadder_Frame0
    }
};

const struct ArmCannonAnimationData sArmCannonAnim_Left_Down_DelayAfterShootingOnHorizontalLadder[1] = {
    [0] = {
        .pOffset = sArmCannonOffset_Left_Down_DelayAfterShootingOnHorizontalLadder_Frame0,
        .pOam = sArmCannonOam_Left_Down_DelayAfterShootingOnHorizontalLadder_Frame0
    }
};

const struct ArmCannonAnimationData sArmCannonAnim_Left_Down_ShootingOnHorizontalLadder[2] = {
    [0] = {
        .pOffset = sArmCannonOffset_Left_Down_ShootingOnHorizontalLadder_Frame0,
        .pOam = sArmCannonOam_Left_Down_ShootingOnHorizontalLadder_Frame0
    },
    [1] = {
        .pOffset = sArmCannonOffset_Left_Down_DelayAfterShootingOnHorizontalLadder_Frame0,
        .pOam = sArmCannonOam_Left_Down_DelayAfterShootingOnHorizontalLadder_Frame0
    }
};

const struct ArmCannonAnimationData sArmCannonAnim_Right_HangingOnHorizontalLadder[1] = {
    [0] = {
        .pOffset = sArmCannonOffset_Right_HangingOnHorizontalLadder_Frame0,
        .pOam = sArmCannonOam_Right_HangingOnHorizontalLadder_Frame0
    }
};

const struct ArmCannonAnimationData sArmCannonAnim_Right_ShootingOnHorizontalLadder[2] = {
    [0] = {
        .pOffset = sArmCannonOffset_Right_ShootingOnHorizontalLadder_Frame0,
        .pOam = sArmCannonOam_Right_ShootingOnHorizontalLadder_Frame0
    },
    [1] = {
        .pOffset = sArmCannonOffset_Right_HangingOnHorizontalLadder_Frame0,
        .pOam = sArmCannonOam_Right_HangingOnHorizontalLadder_Frame0
    }
};

const struct ArmCannonAnimationData sArmCannonAnim_Right_DiagonalDown_HangingOnHorizontalLadder[1] = {
    [0] = {
        .pOffset = sArmCannonOffset_Right_DiagonalDown_HangingOnHorizontalLadder_Frame0,
        .pOam = sArmCannonOam_Right_DiagonalDown_HangingOnHorizontalLadder_Frame0
    }
};

const struct ArmCannonAnimationData sArmCannonAnim_Right_DiagonalDown_ShootingOnHorizontalLadder[2] = {
    [0] = {
        .pOffset = sArmCannonOffset_Right_DiagonalDown_ShootingOnHorizontalLadder_Frame0,
        .pOam = sArmCannonOam_Right_DiagonalDown_ShootingOnHorizontalLadder_Frame0
    },
    [1] = {
        .pOffset = sArmCannonOffset_Right_DiagonalDown_HangingOnHorizontalLadder_Frame0,
        .pOam = sArmCannonOam_Right_DiagonalDown_HangingOnHorizontalLadder_Frame0
    }
};

const struct ArmCannonAnimationData sArmCannonAnim_Right_Down_DelayAfterShootingOnHorizontalLadder[1] = {
    [0] = {
        .pOffset = sArmCannonOffset_Right_Down_DelayAfterShootingOnHorizontalLadder_Frame0,
        .pOam = sArmCannonOam_Right_Down_DelayAfterShootingOnHorizontalLadder_Frame0
    }
};

const struct ArmCannonAnimationData sArmCannonAnim_Right_Down_ShootingOnHorizontalLadder[2] = {
    [0] = {
        .pOffset = sArmCannonOffset_Right_Down_ShootingOnHorizontalLadder_Frame0,
        .pOam = sArmCannonOam_Right_Down_ShootingOnHorizontalLadder_Frame0
    },
    [1] = {
        .pOffset = sArmCannonOffset_Right_Down_DelayAfterShootingOnHorizontalLadder_Frame0,
        .pOam = sArmCannonOam_Right_Down_DelayAfterShootingOnHorizontalLadder_Frame0
    }
};

const struct ArmCannonAnimationData sArmCannonAnim_Left_PullingYourselfDownToStartHanging[2] = {
    [0] = {
        .pOffset = sArmCannonOffset_Left_PullingYourselfUpFromHanging_Frame1,
        .pOam = sSamusOam_Empty
    },
    [1] = {
        .pOffset = sArmCannonOffset_Left_HangingOnLedge_Frame0,
        .pOam = sSamusOam_Empty
    }
};

const struct ArmCannonAnimationData sArmCannonAnim_Right_PullingYourselfDownToStartHanging[10] = {
    [0] = {
        .pOffset = sArmCannonOffset_Right_PullingYourselfUpFromHanging_Frame1,
        .pOam = sSamusOam_Empty
    },
    [1] = {
        .pOffset = sArmCannonOffset_Right_HangingOnLedge_Frame0,
        .pOam = sSamusOam_Empty
    },
    [2] = {
        .pOffset = sArmCannonOffset_Left_HangingOnLedge_Frame1,
        .pOam = sSamusOam_Empty
    },
    [3] = {
        .pOffset = sArmCannonOffset_Left_HangingOnLedge_Frame1,
        .pOam = sSamusOam_Empty
    },
    [4] = {
        .pOffset = sArmCannonOffset_Left_HangingOnLedge_Frame1,
        .pOam = sSamusOam_Empty
    },
    [5] = {
        .pOffset = sArmCannonOffset_Left_HangingOnLedge_Frame1,
        .pOam = sSamusOam_Empty
    },
    [6] = {
        .pOffset = sArmCannonOffset_Right_HangingOnLedge_Frame1,
        .pOam = sSamusOam_Empty
    },
    [7] = {
        .pOffset = sArmCannonOffset_Right_HangingOnLedge_Frame1,
        .pOam = sSamusOam_Empty
    },
    [8] = {
        .pOffset = sArmCannonOffset_Right_HangingOnLedge_Frame1,
        .pOam = sSamusOam_Empty
    },
    [9] = {
        .pOffset = sArmCannonOffset_Right_HangingOnLedge_Frame1,
        .pOam = sSamusOam_Empty
    }
};

const struct ArmCannonAnimationData sArmCannonAnim_Right_Up_HoldingYourArmCannonOutOnAVerticalLadder[1] = {
    [0] = {
        .pOffset = sArmCannonOffset_Right_Up_HoldingYourArmCannonOutOnAVerticalLadder_Frame0,
        .pOam = sArmCannonOam_Right_Up_HoldingYourArmCannonOutOnAVerticalLadder_Frame0
    }
};

const struct ArmCannonAnimationData sArmCannonAnim_Right_Up_ShootingOnVerticalLadder[2] = {
    [0] = {
        .pOffset = sArmCannonOffset_Right_Up_ShootingOnVerticalLadder_Frame0,
        .pOam = sArmCannonOam_Right_Up_ShootingOnVerticalLadder_Frame0
    },
    [1] = {
        .pOffset = sArmCannonOffset_Right_Up_HoldingYourArmCannonOutOnAVerticalLadder_Frame0,
        .pOam = sArmCannonOam_Right_Up_HoldingYourArmCannonOutOnAVerticalLadder_Frame0
    }
};

const struct ArmCannonAnimationData sArmCannonAnim_Right_Down_HoldingYourArmCannonOutOnAVerticalLadder[1] = {
    [0] = {
        .pOffset = sArmCannonOffset_Right_Down_HoldingYourArmCannonOutOnAVerticalLadder_Frame0,
        .pOam = sArmCannonOam_Right_Down_HoldingYourArmCannonOutOnAVerticalLadder_Frame0
    }
};

const struct ArmCannonAnimationData sArmCannonAnim_Right_Down_ShootingOnVerticalLadder[2] = {
    [0] = {
        .pOffset = sArmCannonOffset_Right_Down_ShootingOnVerticalLadder_Frame0,
        .pOam = sArmCannonOam_Right_Down_ShootingOnVerticalLadder_Frame0
    },
    [1] = {
        .pOffset = sArmCannonOffset_Right_Down_HoldingYourArmCannonOutOnAVerticalLadder_Frame0,
        .pOam = sArmCannonOam_Right_Down_HoldingYourArmCannonOutOnAVerticalLadder_Frame0
    }
};

const struct ArmCannonAnimationData sArmCannonAnim_Left_Up_HoldingYourArmCannonOutOnAVerticalLadder[1] = {
    [0] = {
        .pOffset = sArmCannonOffset_Left_Up_HoldingYourArmCannonOutOnAVerticalLadder_Frame0,
        .pOam = sArmCannonOam_Left_Up_HoldingYourArmCannonOutOnAVerticalLadder_Frame0
    }
};

const struct ArmCannonAnimationData sArmCannonAnim_Left_Up_ShootingOnVerticalLadder[2] = {
    [0] = {
        .pOffset = sArmCannonOffset_Left_Up_ShootingOnVerticalLadder_Frame0,
        .pOam = sArmCannonOam_Left_Up_ShootingOnVerticalLadder_Frame0
    },
    [1] = {
        .pOffset = sArmCannonOffset_Left_Up_HoldingYourArmCannonOutOnAVerticalLadder_Frame0,
        .pOam = sArmCannonOam_Left_Up_HoldingYourArmCannonOutOnAVerticalLadder_Frame0
    }
};

const struct ArmCannonAnimationData sArmCannonAnim_Left_Down_HoldingYourArmCannonOutOnAVerticalLadder[1] = {
    [0] = {
        .pOffset = sArmCannonOffset_Left_Down_HoldingYourArmCannonOutOnAVerticalLadder_Frame0,
        .pOam = sArmCannonOam_Left_Down_HoldingYourArmCannonOutOnAVerticalLadder_Frame0
    }
};

const struct ArmCannonAnimationData sArmCannonAnim_Left_Down_ShootingOnVerticalLadder[2] = {
    [0] = {
        .pOffset = sArmCannonOffset_Left_Down_ShootingOnVerticalLadder_Frame0,
        .pOam = sArmCannonOam_Left_Down_ShootingOnVerticalLadder_Frame0
    },
    [1] = {
        .pOffset = sArmCannonOffset_Left_Down_HoldingYourArmCannonOutOnAVerticalLadder_Frame0,
        .pOam = sArmCannonOam_Left_Down_HoldingYourArmCannonOutOnAVerticalLadder_Frame0
    }
};

const struct ArmCannonAnimationData sArmCannonAnim_Left_ReadyToJump_HangingOnLedge[7] = {
    [0] = {
        .pOffset = sArmCannonOffset_Left_HangingOnLedge_Frame0,
        .pOam = sSamusOam_Empty
    },
    [1] = {
        .pOffset = sArmCannonOffset_Left_HangingOnLedge_Frame0,
        .pOam = sSamusOam_Empty
    },
    [2] = {
        .pOffset = sArmCannonOffset_Left_HangingOnLedge_Frame0,
        .pOam = sSamusOam_Empty
    },
    [3] = {
        .pOffset = sArmCannonOffset_Left_HangingOnLedge_Frame0,
        .pOam = sSamusOam_Empty
    },
    [4] = {
        .pOffset = sArmCannonOffset_Left_HangingOnLedge_Frame0,
        .pOam = sSamusOam_Empty
    },
    [5] = {
        .pOffset = sArmCannonOffset_Left_HangingOnLedge_Frame0,
        .pOam = sSamusOam_Empty
    },
    [6] = {
        .pOffset = sArmCannonOffset_Left_HangingOnLedge_Frame0,
        .pOam = sSamusOam_Empty
    }
};

const struct ArmCannonAnimationData sArmCannonAnim_Right_ReadyToJump_HangingOnLedge[7] = {
    [0] = {
        .pOffset = sArmCannonOffset_Right_ReadyToJump_HangingOnLedge_Frame0,
        .pOam = sSamusOam_Empty
    },
    [1] = {
        .pOffset = sArmCannonOffset_Right_ReadyToJump_HangingOnLedge_Frame0,
        .pOam = sSamusOam_Empty
    },
    [2] = {
        .pOffset = sArmCannonOffset_Right_ReadyToJump_HangingOnLedge_Frame0,
        .pOam = sSamusOam_Empty
    },
    [3] = {
        .pOffset = sArmCannonOffset_Right_ReadyToJump_HangingOnLedge_Frame0,
        .pOam = sSamusOam_Empty
    },
    [4] = {
        .pOffset = sArmCannonOffset_Right_ReadyToJump_HangingOnLedge_Frame0,
        .pOam = sSamusOam_Empty
    },
    [5] = {
        .pOffset = sArmCannonOffset_Right_ReadyToJump_HangingOnLedge_Frame0,
        .pOam = sSamusOam_Empty
    },
    [6] = {
        .pOffset = sArmCannonOffset_Right_ReadyToJump_HangingOnLedge_Frame0,
        .pOam = sSamusOam_Empty
    }
};

static const s16 sArmCannonOffset_Left_SpaceJumping_Frame0[2] = {
    C_S8_2_S16(-11),
    C_S9_2_S16(0)
};

const struct ArmCannonAnimationData sArmCannonAnim_Left_SpaceJumping[8] = {
    [0] = {
        .pOffset = sArmCannonOffset_Left_SpaceJumping_Frame0,
        .pOam = sSamusOam_Empty
    },
    [1] = {
        .pOffset = sArmCannonOffset_Empty,
        .pOam = sSamusOam_Empty
    },
    [2] = {
        .pOffset = sArmCannonOffset_Empty,
        .pOam = sSamusOam_Empty
    },
    [3] = {
        .pOffset = sArmCannonOffset_Empty,
        .pOam = sSamusOam_Empty
    },
    [4] = {
        .pOffset = sArmCannonOffset_Empty,
        .pOam = sSamusOam_Empty
    },
    [5] = {
        .pOffset = sArmCannonOffset_Empty,
        .pOam = sSamusOam_Empty
    },
    [6] = {
        .pOffset = sArmCannonOffset_Empty,
        .pOam = sSamusOam_Empty
    },
    [7] = {
        .pOffset = sArmCannonOffset_Empty,
        .pOam = sSamusOam_Empty
    }
};

const struct ArmCannonAnimationData sArmCannonAnim_Right_SpaceJumping[8] = {
    [0] = {
        .pOffset = sArmCannonOffset_Empty,
        .pOam = sSamusOam_Empty
    },
    [1] = {
        .pOffset = sArmCannonOffset_Empty,
        .pOam = sSamusOam_Empty
    },
    [2] = {
        .pOffset = sArmCannonOffset_Empty,
        .pOam = sSamusOam_Empty
    },
    [3] = {
        .pOffset = sArmCannonOffset_Empty,
        .pOam = sSamusOam_Empty
    },
    [4] = {
        .pOffset = sArmCannonOffset_Empty,
        .pOam = sSamusOam_Empty
    },
    [5] = {
        .pOffset = sArmCannonOffset_Empty,
        .pOam = sSamusOam_Empty
    },
    [6] = {
        .pOffset = sArmCannonOffset_Empty,
        .pOam = sSamusOam_Empty
    },
    [7] = {
        .pOffset = sArmCannonOffset_Empty,
        .pOam = sSamusOam_Empty
    }
};

const struct ArmCannonAnimationData sArmCannonAnim_Left_ScrewAttacking[16] = {
    [0] = {
        .pOffset = sArmCannonOffset_Empty,
        .pOam = sSamusOam_Empty
    },
    [1] = {
        .pOffset = sArmCannonOffset_Empty,
        .pOam = sSamusOam_Empty
    },
    [2] = {
        .pOffset = sArmCannonOffset_Empty,
        .pOam = sSamusOam_Empty
    },
    [3] = {
        .pOffset = sArmCannonOffset_Empty,
        .pOam = sSamusOam_Empty
    },
    [4] = {
        .pOffset = sArmCannonOffset_Empty,
        .pOam = sSamusOam_Empty
    },
    [5] = {
        .pOffset = sArmCannonOffset_Empty,
        .pOam = sSamusOam_Empty
    },
    [6] = {
        .pOffset = sArmCannonOffset_Empty,
        .pOam = sSamusOam_Empty
    },
    [7] = {
        .pOffset = sArmCannonOffset_Empty,
        .pOam = sSamusOam_Empty
    },
    [8] = {
        .pOffset = sArmCannonOffset_Empty,
        .pOam = sSamusOam_Empty
    },
    [9] = {
        .pOffset = sArmCannonOffset_Empty,
        .pOam = sSamusOam_Empty
    },
    [10] = {
        .pOffset = sArmCannonOffset_Empty,
        .pOam = sSamusOam_Empty
    },
    [11] = {
        .pOffset = sArmCannonOffset_Empty,
        .pOam = sSamusOam_Empty
    },
    [12] = {
        .pOffset = sArmCannonOffset_Empty,
        .pOam = sSamusOam_Empty
    },
    [13] = {
        .pOffset = sArmCannonOffset_Empty,
        .pOam = sSamusOam_Empty
    },
    [14] = {
        .pOffset = sArmCannonOffset_Empty,
        .pOam = sSamusOam_Empty
    },
    [15] = {
        .pOffset = sArmCannonOffset_Empty,
        .pOam = sSamusOam_Empty
    }
};

const struct ArmCannonAnimationData sArmCannonAnim_Right_ScrewAttacking[16] = {
    [0] = {
        .pOffset = sArmCannonOffset_Empty,
        .pOam = sSamusOam_Empty
    },
    [1] = {
        .pOffset = sArmCannonOffset_Empty,
        .pOam = sSamusOam_Empty
    },
    [2] = {
        .pOffset = sArmCannonOffset_Empty,
        .pOam = sSamusOam_Empty
    },
    [3] = {
        .pOffset = sArmCannonOffset_Empty,
        .pOam = sSamusOam_Empty
    },
    [4] = {
        .pOffset = sArmCannonOffset_Empty,
        .pOam = sSamusOam_Empty
    },
    [5] = {
        .pOffset = sArmCannonOffset_Empty,
        .pOam = sSamusOam_Empty
    },
    [6] = {
        .pOffset = sArmCannonOffset_Empty,
        .pOam = sSamusOam_Empty
    },
    [7] = {
        .pOffset = sArmCannonOffset_Empty,
        .pOam = sSamusOam_Empty
    },
    [8] = {
        .pOffset = sArmCannonOffset_Empty,
        .pOam = sSamusOam_Empty
    },
    [9] = {
        .pOffset = sArmCannonOffset_Empty,
        .pOam = sSamusOam_Empty
    },
    [10] = {
        .pOffset = sArmCannonOffset_Empty,
        .pOam = sSamusOam_Empty
    },
    [11] = {
        .pOffset = sArmCannonOffset_Empty,
        .pOam = sSamusOam_Empty
    },
    [12] = {
        .pOffset = sArmCannonOffset_Empty,
        .pOam = sSamusOam_Empty
    },
    [13] = {
        .pOffset = sArmCannonOffset_Empty,
        .pOam = sSamusOam_Empty
    },
    [14] = {
        .pOffset = sArmCannonOffset_Empty,
        .pOam = sSamusOam_Empty
    },
    [15] = {
        .pOffset = sArmCannonOffset_Empty,
        .pOam = sSamusOam_Empty
    }
};

static const u16 sSamusEffectAnim_Left_ScrewAttacking_Frame0[] = {
    2,
    OAM_ENTRY(-14, -27, OAM_DIMS_32x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(-14, -11, OAM_DIMS_32x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sSamusEffectAnim_Left_ScrewAttacking_Frame1[] = {
    2,
    OAM_ENTRY(-14, -27, OAM_DIMS_32x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(-14, -11, OAM_DIMS_32x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sSamusEffectAnim_Left_ScrewAttacking_Frame2[] = {
    2,
    OAM_ENTRY(-13, -25, OAM_DIMS_32x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(-13, -9, OAM_DIMS_32x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sSamusEffectAnim_Left_ScrewAttacking_Frame3[] = {
    4,
    OAM_ENTRY(-15, -31, OAM_DIMS_32x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(-13, -15, OAM_DIMS_8x8, OAM_NO_FLIP, 0x44, 1, 0),
    OAM_ENTRY(3, -15, OAM_DIMS_16x16, OAM_NO_FLIP, 0x46, 1, 0),
    OAM_ENTRY(-6, 1, OAM_DIMS_16x8, OAM_NO_FLIP, 0x64, 1, 0)
};

static const u16 sSamusEffectAnim_Right_ScrewAttacking_Frame0[] = {
    2,
    OAM_ENTRY(-18, -27, OAM_DIMS_32x16, OAM_X_FLIP, 0x40, 1, 0),
    OAM_ENTRY(-18, -11, OAM_DIMS_32x16, OAM_X_FLIP, 0x44, 1, 0)
};

static const u16 sSamusEffectAnim_Right_ScrewAttacking_Frame1[] = {
    2,
    OAM_ENTRY(-18, -27, OAM_DIMS_32x16, OAM_X_FLIP, 0x40, 1, 0),
    OAM_ENTRY(-18, -11, OAM_DIMS_32x16, OAM_X_FLIP, 0x44, 1, 0)
};

static const u16 sSamusEffectAnim_Right_ScrewAttacking_Frame2[] = {
    2,
    OAM_ENTRY(-19, -25, OAM_DIMS_32x16, OAM_X_FLIP, 0x40, 1, 0),
    OAM_ENTRY(-19, -9, OAM_DIMS_32x16, OAM_X_FLIP, 0x44, 1, 0)
};

static const u16 sSamusEffectAnim_Right_ScrewAttacking_Frame3[] = {
    4,
    OAM_ENTRY(-17, -31, OAM_DIMS_32x16, OAM_X_FLIP, 0x40, 1, 0),
    OAM_ENTRY(5, -15, OAM_DIMS_8x8, OAM_X_FLIP, 0x44, 1, 0),
    OAM_ENTRY(-19, -15, OAM_DIMS_16x16, OAM_X_FLIP, 0x46, 1, 0),
    OAM_ENTRY(-10, 1, OAM_DIMS_16x8, OAM_X_FLIP, 0x64, 1, 0)
};

const struct FrameData sSamusEffectAnim_Left_ScrewAttacking[5] = {
    [0] = {
        .pFrame = sSamusEffectAnim_Left_ScrewAttacking_Frame0,
        .timer = 2
    },
    [1] = {
        .pFrame = sSamusEffectAnim_Left_ScrewAttacking_Frame1,
        .timer = 2
    },
    [2] = {
        .pFrame = sSamusEffectAnim_Left_ScrewAttacking_Frame2,
        .timer = 2
    },
    [3] = {
        .pFrame = sSamusEffectAnim_Left_ScrewAttacking_Frame3,
        .timer = 2
    },
    [4] = FRAME_DATA_TERMINATOR
};

const struct FrameData sSamusEffectAnim_Right_ScrewAttacking[5] = {
    [0] = {
        .pFrame = sSamusEffectAnim_Right_ScrewAttacking_Frame0,
        .timer = 2
    },
    [1] = {
        .pFrame = sSamusEffectAnim_Right_ScrewAttacking_Frame1,
        .timer = 2
    },
    [2] = {
        .pFrame = sSamusEffectAnim_Right_ScrewAttacking_Frame2,
        .timer = 2
    },
    [3] = {
        .pFrame = sSamusEffectAnim_Right_ScrewAttacking_Frame3,
        .timer = 2
    },
    [4] = FRAME_DATA_TERMINATOR
};

static const s16 sArmCannonOffset_Left_Dying_Frame0[2] = {
    C_S8_2_S16(-11),
    C_S9_2_S16(-11)
};

static const s16 sArmCannonOffset_Right_Dying_Frame0[2] = {
    C_S8_2_S16(-11),
    C_S9_2_S16(11)
};

const struct ArmCannonAnimationData sArmCannonAnim_Left_Dying[9] = {
    [0] = {
        .pOffset = sArmCannonOffset_Left_Dying_Frame0,
        .pOam = sSamusOam_Empty
    },
    [1] = {
        .pOffset = sArmCannonOffset_Left_Dying_Frame0,
        .pOam = sSamusOam_Empty
    },
    [2] = {
        .pOffset = sArmCannonOffset_Left_Dying_Frame0,
        .pOam = sSamusOam_Empty
    },
    [3] = {
        .pOffset = sArmCannonOffset_Left_Dying_Frame0,
        .pOam = sSamusOam_Empty
    },
    [4] = {
        .pOffset = sArmCannonOffset_Left_Dying_Frame0,
        .pOam = sSamusOam_Empty
    },
    [5] = {
        .pOffset = sArmCannonOffset_Left_Dying_Frame0,
        .pOam = sSamusOam_Empty
    },
    [6] = {
        .pOffset = sArmCannonOffset_Left_Dying_Frame0,
        .pOam = sSamusOam_Empty
    },
    [7] = {
        .pOffset = sArmCannonOffset_Left_Dying_Frame0,
        .pOam = sSamusOam_Empty
    },
    [8] = {
        .pOffset = sArmCannonOffset_Left_Dying_Frame0,
        .pOam = sSamusOam_Empty
    }
};

const struct ArmCannonAnimationData sArmCannonAnim_Right_Dying[9] = {
    [0] = {
        .pOffset = sArmCannonOffset_Right_Dying_Frame0,
        .pOam = sSamusOam_Empty
    },
    [1] = {
        .pOffset = sArmCannonOffset_Right_Dying_Frame0,
        .pOam = sSamusOam_Empty
    },
    [2] = {
        .pOffset = sArmCannonOffset_Right_Dying_Frame0,
        .pOam = sSamusOam_Empty
    },
    [3] = {
        .pOffset = sArmCannonOffset_Right_Dying_Frame0,
        .pOam = sSamusOam_Empty
    },
    [4] = {
        .pOffset = sArmCannonOffset_Right_Dying_Frame0,
        .pOam = sSamusOam_Empty
    },
    [5] = {
        .pOffset = sArmCannonOffset_Right_Dying_Frame0,
        .pOam = sSamusOam_Empty
    },
    [6] = {
        .pOffset = sArmCannonOffset_Right_Dying_Frame0,
        .pOam = sSamusOam_Empty
    },
    [7] = {
        .pOffset = sArmCannonOffset_Right_Dying_Frame0,
        .pOam = sSamusOam_Empty
    },
    [8] = {
        .pOffset = sArmCannonOffset_Right_Dying_Frame0,
        .pOam = sSamusOam_Empty
    }
};

const struct ArmCannonAnimationData sArmCannonAnim_LoadingSave[28] = {
    [0] = {
        .pOffset = sArmCannonOffset_Left_Dying_Frame0,
        .pOam = sSamusOam_Empty
    },
    [1] = {
        .pOffset = sArmCannonOffset_Left_Dying_Frame0,
        .pOam = sSamusOam_Empty
    },
    [2] = {
        .pOffset = sArmCannonOffset_Left_Dying_Frame0,
        .pOam = sSamusOam_Empty
    },
    [3] = {
        .pOffset = sArmCannonOffset_Left_Dying_Frame0,
        .pOam = sSamusOam_Empty
    },
    [4] = {
        .pOffset = sArmCannonOffset_Left_Dying_Frame0,
        .pOam = sSamusOam_Empty
    },
    [5] = {
        .pOffset = sArmCannonOffset_Left_Dying_Frame0,
        .pOam = sSamusOam_Empty
    },
    [6] = {
        .pOffset = sArmCannonOffset_Left_Dying_Frame0,
        .pOam = sSamusOam_Empty
    },
    [7] = {
        .pOffset = sArmCannonOffset_Left_Dying_Frame0,
        .pOam = sSamusOam_Empty
    },
    [8] = {
        .pOffset = sArmCannonOffset_Left_Dying_Frame0,
        .pOam = sSamusOam_Empty
    },
    [9] = {
        .pOffset = sArmCannonOffset_Left_Dying_Frame0,
        .pOam = sSamusOam_Empty
    },
    [10] = {
        .pOffset = sArmCannonOffset_Left_Dying_Frame0,
        .pOam = sSamusOam_Empty
    },
    [11] = {
        .pOffset = sArmCannonOffset_Left_Dying_Frame0,
        .pOam = sSamusOam_Empty
    },
    [12] = {
        .pOffset = sArmCannonOffset_Left_Dying_Frame0,
        .pOam = sSamusOam_Empty
    },
    [13] = {
        .pOffset = sArmCannonOffset_Left_Dying_Frame0,
        .pOam = sSamusOam_Empty
    },
    [14] = {
        .pOffset = sArmCannonOffset_Left_Dying_Frame0,
        .pOam = sSamusOam_Empty
    },
    [15] = {
        .pOffset = sArmCannonOffset_Left_Dying_Frame0,
        .pOam = sSamusOam_Empty
    },
    [16] = {
        .pOffset = sArmCannonOffset_Left_Dying_Frame0,
        .pOam = sSamusOam_Empty
    },
    [17] = {
        .pOffset = sArmCannonOffset_Left_Dying_Frame0,
        .pOam = sSamusOam_Empty
    },
    [18] = {
        .pOffset = sArmCannonOffset_Left_Dying_Frame0,
        .pOam = sSamusOam_Empty
    },
    [19] = {
        .pOffset = sArmCannonOffset_Left_Dying_Frame0,
        .pOam = sSamusOam_Empty
    },
    [20] = {
        .pOffset = sArmCannonOffset_Left_Dying_Frame0,
        .pOam = sSamusOam_Empty
    },
    [21] = {
        .pOffset = sArmCannonOffset_Left_Dying_Frame0,
        .pOam = sSamusOam_Empty
    },
    [22] = {
        .pOffset = sArmCannonOffset_Left_Dying_Frame0,
        .pOam = sSamusOam_Empty
    },
    [23] = {
        .pOffset = sArmCannonOffset_Left_Dying_Frame0,
        .pOam = sSamusOam_Empty
    },
    [24] = {
        .pOffset = sArmCannonOffset_Left_Dying_Frame0,
        .pOam = sSamusOam_Empty
    },
    [25] = {
        .pOffset = sArmCannonOffset_Left_Dying_Frame0,
        .pOam = sSamusOam_Empty
    },
    [26] = {
        .pOffset = sArmCannonOffset_Left_Dying_Frame0,
        .pOam = sSamusOam_Empty
    },
    [27] = {
        .pOffset = sArmCannonOffset_Left_Dying_Frame0,
        .pOam = sSamusOam_Empty
    }
};

static const u16 sSamusEffectAnim_Left_Dying_Frame0[] = {
    2,
    OAM_ENTRY(-16, -32, OAM_DIMS_32x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(-16, -16, OAM_DIMS_32x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sSamusEffectAnim_Left_Dying_Frame1[] = {
    2,
    OAM_ENTRY(-16, -32, OAM_DIMS_32x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(-16, -16, OAM_DIMS_32x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sSamusEffectAnim_Left_Dying_Frame2[] = {
    3,
    OAM_ENTRY(-16, -32, OAM_DIMS_32x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(-16, -16, OAM_DIMS_32x16, OAM_NO_FLIP, 0x44, 1, 0),
    OAM_ENTRY(-10, -40, OAM_DIMS_16x8, OAM_NO_FLIP, 0x48, 1, 0)
};

static const u16 sSamusEffectAnim_Left_Dying_Frame3[] = {
    3,
    OAM_ENTRY(-16, -33, OAM_DIMS_32x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(-16, -17, OAM_DIMS_32x16, OAM_NO_FLIP, 0x44, 1, 0),
    OAM_ENTRY(-1, -41, OAM_DIMS_16x8, OAM_NO_FLIP, 0x68, 1, 0)
};

static const u16 sSamusEffectAnim_Left_Dying_Frame4[] = {
    3,
    OAM_ENTRY(-16, -33, OAM_DIMS_32x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(-16, -17, OAM_DIMS_32x16, OAM_NO_FLIP, 0x44, 1, 0),
    OAM_ENTRY(0, -41, OAM_DIMS_8x8, OAM_NO_FLIP, 0x4a, 1, 0)
};

static const u16 sSamusEffectAnim_Left_Dying_Frame5[] = {
    2,
    OAM_ENTRY(-15, -32, OAM_DIMS_32x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(-15, -16, OAM_DIMS_32x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sSamusEffectAnim_Right_Dying_Frame0[] = {
    2,
    OAM_ENTRY(-16, -32, OAM_DIMS_32x16, OAM_X_FLIP, 0x40, 1, 0),
    OAM_ENTRY(-16, -16, OAM_DIMS_32x16, OAM_X_FLIP, 0x44, 1, 0)
};

static const u16 sSamusEffectAnim_Right_Dying_Frame1[] = {
    2,
    OAM_ENTRY(-16, -32, OAM_DIMS_32x16, OAM_X_FLIP, 0x40, 1, 0),
    OAM_ENTRY(-16, -16, OAM_DIMS_32x16, OAM_X_FLIP, 0x44, 1, 0)
};

static const u16 sSamusEffectAnim_Right_Dying_Frame2[] = {
    3,
    OAM_ENTRY(-16, -32, OAM_DIMS_32x16, OAM_X_FLIP, 0x40, 1, 0),
    OAM_ENTRY(-16, -16, OAM_DIMS_32x16, OAM_X_FLIP, 0x44, 1, 0),
    OAM_ENTRY(-6, -40, OAM_DIMS_16x8, OAM_X_FLIP, 0x48, 1, 0)
};

static const u16 sSamusEffectAnim_Right_Dying_Frame3[] = {
    3,
    OAM_ENTRY(-16, -33, OAM_DIMS_32x16, OAM_X_FLIP, 0x40, 1, 0),
    OAM_ENTRY(-16, -17, OAM_DIMS_32x16, OAM_X_FLIP, 0x44, 1, 0),
    OAM_ENTRY(-15, -41, OAM_DIMS_16x8, OAM_X_FLIP, 0x68, 1, 0)
};

static const u16 sSamusEffectAnim_Right_Dying_Frame4[] = {
    3,
    OAM_ENTRY(-16, -33, OAM_DIMS_32x16, OAM_X_FLIP, 0x40, 1, 0),
    OAM_ENTRY(-16, -17, OAM_DIMS_32x16, OAM_X_FLIP, 0x44, 1, 0),
    OAM_ENTRY(-8, -41, OAM_DIMS_8x8, OAM_X_FLIP, 0x4a, 1, 0)
};

static const u16 sSamusEffectAnim_Right_Dying_Frame5[] = {
    2,
    OAM_ENTRY(-17, -32, OAM_DIMS_32x16, OAM_X_FLIP, 0x40, 1, 0),
    OAM_ENTRY(-17, -16, OAM_DIMS_32x16, OAM_X_FLIP, 0x44, 1, 0)
};

const struct FrameData sSamusEffectAnim_Left_Dying[7] = {
    [0] = {
        .pFrame = sSamusEffectAnim_Left_Dying_Frame0,
        .timer = 4
    },
    [1] = {
        .pFrame = sSamusEffectAnim_Left_Dying_Frame1,
        .timer = 2
    },
    [2] = {
        .pFrame = sSamusEffectAnim_Left_Dying_Frame2,
        .timer = 4
    },
    [3] = {
        .pFrame = sSamusEffectAnim_Left_Dying_Frame3,
        .timer = 4
    },
    [4] = {
        .pFrame = sSamusEffectAnim_Left_Dying_Frame4,
        .timer = 6
    },
    [5] = {
        .pFrame = sSamusEffectAnim_Left_Dying_Frame5,
        .timer = 12
    },
    [6] = FRAME_DATA_TERMINATOR
};

const struct FrameData sSamusEffectAnim_Right_Dying[7] = {
    [0] = {
        .pFrame = sSamusEffectAnim_Right_Dying_Frame0,
        .timer = 4
    },
    [1] = {
        .pFrame = sSamusEffectAnim_Right_Dying_Frame1,
        .timer = 2
    },
    [2] = {
        .pFrame = sSamusEffectAnim_Right_Dying_Frame2,
        .timer = 4
    },
    [3] = {
        .pFrame = sSamusEffectAnim_Right_Dying_Frame3,
        .timer = 4
    },
    [4] = {
        .pFrame = sSamusEffectAnim_Right_Dying_Frame4,
        .timer = 6
    },
    [5] = {
        .pFrame = sSamusEffectAnim_Right_Dying_Frame5,
        .timer = 12
    },
    [6] = FRAME_DATA_TERMINATOR
};

static const u16 sSamusEffectAnim_LoadingSave_Frame16[] = {
    3,
    OAM_ENTRY(-16, -40, OAM_DIMS_32x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(-16, -24, OAM_DIMS_32x16, OAM_NO_FLIP, 0x44, 1, 0),
    OAM_ENTRY(-16, -8, OAM_DIMS_32x8, OAM_NO_FLIP, 0x48, 1, 0)
};

static const u16 sSamusEffectAnim_LoadingSave_Frame18[] = {
    3,
    OAM_ENTRY(-16, -40, OAM_DIMS_32x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(-16, -24, OAM_DIMS_32x16, OAM_NO_FLIP, 0x44, 1, 0),
    OAM_ENTRY(-16, -8, OAM_DIMS_32x8, OAM_NO_FLIP, 0x48, 1, 0)
};

static const u16 sSamusEffectAnim_LoadingSave_Frame20[] = {
    3,
    OAM_ENTRY(-16, -40, OAM_DIMS_32x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(-16, -24, OAM_DIMS_32x16, OAM_NO_FLIP, 0x44, 1, 0),
    OAM_ENTRY(-16, -8, OAM_DIMS_32x8, OAM_NO_FLIP, 0x48, 1, 0)
};

static const u16 sSamusEffectAnim_LoadingSave_Frame22[] = {
    2,
    OAM_ENTRY(-16, -16, OAM_DIMS_32x16, OAM_NO_FLIP, 0x40, 1, 0),
    OAM_ENTRY(-8, -24, OAM_DIMS_8x8, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sSamusEffectAnim_LoadingSave_Frame9[] = {
    1,
    OAM_ENTRY(-16, -16, OAM_DIMS_32x16, OAM_NO_FLIP, 0x40, 1, 0)
};

static const u16 sSamusEffectAnim_LoadingSave_Frame1[] = {
    1,
    OAM_ENTRY(-16, -16, OAM_DIMS_32x16, OAM_NO_FLIP, 0x44, 1, 0)
};

static const u16 sSamusEffectAnim_LoadingSave_Frame8[] = {
    1,
    OAM_ENTRY(-16, -16, OAM_DIMS_32x16, OAM_NO_FLIP, 0x40, 1, 0)
};

static const u16 sSamusEffectAnim_LoadingSave_Frame10[] = {
    1,
    OAM_ENTRY(-16, -16, OAM_DIMS_32x16, OAM_NO_FLIP, 0x40, 1, 0)
};

static const u16 sSamusEffectAnim_LoadingSave_Frame12[] = {
    1,
    OAM_ENTRY(-16, -16, OAM_DIMS_32x16, OAM_NO_FLIP, 0x40, 1, 0)
};

static const u16 sSamusEffectAnim_LoadingSave_Frame14[] = {
    1,
    OAM_ENTRY(-16, -16, OAM_DIMS_32x16, OAM_NO_FLIP, 0x40, 1, 0)
};

static const u16 sSamusEffectAnim_LoadingSave_Frame0[] = {
    1,
    OAM_ENTRY(-16, -8, OAM_DIMS_32x8, OAM_NO_FLIP, 0x40, 1, 0)
};

static const u16 sSamusEffectAnim_LoadingSave_Frame2[] = {
    1,
    OAM_ENTRY(-16, -8, OAM_DIMS_32x8, OAM_NO_FLIP, 0x40, 1, 0)
};

static const u16 sSamusEffectAnim_LoadingSave_Frame4[] = {
    1,
    OAM_ENTRY(-16, -8, OAM_DIMS_32x8, OAM_NO_FLIP, 0x40, 1, 0)
};

static const u16 sSamusEffectAnim_LoadingSave_Frame6[] = {
    1,
    OAM_ENTRY(-16, -8, OAM_DIMS_32x8, OAM_NO_FLIP, 0x40, 1, 0)
};

const struct FrameData sSamusEffectAnim_LoadingSave[49] = {
    [0] = {
        .pFrame = sSamusEffectAnim_LoadingSave_Frame0,
        .timer = 1
    },
    [1] = {
        .pFrame = sSamusEffectAnim_LoadingSave_Frame1,
        .timer = 1
    },
    [2] = {
        .pFrame = sSamusEffectAnim_LoadingSave_Frame2,
        .timer = 1
    },
    [3] = {
        .pFrame = sSamusEffectAnim_LoadingSave_Frame1,
        .timer = 1
    },
    [4] = {
        .pFrame = sSamusEffectAnim_LoadingSave_Frame4,
        .timer = 1
    },
    [5] = {
        .pFrame = sSamusEffectAnim_LoadingSave_Frame1,
        .timer = 1
    },
    [6] = {
        .pFrame = sSamusEffectAnim_LoadingSave_Frame6,
        .timer = 1
    },
    [7] = {
        .pFrame = sSamusEffectAnim_LoadingSave_Frame1,
        .timer = 1
    },
    [8] = {
        .pFrame = sSamusEffectAnim_LoadingSave_Frame8,
        .timer = 1
    },
    [9] = {
        .pFrame = sSamusEffectAnim_LoadingSave_Frame9,
        .timer = 1
    },
    [10] = {
        .pFrame = sSamusEffectAnim_LoadingSave_Frame10,
        .timer = 1
    },
    [11] = {
        .pFrame = sSamusEffectAnim_LoadingSave_Frame1,
        .timer = 1
    },
    [12] = {
        .pFrame = sSamusEffectAnim_LoadingSave_Frame12,
        .timer = 1
    },
    [13] = {
        .pFrame = sSamusEffectAnim_LoadingSave_Frame9,
        .timer = 1
    },
    [14] = {
        .pFrame = sSamusEffectAnim_LoadingSave_Frame14,
        .timer = 1
    },
    [15] = {
        .pFrame = sSamusEffectAnim_LoadingSave_Frame1,
        .timer = 1
    },
    [16] = {
        .pFrame = sSamusEffectAnim_LoadingSave_Frame16,
        .timer = 1
    },
    [17] = {
        .pFrame = sSamusEffectAnim_LoadingSave_Frame9,
        .timer = 1
    },
    [18] = {
        .pFrame = sSamusEffectAnim_LoadingSave_Frame18,
        .timer = 1
    },
    [19] = {
        .pFrame = sSamusEffectAnim_LoadingSave_Frame1,
        .timer = 1
    },
    [20] = {
        .pFrame = sSamusEffectAnim_LoadingSave_Frame20,
        .timer = 1
    },
    [21] = {
        .pFrame = sSamusEffectAnim_LoadingSave_Frame9,
        .timer = 1
    },
    [22] = {
        .pFrame = sSamusEffectAnim_LoadingSave_Frame22,
        .timer = 1
    },
    [23] = {
        .pFrame = sSamusEffectAnim_LoadingSave_Frame1,
        .timer = 1
    },
    [24] = {
        .pFrame = sSamusEffectAnim_LoadingSave_Frame8,
        .timer = 1
    },
    [25] = {
        .pFrame = sSamusEffectAnim_LoadingSave_Frame9,
        .timer = 1
    },
    [26] = {
        .pFrame = sSamusEffectAnim_LoadingSave_Frame10,
        .timer = 1
    },
    [27] = {
        .pFrame = sSamusEffectAnim_LoadingSave_Frame1,
        .timer = 1
    },
    [28] = {
        .pFrame = sSamusEffectAnim_LoadingSave_Frame12,
        .timer = 1
    },
    [29] = {
        .pFrame = sSamusEffectAnim_LoadingSave_Frame9,
        .timer = 1
    },
    [30] = {
        .pFrame = sSamusEffectAnim_LoadingSave_Frame14,
        .timer = 1
    },
    [31] = {
        .pFrame = sSamusEffectAnim_LoadingSave_Frame1,
        .timer = 1
    },
    [32] = {
        .pFrame = sSamusEffectAnim_LoadingSave_Frame8,
        .timer = 1
    },
    [33] = {
        .pFrame = sSamusEffectAnim_LoadingSave_Frame9,
        .timer = 1
    },
    [34] = {
        .pFrame = sSamusEffectAnim_LoadingSave_Frame10,
        .timer = 1
    },
    [35] = {
        .pFrame = sSamusEffectAnim_LoadingSave_Frame1,
        .timer = 1
    },
    [36] = {
        .pFrame = sSamusEffectAnim_LoadingSave_Frame12,
        .timer = 1
    },
    [37] = {
        .pFrame = sSamusEffectAnim_LoadingSave_Frame9,
        .timer = 1
    },
    [38] = {
        .pFrame = sSamusEffectAnim_LoadingSave_Frame14,
        .timer = 1
    },
    [39] = {
        .pFrame = sSamusEffectAnim_LoadingSave_Frame1,
        .timer = 1
    },
    [40] = {
        .pFrame = sSamusEffectAnim_LoadingSave_Frame0,
        .timer = 1
    },
    [41] = {
        .pFrame = sSamusEffectAnim_LoadingSave_Frame1,
        .timer = 1
    },
    [42] = {
        .pFrame = sSamusEffectAnim_LoadingSave_Frame2,
        .timer = 1
    },
    [43] = {
        .pFrame = sSamusEffectAnim_LoadingSave_Frame1,
        .timer = 1
    },
    [44] = {
        .pFrame = sSamusEffectAnim_LoadingSave_Frame4,
        .timer = 1
    },
    [45] = {
        .pFrame = sSamusEffectAnim_LoadingSave_Frame1,
        .timer = 1
    },
    [46] = {
        .pFrame = sSamusEffectAnim_LoadingSave_Frame6,
        .timer = 1
    },
    [47] = {
        .pFrame = sSamusEffectAnim_LoadingSave_Frame1,
        .timer = 1
    },
    [48] = FRAME_DATA_TERMINATOR
};

static const u8 sBlob_28d014_28d2bc[] = INCBIN_U8("data/Blob_28d014_28d2bc.bin");
