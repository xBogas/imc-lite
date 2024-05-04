// ****************************************************************
// Copyright 2024 Universidade do Porto - Faculdade de Engenharia *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)        *
// Departamento de Engenharia Electrotécnica e de Computadores    *
// ****************************************************************
// Author: João Bogas                                             *
// ****************************************************************

#ifndef ARCH_CC_H_INCLUDED_
#define ARCH_CC_H_INCLUDED_

#include "Defines.h"

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

#ifndef BYTE_ORDER
#define BYTE_ORDER LITTLE_ENDIAN
#endif

#define LWIP_PROVIDE_ERRNO 1

// Enable Struct packing
#ifdef __GNUC__

#define PACK_STRUCT_FIELD(x) x
#define PACK_STRUCT_STRUCT	 __attribute__((packed))
#define PACK_STRUCT_BEGIN
#define PACK_STRUCT_END

#else

#error "lwIP-port not defined for this compiler"

#endif

// System diagnostics

// Non-fatal information
#define LWIP_PLATFORM_DIAG(x)                                                  \
	do {                                                                       \
		debug x;                                                               \
	} while (0)

// Fatal information
#define LWIP_PLATFORM_ASSERT(x)                                                \
	do {                                                                       \
		debug(x);                                                              \
	} while (0)

#define LWIP_RAND() ((u32_t)rand())

#endif // ARCH_CC_H_INCLUDED_