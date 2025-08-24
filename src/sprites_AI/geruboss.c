#include "macros.h"
#include "globals.h"

#include "data/sprites/geruboss.h"
#include "data/sprites/x_parasite.h"
#include "data/sprite_data.h"

#include "constants/audio.h"
#include "constants/clipdata.h"
#include "constants/samus.h"

#include "structs/sprite.h"
#include "structs/samus.h"

#define GERUBOSS_POSE_STALLING 8
#define GERUBOSS_POSE_CHARGING_INIT 0x29
#define GERUBOSS_POSE_CHARGING 0x2a
#define GERUBOSS_POSE_GOING_DOWN 0x2c
#define GERUBOSS_POSE_CHANGING_DIRECTION 0x2e
#define GERUBOSS_POSE_GOING_UP 0x30
#define GERUBOSS_POSE_GRABBING_CEILING 0x32

#define SS_GERUBOSS_FACING_DOWN SS_SAMUS_COLLIDING

u8 GerubossYMovement(u16 movement) {
    if (gCurrentSprite.status & SS_GERUBOSS_FACING_DOWN) {
        SpriteUtilCheckCollisionAtPosition(gCurrentSprite.yPosition + PIXEL_SIZE * 0x10, gCurrentSprite.xPosition - PIXEL_SIZE * 0xc);
        if (gPreviousCollisionCheck == COLLISION_SOLID) return TRUE;
        SpriteUtilCheckCollisionAtPosition(gCurrentSprite.yPosition + PIXEL_SIZE * 0x10, gCurrentSprite.xPosition + PIXEL_SIZE * 0xc);
        if (gPreviousCollisionCheck == COLLISION_SOLID) return TRUE;
        gCurrentSprite.yPosition += movement;
    } else {
        SpriteUtilCheckCollisionAtPosition(gCurrentSprite.yPosition - PIXEL_SIZE * 8, gCurrentSprite.xPosition - PIXEL_SIZE * 0xc);
        if (gPreviousCollisionCheck == COLLISION_SOLID) return TRUE;
        SpriteUtilCheckCollisionAtPosition(gCurrentSprite.yPosition - PIXEL_SIZE * 8, gCurrentSprite.xPosition + PIXEL_SIZE * 0xc);
        if (gPreviousCollisionCheck == COLLISION_SOLID) return TRUE;
        gCurrentSprite.yPosition -= movement;
    }
    return FALSE;
}

u8 GerubossXMovement(u16 movement) {
    if (gCurrentSprite.status & SS_FACING_RIGHT) {
        SpriteUtilCheckCollisionAtPosition(gCurrentSprite.yPosition - PIXEL_SIZE * 8, gCurrentSprite.xPosition + PIXEL_SIZE * 0x10);
        if (gPreviousCollisionCheck == COLLISION_SOLID) return TRUE;
        SpriteUtilCheckCollisionAtPosition(gCurrentSprite.yPosition + PIXEL_SIZE * 8, gCurrentSprite.xPosition + PIXEL_SIZE * 0x10);
        if (gPreviousCollisionCheck == COLLISION_SOLID) return TRUE;
        gCurrentSprite.xPosition += movement;
    } else {
        SpriteUtilCheckCollisionAtPosition(gCurrentSprite.yPosition - PIXEL_SIZE * 8, gCurrentSprite.xPosition - PIXEL_SIZE * 0x10);
        if (gPreviousCollisionCheck == COLLISION_SOLID) return TRUE;
        SpriteUtilCheckCollisionAtPosition(gCurrentSprite.yPosition + PIXEL_SIZE * 8, gCurrentSprite.xPosition - PIXEL_SIZE * 0x10);
        if (gPreviousCollisionCheck == COLLISION_SOLID) return TRUE;
        gCurrentSprite.xPosition -= movement;
    }
    return FALSE;
}

void GerubossTurningIntoX(void) {
    SpriteSpawnNewXParasite(PSPRITE_X_PARASITE, gCurrentSprite.spriteId, 0, gCurrentSprite.primarySpriteRamSlot, gCurrentSprite.spritesetSlotAndProperties,
        gCurrentSprite.yPosition - PIXEL_SIZE * 2, gCurrentSprite.xPosition + PIXEL_SIZE * 9, SS_X_FLIP);
    gCurrentSprite.yPosition += PIXEL_SIZE * 2;
    gCurrentSprite.xPosition -= PIXEL_SIZE * 9;
}

