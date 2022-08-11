/* Copyright 2022 Thomas Baart <thomas@splitkb.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#ifdef LEADER_ENABLE
	#define LEADER_TIMEOUT 250
	#define LEADER_PER_KEY_TIMING
#endif

#ifdef OLED_ENABLE
	/* #define OLED_BRIGHTNESS 100 */
#endif

#define ANALOG_JOYSTICK_X_AXIS_PIN F5
#define ANALOG_JOYSTICK_Y_AXIS_PIN F4
#define ANALOG_JOYSTICK_CLICK_PIN D3

#define SPLIT_POINTING_ENABLE
#define POINTING_DEVICE_RIGHT
#define POINTING_DEVICE_INVERT_Y
#define POINTING_DEVICE_INVERT_X

#define ANALOG_JOYSTICK_AXIS_MAX 623
#define ANALOG_JOYSTICK_AXIS_MIN 400

#define SPLIT_WPM_ENABLE
#define SPLIT_LAYER_STATE_ENABLE

#define OLED_TIMEOUT 0

// Lets you roll mod-tap keys
#define IGNORE_MOD_TAP_INTERRUPT

// space
#undef LOCKING_SUPPORT_ENABLE
#undef LOCKING_RESYNC_ENABLE
#define NO_ACTION_ONESHOT
#define LAYER_STATE_8BIT
