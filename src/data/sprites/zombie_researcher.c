#include "data/sprites/zombie_researcher.h"
#include "macros.h"

const s16 sZombieLungingSpeed[4] = {
    2,  4,  2,  1
};

const u32 sZombieGfx[512 * 3] = INCBIN_U32("data/sprites/zombie_researcher.gfx");
const u16 sZombiePal[16 * 3] = INCBIN_U16("data/sprites/zombie_researcher.pal");

static const u16 sOam_2fac38[OAM_DATA_SIZE(7)] = {
    7,
    0xe1, OBJ_SIZE_16x16 | 0x1f6, OBJ_PALETTE_8 | 0x28b,
    OBJ_SHAPE_VERTICAL | 0xe7, 0x0, OBJ_PALETTE_8 | 0x24f,
    0xf7, 0x0, OBJ_PALETTE_8 | 0x28f,
    0xe4, OBJ_SIZE_16x16 | 0x1fc, OBJ_PALETTE_8 | 0x200,
    0xf0, OBJ_SIZE_16x16 | 0x1fc, OBJ_PALETTE_8 | 0x202,
    0xf8, 0x1f4, OBJ_PALETTE_8 | 0x2af,
    OBJ_SHAPE_VERTICAL | 0xe9, 0x1f6, OBJ_PALETTE_8 | 0x290
};

static const u16 sOam_2fac64[OAM_DATA_SIZE(7)] = {
    7,
    OBJ_SHAPE_HORIZONTAL | 0xe2, 0x1f5, OBJ_PALETTE_8 | 0x28b,
    0xea, 0x1f5, OBJ_PALETTE_8 | 0x272,
    OBJ_SHAPE_VERTICAL | 0xe8, 0x1ff, OBJ_PALETTE_8 | 0x24f,
    0xf8, 0x1ff, OBJ_PALETTE_8 | 0x28f,
    0xe5, OBJ_SIZE_16x16 | 0x1fc, OBJ_PALETTE_8 | 0x200,
    0xf0, OBJ_SIZE_16x16 | 0x1fb, OBJ_PALETTE_8 | 0x204,
    OBJ_SHAPE_VERTICAL | 0xe8, 0x1f7, OBJ_PALETTE_8 | 0x290
};

static const u16 sOam_2fac90[OAM_DATA_SIZE(6)] = {
    6,
    0xe4, OBJ_SIZE_16x16 | 0x1f5, OBJ_PALETTE_8 | 0x28b,
    OBJ_SHAPE_VERTICAL | 0xea, 0x1ff, OBJ_PALETTE_8 | 0x24f,
    0xfa, 0x1ff, OBJ_PALETTE_8 | 0x28f,
    0xe6, OBJ_SIZE_16x16 | 0x1fc, OBJ_PALETTE_8 | 0x200,
    0xf0, OBJ_SIZE_16x16 | 0x1fb, OBJ_PALETTE_8 | 0x206,
    OBJ_SHAPE_VERTICAL | 0xe7, 0x1f7, OBJ_PALETTE_8 | 0x290
};

static const u16 sOam_2facb6[OAM_DATA_SIZE(6)] = {
    6,
    0xe2, OBJ_SIZE_16x16 | 0x1f5, OBJ_PALETTE_8 | 0x28b,
    OBJ_SHAPE_VERTICAL | 0xe8, 0x1ff, OBJ_PALETTE_8 | 0x24f,
    0xf8, 0x1ff, OBJ_PALETTE_8 | 0x28f,
    0xe5, OBJ_SIZE_16x16 | 0x1fc, OBJ_PALETTE_8 | 0x200,
    0xf0, OBJ_SIZE_16x16 | 0x1fa, OBJ_PALETTE_8 | 0x208,
    OBJ_SHAPE_VERTICAL | 0xe8, 0x1f6, OBJ_PALETTE_8 | 0x290
};

static const u16 sOam_2facdc[OAM_DATA_SIZE(7)] = {
    7,
    0xe1, OBJ_SIZE_16x16 | 0x1f8, OBJ_PALETTE_8 | 0x28b,
    OBJ_SHAPE_VERTICAL | 0xe5, 0x2, OBJ_PALETTE_8 | 0x24f,
    0xf5, 0x2, OBJ_PALETTE_8 | 0x28f,
    0xe4, OBJ_SIZE_16x16 | 0x1fe, OBJ_PALETTE_8 | 0x200,
    0xf0, OBJ_SIZE_16x16 | 0x1fc, OBJ_PALETTE_8 | 0x202,
    0xf8, 0x1f4, OBJ_PALETTE_8 | 0x2af,
    OBJ_SHAPE_VERTICAL | 0xeb, 0x1f6, OBJ_PALETTE_8 | 0x290
};

static const u16 sOam_2fad08[OAM_DATA_SIZE(6)] = {
    6,
    OBJ_SHAPE_VERTICAL | 0xe8, 0x3, OBJ_PALETTE_8 | 0x24f,
    0xf8, 0x3, OBJ_PALETTE_8 | 0x28f,
    0xe2, OBJ_SIZE_16x16 | 0x1fb, OBJ_PALETTE_8 | 0x28b,
    0xe7, OBJ_SIZE_16x16 | 0x1fe, OBJ_PALETTE_8 | 0x200,
    0xf0, OBJ_SIZE_16x16 | 0x1fb, OBJ_PALETTE_8 | 0x204,
    OBJ_SHAPE_VERTICAL | 0xe8, 0x1f7, OBJ_PALETTE_8 | 0x290
};

