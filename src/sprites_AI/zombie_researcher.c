#include "sprites_AI/zombie_researcher.h"
#include "macros.h"
#include "globals.h"

#include "data/sprites/zombie_researcher.h"
#include "data/sprites/x_parasite.h"
#include "data/sprite_data.h"

#include "constants/clipdata.h"
#include "constants/particle.h"
#include "constants/sprite.h"
#include "constants/samus.h"

#include "structs/sprite.h"
#include "structs/samus.h"

void ZombieCheckSamusInRange(void) {
    u32 nslr;
    u32 currentSprite;

    nslr = SpriteUtilCheckSamusNearSpriteLeftRight(0x5a, 0x82);
    if (nslr != 0) {
        if ((gCurrentSprite.status & SPRITE_STATUS_X_FLIP)) {
            if (nslr == NSLR_LEFT) {
                return;
            }
        } else if (nslr == NSLR_RIGHT) {
            return;
        }
        gCurrentSprite.pose = 0x2a;
        gCurrentSprite.pOam = sFrameData_2fb4c0;
        gCurrentSprite.animationDurationCounter = 0;
        gCurrentSprite.currentAnimationFrame = 0;
        gCurrentSprite.hitboxTop = -0x40;
        gCurrentSprite.hitboxLeft = -0x20;
        gCurrentSprite.hitboxRight = 0x20;
    }
}

void ZombieSetWaitingToForm(void) {
    gCurrentSprite.samusCollision = 0;
    gCurrentSprite.pose = 0x18;
    gCurrentSprite.hitboxTop = -0x20;
    gCurrentSprite.hitboxBottom = 0x18;
    gCurrentSprite.hitboxLeft = -0x20;
    gCurrentSprite.hitboxRight = 0x20;
    gCurrentSprite.status = gCurrentSprite.status | SPRITE_STATUS_IGNORE_PROJECTILES;
}

void ZombieSetStandingHitbox(void) {
    gCurrentSprite.hitboxTop = -0x68;
    gCurrentSprite.hitboxBottom = 0;
    gCurrentSprite.hitboxLeft = -0x18;
    gCurrentSprite.hitboxRight = 0x18;
}

void ZombieDyingInit(void) {
    gCurrentSprite.pOam = sFrameData_2fb420;
    gCurrentSprite.animationDurationCounter = 0;
    gCurrentSprite.currentAnimationFrame = 0;
    gCurrentSprite.samusCollision = 0;
    gCurrentSprite.hitboxTop = -0x20;
    gCurrentSprite.work1 = 0xb4;
    gCurrentSprite.pose = 0x58;
    return;
}

void ZombieDying(void) {
    gCurrentSprite.ignoreSamusCollisionTimer = 1;
    if (gCurrentSprite.work1 == 0x8c) {
        SpriteSpawnNewXParasite(0x38,gCurrentSprite.spriteId,0,gCurrentSprite.primarySpriteRamSlot,
            gCurrentSprite.spritesetSlotAndProperties,gCurrentSprite.yPosition - 0x20,
            gCurrentSprite.xPosition,0);
    }
    if (--gCurrentSprite.work1 == 0) {
        gCurrentSprite.pOam = sFrameData_2fb5d0;
        gCurrentSprite.animationDurationCounter = 0;
        gCurrentSprite.currentAnimationFrame = 0;
        gCurrentSprite.health = GET_PSPRITE_HEALTH(gCurrentSprite.spriteId);
        ZombieSetWaitingToForm();
        gCurrentSprite.work5 = 1;
        gCurrentSprite.paletteRow = 0;
    }
}

void ZombieInit(void) {
    u32 pose;

    pose = gCurrentSprite.pose;
    if (pose == 0) {
        if ((u8)(gCurrentSprite.spritesetSlotAndProperties - 0x20) < 0x30) {
            gCurrentSprite.pOam = sFrameData_2fb300;
            gCurrentSprite.samusCollision = 2;
            gCurrentSprite.pose = 8;
            ZombieSetStandingHitbox();
            gCurrentSprite.work1 = pose;
        } else {
            gCurrentSprite.pOam = sFrameData_2fb528;
            gCurrentSprite.properties |= SP_CAN_ABSORB_X;
            ZombieSetWaitingToForm();
        }
        SpriteUtilChooseRandomXFlip();
    } else {
        gCurrentSprite.pOam = sFrameData_2fb258;
        gCurrentSprite.samusCollision = 0;
        gCurrentSprite.pose = 0x1a;
        gCurrentSprite.hitboxTop = -0x20;
        gCurrentSprite.hitboxBottom = 0;
        gCurrentSprite.hitboxLeft = -0x18;
        gCurrentSprite.hitboxRight = 0x18;
        gCurrentSprite.status &= ~SPRITE_STATUS_ENABLE_MOSAIC;
        gCurrentSprite.status &= ~SPRITE_STATUS_IGNORE_PROJECTILES;
    }
    gCurrentSprite.animationDurationCounter = 0;
    gCurrentSprite.currentAnimationFrame = 0;
    gCurrentSprite.drawDistanceTop = 0x20;
    gCurrentSprite.drawDistanceBottom = 0;
    gCurrentSprite.drawDistanceHorizontal = 0x10;
    gCurrentSprite.health = GET_PSPRITE_HEALTH(gCurrentSprite.spriteId);
}

