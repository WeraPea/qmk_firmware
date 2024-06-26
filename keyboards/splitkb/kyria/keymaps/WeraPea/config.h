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

#define SPLIT_WPM_ENABLE
#define SPLIT_LAYER_STATE_ENABLE

#define OLED_TIMEOUT 0

// space
#undef LOCKING_SUPPORT_ENABLE
#undef LOCKING_RESYNC_ENABLE
#define NO_ACTION_ONESHOT
#define LAYER_STATE_16BIT