static const u16 sOam_2fad2e[OAM_DATA_SIZE(6)] = {
    6,
    0xe7, OBJ_SIZE_16x16 | 0x1fb, OBJ_PALETTE_8 | 0x28b,
    OBJ_SHAPE_VERTICAL | 0xed, 0x2, OBJ_PALETTE_8 | 0x24f,
    0xfd, 0x2, OBJ_PALETTE_8 | 0x28f,
    0xe8, OBJ_SIZE_16x16 | 0x1fe, OBJ_PALETTE_8 | 0x200,
    0xf0, OBJ_SIZE_16x16 | 0x1fb, OBJ_PALETTE_8 | 0x206,
    OBJ_SHAPE_VERTICAL | 0xe6, 0x1f8, OBJ_PALETTE_8 | 0x290
};

static const u16 sOam_2fad54[OAM_DATA_SIZE(6)] = {
    6,
    0xe3, OBJ_SIZE_16x16 | 0x1f7, OBJ_PALETTE_8 | 0x28b,
    OBJ_SHAPE_VERTICAL | 0xea, 0x1ff, OBJ_PALETTE_8 | 0x24f,
    0xfa, 0x1ff, OBJ_PALETTE_8 | 0x28f,
    0xe7, OBJ_SIZE_16x16 | 0x1fc, OBJ_PALETTE_8 | 0x200,
    0xf0, OBJ_SIZE_16x16 | 0x1fa, OBJ_PALETTE_8 | 0x208,
    OBJ_SHAPE_VERTICAL | 0xe6, 0x1f6, OBJ_PALETTE_8 | 0x290
};

static const u16 sOam_2fad7a[OAM_DATA_SIZE(7)] = {
    7,
    0xe4, OBJ_SIZE_16x16 | 0x1f4, OBJ_PALETTE_8 | 0x28b,
    OBJ_SHAPE_VERTICAL | 0xe8, 0x1ff, OBJ_PALETTE_8 | 0x24f,
    0xf8, 0x1ff, OBJ_PALETTE_8 | 0x28f,
    0xe7, OBJ_SIZE_16x16 | 0x1fc, OBJ_PALETTE_8 | 0x200,
    0xf0, OBJ_SIZE_16x16 | 0x1fc, OBJ_PALETTE_8 | 0x202,
    0xf8, 0x1f4, OBJ_PALETTE_8 | 0x2af,
    OBJ_SHAPE_VERTICAL | 0xec, 0x1f6, OBJ_PALETTE_8 | 0x290
};

static const u16 sOam_2fada6[OAM_DATA_SIZE(6)] = {
    6,
    0xe6, OBJ_SIZE_16x16 | 0x1f3, OBJ_PALETTE_8 | 0x28b,
    OBJ_SHAPE_VERTICAL | 0xeb, 0x1fe, OBJ_PALETTE_8 | 0x24f,
    0xfb, 0x1fe, OBJ_PALETTE_8 | 0x28f,
    0xe9, OBJ_SIZE_16x16 | 0x1fb, OBJ_PALETTE_8 | 0x200,
    0xf0, OBJ_SIZE_16x16 | 0x1fb, OBJ_PALETTE_8 | 0x204,
    OBJ_SHAPE_VERTICAL | 0xef, 0x1f8, OBJ_PALETTE_8 | 0x290
};

static const u16 sOam_2fadcc[OAM_DATA_SIZE(6)] = {
    6,
    OBJ_SHAPE_VERTICAL | 0xe9, 0x1fe, OBJ_PALETTE_8 | 0x24f,
    0xf9, 0x1fe, OBJ_PALETTE_8 | 0x28f,
    0xe4, OBJ_SIZE_16x16 | 0x1f7, OBJ_PALETTE_8 | 0x28b,
    0xe6, OBJ_SIZE_16x16 | 0x1fc, OBJ_PALETTE_8 | 0x200,
    0xf0, OBJ_SIZE_16x16 | 0x1fb, OBJ_PALETTE_8 | 0x206,
    OBJ_SHAPE_VERTICAL | 0xe8, 0x1f5, OBJ_PALETTE_8 | 0x290
};

static const u16 sOam_2fadf2[OAM_DATA_SIZE(6)] = {
    6,
    0xe5, OBJ_SIZE_16x16 | 0x1f7, OBJ_PALETTE_8 | 0x28b,
    OBJ_SHAPE_VERTICAL | 0xec, 0x0, OBJ_PALETTE_8 | 0x24f,
    0xfc, 0x0, OBJ_PALETTE_8 | 0x28f,
    0xe7, OBJ_SIZE_16x16 | 0x1fc, OBJ_PALETTE_8 | 0x200,
    0xf0, OBJ_SIZE_16x16 | 0x1fa, OBJ_PALETTE_8 | 0x208,
    OBJ_SHAPE_VERTICAL | 0xe6, 0x1f5, OBJ_PALETTE_8 | 0x290
};

static const u16 sOam_2fae18[OAM_DATA_SIZE(7)] = {
    7,
    0xe1, OBJ_SIZE_16x16 | 0x1f6, OBJ_PALETTE_8 | 0x28b,
    OBJ_SHAPE_VERTICAL | 0xe7, 0x0, OBJ_PALETTE_8 | 0x24f,
    0xf7, 0x0, OBJ_PALETTE_8 | 0x28f,
    OBJ_SHAPE_HORIZONTAL | 0xf0, 0x1fa, OBJ_PALETTE_8 | 0x208,
    OBJ_SHAPE_HORIZONTAL | 0xf8, 0x1fa, OBJ_PALETTE_8 | 0x20a,
    0xe4, OBJ_SIZE_16x16 | 0x1fc, OBJ_PALETTE_8 | 0x200,
    OBJ_SHAPE_VERTICAL | 0xe9, 0x1f6, OBJ_PALETTE_8 | 0x290
};

