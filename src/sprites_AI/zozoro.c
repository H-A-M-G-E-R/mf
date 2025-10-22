#include "sprites_AI/zozoro.h"

#include "data/sprites/zozoro.h"
#include "data/sprites/x_parasite.h"
#include "data/sprite_data.h"

#include "constants/audio.h"
#include "constants/clipdata.h"
#include "constants/sprite.h"

#include "structs/clipdata.h"
#include "structs/sprite.h"

#define ZOZORO_LOOKAHEAD_DISTANCE PIXEL_TO_SUB_PIXEL(0xc)

/**
 * @brief 4fd44 | a0 | Checks if a zozoro is colliding with air
 * 
 * @return u8 bool, in air
 */
static u8 ZozoroCheckCollidingWithAir(void)
{
    u8 midair = FALSE;

    if (gCurrentSprite.work0)
    {
        if (gCurrentSprite.status & SS_X_FLIP)
        {
            SpriteUtilCheckCollisionAtPosition(gCurrentSprite.yPosition - HALF_BLOCK_SIZE, gCurrentSprite.xPosition);
            if (gPreviousCollisionCheck == COLLISION_AIR)
            {
                SpriteUtilCheckCollisionAtPosition(gCurrentSprite.yPosition + HALF_BLOCK_SIZE, gCurrentSprite.xPosition);
                if (gPreviousCollisionCheck == COLLISION_AIR)
                    midair = TRUE;
            }
        }
        else
        {
            SpriteUtilCheckCollisionAtPosition(gCurrentSprite.yPosition - HALF_BLOCK_SIZE, gCurrentSprite.xPosition - PIXEL_SIZE);
            if (gPreviousCollisionCheck == COLLISION_AIR)
            {
                SpriteUtilCheckCollisionAtPosition(gCurrentSprite.yPosition + HALF_BLOCK_SIZE, gCurrentSprite.xPosition - PIXEL_SIZE);
                if (gPreviousCollisionCheck == COLLISION_AIR)
                    midair = TRUE;
            }
        }
    }
    else
    {
        if (gCurrentSprite.status & SS_Y_FLIP)
        {
            SpriteUtilCheckCollisionAtPosition(gCurrentSprite.yPosition - PIXEL_SIZE, gCurrentSprite.xPosition - HALF_BLOCK_SIZE);
            if (gPreviousCollisionCheck == COLLISION_AIR)
            {
                SpriteUtilCheckCollisionAtPosition(gCurrentSprite.yPosition - PIXEL_SIZE, gCurrentSprite.xPosition + HALF_BLOCK_SIZE);
                if (gPreviousCollisionCheck == COLLISION_AIR)
                    midair = TRUE;
            }
        }
    }

    return midair;
}

/**
 * @brief 4fde4 | 90 | Updates the hitbox of a zozoro
 * 
 */
static void ZozoroUpdateHitbox(void)
{
    if (gCurrentSprite.work0)
    {
        if (gCurrentSprite.status & SS_X_FLIP)
        {
            gCurrentSprite.hitboxTop = -PIXEL_TO_SUB_PIXEL(0xa);
            gCurrentSprite.hitboxBottom = PIXEL_TO_SUB_PIXEL(0xa);
            gCurrentSprite.hitboxLeft = -PIXEL_TO_SUB_PIXEL(0xc);
            gCurrentSprite.hitboxRight = QUARTER_BLOCK_SIZE;
        }
        else
        {
            gCurrentSprite.hitboxTop = -PIXEL_TO_SUB_PIXEL(0xa);
            gCurrentSprite.hitboxBottom = PIXEL_TO_SUB_PIXEL(0xa);
            gCurrentSprite.hitboxLeft = -QUARTER_BLOCK_SIZE;
            gCurrentSprite.hitboxRight = PIXEL_TO_SUB_PIXEL(0xc);
        }
    }
    else
    {
        if (gCurrentSprite.status & SS_Y_FLIP)
        {
            gCurrentSprite.hitboxTop = QUARTER_BLOCK_SIZE;
            gCurrentSprite.hitboxBottom = PIXEL_TO_SUB_PIXEL(0xc);
            gCurrentSprite.hitboxLeft = -PIXEL_TO_SUB_PIXEL(0xa);
            gCurrentSprite.hitboxRight = PIXEL_TO_SUB_PIXEL(0xa);
        }
        else
        {
            gCurrentSprite.hitboxTop = -PIXEL_TO_SUB_PIXEL(0xc);
            gCurrentSprite.hitboxBottom = QUARTER_BLOCK_SIZE;
            gCurrentSprite.hitboxLeft = -PIXEL_TO_SUB_PIXEL(0xa);
            gCurrentSprite.hitboxRight = PIXEL_TO_SUB_PIXEL(0xa);
        }
    }

    gCurrentSprite.drawDistanceTop = 0x18;
    gCurrentSprite.drawDistanceBottom = 0x18;
    gCurrentSprite.drawDistanceHorizontal = 0x18;
}

