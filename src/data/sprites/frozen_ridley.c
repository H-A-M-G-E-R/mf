#include "data/sprites/frozen_ridley.h"

const s16 sFrozenRidleyXFlyingAwayYMovement[51] = {
    -1, -1, -2, -2,
    -3, -3, -4, -4,
    -5, -5, -6, -6,
    -7, -7, -7, -7,
    -8, -8, -8, -8,
    -7, -7, -7, -7,
    -6, -6, -5, -5,
    -4, -4, -3, -3,
    -2, -2, -1, -1,
    0, 0, 0, 0,
    1, 2, 3, 4,
    6, 8, 10, 12,
    14, 16, SHORT_MAX
};

const u32 sFrozenRidleyCorpseGfx[2 * 512] = INCBIN_U32("data/sprites/frozen_ridley_corpse.gfx");
const u16 sFrozenRidleyCorpsePal[2 * 16] = INCBIN_U16("data/sprites/frozen_ridley_corpse.pal");

static const u16 sFrozenRidleyCorpseOam_Idle_Frame0[] = {
    25,
    OBJ_SHAPE_VERTICAL | 0xac, OBJ_SIZE_16x32 | 0x1ed, OBJ_PALETTE_8 | 0x204,
    OBJ_SHAPE_VERTICAL | 0xb0, OBJ_SIZE_16x32 | 0x1dd, OBJ_PALETTE_8 | 0x202,
    OBJ_SHAPE_VERTICAL | 0xd0, 0x1dd, OBJ_PALETTE_8 | 0x201,
    0xd0, OBJ_SIZE_16x16 | 0x1cd, OBJ_PALETTE_8 | 0x240,
    OBJ_SHAPE_VERTICAL | 0xc0, 0x1d5, OBJ_PALETTE_8 | 0x200,
    0xe0, 0x1d5, OBJ_PALETTE_8 | 0x26e,
    0xbf, OBJ_SIZE_32x32 | 0x1ff, OBJ_PALETTE_8 | 0x20f,
    OBJ_SHAPE_VERTICAL | 0xbf, 0x1f7, OBJ_PALETTE_8 | 0x20e,
    0xcf, 0x1f7, OBJ_PALETTE_8 | 0x24e,
    OBJ_SHAPE_HORIZONTAL | 0xe8, OBJ_SIZE_32x16 | 0x1e9, OBJ_PALETTE_8 | 0x21b,
    OBJ_SHAPE_VERTICAL | 0xe0, OBJ_SIZE_16x32 | 0x1e4, OBJ_PALETTE_8 | 0x217,
    OBJ_SHAPE_HORIZONTAL | 0xf8, OBJ_SIZE_32x8 | 0x1e1, OBJ_PALETTE_8 | 0x25b,
    OBJ_SHAPE_HORIZONTAL | 0xf8, 0x1, OBJ_PALETTE_8 | 0x275,
    OBJ_SHAPE_VERTICAL | 0xe8, OBJ_SIZE_16x32 | 0x20, OBJ_PALETTE_8 | 0x219,
    0xf8, 0x18, OBJ_PALETTE_8 | 0x256,
    0xef, 0x1c, OBJ_PALETTE_8 | 0x255,
    OBJ_SHAPE_VERTICAL | 0xc8, OBJ_SIZE_16x32 | 0x1e6, OBJ_PALETTE_8 | 0x207,
    OBJ_SHAPE_VERTICAL | 0xd0, OBJ_SIZE_16x32 | 0x1f6, OBJ_PALETTE_8 | 0x209,
    0xc8, 0x1f6, OBJ_PALETTE_8 | 0x226,
    0xc0, 0x1f0, OBJ_PALETTE_8 | 0x206,
    0xd8, 0x6, OBJ_PALETTE_8 | 0x246,
    OBJ_SHAPE_VERTICAL | 0xe0, OBJ_SIZE_16x32 | 0x6, OBJ_PALETTE_8 | 0x20b,
    OBJ_SHAPE_VERTICAL | 0xe0, OBJ_SIZE_8x32 | 0x16, OBJ_PALETTE_8 | 0x20d,
    0xe8, 0x1e, OBJ_PALETTE_8 | 0x266,
    OBJ_SHAPE_VERTICAL | 0xe0, OBJ_SIZE_16x32 | 0x1d7, OBJ_PALETTE_8 | 0x213
};

static const u16 sFrozenRidleyCorpseOam_OpeningEye_Frame0[] = {
    26,
    0xbc, 0x1e0, OBJ_PALETTE_8 | 0x27b,
    OBJ_SHAPE_VERTICAL | 0xac, OBJ_SIZE_16x32 | 0x1ed, OBJ_PALETTE_8 | 0x204,
    OBJ_SHAPE_VERTICAL | 0xb0, OBJ_SIZE_16x32 | 0x1dd, OBJ_PALETTE_8 | 0x202,
    OBJ_SHAPE_VERTICAL | 0xd0, 0x1dd, OBJ_PALETTE_8 | 0x201,
    0xd0, OBJ_SIZE_16x16 | 0x1cd, OBJ_PALETTE_8 | 0x240,
    OBJ_SHAPE_VERTICAL | 0xc0, 0x1d5, OBJ_PALETTE_8 | 0x200,
    0xe0, 0x1d5, OBJ_PALETTE_8 | 0x26e,
    0xbf, OBJ_SIZE_32x32 | 0x1ff, OBJ_PALETTE_8 | 0x20f,
    OBJ_SHAPE_VERTICAL | 0xbf, 0x1f7, OBJ_PALETTE_8 | 0x20e,
    0xcf, 0x1f7, OBJ_PALETTE_8 | 0x24e,
    OBJ_SHAPE_HORIZONTAL | 0xe8, OBJ_SIZE_32x16 | 0x1e9, OBJ_PALETTE_8 | 0x21b,
    OBJ_SHAPE_VERTICAL | 0xe0, OBJ_SIZE_16x32 | 0x1e4, OBJ_PALETTE_8 | 0x217,
    OBJ_SHAPE_HORIZONTAL | 0xf8, OBJ_SIZE_32x8 | 0x1e1, OBJ_PALETTE_8 | 0x25b,
    OBJ_SHAPE_HORIZONTAL | 0xf8, 0x1, OBJ_PALETTE_8 | 0x275,
    OBJ_SHAPE_VERTICAL | 0xe8, OBJ_SIZE_16x32 | 0x20, OBJ_PALETTE_8 | 0x219,
    0xf8, 0x18, OBJ_PALETTE_8 | 0x256,
    0xef, 0x1c, OBJ_PALETTE_8 | 0x255,
    OBJ_SHAPE_VERTICAL | 0xc8, OBJ_SIZE_16x32 | 0x1e6, OBJ_PALETTE_8 | 0x207,
    OBJ_SHAPE_VERTICAL | 0xd0, OBJ_SIZE_16x32 | 0x1f6, OBJ_PALETTE_8 | 0x209,
    0xc8, 0x1f6, OBJ_PALETTE_8 | 0x226,
    0xc0, 0x1f0, OBJ_PALETTE_8 | 0x206,
    0xd8, 0x6, OBJ_PALETTE_8 | 0x246,
    OBJ_SHAPE_VERTICAL | 0xe0, OBJ_SIZE_16x32 | 0x6, OBJ_PALETTE_8 | 0x20b,
    OBJ_SHAPE_VERTICAL | 0xe0, OBJ_SIZE_8x32 | 0x16, OBJ_PALETTE_8 | 0x20d,
    0xe8, 0x1e, OBJ_PALETTE_8 | 0x266,
    OBJ_SHAPE_VERTICAL | 0xe0, OBJ_SIZE_16x32 | 0x1d7, OBJ_PALETTE_8 | 0x213
};

