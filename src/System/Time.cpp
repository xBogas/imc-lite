// ****************************************************************
// Copyright 2024 Universidade do Porto - Faculdade de Engenharia *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)        *
// Departamento de Engenharia Electrotécnica e de Computadores    *
// ****************************************************************
// Author: João Bogas                                             *
// ****************************************************************

#include "System/Time.h"
#include "System/Error.h"
#include "System/Terminal.h"

#include "backup.h"
#include "clock.h"

#include <time.h>

static Clock* imc_rtc;

static RTC_HandleTypeDef rtc_handle = {0};

// Max value for AsynchPrediv
#define PREDIV_ASYNC_MAX RTC_PRER_PREDIV_A >> RTC_PRER_PREDIV_A_Pos

// Max value for SynchPrediv
#define PREDIV_SYNC_MAX	 RTC_PRER_PREDIV_S >> RTC_PRER_PREDIV_S_Pos

// FIXME Add these macros with compile time script
#define CURRENT_YEAR	 24
#define CURRENT_MONTH	 11
#define CURRENT_DAY		 11
#define CURRENT_HOUR	 12
#define CURRENT_MINUTE	 00
#define CURRENT_SECOND	 00

Clock::Clock(void)
{
	// Reset clock
	enableBackupDomain();
	resetBackupDomain();
	__HAL_RCC_RTC_ENABLE();

	// Init clock source for LSE
	enableClock(LSE_CLOCK);

	RCC_PeriphCLKInitTypeDef PeriphClkInitStruct = {0};
	PeriphClkInitStruct.PeriphClockSelection = RCC_PERIPHCLK_RTC;
	PeriphClkInitStruct.RTCClockSelection = RCC_RTCCLKSOURCE_LSE;

	HAL_RCCEx_PeriphCLKConfig(&PeriphClkInitStruct);
	// TODO Implement for other clock sources

	// Calculate Frequencies
	uint32_t clk_freq = LSE_VALUE;

	// Calculate the prescaler
	uint32_t async = PREDIV_ASYNC_MAX;
	uint32_t sync = (clk_freq / (async + 1)) - 1;

	// Configure the RTC peripheral
	rtc_handle.Instance = RTC;
	rtc_handle.Init.HourFormat = RTC_HOURFORMAT_24;
	rtc_handle.Init.OutPut = RTC_OUTPUT_DISABLE;
	rtc_handle.Init.OutPutPolarity = RTC_OUTPUT_POLARITY_HIGH;
	rtc_handle.Init.OutPutType = RTC_OUTPUT_TYPE_OPENDRAIN;

	rtc_handle.Init.SynchPrediv = sync;
	rtc_handle.Init.AsynchPrediv = async;

	HAL_RTC_Init(&rtc_handle);

	// Set time and date
	// RTC_DateTypeDef date = {0};
	// date.Year = CURRENT_YEAR + 100;
	// date.Month = CURRENT_MONTH - 1;
	// date.Date = CURRENT_DAY;

	// HAL_RTC_SetDate(&rtc_handle, &date, RTC_FORMAT_BIN);

	// RTC_TimeTypeDef time = {0};
	// time.Hours = CURRENT_HOUR;
	// time.Minutes = CURRENT_MINUTE;
	// time.Seconds = CURRENT_SECOND; // Compile time offset (not accurate)
	// HAL_RTC_SetTime(&rtc_handle, &time, RTC_FORMAT_BIN);

	// // FIXME Without this rtc registers are not being updated
	// // Configuration issue with APB bus
	// HAL_RTCEx_EnableBypassShadow(&rtc_handle);

	// printk("Set date: %d/%d/%d", CURRENT_DAY, CURRENT_MONTH, CURRENT_YEAR);
	// printk("Set time: %d:%d:%d", CURRENT_HOUR, CURRENT_MINUTE, CURRENT_SECOND);

	printTime();
}

Clock::~Clock(void)
{
	delete imc_rtc;
}