/**
 * @brief 4fe74 | 30 | Sets the crawling oam for a zozoro
 * 
 */
static void ZozoroSetCrawlingOam(void)
{
    if (gCurrentSprite.work0)
        gCurrentSprite.pOam = sZozoroOam_CrawlingWall;
    else
        gCurrentSprite.pOam = sZozoroOam_CrawlingGround;

    gCurrentSprite.animationDurationCounter = 0;
    gCurrentSprite.currentAnimationFrame = 0;
}

/**
 * @brief 4fea4 | 30 | Sets the turning around oam for a zozoro
 * 
 */
static void ZozoroSetTurningAroundOam(void)
{
    if (gCurrentSprite.work0)
        gCurrentSprite.pOam = sZozoroOam_TurningAroundWall;
    else
        gCurrentSprite.pOam = sZozoroOam_TurningAroundGround;

    gCurrentSprite.animationDurationCounter = 0;
    gCurrentSprite.currentAnimationFrame = 0;
}

/**
 * @brief 4fed4 | 48 | Handles a zozoro turning into an X
 * 
 */
static void ZozoroTurningIntoX(void)
{
    if (gCurrentSprite.work0)
    {
        if (gCurrentSprite.status & SS_X_FLIP)
            gCurrentSprite.xPosition -= HALF_BLOCK_SIZE;
        else
            gCurrentSprite.xPosition += HALF_BLOCK_SIZE;
    }
    else
    {
        if (gCurrentSprite.status & SS_Y_FLIP)
            gCurrentSprite.yPosition += HALF_BLOCK_SIZE;
        else
            gCurrentSprite.yPosition -= HALF_BLOCK_SIZE;
    }
}

/**
 * @brief 4ff1c | 17c | Initializes a zozoro sprite
 * 
 */
