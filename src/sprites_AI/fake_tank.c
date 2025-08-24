#include "globals.h"

#include "data/samus_data.h"
#include "data/sprites/fake_tank.h"
#include "data/sprites/x_parasite.h"
#include "data/sprite_data.h"

#include "constants/audio.h"
#include "constants/sprite.h"

#include "structs/clipdata.h"
#include "structs/sprite.h"

void FakeTankInit(void) {
    SpriteUtilTrySetAbsorbXFlag();
    if (gCurrentSprite.properties & SP_CAN_ABSORB_X) {
        if (!(gCurrentSprite.status & SS_HIDDEN)) {
            gCurrentSprite.status = 0;
            return;
        }
    }
    gCurrentSprite.drawDistanceTop = 0x10;
    gCurrentSprite.drawDistanceBottom = 8;
    gCurrentSprite.drawDistanceHorizontal = 0x10;
    gCurrentSprite.hitboxTop = -0x40;
    gCurrentSprite.hitboxBottom = 0;
    gCurrentSprite.hitboxLeft = -0x20;
    gCurrentSprite.hitboxRight = 0x20;
    gCurrentSprite.animationDurationCounter = 0;
    gCurrentSprite.currentAnimationFrame = 0;
    gCurrentSprite.health = GET_PSPRITE_HEALTH(gCurrentSprite.spriteId);
    gCurrentSprite.properties |= SP_SOLID_FOR_PROJECTILES;
    gCurrentSprite.samusCollision = SSC_NONE;
    if (gCurrentSprite.pose == SPRITE_POSE_SPAWNING_FROM_X_INIT) {
        gCurrentSprite.pose = SPRITE_POSE_SPAWNING_FROM_X;
        gCurrentSprite.xParasiteTimer = X_PARASITE_MOSAIC_MAX_INDEX;
    } else
        gCurrentSprite.pose = SPRITE_POSE_IDLE_INIT;
}

void FakeTankIdleInit(void) {
    gCurrentSprite.pose = SPRITE_POSE_IDLE;
    gCurrentSprite.animationDurationCounter = 0;
    gCurrentSprite.currentAnimationFrame = 0;
}

void FakeTankIdle(void) {
    if (gCurrentSprite.status & SS_HIDDEN)
        return;

    if ((u8)SpriteUtilCheckSamusNearSpriteLeftRight(0xC0, 0xC0) != NSLR_OUT_OF_RANGE)
        gCurrentSprite.pose = 0x17;
}

void FakeTankWakingUpInit(void) {
    gCurrentSprite.pose = 0x18;
    gCurrentSprite.animationDurationCounter = 0;
    gCurrentSprite.currentAnimationFrame = 0;
    gCurrentSprite.samusCollision = SSC_HURTS_SAMUS;
    gCurrentSprite.properties &= ~SP_SOLID_FOR_PROJECTILES;
    gCurrentSprite.bgPriority = gIoRegisters.bg1Cnt & 3;
}

void FakeTankWakingUp(void) {
    if (SpriteUtilCheckNearEndCurrentSpriteAnim())
        gCurrentSprite.pose = 0x19;
}

