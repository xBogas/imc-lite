#ifndef IMC_HPP
#define IMC_HPP

#include <inttypes.h>

namespace IMC
{
    struct Header
    {
      uint16_t sync;    // 2 bytes
      uint16_t msgid;   // 2 bytes

      uint16_t size;    // 2 bytes
      // 2 bytes padding 
      
      double timestamp; // 8 bytes
      
      uint16_t src;     // 2 bytes
      uint8_t src_ent;  // 1 bytes
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