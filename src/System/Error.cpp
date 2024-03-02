#include <Arduino.h>

#include "Core/Interface.h"

#include "System/Error.h"
#include "System/Time.h"


// Print error message
// Start blinking red LED
void error(const char* str)
{
	if (str != nullptr)
		Debug(str);

	// TODO: Replace with proper error handling
	digitalWrite(LED_GREEN, LOW);
	while (1) {
		digitalWrite(LED_RED, LOW);
		Clock::busyWait(500);
		digitalWrite(LED_RED, HIGH);
		Clock::busyWait(500);
	}
}