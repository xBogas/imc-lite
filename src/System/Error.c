// ****************************************************************
// Copyright 2024 Universidade do Porto - Faculdade de Engenharia *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)        *
// Departamento de Engenharia Electrotécnica e de Computadores    *
// ****************************************************************
// Author: João Bogas                                             *
// ****************************************************************

#include <Arduino.h>

#include "System/Error.h"

#include <stdarg.h>
#include <stdio.h>

_BEGIN_STD_C

static const char* eof = "\r\n";
static uint16_t eof_size = 2;
UART_HandleTypeDef _debug;

static void cycles_wait(uint32_t cycles)
{
	uint32_t start = DWT->CYCCNT;
	while (DWT->CYCCNT - start < cycles)
		;
}

// Print error message
// Start blinking red LED
static void fmt_error(const char* str)
{
	if (str != NULL) {
		HAL_UART_Abort(&_debug);
		HAL_UART_Transmit(&_debug, (uint8_t*)str, strlen(str), HAL_MAX_DELAY);
		HAL_UART_Transmit(&_debug, (uint8_t*)eof, eof_size, HAL_MAX_DELAY);
	}

	// Enable DWT
	CoreDebug->DEMCR |= CoreDebug_DEMCR_TRCENA_Msk;

	// Enable the CPU cycle counter
	DWT->CTRL |= DWT_CTRL_CYCCNTENA_Msk;

	digitalWrite(LED_GREEN, LOW);
	while (1) {
		digitalWrite(LED_RED, LOW);
		cycles_wait(SystemCoreClock / 2);
		digitalWrite(LED_RED, HIGH);
		cycles_wait(SystemCoreClock / 2);
	}
}

void debug_init(void)
{
	__HAL_RCC_UART5_CLK_ENABLE();

	// Config GPIO pins
	pinmap_pinout(PB_8, PinMap_UART_RX);
	pinmap_pinout(PB_9, PinMap_UART_TX);

	_debug.Instance = UART5;
	_debug.Init.BaudRate = 115200;
	_debug.Init.WordLength = UART_WORDLENGTH_8B;
	_debug.Init.StopBits = UART_STOPBITS_1;
	_debug.Init.Parity = UART_PARITY_NONE;
	_debug.Init.Mode = UART_MODE_TX_RX;
	_debug.Init.HwFlowCtl = UART_HWCONTROL_NONE;
	_debug.Init.OverSampling = UART_OVERSAMPLING_16;
	_debug.Init.OneBitSampling = UART_ONE_BIT_SAMPLE_DISABLE;
	_debug.AdvancedInit.AdvFeatureInit = UART_ADVFEATURE_NO_INIT;

	if (HAL_UART_Init(&_debug) != HAL_OK)
		error("debug_init: HAL_UART_Init failed");

	debug("debug_init: UART5 initialized");
}

void error(const char* str, ...)
{
	__disable_irq();
	__disable_fault_irq();
	__DSB();
	__ISB();

	if (str == NULL)
		fmt_error(NULL);

	char buffer[256];
	va_list args;
	va_start(args, str);
	vsnprintf(buffer, 256, str, args);
	va_end(args);

	fmt_error(buffer);
}

void debug(const char* str, ...)
{
	// IRQ_LOCK();

	if (str == NULL)
		return;

	char buffer[256];
	va_list args;
	va_start(args, str);
	vsnprintf(buffer, 256, str, args);
	va_end(args);

	HAL_UART_Transmit(&_debug, (uint8_t*)buffer, strlen(buffer), HAL_MAX_DELAY);
	HAL_UART_Transmit(&_debug, (uint8_t*)eof, eof_size, HAL_MAX_DELAY);

	// IRQ_UNLOCK();
}

char debug_wait_input(void)
{
	char recv[4];
	int rv = HAL_UART_Receive(&_debug, (uint8_t*)recv, 1, HAL_MAX_DELAY);
	if (rv == HAL_OK)
		return recv[0];

	return 0;
}

void HardFault_Handler(void)
{
	error("HardFault_Handler");
}

void MemManage_Handler(void)
{
	error("MemManage_Handler");
}

void BusFault_Handler(void)
{
	error("BusFault_Handler");
}

void UsageFault_Handler(void)
{
	error("UsageFault_Handler");
}

_END_STD_C