void ZombieWaitingToForm(void) {
    if (gCurrentSprite.pOam == sFrameData_2fb5d0) {
        if (SpriteUtilCheckEndCurrentSpriteAnim()) {
            gCurrentSprite.pOam = sFrameData_2fb528;
            gCurrentSprite.animationDurationCounter = 0;
            gCurrentSprite.currentAnimationFrame = 0;
            gCurrentSprite.properties |= SP_CAN_ABSORB_X;
        }
    } else {
        unk_1129c();
        if (gPreviousVerticalCollisionCheck == 0) {
            gCurrentSprite.pose = 0x15;
        } else if (gPreviousVerticalCollisionCheck & 0xf0) {
            if (gCurrentSprite.status & SPRITE_STATUS_X_FLIP) {
                SpriteUtilCheckCollisionAtPosition(gCurrentSprite.yPosition, gCurrentSprite.xPosition + 0x20);
                if ((gPreviousCollisionCheck & 0xf0) == 0) {
                    gCurrentSprite.status &= ~SPRITE_STATUS_X_FLIP;
                } else {
                    SpriteUtilCheckCollisionAtPosition(gCurrentSprite.yPosition - 0x10, gCurrentSprite.xPosition + 0x20);
                    if ((gPreviousCollisionCheck & 0xf) != 0) {
                        gCurrentSprite.status &= ~SPRITE_STATUS_X_FLIP;
                    } else if (gSpriteRandomNumber == 0 && (gFrameCounter16Bit & 1) != 0) {
                        gCurrentSprite.xPosition += 4;
                    }
                }
            } else {
                SpriteUtilCheckCollisionAtPosition(gCurrentSprite.yPosition, gCurrentSprite.xPosition - 0x20);
                if ((gPreviousCollisionCheck & 0xf0) == 0) {
                    gCurrentSprite.status |= SPRITE_STATUS_X_FLIP;
                } else {
                    SpriteUtilCheckCollisionAtPosition(gCurrentSprite.yPosition - 0x10, gCurrentSprite.xPosition - 0x20);
                    if ((gPreviousCollisionCheck & 0xf) != 0) {
                        gCurrentSprite.status |= SPRITE_STATUS_X_FLIP;
                    } else if (gSpriteRandomNumber == 0 && (gFrameCounter16Bit & 1) != 0) {
                        gCurrentSprite.xPosition -= 4;
                    }
                }
            }
        }
    }
}

void ZombieForming(void) {
    if (gCurrentSprite.currentAnimationFrame == 0x11 && gCurrentSprite.animationDurationCounter == 2) {
        gCurrentSprite.hitboxTop = -0x68;
    } else if (gCurrentSprite.currentAnimationFrame == 0xd && gCurrentSprite.animationDurationCounter == 2) {
        gCurrentSprite.hitboxTop = -0x40;
        gCurrentSprite.samusCollision = SSC_HURTS_SAMUS;
    } else if (gCurrentSprite.currentAnimationFrame == 7 && gCurrentSprite.animationDurationCounter == 3) {
        SpriteUtilMakeSpriteFaceSamusXFlip();
        SoundPlayNotAlreadyPlaying(0x14d);
    }
    if (SpriteUtilCheckNearEndCurrentSpriteAnim()) {
        gCurrentSprite.hitboxLeft = -0x18;
        gCurrentSprite.hitboxRight = 0x18;
        gCurrentSprite.pose = 7;
    }
}

void ZombieIdleInit(void) {
    gCurrentSprite.pOam = sFrameData_2fb300;
    gCurrentSprite.animationDurationCounter = 0;
    gCurrentSprite.currentAnimationFrame = 0;
    gCurrentSprite.pose = 8;
    ZombieSetStandingHitbox();
}

