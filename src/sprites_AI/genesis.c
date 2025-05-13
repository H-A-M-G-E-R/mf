#include "globals.h"

#include "data/samus_data.h"
#include "data/sprites/genesis.h"
#include "data/sprites/x_parasite.h"
#include "data/sprite_data.h"

#include "constants/audio.h"
#include "constants/sprite.h"

#include "structs/clipdata.h"
#include "structs/sprite.h"

#define GENESIS_POSE_WAITING_INIT 7
#define GENESIS_POSE_WAITING 8
#define GENESIS_POSE_REACHED_WALL_INIT 9
#define GENESIS_POSE_REACHED_WALL 0xa
#define GENESIS_POSE_TURNING_AROUND_INIT 3
#define GENESIS_POSE_TURNING_AROUND_1 4
#define GENESIS_POSE_TURNING_AROUND_2 5
#define GENESIS_POSE_SPITTING 0x2a

void GenesisInit(void) {
    SpriteUtilTrySetAbsorbXFlag();
    if (gCurrentSprite.properties & SP_CAN_ABSORB_X && !(gCurrentSprite.status & SS_HIDDEN)) {
        gCurrentSprite.status = 0;
        return;
    }
    SpriteUtilMakeSpriteFaceSamusXFlip();
    gCurrentSprite.drawDistanceTop = 0x10;
    gCurrentSprite.drawDistanceBottom = 8;
    gCurrentSprite.drawDistanceHorizontal = 0x20;
    gCurrentSprite.hitboxTop = -PIXEL_TO_SUB_PIXEL(0x10);
    gCurrentSprite.hitboxBottom = PIXEL_TO_SUB_PIXEL(1);
    gCurrentSprite.hitboxLeft = -PIXEL_TO_SUB_PIXEL(0x10);
    gCurrentSprite.hitboxRight = PIXEL_TO_SUB_PIXEL(0x10);
    gCurrentSprite.pOam = sGenesisOam_Walking;
    gCurrentSprite.animationDurationCounter = 0;
    gCurrentSprite.currentAnimationFrame = 0;
    gCurrentSprite.bgPriority = gIoRegisters.bg1Cnt & 3;
    gCurrentSprite.health = GET_PSPRITE_HEALTH(gCurrentSprite.spriteId);
    gCurrentSprite.samusCollision = SSC_HURTS_SAMUS;
    if (gCurrentSprite.pose == SPRITE_POSE_SPAWNING_FROM_X_INIT) {
        gCurrentSprite.pose = SPRITE_POSE_SPAWNING_FROM_X;
        gCurrentSprite.xParasiteTimer = X_PARASITE_MOSAIC_MAX_INDEX;
    } else
        gCurrentSprite.pose = SPRITE_POSE_IDLE_INIT;
}

void GenesisIdleInit(void) {
    gCurrentSprite.pose = SPRITE_POSE_IDLE;
    gCurrentSprite.animationDurationCounter = 0;
    gCurrentSprite.currentAnimationFrame = 0;
    if (gSpriteRandomNumber & 1)
        gCurrentSprite.pOam = sGenesisOam_Walking;
    else
        gCurrentSprite.pOam = sGenesisOam_Running;
}

