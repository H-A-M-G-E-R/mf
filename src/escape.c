#include "escape.h"
#include "globals.h"
#include "gba.h"

#include "data/hud_data.h"

#include "constants/audio.h"
#include "constants/event.h"
#include "constants/particle.h"

#include "structs/escape.h"
#include "structs/samus.h"

/**
 * @brief 72788 | 344 | Plays the escape sounds (at specific timings)
 * 
 */
void EscapePlaySound(void)
{
    u8 escape;

    escape = EventCheckOn_Escape();

    switch (gEscapeTimerDigits.secondsOnes)
    {
        case 0:
            if ((gEscapeTimerDigits.minutesTens | gEscapeTimerDigits.minutesOnes) == 0)
            {
                if (gEscapeTimerDigits.secondsTens == 0)
                    SoundPlay(VOICE_ZERO);
                else if (gEscapeTimerDigits.secondsTens == 1)
                    SoundPlay(VOICE_TEN);
            }
            break;

        case 1:
            if ((gEscapeTimerDigits.minutesTens | gEscapeTimerDigits.minutesOnes | gEscapeTimerDigits.secondsTens) == 0)
                SoundPlay(VOICE_ONE);
            break;

        case 2:
            if ((gEscapeTimerDigits.minutesTens | gEscapeTimerDigits.minutesOnes | gEscapeTimerDigits.secondsTens) == 0)
                SoundPlay(VOICE_TWO);
            break;

        case 3:
            if ((gEscapeTimerDigits.minutesTens | gEscapeTimerDigits.minutesOnes | gEscapeTimerDigits.secondsTens) == 0)
                SoundPlay(VOICE_THREE);
            break;

        case 4:
            if ((gEscapeTimerDigits.minutesTens | gEscapeTimerDigits.minutesOnes | gEscapeTimerDigits.secondsTens) == 0)
                SoundPlay(VOICE_FOUR);
            break;

        case 5:
            if ((gEscapeTimerDigits.minutesTens | gEscapeTimerDigits.minutesOnes | gEscapeTimerDigits.secondsTens) == 0)
                SoundPlay(VOICE_FIVE);
            break;

        case 6:
            if ((gEscapeTimerDigits.minutesTens | gEscapeTimerDigits.minutesOnes | gEscapeTimerDigits.secondsTens) == 0)
                SoundPlay(VOICE_SIX);
            break;

        case 7:
            if ((gEscapeTimerDigits.minutesTens | gEscapeTimerDigits.minutesOnes | gEscapeTimerDigits.secondsTens) == 0)
                SoundPlay(VOICE_SEVEN);
            break;

        case 8:
            if ((gEscapeTimerDigits.minutesTens | gEscapeTimerDigits.minutesOnes | gEscapeTimerDigits.secondsTens) == 0)
                SoundPlay(VOICE_EIGHT);
            break;

        case 9:
            if (gEscapeTimerDigits.minutesTens != 0)
                break;

            if (gEscapeTimerDigits.secondsTens == 5)
            {
                if (gEscapeTimerDigits.minutesOnes == 5)
                {
                    if (escape == ESCAPE_MELTDOWN)
                        SoundPlay(VOICE_SIX_MINUTES_TO_MAIN_BOILER_EXPLOSION);
                }
                else if (gEscapeTimerDigits.minutesOnes == 4)
                {
                    if (escape == ESCAPE_MELTDOWN)
                        SoundPlay(VOICE_FIVE_MINUTES_TO_MAIN_BOILER_EXPLOSION);
                }
                else if (gEscapeTimerDigits.minutesOnes == 3)
                {
                    if (escape == ESCAPE_MELTDOWN)
                        SoundPlay(VOICE_FOUR_MINUTES_TO_MAIN_BOILER_EXPLOSION);
                }
                else if (gEscapeTimerDigits.minutesOnes == 2)
                {
                    if (escape == ESCAPE_MELTDOWN)
                        SoundPlay(VOICE_THREE_MINUTES_TO_MAIN_BOILER_EXPLOSION);
                }
                else if (gEscapeTimerDigits.minutesOnes == 1)
                {
                    if (escape == ESCAPE_MELTDOWN)
                        SoundPlay(VOICE_TWO_MINUTES_TO_MAIN_BOILER_EXPLOSION);
                    else if (escape == ESCAPE_ORBIT_CHANGE)
                        SoundPlay(VOICE_TWO_MINUTES_TO_DESTINATION);
                }
                else if (gEscapeTimerDigits.minutesOnes == 0)
                {
                    if (escape == ESCAPE_MELTDOWN)
                        SoundPlay(VOICE_SIXTY_SECONDS_TO_EXPLOSION);
                    else if (escape == ESCAPE_ORBIT_CHANGE)
                        SoundPlay(VOICE_SIXTY_SECONDS_TO_IMPACT);
                }
            }
            else if (gEscapeTimerDigits.minutesOnes == 0)
            {
                if (gEscapeTimerDigits.secondsTens == 4)
                {
                    if (escape == ESCAPE_MELTDOWN)
                        SoundPlay(VOICE_FIFTY_SECONDS_TO_EXPLOSION);
                    else if (escape == ESCAPE_RESTRICTED_LAB)
                        SoundPlay(VOICE_FIFTY_SECONDS_TO_ISOLATION_LOCKDOWN);
                    else if (escape == ESCAPE_ORBIT_CHANGE)
                        SoundPlay(VOICE_FIFTY_SECONDS_TO_IMPACT);
                }
                else if (gEscapeTimerDigits.secondsTens == 3)
                {
                    if (escape == ESCAPE_MELTDOWN)
                        SoundPlay(VOICE_FOURTY_SECONDS_TO_EXPLOSION);
                    else if (escape == ESCAPE_RESTRICTED_LAB)
                        SoundPlay(VOICE_FOURTY_SECONDS_TO_ISOLATION_LOCKDOWN);
                    else if (escape == ESCAPE_ORBIT_CHANGE)
                        SoundPlay(VOICE_FOURTY_SECONDS_TO_IMPACT);
                }
                else if (gEscapeTimerDigits.secondsTens == 2)
                {
                    if (escape == ESCAPE_MELTDOWN)
                        SoundPlay(VOICE_THIRTY_SECONDS_TO_EXPLOSION);
                    else if (escape == ESCAPE_RESTRICTED_LAB)
                        SoundPlay(VOICE_THIRTY_SECONDS_TO_ISOLATION_LOCKDOWN);
                    else if (escape == ESCAPE_ORBIT_CHANGE)
                        SoundPlay(VOICE_THIRTY_SECONDS_TO_IMPACT);
                }
                else if (gEscapeTimerDigits.secondsTens == 1)
                {
                    if (escape == ESCAPE_MELTDOWN)
                        SoundPlay(VOICE_TWENTY_SECONDS_TO_EXPLOSION);
                    else if (escape == ESCAPE_RESTRICTED_LAB)
                        SoundPlay(VOICE_TWENTY_SECONDS_TO_ISOLATION_LOCKDOWN);
                    else if (escape == ESCAPE_ORBIT_CHANGE)
                        SoundPlay(VOICE_TWENTY_SECONDS_TO_IMPACT);
                }
                else if (gEscapeTimerDigits.secondsTens == 0)
                {
                    SoundPlay(VOICE_NINE);
                }
            }
            break;
    }
}

