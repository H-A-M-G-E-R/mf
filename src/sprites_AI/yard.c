#include "globals.h"

#include "data/samus_data.h"
#include "data/sprites/yard.h"
#include "data/sprites/x_parasite.h"
#include "data/sprite_data.h"

#include "constants/audio.h"
#include "constants/clipdata.h"
#include "constants/particle.h"
#include "constants/sprite.h"
#include "constants/samus.h"

#include "structs/clipdata.h"
#include "structs/power_bomb.h"
#include "structs/sprite.h"
#include "structs/samus.h"

enum YardProjectileDirection {
    YARD_PROJECTILE_DIRECTION_UP_LEFT,
    YARD_PROJECTILE_DIRECTION_DOWN_LEFT,
    YARD_PROJECTILE_DIRECTION_DOWN_RIGHT,
    YARD_PROJECTILE_DIRECTION_UP_RIGHT
};

u8 YardCheckShouldStartle(void) {
    if (gCurrentPowerBomb.animationState != 0) {
        gCurrentSprite.pose = 0x18;
        if (gCurrentSprite.work0)
            gCurrentSprite.pOam = sYardOam_StartledVertical;
        else
            gCurrentSprite.pOam = sYardOam_StartledHorizontal;
        gCurrentSprite.animationDurationCounter = 0;
        gCurrentSprite.currentAnimationFrame = 0;
        gCurrentSprite.work3 = 180;
        return TRUE;
    }
    return FALSE;
}

u8 YardCheckCollidingWithAir(void) {
    u8 midair = FALSE;

    if (gCurrentSprite.work0) {
        if (gCurrentSprite.status & SS_X_FLIP) {
            SpriteUtilCheckCollisionAtPosition(gCurrentSprite.yPosition - 0x20, gCurrentSprite.xPosition);
            if (gPreviousCollisionCheck == COLLISION_AIR) {
                SpriteUtilCheckCollisionAtPosition(gCurrentSprite.yPosition + 0x20, gCurrentSprite.xPosition);
                if (gPreviousCollisionCheck == COLLISION_AIR) midair = TRUE;
            }
        } else {
            SpriteUtilCheckCollisionAtPosition(gCurrentSprite.yPosition - 0x20, gCurrentSprite.xPosition - 4);
            if (gPreviousCollisionCheck == COLLISION_AIR) {
                SpriteUtilCheckCollisionAtPosition(gCurrentSprite.yPosition + 0x20, gCurrentSprite.xPosition - 4);
                if (gPreviousCollisionCheck == COLLISION_AIR) midair = TRUE;
            }
        }
    } else {
        if (gCurrentSprite.status & SS_Y_FLIP) {
            SpriteUtilCheckCollisionAtPosition(gCurrentSprite.yPosition - 4, gCurrentSprite.xPosition - 0x20);
            if (gPreviousCollisionCheck == COLLISION_AIR) {
                SpriteUtilCheckCollisionAtPosition(gCurrentSprite.yPosition - 4, gCurrentSprite.xPosition + 0x20);
                if (gPreviousCollisionCheck == COLLISION_AIR) midair = TRUE;
            }
        } else {
            SpriteUtilCheckCollisionAtPosition(gCurrentSprite.yPosition, gCurrentSprite.xPosition - 0x20);
            if (gPreviousCollisionCheck == COLLISION_AIR) {
                SpriteUtilCheckCollisionAtPosition(gCurrentSprite.yPosition, gCurrentSprite.xPosition + 0x20);
                if (gPreviousCollisionCheck == COLLISION_AIR) midair = TRUE;
            }
        }
    }

    return midair;
}

void YardUpdateHitbox(void) {
    if (gCurrentSprite.properties & SP_CAN_ABSORB_X) {
        if (gCurrentSprite.work0) {
            if (gCurrentSprite.status & SS_X_FLIP) {
                gCurrentSprite.hitboxTop = -0x1c;
                gCurrentSprite.hitboxBottom = 0x1c;
                gCurrentSprite.hitboxLeft = -0x38;
                gCurrentSprite.hitboxRight = 0x10;
            } else {
                gCurrentSprite.hitboxTop = -0x1c;
                gCurrentSprite.hitboxBottom = 0x1c;
                gCurrentSprite.hitboxLeft = -0x10;
                gCurrentSprite.hitboxRight = 0x38;
            }
        } else {
            if (gCurrentSprite.status & SS_Y_FLIP) {
                gCurrentSprite.hitboxTop = 0x10;
                gCurrentSprite.hitboxBottom = 0x38;
                gCurrentSprite.hitboxLeft = -0x1c;
                gCurrentSprite.hitboxRight = 0x1c;
            } else {
                gCurrentSprite.hitboxTop = -0x38;
                gCurrentSprite.hitboxBottom = 0x10;
                gCurrentSprite.hitboxLeft = -0x1c;
                gCurrentSprite.hitboxRight = 0x1c;
            }
        }
    } else {
        if (gCurrentSprite.work0) {
            if (gCurrentSprite.status & SS_X_FLIP) {
                gCurrentSprite.hitboxTop = -0x20;
                gCurrentSprite.hitboxBottom = 0x20;
                gCurrentSprite.hitboxLeft = -0x40;
                gCurrentSprite.hitboxRight = 0x10;
            } else {
                gCurrentSprite.hitboxTop = -0x20;
                gCurrentSprite.hitboxBottom = 0x20;
                gCurrentSprite.hitboxLeft = -0x10;
                gCurrentSprite.hitboxRight = 0x40;
            }
        } else {
            if (gCurrentSprite.status & SS_Y_FLIP) {
                gCurrentSprite.hitboxTop = 0x10;
                gCurrentSprite.hitboxBottom = 0x40;
                gCurrentSprite.hitboxLeft = -0x20;
                gCurrentSprite.hitboxRight = 0x20;
            } else {
                gCurrentSprite.hitboxTop = -0x40;
                gCurrentSprite.hitboxBottom = 0x10;
                gCurrentSprite.hitboxLeft = -0x20;
                gCurrentSprite.hitboxRight = 0x20;
            }
        }
    }
}

