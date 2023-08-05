#include "serial.h"
#include "tim.h"

static TIM_HandleTypeDef h_tim2 = {
  .Instance = TIM2,
  .Init.Prescaler = 9600-1,
  .Init.CounterMode = TIM_COUNTERMODE_UP,
  .Init.Period = 10000,
  .Init.ClockDivision = TIM_CLOCKDIVISION_DIV1,
  .Init.AutoReloadPreload = TIM_AUTORELOAD_PRELOAD_DISABLE
};

static TIM_HandleTypeDef h_tim3 = {
  .Instance = TIM3,
  .Init.Prescaler = 9600-1,
  .Init.CounterMode = TIM_COUNTERMODE_UP,
  .Init.Period = 20000,
  .Init.ClockDivision = TIM_CLOCKDIVISION_DIV1,
  .Init.AutoReloadPreload = TIM_AUTORELOAD_PRELOAD_ENABLE
};

void TIM2_IRQHandler(void)
{
  HAL_TIM_IRQHandler(&h_tim2);
}

void TIM3_IRQHandler(void)
{
  HAL_TIM_IRQHandler(&h_tim3);
}

void timer_init(void)
{
  if(HAL_TIM_Base_Init(&h_tim2) != HAL_OK)
  {
    set_error("Failed to init h_tim2");
    Error();
  }
  if (HAL_TIM_Base_Init(&h_tim3) != HAL_OK)
  {
    set_error("Failed to init h_tim3");
    Error();
  }

  // Config clock sources
  TIM_ClockConfigTypeDef src_clk = {
    .ClockSource = TIM_CLOCKSOURCE_INTERNAL
  };

  if (HAL_TIM_ConfigClockSource(&h_tim2, &src_clk) != HAL_OK)
  {
    set_error("Failed to set clock src h_tim2");
    Error();
  }
  if (HAL_TIM_ConfigClockSource(&h_tim3, &src_clk) != HAL_OK)
  {
    set_error("Failed to set clock src h_tim2");
    Error();
  }

  TIM_MasterConfigTypeDef master_cfg = {
    .MasterOutputTrigger = TIM_TRGO_RESET,
    .MasterSlaveMode = TIM_MASTERSLAVEMODE_DISABLE
  };

  if (HAL_TIMEx_MasterConfigSynchronization(&h_tim2, &master_cfg) != HAL_OK)
  {
    set_error("Failed master cfg h_tim2");
    Error();
  }
  if (HAL_TIMEx_MasterConfigSynchronization(&h_tim3, &master_cfg) != HAL_OK)
  {
    set_error("Failed master cfg h_tim3");
    Error();
  }

  HAL_TIM_Base_Start_IT(&h_tim2);
  HAL_TIM_Base_Start_IT(&h_tim3);
}

uint16_t get_tick(unsigned id)
{
  switch (id)
  {
  case 2:
    return __HAL_TIM_GET_COUNTER(&h_tim2);

  case 3:
    return __HAL_TIM_GET_COUNTER(&h_tim3);

  default:
    return __HAL_TIM_GET_COUNTER(&h_tim2);
  }
  return __HAL_TIM_GET_COUNTER(&h_tim2);
}
static void callback1(void)
{
  serial_write("Hello from callback1");
}

static void callback2(void)
{
  serial_write("Hello from callback2");
}

void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef* tim)
{
  if (tim->Instance == TIM2)
    callback1();
  if (tim->Instance == TIM3)
    callback2();
}