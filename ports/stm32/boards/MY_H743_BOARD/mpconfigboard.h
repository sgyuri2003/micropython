#define MICROPY_HW_BOARD_NAME       "MY_H743_BOARD"
#define MICROPY_HW_MCU_NAME         "STM32H743ZIT6"

#define MICROPY_HW_ENABLE_RTC       (1)
#define MICROPY_HW_ENABLE_RNG       (1)
#define MICROPY_HW_ENABLE_ADC       (1)
#define MICROPY_HW_ENABLE_DAC       (1)
#define MICROPY_HW_ENABLE_USB       (1)
#define MICROPY_HW_HAS_SWITCH       (0)
#define MICROPY_HW_ENABLE_SDCARD    (1)
#define MICROPY_HW_ENABLE_INTERNAL_FLASH_STORAGE (0)
#define MICROPY_HW_HAS_FLASH        (1)
#define MICROPY_HW_ENABLE_SERVO     (0)
#define MICROPY_HW_ENABLE_TIMER     (1)
#define MICROPY_HW_ENABLE_ETH       (0)
#define MICROPY_HW_ENABLE_QSPI      (0)

// Clock setup
#define MICROPY_HW_CLK_USE_BYPASS       (0)
#define MICROPY_HW_CLK_PLLM             (3)
#define MICROPY_HW_CLK_PLLN             (240)
#define MICROPY_HW_CLK_PLLP             (2)
#define MICROPY_HW_CLK_PLLQ             (5)
#define MICROPY_HW_CLK_PLLR             (2)
#define MICROPY_HW_CLK_PLLVCI     RCC_PLLINPUTRANGE_1_2V
#define MICROPY_HW_CLK_PLLVCOSEL  RCC_PLLVCOMEDIUM
#define MICROPY_HW_CLK_PLLFRAC    0
#define MICROPY_HW_FLASH_LATENCY        FLASH_LATENCY_4

// LEDs
#define MICROPY_HW_LED1                 (pin_C0)
#define MICROPY_HW_LED2                 (pin_C1)
#define MICROPY_HW_LED3                 (pin_C2)
#define MICROPY_HW_LED_ON(pin)          (mp_hal_pin_high(pin))
#define MICROPY_HW_LED_OFF(pin)         (mp_hal_pin_low(pin))

// USB FS
#define MICROPY_HW_USB_FS               (1)
#define MICROPY_HW_USB_HS               (0)

// UART
#define MICROPY_HW_UART1_TX             (pin_A9)
#define MICROPY_HW_UART1_RX             (pin_A10)
#define MICROPY_HW_UART_REPL            PYB_UART_1
#define MICROPY_HW_UART_REPL_BAUD       115200

// SD Card
#define MICROPY_HW_SDCARD_SDMMC         (2)
#define MICROPY_HW_SDCARD_CK            (pin_C12)
#define MICROPY_HW_SDCARD_CMD           (pin_D2)
#define MICROPY_HW_SDCARD_D0            (pin_C8)
#define MICROPY_HW_SDCARD_D1            (pin_C9)
#define MICROPY_HW_SDCARD_D2            (pin_C10)
#define MICROPY_HW_SDCARD_D3            (pin_C11)
#define MICROPY_HW_SDCARD_DETECT_PIN    (pin_G7)
#define MICROPY_HW_SDCARD_DETECT_PULL   (GPIO_PULLUP)
#define MICROPY_HW_SDCARD_MOUNT_AT_BOOT (1)

// External SDRAM (IS42S16160G)
#define MICROPY_HW_SDRAM_SIZE           (8 * 1024 * 1024)
#define MICROPY_HW_SDRAM_STARTUP_TEST   (1)