void YardSetCrawlingOam(void) {
    if (gCurrentSprite.properties & SP_CAN_ABSORB_X) {
        if (gCurrentSprite.work0)
            gCurrentSprite.pOam = sYardOam_UninfectedVertical;
        else
            gCurrentSprite.pOam = sYardOam_UninfectedHorizontal;
    } else {
        if (gCurrentSprite.work0)
            gCurrentSprite.pOam = sYardOam_CrawlingVertical;
        else
            gCurrentSprite.pOam = sYardOam_CrawlingHorizontal;
    }
    gCurrentSprite.animationDurationCounter = 0;
    gCurrentSprite.currentAnimationFrame = 0;
}

void YardSetTurningAroundOam(void) {
    if (gCurrentSprite.work0)
        gCurrentSprite.pOam = sYardOam_TurningAroundVertical1;
    else
        gCurrentSprite.pOam = sYardOam_TurningAroundHorizontal1;
    gCurrentSprite.animationDurationCounter = 0;
    gCurrentSprite.currentAnimationFrame = 0;
}

void YardSetTurningAroundSecondPartOam(void) {
    if (gCurrentSprite.work0)
        gCurrentSprite.pOam = sYardOam_TurningAroundVertical2;
    else
        gCurrentSprite.pOam = sYardOam_TurningAroundHorizontal2;
    gCurrentSprite.animationDurationCounter = 0;
    gCurrentSprite.currentAnimationFrame = 0;
}

void YardSetChargingOam(void) {
    if (gCurrentSprite.work0)
        gCurrentSprite.pOam = sYardOam_ChargingVertical;
    else
        gCurrentSprite.pOam = sYardOam_ChargingHorizontal;
    gCurrentSprite.animationDurationCounter = 0;
    gCurrentSprite.currentAnimationFrame = 0;
}

void YardSetShootingOam(void) {
    if (gCurrentSprite.work0)
        gCurrentSprite.pOam = sYardOam_ShootingVertical;
    else
        gCurrentSprite.pOam = sYardOam_ShootingHorizontal;
    gCurrentSprite.animationDurationCounter = 0;
    gCurrentSprite.currentAnimationFrame = 0;
}

void YardSetRecoilOam(void) {
    if (gCurrentSprite.work0)
        gCurrentSprite.pOam = sYardOam_RecoilVertical;
    else
        gCurrentSprite.pOam = sYardOam_RecoilHorizontal;
    gCurrentSprite.animationDurationCounter = 0;
    gCurrentSprite.currentAnimationFrame = 0;
}

void YardCheckShoot(void) {
    u32 nsfb;

    if (gCurrentSprite.work1 > 0) {
        gCurrentSprite.work1--;
        return;
    }
    if (gCurrentSprite.work0)
        nsfb = SpriteUtilCheckSamusNearSpriteFrontBehindY(0x280, 0x280, 0x280);
    else
        nsfb = SpriteUtilCheckSamusNearSpriteFrontBehind(0x280, 0x280, 0x280);
    if (nsfb == NSFB_IN_FRONT)
        gCurrentSprite.pose = 3;
    else if (nsfb == NSFB_BEHIND) {
        gCurrentSprite.pose = 0x2a;
        YardSetChargingOam();
        if (gCurrentSprite.status & SS_ON_SCREEN)
            SoundPlayNotAlreadyPlaying(SOUND_YARD_CHARGING);
    }
}

void YardCharging(void) {
    if (SpriteUtilCheckEndCurrentSpriteAnim()) {
        gCurrentSprite.work1 = 30;
        gCurrentSprite.pose = 0x2c;
        YardSetShootingOam();
    }
}

