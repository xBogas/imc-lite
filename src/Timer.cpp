#include "Timer.h"
#include "Tasks.h"
//! for nucleo 144 1-14
//! 14 it will be used by ethernet
static TIM_TypeDef* timers[] = {
  TIM1,
  TIM2,
  TIM3,
  TIM4,
  TIM5,
  TIM6,
  TIM7,
  TIM8,
  TIM9,
  TIM10,
  TIM11,
  TIM12,
  TIM13,
};

static uint8_t t_pos = 0;

HardwareTimer* getTimer()
{
  debug("getTimer()", "Returning TIMER %d", t_pos);
  return new HardwareTimer(timers[t_pos++]);
}

HardwareTimer *setTimer(uint32_t ms)
{
  HardwareTimer* rv = getTimer();
  if (rv == NULL)
  {
    // Serial.println("Failed allocate timer");
    return NULL;
  }

  rv->pause();
  rv->setOverflow(ms*1'000, MICROSEC_FORMAT); // timer in ms
  return rv;
}
