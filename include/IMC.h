#ifndef IMC_HPP
#define IMC_HPP

#define DUNE_IMC_CONST_HEADER_SIZE 20
#define DUNE_IMC_CONST_FOOTER_SIZE 2


#include <inttypes.h>
#include <math.h>

#define SIG_BITS 0x8000000000000000
#define EXP_BITS 0x000FFFFFE0000000
#define FRA_BITS 0x7FF0000000000000

struct fp64_t
{
	u64_t bits;

	union fconv_t
	{
		float data;
		u32_t bits;
	};

	fp64_t()
	{
		bits = 0;
	}

	static float to_float(const u64_t& var)
	{
		u32_t sig = (var & SIG_BITS) >> 32;
		u32_t frac = (var & EXP_BITS) >> 29;

		s16_t _exp = ((var & FRA_BITS) >> 52) - 1023;

		u8_t exp;
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
	struct Header
	{
		uint16_t sync;		// 2 bytes
		uint16_t msgid;		// 2 bytes

		uint16_t size;		// 2 bytes
		uint16_t dst;			// 2 bytes padding 
		
		float timestamp;	// 4 bytes
		
		uint16_t src;			// 2 bytes
		uint8_t src_ent;	// 1 bytes
		uint8_t dst_ent;	// 1 bytes
	};

	struct SetPWM : public Header
	{
		uint8_t id;
		uint32_t period;
		uint32_t duty_cycle;

		void print()
		{
			Serial.printf("Set pwm id - %d, period - %d, duty_cycle - %d\n", id, period, duty_cycle);
			Serial.printf("Header\n");
			Serial.printf("Sync       - %d\n", sync);
			Serial.printf("msgid      - %d\n", msgid);
			Serial.printf("size       - %d\n", size);
			Serial.printf("timestamp  - %f\n", timestamp);
			Serial.printf("src        - %d\n", src);
			Serial.printf("src_ent    - %d\n", src_ent);
			Serial.printf("dst        - %d\n", dst);
			Serial.printf("dst_ent    - %d\n", dst_ent);
			Serial.println();
		}
	};

}
#endif