static void ZozoroInit(void)
{
    SpriteUtilTrySetAbsorbXFlag();

    if (gCurrentSprite.properties & SP_CAN_ABSORB_X && !(gCurrentSprite.status & SS_HIDDEN))
    {
        gCurrentSprite.status = 0;
        return;
    }

    if (gCurrentSprite.pose == SPRITE_POSE_SPAWNING_FROM_X_INIT)
    {
        gCurrentSprite.pose = SPRITE_POSE_SPAWNING_FROM_X;
        gCurrentSprite.xParasiteTimer = X_PARASITE_MOSAIC_MAX_INDEX;
    }
    else
    {
        SpriteUtilChooseRandomXDirection();

        gCurrentSprite.pose = SPRITE_POSE_IDLE;

        // Stick to a surface
        SpriteUtilCheckCollisionAtPosition(gCurrentSprite.yPosition, gCurrentSprite.xPosition);
        if (gPreviousCollisionCheck & COLLISION_FLAGS_UNKNOWN_F0)
        {
            // On floor
            gCurrentSprite.work0 = FALSE;

            if (gCurrentSprite.status & SS_FACING_RIGHT)
                gCurrentSprite.status |= SS_X_FLIP;
        }
        else
        {
            SpriteUtilCheckCollisionAtPosition(gCurrentSprite.yPosition - (BLOCK_SIZE + PIXEL_SIZE), gCurrentSprite.xPosition);
            if (gPreviousCollisionCheck & COLLISION_FLAGS_UNKNOWN_F0)
            {
                // On ceiling
                gCurrentSprite.work0 = FALSE;
                gCurrentSprite.status |= SS_Y_FLIP;

                gCurrentSprite.yPosition -= BLOCK_SIZE;

                if (gCurrentSprite.status & SS_FACING_RIGHT)
                    gCurrentSprite.status |= SS_X_FLIP;
            }
            else
            {
                SpriteUtilCheckCollisionAtPosition(gCurrentSprite.yPosition - HALF_BLOCK_SIZE, gCurrentSprite.xPosition - (HALF_BLOCK_SIZE + PIXEL_SIZE));
                if (gPreviousCollisionCheck & COLLISION_FLAGS_UNKNOWN_F0)
                {
                    // On left wall
                    gCurrentSprite.work0 = TRUE;

                    gCurrentSprite.yPosition -= HALF_BLOCK_SIZE;
                    gCurrentSprite.xPosition -= HALF_BLOCK_SIZE;

                    if (gCurrentSprite.status & SS_FACING_RIGHT)
                        gCurrentSprite.status |= SS_Y_FLIP;
                }
                else
                {
                    SpriteUtilCheckCollisionAtPosition(gCurrentSprite.yPosition - HALF_BLOCK_SIZE, gCurrentSprite.xPosition + HALF_BLOCK_SIZE);
                    if (gPreviousCollisionCheck & COLLISION_FLAGS_UNKNOWN_F0)
                    {
                        // On right wall
                        gCurrentSprite.work0 = TRUE;
                        gCurrentSprite.status |= SS_X_FLIP;

                        gCurrentSprite.yPosition -= HALF_BLOCK_SIZE;
                        gCurrentSprite.xPosition += HALF_BLOCK_SIZE;

                        if (gCurrentSprite.status & SS_FACING_RIGHT)
                            gCurrentSprite.status |= SS_Y_FLIP;
                    }
                    else
                    {
                        // Midair, delete
                        gCurrentSprite.status = 0;
                        return;
                    }
                }
            }
        }
    }
    gCurrentSprite.samusCollision = SSC_HURTS_SAMUS;

    ZozoroSetCrawlingOam();
    ZozoroUpdateHitbox();

    gCurrentSprite.health = GET_PSPRITE_HEALTH(gCurrentSprite.spriteId);
}

/**
 * @brief 50098 | 28 | Initializes a zozoro to be idle
 * 
 */
static void ZozoroIdleInit(void)
{
    ZozoroSetCrawlingOam();
    gCurrentSprite.pose = SPRITE_POSE_IDLE;

    if (gCurrentSprite.status & SS_ON_SCREEN)
        SoundPlayNotAlreadyPlaying(SOUND_ZORO_CRAWLING_1);
}

/**
 * @brief 500c0 | 3b0 | Handles a zozoro being idle
 * 
 * @return u32 Garbage
 */
