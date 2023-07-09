#ifndef IMC_HEADER_H_INCLUDED_
#define IMC_HEADER_H_INCLUDED_

// C headers
#include <inttypes.h>

// IMC generated headers
#include "IMC_GENERATED/Constants.hpp"

#define SIG_BITS 0x8000000000000000
#define EXP_BITS 0x000FFFFFE0000000
#define FRA_BITS 0x7FF0000000000000

typedef double 	fp64_t;
typedef float 	fp32_t;

union fconv_t
{
	float data;
	uint32_t bits;
};

static float to_float(const uint64_t& var)
{
	uint32_t sig = (var & SIG_BITS) >> 32;
	uint32_t frac = (var & EXP_BITS) >> 29;

	int16_t _exp = ((var & FRA_BITS) >> 52) - 1023;

	uint8_t exp;
	if(_exp < -127)
	{
		exp = 0;
		frac = 0;
	}
	else if (_exp >= 128)
	{
		exp = 255;
		frac = 0;
	}
	else
		exp = _exp + 127;

	fconv_t u = { .bits = (sig|(exp<<23)|frac)};
	return u.data;
}

namespace IMC
{
	//! Header format.
	struct Header
	{
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
}

#endif