static const u16 sFrozenRidleyCorpseOam_OpeningEye_Frame1[] = {
    26,
    0xbc, 0x1e0, OBJ_PALETTE_8 | 0x27c,
    OBJ_SHAPE_VERTICAL | 0xac, OBJ_SIZE_16x32 | 0x1ed, OBJ_PALETTE_8 | 0x204,
    OBJ_SHAPE_VERTICAL | 0xb0, OBJ_SIZE_16x32 | 0x1dd, OBJ_PALETTE_8 | 0x202,
    OBJ_SHAPE_VERTICAL | 0xd0, 0x1dd, OBJ_PALETTE_8 | 0x201,
    0xd0, OBJ_SIZE_16x16 | 0x1cd, OBJ_PALETTE_8 | 0x240,
    OBJ_SHAPE_VERTICAL | 0xc0, 0x1d5, OBJ_PALETTE_8 | 0x200,
    0xe0, 0x1d5, OBJ_PALETTE_8 | 0x26e,
    0xbf, OBJ_SIZE_32x32 | 0x1ff, OBJ_PALETTE_8 | 0x20f,
    OBJ_SHAPE_VERTICAL | 0xbf, 0x1f7, OBJ_PALETTE_8 | 0x20e,
    0xcf, 0x1f7, OBJ_PALETTE_8 | 0x24e,
    OBJ_SHAPE_HORIZONTAL | 0xe8, OBJ_SIZE_32x16 | 0x1e9, OBJ_PALETTE_8 | 0x21b,
    OBJ_SHAPE_VERTICAL | 0xe0, OBJ_SIZE_16x32 | 0x1e4, OBJ_PALETTE_8 | 0x217,
    OBJ_SHAPE_HORIZONTAL | 0xf8, OBJ_SIZE_32x8 | 0x1e1, OBJ_PALETTE_8 | 0x25b,
    OBJ_SHAPE_HORIZONTAL | 0xf8, 0x1, OBJ_PALETTE_8 | 0x275,
    OBJ_SHAPE_VERTICAL | 0xe8, OBJ_SIZE_16x32 | 0x20, OBJ_PALETTE_8 | 0x219,
    0xf8, 0x18, OBJ_PALETTE_8 | 0x256,
    0xef, 0x1c, OBJ_PALETTE_8 | 0x255,
    OBJ_SHAPE_VERTICAL | 0xc8, OBJ_SIZE_16x32 | 0x1e6, OBJ_PALETTE_8 | 0x207,
    OBJ_SHAPE_VERTICAL | 0xd0, OBJ_SIZE_16x32 | 0x1f6, OBJ_PALETTE_8 | 0x209,
    0xc8, 0x1f6, OBJ_PALETTE_8 | 0x226,
    0xc0, 0x1f0, OBJ_PALETTE_8 | 0x206,
    0xd8, 0x6, OBJ_PALETTE_8 | 0x246,
    OBJ_SHAPE_VERTICAL | 0xe0, OBJ_SIZE_16x32 | 0x6, OBJ_PALETTE_8 | 0x20b,
    OBJ_SHAPE_VERTICAL | 0xe0, OBJ_SIZE_8x32 | 0x16, OBJ_PALETTE_8 | 0x20d,
    0xe8, 0x1e, OBJ_PALETTE_8 | 0x266,
    OBJ_SHAPE_VERTICAL | 0xe0, OBJ_SIZE_16x32 | 0x1d7, OBJ_PALETTE_8 | 0x213
};

static const u16 sFrozenRidleyCorpseOam_OpeningEye_Frame2[] = {
    26,
    0xbc, 0x1e0, OBJ_PALETTE_8 | 0x27d,
    OBJ_SHAPE_VERTICAL | 0xac, OBJ_SIZE_16x32 | 0x1ed, OBJ_PALETTE_8 | 0x204,
    OBJ_SHAPE_VERTICAL | 0xb0, OBJ_SIZE_16x32 | 0x1dd, OBJ_PALETTE_8 | 0x202,
    OBJ_SHAPE_VERTICAL | 0xd0, 0x1dd, OBJ_PALETTE_8 | 0x201,
    0xd0, OBJ_SIZE_16x16 | 0x1cd, OBJ_PALETTE_8 | 0x240,
    OBJ_SHAPE_VERTICAL | 0xc0, 0x1d5, OBJ_PALETTE_8 | 0x200,
    0xe0, 0x1d5, OBJ_PALETTE_8 | 0x26e,
    0xbf, OBJ_SIZE_32x32 | 0x1ff, OBJ_PALETTE_8 | 0x20f,
    OBJ_SHAPE_VERTICAL | 0xbf, 0x1f7, OBJ_PALETTE_8 | 0x20e,
    0xcf, 0x1f7, OBJ_PALETTE_8 | 0x24e,
    OBJ_SHAPE_HORIZONTAL | 0xe8, OBJ_SIZE_32x16 | 0x1e9, OBJ_PALETTE_8 | 0x21b,
    OBJ_SHAPE_VERTICAL | 0xe0, OBJ_SIZE_16x32 | 0x1e4, OBJ_PALETTE_8 | 0x217,
    OBJ_SHAPE_HORIZONTAL | 0xf8, OBJ_SIZE_32x8 | 0x1e1, OBJ_PALETTE_8 | 0x25b,
    OBJ_SHAPE_HORIZONTAL | 0xf8, 0x1, OBJ_PALETTE_8 | 0x275,
    OBJ_SHAPE_VERTICAL | 0xe8, OBJ_SIZE_16x32 | 0x20, OBJ_PALETTE_8 | 0x219,
    0xf8, 0x18, OBJ_PALETTE_8 | 0x256,
    0xef, 0x1c, OBJ_PALETTE_8 | 0x255,
    OBJ_SHAPE_VERTICAL | 0xc8, OBJ_SIZE_16x32 | 0x1e6, OBJ_PALETTE_8 | 0x207,
    OBJ_SHAPE_VERTICAL | 0xd0, OBJ_SIZE_16x32 | 0x1f6, OBJ_PALETTE_8 | 0x209,
    0xc8, 0x1f6, OBJ_PALETTE_8 | 0x226,
    0xc0, 0x1f0, OBJ_PALETTE_8 | 0x206,
    0xd8, 0x6, OBJ_PALETTE_8 | 0x246,
    OBJ_SHAPE_VERTICAL | 0xe0, OBJ_SIZE_16x32 | 0x6, OBJ_PALETTE_8 | 0x20b,
    OBJ_SHAPE_VERTICAL | 0xe0, OBJ_SIZE_8x32 | 0x16, OBJ_PALETTE_8 | 0x20d,
    0xe8, 0x1e, OBJ_PALETTE_8 | 0x266,
    OBJ_SHAPE_VERTICAL | 0xe0, OBJ_SIZE_16x32 | 0x1d7, OBJ_PALETTE_8 | 0x213
};

