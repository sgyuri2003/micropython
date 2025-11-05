// Auto-generated sdram_data.c for MY_H743_BOARD
#include "py/mpconfig.h"
#include "sdram.h"

const sdram_t sdram_init_sequence = {
    .base = (uint32_t)MICROPY_HW_SDRAM_BASE,
    .size = MICROPY_HW_SDRAM_SIZE,
    .timing = {
        .trcd = 2, // RAS to CAS Delay
        .trp = 2,  // Row Precharge Time
        .twr = 2,  // Write recovery time
        .trc = 7,  // Row cycle time
        .tras = 4, // Active to Precharge
        .txsr = 7, // Exit self-refresh to active
        .tmrd = 2, // Mode register set to command delay
    },
    .ref_count = 8192,
    .refresh_rate = 64, // ms
};