static u8 ZozoroIdle(void)
{
    s16 speed = PIXEL_SIZE / 4;
    u8 turn = FALSE;

    if (ZozoroCheckCollidingWithAir())
    {
        gCurrentSprite.pose = SPRITE_POSE_FALLING_INIT;
        return;
    }

    // Panic if less than max health
    if (gCurrentSprite.health < GET_PSPRITE_HEALTH(gCurrentSprite.spriteId))
    {
        // Drop if not on ground
        if (gCurrentSprite.work0)
        {
            gCurrentSprite.pose = SPRITE_POSE_FALLING_INIT;
            return;
        }

        if (gCurrentSprite.status & SS_Y_FLIP)
        {
            gCurrentSprite.pose = SPRITE_POSE_FALLING_INIT;
            return;
        }

        // On ground, Double speed
        speed = PIXEL_SIZE / 2;
        gCurrentSprite.animationDurationCounter += 1;
    }

    if (gCurrentSprite.work0)
    {
        if (gCurrentSprite.status & SS_X_FLIP)
        {
            // On right wall
            if (gCurrentSprite.status & SS_Y_FLIP)
            {
                // Moving down
                SpriteUtilCheckCollisionAtPosition(gCurrentSprite.yPosition + ZOZORO_LOOKAHEAD_DISTANCE, gCurrentSprite.xPosition);
                if (!(gPreviousCollisionCheck & COLLISION_FLAGS_UNKNOWN_F0))
                {
                    // Turn if it encountered a ledge
                    turn++;
                }
                else
                {
                    SpriteUtilCheckCollisionAtPosition(gCurrentSprite.yPosition + ZOZORO_LOOKAHEAD_DISTANCE, gCurrentSprite.xPosition - PIXEL_SIZE);
                    if (gPreviousCollisionCheck & COLLISION_FLAGS_UNKNOWN_F)
                    {
                        // Turn if it encountered a wall
                        turn++;
                    }
                    else
                    {
                        gCurrentSprite.yPosition += speed;
                    }
                }
            }
            else
            {
                // Moving up
                SpriteUtilCheckCollisionAtPosition(gCurrentSprite.yPosition - ZOZORO_LOOKAHEAD_DISTANCE, gCurrentSprite.xPosition);
                if (!(gPreviousCollisionCheck & COLLISION_FLAGS_UNKNOWN_F0))
                {
                    // Turn if it encountered a ledge
                    turn++;
                }
                else
                {
                    SpriteUtilCheckCollisionAtPosition(gCurrentSprite.yPosition - ZOZORO_LOOKAHEAD_DISTANCE, gCurrentSprite.xPosition - PIXEL_SIZE);
                    if (gPreviousCollisionCheck & COLLISION_FLAGS_UNKNOWN_F)
                    {
                        // Turn if it encountered a wall
                        turn++;
                    }
                    else
                    {
                        gCurrentSprite.yPosition -= speed;
                    }
                }
            }
        }
        else
        {
            // On left wall
            if (gCurrentSprite.status & SS_Y_FLIP)
            {
                // Moving down
                SpriteUtilCheckCollisionAtPosition(gCurrentSprite.yPosition + ZOZORO_LOOKAHEAD_DISTANCE, gCurrentSprite.xPosition - PIXEL_SIZE);
                if (!(gPreviousCollisionCheck & COLLISION_FLAGS_UNKNOWN_F0))
                {
                    // Turn if it encountered a ledge
                    turn++;
                }
                else
                {
                    SpriteUtilCheckCollisionAtPosition(gCurrentSprite.yPosition + ZOZORO_LOOKAHEAD_DISTANCE, gCurrentSprite.xPosition);
                    if (gPreviousCollisionCheck & COLLISION_FLAGS_UNKNOWN_F)
                    {
                        // Turn if it encountered a wall
                        turn++;
                    }
                    else
                    {
                        gCurrentSprite.yPosition += speed;
                    }
                }
            }
            else
            {
                // Moving up
                SpriteUtilCheckCollisionAtPosition(gCurrentSprite.yPosition - ZOZORO_LOOKAHEAD_DISTANCE, gCurrentSprite.xPosition - PIXEL_SIZE);
                if (!(gPreviousCollisionCheck & COLLISION_FLAGS_UNKNOWN_F0))
                {
                    // Turn if it encountered a ledge
                    turn++;
                }
                else
                {
                    SpriteUtilCheckCollisionAtPosition(gCurrentSprite.yPosition - ZOZORO_LOOKAHEAD_DISTANCE, gCurrentSprite.xPosition);
                    if (gPreviousCollisionCheck & COLLISION_FLAGS_UNKNOWN_F)
                    {
                        // Turn if it encountered a wall
                        turn++;
                    }
                    else
                    {
                        gCurrentSprite.yPosition -= speed;
                    }
                }
            }
        }
    }
    else
    {
        if (gCurrentSprite.status & SS_Y_FLIP)
        {
            // On ceiling
            if (gCurrentSprite.status & SS_X_FLIP)
            {
                SpriteUtilCheckCollisionAtPosition(gCurrentSprite.yPosition - PIXEL_SIZE, gCurrentSprite.xPosition + ZOZORO_LOOKAHEAD_DISTANCE);
                if (!(gPreviousCollisionCheck & COLLISION_FLAGS_UNKNOWN_F))
                {
                    // Turn if it encountered a ledge
                    turn++;
                }
                else
                {
                    SpriteUtilCheckCollisionAtPosition(gCurrentSprite.yPosition, gCurrentSprite.xPosition + ZOZORO_LOOKAHEAD_DISTANCE);
                    if (gPreviousCollisionCheck & COLLISION_FLAGS_UNKNOWN_F)
                    {
                        // Turn if it encountered a wall
                        turn++;
                    }
                    else
                    {
                        gCurrentSprite.xPosition += speed;
                    }
                }
            }
            else
            {
                SpriteUtilCheckCollisionAtPosition(gCurrentSprite.yPosition - PIXEL_SIZE, gCurrentSprite.xPosition - ZOZORO_LOOKAHEAD_DISTANCE);
                if (!(gPreviousCollisionCheck & COLLISION_FLAGS_UNKNOWN_F))
                {
                    // Turn if it encountered a ledge
                    turn++;
                }
                else
                {
                    SpriteUtilCheckCollisionAtPosition(gCurrentSprite.yPosition, gCurrentSprite.xPosition - ZOZORO_LOOKAHEAD_DISTANCE);
                    if (gPreviousCollisionCheck & COLLISION_FLAGS_UNKNOWN_F)
                    {
                        // Turn if it encountered a wall
                        turn++;
                    }
                    else
                    {
                        gCurrentSprite.xPosition -= speed;
                    }
                }
            }
        }
        else
        {
            // On floor
            SpriteUtilAlignYPosOnSlope();
            if (gPreviousVerticalCollisionCheck == COLLISION_AIR)
            {
                // Went from downwards slope to flat ground
                if (gCurrentSprite.status & SS_X_FLIP)
                {
                    SpriteUtilCheckVerticalCollisionAtPosition(gCurrentSprite.yPosition, gCurrentSprite.xPosition - BLOCK_SIZE);

                    if (gPreviousVerticalCollisionCheck == COLLISION_AIR)
                    {
                        gCurrentSprite.pose = SPRITE_POSE_FALLING_INIT;
                        return;
                    }

                    if (gPreviousVerticalCollisionCheck == COLLISION_LEFT_STEEP_FLOOR_SLOPE || gPreviousVerticalCollisionCheck == COLLISION_LEFT_SLIGHT_FLOOR_SLOPE)
                    {
                        gCurrentSprite.yPosition = SpriteUtilCheckVerticalCollisionAtPosition(gCurrentSprite.yPosition + BLOCK_SIZE, gCurrentSprite.xPosition);
                    }
                }
                else
                {
                    SpriteUtilCheckVerticalCollisionAtPosition(gCurrentSprite.yPosition, gCurrentSprite.xPosition + BLOCK_SIZE);

                    if (gPreviousVerticalCollisionCheck == COLLISION_AIR)
                    {
                        gCurrentSprite.pose = SPRITE_POSE_FALLING_INIT;
                        return;
                    }

                    if (gPreviousVerticalCollisionCheck == COLLISION_RIGHT_STEEP_FLOOR_SLOPE || gPreviousVerticalCollisionCheck == COLLISION_RIGHT_SLIGHT_FLOOR_SLOPE)
                    {
                        gCurrentSprite.yPosition = SpriteUtilCheckVerticalCollisionAtPosition(gCurrentSprite.yPosition + BLOCK_SIZE, gCurrentSprite.xPosition);
                    }
                }
            }
            else
            {
                if (gPreviousVerticalCollisionCheck & COLLISION_FLAGS_UNKNOWN_F0)
                {
                    // On flat ground
                    // Set on ground animation
                    if (gCurrentSprite.pOam != sZozoroOam_CrawlingGround)
                    {
                        gCurrentSprite.pOam = sZozoroOam_CrawlingGround;
                        gCurrentSprite.animationDurationCounter = 0;
                        gCurrentSprite.currentAnimationFrame = 0;
                    }

                    if (gCurrentSprite.status & SS_X_FLIP)
                    {
                        SpriteUtilCheckCollisionAtPosition(gCurrentSprite.yPosition, gCurrentSprite.xPosition + ZOZORO_LOOKAHEAD_DISTANCE);
                        if (gPreviousCollisionCheck == COLLISION_AIR)
                        {
                            // TUrn if encountered a ledge
                            turn++;
                        }
                        else
                        {
                            SpriteUtilCheckCollisionAtPosition(gCurrentSprite.yPosition - QUARTER_BLOCK_SIZE, gCurrentSprite.xPosition + ZOZORO_LOOKAHEAD_DISTANCE);
                            if (gPreviousCollisionCheck == COLLISION_SOLID)
                            {
                                // Turn if encountered a wall
                                turn++;
                            }
                        }
                    }
                    else
                    {
                        SpriteUtilCheckCollisionAtPosition(gCurrentSprite.yPosition, gCurrentSprite.xPosition - ZOZORO_LOOKAHEAD_DISTANCE);
                        if (gPreviousCollisionCheck == COLLISION_AIR)
                        {
                            // TUrn if encountered a ledge
                            turn++;
                        }
                        else
                        {
                            SpriteUtilCheckCollisionAtPosition(gCurrentSprite.yPosition - QUARTER_BLOCK_SIZE, gCurrentSprite.xPosition - ZOZORO_LOOKAHEAD_DISTANCE);
                            if (gPreviousCollisionCheck == COLLISION_SOLID)
                            {
                                // Turn if encountered a wall
                                turn++;
                            }
                        }
                    }
                }
                else
                {
                    // On slope
                    // Set on slope animation
                    if (gCurrentSprite.status & SS_X_FLIP)
                    {
                        if (gPreviousVerticalCollisionCheck == COLLISION_LEFT_SLIGHT_FLOOR_SLOPE)
                        {
                            if (gCurrentSprite.pOam != sZozoroOam_CrawlingSlightDownwardsSlope)
                            {
                                gCurrentSprite.pOam = sZozoroOam_CrawlingSlightDownwardsSlope;
                                gCurrentSprite.animationDurationCounter = 0;
                                gCurrentSprite.currentAnimationFrame = 0;
                            }
                        }
                        else if (gPreviousVerticalCollisionCheck == COLLISION_LEFT_STEEP_FLOOR_SLOPE)
                        {
                            if (gCurrentSprite.pOam != sZozoroOam_CrawlingSteepDownwardsSlope)
                            {
                                gCurrentSprite.pOam = sZozoroOam_CrawlingSteepDownwardsSlope;
                                gCurrentSprite.animationDurationCounter = 0;
                                gCurrentSprite.currentAnimationFrame = 0;
                            }
                        }
                        else if (gPreviousVerticalCollisionCheck == COLLISION_RIGHT_SLIGHT_FLOOR_SLOPE)
                        {
                            if (gCurrentSprite.pOam != sZozoroOam_CrawlingSlightUpwardsSlope)
                            {
                                gCurrentSprite.pOam = sZozoroOam_CrawlingSlightUpwardsSlope;
                                gCurrentSprite.animationDurationCounter = 0;
                                gCurrentSprite.currentAnimationFrame = 0;
                            }
                        }
                        else if (gPreviousVerticalCollisionCheck == COLLISION_RIGHT_STEEP_FLOOR_SLOPE)
                        {
                            if (gCurrentSprite.pOam != sZozoroOam_CrawlingSteepUpwardsSlope)
                            {
                                gCurrentSprite.pOam = sZozoroOam_CrawlingSteepUpwardsSlope;
                                gCurrentSprite.animationDurationCounter = 0;
                                gCurrentSprite.currentAnimationFrame = 0;
                            }
                        }
                    }
                    else
                    {
                        if (gPreviousVerticalCollisionCheck == COLLISION_RIGHT_SLIGHT_FLOOR_SLOPE)
                        {
                            if (gCurrentSprite.pOam != sZozoroOam_CrawlingSlightDownwardsSlope)
                            {
                                gCurrentSprite.pOam = sZozoroOam_CrawlingSlightDownwardsSlope;
                                gCurrentSprite.animationDurationCounter = 0;
                                gCurrentSprite.currentAnimationFrame = 0;
                            }
                        }
                        else if (gPreviousVerticalCollisionCheck == COLLISION_RIGHT_STEEP_FLOOR_SLOPE)
                        {
                            if (gCurrentSprite.pOam != sZozoroOam_CrawlingSteepDownwardsSlope)
                            {
                                gCurrentSprite.pOam = sZozoroOam_CrawlingSteepDownwardsSlope;
                                gCurrentSprite.animationDurationCounter = 0;
                                gCurrentSprite.currentAnimationFrame = 0;
                            }
                        }
                        else if (gPreviousVerticalCollisionCheck == COLLISION_LEFT_SLIGHT_FLOOR_SLOPE)
                        {
                            if (gCurrentSprite.pOam != sZozoroOam_CrawlingSlightUpwardsSlope)
                            {
                                gCurrentSprite.pOam = sZozoroOam_CrawlingSlightUpwardsSlope;
                                gCurrentSprite.animationDurationCounter = 0;
                                gCurrentSprite.currentAnimationFrame = 0;
                            }
                        }
                        else if (gPreviousVerticalCollisionCheck == COLLISION_LEFT_STEEP_FLOOR_SLOPE)
                        {
                            if (gCurrentSprite.pOam != sZozoroOam_CrawlingSteepUpwardsSlope)
                            {
                                gCurrentSprite.pOam = sZozoroOam_CrawlingSteepUpwardsSlope;
                                gCurrentSprite.animationDurationCounter = 0;
                                gCurrentSprite.currentAnimationFrame = 0;
                            }
                        }
                    }
                }
            }

            if (!turn)
                SpriteUtilMoveXPosForwardOnSlopeXFlip(speed);
        }
    }

    if (turn)
        gCurrentSprite.pose = ZOZORO_POSE_TURNING_AROUND_INIT;
}

