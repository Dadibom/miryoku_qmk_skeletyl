// Copyright 2024 Dadibom (@Dadibom)
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
//#define NO_ACTION_ONESHOT"

#define SPLIT_USB_DETECT
#define SPLIT_USB_TIMEOUT 2500
#define SOFT_SERIAL_PIN GP1