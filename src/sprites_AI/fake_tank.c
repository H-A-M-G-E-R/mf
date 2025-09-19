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
    gCurrentSprite.hitboxTop = -BLOCK_SIZE;
    gCurrentSprite.hitboxBottom = 0;
    gCurrentSprite.hitboxLeft = -HALF_BLOCK_SIZE;
    gCurrentSprite.hitboxRight = HALF_BLOCK_SIZE;
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

    if ((u8)SpriteUtilCheckSamusNearSpriteLeftRight(BLOCK_SIZE * 3, BLOCK_SIZE * 3) != NSLR_OUT_OF_RANGE)
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

void FakeTankFlyingInit(void) {
    gCurrentSprite.pose = 0x1a;
    gCurrentSprite.work4 = 0;
    gCurrentSprite.work1 = 60;
    gCurrentSprite.work2 = 60;
    gCurrentSprite.animationDurationCounter = 0;
    gCurrentSprite.currentAnimationFrame = 0;
}

void FakeTankFlying(void) {
    u8 offset;
    s16 movement;

    if (gCurrentSprite.work1 > 0) {
        gCurrentSprite.work1--;
        gCurrentSprite.yPosition -= PIXEL_SIZE;
        return;
    }

    offset = gCurrentSprite.work4;
    movement = sFakeTankFlyingYMovement[offset];
    if (movement == SHORT_MAX) {
        movement = sFakeTankFlyingYMovement[0];
        offset = 0;
    }
    offset++;
    gCurrentSprite.work4 = offset;
    gCurrentSprite.yPosition += movement;

    if (--gCurrentSprite.work2 == 0)
        gCurrentSprite.pose = 0x1b;
}

void FakeTankFlyingAwayInit(void) {
    gCurrentSprite.pose = 0x1c;
    gCurrentSprite.xParasiteTimer = 300;
    gCurrentSprite.unk_8 = 0;
    gCurrentSprite.work2 = 0;
    gCurrentSprite.work3 = 1;
    gCurrentSprite.work1 = 0;
    gCurrentSprite.work4 = 1;
}

void FakeTankFlyingAway(void) {
    u16 targetY = gXParasiteTargetYPosition;
    u16 targetX = gXParasiteTargetXPosition;
    switch (gCurrentSprite.unk_8) {
        case 1:
            targetY -= PIXEL_TO_SUB_PIXEL(0x12);
            if (gCurrentSprite.status & SS_FACING_RIGHT)
                targetX += PIXEL_TO_SUB_PIXEL(0x12);
            else
                targetX -= PIXEL_TO_SUB_PIXEL(0x12);
            break;
        case 3:
            targetY += PIXEL_TO_SUB_PIXEL(0x12);
            if (gCurrentSprite.status & SS_FACING_RIGHT)
                targetX -= PIXEL_TO_SUB_PIXEL(0x12);
            else
                targetX += PIXEL_TO_SUB_PIXEL(0x12);
            break;
    }
    unk_136ac(targetY, targetX, PIXEL_SIZE * 4, PIXEL_TO_SUB_PIXEL(1.5) * 4, LOG2(4));
    if (--gCurrentSprite.xParasiteTimer == 0)
        gCurrentSprite.pose = 0x1e;
}

void FakeTankLeaving(void) {
    u32 movement;

    if (gCurrentSprite.work3 < PIXEL_TO_SUB_PIXEL(6.25) * 8)
        gCurrentSprite.work3 += 1;
    movement = DIV_SHIFT(gCurrentSprite.work3, 8);
    if (gCurrentSprite.status & SS_FACING_RIGHT)
        gCurrentSprite.xPosition += movement;
    else
        gCurrentSprite.xPosition -= movement;

    if (gCurrentSprite.work4 < PIXEL_TO_SUB_PIXEL(6.25) * 8)
        gCurrentSprite.work4 += 1;
    movement = DIV_SHIFT(gCurrentSprite.work4, 8);
    if (gCurrentSprite.status & SS_FACING_DOWN)
        gCurrentSprite.yPosition += movement;
    else
        gCurrentSprite.yPosition -= movement;
    if (!(gCurrentSprite.status & SS_ON_SCREEN))
        gCurrentSprite.status = 0;
}

void FakeEnergyTank(void) {
    if (gCurrentSprite.freezeTimer > 0) {
        SpriteUtilUpdateFreezeTimer();
        return;
    }
    switch (gCurrentSprite.pose) {
        case SPRITE_POSE_UNINITIALIZED:
            FakeTankInit();
            gCurrentSprite.pOam = sFakeEnergyTankOam_Idle;
            return;
        case SPRITE_POSE_IDLE_INIT:
            gCurrentSprite.pOam = sFakeEnergyTankOam_Idle;
            FakeTankIdleInit();
        case SPRITE_POSE_IDLE:
            FakeTankIdle();
            return;
        case 0x17:
            gCurrentSprite.pOam = sFakeEnergyTankOam_WakingUp;
            FakeTankWakingUpInit();
        case 0x18:
            FakeTankWakingUp();
            return;
        case 0x19:
            gCurrentSprite.pOam = sFakeEnergyTankOam_Flying;
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
        case SPRITE_POSE_DYING_INIT:
            SpriteDyingInit();
        case SPRITE_POSE_DYING:
            SpriteDying();
            return;
        case SPRITE_POSE_SPAWNING_FROM_X_INIT:
            FakeTankInit();
        case SPRITE_POSE_SPAWNING_FROM_X:
            SpriteSpawningFromX();
            return;
        case SPRITE_POSE_TURNING_INTO_X:
            XParasiteInit();
            gCurrentSprite.yPosition -= 0x20;
    }
}

void FakeMissileTank(void) {
    if (gCurrentSprite.freezeTimer != 0) {
        SpriteUtilUpdateFreezeTimer();
        return;
    }
    switch (gCurrentSprite.pose) {
        case SPRITE_POSE_UNINITIALIZED:
            FakeTankInit();
            gCurrentSprite.pOam = sFakeMissileTankOam_Idle;
            break;
        case SPRITE_POSE_IDLE_INIT:
            gCurrentSprite.pOam = sFakeMissileTankOam_Idle;
            FakeTankIdleInit();
        case SPRITE_POSE_IDLE:
            FakeTankIdle();
            break;
        case 0x17:
            gCurrentSprite.pOam = sFakeMissileTankOam_WakingUp;
            FakeTankWakingUpInit();
        case 0x18:
            FakeTankWakingUp();
            break;
        case 0x19:
            gCurrentSprite.pOam = sFakeMissileTankOam_Flying;
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
        case SPRITE_POSE_DYING_INIT:
            SpriteDyingInit();
        case SPRITE_POSE_DYING:
            SpriteDying();
            break;
        case SPRITE_POSE_SPAWNING_FROM_X_INIT:
            FakeTankInit();
        case SPRITE_POSE_SPAWNING_FROM_X:
            SpriteSpawningFromX();
            break;
        case SPRITE_POSE_TURNING_INTO_X:
            XParasiteInit();
            gCurrentSprite.yPosition -= HALF_BLOCK_SIZE;
    }
}