void ZombieIdle(void) {
    unk_1129c();
    if (gPreviousVerticalCollisionCheck == 0) {
        gCurrentSprite.pose = 0x15;
    } else {
        if (SpriteUtilCheckNearEndCurrentSpriteAnim()) {
            gCurrentSprite.pose = 1;
        }
        ZombieCheckSamusInRange();
    }
}

void ZombieMovingInit(void) {
    gCurrentSprite.pOam = sFrameData_2fb328;
    gCurrentSprite.animationDurationCounter = 0;
    gCurrentSprite.currentAnimationFrame = 0;
    gCurrentSprite.pose = 2;
}

void ZombieMoving(void) {
    unk_1129c();
    if (gPreviousVerticalCollisionCheck == 0) {
        if (gCurrentSprite.status & SPRITE_STATUS_X_FLIP) {
            SpriteUtilCheckCollisionAtPosition(gCurrentSprite.yPosition, gCurrentSprite.xPosition + gCurrentSprite.hitboxLeft);
        } else {
            SpriteUtilCheckCollisionAtPosition(gCurrentSprite.yPosition, gCurrentSprite.xPosition + gCurrentSprite.hitboxRight);
        }
        if (gPreviousCollisionCheck == 0) {
            gCurrentSprite.pose = 0x15;
            return;
        }
    } else if (gPreviousVerticalCollisionCheck & 0xf0) {
        if (gCurrentSprite.status & SPRITE_STATUS_X_FLIP) {
            SpriteUtilCheckCollisionAtPosition(gCurrentSprite.yPosition, gCurrentSprite.xPosition + 0x20);
            if (!(gPreviousCollisionCheck & 0xf0)) {
                gCurrentSprite.pose = 3;
                return;
            }
            SpriteUtilCheckCollisionAtPosition(gCurrentSprite.yPosition - 0x10, gCurrentSprite.xPosition + 0x20);
            if (gPreviousCollisionCheck & 0xf) {
                gCurrentSprite.pose = 3;
                return;
            }
            gCurrentSprite.xPosition += 1;
        } else {
            SpriteUtilCheckCollisionAtPosition(gCurrentSprite.yPosition, gCurrentSprite.xPosition - 0x20);
            if (!(gPreviousCollisionCheck & 0xf0)) {
                gCurrentSprite.pose = 3;
                return;
            }
            SpriteUtilCheckCollisionAtPosition(gCurrentSprite.yPosition - 0x10, gCurrentSprite.xPosition - 0x20);
            if (gPreviousCollisionCheck & 0xf) {
                gCurrentSprite.pose = 3;
                return;
            }
            gCurrentSprite.xPosition -= 1;
        }
    }
    ZombieCheckSamusInRange();
}

void ZombieTurningInit(void) {
    gCurrentSprite.pOam = sFrameData_2fb410;
    gCurrentSprite.animationDurationCounter = 0;
    gCurrentSprite.currentAnimationFrame = 0;
    gCurrentSprite.pose = 4;
}

void ZombieTurning(void) {
    if (SpriteUtilCheckEndCurrentSpriteAnim()) {
        gCurrentSprite.animationDurationCounter = 0;
        gCurrentSprite.currentAnimationFrame = 0;
        gCurrentSprite.pose = 5;
        gCurrentSprite.status ^= SPRITE_STATUS_X_FLIP;
    }
}

void ZombieTurningEnd(void) {
    if (SpriteUtilCheckNearEndCurrentSpriteAnim()) {
        gCurrentSprite.pose = 7;
    }
}

void ZombieLungingInit(void) {
    if (SpriteUtilCheckEndCurrentSpriteAnim()) {
        gCurrentSprite.pOam = sFrameData_2fb460;
        gCurrentSprite.animationDurationCounter = 0;
        gCurrentSprite.currentAnimationFrame = 0;
        gCurrentSprite.pose = 0x2c;
        SoundPlayNotAlreadyPlaying(0x14f);
    }
}

