#include "stm32_core.h"

//! Override default HAL_MpsInit to enable CLKs
void HAL_MspInit(void)
{
  __HAL_RCC_PWR_CLK_ENABLE();
  __HAL_RCC_SYSCFG_CLK_ENABLE();
}


void HAL_MspDeInit(void)
{
  __HAL_RCC_PWR_CLK_DISABLE();
  __HAL_RCC_SYSCFG_CLK_DISABLE();
}


void HAL_UART_MspInit(UART_HandleTypeDef* uart)
{
  RCC_PeriphCLKInitTypeDef peri_clk = {0};
  GPIO_InitTypeDef gpio = {0};

  if (uart->Instance == USART3)
  {
    peri_clk.PeriphClockSelection = RCC_PERIPHCLK_USART3;
    peri_clk.Usart3ClockSelection = RCC_USART3CLKSOURCE_PCLK1;
    if (HAL_RCCEx_PeriphCLKConfig(&peri_clk) != HAL_OK)
      Error();

    __HAL_RCC_USART3_CLK_ENABLE();

    __HAL_RCC_GPIOD_CLK_ENABLE();

    gpio.Pin = GPIO_PIN_8 | GPIO_PIN_9;
    gpio.Mode = GPIO_MODE_AF_PP;
    gpio.Pull = GPIO_NOPULL;
    gpio.Speed = GPIO_SPEED_FREQ_VERY_HIGH;
    gpio.Alternate = GPIO_AF7_USART3;
    HAL_GPIO_Init(GPIOD, &gpio);

    HAL_NVIC_SetPriority(USART3_IRQn, 0, 0);
    HAL_NVIC_EnableIRQ(USART3_IRQn);
  }
}


void HAL_UART_MspDeInit(UART_HandleTypeDef* uart)
{
  if(uart->Instance == USART3)
  {
    __HAL_RCC_USART3_CLK_DISABLE();
    HAL_GPIO_DeInit(GPIOD, GPIO_PIN_8|GPIO_PIN_9);
    HAL_NVIC_DisableIRQ(USART3_IRQn);
  }
}