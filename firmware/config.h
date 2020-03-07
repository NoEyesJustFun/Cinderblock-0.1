/*
Copyright 2019 NoEyesJustFun

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once
#include "config_common.h"

#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x6061
#define DEVICE_VER      0x0001
#define MANUFACTURER 	NoEyesJustFun
#define PRODUCT 		Cinderblock
#define DESCRIPTION 	70% Equal Staggered Keyboard

/* MATRIX SIZE */
#define MATRIX_ROWS 5
#define MATRIX_COLS 14

#define MATRIX_ROW_PINS { D1, D0, D4, C6, D7 }
#define MATRIX_COL_PINS { F4, F5, F6, F7, B1, B6, F0, F1, C7, D5, B7, B5, B4, E6 }


#define DIODE_DIRECTION ROW2COL

/* WS2812 RGB LED */
#define RGB_DI_PIN D3
#define RGBLIGHT_ANIMATIONS
#define RGBLED_NUM 12               
