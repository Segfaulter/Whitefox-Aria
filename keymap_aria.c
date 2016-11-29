/*
Copyright 2015 Jun Wako <wakojun@gmail.com>

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
#include "keymap_common.h"

const uint8_t keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Layer 0: Default Layer
     * ,---------------------------------------------------------------.
     * |Esc|  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =| Backs|\|`|
     * |---------------------------------------------------------------|
     * |Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]|Backs|Del|
     * |---------------------------------------------------------------|
     * |CapsLo|  A|  S|  D|  F|  G|  H|  J|  K|  L|  ;|  '|Enter   |PgU|
     * |---------------------------------------------------------------|
     * |Shif|   |  Z|  X|  C|  V|  B|  N|  M|  ,|  .|  /|Shift |Up |PgD|
     * |---------------------------------------------------------------|
     * |Ctrl|Gui |Alt |         Space    |Fn0 |Alt |Gui |  |Lef|Dow|Rig|
     * `---------------------------------------------------------------'
     */
   [0] = KEYMAP( \
       ESC, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, BSPC, GRV, \
       TAB, Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRC,RBRC,BSLS, DEL, \
       CAPS,A,   S,   D,   F,   G,   H,   J,   K,   L,   SCLN,QUOT     ,ENT,  PGUP,\
       LSFT    ,Z,   X,   C,   V,   B,   N,   M,   COMM,DOT, SLSH,RSFT, UP,  PGDN,\
       LCTL,LALT,LGUI,               SPC,           FN0, RCTL,     LEFT,DOWN,RGHT \
   ), 
    /* Layer 1:
     * ,---------------------------------------------------------------.
     * |   | F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|   |    |  |
     * |---------------------------------------------------------------|
     * |     |   |   |   |   |   |   |   |   |   |   |   |   |      |  |
     * |---------------------------------------------------------------|
     * |      |   |   |   |   |   |   |   |   |   |   |   |         |  |
     * |---------------------------------------------------------------|
     * |    |   |   |   |   |   |   |   |   |   |   |   |      |    |  |
     * |---------------------------------------------------------------|
     * |    |    |    |                  |    |    |    |  |   |    |  |
     * `---------------------------------------------------------------'
     */
   [1] = KEYMAP( \
       TRNS, F1, F2, F3, F4, F5, F6, F7, F8, F9, F10, F11, F12, TRNS, TRNS, TRNS,\
       TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,  TRNS,TRNS,TRNS, \
       TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,HOME, \
       TRNS,TRNS,TRNS ,TRNS ,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, TRNS,TRNS,TRNS,TRNS,END, \
       TRNS,TRNS,TRNS,               TRNS,       TRNS,TRNS,TRNS,TRNS,TRNS,TRNS \
   ),
};

const uint16_t fn_actions[] = {
    [0] = ACTION_LAYER_MOMENTARY(1),
};

/*
 * user defined action function
 */