/**
 * @brief 50470 | 18 | Initializes a zozoro to be turning around
 * 
 */
static void ZozoroTurningAroundInit(void)
{
    gCurrentSprite.pose = ZOZORO_POSE_TURNING_AROUND;
    ZozoroSetTurningAroundOam();
}

/**
 * @brief 50488 | 48 | Handles a zozoro turning around
 * 
 */
static void ZozoroTurningAround(void)
{
    // Flip if in middle of animation
    if (gCurrentSprite.currentAnimationFrame == 1 && gCurrentSprite.animationDurationCounter == 3)
    {
        if (gCurrentSprite.work0)
            gCurrentSprite.status ^= SS_Y_FLIP;
        else
            gCurrentSprite.status ^= SS_X_FLIP;
    }

    if (SpriteUtilCheckNearEndCurrentSpriteAnim())
        gCurrentSprite.pose = SPRITE_POSE_IDLE_INIT;
}

/**
 * @brief 504d0 | 20 | Initializes a zozoro to be falling
 * 
 */
static void ZozoroFallingInit(void)
{
    gCurrentSprite.pose = SPRITE_POSE_FALLING;
    gCurrentSprite.work4 = 0;
    ZozoroSetCrawlingOam();
}

/**
 * @brief 504f0 | 100 | Handles a zozoro falling
 * 
 */
