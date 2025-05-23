#include "data/sprites/data_pad.h"

const u32 sDataPadGfx[512 * 3] = INCBIN_U32("data/sprites/datapad.gfx");
const u16 sDataPadPal[16 * 3] = INCBIN_U16("data/sprites/datapad.pal");

static const u16 sDataPadSidesOam_Idle_Frame0[] = {
    16,
    OBJ_SHAPE_VERTICAL | 0xcc, OBJ_X_FLIP | 0xf, OBJ_PALETTE_8 | 0x25c,
    0xcf, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x13, OBJ_PALETTE_8 | 0x25a,
    OBJ_SHAPE_VERTICAL | 0xcc, 0x1e9, OBJ_PALETTE_8 | 0x25c,
    0xcf, OBJ_SIZE_16x16 | 0x1dd, OBJ_PALETTE_8 | 0x25a,
    OBJ_SHAPE_VERTICAL | 0xd8, OBJ_X_FLIP | OBJ_SIZE_16x32 | 0x18, OBJ_PALETTE_8 | 0x214,
    OBJ_SHAPE_HORIZONTAL | 0xf8, OBJ_X_FLIP | 0x18, OBJ_PALETTE_8 | 0x294,
    OBJ_SHAPE_VERTICAL | 0xd8, OBJ_X_FLIP | OBJ_SIZE_8x32 | 0x10, OBJ_PALETTE_8 | 0x216,
    0xf8, OBJ_X_FLIP | 0x10, OBJ_PALETTE_8 | 0x296,
    OBJ_SHAPE_VERTICAL | 0xd8, OBJ_SIZE_16x32 | 0x1d8, OBJ_PALETTE_8 | 0x214,
    OBJ_SHAPE_HORIZONTAL | 0xf8, 0x1d8, OBJ_PALETTE_8 | 0x294,
    OBJ_SHAPE_VERTICAL | 0xd8, OBJ_SIZE_8x32 | 0x1e8, OBJ_PALETTE_8 | 0x216,
    0xf8, 0x1e8, OBJ_PALETTE_8 | 0x296,
    OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1d8, OBJ_PALETTE_8 | 0x280,
    0xd0, OBJ_X_FLIP | OBJ_SIZE_32x32 | 0x8, OBJ_PALETTE_8 | 0x200,
    OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x8, OBJ_PALETTE_8 | 0x280,
    0xd0, OBJ_SIZE_32x32 | 0x1d8, OBJ_PALETTE_8 | 0x200
};

static const u16 sDataPadSidesOam_Engaging_Frame0[] = {
    16,
    OBJ_SHAPE_VERTICAL | 0xcc, OBJ_X_FLIP | 0xf, OBJ_PALETTE_8 | 0x25c,
    0xcf, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x14, OBJ_PALETTE_8 | 0x25a,
    OBJ_SHAPE_VERTICAL | 0xcc, 0x1e9, OBJ_PALETTE_8 | 0x25c,
    0xcf, OBJ_SIZE_16x16 | 0x1dc, OBJ_PALETTE_8 | 0x25a,
    OBJ_SHAPE_VERTICAL | 0xd8, OBJ_SIZE_8x32 | 0x1e8, OBJ_PALETTE_8 | 0x257,
    OBJ_SHAPE_VERTICAL | 0xd8, OBJ_X_FLIP | OBJ_SIZE_8x32 | 0x10, OBJ_PALETTE_8 | 0x257,
    OBJ_SHAPE_VERTICAL | 0xd8, OBJ_X_FLIP | OBJ_SIZE_16x32 | 0x18, OBJ_PALETTE_8 | 0x214,
    OBJ_SHAPE_HORIZONTAL | 0xf8, OBJ_X_FLIP | 0x18, OBJ_PALETTE_8 | 0x294,
    0xf8, OBJ_X_FLIP | 0x10, OBJ_PALETTE_8 | 0x296,
    OBJ_SHAPE_VERTICAL | 0xd8, OBJ_SIZE_16x32 | 0x1d8, OBJ_PALETTE_8 | 0x214,
    OBJ_SHAPE_HORIZONTAL | 0xf8, 0x1d8, OBJ_PALETTE_8 | 0x294,
    0xf8, 0x1e8, OBJ_PALETTE_8 | 0x296,
    0xd0, OBJ_SIZE_32x32 | 0x1d8, OBJ_PALETTE_8 | 0x200,
    OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1d8, OBJ_PALETTE_8 | 0x280,
    0xd0, OBJ_X_FLIP | OBJ_SIZE_32x32 | 0x8, OBJ_PALETTE_8 | 0x200,
    OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x8, OBJ_PALETTE_8 | 0x280
};

static const u16 sDataPadSidesOam_Engaging_Frame1[] = {
    16,
    OBJ_SHAPE_VERTICAL | 0xcc, OBJ_X_FLIP | 0xf, OBJ_PALETTE_8 | 0x25c,
    0xcf, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x15, OBJ_PALETTE_8 | 0x25a,
    OBJ_SHAPE_VERTICAL | 0xcc, 0x1e9, OBJ_PALETTE_8 | 0x25c,
    0xcf, OBJ_SIZE_16x16 | 0x1db, OBJ_PALETTE_8 | 0x25a,
    OBJ_SHAPE_VERTICAL | 0xd8, OBJ_SIZE_8x32 | 0x1e8, OBJ_PALETTE_8 | 0x258,
    OBJ_SHAPE_VERTICAL | 0xd8, OBJ_X_FLIP | OBJ_SIZE_8x32 | 0x10, OBJ_PALETTE_8 | 0x258,
    OBJ_SHAPE_VERTICAL | 0xd8, OBJ_X_FLIP | OBJ_SIZE_16x32 | 0x18, OBJ_PALETTE_8 | 0x214,
    OBJ_SHAPE_HORIZONTAL | 0xf8, OBJ_X_FLIP | 0x18, OBJ_PALETTE_8 | 0x294,
    0xf8, OBJ_X_FLIP | 0x10, OBJ_PALETTE_8 | 0x296,
    OBJ_SHAPE_VERTICAL | 0xd8, OBJ_SIZE_16x32 | 0x1d8, OBJ_PALETTE_8 | 0x214,
    OBJ_SHAPE_HORIZONTAL | 0xf8, 0x1d8, OBJ_PALETTE_8 | 0x294,
    0xf8, 0x1e8, OBJ_PALETTE_8 | 0x296,
    0xd0, OBJ_SIZE_32x32 | 0x1d8, OBJ_PALETTE_8 | 0x200,
    OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1d8, OBJ_PALETTE_8 | 0x280,
    0xd0, OBJ_X_FLIP | OBJ_SIZE_32x32 | 0x8, OBJ_PALETTE_8 | 0x200,
    OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x8, OBJ_PALETTE_8 | 0x280
};

