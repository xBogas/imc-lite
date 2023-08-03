#include "stm32_core.h"

typedef enum
{
  SERIAL_INIT,
  SERIAL_READY,
  SERIAL_ERR
}SERIAL_STATE;


void serial_init(void);
void serial_write(char* msg);
void send_HB(void);
SERIAL_STATE serial_ready(void);