static const u16 sFrozenRidleyCorpseOam_OpeningEye_Frame3[] = {
    26,
    0xbc, 0x1e0, OBJ_PALETTE_8 | 0x27e,
    OBJ_SHAPE_VERTICAL | 0xac, OBJ_SIZE_16x32 | 0x1ed, OBJ_PALETTE_8 | 0x204,
    OBJ_SHAPE_VERTICAL | 0xb0, OBJ_SIZE_16x32 | 0x1dd, OBJ_PALETTE_8 | 0x202,
    OBJ_SHAPE_VERTICAL | 0xd0, 0x1dd, OBJ_PALETTE_8 | 0x201,
    0xd0, OBJ_SIZE_16x16 | 0x1cd, OBJ_PALETTE_8 | 0x240,
    OBJ_SHAPE_VERTICAL | 0xc0, 0x1d5, OBJ_PALETTE_8 | 0x200,
    0xe0, 0x1d5, OBJ_PALETTE_8 | 0x26e,
    0xbf, OBJ_SIZE_32x32 | 0x1ff, OBJ_PALETTE_8 | 0x20f,
    OBJ_SHAPE_VERTICAL | 0xbf, 0x1f7, OBJ_PALETTE_8 | 0x20e,
    0xcf, 0x1f7, OBJ_PALETTE_8 | 0x24e,
    OBJ_SHAPE_HORIZONTAL | 0xe8, OBJ_SIZE_32x16 | 0x1e9, OBJ_PALETTE_8 | 0x21b,
    OBJ_SHAPE_VERTICAL | 0xe0, OBJ_SIZE_16x32 | 0x1e4, OBJ_PALETTE_8 | 0x217,
    OBJ_SHAPE_HORIZONTAL | 0xf8, OBJ_SIZE_32x8 | 0x1e1, OBJ_PALETTE_8 | 0x25b,
    OBJ_SHAPE_HORIZONTAL | 0xf8, 0x1, OBJ_PALETTE_8 | 0x275,
    OBJ_SHAPE_VERTICAL | 0xe8, OBJ_SIZE_16x32 | 0x20, OBJ_PALETTE_8 | 0x219,
    0xf8, 0x18, OBJ_PALETTE_8 | 0x256,
    0xef, 0x1c, OBJ_PALETTE_8 | 0x255,
    OBJ_SHAPE_VERTICAL | 0xc8, OBJ_SIZE_16x32 | 0x1e6, OBJ_PALETTE_8 | 0x207,
    OBJ_SHAPE_VERTICAL | 0xd0, OBJ_SIZE_16x32 | 0x1f6, OBJ_PALETTE_8 | 0x209,
    0xc8, 0x1f6, OBJ_PALETTE_8 | 0x226,
    0xc0, 0x1f0, OBJ_PALETTE_8 | 0x206,
    0xd8, 0x6, OBJ_PALETTE_8 | 0x246,
    OBJ_SHAPE_VERTICAL | 0xe0, OBJ_SIZE_16x32 | 0x6, OBJ_PALETTE_8 | 0x20b,
    OBJ_SHAPE_VERTICAL | 0xe0, OBJ_SIZE_8x32 | 0x16, OBJ_PALETTE_8 | 0x20d,
    0xe8, 0x1e, OBJ_PALETTE_8 | 0x266,
    OBJ_SHAPE_VERTICAL | 0xe0, OBJ_SIZE_16x32 | 0x1d7, OBJ_PALETTE_8 | 0x213
};

static const u16 sFrozenRidleyCorpseOam_OpeningEye_Frame4[] = {
    26,
    0xbc, 0x1e0, OBJ_PALETTE_8 | 0x27f,
    OBJ_SHAPE_VERTICAL | 0xac, OBJ_SIZE_16x32 | 0x1ed, OBJ_PALETTE_8 | 0x204,
    OBJ_SHAPE_VERTICAL | 0xb0, OBJ_SIZE_16x32 | 0x1dd, OBJ_PALETTE_8 | 0x202,
    OBJ_SHAPE_VERTICAL | 0xd0, 0x1dd, OBJ_PALETTE_8 | 0x201,
    0xd0, OBJ_SIZE_16x16 | 0x1cd, OBJ_PALETTE_8 | 0x240,
    OBJ_SHAPE_VERTICAL | 0xc0, 0x1d5, OBJ_PALETTE_8 | 0x200,
    0xe0, 0x1d5, OBJ_PALETTE_8 | 0x26e,
    0xbf, OBJ_SIZE_32x32 | 0x1ff, OBJ_PALETTE_8 | 0x20f,
    OBJ_SHAPE_VERTICAL | 0xbf, 0x1f7, OBJ_PALETTE_8 | 0x20e,
    0xcf, 0x1f7, OBJ_PALETTE_8 | 0x24e,
    OBJ_SHAPE_HORIZONTAL | 0xe8, OBJ_SIZE_32x16 | 0x1e9, OBJ_PALETTE_8 | 0x21b,
    OBJ_SHAPE_VERTICAL | 0xe0, OBJ_SIZE_16x32 | 0x1e4, OBJ_PALETTE_8 | 0x217,
    OBJ_SHAPE_HORIZONTAL | 0xf8, OBJ_SIZE_32x8 | 0x1e1, OBJ_PALETTE_8 | 0x25b,
    OBJ_SHAPE_HORIZONTAL | 0xf8, 0x1, OBJ_PALETTE_8 | 0x275,
    OBJ_SHAPE_VERTICAL | 0xe8, OBJ_SIZE_16x32 | 0x20, OBJ_PALETTE_8 | 0x219,
    0xf8, 0x18, OBJ_PALETTE_8 | 0x256,
    0xef, 0x1c, OBJ_PALETTE_8 | 0x255,
    OBJ_SHAPE_VERTICAL | 0xc8, OBJ_SIZE_16x32 | 0x1e6, OBJ_PALETTE_8 | 0x207,
    OBJ_SHAPE_VERTICAL | 0xd0, OBJ_SIZE_16x32 | 0x1f6, OBJ_PALETTE_8 | 0x209,
    0xc8, 0x1f6, OBJ_PALETTE_8 | 0x226,
    0xc0, 0x1f0, OBJ_PALETTE_8 | 0x206,
    0xd8, 0x6, OBJ_PALETTE_8 | 0x246,
    OBJ_SHAPE_VERTICAL | 0xe0, OBJ_SIZE_16x32 | 0x6, OBJ_PALETTE_8 | 0x20b,
    OBJ_SHAPE_VERTICAL | 0xe0, OBJ_SIZE_8x32 | 0x16, OBJ_PALETTE_8 | 0x20d,
    0xe8, 0x1e, OBJ_PALETTE_8 | 0x266,
    OBJ_SHAPE_VERTICAL | 0xe0, OBJ_SIZE_16x32 | 0x1d7, OBJ_PALETTE_8 | 0x213
};

static const u16 sFrozenRidleyCorpseOam_Crumbling_Frame0[] = {
    25,
    OBJ_SHAPE_VERTICAL | 0xac, OBJ_SIZE_16x32 | 0x1ed, OBJ_PALETTE_8 | 0x204,
    OBJ_SHAPE_VERTICAL | 0xb0, OBJ_SIZE_16x32 | 0x1dd, OBJ_PALETTE_8 | 0x202,
    OBJ_SHAPE_VERTICAL | 0xd0, 0x1dd, OBJ_PALETTE_8 | 0x201,
    0xd0, OBJ_SIZE_16x16 | 0x1cd, OBJ_PALETTE_8 | 0x240,
    OBJ_SHAPE_VERTICAL | 0xc0, 0x1d5, OBJ_PALETTE_8 | 0x200,
    0xe0, 0x1d5, OBJ_PALETTE_8 | 0x26e,
    0xbf, OBJ_SIZE_32x32 | 0x1ff, OBJ_PALETTE_8 | 0x20f,
    OBJ_SHAPE_VERTICAL | 0xbf, 0x1f7, OBJ_PALETTE_8 | 0x20e,
    0xcf, 0x1f7, OBJ_PALETTE_8 | 0x24e,
    OBJ_SHAPE_HORIZONTAL | 0xe8, OBJ_SIZE_32x16 | 0x1e9, OBJ_PALETTE_8 | 0x21b,
    OBJ_SHAPE_VERTICAL | 0xe1, OBJ_SIZE_16x32 | 0x1e4, OBJ_PALETTE_8 | 0x217,
    OBJ_SHAPE_HORIZONTAL | 0xf8, OBJ_SIZE_32x8 | 0x1e1, OBJ_PALETTE_8 | 0x25b,
    OBJ_SHAPE_HORIZONTAL | 0xf8, 0x1, OBJ_PALETTE_8 | 0x275,
    OBJ_SHAPE_VERTICAL | 0xe8, OBJ_SIZE_16x32 | 0x20, OBJ_PALETTE_8 | 0x219,
    0xf8, 0x18, OBJ_PALETTE_8 | 0x256,
    0xef, 0x1c, OBJ_PALETTE_8 | 0x255,
    OBJ_SHAPE_VERTICAL | 0xc8, OBJ_SIZE_16x32 | 0x1e6, OBJ_PALETTE_8 | 0x207,
    OBJ_SHAPE_VERTICAL | 0xd0, OBJ_SIZE_16x32 | 0x1f6, OBJ_PALETTE_8 | 0x209,
    0xc8, 0x1f6, OBJ_PALETTE_8 | 0x226,
    0xc0, 0x1f0, OBJ_PALETTE_8 | 0x206,
    0xd8, 0x6, OBJ_PALETTE_8 | 0x246,
    OBJ_SHAPE_VERTICAL | 0xe0, OBJ_SIZE_16x32 | 0x6, OBJ_PALETTE_8 | 0x20b,
    OBJ_SHAPE_VERTICAL | 0xe1, OBJ_SIZE_8x32 | 0x16, OBJ_PALETTE_8 | 0x20d,
    0xe9, 0x1e, OBJ_PALETTE_8 | 0x266,
    OBJ_SHAPE_VERTICAL | 0xe0, OBJ_SIZE_16x32 | 0x1d7, OBJ_PALETTE_8 | 0x213
};