void GenesisIdle(void) {
    u16 speed;

    if (gCurrentSprite.status & SS_HIDDEN)
        return;
    
    if (gCurrentSprite.currentAnimationFrame == 0 && gCurrentSprite.animationDurationCounter == 1 && gCurrentSprite.status & SS_ON_SCREEN)
        SoundPlayNotAlreadyPlaying(SOUND_GENESIS_FOOTSTEPS);

    if (gCurrentSprite.status & SS_X_FLIP) {
        SpriteUtilCheckCollisionAtPosition(gCurrentSprite.yPosition, gCurrentSprite.xPosition + PIXEL_TO_SUB_PIXEL(0x12));
        if (gPreviousCollisionCheck != COLLISION_AIR) {
            SpriteUtilCheckCollisionAtPosition(gCurrentSprite.yPosition - PIXEL_TO_SUB_PIXEL(4), gCurrentSprite.xPosition + PIXEL_TO_SUB_PIXEL(0x12));
            if (gPreviousCollisionCheck & COLLISION_FLAGS_UNKNOWN_F) {
                gCurrentSprite.pose = GENESIS_POSE_REACHED_WALL_INIT;
                return;
            }
        } else {
            gCurrentSprite.pose = GENESIS_POSE_REACHED_WALL_INIT;
            return;
        }
    } else {
        SpriteUtilCheckCollisionAtPosition(gCurrentSprite.yPosition, gCurrentSprite.xPosition - PIXEL_TO_SUB_PIXEL(0x12));
        if (gPreviousCollisionCheck != COLLISION_AIR) {
            SpriteUtilCheckCollisionAtPosition(gCurrentSprite.yPosition - PIXEL_TO_SUB_PIXEL(4), gCurrentSprite.xPosition - PIXEL_TO_SUB_PIXEL(0x12));
            if (gPreviousCollisionCheck & COLLISION_FLAGS_UNKNOWN_F) {
                gCurrentSprite.pose = GENESIS_POSE_REACHED_WALL_INIT;
                return;
            }
        } else {
            gCurrentSprite.pose = GENESIS_POSE_REACHED_WALL_INIT;
            return;
        }
    }

    if (gCurrentSprite.pOam == sGenesisOam_Running)
        speed = PIXEL_TO_SUB_PIXEL(0.5);
    else
        speed = PIXEL_TO_SUB_PIXEL(0.25);
    if (gCurrentSprite.status & SS_X_FLIP)
        gCurrentSprite.xPosition += speed;
    else
        gCurrentSprite.xPosition -= speed;

    if (SpriteUtilCheckEndCurrentSpriteAnim()) {
        gCurrentSprite.animationDurationCounter = 0;
        gCurrentSprite.currentAnimationFrame = 0;
        switch (gSpriteRandomNumber) {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
            case 5:
            case 6:
            case 7:
                gCurrentSprite.pose = GENESIS_POSE_SPITTING;
                gCurrentSprite.pOam = sGenesisOam_Skidding;
                break;
            case 8:
            case 9:
                gCurrentSprite.pose = GENESIS_POSE_REACHED_WALL;
                gCurrentSprite.pOam = sGenesisOam_Skidding;
                break;
            case 10:
            case 11:
            case 12:
                gCurrentSprite.pOam = sGenesisOam_Running;
                break;
            case 13:
            case 14:
            case 15:
                gCurrentSprite.pOam = sGenesisOam_Walking;
        }
    }
}

void GensisWaitingInit(void) {
    gCurrentSprite.pose = GENESIS_POSE_WAITING;
    gCurrentSprite.animationDurationCounter = 0;
    gCurrentSprite.currentAnimationFrame = 0;
    gCurrentSprite.pOam = sGenesisOam_Skidding;
}

void GenesisWaiting(void) {
    if (gCurrentSprite.pOam == sGenesisOam_Skidding) {
        if (SpriteUtilCheckEndCurrentSpriteAnim()) {
            gCurrentSprite.animationDurationCounter = 0;
            gCurrentSprite.currentAnimationFrame = 0;
            gCurrentSprite.pOam = sGenesisOam_Waiting;
        }
    } else {
        if (SpriteUtilCheckNearEndCurrentSpriteAnim())
            gCurrentSprite.pose = SPRITE_POSE_IDLE_INIT;
    }
}

void GenesisReachedWallInit(void) {
    gCurrentSprite.pose = GENESIS_POSE_REACHED_WALL;
    gCurrentSprite.animationDurationCounter = 0;
    gCurrentSprite.currentAnimationFrame = 0;
    gCurrentSprite.pOam = sGenesisOam_Skidding;
}

void GenesisReachedWall(void) {
    if (gCurrentSprite.pOam == sGenesisOam_Skidding) {
        if (SpriteUtilCheckEndCurrentSpriteAnim()) {
            gCurrentSprite.animationDurationCounter = 0;
            gCurrentSprite.currentAnimationFrame = 0;
            gCurrentSprite.pOam = sGenesisOam_Waiting;
        }
    } else {
        if (SpriteUtilCheckNearEndCurrentSpriteAnim())
            gCurrentSprite.pose = GENESIS_POSE_TURNING_AROUND_INIT;
    }
}

