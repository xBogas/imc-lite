// ****************************************************************
// Copyright 2024 Universidade do Porto - Faculdade de Engenharia *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)        *
// Departamento de Engenharia Electrotécnica e de Computadores    *
// ****************************************************************
// Author: João Bogas                                             *
// ****************************************************************

#include "System/Terminal.h"
#include "Concurrency/Mutex.h"

#include <Arduino.h>

_BEGIN_STD_C

static bool panic = false;
static UART_HandleTypeDef uart;
static DMA_HandleTypeDef hdma_usart_tx;

static struct mutex* term_mutex;
static const uint8_t* endl = "\r\n";
static const uint16_t endl_len = 2;

static void _uart_init(void)
{
	__HAL_RCC_USART3_FORCE_RESET();
	__HAL_RCC_USART3_RELEASE_RESET();
	__HAL_RCC_USART3_CLK_ENABLE();

	// Config GPIO pins
	pinmap_pinout(PD_9, PinMap_UART_RX);
	pinmap_pinout(PD_8, PinMap_UART_TX);

	// Initialize the UART
	uart.Instance = USART3;
	uart.Init.BaudRate = 115200;
	uart.Init.WordLength = UART_WORDLENGTH_8B;
	uart.Init.StopBits = UART_STOPBITS_1;
	uart.Init.Parity = UART_PARITY_NONE;
	uart.Init.Mode = UART_MODE_TX_RX;
	uart.Init.HwFlowCtl = UART_HWCONTROL_NONE;
	uart.Init.OverSampling = UART_OVERSAMPLING_16;
	uart.AdvancedInit.AdvFeatureInit = UART_ADVFEATURE_NO_INIT;
	uart.Init.OneBitSampling = UART_ONE_BIT_SAMPLE_DISABLE;
	if (HAL_UART_Init(&uart) != HAL_OK)
		error("Failed to initialize UART");

	term_print("Terminal initialized");
}

static void _dma_init(void)
{
	// Initialize the DMA
	__HAL_RCC_DMA1_CLK_ENABLE();
	hdma_usart_tx.Instance = DMA1_Stream3;
	hdma_usart_tx.Init.Channel = DMA_CHANNEL_4;
	hdma_usart_tx.Init.Direction = DMA_MEMORY_TO_PERIPH;
	hdma_usart_tx.Init.PeriphInc = DMA_PINC_DISABLE;
	hdma_usart_tx.Init.MemInc = DMA_MINC_ENABLE;
	hdma_usart_tx.Init.PeriphDataAlignment = DMA_PDATAALIGN_BYTE;
	hdma_usart_tx.Init.MemDataAlignment = DMA_MDATAALIGN_BYTE;
	hdma_usart_tx.Init.Mode = DMA_NORMAL;
	hdma_usart_tx.Init.Priority = DMA_PRIORITY_LOW;
	hdma_usart_tx.Init.FIFOMode = DMA_FIFOMODE_ENABLE;
	if (HAL_DMA_Init(&hdma_usart_tx) != HAL_OK)
		error("Failed to initialize UART DMA");

	__HAL_LINKDMA(&uart, hdmatx, hdma_usart_tx);

	// HAL_NVIC_SetPriority(DMA1_Stream1_IRQn, 0, 0);
	// HAL_NVIC_EnableIRQ(DMA1_Stream1_IRQn);
}

void terminal_init(void)
{
	_uart_init();
	// _dma_init();
	term_mutex = mutex_create();
}

// TODO Implement with dma
void term_print(const char* str)
{
	if (panic)
		return;

	mutex_lock(term_mutex);

	// if (HAL_UART_Transmit_DMA(&uart, (uint8_t*)str, strlen(str)) != HAL_OK)
	// 	error("Failed to transmit data");
	uint16_t len = strlen(str);
	if (HAL_UART_Transmit(&uart, (uint8_t*)str, len, HAL_MAX_DELAY) != HAL_OK)
		error("Failed to transmit data");

	if (str[len - 1] != '\n') {
		// if (HAL_UART_Transmit_DMA(&uart, (uint8_t*)"\n", 1) != HAL_OK)
		// 	error("Failed to transmit data");

		if (HAL_UART_Transmit(&uart, endl, endl_len, HAL_MAX_DELAY) != HAL_OK)
			error("Failed to transmit data");
	}
	// HAL_Delay(2);

	mutex_unlock(term_mutex);
}

void term_panic(const char* str)
{
	// mutex_lock(term_mutex);
	term_print(str);
	panic = true;
	// mutex_unlock(term_mutex);

	while (1)
		;
}

_END_STD_C