static const u16 sFrozenRidleyCorpseOam_Crumbling_Frame1[] = {
    26,
    OBJ_SHAPE_VERTICAL | 0xad, OBJ_SIZE_16x32 | 0x1ed, OBJ_PALETTE_8 | 0x204,
    OBJ_SHAPE_VERTICAL | 0xb1, OBJ_SIZE_16x32 | 0x1dd, OBJ_PALETTE_8 | 0x202,
    OBJ_SHAPE_VERTICAL | 0xd1, 0x1dd, OBJ_PALETTE_8 | 0x201,
    0xd1, OBJ_SIZE_16x16 | 0x1cd, OBJ_PALETTE_8 | 0x240,
    OBJ_SHAPE_VERTICAL | 0xc1, 0x1d5, OBJ_PALETTE_8 | 0x200,
    0xe1, 0x1d5, OBJ_PALETTE_8 | 0x26e,
    0xc0, OBJ_SIZE_32x32 | 0x0, OBJ_PALETTE_8 | 0x20f,
    OBJ_SHAPE_VERTICAL | 0xc0, 0x1f8, OBJ_PALETTE_8 | 0x20e,
    0xd0, 0x1f8, OBJ_PALETTE_8 | 0x24e,
    OBJ_SHAPE_HORIZONTAL | 0xe8, OBJ_SIZE_32x16 | 0x1e9, OBJ_PALETTE_8 | 0x21b,
    OBJ_SHAPE_VERTICAL | 0xe2, OBJ_SIZE_16x32 | 0x1e4, OBJ_PALETTE_8 | 0x217,
    OBJ_SHAPE_HORIZONTAL | 0xf8, OBJ_SIZE_32x8 | 0x1e1, OBJ_PALETTE_8 | 0x25b,
    OBJ_SHAPE_HORIZONTAL | 0xf8, 0x1, OBJ_PALETTE_8 | 0x275,
    OBJ_SHAPE_VERTICAL | 0xe8, OBJ_SIZE_16x32 | 0x20, OBJ_PALETTE_8 | 0x219,
    0xf8, 0x18, OBJ_PALETTE_8 | 0x256,
    0xf0, 0x1c, OBJ_PALETTE_8 | 0x255,
    OBJ_SHAPE_VERTICAL | 0xc8, OBJ_SIZE_16x32 | 0x1e6, OBJ_PALETTE_8 | 0x207,
    OBJ_SHAPE_VERTICAL | 0xd0, OBJ_SIZE_16x32 | 0x1f6, OBJ_PALETTE_8 | 0x209,
    0xc8, 0x1f6, OBJ_PALETTE_8 | 0x226,
    0xc0, 0x1f0, OBJ_PALETTE_8 | 0x206,
    0xd8, 0x6, OBJ_PALETTE_8 | 0x246,
    OBJ_SHAPE_VERTICAL | 0xe0, OBJ_SIZE_8x32 | 0x6, OBJ_PALETTE_8 | 0x20b,
    OBJ_SHAPE_VERTICAL | 0xe1, OBJ_SIZE_8x32 | 0xe, OBJ_PALETTE_8 | 0x20c,
    OBJ_SHAPE_VERTICAL | 0xe3, OBJ_SIZE_8x32 | 0x16, OBJ_PALETTE_8 | 0x20d,
    0xea, 0x1e, OBJ_PALETTE_8 | 0x266,
    OBJ_SHAPE_VERTICAL | 0xe0, OBJ_SIZE_16x32 | 0x1d7, OBJ_PALETTE_8 | 0x213
};

static const u16 sFrozenRidleyCorpseOam_Crumbling_Frame2[] = {
    27,
    OBJ_SHAPE_VERTICAL | 0xae, OBJ_SIZE_16x32 | 0x1ed, OBJ_PALETTE_8 | 0x204,
    OBJ_SHAPE_VERTICAL | 0xb2, OBJ_SIZE_16x32 | 0x1dd, OBJ_PALETTE_8 | 0x202,
    OBJ_SHAPE_VERTICAL | 0xd2, 0x1dd, OBJ_PALETTE_8 | 0x201,
    0xd2, OBJ_SIZE_16x16 | 0x1cd, OBJ_PALETTE_8 | 0x240,
    OBJ_SHAPE_VERTICAL | 0xc2, 0x1d5, OBJ_PALETTE_8 | 0x200,
    0xe2, 0x1d5, OBJ_PALETTE_8 | 0x26e,
    0xc0, OBJ_SIZE_32x32 | 0x0, OBJ_PALETTE_8 | 0x20f,
    OBJ_SHAPE_VERTICAL | 0xc0, 0x1f8, OBJ_PALETTE_8 | 0x20e,
    0xd0, 0x1f8, OBJ_PALETTE_8 | 0x24e,
    OBJ_SHAPE_HORIZONTAL | 0xe9, OBJ_SIZE_32x16 | 0x1e9, OBJ_PALETTE_8 | 0x21b,
    OBJ_SHAPE_VERTICAL | 0xe3, OBJ_SIZE_16x32 | 0x1e4, OBJ_PALETTE_8 | 0x217,
    OBJ_SHAPE_HORIZONTAL | 0xf8, OBJ_SIZE_32x8 | 0x1e1, OBJ_PALETTE_8 | 0x25b,
    OBJ_SHAPE_HORIZONTAL | 0xf8, 0x1, OBJ_PALETTE_8 | 0x275,
    OBJ_SHAPE_VERTICAL | 0xe9, OBJ_SIZE_16x32 | 0x21, OBJ_PALETTE_8 | 0x219,
    0xf9, 0x19, OBJ_PALETTE_8 | 0x256,
    0xf2, 0x1d, OBJ_PALETTE_8 | 0x255,
    OBJ_SHAPE_VERTICAL | 0xc9, OBJ_SIZE_16x32 | 0x1e6, OBJ_PALETTE_8 | 0x207,
    OBJ_SHAPE_VERTICAL | 0xd1, OBJ_SIZE_16x32 | 0x1f6, OBJ_PALETTE_8 | 0x209,
    0xc9, 0x1f6, OBJ_PALETTE_8 | 0x226,
    0xc1, 0x1f0, OBJ_PALETTE_8 | 0x206,
    0xd9, 0x6, OBJ_PALETTE_8 | 0x246,
    OBJ_SHAPE_VERTICAL | 0xe1, OBJ_SIZE_8x32 | 0x6, OBJ_PALETTE_8 | 0x20b,
    OBJ_SHAPE_VERTICAL | 0xe3, OBJ_SIZE_8x32 | 0xe, OBJ_PALETTE_8 | 0x20c,
    OBJ_SHAPE_VERTICAL | 0xe5, OBJ_SIZE_8x32 | 0x16, OBJ_PALETTE_8 | 0x20d,
    0xed, 0x1e, OBJ_PALETTE_8 | 0x266,
    OBJ_SHAPE_VERTICAL | 0xe0, OBJ_SIZE_16x32 | 0x1d7, OBJ_PALETTE_8 | 0x213,
    0xe8, OBJ_SIZE_16x16 | 0x1e7, OBJ_PALETTE_8 | 0x215
};