static const u16 sDataPadSidesOam_Engaging_Frame2[] = {
    16,
    OBJ_SHAPE_VERTICAL | 0xcb, OBJ_X_FLIP | 0xf, OBJ_PALETTE_8 | 0x25c,
    0xcf, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x15, OBJ_PALETTE_8 | 0x25a,
    OBJ_SHAPE_VERTICAL | 0xcb, 0x1e9, OBJ_PALETTE_8 | 0x25c,
    0xcf, OBJ_SIZE_16x16 | 0x1db, OBJ_PALETTE_8 | 0x25a,
    OBJ_SHAPE_VERTICAL | 0xd8, OBJ_SIZE_8x32 | 0x1e8, OBJ_PALETTE_8 | 0x259,
    OBJ_SHAPE_VERTICAL | 0xd8, OBJ_X_FLIP | OBJ_SIZE_8x32 | 0x10, OBJ_PALETTE_8 | 0x259,
    OBJ_SHAPE_VERTICAL | 0xd8, OBJ_X_FLIP | OBJ_SIZE_16x32 | 0x18, OBJ_PALETTE_8 | 0x214,
    OBJ_SHAPE_HORIZONTAL | 0xf8, OBJ_X_FLIP | 0x18, OBJ_PALETTE_8 | 0x294,
    0xf8, OBJ_X_FLIP | 0x10, OBJ_PALETTE_8 | 0x296,
    OBJ_SHAPE_VERTICAL | 0xd8, OBJ_SIZE_16x32 | 0x1d8, OBJ_PALETTE_8 | 0x214,
    OBJ_SHAPE_HORIZONTAL | 0xf8, 0x1d8, OBJ_PALETTE_8 | 0x294,
    0xf8, 0x1e8, OBJ_PALETTE_8 | 0x296,
    0xd0, OBJ_SIZE_32x32 | 0x1d8, OBJ_PALETTE_8 | 0x200,
    OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1d8, OBJ_PALETTE_8 | 0x280,
    0xd0, OBJ_X_FLIP | OBJ_SIZE_32x32 | 0x8, OBJ_PALETTE_8 | 0x200,
    OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x8, OBJ_PALETTE_8 | 0x280
};

static const u16 sDataPadSidesOam_DownloadingData_Frame0[] = {
    8,
    OBJ_SHAPE_VERTICAL | 0xcb, OBJ_X_FLIP | 0xf, OBJ_PALETTE_8 | 0x25c,
    0xcf, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x15, OBJ_PALETTE_8 | 0x25a,
    OBJ_SHAPE_VERTICAL | 0xcb, 0x1e9, OBJ_PALETTE_8 | 0x25c,
    0xcf, OBJ_SIZE_16x16 | 0x1db, OBJ_PALETTE_8 | 0x25a,
    0xd0, OBJ_SIZE_32x32 | 0x1d8, OBJ_PALETTE_8 | 0x200,
    OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1d8, OBJ_PALETTE_8 | 0x280,
    0xd0, OBJ_X_FLIP | OBJ_SIZE_32x32 | 0x8, OBJ_PALETTE_8 | 0x200,
    OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x8, OBJ_PALETTE_8 | 0x280
};

static const u16 sDataPadCenterOam_Offline_Frame0[] = {
    6,
    OBJ_SHAPE_VERTICAL | 0xd0, OBJ_SIZE_16x32 | 0x1f0, OBJ_PALETTE_8 | 0x203,
    0xf0, OBJ_SIZE_16x16 | 0x1f0, OBJ_PALETTE_8 | 0x283,
    OBJ_SHAPE_VERTICAL | 0xd0, OBJ_X_FLIP | OBJ_SIZE_16x32 | 0x0, OBJ_PALETTE_8 | 0x203,
    0xf0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x0, OBJ_PALETTE_8 | 0x283,
    OBJ_SHAPE_VERTICAL | 0xd8, 0x1d9, OBJ_PALETTE_8 | 0x21f,
    OBJ_SHAPE_VERTICAL | 0xd8, OBJ_X_FLIP | 0x1f, OBJ_PALETTE_8 | 0x21f
};

static const u16 sDataPadCenterOam_Online_Frame0[] = {
    8,
    OBJ_SHAPE_VERTICAL | 0xd8, 0x1d8, OBJ_PALETTE_8 | 0x217,
    OBJ_SHAPE_VERTICAL | 0xd8, OBJ_X_FLIP | 0x20, OBJ_PALETTE_8 | 0x217,
    OBJ_SHAPE_VERTICAL | 0xd0, OBJ_SIZE_16x32 | 0x1f0, OBJ_PALETTE_9 | 0x20e,
    OBJ_SHAPE_HORIZONTAL | 0xf0, 0x1f0, OBJ_PALETTE_9 | 0x28e,
    OBJ_SHAPE_HORIZONTAL | 0xf8, 0x1f0, OBJ_PALETTE_8 | 0x2a3,
    OBJ_SHAPE_VERTICAL | 0xd0, OBJ_X_FLIP | OBJ_SIZE_16x32 | 0x0, OBJ_PALETTE_9 | 0x20e,
    OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | 0x0, OBJ_PALETTE_9 | 0x28e,
    OBJ_SHAPE_HORIZONTAL | 0xf8, OBJ_X_FLIP | 0x0, OBJ_PALETTE_8 | 0x2a3
};

static const u16 sDataPadCenterOam_Online_Frame1[] = {
    8,
    OBJ_SHAPE_VERTICAL | 0xd8, 0x1d8, OBJ_PALETTE_8 | 0x218,
    OBJ_SHAPE_VERTICAL | 0xd8, OBJ_X_FLIP | 0x20, OBJ_PALETTE_8 | 0x218,
    OBJ_SHAPE_HORIZONTAL | 0xf8, 0x1f0, OBJ_PALETTE_8 | 0x2a3,
    OBJ_SHAPE_VERTICAL | 0xd0, OBJ_SIZE_16x32 | 0x1f0, OBJ_PALETTE_9 | 0x210,
    OBJ_SHAPE_HORIZONTAL | 0xf0, 0x1f0, OBJ_PALETTE_9 | 0x290,
    OBJ_SHAPE_HORIZONTAL | 0xf8, OBJ_X_FLIP | 0x0, OBJ_PALETTE_8 | 0x2a3,
    OBJ_SHAPE_VERTICAL | 0xd0, OBJ_X_FLIP | OBJ_SIZE_16x32 | 0x0, OBJ_PALETTE_9 | 0x210,
    OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | 0x0, OBJ_PALETTE_9 | 0x290
};

static const u16 sDataPadCenterOam_Online_Frame2[] = {
    8,
    OBJ_SHAPE_VERTICAL | 0xd8, 0x1d8, OBJ_PALETTE_8 | 0x219,
    OBJ_SHAPE_VERTICAL | 0xd8, OBJ_X_FLIP | 0x20, OBJ_PALETTE_8 | 0x219,
    OBJ_SHAPE_HORIZONTAL | 0xf8, 0x1f0, OBJ_PALETTE_8 | 0x2a3,
    OBJ_SHAPE_VERTICAL | 0xd0, OBJ_SIZE_16x32 | 0x1f0, OBJ_PALETTE_9 | 0x212,
    OBJ_SHAPE_HORIZONTAL | 0xf0, 0x1f0, OBJ_PALETTE_9 | 0x292,
    OBJ_SHAPE_HORIZONTAL | 0xf8, OBJ_X_FLIP | 0x0, OBJ_PALETTE_8 | 0x2a3,
    OBJ_SHAPE_VERTICAL | 0xd0, OBJ_X_FLIP | OBJ_SIZE_16x32 | 0x0, OBJ_PALETTE_9 | 0x212,
    OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | 0x0, OBJ_PALETTE_9 | 0x292
};

