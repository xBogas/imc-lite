//! Overrides for Cortex-M7 Vector table Handles 
#include "error.h"
#include <cmsis_gcc.h>

const char* ERROR_MSG;

void Error_Handler(void)
{
  __disable_irq();
  if (serial_ready())
    serial_write(ERROR_MSG, strlen(ERROR_MSG));

  while(1);
}

void NMI_Handler(void)
{
  Error_Handler();
}

void HardFault_Handler(void)
{
  Error_Handler();
}

void MemManage_Handler(void)
{
  Error_Handler();
}

void BusFault_Handler(void)
{
  Error_Handler();
}

void UsageFault_Handler(void)
{
  Error_Handler();
}

void DebugMon_Handler(void)
{
  Error_Handler();
}