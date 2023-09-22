#ifndef PAUSE_SCREEN_MENU_STRUCTS_H
#define PAUSE_SCREEN_MENU_STRUCTS_H

#include "types.h"
#include "oam.h"

struct MenuOam {
    s16 yPosition;
    s16 xPosition;
    u8 unk_4;
    u8 unk_5;
    u8 unk_6;
    u8 unk_7;
    u8 animationDurationCounter;
    u8 currentAnimationFrame;
    u8 oamId;
    u8 status;
};

struct PauseScreenData {
    u8 unk_0;
    u8 unk_1;
    u8 enableDebug;
    u16 typeFlags;
    u8 timer;
    u8 debugMenuEditingValue;
    u8 unk_8;
    u8 unk_9;
    u8 unk_A;
    u8 unk_B;
    u16 unk_C;
    u16 unk_E[4];
    u8 navConvCharacterWidth;
    u8 unk_17;
    u8 unk_18;
    u8 unk_19;
    u8 unk_1A;
    u8 unk_1B;
    u8 unk_1C;
    u8 unk_1D;
    u8 unk_1E;
    u8 unk_1F;
    u8 unk_20;
    u8 unk_21;
    u16 navConvTextIndent;
    u8 unk_24;
    u8 unk_25;
    u8 unk_26;
    u8 unk_27;
    u8 unk_28;
    u8 unk_29;
    u8 unk_2A;
    u8 unk_2B;
    struct MenuOam oam[40];
    u8 navTargetX;
    u8 navTargetY;
    u8 navTargetArea;
    u8 unk_20F;
    u8 mapX;
    u8 mapY;
    u8 currentArea;
    u8 navTargetTextDirection;
    const u32* pNavConvPopUpGraphicsPointer;
    u8 currentPopUp;
    u8 unk_219;
    u8 unk_21A;
    u8 unk_21B;
    u8 unk_21C;
    u8 unk_21D;
    u8 unk_21E;
    u8 unk_21F;
    u8 conversationNumber;
    u8 conversationOnRepeat;
    u8 unk_222;
    u8 unk_223;
    u8 unk_224;
    u8 unk_225;
    u8 unk_226;
    u8 unk_227;
    u8 unk_228;
    u8 unk_229;
    u8 unk_22A;
    u8 unk_22B;
    u8 unk_22C;
    u8 unk_22D;
    u8 unk_22E;
    u8 unk_22F;
    u8 downloadMapTimer;
    u8 downloadMapStage;
    u8 unk_232;
    u8 downloadMapCurrentLine;
    u8 unk_234;
    u8 unk_235;
    u8 unk_236;
    u8 unk_237;
    u8 unk_238;
    u8 unk_239;
    u8 unk_23A;
    u8 unk_23B;
    u8 unk_23C;
    u8 unk_23D;
    u8 unk_23E;
    u8 unk_23F;
    u8 unk_240;
    u8 unk_241;
    u8 unk_242;
    u8 unk_243;
    u8 unk_244;
    u8 unk_245;
    u8 unk_246;
    u8 unk_247;
    u8 unk_248;
    u8 unk_249;
    u8 unk_24A;
    u8 unk_24B;
    u8 unk_24C;
    u8 unk_24D;
    u8 unk_24E;
    u8 unk_24F;
    u8 unk_250;
    u8 unk_251;
    u8 unk_252;
    u8 window1Size;
    s8 mapRightBorder;
    s8 mapLeftBorder;
    s8 mapTopBorder;
    s8 mapBottomBorder;
    s8 mapViewX;
    s8 mapViewY;
    s8 unk_25A;
    s8 unk_25B;
    s8 unk_25C;
    s8 unk_25D;
    u8 canScrollRight;
    u8 canScrollLeft;
    u8 canScrollUp;
    u8 canScrollDown;
    u8 unk_262;
    u8 unk_263;
    u8 unk_264;
    u8 unk_265;
    u8 unk_266;
    u8 unk_267;
    u16 dispcnt;
    u16 dispcntBackup;
    u16 bg3CntBackup;
    u16 bg2CntBackup;
    u16 bldcntBackup;
    u16 bldalphaBackup;
    u8 unk_274;
    u8 maxEnergyTanks;
    u8 currentEnergyTanks;
    u8 maxMissileTanks;
    u8 currentMissileTanks;
    u8 maxPowerBombTanks;
    u8 currentPowerBombTanks;
    u8 totalEnergyTanks;
    u8 currentTotalEnergyTanks;
    u8 totalMissileTanks;
    u8 currentTotalMissileTanks;
    u8 totalPowerBombTanks;
    u8 currentTotalPowerBombTanks;
    u8 unk_281;
    u8 unk_282;
    u8 unk_283;
    u8 unk_284;
};

#endif /* PAUSE_SCREEN_MENU_STRUCTS_H */