void GerubossInit(void) {
    SpriteUtilTrySetAbsorbXFlag();
    if (gCurrentSprite.properties & SP_CAN_ABSORB_X && !(gCurrentSprite.status & SS_HIDDEN)) {
        gCurrentSprite.status = 0;
        return;
    }
    SpriteUtilMakeSpriteFaceSamusDirection();
    gCurrentSprite.drawDistanceTop = 0x20;
    gCurrentSprite.drawDistanceBottom = 0x28;
    gCurrentSprite.drawDistanceHorizontal = 0x18;
    gCurrentSprite.hitboxTop = -PIXEL_SIZE * 8;
    gCurrentSprite.hitboxBottom = PIXEL_SIZE * 0xc;
    gCurrentSprite.hitboxLeft = -PIXEL_SIZE * 0xe;
    gCurrentSprite.hitboxRight = PIXEL_SIZE * 0xe;
    gCurrentSprite.pOam = sGerubossOam_Idle;
    gCurrentSprite.animationDurationCounter = 0;
    gCurrentSprite.currentAnimationFrame = 0;
    gCurrentSprite.bgPriority = gIoRegisters.bg1Cnt & 3;
    gCurrentSprite.health = GET_PSPRITE_HEALTH(gCurrentSprite.spriteId);
    gCurrentSprite.samusCollision = SSC_HURTS_SAMUS;
    if (gCurrentSprite.pose == SPRITE_POSE_SPAWNING_FROM_X_INIT) {
        gCurrentSprite.pose = SPRITE_POSE_SPAWNING_FROM_X;
        gCurrentSprite.xParasiteTimer = X_PARASITE_MOSAIC_MAX_INDEX;
    } else {
        gCurrentSprite.yPosition -= PIXEL_SIZE * 8;
        gCurrentSprite.pose = SPRITE_POSE_IDLE_INIT;
    }
}

void GerubossIdleInit(void) {
    gCurrentSprite.pose = SPRITE_POSE_IDLE;
    gCurrentSprite.animationDurationCounter = 0;
    gCurrentSprite.currentAnimationFrame = 0;
    gCurrentSprite.pOam = sGerubossOam_Idle;
    gCurrentSprite.work1 = 48;
}

void GerubossIdle(void) {
    if (gCurrentSprite.status & SS_HIDDEN) return;

    SpriteUtilCheckCollisionAtPosition(gCurrentSprite.yPosition - PIXEL_SIZE * 9, gCurrentSprite.xPosition - PIXEL_SIZE * 0xc);
    if (gPreviousCollisionCheck != COLLISION_SOLID) {
        SpriteUtilCheckCollisionAtPosition(gCurrentSprite.yPosition - PIXEL_SIZE * 9, gCurrentSprite.xPosition + PIXEL_SIZE * 0xc);
        if (gPreviousCollisionCheck != COLLISION_SOLID) {
            SpriteUtilMakeSpriteFaceSamusDirection();
            gCurrentSprite.pose = GERUBOSS_POSE_CHARGING_INIT;
            return;
        }
    }

    if (SPRITE_HAS_ISFT(gCurrentSprite) != 0) {
        gCurrentSprite.pose = GERUBOSS_POSE_STALLING;
        gCurrentSprite.animationDurationCounter = 0;
        gCurrentSprite.currentAnimationFrame = 0;
        gCurrentSprite.pOam = sGerubossOam_Stalling;
        gCurrentSprite.work1 = 90;
        SoundPlayNotAlreadyPlaying(SOUND_GERUBOSS_STALL);
        return;
    }

    if (gCurrentSprite.work1 > 0) {
        gCurrentSprite.work1--;
    } else if (gSamusData.yPosition - PIXEL_SIZE * 0x12 >= gCurrentSprite.yPosition) {
        u8 nslr = SpriteUtilCheckSamusNearSpriteLeftRight(BLOCK_SIZE * 8, BLOCK_SIZE * 5);
        if (nslr == NSLR_RIGHT) {
            gCurrentSprite.status |= SS_FACING_RIGHT;
            gCurrentSprite.pose = GERUBOSS_POSE_CHARGING_INIT;
        } else if (nslr == NSLR_LEFT) {
            gCurrentSprite.status &= ~SS_FACING_RIGHT;
            gCurrentSprite.pose = GERUBOSS_POSE_CHARGING_INIT;
        }
    }
}

void GerubossStalling(void) {
    if (--gCurrentSprite.work1 == 0)
        gCurrentSprite.pose = SPRITE_POSE_IDLE_INIT;
}

void GerubossChargingInit(void) {
    gCurrentSprite.pose = GERUBOSS_POSE_CHARGING;
    gCurrentSprite.animationDurationCounter = 0;
    gCurrentSprite.currentAnimationFrame = 0;
    gCurrentSprite.pOam = sGerubossOam_Charging;
    SoundPlayNotAlreadyPlaying(SOUND_GERUBOSS_CHARGE);
}

void GerubossCharging(void) {
    if (SpriteUtilCheckEndCurrentSpriteAnim()) {
        gCurrentSprite.pose = GERUBOSS_POSE_GOING_DOWN;
        gCurrentSprite.animationDurationCounter = 0;
        gCurrentSprite.currentAnimationFrame = 0;
        gCurrentSprite.pOam = sGerubossOam_StartGoingDown;
        gCurrentSprite.status |= SS_GERUBOSS_FACING_DOWN;
        gCurrentSprite.work1 = 24;
        SoundPlayNotAlreadyPlaying(SOUND_GERUBOSS_START_MOVING);
    }
}