/*
void FakeTankFlyingInit(void) {
    gCurrentSprite.pose = 0x1A;
    gCurrentSprite.work4 = 0;
    (&gCurrentSprite.pose)[0xA] = 0x3C;
    (&gCurrentSprite.pose)[0xA].unk1 = 0x3C;
    gCurrentSprite.animationDurationCounter = 0;
    gCurrentSprite.currentAnimationFrame = 0;
}

void FakeTankFlying(void) {
    s32 temp_r0_3;
    u16 *temp_r0_2;
    u16 var_r4;
    u8 temp_r0;
    u8 var_r3;

    temp_r0 = gCurrentSprite.work1;
    if (temp_r0 != 0) {
        gCurrentSprite.work1 = (u8) (temp_r0 - 1);
        gCurrentSprite.yPosition = (u16) (gCurrentSprite.yPosition - 4);
        return;
    }
    var_r3 = gCurrentSprite.work4;
    temp_r0_2 = &(&sFakeTankFlyingYMovement)[var_r3];
    var_r4 = *temp_r0_2;
    if ((s16) *temp_r0_2 == 0x7FFF) {
        var_r4 = sFakeTankFlyingYMovement;
        var_r3 = 0;
    }
    gCurrentSprite.work4 = (u8) (var_r3 + 1);
    gCurrentSprite.yPosition = (u16) (gCurrentSprite.yPosition + var_r4);
    temp_r0_3 = gCurrentSprite.work2 - 1;
    gCurrentSprite.work2 = (u8) temp_r0_3;
    if ((temp_r0_3 << 0x18) == 0) {
        *(&gCurrentSprite.work2 - 0xB) = 0x1B;
    }
}

void FakeTankFlyingAwayInit(void) {
    s32 temp_r0;

    gCurrentSprite.pose = 0x1C;
    gCurrentSprite.xParasiteTimer = 0x12C;
    gCurrentSprite.unk_8 = 0;
    gCurrentSprite.work2 = 0;
    (&gCurrentSprite.work2)[1] = 1;
    temp_r0 = (&gCurrentSprite.work2 + 1) - 2;
    *temp_r0 = 0;
    *(temp_r0 + 3) = 1;
}

void FakeTankFlyingAway(void) {
    s32 temp_r0;
    s32 var_r0;
    u16 var_r2;
    u16 var_r3;

    var_r3 = gXParasiteTargetYPosition;
    var_r2 = gXParasiteTargetXPosition;
    switch (gCurrentSprite.unk_8) {
    case 1:
        var_r3 = (u16) (var_r3 - 0x48);
        if (!(0x200 & gCurrentSprite.status)) {
            var_r0 = var_r2 - 0x48;
        } else {
block_7:
            var_r0 = var_r2 + 0x48;
        }
block_8:
        var_r2 = (u16) var_r0;
        break;
    case 3:
        var_r3 = (u16) (var_r3 + 0x48);
        if (0x200 & gCurrentSprite.status) {
            var_r0 = var_r2 - 0x48;
        } else {
            goto block_7;
        }
        goto block_8;
    }
    unk_136ac((s32) var_r3, (s32) var_r2, 0x10, 0x18, 2);
    temp_r0 = gCurrentSprite.xParasiteTimer - 1;
    gCurrentSprite.xParasiteTimer = (u16) temp_r0;
    if ((temp_r0 << 0x10) == 0) {
        gCurrentSprite.pose = 0x1E;
    }
}

void FakeTankLeaving(void) {
    s32 var_r0;
    s32 var_r0_2;
    u16 temp_r0_2;
    u32 temp_r2_2;
    u32 temp_r2_3;
    u8 temp_r0;
    u8 temp_r2;

    temp_r2 = gCurrentSprite.work3;
    if ((u32) temp_r2 <= 0xC7U) {
        gCurrentSprite.work3 = (u8) (temp_r2 + 1);
    }
    temp_r2_2 = (u8) gCurrentSprite.work3 >> 3;
    if (0x200 & gCurrentSprite.status) {
        var_r0 = gCurrentSprite.xPosition + temp_r2_2;
    } else {
        var_r0 = gCurrentSprite.xPosition - temp_r2_2;
    }
    gCurrentSprite.xPosition = (u16) var_r0;
    temp_r0 = gCurrentSprite.work4;
    if ((u32) temp_r0 <= 0xC7U) {
        gCurrentSprite.work4 = (u8) (temp_r0 + 1);
    }
    temp_r2_3 = (u8) gCurrentSprite.work4 >> 3;
    if (0x400 & gCurrentSprite.status) {
        var_r0_2 = gCurrentSprite.yPosition + temp_r2_3;
    } else {
        var_r0_2 = gCurrentSprite.yPosition - temp_r2_3;
    }
    gCurrentSprite.yPosition = (u16) var_r0_2;
    temp_r0_2 = 2 & gCurrentSprite.status;
    if (temp_r0_2 == 0) {
        gCurrentSprite.status = temp_r0_2;
    }
}

void FakeEnergyTank(void) {
    if (gCurrentSprite.freezeTimer > 0) {
        SpriteUtilUpdateFreezeTimer();
        return;
    }
    switch (gCurrentSprite.pose) {
    case 0x0:
        FakeTankInit();
        gCurrentSprite.pOam = sFakeEnergyTankOam_37d85c;
        return;
    case 0x1:
        gCurrentSprite.pOam = sFakeEnergyTankOam_37d85c;
        FakeTankIdleInit();
    case 0x2:
        FakeTankIdle();
        return;
    case 0x17:
        gCurrentSprite.pOam = sFakeEnergyTankOam_37d884;
        FakeTankWakingUpInit();
    case 0x18:
        FakeTankWakingUp();
        return;
    case 0x19:
        gCurrentSprite.pOam = sFakeEnergyTankOam_37d8bc;
        FakeTankFlyingInit();
    case 0x1A:
        FakeTankFlying();
        return;
    case 0x1B:
        FakeTankFlyingAwayInit();
    case 0x1C:
        FakeTankFlyingAway();
        return;
    case 0x1E:
        FakeTankLeaving();
        return;
    case 0x57:
        SpriteDyingInit();
    case 0x58:
        SpriteDying();
        return;
    case 0x59:
        FakeTankInit();
    case 0x5A:
        SpriteSpawningFromX();
        return;
    case 0x5B:
        XParasiteInit();
        gCurrentSprite.yPosition -= 0x20;
    }
}

void FakeMissileTank(void) {
    u8 temp_r0;

    if (gCurrentSprite.freezeTimer != 0) {
        SpriteUtilUpdateFreezeTimer();
        return;
    }
    switch (gCurrentSprite.pose) {
        case 0x0:
            FakeTankInit();
            gCurrentSprite.pOam = sFakeMissileTankOam_37e214;
            break;
        case 0x1:
            gCurrentSprite.pOam = sFakeMissileTankOam_37e214;
            FakeTankIdleInit();
        case 0x2:
            FakeTankIdle();
            break;
        case 0x17:
            gCurrentSprite.pOam = sFakeMissileTankOam_37e23c;
            FakeTankWakingUpInit();
        case 0x18:
            FakeTankWakingUp();
            break;
        case 0x19:
            gCurrentSprite.pOam = sFakeMissileTankOam_37e27c;
            FakeTankFlyingInit();
        case 0x1A:
            FakeTankFlying();
            break;
        case 0x1B:
            FakeTankFlyingAwayInit();
        case 0x1C:
            FakeTankFlyingAway();
            break;
        case 0x1E:
            FakeTankLeaving();
            break;
        case 0x57:
            SpriteDyingInit();
        case 0x58:
            SpriteDying();
            break;
        case 0x59:
            FakeTankInit();
        case 0x5A:
            SpriteSpawningFromX();
            break;
        case 0x5B:
            XParasiteInit();
            gCurrentSprite.yPosition = -= 0x20;
    }
}*/
