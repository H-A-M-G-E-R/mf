#include "globals.h"

#include "data/samus_data.h"
#include "data/sprites/puyo.h"
#include "data/sprites/x_parasite.h"
#include "data/sprite_data.h"

#include "constants/audio.h"
#include "constants/sprite.h"

#include "structs/clipdata.h"
#include "structs/sprite.h"

void PuyoInit(void) {
    SpriteUtilTrySetAbsorbXFlag();
    if (gCurrentSprite.properties & SP_CAN_ABSORB_X && !(gCurrentSprite.status & SS_HIDDEN)) {
        gCurrentSprite.status = 0;
        return;
    }
    SpriteUtilMakeSpriteFaceSamusXFlip();
    gCurrentSprite.drawDistanceTop = 0x10;
    gCurrentSprite.drawDistanceBottom = 0;
    gCurrentSprite.drawDistanceHorizontal = 0x10;
    gCurrentSprite.hitboxTop = -0x20;
    gCurrentSprite.hitboxBottom = 4;
    gCurrentSprite.hitboxLeft = -0x20;
    gCurrentSprite.hitboxRight = 0x20;
    gCurrentSprite.pOam = sPuyoOam_37ce44;
    gCurrentSprite.animationDurationCounter = 0;
    gCurrentSprite.currentAnimationFrame = 0;
    gCurrentSprite.health = GET_PSPRITE_HEALTH(gCurrentSprite.spriteId);
    gCurrentSprite.samusCollision = SSC_HURTS_SAMUS;
    if (gCurrentSprite.pose == SPRITE_POSE_SPAWNING_FROM_X_INIT) {
        gCurrentSprite.pose = SPRITE_POSE_SPAWNING_FROM_X;
        gCurrentSprite.xParasiteTimer = X_PARASITE_MOSAIC_MAX_INDEX;
    } else
        gCurrentSprite.pose = SPRITE_POSE_IDLE_INIT;
}

void PuyoFallingInit(void) {
    gCurrentSprite.pose = SPRITE_POSE_FALLING;
    gCurrentSprite.work4 = 0;
    gCurrentSprite.pOam = sPuyoOam_37ce44;
    gCurrentSprite.animationDurationCounter = 0;
    gCurrentSprite.currentAnimationFrame = 0;
}

void PuyoIdleInit(void) {
    gCurrentSprite.pose = SPRITE_POSE_IDLE;
    gCurrentSprite.pOam = sPuyoOam_37ce6c;
    gCurrentSprite.animationDurationCounter = 0;
    gCurrentSprite.currentAnimationFrame = 0;
}

void PuyoIdle(void) {
    u16 speed;

    if (gCurrentSprite.status & SS_HIDDEN)
        return;

    if (gCurrentSprite.currentAnimationFrame == 0 && gCurrentSprite.animationDurationCounter == 1 && gCurrentSprite.status & SS_ON_SCREEN)
        SoundPlayNotAlreadyPlaying(SOUND_PUYO_IDLE);

    SpriteUtilAlignYPosOnSlope();
    if (gPreviousVerticalCollisionCheck == COLLISION_AIR) {
        gCurrentSprite.pose = SPRITE_POSE_FALLING_INIT;
        return;
    }

    if (gCurrentSprite.status & SS_X_FLIP) {
        SpriteUtilCheckCollisionAtPosition(gCurrentSprite.yPosition, gCurrentSprite.xPosition + 0x40);
        if (gPreviousCollisionCheck == COLLISION_AIR) {
            gCurrentSprite.status ^= SS_X_FLIP;
            gCurrentSprite.pose = 7;
            return;
        }
        SpriteUtilCheckCollisionAtPosition(gCurrentSprite.yPosition - 0x10, gCurrentSprite.xPosition + 0x40);
        if (gPreviousCollisionCheck & COLLISION_FLAGS_UNKNOWN_F) {
            gCurrentSprite.status ^= SS_X_FLIP;
            gCurrentSprite.pose = 7;
            return;
        }
    } else {
        SpriteUtilCheckCollisionAtPosition(gCurrentSprite.yPosition, gCurrentSprite.xPosition - 0x40);
        if (gPreviousCollisionCheck == COLLISION_AIR) {
            gCurrentSprite.status ^= SS_X_FLIP;
            gCurrentSprite.pose = 7;
            return;
        }
        SpriteUtilCheckCollisionAtPosition(gCurrentSprite.yPosition - 0x10, gCurrentSprite.xPosition - 0x40);
        if (gPreviousCollisionCheck & COLLISION_FLAGS_UNKNOWN_F) {
            gCurrentSprite.status ^= SS_X_FLIP;
            gCurrentSprite.pose = 7;
            return;
        }
    }

    if (gCurrentSprite.currentAnimationFrame >= 4 && gCurrentSprite.currentAnimationFrame <= 5)
        speed = 4;
    else if (gCurrentSprite.currentAnimationFrame == 3)
        speed = 8;
    else
        speed = 0;
    if (gCurrentSprite.status & SS_X_FLIP)
        gCurrentSprite.xPosition += speed;
    else
        gCurrentSprite.xPosition -= speed;

    if (SpriteUtilCheckNearEndCurrentSpriteAnim()) {
        u32 nslr = SpriteUtilCheckSamusNearSpriteLeftRight(0x180, 0x180);
        if (nslr == NSLR_LEFT) {
            gCurrentSprite.status &= ~SS_X_FLIP;
            gCurrentSprite.pose = 0x29;
        } else if (nslr == NSLR_RIGHT) {
            gCurrentSprite.status |= SS_X_FLIP;
            gCurrentSprite.pose = 0x29;
        } else {
            gCurrentSprite.pose = 7;
        }
    }
}

