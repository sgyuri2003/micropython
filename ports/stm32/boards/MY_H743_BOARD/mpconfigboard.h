// Auto-generated mpconfigboard.h for MY_H743_BOARD
#ifndef MICROPY_INCLUDED_My_H743_BOARD_MPCONFIGBOARD_H
#define MICROPY_INCLUDED_My_H743_BOARD_MPCONFIGBOARD_H

#define MICROPY_HW_BOARD_NAME       "MY_H743_BOARD"
#define MICROPY_HW_MCU_NAME         "STM32H743ZIT6"

// Crystal / clocks
#define MICROPY_HW_CLK_USE_HSE      (1)
#define MICROPY_HW_CLK_HSE          (12000000)

// Features
#define MICROPY_HW_ENABLE_SDRAM     (1)
#define MICROPY_HW_HAS_SDCARD       (1)
#define MICROPY_HW_ENABLE_USB       (1)
#define MICROPY_HW_USB_REPL         (1)
#define MICROPY_HW_USB_CDC          (1)

// REPL on USB CDC
#define MICROPY_HW_UART_REPL        (0)

// SDRAM base address (typical for FMC bank): 0xC0000000
#define MICROPY_HW_SDRAM_BASE       (0xC0000000)
#define MICROPY_HW_SDRAM_SIZE       (0x00800000) // 8MB (example)

#endif // MICROPY_INCLUDED_My_H743_BOARD_MPCONFIGBOARD_H
