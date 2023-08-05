#include "serial.h"
#include "stm32_core.h"
#include "tim.h"

#include <stdio.h>

int main(void)
{
  HAL_Init();
  SystemClock_Config();
  
  serial_init();
  serial_write("Serial ready");
  timer_init();

  uint16_t val;
  char bfr[32];
  while (1)
  {
    val = get_tick(2);
    sprintf(bfr ,"TIM2: %d us", val);
    serial_write(bfr);

    val = get_tick(3);
    sprintf(bfr ,"TIM3: %d us", val);
    serial_write(bfr);

    HAL_Delay(500);
  }

  return 0;
}