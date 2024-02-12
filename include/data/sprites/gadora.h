#ifndef GADORA_DATA_H
#define GADORA_DATA_H

#include "types.h"
#include "oam.h"

extern const u32 sGadoraGfx[1024];
extern const u16 sGadoraPal[2 * 16];

extern const struct FrameData sGadoraRootsOam_Idle[6];
extern const struct FrameData sGadoraOam_EyeClosed[3];
extern const struct FrameData sGadoraOam_OpeningEye[2];
extern const struct FrameData sGadoraOam_ClosingEye[2];
extern const struct FrameData sGadoraOam_Shooting[5];
extern const struct FrameData sGadoraOam_Vulnerable[3];
extern const struct FrameData sGadoraBeamOam_Idle[5];
extern const struct FrameData sGadoraRootsOam_OpeningEye[6];

#endif /* GADORA_DATA_H */
