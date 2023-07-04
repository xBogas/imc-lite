#ifndef IMC_PARSERS_H_INCLUDED_
#define IMC_PARSERS_H_INCLUDED_

// Arduino framework headers
#include <Arduino.h>

// local headers
#include "defines.h"

Message* parserIMC(const uint8_t* bfr, uint16_t bfr_len);
void parserHeader(Header& hdr, const uint8_t* msg);
Message* parserPayload(const Header& hdr, const uint8_t* bfr);
Message* produce(uint16_t id);

#endif