void GerubossGoingDown(void) {
    if (gCurrentSprite.work1 > 0) {
        if (--gCurrentSprite.work1 == 0) {
            gCurrentSprite.animationDurationCounter = 0;
            gCurrentSprite.currentAnimationFrame = 0;
            gCurrentSprite.pOam = sGerubossOam_GoingDown;
            gCurrentSprite.work2 = 0;
        }
    } else {
        if ((gCurrentSprite.work2 & 0xf) == 0)
            SoundPlay(SOUND_GERUBOSS_MOVING);
        gCurrentSprite.work2++;
    }
    GerubossXMovement(PIXEL_SIZE / 2);
    if (GerubossYMovement(PIXEL_SIZE * 3)) {
        gCurrentSprite.pose = GERUBOSS_POSE_CHANGING_DIRECTION;
        gCurrentSprite.animationDurationCounter = 0;
        gCurrentSprite.currentAnimationFrame = 0;
        gCurrentSprite.pOam = sGerubossOam_TiltingUp;
    }
}

void GerubossChangingDirection(void) {
    if (SpriteUtilCheckEndCurrentSpriteAnim()) {
        gCurrentSprite.pose = GERUBOSS_POSE_GOING_UP;
        gCurrentSprite.animationDurationCounter = 0;
        gCurrentSprite.currentAnimationFrame = 0;
        gCurrentSprite.pOam = sGerubossOam_StartGoingUp;
        gCurrentSprite.status &= ~SS_GERUBOSS_FACING_DOWN;
        gCurrentSprite.work1 = 24;
        SoundPlayNotAlreadyPlaying(SOUND_GERUBOSS_START_MOVING);
    }
}

void GerubossGoingUp(void) {
    if (gCurrentSprite.work1 > 0) {
        if (--gCurrentSprite.work1 == 0) {
            gCurrentSprite.animationDurationCounter = 0;
            gCurrentSprite.currentAnimationFrame = 0;
            gCurrentSprite.pOam = sGerubossOam_GoingUp;
            gCurrentSprite.work2 = 0;
        }
    } else {
        if ((gCurrentSprite.work2 & 0xf) == 0)
            SoundPlay(SOUND_GERUBOSS_MOVING);
        gCurrentSprite.work2++;
    }
    GerubossXMovement(PIXEL_SIZE / 2);
    if (GerubossYMovement(PIXEL_SIZE * 3)) {
        gCurrentSprite.pose = GERUBOSS_POSE_GRABBING_CEILING;
        gCurrentSprite.animationDurationCounter = 0;
        gCurrentSprite.currentAnimationFrame = 0;
        gCurrentSprite.pOam = sGerubossOam_GrabbingCeiling;
    }
}

void GerubossGrabbingCeiling(void) {
    if (SpriteUtilCheckNearEndCurrentSpriteAnim())
        gCurrentSprite.pose = SPRITE_POSE_IDLE_INIT;
}

void Geruboss(void) {
    if (SPRITE_HAS_ISFT(gCurrentSprite) == 4)
        SoundPlayNotAlreadyPlaying(SOUND_GERUBOSS_HURT);
    if (gCurrentSprite.freezeTimer > 0) {
        SpriteUtilUpdateFreezeTimer();
        return;
    }
    switch (gCurrentSprite.pose) {
        case SPRITE_POSE_UNINITIALIZED:
            GerubossInit();
            break;
        case SPRITE_POSE_IDLE_INIT:
            GerubossIdleInit();
        case SPRITE_POSE_IDLE:
            GerubossIdle();
            break;
        case GERUBOSS_POSE_STALLING:
            GerubossStalling();
            break;
        case GERUBOSS_POSE_CHARGING_INIT:
            GerubossChargingInit();
        case GERUBOSS_POSE_CHARGING:
            GerubossCharging();
            break;
        case GERUBOSS_POSE_GOING_DOWN:
            GerubossGoingDown();
            break;
        case GERUBOSS_POSE_CHANGING_DIRECTION:
            GerubossChangingDirection();
            break;
        case GERUBOSS_POSE_GOING_UP:
            GerubossGoingUp();
            break;
        case GERUBOSS_POSE_GRABBING_CEILING:
            GerubossGrabbingCeiling();
            break;
        case SPRITE_POSE_DYING_INIT:
            SpriteDyingInit();
        case SPRITE_POSE_DYING:
            SpriteDying();
            break;
        case SPRITE_POSE_SPAWNING_FROM_X_INIT:
            GerubossInit();
        case SPRITE_POSE_SPAWNING_FROM_X:
            SpriteSpawningFromX();
            break;
        case SPRITE_POSE_TURNING_INTO_X:
            GerubossTurningIntoX();
            XParasiteInit();
    }
}
