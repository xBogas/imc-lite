// ****************************************************************
// Copyright 2024 Universidade do Porto - Faculdade de Engenharia *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)        *
// Departamento de Engenharia Electrotécnica e de Computadores    *
// ****************************************************************
// Author: João Bogas                                             *
// ****************************************************************

#include <Arduino.h>

#include "System/Error.h"
#include "System/Time.h"

_BEGIN_STD_C

static const char* eof = "\r\n";
static size_t eof_size = strlen(eof);

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
	if (str != nullptr) {
		UART_HandleTypeDef* handle = Serial.getHandle();
		HAL_UART_AbortTransmit(handle);

		HAL_UART_Transmit(handle, (const uint8_t*)str, strlen(str),
						  HAL_MAX_DELAY);
		HAL_UART_Transmit(handle, (const uint8_t*)eof, eof_size, HAL_MAX_DELAY);
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

void error(const char* str, ...)
{
	__disable_irq();

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
	if (str == NULL)
		return;

	char buffer[256];
	va_list args;
	va_start(args, str);
	vsnprintf(buffer, 256, str, args);
	va_end(args);

	UART_HandleTypeDef* handle = Serial.getHandle();
	HAL_UART_AbortTransmit(handle);

	HAL_UART_Transmit(handle, (const uint8_t*)buffer, strlen(buffer),
					  HAL_MAX_DELAY);
	HAL_UART_Transmit(handle, (const uint8_t*)eof, eof_size, HAL_MAX_DELAY);
}


void HardFault_Handler(void)
{
	error("HardFault_Handler");
}

_END_STD_C