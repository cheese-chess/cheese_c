/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at https://mozilla.org/MPL/2.0/. */

#include <bitboard.h>
#include <attacks.h>
#include <random.h>
#include <magic.h>

int main() {
    // Nothing here currently, just used for debugging purposes.

    init_attacks();
    init_magic_numbers();

    printbitboard(generate_magic_number());
    //printf("%ld\n", random());
}