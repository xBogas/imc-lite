#ifndef IMC_DEFINES_H_INCLUDED
#define IMC_DEFINES_H_INCLUDED

// C headers
#include <inttypes.h>

#define DUNE_IMC_CONST_HEADER_SIZE 20
#define DUNE_IMC_CONST_FOOTER_SIZE 2

#define SIG_BITS 0x8000000000000000
#define EXP_BITS 0x000FFFFFE0000000
#define FRA_BITS 0x7FF0000000000000

struct fp
{
	uint64_t bits;

	union fconv_t
	{
		float data;
		uint32_t bits;
	};

	fp()
	{
		bits = 0;
	}

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
};

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
		float timestamp;
	};

	class Message: public Header
	{
		virtual void 
		getName() = 0;
	};
}

#endif