static const u16 sFrozenRidleyCorpseOam_Crumbling_Frame3[] = {
    27,
    OBJ_SHAPE_VERTICAL | 0xaf, OBJ_SIZE_16x32 | 0x1ec, OBJ_PALETTE_8 | 0x204,
    OBJ_SHAPE_VERTICAL | 0xb3, OBJ_SIZE_16x32 | 0x1dc, OBJ_PALETTE_8 | 0x202,
    OBJ_SHAPE_VERTICAL | 0xd3, 0x1dc, OBJ_PALETTE_8 | 0x201,
    0xd3, OBJ_SIZE_16x16 | 0x1cc, OBJ_PALETTE_8 | 0x240,
    OBJ_SHAPE_VERTICAL | 0xc3, 0x1d4, OBJ_PALETTE_8 | 0x200,
    0xe3, 0x1d4, OBJ_PALETTE_8 | 0x26e,
    0xc1, OBJ_SIZE_32x32 | 0x1, OBJ_PALETTE_8 | 0x20f,
    OBJ_SHAPE_VERTICAL | 0xc1, 0x1f9, OBJ_PALETTE_8 | 0x20e,
    0xd1, 0x1f9, OBJ_PALETTE_8 | 0x24e,
    OBJ_SHAPE_VERTICAL | 0xe6, OBJ_SIZE_16x32 | 0x1e4, OBJ_PALETTE_8 | 0x217,
    OBJ_SHAPE_HORIZONTAL | 0xf8, OBJ_SIZE_32x8 | 0x1e2, OBJ_PALETTE_8 | 0x25b,
    OBJ_SHAPE_HORIZONTAL | 0xf8, 0x2, OBJ_PALETTE_8 | 0x275,
    OBJ_SHAPE_HORIZONTAL | 0xea, OBJ_SIZE_32x16 | 0x1ea, OBJ_PALETTE_8 | 0x21b,
    OBJ_SHAPE_VERTICAL | 0xea, OBJ_SIZE_16x32 | 0x22, OBJ_PALETTE_8 | 0x219,
    0xfa, 0x1a, OBJ_PALETTE_8 | 0x256,
    0xf4, 0x1e, OBJ_PALETTE_8 | 0x255,
    OBJ_SHAPE_VERTICAL | 0xca, OBJ_SIZE_16x32 | 0x1e7, OBJ_PALETTE_8 | 0x207,
    OBJ_SHAPE_VERTICAL | 0xd2, OBJ_SIZE_16x32 | 0x1f7, OBJ_PALETTE_8 | 0x209,
    0xca, 0x1f7, OBJ_PALETTE_8 | 0x226,
    0xc2, 0x1f1, OBJ_PALETTE_8 | 0x206,
    0xdb, 0x7, OBJ_PALETTE_8 | 0x246,
    OBJ_SHAPE_VERTICAL | 0xe3, OBJ_SIZE_8x32 | 0x7, OBJ_PALETTE_8 | 0x20b,
    OBJ_SHAPE_VERTICAL | 0xe6, OBJ_SIZE_8x32 | 0xe, OBJ_PALETTE_8 | 0x20c,
    OBJ_SHAPE_VERTICAL | 0xe7, OBJ_SIZE_8x32 | 0x16, OBJ_PALETTE_8 | 0x20d,
    0xef, 0x1e, OBJ_PALETTE_8 | 0x266,
    OBJ_SHAPE_VERTICAL | 0xe1, OBJ_SIZE_16x32 | 0x1d7, OBJ_PALETTE_8 | 0x213,
    0xe9, OBJ_SIZE_16x16 | 0x1e7, OBJ_PALETTE_8 | 0x215
};

static const u16 sFrozenRidleyCorpseOam_Crumbling_Frame4[] = {
    27,
    OBJ_SHAPE_VERTICAL | 0xb3, OBJ_SIZE_16x32 | 0x1eb, OBJ_PALETTE_8 | 0x204,
    OBJ_SHAPE_VERTICAL | 0xb7, OBJ_SIZE_16x32 | 0x1db, OBJ_PALETTE_8 | 0x202,
    OBJ_SHAPE_VERTICAL | 0xd7, 0x1db, OBJ_PALETTE_8 | 0x201,
    0xd7, OBJ_SIZE_16x16 | 0x1cb, OBJ_PALETTE_8 | 0x240,
    OBJ_SHAPE_VERTICAL | 0xc7, 0x1d3, OBJ_PALETTE_8 | 0x200,
    0xe7, 0x1d3, OBJ_PALETTE_8 | 0x26e,
    0xc5, OBJ_SIZE_32x32 | 0x1, OBJ_PALETTE_8 | 0x20f,
    OBJ_SHAPE_VERTICAL | 0xc5, 0x1f9, OBJ_PALETTE_8 | 0x20e,
    0xd5, 0x1f9, OBJ_PALETTE_8 | 0x24e,
    OBJ_SHAPE_VERTICAL | 0xe7, OBJ_SIZE_16x32 | 0x1e4, OBJ_PALETTE_8 | 0x217,
    OBJ_SHAPE_HORIZONTAL | 0xf9, OBJ_SIZE_32x8 | 0x1e3, OBJ_PALETTE_8 | 0x25b,
    OBJ_SHAPE_HORIZONTAL | 0xf9, 0x3, OBJ_PALETTE_8 | 0x275,
    OBJ_SHAPE_HORIZONTAL | 0xeb, OBJ_SIZE_32x16 | 0x1eb, OBJ_PALETTE_8 | 0x21b,
    OBJ_SHAPE_VERTICAL | 0xec, OBJ_SIZE_16x32 | 0x25, OBJ_PALETTE_8 | 0x219,
    0xfc, 0x1d, OBJ_PALETTE_8 | 0x256,
    0xf6, 0x21, OBJ_PALETTE_8 | 0x255,
    OBJ_SHAPE_VERTICAL | 0xcc, OBJ_SIZE_16x32 | 0x1e8, OBJ_PALETTE_8 | 0x207,
    OBJ_SHAPE_VERTICAL | 0xd4, OBJ_SIZE_16x32 | 0x1f8, OBJ_PALETTE_8 | 0x209,
    0xcc, 0x1f8, OBJ_PALETTE_8 | 0x226,
    0xc4, 0x1f2, OBJ_PALETTE_8 | 0x206,
    0xdd, 0x8, OBJ_PALETTE_8 | 0x246,
    OBJ_SHAPE_VERTICAL | 0xe5, OBJ_SIZE_8x32 | 0x8, OBJ_PALETTE_8 | 0x20b,
    OBJ_SHAPE_VERTICAL | 0xe9, OBJ_SIZE_8x32 | 0x10, OBJ_PALETTE_8 | 0x20c,
    OBJ_SHAPE_VERTICAL | 0xeb, OBJ_SIZE_8x32 | 0x18, OBJ_PALETTE_8 | 0x20d,
    0xf3, 0x20, OBJ_PALETTE_8 | 0x266,
    OBJ_SHAPE_VERTICAL | 0xe2, OBJ_SIZE_16x32 | 0x1d7, OBJ_PALETTE_8 | 0x213,
    0xea, OBJ_SIZE_16x16 | 0x1e7, OBJ_PALETTE_8 | 0x215
};