void PuyoWaitingInit(void) {
    gCurrentSprite.pose = 8;
    gCurrentSprite.animationDurationCounter = 0;
    gCurrentSprite.currentAnimationFrame = 0;
    gCurrentSprite.pOam = sPuyoOam_37ce44;
    gCurrentSprite.work1 = gSpriteRandomNumber / 4 + 1;
}

void PuyoWaiting(void) {
    SpriteUtilAlignYPosOnSlope();
    if (gPreviousVerticalCollisionCheck == 0)
        gCurrentSprite.pose = SPRITE_POSE_FALLING_INIT;
    else {
        if (SpriteUtilCheckEndCurrentSpriteAnim()) {
            if (--gCurrentSprite.work1 == 0) {
                gCurrentSprite.pose = SPRITE_POSE_IDLE;
                gCurrentSprite.pOam = sPuyoOam_37ce6c;
                gCurrentSprite.animationDurationCounter = 0;
                gCurrentSprite.currentAnimationFrame = 0;
            }
        }
    }
}

void PuyoJumpWarningInit(void) {
    gCurrentSprite.pose = 0x2a;
    gCurrentSprite.animationDurationCounter = 0;
    gCurrentSprite.currentAnimationFrame = 0;
    gCurrentSprite.pOam = sPuyoOam_37cea4;
}

void PuyoJumpWarning(void) {
    if (SpriteUtilCheckEndCurrentSpriteAnim()) {
        gCurrentSprite.pose = 0x2c;
        gCurrentSprite.animationDurationCounter = 0;
        gCurrentSprite.currentAnimationFrame = 0;
        gCurrentSprite.pOam = sPuyoOam_37cec4;
        gCurrentSprite.work4 = 0;
        if (gCurrentSprite.status & SS_ON_SCREEN)
            SoundPlayNotAlreadyPlaying(SOUND_PUYO_JUMP);
    }
}

void PuyoJumpingUp(void) {
    u8 hitWall;

    SpriteUtilCheckCollisionAtPosition(gCurrentSprite.yPosition - 0x20, gCurrentSprite.xPosition);
    if (gPreviousCollisionCheck == COLLISION_SOLID) {
        gCurrentSprite.pose = 0x2e;
        gCurrentSprite.work4 = 0;
    } else {
        if (gCurrentSprite.work4 >= ARRAY_SIZE(sPuyoJumpingUpSpeed)-1) {
            gCurrentSprite.pose = 0x2e;
            gCurrentSprite.work4 = 0;
        } else {
            u8 offset = gCurrentSprite.work4;
            s16 movement = sPuyoJumpingUpSpeed[offset];
            if (movement == SHORT_MAX) {
                movement = sPuyoJumpingUpSpeed[offset - 1];
                gCurrentSprite.yPosition += movement;
            } else {
                offset++;
                gCurrentSprite.work4 = offset;
                gCurrentSprite.yPosition += movement;
            }
        }

        hitWall = FALSE;
        if (gCurrentSprite.status & SS_X_FLIP) {
            SpriteUtilCheckCollisionAtPosition(gCurrentSprite.yPosition - 8, gCurrentSprite.xPosition + 0x40);
            if (gPreviousCollisionCheck & COLLISION_FLAGS_UNKNOWN_F)
                hitWall++;
        } else {
            SpriteUtilCheckCollisionAtPosition(gCurrentSprite.yPosition - 8, gCurrentSprite.xPosition - 0x40);
            if (gPreviousCollisionCheck & COLLISION_FLAGS_UNKNOWN_F)
                hitWall++;
        }

        if (hitWall) {
            gCurrentSprite.status ^= SS_X_FLIP;
            gCurrentSprite.pose = 0x2e;
            gCurrentSprite.work4 = 0;
        } else {
            if (gCurrentSprite.status & SS_X_FLIP)
                gCurrentSprite.xPosition += 2;
            else
                gCurrentSprite.xPosition -= 2;
        }
    }
}