static const u16 sDataPadCenterOam_DownloadingData_Frame0[] = {
    6,
    OBJ_SHAPE_VERTICAL | 0xd0, OBJ_SIZE_16x32 | 0x1f0, OBJ_PALETTE_9 | 0x205,
    0xf0, OBJ_SIZE_16x16 | 0x1f0, OBJ_PALETTE_9 | 0x285,
    OBJ_SHAPE_VERTICAL | 0xd0, OBJ_X_FLIP | OBJ_SIZE_16x32 | 0x0, OBJ_PALETTE_9 | 0x205,
    0xf0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x0, OBJ_PALETTE_9 | 0x285,
    OBJ_SHAPE_VERTICAL | 0xd8, 0x1d8, OBJ_PALETTE_8 | 0x219,
    OBJ_SHAPE_VERTICAL | 0xd8, OBJ_X_FLIP | 0x20, OBJ_PALETTE_8 | 0x219
};

static const u16 sDataPadCenterOam_DownloadingData_Frame1[] = {
    6,
    OBJ_SHAPE_VERTICAL | 0xd8, 0x1d8, OBJ_PALETTE_8 | 0x218,
    OBJ_SHAPE_VERTICAL | 0xd8, OBJ_X_FLIP | 0x20, OBJ_PALETTE_8 | 0x218,
    OBJ_SHAPE_VERTICAL | 0xd0, OBJ_SIZE_16x32 | 0x1f0, OBJ_PALETTE_9 | 0x207,
    0xf0, OBJ_SIZE_16x16 | 0x1f0, OBJ_PALETTE_9 | 0x287,
    OBJ_SHAPE_VERTICAL | 0xd0, OBJ_X_FLIP | OBJ_SIZE_16x32 | 0x0, OBJ_PALETTE_9 | 0x207,
    0xf0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x0, OBJ_PALETTE_9 | 0x287
};

static const u16 sDataPadCenterOam_DownloadingData_Frame2[] = {
    6,
    OBJ_SHAPE_VERTICAL | 0xd8, 0x1d8, OBJ_PALETTE_8 | 0x217,
    OBJ_SHAPE_VERTICAL | 0xd8, OBJ_X_FLIP | 0x20, OBJ_PALETTE_8 | 0x217,
    OBJ_SHAPE_VERTICAL | 0xd0, OBJ_SIZE_16x32 | 0x1f0, OBJ_PALETTE_9 | 0x209,
    0xf0, OBJ_SIZE_16x16 | 0x1f0, OBJ_PALETTE_9 | 0x289,
    OBJ_SHAPE_VERTICAL | 0xd0, OBJ_X_FLIP | OBJ_SIZE_16x32 | 0x0, OBJ_PALETTE_9 | 0x209,
    0xf0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x0, OBJ_PALETTE_9 | 0x289
};

static const u16 sOam_321360[] = {
    12,
    OBJ_SHAPE_VERTICAL | 0xcb, OBJ_X_FLIP | 0xf, OBJ_PALETTE_8 | 0x25c,
    0xcf, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x15, OBJ_PALETTE_8 | 0x25a,
    OBJ_SHAPE_VERTICAL | 0xcb, 0x1e9, OBJ_PALETTE_8 | 0x25c,
    0xcf, OBJ_SIZE_16x16 | 0x1db, OBJ_PALETTE_8 | 0x25a,
    OBJ_SHAPE_VERTICAL | 0xd8, OBJ_X_FLIP | OBJ_SIZE_16x32 | 0x18, OBJ_PALETTE_8 | 0x214,
    OBJ_SHAPE_HORIZONTAL | 0xf8, OBJ_X_FLIP | 0x18, OBJ_PALETTE_8 | 0x294,
    OBJ_SHAPE_VERTICAL | 0xd8, OBJ_X_FLIP | OBJ_SIZE_8x32 | 0x10, OBJ_PALETTE_8 | 0x216,
    0xf8, OBJ_X_FLIP | 0x10, OBJ_PALETTE_8 | 0x296,
    0xd0, OBJ_SIZE_32x32 | 0x1d8, OBJ_PALETTE_8 | 0x200,
    OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1d8, OBJ_PALETTE_8 | 0x280,
    0xd0, OBJ_X_FLIP | OBJ_SIZE_32x32 | 0x8, OBJ_PALETTE_8 | 0x200,
    OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x8, OBJ_PALETTE_8 | 0x280
};

static const u16 sDataPadOam_Unpressed_Frame0[] = {
    23,
    OBJ_SHAPE_HORIZONTAL | 0x0, 0x1e8, OBJ_PALETTE_10 | 0x24b,
    0x0, 0x1f8, OBJ_PALETTE_10 | 0x24d,
    OBJ_SHAPE_HORIZONTAL | 0x0, OBJ_X_FLIP | 0x8, OBJ_PALETTE_10 | 0x24b,
    0x0, OBJ_X_FLIP | 0x0, OBJ_PALETTE_10 | 0x24d,
    OBJ_SHAPE_VERTICAL | 0x8, 0x1e9, OBJ_PALETTE_10 | 0x21a,
    0x8, OBJ_SIZE_16x16 | 0x1ee, OBJ_PALETTE_10 | 0x21b,
    0x8, OBJ_SIZE_16x16 | 0x1f8, OBJ_PALETTE_10 | 0x21d,
    0x8, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x2, OBJ_PALETTE_10 | 0x21b,
    OBJ_SHAPE_VERTICAL | 0x8, OBJ_X_FLIP | 0xf, OBJ_PALETTE_10 | 0x21a,
    OBJ_SHAPE_HORIZONTAL | 0xf8, 0x1f0, OBJ_PALETTE_10 | 0x2ab,
    OBJ_SHAPE_HORIZONTAL | 0xf8, OBJ_X_FLIP | 0x0, OBJ_PALETTE_10 | 0x2ab,
    0x8, OBJ_SIZE_16x16 | 0x1e8, OBJ_PALETTE_10 | 0x20b,
    OBJ_SHAPE_VERTICAL | 0x8, 0x1f8, OBJ_PALETTE_10 | 0x20d,
    0x8, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x8, OBJ_PALETTE_10 | 0x20b,
    OBJ_SHAPE_VERTICAL | 0x8, OBJ_X_FLIP | 0x0, OBJ_PALETTE_10 | 0x20d,
    OBJ_SHAPE_HORIZONTAL | 0x18, 0x1e8, OBJ_PALETTE_10 | 0x25d,
    0x18, 0x1f8, OBJ_PALETTE_10 | 0x25f,
    OBJ_SHAPE_HORIZONTAL | 0x20, 0x1e8, OBJ_PALETTE_10 | 0x25d,
    0x20, 0x1f8, OBJ_PALETTE_10 | 0x25f,
    OBJ_SHAPE_HORIZONTAL | 0x18, OBJ_X_FLIP | 0x8, OBJ_PALETTE_10 | 0x25d,
    0x18, OBJ_X_FLIP | 0x0, OBJ_PALETTE_10 | 0x25f,
    OBJ_SHAPE_HORIZONTAL | 0x20, OBJ_X_FLIP | 0x8, OBJ_PALETTE_10 | 0x25d,
    0x20, OBJ_X_FLIP | 0x0, OBJ_PALETTE_10 | 0x25f
};

