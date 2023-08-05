#ifndef _STM32_CORE_H_INCLUDED_
#define _STM32_CORE_H_INCLUDED_

// Hal drivers
#include "stm32f7xx_hal.h"

#include "error.h"

//! Default function format for config clocks
void SystemClock_Config(void);

//! Custom clock config (for debug mainly)
void config_clock(void);


#endif