/* Copyright 2019 ihulsbus
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

#include "rev1.h"

led_config_t g_led_config = { {
  // Key Matrix to LED Index
  { 0, NO_LED, 1 , 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, NO_LED, NO_LED, NO_LED, NO_LED },
  { 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36 },
  { 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57 },
  { 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, NO_LED, NO_LED, NO_LED, 71, 72, 73 },
  { 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, NO_LED, 86, NO_LED, 87, 88, 89, 90 },
  { 91, 92, 93, NO_LED, NO_LED, 94, NO_LED, NO_LED, 95, 96, 97, 98, 99, 100, 101, 102, NO_LED, 103, NO_LED}
}, {
  // LED Index to Physical Position
  {0,0},{22,0},{34,0},{45,0},{56,0},{67,0},{78,0},{90,0},{101,0},{112,0},{123,0},{134,0},{146,0},{157,0},{168,0},{179,0},
  {0,13},{11,13},{22,13},{34,13},{45,13},{56,13},{67,13},{78,13},{90,13},{101,13},{112,13},{123,13},{134,13},{146,13},{157,13},{168,13},{179,13},{190,13},{202,13},{213,13},{224,13},
  {0,26},{11,26},{22,26},{34,26},{45,26},{56,26},{67,26},{78,26},{90,26},{101,26},{112,26},{123,26},{134,26},{146,26},{157,26},{168,26},{179,26},{190,26},{202,26},{213,26},{224,26},
  {0,38},{11,38},{22,38},{34,38},{45,38},{56,38},{67,38},{78,38},{90,38},{101,38},{112,38},{123,38},{134,38},{190,38},{202,38},{213,38},
  {0,51},{22,51},{34,51},{45,51},{56,51},{67,51},{78,51},{90,51},{101,51},{112,51},{123,51},{134,51},{168,51},{190,51},{202,51},{213,51},{224,51},
  {0,64},{11,64},{22,64},{67,64},{112,64},{123,64},{134,64},{146,64},{157,64},{168,64},{179,64},{190,64},{213,64}
}, {
  // LED Index to Flag
  1, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 1, 4,
  4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 1, 4, 4, 4,
  4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
  1, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
  4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
  1, 1, 1, 4, 1, 1, 1, 1, 4, 4, 4, 4, 4
} };

// Optional override functions below.
// You can leave any or all of these undefined.
// These are only required if you want to perform custom actions.

/*
void matrix_init_kb(void) {
    // put your keyboard start-up code here
    // runs once when the firmware starts up

    matrix_init_user();
}

void matrix_scan_kb(void) {
    // put your looping keyboard code here
    // runs every cycle (a lot)

    matrix_scan_user();
}

bool process_record_kb(uint16_t keycode, keyrecord_t *record) {
    // put your per-action keyboard code here
    // runs for every action, just before processing by the firmware

    return process_record_user(keycode, record);
}

bool led_update_kb(led_t led_state) {
    // put your keyboard LED indicator (ex: Caps Lock LED) toggling code here

    return led_update_user(led_state);
}
*/
