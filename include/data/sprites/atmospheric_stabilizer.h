#ifndef ATMOSPHERIC_STABILIZER_DATA_H
#define ATMOSPHERIC_STABILIZER_DATA_H

#include "macros.h"
#include "oam.h"

extern const u32 sAtmosphericStabilizerGfx[3 * 512];
extern const u16 sAtmosphericStabilizerPal[3 * 16];

extern const struct FrameData sAtmosphericStabilizerFanOam_OnlineHorizontal[4];
extern const struct FrameData sAtmosphericStabilizerFanOam_CloggedHorizontal[16];
extern const struct FrameData sAtmosphericStabilizerFanOam_RestartingHorizontal[31];
extern const struct FrameData sAtmosphericStabilizerFanOam_OnlineVertical[4];
extern const struct FrameData sAtmosphericStabilizerFanOam_CloggedVertical[16];
extern const struct FrameData sAtmosphericStabilizerFanOam_RestartingVertical[31];
extern const struct FrameData sAtmosphericStabilizerParasiteOam_Idle[17];
extern const struct FrameData sAtmosphericStabilizerParasiteOam_SpawningX[5];
extern const struct FrameData sAtmosphericStabilizerCoverOam_Down[2];
extern const struct FrameData sAtmosphericStabilizerCoverOam_Right[2];
extern const struct FrameData sAtmosphericStabilizerCoverOam_Left[2];
extern const struct FrameData sAtmosphericStabilizerCoverOam_UpLeft[2];
extern const struct FrameData sAtmosphericStabilizerCoverOam_UpRight[2];
extern const struct FrameData sAtmosphericStabilizerOam_327a70[2];
extern const struct FrameData sAtmosphericStabilizerOam_327a80[2];
extern const struct FrameData sAtmosphericStabilizerOam_327a90[2];
extern const struct FrameData sAtmosphericStabilizerOam_327aa0[2];
extern const struct FrameData sAtmosphericStabilizerOam_327ab0[2];
extern const struct FrameData sAtmosphericStabilizerOam_327ac0[2];
extern const struct FrameData sAtmosphericStabilizerOam_327ad0[2];
extern const struct FrameData sAtmosphericStabilizerOam_327ae0[2];
extern const struct FrameData sAtmosphericStabilizerOam_327af0[2];
extern const struct FrameData sAtmosphericStabilizerOam_327b00[2];

#endif /* ATMOSPHERIC_STABILIZER_DATA_H */