static const u16 sFrozenRidleyCorpseOam_Crumbling_Frame5[] = {
    28,
    OBJ_SHAPE_VERTICAL | 0xbd, OBJ_SIZE_16x32 | 0x1e8, OBJ_PALETTE_8 | 0x204,
    OBJ_SHAPE_VERTICAL | 0xc1, OBJ_SIZE_16x32 | 0x1d8, OBJ_PALETTE_8 | 0x202,
    OBJ_SHAPE_VERTICAL | 0xe1, 0x1d8, OBJ_PALETTE_8 | 0x201,
    0xe1, OBJ_SIZE_16x16 | 0x1c8, OBJ_PALETTE_8 | 0x240,
    OBJ_SHAPE_VERTICAL | 0xd1, 0x1d0, OBJ_PALETTE_8 | 0x200,
    0xf1, 0x1d0, OBJ_PALETTE_8 | 0x26e,
    0xcb, OBJ_SIZE_32x32 | 0x4, OBJ_PALETTE_8 | 0x20f,
    OBJ_SHAPE_VERTICAL | 0xcb, 0x1fc, OBJ_PALETTE_8 | 0x20e,
    0xdb, 0x1fc, OBJ_PALETTE_8 | 0x24e,
    OBJ_SHAPE_HORIZONTAL | 0xfa, OBJ_SIZE_32x8 | 0x1e4, OBJ_PALETTE_8 | 0x25b,
    OBJ_SHAPE_HORIZONTAL | 0xfa, 0x4, OBJ_PALETTE_8 | 0x275,
    OBJ_SHAPE_HORIZONTAL | 0xec, OBJ_SIZE_32x16 | 0x1ed, OBJ_PALETTE_8 | 0x21b,
    OBJ_SHAPE_VERTICAL | 0xeb, OBJ_SIZE_16x32 | 0x1e3, OBJ_PALETTE_8 | 0x217,
    0xef, OBJ_SIZE_16x16 | 0x1ef, OBJ_PALETTE_8 | 0x215,
    OBJ_SHAPE_VERTICAL | 0xed, OBJ_SIZE_16x32 | 0x29, OBJ_PALETTE_8 | 0x219,
    0xfd, 0x21, OBJ_PALETTE_8 | 0x256,
    0xf7, 0x24, OBJ_PALETTE_8 | 0x255,
    0xc8, 0x1f3, OBJ_PALETTE_8 | 0x206,
    OBJ_SHAPE_VERTICAL | 0xd0, OBJ_SIZE_16x32 | 0x1e9, OBJ_PALETTE_8 | 0x207,
    OBJ_SHAPE_VERTICAL | 0xd6, OBJ_SIZE_16x32 | 0x1f9, OBJ_PALETTE_8 | 0x209,
    0xce, 0x1f9, OBJ_PALETTE_8 | 0x226,
    0xdd, 0x9, OBJ_PALETTE_8 | 0x246,
    OBJ_SHAPE_VERTICAL | 0xe5, OBJ_SIZE_8x32 | 0x9, OBJ_PALETTE_8 | 0x20b,
    OBJ_SHAPE_VERTICAL | 0xe9, OBJ_SIZE_8x32 | 0x12, OBJ_PALETTE_8 | 0x20c,
    OBJ_SHAPE_VERTICAL | 0xec, OBJ_SIZE_8x32 | 0x1b, OBJ_PALETTE_8 | 0x20d,
    0xf5, 0x23, OBJ_PALETTE_8 | 0x266,
    OBJ_SHAPE_VERTICAL | 0xe3, OBJ_SIZE_16x32 | 0x1d7, OBJ_PALETTE_8 | 0x213,
    0xeb, OBJ_SIZE_16x16 | 0x1e7, OBJ_PALETTE_8 | 0x215
};

static const u16 sFrozenRidleyCorpseOam_Crumbling_Frame6[] = {
    29,
    OBJ_SHAPE_VERTICAL | 0xcd, OBJ_SIZE_16x32 | 0x1e5, OBJ_PALETTE_8 | 0x204,
    OBJ_SHAPE_VERTICAL | 0xd1, OBJ_SIZE_16x32 | 0x1d5, OBJ_PALETTE_8 | 0x202,
    OBJ_SHAPE_VERTICAL | 0xf1, 0x1d5, OBJ_PALETTE_8 | 0x201,
    0xef, OBJ_SIZE_16x16 | 0x1c5, OBJ_PALETTE_8 | 0x240,
    OBJ_SHAPE_VERTICAL | 0xdf, 0x1cd, OBJ_PALETTE_8 | 0x200,
    0xff, 0x1cd, OBJ_PALETTE_8 | 0x26e,
    OBJ_SHAPE_HORIZONTAL | 0xde, OBJ_SIZE_32x16 | 0x5, OBJ_PALETTE_8 | 0x24f,
    0xde, 0x1fd, OBJ_PALETTE_8 | 0x24e,
    OBJ_SHAPE_HORIZONTAL | 0xd0, OBJ_SIZE_32x16 | 0x5, OBJ_PALETTE_8 | 0x20f,
    OBJ_SHAPE_VERTICAL | 0xd0, 0x1fd, OBJ_PALETTE_8 | 0x20e,
    OBJ_SHAPE_HORIZONTAL | 0xfb, OBJ_SIZE_32x8 | 0x1e5, OBJ_PALETTE_8 | 0x25b,
    OBJ_SHAPE_HORIZONTAL | 0xfb, 0x5, OBJ_PALETTE_8 | 0x275,
    OBJ_SHAPE_HORIZONTAL | 0xf1, OBJ_SIZE_32x16 | 0x1f0, OBJ_PALETTE_8 | 0x21b,
    OBJ_SHAPE_VERTICAL | 0xf1, OBJ_SIZE_16x32 | 0x1e2, OBJ_PALETTE_8 | 0x217,
    0xf5, OBJ_SIZE_16x16 | 0x1ed, OBJ_PALETTE_8 | 0x215,
    OBJ_SHAPE_VERTICAL | 0xee, OBJ_SIZE_16x32 | 0x2d, OBJ_PALETTE_8 | 0x219,
    0xfe, 0x25, OBJ_PALETTE_8 | 0x256,
    0xf8, 0x28, OBJ_PALETTE_8 | 0x255,
    0xd1, 0x1f3, OBJ_PALETTE_8 | 0x206,
    OBJ_SHAPE_VERTICAL | 0xd9, OBJ_SIZE_16x32 | 0x1e9, OBJ_PALETTE_8 | 0x207,
    0xd9, 0x1f9, OBJ_PALETTE_8 | 0x226,
    OBJ_SHAPE_VERTICAL | 0xdc, OBJ_SIZE_16x32 | 0x1fa, OBJ_PALETTE_8 | 0x209,
    0xe0, 0xb, OBJ_PALETTE_8 | 0x246,
    OBJ_SHAPE_VERTICAL | 0xe8, OBJ_SIZE_8x32 | 0xb, OBJ_PALETTE_8 | 0x20b,
    OBJ_SHAPE_VERTICAL | 0xeb, OBJ_SIZE_8x32 | 0x14, OBJ_PALETTE_8 | 0x20c,
    OBJ_SHAPE_VERTICAL | 0xed, OBJ_SIZE_8x32 | 0x1d, OBJ_PALETTE_8 | 0x20d,
    0xf5, 0x25, OBJ_PALETTE_8 | 0x266,
    OBJ_SHAPE_VERTICAL | 0xe4, OBJ_SIZE_16x32 | 0x1d7, OBJ_PALETTE_8 | 0x213,
    0xec, OBJ_SIZE_16x16 | 0x1e7, OBJ_PALETTE_8 | 0x215
};

