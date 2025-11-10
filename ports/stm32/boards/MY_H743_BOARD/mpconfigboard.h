#ifndef MICROPY_INCLUDED_MPCONFIGBOARD_H
#define MICROPY_INCLUDED_MPCONFIGBOARD_H

#define MICROPY_HW_BOARD_NAME       "MY_H743_BOARD"
#define MICROPY_HW_MCU_NAME         "STM32H743VIT6"

// Core features
#define MICROPY_HW_ENABLE_RTC       (1)
#define MICROPY_HW_ENABLE_RNG       (1)
#define MICROPY_HW_ENABLE_ADC       (1)
#define MICROPY_HW_ENABLE_DAC       (1)
#define MICROPY_HW_ENABLE_USB       (1)
#define MICROPY_HW_ENABLE_SDCARD    (1)
#define MICROPY_HW_HAS_FLASH        (1)
#define MICROPY_HW_ENABLE_SERVO     (0)
#define MICROPY_HW_ENABLE_TIMER     (1)

// Clock setup: 12 MHz HSE → 480 MHz SYSCLK
#define MICROPY_HW_CLK_USE_BYPASS       (0)
#define MICROPY_HW_CLK_PLLM             (3)
#define MICROPY_HW_CLK_PLLN             (240)
#define MICROPY_HW_CLK_PLLP             (2)
#define MICROPY_HW_CLK_PLLQ             (5)
#define MICROPY_HW_CLK_PLLR             (2)
// Valahol a board órajel beállításai (pl. MICROPY_HW_CLK_PLLM, stb.) mellett
#define MICROPY_HW_CLK_PLLVCI   LL_RCC_PLLINPUTRANGE_8_16 // HASZNÁLJUK AZ LL KONSTANST
#define MICROPY_HW_CLK_PLLVCO   LL_RCC_PLLVCORANGE_WIDE
#define MICROPY_HW_CLK_PLLFRAC  0

// USB FS CDC (REPL default)
#define MICROPY_HW_USB_FS               (1)
#define MICROPY_HW_USB_HS               (0)
#define MICROPY_HW_USB_CDC              (1)
#define MICROPY_HW_USB_CDC_RX_DATA_SIZE (1024)
#define MICROPY_HW_USB_CDC_TX_DATA_SIZE (1024)
#define MICROPY_HW_USB_CDC_1200BPS_TOUCH (1)

// LEDs
#define MICROPY_HW_LED1 (pin_C0)
#define MICROPY_HW_LED2 (pin_C1)
#define MICROPY_HW_LED3 (pin_C2)
#define MICROPY_HW_LED_ON(pin)  (mp_hal_pin_high(pin))
#define MICROPY_HW_LED_OFF(pin) (mp_hal_pin_low(pin))

// SD Card
#define MICROPY_HW_SDCARD_SDMMC         (1)
#define MICROPY_HW_SDCARD_DETECT_PIN    (pin_G7)
#define MICROPY_HW_SDCARD_MOUNT_AT_BOOT (1)

// SDRAM config
#define MICROPY_HW_SDRAM_SIZE           (32 * 1024 * 1024)
#define MICROPY_HW_SDRAM_STARTUP_TEST   (1)

// Disable networking
#define MICROPY_PY_LWIP                 (0)
#define MICROPY_PY_BLUETOOTH            (0)
#define MICROPY_PY_NETWORK              (0)
#define MICROPY_PY_SSL                  (0)
#define MICROPY_SSL_MBEDTLS             (0)
#define MICROPY_PY_USOCKET              (0)

#endif