static const u16 sOam_2fae44[OAM_DATA_SIZE(8)] = {
    8,
    OBJ_SHAPE_HORIZONTAL | 0xe2, 0x1f6, OBJ_PALETTE_8 | 0x28b,
    0xea, 0x1f6, OBJ_PALETTE_8 | 0x272,
    OBJ_SHAPE_VERTICAL | 0xe8, 0x1ff, OBJ_PALETTE_8 | 0x24f,
    0xf8, 0x1ff, OBJ_PALETTE_8 | 0x28f,
    OBJ_SHAPE_HORIZONTAL | 0xf0, 0x1fa, OBJ_PALETTE_8 | 0x208,
    OBJ_SHAPE_HORIZONTAL | 0xf8, 0x1fa, OBJ_PALETTE_8 | 0x20c,
    0xe5, OBJ_SIZE_16x16 | 0x1fc, OBJ_PALETTE_8 | 0x200,
    OBJ_SHAPE_VERTICAL | 0xe8, 0x1f7, OBJ_PALETTE_8 | 0x290
};

static const u16 sOam_2fae76[OAM_DATA_SIZE(7)] = {
    7,
    0xe3, OBJ_SIZE_16x16 | 0x1f6, OBJ_PALETTE_8 | 0x28b,
    OBJ_SHAPE_VERTICAL | 0xea, 0x1ff, OBJ_PALETTE_8 | 0x24f,
    0xfa, 0x1ff, OBJ_PALETTE_8 | 0x28f,
    OBJ_SHAPE_HORIZONTAL | 0xf0, 0x1fa, OBJ_PALETTE_8 | 0x208,
    OBJ_SHAPE_HORIZONTAL | 0xf8, 0x1fa, OBJ_PALETTE_8 | 0x22a,
    0xe6, OBJ_SIZE_16x16 | 0x1fc, OBJ_PALETTE_8 | 0x200,
    OBJ_SHAPE_VERTICAL | 0xe7, 0x1f7, OBJ_PALETTE_8 | 0x290
};

static const u16 sOam_2faea2[OAM_DATA_SIZE(8)] = {
    8,
    OBJ_SHAPE_HORIZONTAL | 0xe2, 0x1f6, OBJ_PALETTE_8 | 0x28b,
    0xe7, 0x1f6, OBJ_PALETTE_8 | 0x272,
    OBJ_SHAPE_VERTICAL | 0xe8, 0x0, OBJ_PALETTE_8 | 0x24f,
    0xf8, 0x0, OBJ_PALETTE_8 | 0x28f,
    OBJ_SHAPE_HORIZONTAL | 0xf0, 0x1fa, OBJ_PALETTE_8 | 0x208,
    OBJ_SHAPE_HORIZONTAL | 0xf8, 0x1fa, OBJ_PALETTE_8 | 0x22c,
    0xe5, OBJ_SIZE_16x16 | 0x1fc, OBJ_PALETTE_8 | 0x200,
    OBJ_SHAPE_VERTICAL | 0xe8, 0x1f6, OBJ_PALETTE_8 | 0x290
};

static const u16 sOam_2faed4[OAM_DATA_SIZE(2)] = {
    2,
    OBJ_SHAPE_HORIZONTAL | 0xf8, 0x1f4, OBJ_PALETTE_8 | 0x215,
    0xf8, 0x4, OBJ_PALETTE_8 | 0x217
};

static const u16 sOam_2faee2[OAM_DATA_SIZE(2)] = {
    2,
    OBJ_SHAPE_HORIZONTAL | 0xf8, 0x1f4, OBJ_PALETTE_8 | 0x218,
    0xf8, 0x4, OBJ_PALETTE_8 | 0x21a
};

static const u16 sOam_2faef0[OAM_DATA_SIZE(2)] = {
    2,
    OBJ_SHAPE_HORIZONTAL | 0xf8, 0x1f4, OBJ_PALETTE_8 | 0x237,
    0xf8, 0x4, OBJ_PALETTE_8 | 0x239
};

static const u16 sOam_2faefe[OAM_DATA_SIZE(2)] = {
    2,
    OBJ_SHAPE_HORIZONTAL | 0xf8, 0x1f4, OBJ_PALETTE_8 | 0x25d,
    0xf8, 0x4, OBJ_PALETTE_8 | 0x25f
};

static const u16 sOam_2faf0c[OAM_DATA_SIZE(2)] = {
    2,
    OBJ_SHAPE_HORIZONTAL | 0xf8, 0x1f8, OBJ_PALETTE_8 | 0x23a,
    0xf9, 0x1fc, OBJ_PALETTE_8 | 0x21b
};

static const u16 sOam_2faf1a[OAM_DATA_SIZE(2)] = {
    2,
    0xf9, OBJ_X_FLIP | 0x1fc, OBJ_PALETTE_8 | 0x21b,
    OBJ_SHAPE_HORIZONTAL | 0xf9, 0x1f8, OBJ_PALETTE_8 | 0x23a
};

static const u16 sOam_2faf28[OAM_DATA_SIZE(4)] = {
    4,
    0xf6, 0x1fd, OBJ_PALETTE_8 | 0x292,
    0xfd, 0x1fd, OBJ_PALETTE_8 | 0x2b1,
    OBJ_SHAPE_HORIZONTAL | 0xfa, OBJ_SIZE_32x8 | 0x1f1, OBJ_PALETTE_8 | 0x257,
    OBJ_SHAPE_HORIZONTAL | 0xf7, 0x1f9, OBJ_PALETTE_8 | 0x255
};