void YardShooting(void) {
    u8 startled = YardCheckShouldStartle();
    if (startled) return;
    if (--gCurrentSprite.work1 == 0) {
        gCurrentSprite.pose = 0x2e;
        YardSetRecoilOam();
        return;
    }
    if (gCurrentSprite.work1 == 15) {
        if (gCurrentSprite.work0) {
            if (gCurrentSprite.status & SS_X_FLIP) {
                if (gCurrentSprite.status & SS_Y_FLIP)
                    SpriteSpawnSecondary(SSPRITE_YARD_PROJECTILE, YARD_PROJECTILE_DIRECTION_UP_LEFT, gCurrentSprite.spritesetGfxSlot, gCurrentSprite.primarySpriteRamSlot,
                        gCurrentSprite.yPosition - 0x40, gCurrentSprite.xPosition - 0x54, 0);
                else
                    SpriteSpawnSecondary(SSPRITE_YARD_PROJECTILE, YARD_PROJECTILE_DIRECTION_DOWN_LEFT, gCurrentSprite.spritesetGfxSlot, gCurrentSprite.primarySpriteRamSlot,
                        gCurrentSprite.yPosition + 0x40, gCurrentSprite.xPosition - 0x54, 0);
            } else {
                if (gCurrentSprite.status & SS_Y_FLIP)
                    SpriteSpawnSecondary(SSPRITE_YARD_PROJECTILE, YARD_PROJECTILE_DIRECTION_UP_RIGHT, gCurrentSprite.spritesetGfxSlot, gCurrentSprite.primarySpriteRamSlot,
                        gCurrentSprite.yPosition - 0x40, gCurrentSprite.xPosition + 0x54, 0);
                else
                    SpriteSpawnSecondary(SSPRITE_YARD_PROJECTILE, YARD_PROJECTILE_DIRECTION_DOWN_RIGHT, gCurrentSprite.spritesetGfxSlot, gCurrentSprite.primarySpriteRamSlot,
                        gCurrentSprite.yPosition + 0x40, gCurrentSprite.xPosition + 0x54, 0);
            }
        } else {
            if (gCurrentSprite.status & SS_Y_FLIP) {
                if (gCurrentSprite.status & SS_X_FLIP)
                    SpriteSpawnSecondary(SSPRITE_YARD_PROJECTILE, YARD_PROJECTILE_DIRECTION_DOWN_LEFT, gCurrentSprite.spritesetGfxSlot, gCurrentSprite.primarySpriteRamSlot,
                        gCurrentSprite.yPosition + 0x54, gCurrentSprite.xPosition - 0x40, 0);
                else
                    SpriteSpawnSecondary(SSPRITE_YARD_PROJECTILE, YARD_PROJECTILE_DIRECTION_DOWN_RIGHT, gCurrentSprite.spritesetGfxSlot, gCurrentSprite.primarySpriteRamSlot,
                        gCurrentSprite.yPosition + 0x54, gCurrentSprite.xPosition + 0x40, 0);
            } else {
                if (gCurrentSprite.status & SS_X_FLIP)
                    SpriteSpawnSecondary(SSPRITE_YARD_PROJECTILE, YARD_PROJECTILE_DIRECTION_UP_LEFT, gCurrentSprite.spritesetGfxSlot, gCurrentSprite.primarySpriteRamSlot,
                        gCurrentSprite.yPosition - 0x54, gCurrentSprite.xPosition - 0x40, 0);
                else
                    SpriteSpawnSecondary(SSPRITE_YARD_PROJECTILE, YARD_PROJECTILE_DIRECTION_UP_RIGHT, gCurrentSprite.spritesetGfxSlot, gCurrentSprite.primarySpriteRamSlot,
                        gCurrentSprite.yPosition - 0x54, gCurrentSprite.xPosition + 0x40, 0);
            }
        }
        if (gCurrentSprite.status & SS_ON_SCREEN)
            SoundPlayNotAlreadyPlaying(SOUND_YARD_SHOOTING);
    }
}

void YardRecoil(void) {
    if (SpriteUtilCheckNearEndCurrentSpriteAnim()) {
        gCurrentSprite.pose = 3;
        gCurrentSprite.work1 = 120;
    }
}

void YardTurningIntoX(void) {
    if (gCurrentSprite.work0) {
        if (gCurrentSprite.status & SS_X_FLIP)
            gCurrentSprite.xPosition -= 0x20;
        else
            gCurrentSprite.xPosition += 0x20;
    } else {
        if (gCurrentSprite.status & SS_Y_FLIP)
            gCurrentSprite.yPosition += 0x20;
        else
            gCurrentSprite.yPosition -= 0x20;
    }
}

