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

#ifdef __cplusplus

class Clock {
public:
	/// @brief Get instance of Clock
	static Clock* getInstance(void);

	/// @brief Set current time
	/// @param epoch number of seconds since UNIX epoch
	static void setEpoch(float epoch);

	/// @brief Print current time in format "ddd yyyy-mm-dd hh:mm:ss"
	static void printTime(void);

	/// @brief Get number of seconds since UNIX epoch
	static float getEpoch(void);

	/// @brief Get number of milliseconds since system start
	static uint32_t getMs(void);

	/// @brief Busy wait for ms milliseconds
	static void busyWait(uint32_t ms);

	/// @brief Add an alarm to be triggered in ms milliseconds
	/// @param ms Number of milliseconds to wait
	/// @param callback Function to call when alarm triggers
	/// @param args Arguments to pass to callback
	static void add_alarm(uint32_t ms, void (*callback)(void*), void* args);

	//! Non-copyable
	Clock(Clock&) = delete;
	Clock& operator=(Clock&) = delete;

private:
	/// @brief Constructor
	Clock(void);

	/// @brief Destructor
	~Clock(void);

	/// @brief Update internal date
	void updateDate(void);

	/// @brief Update internal time
	void updateTime(void);

	/// @brief Get current time
	struct tm getTime(void);

	/// @brief Save date to internal variables
	void saveDate(uint8_t year, uint8_t month, uint8_t day, uint8_t weekday);

	/// @brief Save time to internal variables
	void saveTime(uint8_t hours, uint8_t minutes, uint8_t seconds);

	/// @brief Internal date representation
	struct Date {
		uint8_t year;
		uint8_t month;
		uint8_t day;
		uint8_t weekday;
	};

	/// @brief Internal time representation
	struct Time {
		uint8_t hours;
		uint8_t minutes;
		uint8_t seconds;
	};

	/// @brief Internal date
	struct Date _date;
	/// @brief Internal time
	struct Time _time;
};

#endif // __cplusplus

#endif // CORE_TIME_H_INCLUDED_