static const u16 sDataPadOam_Pressing_Frame0[] = {
    23,
    0x8, OBJ_SIZE_16x16 | 0x1f8, OBJ_PALETTE_10 | 0x21d,
    OBJ_SHAPE_HORIZONTAL | 0x0, 0x1e8, OBJ_PALETTE_10 | 0x24b,
    0x0, 0x1f8, OBJ_PALETTE_10 | 0x24d,
    OBJ_SHAPE_HORIZONTAL | 0x0, OBJ_X_FLIP | 0x8, OBJ_PALETTE_10 | 0x24b,
    0x0, OBJ_X_FLIP | 0x0, OBJ_PALETTE_10 | 0x24d,
    OBJ_SHAPE_VERTICAL | 0x8, 0x1e9, OBJ_PALETTE_10 | 0x21a,
    0x8, OBJ_SIZE_16x16 | 0x1ee, OBJ_PALETTE_10 | 0x21b,
    0x8, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x2, OBJ_PALETTE_10 | 0x21b,
    OBJ_SHAPE_VERTICAL | 0x8, OBJ_X_FLIP | 0xf, OBJ_PALETTE_10 | 0x21a,
    OBJ_SHAPE_HORIZONTAL | 0xf9, 0x1f0, OBJ_PALETTE_10 | 0x2ab,
    OBJ_SHAPE_HORIZONTAL | 0xf9, OBJ_X_FLIP | 0x0, OBJ_PALETTE_10 | 0x2ab,
    0x8, OBJ_SIZE_16x16 | 0x1e8, OBJ_PALETTE_10 | 0x20b,
    OBJ_SHAPE_VERTICAL | 0x8, 0x1f8, OBJ_PALETTE_10 | 0x20d,
    0x8, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x8, OBJ_PALETTE_10 | 0x20b,
    OBJ_SHAPE_VERTICAL | 0x8, OBJ_X_FLIP | 0x0, OBJ_PALETTE_10 | 0x20d,
    OBJ_SHAPE_HORIZONTAL | 0x18, 0x1e8, OBJ_PALETTE_10 | 0x27d,
    0x18, 0x1f8, OBJ_PALETTE_10 | 0x27f,
    OBJ_SHAPE_HORIZONTAL | 0x18, OBJ_X_FLIP | 0x8, OBJ_PALETTE_10 | 0x27d,
    0x18, OBJ_X_FLIP | 0x0, OBJ_PALETTE_10 | 0x27f,
    OBJ_SHAPE_HORIZONTAL | 0x20, 0x1e8, OBJ_PALETTE_10 | 0x25d,
    0x20, 0x1f8, OBJ_PALETTE_10 | 0x25f,
    OBJ_SHAPE_HORIZONTAL | 0x20, OBJ_X_FLIP | 0x8, OBJ_PALETTE_10 | 0x25d,
    0x20, OBJ_X_FLIP | 0x0, OBJ_PALETTE_10 | 0x25f
};

static const u16 sDataPadOam_Pressing_Frame1[] = {
    23,
    OBJ_SHAPE_HORIZONTAL | 0x0, 0x1e8, OBJ_PALETTE_10 | 0x26b,
    0x0, 0x1f8, OBJ_PALETTE_10 | 0x26d,
    OBJ_SHAPE_HORIZONTAL | 0x0, OBJ_X_FLIP | 0x8, OBJ_PALETTE_10 | 0x26b,
    0x0, OBJ_X_FLIP | 0x0, OBJ_PALETTE_10 | 0x26d,
    OBJ_SHAPE_VERTICAL | 0x9, 0x1e9, OBJ_PALETTE_10 | 0x21a,
    0x9, OBJ_SIZE_16x16 | 0x1ee, OBJ_PALETTE_10 | 0x21b,
    0x9, OBJ_SIZE_16x16 | 0x1f8, OBJ_PALETTE_10 | 0x21d,
    0x9, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x2, OBJ_PALETTE_10 | 0x21b,
    OBJ_SHAPE_VERTICAL | 0x9, OBJ_X_FLIP | 0xf, OBJ_PALETTE_10 | 0x21a,
    OBJ_SHAPE_HORIZONTAL | 0xfb, 0x1f0, OBJ_PALETTE_10 | 0x2ab,
    OBJ_SHAPE_HORIZONTAL | 0xfb, OBJ_X_FLIP | 0x0, OBJ_PALETTE_10 | 0x2ab,
    0x8, OBJ_SIZE_16x16 | 0x1e8, OBJ_PALETTE_10 | 0x20b,
    OBJ_SHAPE_VERTICAL | 0x8, 0x1f8, OBJ_PALETTE_10 | 0x20d,
    0x8, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x8, OBJ_PALETTE_10 | 0x20b,
    OBJ_SHAPE_VERTICAL | 0x8, OBJ_X_FLIP | 0x0, OBJ_PALETTE_10 | 0x20d,
    OBJ_SHAPE_HORIZONTAL | 0x18, 0x1e8, OBJ_PALETTE_10 | 0x29d,
    0x18, 0x1f8, OBJ_PALETTE_10 | 0x29f,
    OBJ_SHAPE_HORIZONTAL | 0x18, OBJ_X_FLIP | 0x8, OBJ_PALETTE_10 | 0x29d,
    0x18, OBJ_X_FLIP | 0x0, OBJ_PALETTE_10 | 0x29f,
    OBJ_SHAPE_HORIZONTAL | 0x20, 0x1e8, OBJ_PALETTE_10 | 0x25d,
    0x20, 0x1f8, OBJ_PALETTE_10 | 0x25f,
    OBJ_SHAPE_HORIZONTAL | 0x20, OBJ_X_FLIP | 0x8, OBJ_PALETTE_10 | 0x25d,
    0x20, OBJ_X_FLIP | 0x0, OBJ_PALETTE_10 | 0x25f
};

static const u16 sDataPadOam_Pressing_Frame2[] = {
    21,
    OBJ_SHAPE_HORIZONTAL | 0x0, 0x1e8, OBJ_PALETTE_10 | 0x28b,
    0x0, 0x1f8, OBJ_PALETTE_10 | 0x28d,
    0x0, OBJ_X_FLIP | 0x0, OBJ_PALETTE_10 | 0x28d,
    OBJ_SHAPE_HORIZONTAL | 0x0, OBJ_X_FLIP | 0x8, OBJ_PALETTE_10 | 0x28b,
    OBJ_SHAPE_VERTICAL | 0x9, 0x1e8, OBJ_PALETTE_10 | 0x21a,
    0x9, OBJ_SIZE_16x16 | 0x1ed, OBJ_PALETTE_10 | 0x21b,
    0x9, OBJ_SIZE_16x16 | 0x1f8, OBJ_PALETTE_10 | 0x21d,
    0x9, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x3, OBJ_PALETTE_10 | 0x21b,
    OBJ_SHAPE_VERTICAL | 0x9, OBJ_X_FLIP | 0x10, OBJ_PALETTE_10 | 0x21a,
    0x8, OBJ_SIZE_16x16 | 0x1e8, OBJ_PALETTE_10 | 0x20b,
    OBJ_SHAPE_VERTICAL | 0x8, 0x1f8, OBJ_PALETTE_10 | 0x20d,
    0x8, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x8, OBJ_PALETTE_10 | 0x20b,
    OBJ_SHAPE_VERTICAL | 0x8, OBJ_X_FLIP | 0x0, OBJ_PALETTE_10 | 0x20d,
    OBJ_SHAPE_HORIZONTAL | 0x18, 0x1e8, OBJ_PALETTE_10 | 0x29d,
    0x18, 0x1f8, OBJ_PALETTE_10 | 0x29f,
    OBJ_SHAPE_HORIZONTAL | 0x18, OBJ_X_FLIP | 0x8, OBJ_PALETTE_10 | 0x29d,
    0x18, OBJ_X_FLIP | 0x0, OBJ_PALETTE_10 | 0x29f,
    OBJ_SHAPE_HORIZONTAL | 0x20, 0x1e8, OBJ_PALETTE_10 | 0x27d,
    0x20, 0x1f8, OBJ_PALETTE_10 | 0x27f,
    OBJ_SHAPE_HORIZONTAL | 0x20, OBJ_X_FLIP | 0x8, OBJ_PALETTE_10 | 0x27d,
    0x20, OBJ_X_FLIP | 0x0, OBJ_PALETTE_10 | 0x27f
};