static const u16 sOam_2faf42[OAM_DATA_SIZE(4)] = {
    4,
    0xf6, 0x1fd, OBJ_PALETTE_8 | 0x292,
    0xfe, 0x1fd, OBJ_PALETTE_8 | 0x2b1,
    OBJ_SHAPE_HORIZONTAL | 0xf9, OBJ_SIZE_32x8 | 0x1f1, OBJ_PALETTE_8 | 0x257,
    OBJ_SHAPE_HORIZONTAL | 0xf6, 0x1f9, OBJ_PALETTE_8 | 0x255
};

static const u16 sOam_2faf5c[OAM_DATA_SIZE(4)] = {
    4,
    0xf2, 0x1fd, OBJ_PALETTE_8 | 0x292,
    0xfa, 0x1fd, OBJ_PALETTE_8 | 0x272,
    OBJ_SHAPE_HORIZONTAL | 0xf9, OBJ_X_FLIP | OBJ_SIZE_32x8 | 0x1ef, OBJ_PALETTE_8 | 0x257,
    OBJ_SHAPE_HORIZONTAL | 0xf3, OBJ_X_FLIP | 0x1f7, OBJ_PALETTE_8 | 0x255
};

static const u16 sOam_2faf76[OAM_DATA_SIZE(4)] = {
    4,
    0xf2, 0x1fd, OBJ_PALETTE_8 | 0x292,
    0xf9, 0x1fd, OBJ_PALETTE_8 | 0x272,
    OBJ_SHAPE_HORIZONTAL | 0xf8, OBJ_X_FLIP | OBJ_SIZE_32x8 | 0x1ef, OBJ_PALETTE_8 | 0x257,
    OBJ_SHAPE_HORIZONTAL | 0xf2, OBJ_X_FLIP | 0x1f7, OBJ_PALETTE_8 | 0x255
};

static const u16 sOam_2faf90[OAM_DATA_SIZE(4)] = {
    4,
    0xee, 0x1fc, OBJ_PALETTE_8 | 0x292,
    0xf5, 0x1fc, OBJ_PALETTE_8 | 0x2b1,
    OBJ_SHAPE_HORIZONTAL | 0xf2, OBJ_SIZE_32x16 | 0x1f1, OBJ_PALETTE_8 | 0x277,
    OBJ_SHAPE_HORIZONTAL | 0xeb, 0x1f9, OBJ_PALETTE_8 | 0x275
};

static const u16 sOam_2fafaa[OAM_DATA_SIZE(4)] = {
    4,
    0xee, 0x1fe, OBJ_PALETTE_8 | 0x292,
    0xf6, 0x1ff, OBJ_PALETTE_8 | 0x2b1,
    OBJ_SHAPE_HORIZONTAL | 0xf1, OBJ_SIZE_32x16 | 0x1f1, OBJ_PALETTE_8 | 0x277,
    OBJ_SHAPE_HORIZONTAL | 0xea, 0x1f9, OBJ_PALETTE_8 | 0x275
};

static const u16 sOam_2fafc4[OAM_DATA_SIZE(4)] = {
    4,
    0xeb, 0x1fa, OBJ_PALETTE_8 | 0x292,
    0xf3, 0x1fa, OBJ_PALETTE_8 | 0x272,
    OBJ_SHAPE_HORIZONTAL | 0xf1, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1ef, OBJ_PALETTE_8 | 0x277,
    OBJ_SHAPE_HORIZONTAL | 0xea, OBJ_X_FLIP | 0x1f7, OBJ_PALETTE_8 | 0x275
};

static const u16 sOam_2fafde[OAM_DATA_SIZE(4)] = {
    4,
    0xeb, 0x1fa, OBJ_PALETTE_8 | 0x292,
    0xf3, 0x1fa, OBJ_PALETTE_8 | 0x2ab,
    OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x1ef, OBJ_PALETTE_8 | 0x277,
    OBJ_SHAPE_HORIZONTAL | 0xe9, OBJ_X_FLIP | 0x1f7, OBJ_PALETTE_8 | 0x275
};

static const u16 sOam_2faff8[OAM_DATA_SIZE(3)] = {
    3,
    0xe3, OBJ_SIZE_16x16 | 0x0, OBJ_PALETTE_8 | 0x28b,
    OBJ_SHAPE_HORIZONTAL | 0xe8, OBJ_SIZE_32x16 | 0x1f1, OBJ_PALETTE_8 | 0x293,
    OBJ_SHAPE_HORIZONTAL | 0xf8, OBJ_SIZE_32x8 | 0x1f1, OBJ_PALETTE_8 | 0x2b7
};

static const u16 sOam_2fb00c[OAM_DATA_SIZE(6)] = {
    6,
    0xde, OBJ_SIZE_16x16 | 0x1fe, OBJ_PALETTE_8 | 0x28b,
    0xf0, OBJ_SIZE_16x16 | 0x1f5, OBJ_PALETTE_8 | 0x29b,
    OBJ_SHAPE_VERTICAL | 0xf0, 0x5, OBJ_PALETTE_8 | 0x29d,
    OBJ_SHAPE_HORIZONTAL | 0xe8, 0x1f5, OBJ_PALETTE_8 | 0x27b,
    0xe8, 0x5, OBJ_PALETTE_8 | 0x27d,
    OBJ_SHAPE_HORIZONTAL | 0xe0, 0x1fb, OBJ_PALETTE_8 | 0x25b
};

