#ifndef TIMER_H_INCLUDED_
#define TIMER_H_INCLUDED_

#include <Arduino.h>

HardwareTimer* getTimer();
HardwareTimer* setTimer(uint32_t);
#endif