static const u16 sDataPadOam_Pressed_Frame0[] = {
    21,
    OBJ_SHAPE_HORIZONTAL | 0x0, 0x1e8, OBJ_PALETTE_10 | 0x28b,
    0x0, 0x1f8, OBJ_PALETTE_10 | 0x28d,
    0x0, OBJ_X_FLIP | 0x0, OBJ_PALETTE_10 | 0x28d,
    0x9, OBJ_SIZE_16x16 | 0x1f8, OBJ_PALETTE_10 | 0x21d,
    OBJ_SHAPE_HORIZONTAL | 0x0, OBJ_X_FLIP | 0x8, OBJ_PALETTE_10 | 0x28b,
    OBJ_SHAPE_VERTICAL | 0x9, 0x1e7, OBJ_PALETTE_10 | 0x21a,
    0x9, OBJ_SIZE_16x16 | 0x1ed, OBJ_PALETTE_10 | 0x21b,
    0x9, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x3, OBJ_PALETTE_10 | 0x21b,
    OBJ_SHAPE_VERTICAL | 0x9, OBJ_X_FLIP | 0x11, OBJ_PALETTE_10 | 0x21a,
    0x8, OBJ_SIZE_16x16 | 0x1e8, OBJ_PALETTE_10 | 0x20b,
    OBJ_SHAPE_VERTICAL | 0x8, 0x1f8, OBJ_PALETTE_10 | 0x20d,
    0x8, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x8, OBJ_PALETTE_10 | 0x20b,
    OBJ_SHAPE_VERTICAL | 0x8, OBJ_X_FLIP | 0x0, OBJ_PALETTE_10 | 0x20d,
    OBJ_SHAPE_HORIZONTAL | 0x18, 0x1e8, OBJ_PALETTE_10 | 0x29d,
    0x18, 0x1f8, OBJ_PALETTE_10 | 0x29f,
    OBJ_SHAPE_HORIZONTAL | 0x20, 0x1e8, OBJ_PALETTE_10 | 0x29d,
    0x20, 0x1f8, OBJ_PALETTE_10 | 0x29f,
    OBJ_SHAPE_HORIZONTAL | 0x18, OBJ_X_FLIP | 0x8, OBJ_PALETTE_10 | 0x29d,
    0x18, OBJ_X_FLIP | 0x0, OBJ_PALETTE_10 | 0x29f,
    OBJ_SHAPE_HORIZONTAL | 0x20, OBJ_X_FLIP | 0x8, OBJ_PALETTE_10 | 0x29d,
    0x20, OBJ_X_FLIP | 0x0, OBJ_PALETTE_10 | 0x29f
};

static const u16 sDataPadOam_321aec_Frame0[] = {
    35,
    OBJ_SHAPE_VERTICAL | 0xcc, OBJ_X_FLIP | 0xf, OBJ_PALETTE_8 | 0x25c,
    0xcf, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x13, OBJ_PALETTE_8 | 0x25a,
    OBJ_SHAPE_VERTICAL | 0xcc, 0x1e9, OBJ_PALETTE_8 | 0x25c,
    0xcf, OBJ_SIZE_16x16 | 0x1dd, OBJ_PALETTE_8 | 0x25a,
    OBJ_SHAPE_VERTICAL | 0xd0, OBJ_SIZE_16x32 | 0x1f0, OBJ_PALETTE_8 | 0x203,
    0xf0, OBJ_SIZE_16x16 | 0x1f0, OBJ_PALETTE_8 | 0x283,
    OBJ_SHAPE_VERTICAL | 0xd0, OBJ_X_FLIP | OBJ_SIZE_16x32 | 0x0, OBJ_PALETTE_8 | 0x203,
    0xf0, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x0, OBJ_PALETTE_8 | 0x283,
    OBJ_SHAPE_VERTICAL | 0xd8, OBJ_X_FLIP | OBJ_SIZE_16x32 | 0x18, OBJ_PALETTE_8 | 0x214,
    OBJ_SHAPE_HORIZONTAL | 0xf8, OBJ_X_FLIP | 0x18, OBJ_PALETTE_8 | 0x294,
    OBJ_SHAPE_VERTICAL | 0xd8, OBJ_X_FLIP | OBJ_SIZE_8x32 | 0x10, OBJ_PALETTE_8 | 0x216,
    0xf8, OBJ_X_FLIP | 0x10, OBJ_PALETTE_8 | 0x296,
    OBJ_SHAPE_VERTICAL | 0xd8, OBJ_SIZE_16x32 | 0x1d8, OBJ_PALETTE_8 | 0x214,
    OBJ_SHAPE_HORIZONTAL | 0xf8, 0x1d8, OBJ_PALETTE_8 | 0x294,
    OBJ_SHAPE_VERTICAL | 0xd8, OBJ_SIZE_8x32 | 0x1e8, OBJ_PALETTE_8 | 0x216,
    0xf8, 0x1e8, OBJ_PALETTE_8 | 0x296,
    0xd0, OBJ_SIZE_32x32 | 0x1d8, OBJ_PALETTE_8 | 0x200,
    OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1d8, OBJ_PALETTE_8 | 0x280,
    0xd0, OBJ_X_FLIP | OBJ_SIZE_32x32 | 0x8, OBJ_PALETTE_8 | 0x200,
    OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x8, OBJ_PALETTE_8 | 0x280,
    OBJ_SHAPE_VERTICAL | 0xd8, 0x1d9, OBJ_PALETTE_8 | 0x21f,
    OBJ_SHAPE_VERTICAL | 0xd8, OBJ_X_FLIP | 0x1f, OBJ_PALETTE_8 | 0x21f,
    OBJ_SHAPE_HORIZONTAL | 0x0, 0x1e8, OBJ_PALETTE_10 | 0x28b,
    0x0, 0x1f8, OBJ_PALETTE_10 | 0x28d,
    0x0, OBJ_X_FLIP | 0x0, OBJ_PALETTE_10 | 0x28d,
    0x9, OBJ_SIZE_16x16 | 0x1f8, OBJ_PALETTE_10 | 0x21d,
    OBJ_SHAPE_HORIZONTAL | 0x0, OBJ_X_FLIP | 0x8, OBJ_PALETTE_10 | 0x28b,
    OBJ_SHAPE_VERTICAL | 0x9, 0x1e7, OBJ_PALETTE_10 | 0x21a,
    0x9, OBJ_SIZE_16x16 | 0x1ed, OBJ_PALETTE_10 | 0x21b,
    0x9, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x3, OBJ_PALETTE_10 | 0x21b,
    OBJ_SHAPE_VERTICAL | 0x9, OBJ_X_FLIP | 0x11, OBJ_PALETTE_10 | 0x21a,
    0x8, OBJ_SIZE_16x16 | 0x1e8, OBJ_PALETTE_10 | 0x20b,
    OBJ_SHAPE_VERTICAL | 0x8, 0x1f8, OBJ_PALETTE_10 | 0x20d,
    0x8, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x8, OBJ_PALETTE_10 | 0x20b,
    OBJ_SHAPE_VERTICAL | 0x8, OBJ_X_FLIP | 0x0, OBJ_PALETTE_10 | 0x20d
};