void GenesisTurningAroundInit(void) {
    gCurrentSprite.pose = GENESIS_POSE_TURNING_AROUND_1;
    gCurrentSprite.animationDurationCounter = 0;
    gCurrentSprite.currentAnimationFrame = 0;
    gCurrentSprite.pOam = sGenesisOam_TurningAround;
}

void GenesisTurningAround(void) {
    if (SpriteUtilCheckEndCurrentSpriteAnim()) {
        gCurrentSprite.animationDurationCounter = 0;
        gCurrentSprite.currentAnimationFrame = 0;
        gCurrentSprite.pOam = sGenesisOam_TurningAround;
        gCurrentSprite.status ^= SS_X_FLIP;
        gCurrentSprite.pose = GENESIS_POSE_TURNING_AROUND_2;
    }
}

void GenesisTurningAroundSecondPart(void) {
    if (SpriteUtilCheckEndCurrentSpriteAnim())
        gCurrentSprite.pose = SPRITE_POSE_IDLE_INIT;
}

void GenesisSpitting(void) {
    if (gCurrentSprite.pOam == sGenesisOam_Skidding) {
        if (SpriteUtilCheckEndCurrentSpriteAnim()) {
            gCurrentSprite.animationDurationCounter = 0;
            gCurrentSprite.currentAnimationFrame = 0;
            gCurrentSprite.pOam = sGenesisOam_Barfing;
            if (gCurrentSprite.status & SS_ON_SCREEN)
                SoundPlayNotAlreadyPlaying(SOUND_GENESIS_SPITTING);
        }
    } else {
        if (SpriteUtilCheckNearEndCurrentSpriteAnim()) {
            if (gSpriteRandomNumber < 12)
                gCurrentSprite.pose = SPRITE_POSE_IDLE_INIT;
            else
                gCurrentSprite.pose = GENESIS_POSE_TURNING_AROUND_INIT;
        } else if (gCurrentSprite.currentAnimationFrame == 17 && gCurrentSprite.animationDurationCounter == 6) {
            if (gCurrentSprite.status & SS_X_FLIP)
                SpriteSpawnSecondary(SSPRITE_GENESIS_SPIT, 0, gCurrentSprite.spritesetGfxSlot, gCurrentSprite.primarySpriteRamSlot,
                    gCurrentSprite.yPosition + PIXEL_TO_SUB_PIXEL(0x1e), gCurrentSprite.xPosition + PIXEL_TO_SUB_PIXEL(6), 0);
            else
                SpriteSpawnSecondary(SSPRITE_GENESIS_SPIT, 0, gCurrentSprite.spritesetGfxSlot, gCurrentSprite.primarySpriteRamSlot,
                    gCurrentSprite.yPosition + PIXEL_TO_SUB_PIXEL(0x1e), gCurrentSprite.xPosition - PIXEL_TO_SUB_PIXEL(6), 0);
        }
    }
}

void GenesisSpitInit(void) {
    gCurrentSprite.status &= ~SS_NOT_DRAWN;
    gCurrentSprite.properties |= SP_KILL_OFF_SCREEN;
    gCurrentSprite.drawDistanceTop = 0x10;
    gCurrentSprite.drawDistanceBottom = 0;
    gCurrentSprite.drawDistanceHorizontal = 8;
    gCurrentSprite.hitboxTop = -PIXEL_TO_SUB_PIXEL(8);
    gCurrentSprite.hitboxBottom = 0;
    gCurrentSprite.hitboxLeft = -PIXEL_TO_SUB_PIXEL(2);
    gCurrentSprite.hitboxRight = PIXEL_TO_SUB_PIXEL(2);
    gCurrentSprite.samusCollision = SSC_HURTS_SAMUS_DIES_WHEN_HIT;
    gCurrentSprite.drawOrder = 3;
    gCurrentSprite.bgPriority = gIoRegisters.bg1Cnt & 3;
    gCurrentSprite.animationDurationCounter = 0;
    gCurrentSprite.currentAnimationFrame = 0;
    gCurrentSprite.pOam = sGenesisBarfOam_Hanging;
    gCurrentSprite.work1 = 6;
    gCurrentSprite.pose = SPRITE_POSE_IDLE;
}