void YardInit(void) {
    SpriteUtilTrySetAbsorbXFlag();
    if (gCurrentSprite.pose == SPRITE_POSE_SPAWNING_FROM_X_INIT) {
        gCurrentSprite.status &= ~SS_ROTATE_SCALE_INDIVIDUAL;
        gCurrentSprite.pose = SPRITE_POSE_SPAWNING_FROM_X;
        gCurrentSprite.xParasiteTimer = X_PARASITE_MOSAIC_MAX_INDEX;
        if (!gCurrentSprite.work0 && !(gCurrentSprite.status & SS_Y_FLIP)) {
            if (gCurrentSprite.status & SS_FACING_RIGHT)
                gCurrentSprite.status |= SS_X_FLIP;
            else
                gCurrentSprite.status &= ~SS_X_FLIP;
        }
    } else {
        SpriteUtilChooseRandomXDirection();
        gCurrentSprite.pose = SPRITE_POSE_IDLE;
        SpriteUtilCheckCollisionAtPosition(gCurrentSprite.yPosition, gCurrentSprite.xPosition);
        if (gPreviousCollisionCheck & COLLISION_FLAGS_UNKNOWN_F0) {
            gCurrentSprite.work0 = FALSE;
            if (gCurrentSprite.status & SS_FACING_RIGHT)
                gCurrentSprite.status |= SS_X_FLIP;
        } else {
            SpriteUtilCheckCollisionAtPosition(gCurrentSprite.yPosition - 0x44, gCurrentSprite.xPosition);
            if (gPreviousCollisionCheck & COLLISION_FLAGS_UNKNOWN_F0) {
                gCurrentSprite.work0 = FALSE;
                gCurrentSprite.status |= SS_Y_FLIP;
                gCurrentSprite.yPosition -= 0x40;
                if (gCurrentSprite.status & SS_FACING_RIGHT)
                    gCurrentSprite.status |= SS_X_FLIP;
            } else {
                SpriteUtilCheckCollisionAtPosition(gCurrentSprite.yPosition - 0x20, gCurrentSprite.xPosition - 0x24);
                if (gPreviousCollisionCheck & COLLISION_FLAGS_UNKNOWN_F0) {
                    gCurrentSprite.work0 = TRUE;
                    gCurrentSprite.yPosition -= 0x20;
                    gCurrentSprite.xPosition -= 0x20;
                    if (gCurrentSprite.status & SS_FACING_RIGHT)
                        gCurrentSprite.status |= SS_Y_FLIP;
                } else {
                    SpriteUtilCheckCollisionAtPosition(gCurrentSprite.yPosition - 0x20, gCurrentSprite.xPosition + 0x20);
                    if (gPreviousCollisionCheck & COLLISION_FLAGS_UNKNOWN_F0) {
                        gCurrentSprite.work0 = TRUE;
                        gCurrentSprite.status |= SS_X_FLIP;
                        gCurrentSprite.yPosition -= 0x20;
                        gCurrentSprite.xPosition += 0x20;
                        if (gCurrentSprite.status & SS_FACING_RIGHT)
                            gCurrentSprite.status |= SS_Y_FLIP;
                    } else {
                        gCurrentSprite.status = 0;
                        return;
                    }
                }
            }
        }
    }
    if (gCurrentSprite.properties & SP_CAN_ABSORB_X) {
        gCurrentSprite.drawOrder = 12;
        gCurrentSprite.properties |= SP_SOLID_FOR_PROJECTILES;
    } else {
        gCurrentSprite.drawOrder = 4;
        gCurrentSprite.properties &= ~SP_SOLID_FOR_PROJECTILES;
    }
    YardSetCrawlingOam();
    YardUpdateHitbox();
    gCurrentSprite.health = GET_PSPRITE_HEALTH(gCurrentSprite.spriteId);
    gCurrentSprite.samusCollision = SSC_HURTS_SAMUS;
    gCurrentSprite.work1 = 0;
    gCurrentSprite.work2 = 0;
    gCurrentSprite.drawDistanceTop = 0x20;
    gCurrentSprite.drawDistanceBottom = 0x20;
    gCurrentSprite.drawDistanceHorizontal = 0x20;
}

void YardCheckRoll(void) {
    if (SPRITE_HAS_ISFT(gCurrentSprite) == 1 && gCurrentSprite.status & SS_ON_SCREEN) {
        if (gCurrentSprite.work0 || gCurrentSprite.status & SS_Y_FLIP) {
            // On wall or ceiling, make it fall
            gCurrentSprite.pose = SPRITE_POSE_FALLING_INIT;
        } else {
            SpriteUtilMakeSpriteFaceAwayFromSamusDirection();
            gCurrentSprite.pose = 0x38;
            gCurrentSprite.work1 = PIXEL_TO_VELOCITY(1.875); // But there's a speed cap of half a pixel per frame when rolling down a slope!
            if (!(gCurrentSprite.status & SS_ROTATE_SCALE_INDIVIDUAL)) {
                gCurrentSprite.status |= SS_ROTATE_SCALE_INDIVIDUAL;
                gCurrentSprite.rotation = 0;
                gCurrentSprite.scaling = Q_8_8(1);
            }
        }
    }
}

