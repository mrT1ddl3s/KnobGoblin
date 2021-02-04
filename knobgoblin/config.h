/* Copyright 2020 MrT1ddl3s
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

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x0000
#define DEVICE_VER      0x0001
#define MANUFACTURER    MrT1ddl3s
#define PRODUCT         knobgoblin
#define DESCRIPTION     numpad macropad 2x encoders and oled support

/* key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 5

/* key matrix pins */
#define MATRIX_ROW_PINS { D4, B6, B2, B3, B1 }
#define MATRIX_COL_PINS { B5, B4, E6, D7, C6 }
#define UNUSED_PINS

#define ENCODERS_PAD_A { F7, F5 }
#define ENCODERS_PAD_B { F6, F4 }

#define OLED_TIMEOUT 180000

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

#define DEBOUNCE 2
