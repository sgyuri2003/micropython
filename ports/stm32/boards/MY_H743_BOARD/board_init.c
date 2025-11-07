#include "py/mphal.h"
#include "modmachine.h"
#include "sdram.h"

void MICROPY_BOARD_EARLY_INIT(void) {
    sdram_init();
}