void ZombieLunging(void) {
    s16 speed;
    
    unk_1129c();
    if (gPreviousVerticalCollisionCheck == 0) {
        if (gCurrentSprite.status & SPRITE_STATUS_X_FLIP) {
            SpriteUtilCheckCollisionAtPosition(gCurrentSprite.yPosition, gCurrentSprite.xPosition + gCurrentSprite.hitboxLeft);
        } else {
            SpriteUtilCheckCollisionAtPosition(gCurrentSprite.yPosition, gCurrentSprite.xPosition + gCurrentSprite.hitboxRight);
        }
        if (gPreviousCollisionCheck == 0) {
            gCurrentSprite.pose = 0x15;
            return;
        }
    } else {
        speed = sZombieLungingSpeed[gCurrentSprite.currentAnimationFrame];
        if (gPreviousVerticalCollisionCheck & 0xf0) {
            if (gCurrentSprite.status & SPRITE_STATUS_X_FLIP) {
                SpriteUtilCheckCollisionAtPosition(gCurrentSprite.yPosition, gCurrentSprite.xPosition + 0x20);
                if (gPreviousCollisionCheck & 0xf0) {
                    SpriteUtilCheckCollisionAtPosition(gCurrentSprite.yPosition - 0x10, gCurrentSprite.xPosition + 0x20);
                    if (!(gPreviousCollisionCheck & 0xf)) {
                        gCurrentSprite.xPosition += speed;
                    }
                }
            } else {
                SpriteUtilCheckCollisionAtPosition(gCurrentSprite.yPosition, gCurrentSprite.xPosition - 0x20);
                if (gPreviousCollisionCheck & 0xf0) {
                    SpriteUtilCheckCollisionAtPosition(gCurrentSprite.yPosition - 0x10, gCurrentSprite.xPosition - 0x20);
                    if (!(gPreviousCollisionCheck & 0xf)) {
                        gCurrentSprite.xPosition -= speed;
                    }
                }
            }
        }
    }
    if (SpriteUtilCheckEndCurrentSpriteAnim()) {
        gCurrentSprite.pOam = sFrameData_2fb488;
        gCurrentSprite.animationDurationCounter = 0;
        gCurrentSprite.currentAnimationFrame = 0;
        gCurrentSprite.pose = 0x2e;
    }
}

void ZombieCheckLungingAnimEnded(void) {
    if (SpriteUtilCheckNearEndCurrentSpriteAnim()) {
        gCurrentSprite.pose = 7;
    }
}

void ZombieFallingInit(void) {
    gCurrentSprite.pose = 0x16;
    gCurrentSprite.work4 = 0;
    if (!(gCurrentSprite.properties & SP_CAN_ABSORB_X)) {
        gCurrentSprite.pOam = sFrameData_2fb300;
        gCurrentSprite.animationDurationCounter = 0;
        gCurrentSprite.currentAnimationFrame = 0;
        ZombieSetStandingHitbox();
    }
}

void ZombieFalling(void) {
    u32 blockTop;
    u8 offset;
    s16 movement;

    blockTop = SpriteUtilCheckVerticalCollisionAtPositionSlopes(gCurrentSprite.yPosition,gCurrentSprite.xPosition);
    if (gPreviousVerticalCollisionCheck) {
        gCurrentSprite.yPosition = blockTop;
        if (gCurrentSprite.properties & SP_CAN_ABSORB_X) {
            gCurrentSprite.pose = 0x18;
        } else {
            gCurrentSprite.pose = 7;
        }
    } else {
        offset = gCurrentSprite.work4;
        movement = sSpritesFallingSpeed[offset];
        
        if (movement == SHORT_MAX)
        {
            movement = sSpritesFallingSpeed[offset - 1];
            gCurrentSprite.yPosition += movement;
        }
        else
        {
            offset++;
            gCurrentSprite.work4 = offset;
            gCurrentSprite.yPosition += movement;
        }
    }
}

void Zombie(void) {
    if ((gCurrentSprite.invincibilityStunFlashTimer & 0x7f) == 4) {
        SoundPlayNotAlreadyPlaying(0x14e);
    }
    if (gCurrentSprite.freezeTimer != 0) {
        SpriteUtilUpdateFreezeTimer();
        return;
    }
    switch (gCurrentSprite.pose) {
        case 0:
            ZombieInit();
            break;
        case 1:
            ZombieMovingInit();
        case 2:
            ZombieMoving();
            break;
        case 7:
            ZombieIdleInit();
        case 8:
            ZombieIdle();
            break;
        case 3:
            ZombieTurningInit();
        case 4:
            ZombieTurning();
            break;
        case 5:
            ZombieTurningEnd();
            break;
        case 0x18:
            ZombieWaitingToForm();
            break;
        case 0x1a:
            ZombieForming();
            break;
        case 0x2a:
            ZombieLungingInit();
            break;
        case 0x2c:
            ZombieLunging();
            break;
        case 0x2e:
            ZombieCheckLungingAnimEnded();
            break;
        case 0x15:
            ZombieFallingInit();
        case 0x16:
            ZombieFalling();
            break;
        case 0x57:
            ZombieDyingInit();
        case 0x58:
            ZombieDying();
            break;
        case 0x59:
            ZombieInit();
    }
}