static const u16 sDataPadOam_321afc_Frame0[] = {
    37,
    OBJ_SHAPE_VERTICAL | 0xcc, OBJ_X_FLIP | 0xf, OBJ_PALETTE_8 | 0x25c,
    0xcf, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x13, OBJ_PALETTE_8 | 0x25a,
    OBJ_SHAPE_VERTICAL | 0xcc, 0x1e9, OBJ_PALETTE_8 | 0x25c,
    0xcf, OBJ_SIZE_16x16 | 0x1dd, OBJ_PALETTE_8 | 0x25a,
    OBJ_SHAPE_VERTICAL | 0xd8, 0x1d8, OBJ_PALETTE_8 | 0x217,
    OBJ_SHAPE_VERTICAL | 0xd8, OBJ_X_FLIP | 0x20, OBJ_PALETTE_8 | 0x217,
    OBJ_SHAPE_VERTICAL | 0xd0, OBJ_SIZE_16x32 | 0x1f0, OBJ_PALETTE_9 | 0x20e,
    OBJ_SHAPE_HORIZONTAL | 0xf0, 0x1f0, OBJ_PALETTE_9 | 0x28e,
    OBJ_SHAPE_HORIZONTAL | 0xf8, 0x1f0, OBJ_PALETTE_8 | 0x2a3,
    OBJ_SHAPE_VERTICAL | 0xd0, OBJ_X_FLIP | OBJ_SIZE_16x32 | 0x0, OBJ_PALETTE_9 | 0x20e,
    OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | 0x0, OBJ_PALETTE_9 | 0x28e,
    OBJ_SHAPE_HORIZONTAL | 0xf8, OBJ_X_FLIP | 0x0, OBJ_PALETTE_8 | 0x2a3,
    OBJ_SHAPE_VERTICAL | 0xd8, OBJ_X_FLIP | OBJ_SIZE_16x32 | 0x18, OBJ_PALETTE_8 | 0x214,
    OBJ_SHAPE_HORIZONTAL | 0xf8, OBJ_X_FLIP | 0x18, OBJ_PALETTE_8 | 0x294,
    OBJ_SHAPE_VERTICAL | 0xd8, OBJ_X_FLIP | OBJ_SIZE_8x32 | 0x10, OBJ_PALETTE_8 | 0x216,
    0xf8, OBJ_X_FLIP | 0x10, OBJ_PALETTE_8 | 0x296,
    OBJ_SHAPE_VERTICAL | 0xd8, OBJ_SIZE_16x32 | 0x1d8, OBJ_PALETTE_8 | 0x214,
    OBJ_SHAPE_HORIZONTAL | 0xf8, 0x1d8, OBJ_PALETTE_8 | 0x294,
    OBJ_SHAPE_VERTICAL | 0xd8, OBJ_SIZE_8x32 | 0x1e8, OBJ_PALETTE_8 | 0x216,
    0xf8, 0x1e8, OBJ_PALETTE_8 | 0x296,
    0xd0, OBJ_SIZE_32x32 | 0x1d8, OBJ_PALETTE_8 | 0x200,
    OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1d8, OBJ_PALETTE_8 | 0x280,
    0xd0, OBJ_X_FLIP | OBJ_SIZE_32x32 | 0x8, OBJ_PALETTE_8 | 0x200,
    OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x8, OBJ_PALETTE_8 | 0x280,
    OBJ_SHAPE_HORIZONTAL | 0x0, 0x1e8, OBJ_PALETTE_10 | 0x28b,
    0x0, 0x1f8, OBJ_PALETTE_10 | 0x28d,
    0x0, OBJ_X_FLIP | 0x0, OBJ_PALETTE_10 | 0x28d,
    0x9, OBJ_SIZE_16x16 | 0x1f8, OBJ_PALETTE_10 | 0x21d,
    OBJ_SHAPE_HORIZONTAL | 0x0, OBJ_X_FLIP | 0x8, OBJ_PALETTE_10 | 0x28b,
    OBJ_SHAPE_VERTICAL | 0x9, 0x1e7, OBJ_PALETTE_10 | 0x21a,
    0x9, OBJ_SIZE_16x16 | 0x1ed, OBJ_PALETTE_10 | 0x21b,
    0x9, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x3, OBJ_PALETTE_10 | 0x21b,
    OBJ_SHAPE_VERTICAL | 0x9, OBJ_X_FLIP | 0x11, OBJ_PALETTE_10 | 0x21a,
    0x8, OBJ_SIZE_16x16 | 0x1e8, OBJ_PALETTE_10 | 0x20b,
    OBJ_SHAPE_VERTICAL | 0x8, 0x1f8, OBJ_PALETTE_10 | 0x20d,
    0x8, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x8, OBJ_PALETTE_10 | 0x20b,
    OBJ_SHAPE_VERTICAL | 0x8, OBJ_X_FLIP | 0x0, OBJ_PALETTE_10 | 0x20d
};

