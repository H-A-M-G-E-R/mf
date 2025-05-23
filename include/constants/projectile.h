#ifndef PROJECTILE_CONSTANTS_H
#define PROJECTILE_CONSTANTS_H

#include "types.h"

#define PROJ_STATUS_EXISTS (1 << 0)
#define PROJ_STATUS_ON_SCREEN (1 << 1)
#define PROJ_STATUS_NOT_DRAWN (1 << 2)
#define PROJ_STATUS_ABOVE_BG1 (1 << 3)
#define PROJ_STATUS_CAN_AFFECT_ENVIRONMENT (1 << 4)
#define PROJ_STATUS_Y_FLIP (1 << 5)
#define PROJ_STATUS_X_FLIP (1 << 6)
#define PROJ_STATUS_LOW_OAM_PRIORITY (1 << 7)

#define PROJ_STATUS_DRAW_CHECK (PROJ_STATUS_EXISTS | PROJ_STATUS_ON_SCREEN | PROJ_STATUS_NOT_DRAWN | PROJ_STATUS_LOW_OAM_PRIORITY)
#define PROJ_STATUS_DRAW_COND (PROJ_STATUS_EXISTS | PROJ_STATUS_ON_SCREEN)

enum ProjectileCategory {
    PROJECTILE_CATEGORY_NONE,
    PROJECTILE_CATEGORY_UNCHARGED_BEAM,
    PROJECTILE_CATEGORY_MISSILE,
    PROJECTILE_CATEGORY_SUPER_MISSILE, // Possibly scrapped in early development
    PROJECTILE_CATEGORY_BOMB,
    PROJECTILE_CATEGORY_CHARGED_BEAM,
    PROJECTILE_CATEGORY_POWER_BOMB,

    PROJECTILE_CATEGORY_END,
};

enum ProjectileType {
    PROJ_TYPE_NORMAL_BEAM,
    PROJ_TYPE_CHARGE_BEAM,
    PROJ_TYPE_WIDE_BEAM,
    PROJ_TYPE_PLASMA_BEAM,
    PROJ_TYPE_WAVE_BEAM,
    PROJ_TYPE_CHARGED_NORMAL_BEAM,
    PROJ_TYPE_CHARGED_CHARGE_BEAM,
    PROJ_TYPE_CHARGED_WIDE_BEAM,
    PROJ_TYPE_CHARGED_PLASMA_BEAM,
    PROJ_TYPE_CHARGED_WAVE_BEAM,
    PROJ_TYPE_NORMAL_MISSILE,
    PROJ_TYPE_SUPER_MISSILE,
    PROJ_TYPE_ICE_MISSILE,
    PROJ_TYPE_DIFFUSION_MISSILE,
    PROJ_TYPE_CHARGED_DIFFUSION_MISSILE,
    PROJ_TYPE_FLARE,
    PROJ_TYPE_BOMB,
    PROJ_TYPE_POWER_BOMB,
    PROJ_TYPE_DIFFUSION_FLAKE,

    PROJ_TYPE_END,
};

// Normal beam

#define NORMAL_BEAM_DAMAGE 2
#define CHARGED_NORMAL_BEAM_DAMAGE 10
#define NORMAL_BEAM_FLARE_DAMAGE 6
#define NORMAL_BEAM_SUDO_SCREW_DAMAGE 0

// Charge beam

#define CHARGE_BEAM_DAMAGE 2
#define CHARGED_CHARGE_BEAM_DAMAGE 10
#define CHARGE_BEAM_SUDO_SCREW_DAMAGE 14

// Wide beam

#define WIDE_BEAM_DAMAGE 3
#define CHARGED_WIDE_BEAM_DAMAGE 15
#define WIDE_BEAM_FLARE_DAMAGE 9
#define WIDE_BEAM_SUDO_SCREW_DAMAGE 21

// Plasma beam

#define PLASMA_BEAM_DAMAGE 3
#define CHARGED_PLASMA_BEAM_DAMAGE 9
#define PLASMA_BEAM_FLARE_DAMAGE 12
#define PLASMA_BEAM_SUDO_SCREW_DAMAGE 30

// Wave beam

#define WAVE_BEAM_DAMAGE 3
#define CHARGED_WAVE_BEAM_DAMAGE 9
#define WAVE_BEAM_FLARE_DAMAGE 15
#define WAVE_BEAM_SUDO_SCREW_DAMAGE 48

// Ice beam

#define ICE_BEAM_DAMAGE 6
#define CHARGED_ICE_BEAM_DAMAGE 12
#define ICE_BEAM_SUDO_SCREW_DAMAGE 48

// Charge beam thresholds

#define CHARGE_BEAM_START_THRESHOLD 16
#define CHARGE_BEAM_UNCHARGED_THRESHOLD 25
#define CHARGE_BEAM_THRESHOLD 64
#define CHARGE_BEAM_MAX_THRESHOLD (CHARGE_BEAM_THRESHOLD + 15)

// Charge missile thresholds

#define CHARGE_MISSILE_START_THRESHOLD 16
#define CHARGE_MISSILE_THRESHOLD 128

#define PROJ_IS_BOMB_OR_FLAKE(type) ((type) >= PROJ_TYPE_BOMB)

#endif /* PROJECTILE_CONSTANTS_H */
