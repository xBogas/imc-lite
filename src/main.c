#include "serial.h"
#include "stm32_core.h"

int main(void)
{
  HAL_Init();
  SystemClock_Config();
  
  serial_init();
  while (1)
  {
    serial_write("Hello World!\n");
    HAL_Delay(100);
  }

  return 0;
}