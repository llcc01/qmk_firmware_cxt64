// Copyright 2023 lc (@llcc01)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT

#define RGB_DI_PIN B7
#define RGB_MATRIX_LED_COUNT 66
#define RGB_MATRIX_TIMEOUT 60000
#define RGB_DISABLE_WHEN_USB_SUSPENDED