void YardRolling(void) {
    u8 notSlowingDown;
    u16 rotationDelta;

    YardCheckRoll();
    notSlowingDown = FALSE;
    SpriteUtilAlignYPosOnSlope();
    if (gPreviousVerticalCollisionCheck == COLLISION_AIR) {
        // On a ledge
        if (gCurrentSprite.status & SS_FACING_RIGHT) {
            // Check block below bottom-left
            SpriteUtilCheckVerticalCollisionAtPosition(gCurrentSprite.yPosition, gCurrentSprite.xPosition - HALF_BLOCK_SIZE);
            if (gPreviousVerticalCollisionCheck == COLLISION_AIR) {
                gCurrentSprite.pose = SPRITE_POSE_FALLING_INIT;
                return;
            }
            // ???
            if (gPreviousVerticalCollisionCheck == COLLISION_LEFT_STEEP_FLOOR_SLOPE || gPreviousVerticalCollisionCheck == COLLISION_LEFT_SLIGHT_FLOOR_SLOPE)
                gCurrentSprite.yPosition = SpriteUtilCheckVerticalCollisionAtPosition(gCurrentSprite.yPosition + BLOCK_SIZE, gCurrentSprite.xPosition);
        } else {
            // Check block below bottom-right
            SpriteUtilCheckVerticalCollisionAtPosition(gCurrentSprite.yPosition, gCurrentSprite.xPosition + HALF_BLOCK_SIZE);
            if (gPreviousVerticalCollisionCheck == COLLISION_AIR) {
                gCurrentSprite.pose = SPRITE_POSE_FALLING_INIT;
                return;
            }
            // ???
            if (gPreviousVerticalCollisionCheck == COLLISION_RIGHT_STEEP_FLOOR_SLOPE || gPreviousVerticalCollisionCheck == COLLISION_RIGHT_SLIGHT_FLOOR_SLOPE)
                gCurrentSprite.yPosition = SpriteUtilCheckVerticalCollisionAtPosition(gCurrentSprite.yPosition + BLOCK_SIZE, gCurrentSprite.xPosition);
        }
    } else if (gPreviousVerticalCollisionCheck & COLLISION_FLAGS_UNKNOWN_F0) {
        // On flat ground
        if (gCurrentSprite.status & SS_FACING_RIGHT) {
            // Check block below bottom-right
            SpriteUtilCheckCollisionAtPosition(gCurrentSprite.yPosition, gCurrentSprite.xPosition + HALF_BLOCK_SIZE);
            if (gPreviousCollisionCheck != COLLISION_AIR) {
                // Still on ground or slope, check block above bottom-right
                SpriteUtilCheckCollisionAtPosition(gCurrentSprite.yPosition - PIXEL_SIZE, gCurrentSprite.xPosition + HALF_BLOCK_SIZE);
                if (gPreviousCollisionCheck == COLLISION_SOLID) {
                    // Hit a wall
                    gCurrentSprite.status &= ~SS_FACING_RIGHT;
                    return;
                }
            } else {
                // Encountered a ledge
                gCurrentSprite.status &= ~SS_FACING_RIGHT;
                return;
            }
        } else {
            // Check block below bottom-left
            SpriteUtilCheckCollisionAtPosition(gCurrentSprite.yPosition, gCurrentSprite.xPosition - HALF_BLOCK_SIZE);
            if (gPreviousCollisionCheck != COLLISION_AIR) {
                // Still on ground or slope, check block above bottom-left
                // BUG: should be gCurrentSprite.yPosition - PIXEL_SIZE
                SpriteUtilCheckCollisionAtPosition(gCurrentSprite.yPosition - QUARTER_BLOCK_SIZE, gCurrentSprite.xPosition - HALF_BLOCK_SIZE);
                if (gPreviousCollisionCheck == COLLISION_SOLID) {
                    // Hit a wall
                    gCurrentSprite.status |= SS_FACING_RIGHT;
                    return;
                }
            } else {
                // Encountered a ledge
                gCurrentSprite.status |= SS_FACING_RIGHT;
                return;
            }
        }
    } else {
        // On slope
        if (gPreviousVerticalCollisionCheck == COLLISION_LEFT_STEEP_FLOOR_SLOPE || gPreviousVerticalCollisionCheck == COLLISION_LEFT_SLIGHT_FLOOR_SLOPE) {
            if (!(gCurrentSprite.status & SS_FACING_RIGHT)) {
                // Rolling up a slope
                if (gCurrentSprite.work1 == PIXEL_TO_VELOCITY(1./32)) {
                    // Start to roll down a slope, don't decelerate
                    gCurrentSprite.status |= SS_FACING_RIGHT;
                    notSlowingDown = TRUE;
                }
                // Decelerate
            } else
                // Don't decelerate when rolling down a slope
                notSlowingDown = TRUE;
        } else if (gPreviousVerticalCollisionCheck == COLLISION_RIGHT_STEEP_FLOOR_SLOPE || gPreviousVerticalCollisionCheck == COLLISION_RIGHT_SLIGHT_FLOOR_SLOPE) {
            if (gCurrentSprite.status & SS_FACING_RIGHT) {
                // Rolling up a slope
                if (gCurrentSprite.work1 == PIXEL_TO_VELOCITY(1./32)) {
                    // Start to roll down a slope, don't decelerate
                    gCurrentSprite.status &= ~SS_FACING_RIGHT;
                    notSlowingDown = TRUE;
                }
                // Decelerate
            } else
                // Don't decelerate when rolling down a slope
                notSlowingDown = TRUE;
        }
    }
    if (!notSlowingDown) {
        // Slow down by 1/32 of a pixel per frame
        if (--gCurrentSprite.work1 == 0) {
            gCurrentSprite.pose = SPRITE_POSE_IDLE_INIT;
            return;
        }
    } else {
        // Cap speed at 1/2 of a pixel per frame when rolling down a slope
        if (gCurrentSprite.work1 < PIXEL_TO_VELOCITY(0.5))
            gCurrentSprite.work1 = PIXEL_TO_VELOCITY(0.5);
    }
    rotationDelta = VELOCITY_TO_SUB_PIXEL(gCurrentSprite.work1);
    SpriteUtilMoveXPosForwardOnSlopeDirection(rotationDelta);
    if (gCurrentSprite.status & SS_FACING_RIGHT)
        gCurrentSprite.rotation += rotationDelta;
    else
        gCurrentSprite.rotation -= rotationDelta;
    if (MOD_AND(gFrameCounter8Bit, 32) == 0)
        SoundPlayNotAlreadyPlaying(SOUND_YARD_ROLLING);
}

void YardStartled(void) {
    if (YardCheckCollidingWithAir()) {
        gCurrentSprite.pose = 0x15;
    } else if (SpriteUtilCheckNearEndCurrentSpriteAnim()) {
        gCurrentSprite.pose = SPRITE_POSE_IDLE_INIT;
        gCurrentSprite.work1 = 120;
    }
}

void YardIdleInit(void) {
    YardSetCrawlingOam();
    gCurrentSprite.pose = 2;
}