static const u16 sFrozenRidleyCorpseOam_Crumbling_Frame7[] = {
    31,
    OBJ_SHAPE_VERTICAL | 0xda, OBJ_SIZE_16x32 | 0x1e3, OBJ_PALETTE_8 | 0x204,
    OBJ_SHAPE_VERTICAL | 0xf8, 0x1d3, OBJ_PALETTE_8 | 0x201,
    OBJ_SHAPE_VERTICAL | 0xdd, OBJ_SIZE_16x32 | 0x1d3, OBJ_PALETTE_8 | 0x202,
    0xf8, OBJ_SIZE_16x16 | 0x1c3, OBJ_PALETTE_8 | 0x240,
    OBJ_SHAPE_VERTICAL | 0xeb, 0x1cb, OBJ_PALETTE_8 | 0x200,
    0x8, 0x1cb, OBJ_PALETTE_8 | 0x26e,
    0xe7, 0x1fe, OBJ_PALETTE_8 | 0x24e,
    0xe5, OBJ_SIZE_16x16 | 0x6, OBJ_PALETTE_8 | 0x24f,
    0xe9, OBJ_SIZE_16x16 | 0x16, OBJ_PALETTE_8 | 0x251,
    OBJ_SHAPE_VERTICAL | 0xdb, 0x1ff, OBJ_PALETTE_8 | 0x20e,
    0xda, OBJ_SIZE_16x16 | 0x7, OBJ_PALETTE_8 | 0x20f,
    0xdb, OBJ_SIZE_16x16 | 0x17, OBJ_PALETTE_8 | 0x211,
    OBJ_SHAPE_HORIZONTAL | 0xfc, OBJ_SIZE_32x8 | 0x1e7, OBJ_PALETTE_8 | 0x25b,
    OBJ_SHAPE_HORIZONTAL | 0xfc, 0x7, OBJ_PALETTE_8 | 0x275,
    OBJ_SHAPE_HORIZONTAL | 0xf4, OBJ_SIZE_32x16 | 0x1f3, OBJ_PALETTE_8 | 0x21b,
    OBJ_SHAPE_VERTICAL | 0xf4, OBJ_SIZE_16x32 | 0x1e0, OBJ_PALETTE_8 | 0x217,
    0xf8, OBJ_SIZE_16x16 | 0x1eb, OBJ_PALETTE_8 | 0x215,
    OBJ_SHAPE_VERTICAL | 0xf0, OBJ_SIZE_16x32 | 0x32, OBJ_PALETTE_8 | 0x219,
    0x0, 0x2a, OBJ_PALETTE_8 | 0x256,
    0xfa, 0x2c, OBJ_PALETTE_8 | 0x255,
    0xda, 0x1f3, OBJ_PALETTE_8 | 0x206,
    OBJ_SHAPE_VERTICAL | 0xe2, OBJ_SIZE_16x32 | 0x1e9, OBJ_PALETTE_8 | 0x207,
    0xe2, 0x1f9, OBJ_PALETTE_8 | 0x226,
    OBJ_SHAPE_VERTICAL | 0xe1, OBJ_SIZE_16x32 | 0x1fb, OBJ_PALETTE_8 | 0x209,
    0xe3, 0xd, OBJ_PALETTE_8 | 0x246,
    OBJ_SHAPE_VERTICAL | 0xeb, OBJ_SIZE_8x32 | 0xd, OBJ_PALETTE_8 | 0x20b,
    OBJ_SHAPE_VERTICAL | 0xef, OBJ_SIZE_8x32 | 0x16, OBJ_PALETTE_8 | 0x20c,
    OBJ_SHAPE_VERTICAL | 0xf1, OBJ_SIZE_8x32 | 0x20, OBJ_PALETTE_8 | 0x20d,
    0xf8, 0x29, OBJ_PALETTE_8 | 0x266,
    OBJ_SHAPE_VERTICAL | 0xe9, OBJ_SIZE_16x32 | 0x1d7, OBJ_PALETTE_8 | 0x213,
    0xef, OBJ_SIZE_16x16 | 0x1e7, OBJ_PALETTE_8 | 0x215
};

static const u16 sFrozenRidleyCorpseOam_Crumbling_Frame8[] = {
    33,
    OBJ_SHAPE_VERTICAL | 0xe0, OBJ_SIZE_8x32 | 0x1e2, OBJ_PALETTE_8 | 0x204,
    OBJ_SHAPE_VERTICAL | 0xe1, OBJ_SIZE_8x32 | 0x1ea, OBJ_PALETTE_8 | 0x205,
    OBJ_SHAPE_VERTICAL | 0xe0, OBJ_SIZE_8x32 | 0x1d2, OBJ_PALETTE_8 | 0x202,
    OBJ_SHAPE_VERTICAL | 0xe2, OBJ_SIZE_8x32 | 0x1da, OBJ_PALETTE_8 | 0x203,
    OBJ_SHAPE_VERTICAL | 0xfb, 0x1d0, OBJ_PALETTE_8 | 0x201,
    0xf8, OBJ_SIZE_16x16 | 0x1c0, OBJ_PALETTE_8 | 0x240,
    OBJ_SHAPE_VERTICAL | 0xee, 0x1ca, OBJ_PALETTE_8 | 0x200,
    0x8, 0x1c8, OBJ_PALETTE_8 | 0x26e,
    0xf4, 0x1fe, OBJ_PALETTE_8 | 0x24e,
    0xed, OBJ_SIZE_16x16 | 0x6, OBJ_PALETTE_8 | 0x24f,
    0xf0, OBJ_SIZE_16x16 | 0x16, OBJ_PALETTE_8 | 0x251,
    OBJ_SHAPE_VERTICAL | 0xe5, 0x1ff, OBJ_PALETTE_8 | 0x20e,
    0xe2, OBJ_SIZE_16x16 | 0x7, OBJ_PALETTE_8 | 0x20f,
    0xe4, OBJ_SIZE_16x16 | 0x17, OBJ_PALETTE_8 | 0x211,
    OBJ_SHAPE_HORIZONTAL | 0xfe, OBJ_SIZE_32x8 | 0x1e8, OBJ_PALETTE_8 | 0x25b,
    OBJ_SHAPE_HORIZONTAL | 0xfe, 0x8, OBJ_PALETTE_8 | 0x275,
    OBJ_SHAPE_HORIZONTAL | 0xf6, OBJ_SIZE_32x16 | 0x1f5, OBJ_PALETTE_8 | 0x21b,
    OBJ_SHAPE_VERTICAL | 0xf7, OBJ_SIZE_16x32 | 0x1df, OBJ_PALETTE_8 | 0x217,
    0xfb, OBJ_SIZE_16x16 | 0x1ea, OBJ_PALETTE_8 | 0x215,
    OBJ_SHAPE_VERTICAL | 0xf2, OBJ_SIZE_16x32 | 0x34, OBJ_PALETTE_8 | 0x219,
    0x2, 0x2c, OBJ_PALETTE_8 | 0x256,
    0xfc, 0x2e, OBJ_PALETTE_8 | 0x255,
    0xe2, 0x1f3, OBJ_PALETTE_8 | 0x206,
    OBJ_SHAPE_VERTICAL | 0xea, OBJ_SIZE_16x32 | 0x1e9, OBJ_PALETTE_8 | 0x207,
    0xea, 0x1f9, OBJ_PALETTE_8 | 0x226,
    OBJ_SHAPE_VERTICAL | 0xeb, OBJ_SIZE_16x32 | 0x1fb, OBJ_PALETTE_8 | 0x209,
    0xe5, 0x10, OBJ_PALETTE_8 | 0x246,
    OBJ_SHAPE_VERTICAL | 0xed, OBJ_SIZE_8x32 | 0x10, OBJ_PALETTE_8 | 0x20b,
    OBJ_SHAPE_VERTICAL | 0xf0, OBJ_SIZE_8x32 | 0x19, OBJ_PALETTE_8 | 0x20c,
    OBJ_SHAPE_VERTICAL | 0xf3, OBJ_SIZE_8x32 | 0x21, OBJ_PALETTE_8 | 0x20d,
    0xf9, 0x2a, OBJ_PALETTE_8 | 0x266,
    OBJ_SHAPE_VERTICAL | 0xec, OBJ_SIZE_16x32 | 0x1d6, OBJ_PALETTE_8 | 0x213,
    0xf2, OBJ_SIZE_16x16 | 0x1e6, OBJ_PALETTE_8 | 0x215
};

