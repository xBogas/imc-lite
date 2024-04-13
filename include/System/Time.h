// ****************************************************************
// Copyright 2024 Universidade do Porto - Faculdade de Engenharia *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)        *
// Departamento de Engenharia Electrotécnica e de Computadores    *
// ****************************************************************
// Author: João Bogas                                             *
// ****************************************************************

#ifndef SYSTEM_TIME_H_INCLUDED_
#define SYSTEM_TIME_H_INCLUDED_

#include <stdint.h>

class Clock {
public:
	// Get instance of Clock
	static Clock* getInstance(void);

	// Set current time
	// @param epoch number of seconds since UNIX epoch
	static void setEpoch(float epoch);

	// Print current time in format "ddd yyyy-mm-dd hh:mm:ss"
	static void printTime(void);

	// Get number of seconds since UNIX epoch
	static float getEpoch(void);

	// Get number of milliseconds since system start
	static uint32_t getMs(void);

	// Busy wait for ms milliseconds
	static void busyWait(uint32_t ms);

	static void add_alarm(uint32_t ms, void (*callback)(void*), void* args);

	//! Non-copyable
	Clock(Clock&) = delete;
	Clock& operator=(Clock&) = delete;

private:
	Clock(void);

	~Clock(void);

	// Update internal date
	void updateDate(void);

	// Update internal time
	void updateTime(void);

	// Get current time
	struct tm getTime(void);

	// Save date to internal variables
	void saveDate(uint8_t year, uint8_t month, uint8_t day, uint8_t weekday);

	// Save time to internal variables
	void saveTime(uint8_t hours, uint8_t minutes, uint8_t seconds);

	struct Date {
		uint8_t year;
		uint8_t month;
		uint8_t day;
		uint8_t weekday;
	};

	struct Time {
		uint8_t hours;
		uint8_t minutes;
		uint8_t seconds;
	};

	struct Date _date;
	struct Time _time;
};

#endif // CORE_TIME_H_INCLUDED_