/**
 * @brief 72acc | 38 | Updates the OAM of the escape digits
 * 
 */
void EscapeUpdateOam(void)
{
    s32 baseTile;

    // Palette row 15, start tile of 0x3C0
    baseTile = (15 << 12) + 0x3C0;

    // Update the attribute 2 of each digit, ignore slots 2 and 5 as those are the ":" symbol and don't need to be updated
    gEscapeDigitsOam[1 + OAM_PART_SIZE * 7 + 2] = gEscapeTimerDigits.hundredths + baseTile;
    gEscapeDigitsOam[1 + OAM_PART_SIZE * 6 + 2] = gEscapeTimerDigits.tenths + baseTile;

    gEscapeDigitsOam[1 + OAM_PART_SIZE * 4 + 2] = gEscapeTimerDigits.secondsOnes + baseTile;
    gEscapeDigitsOam[1 + OAM_PART_SIZE * 3 + 2] = gEscapeTimerDigits.secondsTens + baseTile;

    gEscapeDigitsOam[1 + OAM_PART_SIZE * 1 + 2] = gEscapeTimerDigits.minutesOnes + baseTile;
    gEscapeDigitsOam[1 + OAM_PART_SIZE * 0 + 2] = gEscapeTimerDigits.minutesTens + baseTile;
}

/**
 * @brief 72b04 | 48 | Checks if the escape digits graphics should reload
 * 
 */
void EscapeCheckReloadGraphics(void)
{
    if (EventCheckOn_Escape() != ESCAPE_NONE)
    {
        DMA_SET(3, sEscapeDigitsGfx, VRAM_OBJ + 0x7800, C_32_2_16(DMA_ENABLE, sizeof(sEscapeDigitsGfx) / sizeof(u16)));
        DMA_SET(3, sEscapeDigitsPal, PALRAM_OBJ + 0x1E0, C_32_2_16(DMA_ENABLE, 16));
    }
}

/**
 * @brief 72b4c | 64 | Starts an escape
 * 
 */