void YardIdle(void) {
    u16 y, x, top, bottom, left, right;
    u16 otherY, otherX, otherTop, otherBottom, otherLeft, otherRight;
    u8 i;
    u16 speed = 1;
    u8 turn = FALSE;

    if (YardCheckCollidingWithAir()) {
        gCurrentSprite.pose = SPRITE_POSE_FALLING_INIT;
        return;
    }
    if (gCurrentSprite.properties & SP_CAN_ABSORB_X) {
        YardCheckRoll();
        return;
    }
    if (YardCheckShouldStartle()) return;

    // Turn around if touching another yard
    if (gCurrentSprite.work2 == 0) {
        y = gCurrentSprite.yPosition;
        x = gCurrentSprite.xPosition;
        top = y + gCurrentSprite.hitboxTop;
        bottom = y + gCurrentSprite.hitboxBottom;
        left = x + gCurrentSprite.hitboxLeft;
        right = x + gCurrentSprite.hitboxRight;
        for (i = 0; i < MAX_AMOUNT_OF_SPRITES; i++) {
            if (i == gCurrentSprite.primarySpriteRamSlot) continue;
            if (!(gSpriteData[i].status & SS_EXISTS)) continue;
            if (!(gSpriteData[i].spriteId == PSPRITE_YARD)) continue;
            if (gSpriteData[i].properties & (SP_SECONDARY_SPRITE | SP_CAN_ABSORB_X)) continue;
            if (gSpriteData[i].pose >= SPRITE_POSE_TURNING_INTO_X) continue;
            otherY = gSpriteData[i].yPosition;
            otherX = gSpriteData[i].xPosition;
            otherTop = otherY + gSpriteData[i].hitboxTop;
            otherBottom = otherY + gSpriteData[i].hitboxBottom;
            otherLeft = otherX + gSpriteData[i].hitboxLeft;
            otherRight = otherX + gSpriteData[i].hitboxRight;
            if (SpriteUtilCheckObjectsTouching(top, bottom, left, right, otherTop, otherBottom, otherLeft, otherRight)) {
                gCurrentSprite.work2 = 120;
                gCurrentSprite.pose = 3;
                return;
            }
        }
    } else
        gCurrentSprite.work2--;

    if (gCurrentSprite.work0) {
        if (gCurrentSprite.status & SS_X_FLIP) {
            if (gCurrentSprite.status & SS_FACING_RIGHT) {
                SpriteUtilCheckCollisionAtPosition(gCurrentSprite.yPosition + 0x30, gCurrentSprite.xPosition);
                if (!(gPreviousCollisionCheck & COLLISION_FLAGS_UNKNOWN_F0))
                    turn++;
                else {
                    SpriteUtilCheckCollisionAtPosition(gCurrentSprite.yPosition + 0x30, gCurrentSprite.xPosition - 4);
                    if (gPreviousCollisionCheck & COLLISION_FLAGS_UNKNOWN_F)
                        turn++;
                    else
                        gCurrentSprite.yPosition += speed;
                }
            } else {
                SpriteUtilCheckCollisionAtPosition(gCurrentSprite.yPosition - 0x30, gCurrentSprite.xPosition);
                if (!(gPreviousCollisionCheck & COLLISION_FLAGS_UNKNOWN_F0))
                    turn++;
                else {
                    SpriteUtilCheckCollisionAtPosition(gCurrentSprite.yPosition - 0x30, gCurrentSprite.xPosition - 4);
                    if (gPreviousCollisionCheck & COLLISION_FLAGS_UNKNOWN_F)
                        turn++;
                    else
                        gCurrentSprite.yPosition -= speed;
                }
            }
        } else {
            if (gCurrentSprite.status & SS_FACING_RIGHT) {
                SpriteUtilCheckCollisionAtPosition(gCurrentSprite.yPosition + 0x30, gCurrentSprite.xPosition - 4);
                if (!(gPreviousCollisionCheck & COLLISION_FLAGS_UNKNOWN_F0))
                    turn++;
                else {
                    SpriteUtilCheckCollisionAtPosition(gCurrentSprite.yPosition + 0x30, gCurrentSprite.xPosition);
                    if (gPreviousCollisionCheck & COLLISION_FLAGS_UNKNOWN_F)
                        turn++;
                    else
                        gCurrentSprite.yPosition += speed;
                }
            } else {
                SpriteUtilCheckCollisionAtPosition(gCurrentSprite.yPosition - 0x30, gCurrentSprite.xPosition - 4);
                if (!(gPreviousCollisionCheck & COLLISION_FLAGS_UNKNOWN_F0))
                    turn++;
                else {
                    SpriteUtilCheckCollisionAtPosition(gCurrentSprite.yPosition - 0x30, gCurrentSprite.xPosition);
                    if (gPreviousCollisionCheck & COLLISION_FLAGS_UNKNOWN_F)
                        turn++;
                    else
                        gCurrentSprite.yPosition -= speed;
                }
            }
        }
    } else {
        if (gCurrentSprite.status & SS_Y_FLIP) {
            if (gCurrentSprite.status & SS_FACING_RIGHT) {
                SpriteUtilCheckCollisionAtPosition(gCurrentSprite.yPosition - 4, gCurrentSprite.xPosition + 0x30);
                if (!(gPreviousCollisionCheck & COLLISION_FLAGS_UNKNOWN_F))
                    turn++;
                else {
                    SpriteUtilCheckCollisionAtPosition(gCurrentSprite.yPosition, gCurrentSprite.xPosition + 0x30);
                    if (gPreviousCollisionCheck & COLLISION_FLAGS_UNKNOWN_F)
                        turn++;
                    else
                        gCurrentSprite.xPosition += speed;
                }
            } else {
                SpriteUtilCheckCollisionAtPosition(gCurrentSprite.yPosition - 4, gCurrentSprite.xPosition - 0x30);
                if (!(gPreviousCollisionCheck & COLLISION_FLAGS_UNKNOWN_F))
                    turn++;
                else {
                    SpriteUtilCheckCollisionAtPosition(gCurrentSprite.yPosition, gCurrentSprite.xPosition - 0x30);
                    if (gPreviousCollisionCheck & COLLISION_FLAGS_UNKNOWN_F)
                        turn++;
                    else
                        gCurrentSprite.xPosition -= speed;
                }
            }
        } else {
            SpriteUtilAlignYPosOnSlope();
            if (gPreviousVerticalCollisionCheck & COLLISION_FLAGS_UNKNOWN_F0) {
                if (gCurrentSprite.status & SS_FACING_RIGHT) {
                    SpriteUtilCheckCollisionAtPosition(gCurrentSprite.yPosition, gCurrentSprite.xPosition + 0x30);
                    if (!(gPreviousCollisionCheck & COLLISION_FLAGS_UNKNOWN_F0))
                        turn++;
                    else {
                        SpriteUtilCheckCollisionAtPosition(gCurrentSprite.yPosition - 4, gCurrentSprite.xPosition + 0x30);
                        if (gPreviousCollisionCheck & COLLISION_FLAGS_UNKNOWN_F)
                            turn++;
                        else
                            gCurrentSprite.xPosition += speed;
                    }
                } else {
                    SpriteUtilCheckCollisionAtPosition(gCurrentSprite.yPosition, gCurrentSprite.xPosition - 0x30);
                    if (!(gPreviousCollisionCheck & COLLISION_FLAGS_UNKNOWN_F0))
                        turn++;
                    else {
                        SpriteUtilCheckCollisionAtPosition(gCurrentSprite.yPosition - 4, gCurrentSprite.xPosition - 0x30);
                        if (gPreviousCollisionCheck & COLLISION_FLAGS_UNKNOWN_F)
                            turn++;
                        else
                            gCurrentSprite.xPosition -= speed;
                    }
                }
            } else {
                if (gCurrentSprite.status & SS_FACING_RIGHT)
                    gCurrentSprite.xPosition += speed;
                else
                    gCurrentSprite.xPosition -= speed;
            }
        }
    }

    if (turn)
        gCurrentSprite.pose = 3;
    YardCheckShoot();
}

