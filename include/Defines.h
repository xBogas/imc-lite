// ****************************************************************
// Copyright 2024 Universidade do Porto - Faculdade de Engenharia *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)        *
// Departamento de Engenharia Electrotécnica e de Computadores    *
// ****************************************************************
// Author: João Bogas                                             *
// ****************************************************************

#ifndef DEFINES_H_INCLUDED_
#define DEFINES_H_INCLUDED_

// Ensure that the _BEGIN_STD_C and _END_STD_C macros are defined
#include "_ansi.h"

#include <stdbool.h>
#include <stdint.h>

typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef unsigned long long u64;

typedef signed char s8;
typedef signed short s16;
typedef signed int s32;
typedef signed long long s64;

#include "System/Error.h"

#ifndef IMC_DEBUG

#define ASSERT_ERR(condition, ...)                                             \
	do {                                                                       \
		if (condition) {                                                       \
			error(__VA_ARGS__);                                                \
		}                                                                      \
	} while (0)

#define ASSERT_DBG(condition, msg)                                             \
	do {                                                                       \
		if (condition)                                                         \
			debug("Assertion \"%s\" failed at line %d in %s\n", msg, __LINE__, \
				  __FILE__);                                                   \
	} while (0)

#else

#define ASSERT_ERR(condition, msg)
#define ASSERT_DBG(condition, msg)

#endif // NDEBUG

// Board definitions
#include "stm32_def.h"

#define IRQ_LOCK()		__disable_irq()
#define IRQ_UNLOCK()	__enable_irq()

// System configuration

#define MAX_THREADS		10
#define MAX_MUTEX_QUEUE 3
#define MAX_SPEW_SIZE	256

#endif // DEFINES_H_INCLUDED_