#include "serial.h"
#include <string.h>
#include <stdio.h>

UART_HandleTypeDef default_uart;

static SERIAL_STATE default_uart_state = SERIAL_INIT;

static uint8_t _txBuffer[64] = {0};
// static uint8_t _rxBuffer[64] = {0};

void serial_write(char* msg)
{
  int size = sprintf((char*)_txBuffer, "%s\r\n", msg);
  HAL_UART_Transmit(&default_uart, _txBuffer, size, 500);
}

void send_HB(void)
{
  char msg[] = "$HB\r\n";
  HAL_UART_Transmit(&default_uart, (uint8_t*)msg, 6, 500);
}

SERIAL_STATE serial_ready(void)
{
  return default_uart_state;
}

void serial_init(void)
{
  __HAL_RCC_GPIOC_CLK_ENABLE();
  __HAL_RCC_GPIOD_CLK_ENABLE();
  __HAL_RCC_GPIOH_CLK_ENABLE();

  default_uart.Instance = USART3,
  default_uart.Init.BaudRate = 115200,
  default_uart.Init.WordLength = UART_WORDLENGTH_8B,
  default_uart.Init.StopBits = UART_STOPBITS_1,
  default_uart.Init.Parity = UART_PARITY_NONE,
  default_uart.Init.Mode = UART_MODE_TX_RX,
  default_uart.Init.HwFlowCtl = UART_HWCONTROL_NONE,
  default_uart.Init.OverSampling = UART_OVERSAMPLING_16,
  default_uart.Init.OneBitSampling = UART_ONE_BIT_SAMPLE_DISABLE,
  default_uart.AdvancedInit.AdvFeatureInit = UART_ADVFEATURE_NO_INIT;

  if(HAL_UART_Init(&default_uart) != HAL_OK)
    Error();
  default_uart_state = SERIAL_ERR;
}

void USART3_IRQHandler(void)
{
  HAL_UART_IRQHandler(&default_uart);
}