void YardTurningAroundInit(void) {
    gCurrentSprite.pose = 4;
    YardSetTurningAroundOam();
}

void YardTurningAround(void) {
    if (SpriteUtilCheckEndCurrentSpriteAnim()) {
        gCurrentSprite.pose = 5;
        YardSetTurningAroundSecondPartOam();
        if (gCurrentSprite.work0)
            gCurrentSprite.status ^= SS_Y_FLIP;
        else
            gCurrentSprite.status ^= SS_X_FLIP;
        gCurrentSprite.status ^= SS_FACING_RIGHT;
    }
}

void YardTurningAroundSecondPart(void) {
    if (SpriteUtilCheckNearEndCurrentSpriteAnim())
        gCurrentSprite.pose = 1;
}

void YardFallingInit(void) {
    gCurrentSprite.pose = SPRITE_POSE_FALLING;
    gCurrentSprite.work4 = 0;
    YardSetCrawlingOam();
}

void YardFalling(void) {
    u16 yCollisionPoint;
    u16 xCollisionPoint;
    u32 blockTop;
    u8 onWall;
    u8 offset;
    s16 movement;

    onWall = FALSE;
    yCollisionPoint = gCurrentSprite.yPosition;
    xCollisionPoint = gCurrentSprite.xPosition;
    if (gCurrentSprite.work0) {
        if (gCurrentSprite.status & SS_X_FLIP)
            xCollisionPoint -= PIXEL_SIZE;
        yCollisionPoint += gCurrentSprite.hitboxBottom;
    } else {
        if (gCurrentSprite.status & SS_Y_FLIP)
            yCollisionPoint += gCurrentSprite.hitboxBottom;
    }
    blockTop = SpriteUtilCheckVerticalCollisionAtPositionSlopes(yCollisionPoint, xCollisionPoint);
    if (gPreviousVerticalCollisionCheck != COLLISION_AIR) {
        gCurrentSprite.yPosition = blockTop;
        if (gCurrentSprite.work0)
            onWall++;
        gCurrentSprite.status &= ~SS_Y_FLIP;
        gCurrentSprite.work0 = FALSE;
        gCurrentSprite.pose = SPRITE_POSE_IDLE;
        YardUpdateHitbox();
        YardSetCrawlingOam();
        if (onWall) {
            if (gCurrentSprite.status & SS_X_FLIP)
                gCurrentSprite.xPosition -= gCurrentSprite.hitboxRight;
            else
                gCurrentSprite.xPosition -= gCurrentSprite.hitboxLeft;
        }
        if (gCurrentSprite.properties & SS_ON_SCREEN)
            ParticleSet(gCurrentSprite.yPosition, gCurrentSprite.xPosition, PE_HEAVY_DUST_2);
    } else {
        offset = gCurrentSprite.work4;
        movement = sSpritesFallingSpeedSlow[offset];
        if (movement == SHORT_MAX) {
            movement = sSpritesFallingSpeedSlow[offset - 1];
            gCurrentSprite.yPosition += movement;
        } else {
            offset++;
            gCurrentSprite.work4 = offset;
            gCurrentSprite.yPosition += movement;
        }
    }
}