static void ZozoroFalling(void)
{
    u32 blockTop;

    u8 vertical = FALSE;

    // Check if hit ground
    u16 yCollisionPoint = gCurrentSprite.yPosition;
    u16 xCollisionPoint = gCurrentSprite.xPosition;
    if (gCurrentSprite.work0)
    {
        if (gCurrentSprite.status & SS_X_FLIP)
            xCollisionPoint -= PIXEL_SIZE;
        yCollisionPoint += gCurrentSprite.hitboxBottom;
    }
    else
    {
        if (gCurrentSprite.status & SS_Y_FLIP)
            yCollisionPoint += gCurrentSprite.hitboxBottom;
    }

    blockTop = SpriteUtilCheckVerticalCollisionAtPositionSlopes(yCollisionPoint, xCollisionPoint);
    if (gPreviousVerticalCollisionCheck != COLLISION_AIR)
    {
        // Hit ground
        gCurrentSprite.yPosition = blockTop;

        if (gCurrentSprite.work0)
            vertical++;

        gCurrentSprite.status &= ~SS_Y_FLIP;
        gCurrentSprite.work0 = FALSE;

        ZozoroUpdateHitbox();

        if (vertical)
        {
            if (gCurrentSprite.status & SS_X_FLIP)
                gCurrentSprite.xPosition -= gCurrentSprite.hitboxRight;
            else
                gCurrentSprite.xPosition -= gCurrentSprite.hitboxLeft;
        }

        // Set crawling and don't play start crawling sound
        gCurrentSprite.pose = SPRITE_POSE_IDLE;
        ZozoroSetCrawlingOam();
    }
    else
    {
        // Falling
        u8 offset = gCurrentSprite.work4;
        s16 movement = sSpritesFallingSpeed[offset];

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

/**
 * @brief 505f0 | 204 | Zozoro AI
 * 
 */
void Zozoro(void)
{
    if (SPRITE_HAS_ISFT(gCurrentSprite) == 4)
    {
        SoundPlayNotAlreadyPlaying(SOUND_ZOZORO_HURT);
    }

    if (gCurrentSprite.freezeTimer != 0)
    {
        SpriteUtilUpdateFreezeTimer();
        return;
    }

    switch (gCurrentSprite.pose)
    {
        case SPRITE_POSE_UNINITIALIZED:
            ZozoroInit();
            break;

        case SPRITE_POSE_IDLE_INIT:
            ZozoroIdleInit();

        case SPRITE_POSE_IDLE:
            ZozoroIdle();
            break;

        case ZOZORO_POSE_TURNING_AROUND_INIT:
            ZozoroTurningAroundInit();

        case ZOZORO_POSE_TURNING_AROUND:
            ZozoroTurningAround();
            break;

        case SPRITE_POSE_FALLING_INIT:
            ZozoroFallingInit();

        case SPRITE_POSE_FALLING:
            ZozoroFalling();
            break;

        case SPRITE_POSE_DYING_INIT:
            SpriteDyingInit();

        case SPRITE_POSE_DYING:
            SpriteDying();
            break;

        case SPRITE_POSE_SPAWNING_FROM_X_INIT:
            ZozoroInit();

        case SPRITE_POSE_SPAWNING_FROM_X:
            SpriteSpawningFromX();
            break;

        case SPRITE_POSE_TURNING_INTO_X:
            ZozoroTurningIntoX();
            XParasiteInit();
    }
}