static const u16 sOam_2fb032[OAM_DATA_SIZE(8)] = {
    8,
    0xe2, OBJ_SIZE_16x16 | 0x1f6, OBJ_PALETTE_8 | 0x28b,
    OBJ_SHAPE_VERTICAL | 0xec, 0x2, OBJ_PALETTE_8 | 0x24f,
    0xfc, 0x2, OBJ_PALETTE_8 | 0x28f,
    0xe4, OBJ_SIZE_16x16 | 0x1fc, OBJ_PALETTE_8 | 0x200,
    0xf0, OBJ_SIZE_16x16 | 0x1fc, OBJ_PALETTE_8 | 0x202,
    0xf8, 0x1f4, OBJ_PALETTE_8 | 0x2af,
    OBJ_SHAPE_VERTICAL | 0xe6, 0x1f6, OBJ_PALETTE_8 | 0x290,
    0xf7, 0x1f5, OBJ_PALETTE_8 | 0x24e
};

static const u16 sOam_2fb064[OAM_DATA_SIZE(2)] = {
    2,
    OBJ_SHAPE_VERTICAL | 0xe0, OBJ_SIZE_16x32 | 0x1f5, OBJ_PALETTE_8 | 0x240,
    OBJ_SHAPE_VERTICAL | 0xe0, OBJ_SIZE_8x32 | 0x5, OBJ_PALETTE_8 | 0x242
};

static const u16 sOam_2fb072[OAM_DATA_SIZE(7)] = {
    7,
    OBJ_SHAPE_VERTICAL | 0xe0, OBJ_SIZE_16x32 | 0x1f5, OBJ_PALETTE_8 | 0x245,
    OBJ_SHAPE_VERTICAL | 0xe8, 0x5, OBJ_PALETTE_8 | 0x264,
    0xf8, 0x5, OBJ_PALETTE_8 | 0x2a4,
    0xf0, 0xe, OBJ_PALETTE_8 | 0x283,
    0xe3, 0x1f2, OBJ_PALETTE_8 | 0x283,
    0xe5, 0x2, OBJ_PALETTE_8 | 0x26b,
    0xee, 0x1ef, OBJ_PALETTE_8 | 0x26b
};

static const u16 sOam_2fb09e[OAM_DATA_SIZE(9)] = {
    9,
    OBJ_SHAPE_HORIZONTAL | 0xf8, OBJ_SIZE_32x8 | 0x1f5, OBJ_PALETTE_8 | 0x247,
    0xea, 0x1fc, OBJ_PALETTE_8 | 0x263,
    0xe0, 0x5, OBJ_PALETTE_8 | 0x288,
    OBJ_SHAPE_VERTICAL | 0xe0, 0x1f4, OBJ_PALETTE_8 | 0x28a,
    0xe8, 0xc, OBJ_PALETTE_8 | 0x2a7,
    0xe4, 0x6, OBJ_PALETTE_8 | 0x26b,
    0xe5, 0x1f8, OBJ_PALETTE_8 | 0x26b,
    0xe8, 0x0, OBJ_PALETTE_8 | 0x26b,
    0xea, 0x1ee, OBJ_PALETTE_8 | 0x283
};

static const u16 sOam_2fb0d6[OAM_DATA_SIZE(10)] = {
    10,
    OBJ_SHAPE_HORIZONTAL | 0xf8, OBJ_SIZE_32x8 | 0x1f4, OBJ_PALETTE_8 | 0x267,
    0xe8, 0xc, OBJ_PALETTE_8 | 0x24b,
    OBJ_SHAPE_VERTICAL | 0xe8, 0x1f4, OBJ_PALETTE_8 | 0x24c,
    0xf2, 0xe, OBJ_PALETTE_8 | 0x2a7,
    0xf2, 0x1fc, OBJ_PALETTE_8 | 0x263,
    0xef, OBJ_X_FLIP | OBJ_Y_FLIP | 0x1fa, OBJ_PALETTE_8 | 0x2a8,
    0xef, 0x4, OBJ_PALETTE_8 | 0x2a8,
    0xe8, 0x2, OBJ_PALETTE_8 | 0x26b,
    0xeb, 0x1fe, OBJ_PALETTE_8 | 0x26b,
    0xf8, 0x1ee, OBJ_PALETTE_8 | 0x283
};

static const u16 sOam_2fb114[OAM_DATA_SIZE(6)] = {
    6,
    0xf2, 0xc, OBJ_PALETTE_8 | 0x24d,
    0xf0, 0x1fc, OBJ_PALETTE_8 | 0x26b,
    OBJ_SHAPE_VERTICAL | 0xf0, 0x1f4, OBJ_PALETTE_8 | 0x24e,
    OBJ_SHAPE_HORIZONTAL | 0xf8, OBJ_SIZE_32x8 | 0x1f4, OBJ_PALETTE_8 | 0x267,
    0xf5, 0x1fc, OBJ_PALETTE_8 | 0x2a3,
    0xed, 0x3, OBJ_PALETTE_8 | 0x26b
};

static const u16 sOam_2fb13a[OAM_DATA_SIZE(1)] = {
    1,
    OBJ_SHAPE_HORIZONTAL | 0xf8, OBJ_SIZE_32x8 | 0x1f4, OBJ_PALETTE_8 | 0x267
};

static const u16 sOam_2fb142[OAM_DATA_SIZE(1)] = {
    1,
    OBJ_SHAPE_HORIZONTAL | 0xf8, OBJ_SIZE_32x8 | 0x1f5, OBJ_PALETTE_8 | 0x247
};

