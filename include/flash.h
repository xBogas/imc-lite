#ifndef FLASH_H_INCLUDED_
#define FLASH_H_INCLUDED_

#include <inttypes.h>
#include <interrupt.h>

void flash_write_data(uint8_t* bfr, uint16_t bfr_len);

#endif