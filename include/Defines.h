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

typedef uint8_t	 u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef uint64_t u64;

typedef int8_t	s8;
typedef int16_t s16;
typedef int32_t s32;
typedef int64_t s64;

#include "System/Error.h"

#ifndef IMC_DEBUG

// clang-format off

#define ASSERT_ERR(condition, ...)    \
    do {                              \
        if (condition)                \
            error(__VA_ARGS__);       \
    } while (0)

#define ASSERT_DBG(condition, ...)    \
    do {                              \
        if (condition)                \
            debug(__VA_ARGS__);       \
    } while (0)

// clang-format on

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

#define FLASH_USER_ADDR (0x081E0000)
#define FLASH_USER_SECT FLASH_SECTOR_11
#define FLASH_USER_SIZE (0x08200000 - 0x081E0000)

#ifndef FLASH_USER_ADDR
#error "FLASH_USER_ADDR not defined"
#endif

#ifndef FLASH_USER_SECT
#error "FLASH_USER_SECT not defined"
#endif

#ifndef FLASH_USER_SIZE
#error "FLASH_USER_SIZE not defined"
#endif

#endif // DEFINES_H_INCLUDED_