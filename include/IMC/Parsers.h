#ifndef IMC_PARSERS_H_INCLUDED_
#define IMC_PARSERS_H_INCLUDED_

// Arduino framework headers
#include <Arduino.h>

// local headers
#include "Defines.h"

void parserHeader(Header& hdr, const uint8_t* msg)
{
  memcpy(&hdr.sync, msg, 2);
  Serial.printf("Sync is %d\n", hdr.sync);

  memcpy(&hdr.msgid, msg+2, 2);
  Serial.printf("Msg id is %d\n", hdr.msgid);

  memcpy(&hdr.size, msg+4, 2);
  Serial.printf("Size is %d\n", hdr.size);

  uint64_t data;
  memcpy(&data, msg+6, 8);
  hdr.timestamp = fp64_t::to_float(data);
  Serial.print("timestamp is ");
  Serial.println(hdr.timestamp);

  memcpy(&hdr.src, msg+14, 2);
  Serial.printf("src is %d\n", hdr.src);
  
  memcpy(&hdr.src_ent, msg+16, 1);
  Serial.printf("src_ent is %d\n", hdr.src_ent);

  memcpy(&hdr.dst, msg+17, 2);
  Serial.printf("dst is %d\n", hdr.dst);

  memcpy(&hdr.dst_ent, msg+19, 2);
  Serial.printf("dst_ent is %d\n", hdr.dst_ent);
}

uint16_t compute_CRC16(const uint8_t* bfr, uint16_t bfr_len)
{
  return 0;
}

void parserPayload(const Header& hdr, const uint8_t* bfr)
{
  // Received CRC
  uint16_t r_crc = 0;
  memcpy(&r_crc, bfr + DUNE_IMC_CONST_HEADER_SIZE + hdr.size, 2);

  uint16_t crc = compute_CRC16(bfr, DUNE_IMC_CONST_HEADER_SIZE + hdr.size);
}

void parserIMC(const uint8_t* bfr, uint16_t bfr_len)
{
  Header hdr;
  parserHeader(hdr, bfr);

  if (hdr.size > bfr_len - (DUNE_IMC_CONST_HEADER_SIZE + DUNE_IMC_CONST_FOOTER_SIZE))
  {
    Serial.println("Buffer too short");
    return;
  }

  Serial.println("Parsing payload");
  parserPayload(hdr, bfr);
}



#endif