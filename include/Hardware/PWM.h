#ifndef PWM_H_INCLUDED
#define PWM_H_INCLUDED

#include <stm32f767xx.h>
#include <stm32f7xx_hal.h>
#include <stm32f7xx_hal_tim.h>
#include <stm32f7xx_hal_tim_ex.h>

enum PeripheralClock
{
  APB1,
  APB2
};

//TODO: Add use case for LPTIM
class PWM
{
public:
  PWM(TIM_TypeDef* instance) :
    _timer(instance),
    _duty_cycle(0),
    _period(0)
  { 
    TIM_Base_InitTypeDef initializer = {
      .Prescaler = 0,
      .CounterMode = TIM_COUNTERMODE_UP,
      .Period = 0,
      .ClockDivision = 0,
      .RepetitionCounter = 0,
      .AutoReloadPreload = 0
    };
  }

  ~PWM()
  { }

  static PeripheralClock getPeripheralClock(TIM_TypeDef* instance)
  {
    uint32_t* addr = (uint32_t*)instance;
    if ( *addr > APB2PERIPH_BASE)
      return APB2;

    return APB1;
  }

  void setPeriod(uint32_t period)
  {
    _period = period;
  }

  void setDutyCycle(uint32_t duty_cycle)
  {
    _duty_cycle = duty_cycle;
  }

private:
  TIM_TypeDef* _timer;
  uint32_t _duty_cycle;
  uint32_t _period;
};


#endif