#ifndef DATA_PAD_DATA_H
#define DATA_PAD_DATA_H

#include "macros.h"
#include "oam.h"

extern const u32 sDataPadGfx[512 * 3];
extern const u16 sDataPadPal[16 * 3];

extern const struct FrameData sDataPadOam_Unpressed[2];
extern const struct FrameData sDataPadOam_Pressed[2];
extern const struct FrameData sDataPadOam_Pressing[5];
extern const struct FrameData sDataPadOam_Depressing[5];
extern const struct FrameData sDataPadCenterOam_Offline[2];
extern const struct FrameData sDataPadCenterOam_Online[4];
extern const struct FrameData sDataPadCenterOam_DownloadingData[5];
extern const struct FrameData sDataPadSidesOam_Idle[2];
extern const struct FrameData sDataPadSidesOam_Engaging[4];
extern const struct FrameData sDataPadSidesOam_Disengaging[4];
extern const struct FrameData sDataPadSidesOam_DownloadingData[2];
extern const struct FrameData sDataPadOam_321aec[2];
extern const struct FrameData sDataPadOam_321afc[4];
extern const struct FrameData sDataPadOam_321b1c[9];

#endif /* DATA_PAD_DATA_H */