void PuyoJumpingDown(void) {
    u8 hitWall;
    u32 blockTop = SpriteUtilCheckVerticalCollisionAtPositionSlopes(gCurrentSprite.yPosition, gCurrentSprite.xPosition);
    if (gPreviousVerticalCollisionCheck != COLLISION_AIR) {
        gCurrentSprite.yPosition = blockTop;
        gCurrentSprite.pose = 0x30;
        gCurrentSprite.animationDurationCounter = 0;
        gCurrentSprite.currentAnimationFrame = 0;
        gCurrentSprite.pOam = sPuyoOam_37ced4;
        if (gCurrentSprite.status & SS_ON_SCREEN)
            SoundPlayNotAlreadyPlaying(SOUND_PUYO_LAND);
    } else {
        u8 offset = gCurrentSprite.work4;
        s16 movement = sPuyoJumpingDownSpeed[offset];
        if (movement == SHORT_MAX) {
            movement = sPuyoJumpingDownSpeed[offset - 1];
            gCurrentSprite.yPosition += movement;
        } else {
            offset++;
            gCurrentSprite.work4 = offset;
            gCurrentSprite.yPosition += movement;
        }
    }

    hitWall = FALSE;
    if (gCurrentSprite.status & SS_X_FLIP) {
        SpriteUtilCheckCollisionAtPosition(gCurrentSprite.yPosition - 8, gCurrentSprite.xPosition + 0x40);
        if (gPreviousCollisionCheck & COLLISION_FLAGS_UNKNOWN_F)
            hitWall++;
    } else {
        SpriteUtilCheckCollisionAtPosition(gCurrentSprite.yPosition - 8, gCurrentSprite.xPosition - 0x40);
        if (gPreviousCollisionCheck & COLLISION_FLAGS_UNKNOWN_F)
            hitWall++;
    }

    if (hitWall)
        gCurrentSprite.status ^= SS_X_FLIP;

    if (gCurrentSprite.status & SS_X_FLIP)
        gCurrentSprite.xPosition += 2;
    else
        gCurrentSprite.xPosition -= 2;
}


void PuyoLanding(void) {
    if (SpriteUtilCheckNearEndCurrentSpriteAnim())
        gCurrentSprite.pose = 7;
}

void Puyo(void) {
    if (SPRITE_HAS_ISFT(gCurrentSprite) == 4)
        SoundPlayNotAlreadyPlaying(SOUND_PUYO_HURT);
    if (gCurrentSprite.freezeTimer > 0) {
        SpriteUtilUpdateFreezeTimer();
        return;
    }
    switch (gCurrentSprite.pose) {
        case SPRITE_POSE_UNINITIALIZED:
            PuyoInit();
            break;
        case SPRITE_POSE_IDLE_INIT:
            PuyoIdleInit();
        case SPRITE_POSE_IDLE:
            PuyoIdle();
            break;
        case 7:
            PuyoWaitingInit();
        case 8:
            PuyoWaiting();
            break;
        case 0x29:
            PuyoJumpWarningInit();
        case 0x2a:
            PuyoJumpWarning();
            break;
        case 0x2c:
            PuyoJumpingUp();
            break;
        case 0x2e:
            PuyoJumpingDown();
            break;
        case 0x30:
            PuyoLanding();
            break;
        case SPRITE_POSE_FALLING_INIT:
            PuyoFallingInit();
        case SPRITE_POSE_FALLING:
            SpriteUtilCurrentSpriteFalling();
            break;
        case SPRITE_POSE_DYING_INIT:
            SpriteDyingInit();
        case SPRITE_POSE_DYING:
            SpriteDying();
            break;
        case SPRITE_POSE_SPAWNING_FROM_X_INIT:
            PuyoInit();
        case SPRITE_POSE_SPAWNING_FROM_X:
            SpriteSpawningFromX();
            break;
        case SPRITE_POSE_TURNING_INTO_X:
            XParasiteInit();
            gCurrentSprite.yPosition -= 0x20;
    }
}