void GenesisSpitHanging(void) {
    gCurrentSprite.yPosition += PIXEL_TO_SUB_PIXEL(0.25);
    if (--gCurrentSprite.work1 == 0) {
        gCurrentSprite.pose = SPRITE_POSE_FALLING;
        gCurrentSprite.work4 = 0;
    }
}

void GenesisSpitSplashingInit(void) {
    gCurrentSprite.pOam = sGenesisBarfOam_Splashing;
    gCurrentSprite.animationDurationCounter = 0;
    gCurrentSprite.currentAnimationFrame = 0;
    gCurrentSprite.pose = SPRITE_POSE_LANDED;
    if (gCurrentSprite.status & SS_ON_SCREEN)
        SoundPlayNotAlreadyPlaying(SOUND_GENESIS_SPIT_SPLASHING);
}

void GenesisSpitSplashing(void) {
    gCurrentSprite.ignoreSamusCollisionTimer = 1;
    if (SpriteUtilCheckEndCurrentSpriteAnim())
        gCurrentSprite.status = 0;
}

void Genesis(void) {
    if (SPRITE_HAS_ISFT(gCurrentSprite) == 4)
        SoundPlayNotAlreadyPlaying(SOUND_GENESIS_HURT);
    if (gCurrentSprite.freezeTimer > 0) {
        SpriteUtilUpdateFreezeTimer();
        return;
    }
    switch (gCurrentSprite.pose) {
        case SPRITE_POSE_UNINITIALIZED:
            GenesisInit();
            break;
        case SPRITE_POSE_IDLE_INIT:
            GenesisIdleInit();
        case SPRITE_POSE_IDLE:
            GenesisIdle();
            break;
        case GENESIS_POSE_WAITING_INIT:
            GensisWaitingInit();
        case GENESIS_POSE_WAITING:
            GenesisWaiting();
            break;
        case GENESIS_POSE_REACHED_WALL_INIT:
            GenesisReachedWallInit();
        case GENESIS_POSE_REACHED_WALL:
            GenesisReachedWall();
            break;
        case GENESIS_POSE_TURNING_AROUND_INIT:
            GenesisTurningAroundInit();
        case GENESIS_POSE_TURNING_AROUND_1:
            GenesisTurningAround();
            break;
        case GENESIS_POSE_TURNING_AROUND_2:
            GenesisTurningAroundSecondPart();
            break;
        case GENESIS_POSE_SPITTING:
            GenesisSpitting();
            break;
        case SPRITE_POSE_DYING_INIT:
            SpriteDyingInit();
        case SPRITE_POSE_DYING:
            SpriteDying();
            break;
        case SPRITE_POSE_SPAWNING_FROM_X_INIT:
            GenesisInit();
        case SPRITE_POSE_SPAWNING_FROM_X:
            SpriteSpawningFromX();
            break;
        case SPRITE_POSE_TURNING_INTO_X:
            XParasiteInit();
            gCurrentSprite.yPosition -= PIXEL_TO_SUB_PIXEL(8);
    }
}

void GenesisSpit(void) {
    switch (gCurrentSprite.pose) {
        case SPRITE_POSE_UNINITIALIZED:
            GenesisSpitInit();
            break;
        case SPRITE_POSE_IDLE:
            GenesisSpitHanging();
            break;
        case SPRITE_POSE_LANDED_INIT:
        case SPRITE_POSE_STOPPED:
            GenesisSpitSplashingInit();
        case SPRITE_POSE_LANDED:
            GenesisSpitSplashing();
            break;
        case SPRITE_POSE_FALLING:
            SpriteUtilCurrentSpriteFalling();
    }
}
