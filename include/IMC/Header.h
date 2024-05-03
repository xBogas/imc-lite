// ****************************************************************
// Copyright 2024 Universidade do Porto - Faculdade de Engenharia *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)        *
// Departamento de Engenharia Electrotécnica e de Computadores    *
// ****************************************************************
// Author: João Bogas                                             *
// ****************************************************************

#ifndef IMC_HEADER_H_INCLUDED_
#define IMC_HEADER_H_INCLUDED_

// C headers
#include <stdint.h>

// IMC headers.
#include "IMC/Constants.h"

typedef double fp64_t;
typedef float fp32_t;

namespace IMC {
/// Header format.
struct Header {
	/// Synchronization Number.
	uint16_t sync;
	/// Message Identification Number.
	uint16_t mgid;
	/// Message size.
	uint16_t size;
	/// Source Address.
	uint16_t src;
	/// Destination Address.
	uint16_t dst;
	/// Source Entity.
	uint8_t src_ent;
	/// Destination Entity.
	uint8_t dst_ent;
	/// Time stamp.
	fp64_t timestamp;
};
} // namespace IMC

#endif