void YardProjectileInit(void) {
    gCurrentSprite.status &= ~SS_NOT_DRAWN;
    gCurrentSprite.properties |= SP_KILL_OFF_SCREEN;
    gCurrentSprite.drawDistanceTop = 8;
    gCurrentSprite.drawDistanceBottom = 8;
    gCurrentSprite.drawDistanceHorizontal = 0x10;
    gCurrentSprite.hitboxTop = -8;
    gCurrentSprite.hitboxBottom = 8;
    gCurrentSprite.hitboxLeft = -8;
    gCurrentSprite.hitboxRight = 8;
    gCurrentSprite.pOam = sYardProjectileOam_Moving;
    gCurrentSprite.animationDurationCounter = 0;
    gCurrentSprite.currentAnimationFrame = 0;
    gCurrentSprite.pose = SPRITE_POSE_IDLE;
    gCurrentSprite.samusCollision = SSC_HURTS_SAMUS_DIES_WHEN_HIT;
    gCurrentSprite.drawOrder = 3;
    gCurrentSprite.bgPriority = gIoRegisters.bg1Cnt & 3;
}

void YardProjectileMoving(void) {
    if (gCurrentSprite.roomSlot == YARD_PROJECTILE_DIRECTION_UP_LEFT) {
        gCurrentSprite.yPosition -= 3;
        gCurrentSprite.xPosition -= 3;
    } else if (gCurrentSprite.roomSlot == YARD_PROJECTILE_DIRECTION_DOWN_LEFT) {
        gCurrentSprite.yPosition += 3;
        gCurrentSprite.xPosition -= 3;
    } else if (gCurrentSprite.roomSlot == YARD_PROJECTILE_DIRECTION_DOWN_RIGHT) {
        gCurrentSprite.yPosition += 3;
        gCurrentSprite.xPosition += 3;
    } else if (gCurrentSprite.roomSlot == YARD_PROJECTILE_DIRECTION_UP_RIGHT) {
        gCurrentSprite.yPosition -= 3;
        gCurrentSprite.xPosition += 3;
    }
}

void YardProjectileExplodingInit(void) {
    gCurrentSprite.pose = SPRITE_POSE_EXPLODING;
    gCurrentSprite.samusCollision = SSC_NONE;
    gCurrentSprite.pOam = sYardProjectileOam_Exploding;
    gCurrentSprite.animationDurationCounter = 0;
    gCurrentSprite.currentAnimationFrame = 0;
}

void YardProjectileExploding(void) {
    gCurrentSprite.ignoreSamusCollisionTimer = 1;
    if (SpriteUtilCheckEndCurrentSpriteAnim())
        gCurrentSprite.status = 0;
}

void Yard(void) {
    if (SPRITE_HAS_ISFT(gCurrentSprite) == 4)
        SoundPlayNotAlreadyPlaying(SOUND_YARD_HURT);
    if (gCurrentSprite.freezeTimer > 0) {
        SpriteUtilUpdateFreezeTimer();
        return;
    }
    switch (gCurrentSprite.pose) {
        case SPRITE_POSE_UNINITIALIZED:
            YardInit();
            break;
        case SPRITE_POSE_IDLE_INIT:
            YardIdleInit();
        case SPRITE_POSE_IDLE:
            YardIdle();
            break;
        case 0x18:
            YardStartled();
            break;
        case 3:
            YardTurningAroundInit();
        case 4:
            YardTurningAround();
            break;
        case 5:
            YardTurningAroundSecondPart();
            break;
        case SPRITE_POSE_FALLING_INIT:
            YardFallingInit();
        case SPRITE_POSE_FALLING:
            YardFalling();
            break;
        case 0x2a:
            YardCharging();
            break;
        case 0x2c:
            YardShooting();
            break;
        case 0x2e:
            YardRecoil();
            break;
        case 0x38:
            YardRolling();
            break;
        case SPRITE_POSE_DYING_INIT:
            SpriteDyingInit();
        case SPRITE_POSE_DYING:
            SpriteDying();
            break;
        case SPRITE_POSE_SPAWNING_FROM_X_INIT:
            YardInit();
        case SPRITE_POSE_SPAWNING_FROM_X:
            SpriteSpawningFromX();
            break;
        case SPRITE_POSE_TURNING_INTO_X:
            YardTurningIntoX();
            XParasiteInit();
    }
}

void YardProjectile(void) {
    switch (gCurrentSprite.pose) {
        case SPRITE_POSE_UNINITIALIZED:
            YardProjectileInit();
        case SPRITE_POSE_IDLE:
            YardProjectileMoving();
            break;
        case SPRITE_POSE_EXPLODING:
            YardProjectileExploding();
            break;
        default:
            YardProjectileExplodingInit();
    }
}
