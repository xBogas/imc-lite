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

#define SIG_BITS_FP64 0x8000000000000000
#define EXP_BITS_FP64 0x7FF0000000000000 // 0x7F8 ?
#define FRA_BITS_FP64 0x000FFFFFE0000000

#define SIG_BITS_FP32 0x80000000
#define EXP_BITS_FP32 0x7F800000
#define FRA_BITS_FP32 0x007FFFFF

typedef double fp64_t;
typedef float fp32_t;

union fconv_t {
	float data;
	uint32_t bits;
};

static float to_float(const uint64_t& var)
{
	uint32_t sig = (var & SIG_BITS_FP64) >> 32;
	uint32_t frac = (var & FRA_BITS_FP64) >> 29;

	int16_t _exp = ((var & EXP_BITS_FP64) >> 52) - 1023;

	uint8_t exp;
	if (_exp < -127) {
		exp = 0;
		frac = 0;
	} else if (_exp >= 128) {
		exp = 255;
		frac = 0;
	} else
		exp = _exp + 127;

	fconv_t u = {.bits = (sig | (exp << 23) | frac)};
	return u.data;
}

static uint64_t to_fp64(const uint32_t var)
{
	uint64_t sig = (var & SIG_BITS_FP32);
	sig = sig << 32;

	uint8_t exp = (var & EXP_BITS_FP32) >> 23;
	uint64_t _exp = ((exp - 127) + 1023);
	_exp = _exp << 52;

	uint64_t frac = (var & FRA_BITS_FP32) << 29;
	return (sig | _exp | frac);
}

namespace IMC {
//! Header format.
struct Header {
	//! Synchronization Number.
	uint16_t sync;
	//! Message Identification Number.
	uint16_t mgid;
	//! Message size.
	uint16_t size;
	//! Source Address.
	uint16_t src;
	//! Destination Address.
	uint16_t dst;
	//! Source Entity.
	uint8_t src_ent;
	//! Destination Entity.
	uint8_t dst_ent;
	//! Time stamp.
	fp64_t timestamp;
};
} // namespace IMC

#endif