static const u16 sDataPadOam_321afc_Frame1[] = {
    37,
    OBJ_SHAPE_VERTICAL | 0xcc, OBJ_X_FLIP | 0xf, OBJ_PALETTE_8 | 0x25c,
    0xcf, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x13, OBJ_PALETTE_8 | 0x25a,
    OBJ_SHAPE_VERTICAL | 0xcc, 0x1e9, OBJ_PALETTE_8 | 0x25c,
    0xcf, OBJ_SIZE_16x16 | 0x1dd, OBJ_PALETTE_8 | 0x25a,
    OBJ_SHAPE_VERTICAL | 0xd8, 0x1d8, OBJ_PALETTE_8 | 0x218,
    OBJ_SHAPE_VERTICAL | 0xd8, OBJ_X_FLIP | 0x20, OBJ_PALETTE_8 | 0x218,
    OBJ_SHAPE_HORIZONTAL | 0xf8, 0x1f0, OBJ_PALETTE_8 | 0x2a3,
    OBJ_SHAPE_VERTICAL | 0xd0, OBJ_SIZE_16x32 | 0x1f0, OBJ_PALETTE_9 | 0x210,
    OBJ_SHAPE_HORIZONTAL | 0xf0, 0x1f0, OBJ_PALETTE_9 | 0x290,
    OBJ_SHAPE_HORIZONTAL | 0xf8, OBJ_X_FLIP | 0x0, OBJ_PALETTE_8 | 0x2a3,
    OBJ_SHAPE_VERTICAL | 0xd0, OBJ_X_FLIP | OBJ_SIZE_16x32 | 0x0, OBJ_PALETTE_9 | 0x210,
    OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | 0x0, OBJ_PALETTE_9 | 0x290,
    OBJ_SHAPE_VERTICAL | 0xd8, OBJ_X_FLIP | OBJ_SIZE_16x32 | 0x18, OBJ_PALETTE_8 | 0x214,
    OBJ_SHAPE_HORIZONTAL | 0xf8, OBJ_X_FLIP | 0x18, OBJ_PALETTE_8 | 0x294,
    OBJ_SHAPE_VERTICAL | 0xd8, OBJ_X_FLIP | OBJ_SIZE_8x32 | 0x10, OBJ_PALETTE_8 | 0x216,
    0xf8, OBJ_X_FLIP | 0x10, OBJ_PALETTE_8 | 0x296,
    OBJ_SHAPE_VERTICAL | 0xd8, OBJ_SIZE_16x32 | 0x1d8, OBJ_PALETTE_8 | 0x214,
    OBJ_SHAPE_HORIZONTAL | 0xf8, 0x1d8, OBJ_PALETTE_8 | 0x294,
    OBJ_SHAPE_VERTICAL | 0xd8, OBJ_SIZE_8x32 | 0x1e8, OBJ_PALETTE_8 | 0x216,
    0xf8, 0x1e8, OBJ_PALETTE_8 | 0x296,
    0xd0, OBJ_SIZE_32x32 | 0x1d8, OBJ_PALETTE_8 | 0x200,
    OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1d8, OBJ_PALETTE_8 | 0x280,
    0xd0, OBJ_X_FLIP | OBJ_SIZE_32x32 | 0x8, OBJ_PALETTE_8 | 0x200,
    OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x8, OBJ_PALETTE_8 | 0x280,
    OBJ_SHAPE_HORIZONTAL | 0x0, 0x1e8, OBJ_PALETTE_10 | 0x28b,
    0x0, 0x1f8, OBJ_PALETTE_10 | 0x28d,
    0x0, OBJ_X_FLIP | 0x0, OBJ_PALETTE_10 | 0x28d,
    0x9, OBJ_SIZE_16x16 | 0x1f8, OBJ_PALETTE_10 | 0x21d,
    OBJ_SHAPE_HORIZONTAL | 0x0, OBJ_X_FLIP | 0x8, OBJ_PALETTE_10 | 0x28b,
    OBJ_SHAPE_VERTICAL | 0x9, 0x1e7, OBJ_PALETTE_10 | 0x21a,
    0x9, OBJ_SIZE_16x16 | 0x1ed, OBJ_PALETTE_10 | 0x21b,
    0x9, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x3, OBJ_PALETTE_10 | 0x21b,
    OBJ_SHAPE_VERTICAL | 0x9, OBJ_X_FLIP | 0x11, OBJ_PALETTE_10 | 0x21a,
    0x8, OBJ_SIZE_16x16 | 0x1e8, OBJ_PALETTE_10 | 0x20b,
    OBJ_SHAPE_VERTICAL | 0x8, 0x1f8, OBJ_PALETTE_10 | 0x20d,
    0x8, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x8, OBJ_PALETTE_10 | 0x20b,
    OBJ_SHAPE_VERTICAL | 0x8, OBJ_X_FLIP | 0x0, OBJ_PALETTE_10 | 0x20d
};

static const u16 sDataPadOam_321afc_Frame2[] = {
    37,
    OBJ_SHAPE_VERTICAL | 0xcc, OBJ_X_FLIP | 0xf, OBJ_PALETTE_8 | 0x25c,
    0xcf, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x13, OBJ_PALETTE_8 | 0x25a,
    OBJ_SHAPE_VERTICAL | 0xcc, 0x1e9, OBJ_PALETTE_8 | 0x25c,
    0xcf, OBJ_SIZE_16x16 | 0x1dd, OBJ_PALETTE_8 | 0x25a,
    OBJ_SHAPE_VERTICAL | 0xd8, 0x1d8, OBJ_PALETTE_8 | 0x219,
    OBJ_SHAPE_VERTICAL | 0xd8, OBJ_X_FLIP | 0x20, OBJ_PALETTE_8 | 0x219,
    OBJ_SHAPE_HORIZONTAL | 0xf8, 0x1f0, OBJ_PALETTE_8 | 0x2a3,
    OBJ_SHAPE_VERTICAL | 0xd0, OBJ_SIZE_16x32 | 0x1f0, OBJ_PALETTE_9 | 0x212,
    OBJ_SHAPE_HORIZONTAL | 0xf0, 0x1f0, OBJ_PALETTE_9 | 0x292,
    OBJ_SHAPE_HORIZONTAL | 0xf8, OBJ_X_FLIP | 0x0, OBJ_PALETTE_8 | 0x2a3,
    OBJ_SHAPE_VERTICAL | 0xd0, OBJ_X_FLIP | OBJ_SIZE_16x32 | 0x0, OBJ_PALETTE_9 | 0x212,
    OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | 0x0, OBJ_PALETTE_9 | 0x292,
    OBJ_SHAPE_VERTICAL | 0xd8, OBJ_X_FLIP | OBJ_SIZE_16x32 | 0x18, OBJ_PALETTE_8 | 0x214,
    OBJ_SHAPE_HORIZONTAL | 0xf8, OBJ_X_FLIP | 0x18, OBJ_PALETTE_8 | 0x294,
    OBJ_SHAPE_VERTICAL | 0xd8, OBJ_X_FLIP | OBJ_SIZE_8x32 | 0x10, OBJ_PALETTE_8 | 0x216,
    0xf8, OBJ_X_FLIP | 0x10, OBJ_PALETTE_8 | 0x296,
    OBJ_SHAPE_VERTICAL | 0xd8, OBJ_SIZE_16x32 | 0x1d8, OBJ_PALETTE_8 | 0x214,
    OBJ_SHAPE_HORIZONTAL | 0xf8, 0x1d8, OBJ_PALETTE_8 | 0x294,
    OBJ_SHAPE_VERTICAL | 0xd8, OBJ_SIZE_8x32 | 0x1e8, OBJ_PALETTE_8 | 0x216,
    0xf8, 0x1e8, OBJ_PALETTE_8 | 0x296,
    0xd0, OBJ_SIZE_32x32 | 0x1d8, OBJ_PALETTE_8 | 0x200,
    OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x16 | 0x1d8, OBJ_PALETTE_8 | 0x280,
    0xd0, OBJ_X_FLIP | OBJ_SIZE_32x32 | 0x8, OBJ_PALETTE_8 | 0x200,
    OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_X_FLIP | OBJ_SIZE_32x16 | 0x8, OBJ_PALETTE_8 | 0x280,
    OBJ_SHAPE_HORIZONTAL | 0x0, 0x1e8, OBJ_PALETTE_10 | 0x28b,
    0x0, 0x1f8, OBJ_PALETTE_10 | 0x28d,
    0x0, OBJ_X_FLIP | 0x0, OBJ_PALETTE_10 | 0x28d,
    0x9, OBJ_SIZE_16x16 | 0x1f8, OBJ_PALETTE_10 | 0x21d,
    OBJ_SHAPE_HORIZONTAL | 0x0, OBJ_X_FLIP | 0x8, OBJ_PALETTE_10 | 0x28b,
    OBJ_SHAPE_VERTICAL | 0x9, 0x1e7, OBJ_PALETTE_10 | 0x21a,
    0x9, OBJ_SIZE_16x16 | 0x1ed, OBJ_PALETTE_10 | 0x21b,
    0x9, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x3, OBJ_PALETTE_10 | 0x21b,
    OBJ_SHAPE_VERTICAL | 0x9, OBJ_X_FLIP | 0x11, OBJ_PALETTE_10 | 0x21a,
    0x8, OBJ_SIZE_16x16 | 0x1e8, OBJ_PALETTE_10 | 0x20b,
    OBJ_SHAPE_VERTICAL | 0x8, 0x1f8, OBJ_PALETTE_10 | 0x20d,
    0x8, OBJ_X_FLIP | OBJ_SIZE_16x16 | 0x8, OBJ_PALETTE_10 | 0x20b,
    OBJ_SHAPE_VERTICAL | 0x8, OBJ_X_FLIP | 0x0, OBJ_PALETTE_10 | 0x20d
};

