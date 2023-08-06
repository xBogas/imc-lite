#include "Timer.h"
#include "debug.h"

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
    debug("setTimer","Failed to allocate timer");
    Error_Handler();
  }

  rv->pause();
  rv->setOverflow(ms*1'000, MICROSEC_FORMAT); // timer in ms
  return rv;
}


//TODO: must check timers created for colision
Timer::Timer(TIM_TypeDef* instance, uint32_t ms) :
  period(ms)
{ }

Timer::~Timer()
{ }

void Timer::add_interrupt(void(*callable)(void))
{ }