static const u16 sOam_2fb14a[OAM_DATA_SIZE(2)] = {
    2,
    0xf8, 0x1f4, OBJ_PALETTE_8 | 0x287,
    OBJ_SHAPE_HORIZONTAL | 0xf8, 0x1fc, OBJ_PALETTE_8 | 0x243
};

static const u16 sOam_2fb158[OAM_DATA_SIZE(6)] = {
    6,
    0xe0, 0x1fc, OBJ_PALETTE_8 | 0x292,
    0xe8, 0x1fc, OBJ_PALETTE_8 | 0x2ab,
    OBJ_SHAPE_VERTICAL | 0xe9, 0x3, OBJ_PALETTE_8 | 0x250,
    0xf0, OBJ_SIZE_16x16 | 0x1f9, OBJ_PALETTE_8 | 0x29e,
    OBJ_SHAPE_HORIZONTAL | 0xe8, 0x1f9, OBJ_PALETTE_8 | 0x27e,
    OBJ_SHAPE_VERTICAL | 0xe5, 0x1f6, OBJ_PALETTE_8 | 0x290
};

static const u16 sOam_2fb17e[OAM_DATA_SIZE(6)] = {
    6,
    0xe0, OBJ_X_FLIP | 0x1fc, OBJ_PALETTE_8 | 0x292,
    0xe8, OBJ_X_FLIP | 0x1fc, OBJ_PALETTE_8 | 0x2ab,
    OBJ_SHAPE_VERTICAL | 0xe9, OBJ_X_FLIP | 0x1f5, OBJ_PALETTE_8 | 0x250,
    0xf0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x1f7, OBJ_PALETTE_8 | 0x29e,
    OBJ_SHAPE_HORIZONTAL | 0xe8, OBJ_X_FLIP | 0x1f7, OBJ_PALETTE_8 | 0x27e,
    OBJ_SHAPE_VERTICAL | 0xe5, OBJ_X_FLIP | 0x2, OBJ_PALETTE_8 | 0x290
};

static const u16 sOam_2fb1a4[OAM_DATA_SIZE(7)] = {
    7,
    0xe6, OBJ_SIZE_16x16 | 0x1f9, OBJ_PALETTE_8 | 0x28b,
    OBJ_SHAPE_VERTICAL | 0xec, 0x1ff, OBJ_PALETTE_8 | 0x24f,
    0xfc, 0x1ff, OBJ_PALETTE_8 | 0x28f,
    0xea, OBJ_SIZE_16x16 | 0x1fb, OBJ_PALETTE_8 | 0x200,
    0xf8, 0x1f4, OBJ_PALETTE_8 | 0x253,
    0xf0, OBJ_SIZE_16x16 | 0x1fc, OBJ_PALETTE_8 | 0x20e,
    OBJ_SHAPE_VERTICAL | 0xea, 0x1f7, OBJ_PALETTE_8 | 0x290
};

static const u16 sOam_2fb1d0[OAM_DATA_SIZE(6)] = {
    6,
    OBJ_SHAPE_HORIZONTAL | 0xf1, 0x1f6, OBJ_PALETTE_8 | 0x251,
    0xe5, OBJ_SIZE_16x16 | 0x1f6, OBJ_PALETTE_8 | 0x21c,
    0xec, OBJ_SIZE_16x16 | 0x1fa, OBJ_PALETTE_8 | 0x200,
    0xf8, 0x1f4, OBJ_PALETTE_8 | 0x254,
    OBJ_SHAPE_HORIZONTAL | 0xf8, 0x1fc, OBJ_PALETTE_8 | 0x210,
    0xf0, 0x4, OBJ_PALETTE_8 | 0x214
};

static const u16 sOam_2fb1f6[OAM_DATA_SIZE(5)] = {
    5,
    0xec, OBJ_SIZE_16x16 | 0x1f6, OBJ_PALETTE_8 | 0x28d,
    0xe7, OBJ_SIZE_16x16 | 0x1f8, OBJ_PALETTE_8 | 0x21e,
    0xf8, 0x1f4, OBJ_PALETTE_8 | 0x273,
    OBJ_SHAPE_HORIZONTAL | 0xf8, 0x1fc, OBJ_PALETTE_8 | 0x230,
    0xf0, 0x4, OBJ_PALETTE_8 | 0x234
};

static const u16 sOam_2fb216[OAM_DATA_SIZE(5)] = {
    5,
    0xed, OBJ_SIZE_16x16 | 0x1f6, OBJ_PALETTE_8 | 0x28d,
    0xe9, OBJ_SIZE_16x16 | 0x1f7, OBJ_PALETTE_8 | 0x21c,
    0xf8, 0x1f4, OBJ_PALETTE_8 | 0x274,
    OBJ_SHAPE_HORIZONTAL | 0xf8, 0x1fc, OBJ_PALETTE_8 | 0x212,
    0xf0, 0x4, OBJ_PALETTE_8 | 0x235
};

static const u16 sOam_2fb236[OAM_DATA_SIZE(5)] = {
    5,
    0xec, OBJ_SIZE_16x16 | 0x1f6, OBJ_PALETTE_8 | 0x28d,
    0xe8, OBJ_SIZE_16x16 | 0x1f8, OBJ_PALETTE_8 | 0x21e,
    0xf8, 0x1f4, OBJ_PALETTE_8 | 0x2b2,
    OBJ_SHAPE_HORIZONTAL | 0xf8, 0x1fc, OBJ_PALETTE_8 | 0x232,
    0xf0, 0x4, OBJ_PALETTE_8 | 0x236
};