void EscapeStart(void)
{
    // Load graphics
    DMA_SET(3, sEscapeDigitsGfx, VRAM_OBJ + 0x7800, C_32_2_16(DMA_ENABLE, sizeof(sEscapeDigitsGfx) / sizeof(u16)));
    DMA_SET(3, sEscapeDigitsPal, PALRAM_OBJ + 0x1E0, C_32_2_16(DMA_ENABLE, 16));

    // Load oam
    DMA_SET(3, sEscapeDigitsOam, gEscapeDigitsOam, C_32_2_16(DMA_ENABLE, ARRAY_SIZE(gEscapeDigitsOam)));

    // Escape timer uses absolute position, which isn't converted to pixel coordinates when drawing,
    // hence pixel coordinates are used when creating it
    ParticleSet(SUB_PIXEL_TO_PIXEL(PIXEL_SIZE * 2),
        SUB_PIXEL_TO_PIXEL(BLOCK_SIZE * 9 - QUARTER_BLOCK_SIZE), PE_ESCAPE);
}

/**
 * @brief 72bb0 | 98 | Sets the escape timer digits
 * 
 */
void EscapeSetDigits(void)
{
    u8 escape;

    escape = EventCheckOn_Escape();

    gEscapeTimerCounter = UCHAR_MAX;

    if (escape == ESCAPE_MELTDOWN)
    {
        CREATE_ESCAPE_TIMER(6, 0, 0);
    }
    else if (escape == ESCAPE_RESTRICTED_LAB)
    {
        CREATE_ESCAPE_TIMER(1, 0, 0);
        SoundPlay(VOICE_SIXTY_SECONDS_TO_ISOLATION_LOCKDOWN);
    }
    else if (escape == ESCAPE_ORBIT_CHANGE)
    {
        CREATE_ESCAPE_TIMER(3, 0, 0);
        SoundPlay(VOICE_PROPULSION_SEQUENCE_ACTIVATED_DESTINATION_PLANET_SR388);
    }
    else
    {
        CREATE_ESCAPE_TIMER(99, 99, 99);
    }
}

/**
 * @brief 72c48 | 108 | Updates the escape timer
 * 
 */
void EscapeUpdate(void)
{
    u32 counter;

    if (EventCheckOn_Escape() == ESCAPE_NONE || gEscapeStatus != ESCAPE_STATUS_HAPPENNING)
    {
        gEscapeStatus = ESCAPE_STATUS_NONE;
        return;
    }

    if (gSubGameMode1 != SUB_GAME_MODE_PLAYING)
        return;

    if (gPreventMovementTimer != 0)
        return;

    counter = ++gEscapeTimerCounter;

    if (counter % 2)
    {
        if (gEscapeTimerDigits.hundredths > 1)
        {
            gEscapeTimerDigits.hundredths -= 2;
        }
        else
        {
            gEscapeTimerDigits.hundredths += 8;

            if (gEscapeTimerDigits.tenths != 0)
                gEscapeTimerDigits.tenths--;
            else
                gEscapeTimerDigits.tenths = 9;
        }
    }
    else
    {
        if (gEscapeTimerDigits.hundredths != 0)
        {
            gEscapeTimerDigits.hundredths--;
        }
        else
        {
            gEscapeTimerDigits.hundredths = 9;

            if (gEscapeTimerDigits.tenths != 0)
                gEscapeTimerDigits.tenths--;
            else
                gEscapeTimerDigits.tenths = 9;
        }
    }

    if (counter % 64 == 0)
    {
        gEscapeTimerDigits.hundredths = 99 / 10;
        gEscapeTimerDigits.tenths = 99 % 10;

        if (gEscapeTimerDigits.secondsOnes != 0)
        {
            gEscapeTimerDigits.secondsOnes--;
            EscapePlaySound();
            return;
        }

        gEscapeTimerDigits.secondsOnes = 9;

        if (gEscapeTimerDigits.secondsTens != 0)
        {
            gEscapeTimerDigits.secondsTens--;
        }
        else
        {
            gEscapeTimerDigits.secondsTens = 5;
            if (gEscapeTimerDigits.minutesOnes != 0)
            {
                gEscapeTimerDigits.minutesOnes--;
            }
            else
            {
                gEscapeTimerDigits.minutesOnes = 9;
                if (gEscapeTimerDigits.minutesTens == 0)
                {
                    CREATE_ESCAPE_TIMER(0, 0, 0);
                    gEscapeStatus = ESCAPE_STATUS_FAILED;
                    return;
                }
                else
                {
                    gEscapeTimerDigits.minutesTens--;
                }
            }
        }

        EscapePlaySound();
    }
}