Clock* Clock::getInstance(void)
{
	if (imc_rtc == nullptr)
		imc_rtc = new Clock();

	return imc_rtc;
}

void Clock::setEpoch(float _epoch)
{
	time_t epoch = _epoch;
	struct tm* time = gmtime(&epoch);

	// Set time
	RTC_TimeTypeDef hal_time = {0};
	hal_time.Hours = time->tm_hour;
	hal_time.Minutes = time->tm_min;
	hal_time.Seconds = time->tm_sec;
	HAL_RTC_SetTime(&rtc_handle, &hal_time, RTC_FORMAT_BIN);

	// Set date
	RTC_DateTypeDef date;
	date.Year = time->tm_year;
	date.Month = time->tm_mon;
	date.Date = time->tm_mday;
	date.WeekDay = time->tm_wday;
	HAL_RTC_SetDate(&rtc_handle, &date, RTC_FORMAT_BIN);

	// Save to internal variables
	imc_rtc->saveDate(date.Year, date.Month, date.Date, date.WeekDay);
	imc_rtc->saveTime(hal_time.Hours, hal_time.Minutes, hal_time.Seconds);
}

void Clock::printTime(void)
{
	struct tm time = imc_rtc->getTime();

	char buf[128] = {0};
	strftime(buf, sizeof(buf), "%a %Y-%m-%d %H:%M:%S", &time);
	debug(buf);
}

float Clock::getEpoch(void)
{
	RTC_TimeTypeDef hal_time;
	RTC_DateTypeDef hal_date;

	HAL_RTC_GetTime(&rtc_handle, &hal_time, RTC_FORMAT_BIN);
	HAL_RTC_GetDate(&rtc_handle, &hal_date, RTC_FORMAT_BIN);

	struct tm time = {0}; // Initialize struct tm variable

	time.tm_year = hal_date.Year + 100;
	time.tm_mon = hal_date.Month - 1;
	time.tm_mday = hal_date.Date;
	time.tm_hour = hal_time.Hours;
	time.tm_min = hal_time.Minutes;
	time.tm_sec = hal_time.Seconds;

	return mktime(&time);
}

uint32_t Clock::getMs(void)
{
	return HAL_GetTick();
}

void Clock::busyWait(uint32_t ms)
{
	uint32_t start = getMs();
	while (getMs() - start < ms)
		;
}

void Clock::add_alarm(uint32_t ms, void (*callback)(void*), void* args)
{ }

void Clock::updateDate(void)
{
	RTC_DateTypeDef hal_date;
	HAL_RTC_GetDate(&rtc_handle, &hal_date, RTC_FORMAT_BIN);

	_date.year = hal_date.Year;
	_date.month = hal_date.Month;
	_date.day = hal_date.Date;
	_date.weekday = hal_date.WeekDay;
}

void Clock::updateTime(void)
{
	RTC_TimeTypeDef hal_time;
	HAL_RTC_GetTime(&rtc_handle, &hal_time, RTC_FORMAT_BIN);

	_time.hours = hal_time.Hours;
	_time.minutes = hal_time.Minutes;
	_time.seconds = hal_time.Seconds;
	// TODO Subseconds
}

struct tm Clock::getTime(void)
{
	updateDate();
	updateTime();

	struct tm time = {0};

	// Set date
	time.tm_year = _date.year;
	time.tm_mon = _date.month;
	time.tm_mday = _date.day;
	time.tm_wday = _date.weekday;
	// Set time
	time.tm_hour = _time.hours;
	time.tm_min = _time.minutes;
	time.tm_sec = _time.seconds;

	return time;
}

void Clock::saveDate(uint8_t year, uint8_t month, uint8_t day, uint8_t weekday)
{
	_date.year = year;
	_date.month = month;
	_date.day = day;
	_date.weekday = weekday;
}

void Clock::saveTime(uint8_t hours, uint8_t minutes, uint8_t seconds)
{
	_time.hours = hours;
	_time.minutes = minutes;
	_time.seconds = seconds;
}
