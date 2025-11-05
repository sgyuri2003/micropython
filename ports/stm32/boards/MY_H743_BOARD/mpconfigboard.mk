#
# Config file for MY_H743_BOARD
#
BOARD := MY_H743_BOARD

# MCU Series definition (used for configuration files)
MCU_SERIES = H7

# Paths for GPIO pin configuration files
# Defines the alternate function mapping for H7 series
AF_CSV = boards/stm32h7xx_af.csv
# Defines the specific pin names for your board (e.g., LED_RED, UART_TX)
BOARD_PINS = boards/MY_H743_BOARD/pins.csv

# Compiler settings
MICROPY_BOARD_C_SRCS += $(SRC_DIR)/boards/MY_H743_BOARD/sdram_data.c
MICROPY_BOARD_EXTRA_OBJ :=

# Enable SDRAM and other flags
CFLAGS += -DMICROPY_HW_ENABLE_SDRAM