const struct FrameData sFrameData_2fb258[21] = {
    [0] = {
        .pFrame = sOam_2faed4,
        .timer = 2,
    },
    [1] = {
        .pFrame = sOam_2faee2,
        .timer = 2,
    },
    [2] = {
        .pFrame = sOam_2faef0,
        .timer = 2,
    },
    [3] = {
        .pFrame = sOam_2faefe,
        .timer = 2,
    },
    [4] = {
        .pFrame = sOam_2faef0,
        .timer = 2,
    },
    [5] = {
        .pFrame = sOam_2faee2,
        .timer = 2,
    },
    [6] = {
        .pFrame = sOam_2faed4,
        .timer = 2,
    },
    [7] = {
        .pFrame = sOam_2faf0c,
        .timer = 6,
    },
    [8] = {
        .pFrame = sOam_2faf1a,
        .timer = 6,
    },
    [9] = {
        .pFrame = sOam_2faf28,
        .timer = 6,
    },
    [10] = {
        .pFrame = sOam_2faf42,
        .timer = 7,
    },
    [11] = {
        .pFrame = sOam_2faf5c,
        .timer = 6,
    },
    [12] = {
        .pFrame = sOam_2faf76,
        .timer = 7,
    },
    [13] = {
        .pFrame = sOam_2faf90,
        .timer = 5,
    },
    [14] = {
        .pFrame = sOam_2fafaa,
        .timer = 5,
    },
    [15] = {
        .pFrame = sOam_2fafc4,
        .timer = 4,
    },
    [16] = {
        .pFrame = sOam_2fafde,
        .timer = 4,
    },
    [17] = {
        .pFrame = sOam_2faff8,
        .timer = 10,
    },
    [18] = {
        .pFrame = sOam_2fb00c,
        .timer = 8,
    },
    [19] = {
        .pFrame = sOam_2fb032,
        .timer = 5,
    },
    [20] = FRAME_DATA_TERMINATOR
};

const struct FrameData sFrameData_2fb300[5] = {
    [0] = {
        .pFrame = sOam_2fae18,
        .timer = 12,
    },
    [1] = {
        .pFrame = sOam_2fae44,
        .timer = 12,
    },
    [2] = {
        .pFrame = sOam_2fae76,
        .timer = 12,
    },
    [3] = {
        .pFrame = sOam_2faea2,
        .timer = 12,
    },
    [4] = FRAME_DATA_TERMINATOR
};

const struct FrameData sFrameData_2fb328[29] = {
    [0] = {
        .pFrame = sOam_2fac38,
        .timer = 12,
    },
    [1] = {
        .pFrame = sOam_2fac64,
        .timer = 8,
    },
    [2] = {
        .pFrame = sOam_2fac90,
        .timer = 12,
    },
    [3] = {
        .pFrame = sOam_2facb6,
        .timer = 6,
    },
    [4] = {
        .pFrame = sOam_2fac38,
        .timer = 10,
    },
    [5] = {
        .pFrame = sOam_2fac64,
        .timer = 12,
    },
    [6] = {
        .pFrame = sOam_2fac90,
        .timer = 16,
    },
    [7] = {
        .pFrame = sOam_2facb6,
        .timer = 18,
    },
    [8] = {
        .pFrame = sOam_2facdc,
        .timer = 14,
    },
    [9] = {
        .pFrame = sOam_2fad08,
        .timer = 10,
    },
    [10] = {
        .pFrame = sOam_2fad2e,
        .timer = 12,
    },
    [11] = {
        .pFrame = sOam_2fad54,
        .timer = 8,
    },
    [12] = {
        .pFrame = sOam_2fac38,
        .timer = 12,
    },
    [13] = {
        .pFrame = sOam_2fac64,
        .timer = 8,
    },
    [14] = {
        .pFrame = sOam_2fac90,
        .timer = 12,
    },
    [15] = {
        .pFrame = sOam_2facb6,
        .timer = 6,
    },
    [16] = {
        .pFrame = sOam_2fac38,
        .timer = 10,
    },
    [17] = {
        .pFrame = sOam_2fad08,
        .timer = 10,
    },
    [18] = {
        .pFrame = sOam_2fac90,
        .timer = 10,
    },
    [19] = {
        .pFrame = sOam_2facb6,
        .timer = 18,
    },
    [20] = {
        .pFrame = sOam_2facdc,
        .timer = 14,
    },
    [21] = {
        .pFrame = sOam_2fac64,
        .timer = 16,
    },
    [22] = {
        .pFrame = sOam_2fad2e,
        .timer = 16,
    },
    [23] = {
        .pFrame = sOam_2fad54,
        .timer = 8,
    },
    [24] = {
        .pFrame = sOam_2fad7a,
        .timer = 12,
    },
    [25] = {
        .pFrame = sOam_2fada6,
        .timer = 8,
    },
    [26] = {
        .pFrame = sOam_2fadcc,
        .timer = 16,
    },
    [27] = {
        .pFrame = sOam_2fadf2,
        .timer = 10,
    },
    [28] = FRAME_DATA_TERMINATOR
};

const struct FrameData sFrameData_2fb410[2] = {
    [0] = {
        .pFrame = sOam_2fb158,
        .timer = 14,
    },
    [1] = FRAME_DATA_TERMINATOR
};

const struct FrameData sFrameData_2fb420[8] = {
    [0] = {
        .pFrame = sOam_2fae18,
        .timer = 8,
    },
    [1] = {
        .pFrame = sOam_2fb064,
        .timer = 8,
    },
    [2] = {
        .pFrame = sOam_2fb072,
        .timer = 6,
    },
    [3] = {
        .pFrame = sOam_2fb09e,
        .timer = 6,
    },
    [4] = {
        .pFrame = sOam_2fb0d6,
        .timer = 5,
    },
    [5] = {
        .pFrame = sOam_2fb114,
        .timer = 4,
    },
    [6] = {
        .pFrame = sOam_2fb13a,
        .timer = 255,
    },
    [7] = FRAME_DATA_TERMINATOR
};

