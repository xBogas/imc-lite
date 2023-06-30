#ifndef IMC_HPP
#define IMC_HPP

#include <inttypes.h>
#include <math.h>

namespace IMC
{

	struct fp64_t
	{
		uint64_t bits;

		fp64_t()
		{
			bits = 0;
		}

		const char* printable()
		{
			uint64_t ones = UINT64_MAX; // MAX long
			bool signal = false;
			signal = bits&(0x8000000000000000);

			uint16_t exp = 0;
			exp = bits&(0x7FF0000000000000);

			uint64_t fraction = 0;
			fraction = bits&(0x000FFFFFFFFFFFFF);

			if(exp == 2047 && fraction != 0)
				return "NaN";

			if(exp == 2047 && fraction == 0)
				return (signal)?"-inf":"+inf";

			//...
			return "printed";
		}

		static float toFloat(uint64_t& var) //https://stackoverflow.com/questions/60457069/converting-double-to-float-and-vice-versa-manually
		{
			uint64_t ones = UINT64_MAX; // MAX long
			bool signal = false;
			signal = var&(0x8000000000000000);

			uint16_t exp = 0;
			exp = var&(0x7FF0000000000000);

			uint64_t fraction = 0;
			fraction = var&(0x000FFFFFFFFFFFFF);

			uint8_t exp_float = exp&(0x00F);

			if(exp == 2047)
			{
				if(fraction == 0)
					return INFINITY;

				return NAN;
			}

			if(exp == 0)
			{
				if(fraction == 0)
					return 0;
				
				exp = 1;
				exp -= 1023;
			}
			else
			{
				exp -= 1023;
				fraction += 0x0010000000000000;
			}

			while (fraction & 0x0010000000000000)
			{
				fraction >> 1;
				exp--;
			}


		}
	};

	struct Header
	{
		uint16_t sync;		// 2 bytes
		uint16_t msgid;		// 2 bytes

		uint16_t size;		// 2 bytes
		// 2 bytes padding 
		
		float timestamp;	// 4 bytes
		
		uint16_t src;		// 2 bytes
		uint8_t src_ent;	// 1 bytes
		// 1 bytes padding
		
		uint16_t dst;
		uint8_t dst_ent;
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