#ifndef TIMER_H_INCLUDED_
#define TIMER_H_INCLUDED_

#include <Arduino.h>

//! Create a HardwareTimer instance
HardwareTimer* getTimer(void);

//! Initialize a HardwareTimer instance
//! @param ms Period in milliseconds
HardwareTimer* setTimer(uint32_t ms);


//TODO:
//! Timer class
class Timer
{
public:
  Timer(TIM_TypeDef*,uint32_t);

  ~Timer();

  void add_interrupt(void(*callable)(void));

private:
  TIM_HandleTypeDef handle;
  uint32_t period;
};

#endif