const struct FrameData sFrameData_2fb460[5] = {
    [0] = {
        .pFrame = sOam_2fb1d0,
        .timer = 10,
    },
    [1] = {
        .pFrame = sOam_2fb1f6,
        .timer = 10,
    },
    [2] = {
        .pFrame = sOam_2fb216,
        .timer = 10,
    },
    [3] = {
        .pFrame = sOam_2fb236,
        .timer = 10,
    },
    [4] = FRAME_DATA_TERMINATOR
};

const struct FrameData sFrameData_2fb488[7] = {
    [0] = {
        .pFrame = sOam_2fb236,
        .timer = 10,
    },
    [1] = {
        .pFrame = sOam_2fb216,
        .timer = 10,
    },
    [2] = {
        .pFrame = sOam_2fb1f6,
        .timer = 10,
    },
    [3] = {
        .pFrame = sOam_2fb1d0,
        .timer = 10,
    },
    [4] = {
        .pFrame = sOam_2fb1a4,
        .timer = 10,
    },
    [5] = {
        .pFrame = sOam_2fae18,
        .timer = 10,
    },
    [6] = FRAME_DATA_TERMINATOR
};

const struct FrameData sFrameData_2fb4c0[2] = {
    [0] = {
        .pFrame = sOam_2fb1a4,
        .timer = 10,
    },
    [1] = FRAME_DATA_TERMINATOR
};

const struct FrameData sFrameData_2fb4d0[11] = {
    [0] = {
        .pFrame = sOam_2fb142,
        .timer = 8,
    },
    [1] = {
        .pFrame = sOam_2fb13a,
        .timer = 8,
    },
    [2] = {
        .pFrame = sOam_2fb142,
        .timer = 8,
    },
    [3] = {
        .pFrame = sOam_2fb13a,
        .timer = 8,
    },
    [4] = {
        .pFrame = sOam_2fb142,
        .timer = 8,
    },
    [5] = {
        .pFrame = sOam_2faf0c,
        .timer = 8,
    },
    [6] = {
        .pFrame = sOam_2faf42,
        .timer = 8,
    },
    [7] = {
        .pFrame = sOam_2fafaa,
        .timer = 8,
    },
    [8] = {
        .pFrame = sOam_2faff8,
        .timer = 8,
    },
    [9] = {
        .pFrame = sOam_2fb00c,
        .timer = 8,
    },
    [10] = FRAME_DATA_TERMINATOR
};

const struct FrameData sFrameData_2fb528[21] = {
    [0] = {
        .pFrame = sOam_2faed4,
        .timer = 8,
    },
    [1] = {
        .pFrame = sOam_2faee2,
        .timer = 4,
    },
    [2] = {
        .pFrame = sOam_2faef0,
        .timer = 6,
    },
    [3] = {
        .pFrame = sOam_2faefe,
        .timer = 8,
    },
    [4] = {
        .pFrame = sOam_2faef0,
        .timer = 2,
    },
    [5] = {
        .pFrame = sOam_2faee2,
        .timer = 2,
    },
    [6] = {
        .pFrame = sOam_2faed4,
        .timer = 4,
    },
    [7] = {
        .pFrame = sOam_2faee2,
        .timer = 4,
    },
    [8] = {
        .pFrame = sOam_2faed4,
        .timer = 16,
    },
    [9] = {
        .pFrame = sOam_2faee2,
        .timer = 8,
    },
    [10] = {
        .pFrame = sOam_2faef0,
        .timer = 16,
    },
    [11] = {
        .pFrame = sOam_2faefe,
        .timer = 16,
    },
    [12] = {
        .pFrame = sOam_2faef0,
        .timer = 4,
    },
    [13] = {
        .pFrame = sOam_2faee2,
        .timer = 4,
    },
    [14] = {
        .pFrame = sOam_2faed4,
        .timer = 8,
    },
    [15] = {
        .pFrame = sOam_2faee2,
        .timer = 16,
    },
    [16] = {
        .pFrame = sOam_2faed4,
        .timer = 11,
    },
    [17] = {
        .pFrame = sOam_2faee2,
        .timer = 6,
    },
    [18] = {
        .pFrame = sOam_2faef0,
        .timer = 4,
    },
    [19] = {
        .pFrame = sOam_2faefe,
        .timer = 16,
    },
    [20] = FRAME_DATA_TERMINATOR
};

const struct FrameData sFrameData_2fb5d0[8] = {
    [0] = {
        .pFrame = sOam_2fb14a,
        .timer = 8,
    },
    [1] = {
        .pFrame = sOam_2faed4,
        .timer = 4,
    },
    [2] = {
        .pFrame = sOam_2faee2,
        .timer = 4,
    },
    [3] = {
        .pFrame = sOam_2faef0,
        .timer = 4,
    },
    [4] = {
        .pFrame = sOam_2faefe,
        .timer = 4,
    },
    [5] = {
        .pFrame = sOam_2faef0,
        .timer = 2,
    },
    [6] = {
        .pFrame = sOam_2faefe,
        .timer = 2,
    },
    [7] = FRAME_DATA_TERMINATOR
};

static const u8 sBlob_2fb610_35dd74[] = INCBIN_U8("data/Blob_2fb610_35dd74.bin");