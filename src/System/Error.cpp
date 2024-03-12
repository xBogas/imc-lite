#include <Arduino.h>

#include "Core/Interface.h"

#include "System/Error.h"
#include "System/Time.h"

static void cycles_wait(uint32_t cycles)
{
	uint32_t start = DWT->CYCCNT;
	while (DWT->CYCCNT - start < cycles)
		;
}

// Print error message
// Start blinking red LED
void error(const char* str)
{
	if (str != nullptr)
		Debug(str);

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