static const u16 sFrozenRidleyCorpseOam_Crumbled_Frame0[] = {
    34,
    OBJ_SHAPE_VERTICAL | 0xe1, OBJ_SIZE_8x32 | 0x1e1, OBJ_PALETTE_8 | 0x204,
    OBJ_SHAPE_VERTICAL | 0xe3, OBJ_SIZE_8x32 | 0x1e9, OBJ_PALETTE_8 | 0x205,
    OBJ_SHAPE_VERTICAL | 0xe1, OBJ_SIZE_8x32 | 0x1d1, OBJ_PALETTE_8 | 0x202,
    OBJ_SHAPE_VERTICAL | 0xe3, OBJ_SIZE_8x32 | 0x1d9, OBJ_PALETTE_8 | 0x203,
    OBJ_SHAPE_VERTICAL | 0xfb, 0x1cf, OBJ_PALETTE_8 | 0x201,
    0xf8, OBJ_SIZE_16x16 | 0x1bf, OBJ_PALETTE_8 | 0x240,
    OBJ_SHAPE_VERTICAL | 0xee, 0x1ca, OBJ_PALETTE_8 | 0x200,
    0x8, 0x1c7, OBJ_PALETTE_8 | 0x26e,
    0xf4, 0x1fe, OBJ_PALETTE_8 | 0x24e,
    0xee, OBJ_SIZE_16x16 | 0x6, OBJ_PALETTE_8 | 0x24f,
    0xf2, OBJ_SIZE_16x16 | 0x16, OBJ_PALETTE_8 | 0x251,
    OBJ_SHAPE_VERTICAL | 0xe6, 0x1ff, OBJ_PALETTE_8 | 0x20e,
    OBJ_SHAPE_VERTICAL | 0xe3, 0x7, OBJ_PALETTE_8 | 0x20f,
    OBJ_SHAPE_VERTICAL | 0xe4, 0xf, OBJ_PALETTE_8 | 0x210,
    0xe6, OBJ_SIZE_16x16 | 0x17, OBJ_PALETTE_8 | 0x211,
    OBJ_SHAPE_HORIZONTAL | 0xfe, OBJ_SIZE_32x8 | 0x1e8, OBJ_PALETTE_8 | 0x25b,
    OBJ_SHAPE_HORIZONTAL | 0xfe, 0x8, OBJ_PALETTE_8 | 0x275,
    OBJ_SHAPE_HORIZONTAL | 0xf6, OBJ_SIZE_32x16 | 0x1f5, OBJ_PALETTE_8 | 0x21b,
    OBJ_SHAPE_VERTICAL | 0xf7, OBJ_SIZE_16x32 | 0x1df, OBJ_PALETTE_8 | 0x217,
    0xfb, OBJ_SIZE_16x16 | 0x1ea, OBJ_PALETTE_8 | 0x215,
    OBJ_SHAPE_VERTICAL | 0xf2, OBJ_SIZE_16x32 | 0x34, OBJ_PALETTE_8 | 0x219,
    0x2, 0x2c, OBJ_PALETTE_8 | 0x256,
    0xfc, 0x2e, OBJ_PALETTE_8 | 0x255,
    0xe2, 0x1f3, OBJ_PALETTE_8 | 0x206,
    OBJ_SHAPE_VERTICAL | 0xea, OBJ_SIZE_16x32 | 0x1e9, OBJ_PALETTE_8 | 0x207,
    0xea, 0x1f9, OBJ_PALETTE_8 | 0x226,
    OBJ_SHAPE_VERTICAL | 0xeb, OBJ_SIZE_16x32 | 0x1fb, OBJ_PALETTE_8 | 0x209,
    0xe5, 0x10, OBJ_PALETTE_8 | 0x246,
    OBJ_SHAPE_VERTICAL | 0xed, OBJ_SIZE_8x32 | 0x10, OBJ_PALETTE_8 | 0x20b,
    OBJ_SHAPE_VERTICAL | 0xf0, OBJ_SIZE_8x32 | 0x19, OBJ_PALETTE_8 | 0x20c,
    OBJ_SHAPE_VERTICAL | 0xf3, OBJ_SIZE_8x32 | 0x21, OBJ_PALETTE_8 | 0x20d,
    0xf9, 0x2a, OBJ_PALETTE_8 | 0x266,
    OBJ_SHAPE_VERTICAL | 0xec, OBJ_SIZE_16x32 | 0x1d6, OBJ_PALETTE_8 | 0x213,
    0xf2, OBJ_SIZE_16x16 | 0x1e6, OBJ_PALETTE_8 | 0x215
};

const struct FrameData sFrozenRidleyCorpseOam_Idle[2] = {
    [0] = {
        .pFrame = sFrozenRidleyCorpseOam_Idle_Frame0,
        .timer = 255
    },
    [1] = FRAME_DATA_TERMINATOR
};

const struct FrameData sFrozenRidleyCorpseOam_OpeningEye[7] = {
    [0] = {
        .pFrame = sFrozenRidleyCorpseOam_OpeningEye_Frame0,
        .timer = 8
    },
    [1] = {
        .pFrame = sFrozenRidleyCorpseOam_OpeningEye_Frame1,
        .timer = 8
    },
    [2] = {
        .pFrame = sFrozenRidleyCorpseOam_OpeningEye_Frame2,
        .timer = 8
    },
    [3] = {
        .pFrame = sFrozenRidleyCorpseOam_OpeningEye_Frame3,
        .timer = 4
    },
    [4] = {
        .pFrame = sFrozenRidleyCorpseOam_OpeningEye_Frame4,
        .timer = 8
    },
    [5] = {
        .pFrame = sFrozenRidleyCorpseOam_OpeningEye_Frame3,
        .timer = 255
    },
    [6] = FRAME_DATA_TERMINATOR
};

const struct FrameData sFrozenRidleyCorpseOam_ClosingEye[4] = {
    [0] = {
        .pFrame = sFrozenRidleyCorpseOam_OpeningEye_Frame2,
        .timer = 4
    },
    [1] = {
        .pFrame = sFrozenRidleyCorpseOam_OpeningEye_Frame1,
        .timer = 4
    },
    [2] = {
        .pFrame = sFrozenRidleyCorpseOam_OpeningEye_Frame0,
        .timer = 4
    },
    [3] = FRAME_DATA_TERMINATOR
};

const struct FrameData sFrozenRidleyCorpseOam_Crumbling[10] = {
    [0] = {
        .pFrame = sFrozenRidleyCorpseOam_Crumbling_Frame0,
        .timer = 8
    },
    [1] = {
        .pFrame = sFrozenRidleyCorpseOam_Crumbling_Frame1,
        .timer = 8
    },
    [2] = {
        .pFrame = sFrozenRidleyCorpseOam_Crumbling_Frame2,
        .timer = 8
    },
    [3] = {
        .pFrame = sFrozenRidleyCorpseOam_Crumbling_Frame3,
        .timer = 8
    },
    [4] = {
        .pFrame = sFrozenRidleyCorpseOam_Crumbling_Frame4,
        .timer = 5
    },
    [5] = {
        .pFrame = sFrozenRidleyCorpseOam_Crumbling_Frame5,
        .timer = 5
    },
    [6] = {
        .pFrame = sFrozenRidleyCorpseOam_Crumbling_Frame6,
        .timer = 5
    },
    [7] = {
        .pFrame = sFrozenRidleyCorpseOam_Crumbling_Frame7,
        .timer = 5
    },
    [8] = {
        .pFrame = sFrozenRidleyCorpseOam_Crumbling_Frame8,
        .timer = 5
    },
    [9] = FRAME_DATA_TERMINATOR
};

const struct FrameData sFrozenRidleyCorpseOam_Crumbled[2] = {
    [0] = {
        .pFrame = sFrozenRidleyCorpseOam_Crumbled_Frame0,
        .timer = 255
    },
    [1] = FRAME_DATA_TERMINATOR
};