const struct FrameData sDataPadOam_Unpressed[2] = {
    [0] = {
        .pFrame = sDataPadOam_Unpressed_Frame0,
        .timer = 255
    },
    [1] = FRAME_DATA_TERMINATOR
};

const struct FrameData sDataPadOam_Pressed[2] = {
    [0] = {
        .pFrame = sDataPadOam_Pressed_Frame0,
        .timer = 255
    },
    [1] = FRAME_DATA_TERMINATOR
};

const struct FrameData sDataPadOam_Pressing[5] = {
    [0] = {
        .pFrame = sDataPadOam_Pressing_Frame0,
        .timer = 4
    },
    [1] = {
        .pFrame = sDataPadOam_Pressing_Frame1,
        .timer = 4
    },
    [2] = {
        .pFrame = sDataPadOam_Pressing_Frame2,
        .timer = 4
    },
    [3] = {
        .pFrame = sDataPadOam_Pressed_Frame0,
        .timer = 4
    },
    [4] = FRAME_DATA_TERMINATOR
};

const struct FrameData sDataPadOam_Depressing[5] = {
    [0] = {
        .pFrame = sDataPadOam_Pressed_Frame0,
        .timer = 6
    },
    [1] = {
        .pFrame = sDataPadOam_Pressing_Frame2,
        .timer = 6
    },
    [2] = {
        .pFrame = sDataPadOam_Pressing_Frame1,
        .timer = 6
    },
    [3] = {
        .pFrame = sDataPadOam_Pressing_Frame0,
        .timer = 6
    },
    [4] = FRAME_DATA_TERMINATOR
};

const struct FrameData sDataPadCenterOam_Offline[2] = {
    [0] = {
        .pFrame = sDataPadCenterOam_Offline_Frame0,
        .timer = 255
    },
    [1] = FRAME_DATA_TERMINATOR
};

const struct FrameData sDataPadCenterOam_Online[4] = {
    [0] = {
        .pFrame = sDataPadCenterOam_Online_Frame0,
        .timer = 10
    },
    [1] = {
        .pFrame = sDataPadCenterOam_Online_Frame1,
        .timer = 10
    },
    [2] = {
        .pFrame = sDataPadCenterOam_Online_Frame2,
        .timer = 10
    },
    [3] = FRAME_DATA_TERMINATOR
};

const struct FrameData sDataPadCenterOam_DownloadingData[5] = {
    [0] = {
        .pFrame = sDataPadCenterOam_DownloadingData_Frame0,
        .timer = 6
    },
    [1] = {
        .pFrame = sDataPadCenterOam_DownloadingData_Frame1,
        .timer = 6
    },
    [2] = {
        .pFrame = sDataPadCenterOam_DownloadingData_Frame2,
        .timer = 6
    },
    [3] = {
        .pFrame = sDataPadCenterOam_DownloadingData_Frame1,
        .timer = 6
    },
    [4] = FRAME_DATA_TERMINATOR
};

const struct FrameData sDataPadSidesOam_Idle[2] = {
    [0] = {
        .pFrame = sDataPadSidesOam_Idle_Frame0,
        .timer = 255
    },
    [1] = FRAME_DATA_TERMINATOR
};

const struct FrameData sDataPadSidesOam_Engaging[4] = {
    [0] = {
        .pFrame = sDataPadSidesOam_Engaging_Frame0,
        .timer = 8
    },
    [1] = {
        .pFrame = sDataPadSidesOam_Engaging_Frame1,
        .timer = 8
    },
    [2] = {
        .pFrame = sDataPadSidesOam_Engaging_Frame2,
        .timer = 8
    },
    [3] = FRAME_DATA_TERMINATOR
};

const struct FrameData sDataPadSidesOam_Disengaging[4] = {
    [0] = {
        .pFrame = sDataPadSidesOam_Engaging_Frame2,
        .timer = 8
    },
    [1] = {
        .pFrame = sDataPadSidesOam_Engaging_Frame1,
        .timer = 8
    },
    [2] = {
        .pFrame = sDataPadSidesOam_Engaging_Frame0,
        .timer = 8
    },
    [3] = FRAME_DATA_TERMINATOR
};

const struct FrameData sDataPadSidesOam_DownloadingData[2] = {
    [0] = {
        .pFrame = sDataPadSidesOam_DownloadingData_Frame0,
        .timer = 255
    },
    [1] = FRAME_DATA_TERMINATOR
};

const struct FrameData sDataPadOam_321aec[2] = {
    [0] = {
        .pFrame = sDataPadOam_321aec_Frame0,
        .timer = 255
    },
    [1] = FRAME_DATA_TERMINATOR
};

const struct FrameData sDataPadOam_321afc[4] = {
    [0] = {
        .pFrame = sDataPadOam_321afc_Frame0,
        .timer = 6
    },
    [1] = {
        .pFrame = sDataPadOam_321afc_Frame1,
        .timer = 6
    },
    [2] = {
        .pFrame = sDataPadOam_321afc_Frame2,
        .timer = 6
    },
    [3] = FRAME_DATA_TERMINATOR
};

const struct FrameData sDataPadOam_321b1c[9] = {
    [0] = {
        .pFrame = sDataPadSidesOam_Idle_Frame0,
        .timer = 50
    },
    [1] = {
        .pFrame = sDataPadSidesOam_Engaging_Frame0,
        .timer = 8
    },
    [2] = {
        .pFrame = sDataPadSidesOam_Engaging_Frame1,
        .timer = 8
    },
    [3] = {
        .pFrame = sDataPadSidesOam_Engaging_Frame2,
        .timer = 8
    },
    [4] = {
        .pFrame = sDataPadSidesOam_DownloadingData_Frame0,
        .timer = 50
    },
    [5] = {
        .pFrame = sDataPadSidesOam_Engaging_Frame2,
        .timer = 8
    },
    [6] = {
        .pFrame = sDataPadSidesOam_Engaging_Frame1,
        .timer = 8
    },
    [7] = {
        .pFrame = sDataPadSidesOam_Engaging_Frame0,
        .timer = 8
    },
    [8] = FRAME_DATA_TERMINATOR
};
