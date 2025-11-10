#ifndef MICROPY_INCLUDED_STM32H7XX_HAL_CONF_H
#define MICROPY_INCLUDED_STM32H7XX_HAL_CONF_H

#define HSE_VALUE (12000000)
#define LSE_VALUE (32768)

#define DATA_CACHE_ENABLE 1
#define INSTRUCTION_CACHE_ENABLE 1
#define PREFETCH_ENABLE 1
#define USE_RTOS 0

#define HAL_RNG_MODULE_ENABLED
#define HAL_SDRAM_MODULE_ENABLED
#define HAL_SD_MODULE_ENABLED
#define HAL_DCMI_MODULE_ENABLED
#define HAL_DAC_MODULE_ENABLED
#define HAL_ADC_MODULE_ENABLED
// A következő sorokat (vagy hasonlóakat) kell a konfigurációs fájlba illeszteni:

// A HSE_STARTUP_TIMEOUT és LSE_STARTUP_TIMEOUT makrók hozzáadva,
// hogy feloldjuk a stm32h7xx_hal_rcc.c fordítási hibáját.

#ifndef HSE_STARTUP_TIMEOUT
#define HSE_STARTUP_TIMEOUT        ( ( uint32_t ) 100 )
#endif /* HSE_STARTUP_TIMEOUT */

#ifndef LSE_STARTUP_TIMEOUT
#define LSE_STARTUP_TIMEOUT        ( ( uint32_t ) 5000 )
#endif /* LSE_STARTUP_TIMEOUT */

#include "boards/stm32h7xx_hal_conf_base.h"

#endif
