// ****************************************************************
// Copyright 2024 Universidade do Porto - Faculdade de Engenharia *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)        *
// Departamento de Engenharia Electrotécnica e de Computadores    *
// ****************************************************************
// Author: João Bogas                                             *
// ****************************************************************

#ifndef IMC_PARSERS_H_INCLUDED_
#define IMC_PARSERS_H_INCLUDED_

// IMC headers.
#include "IMC/Header.h"
#include "IMC/Message.h"

namespace IMC {
/// Parses a buffer into a Message object.
/// @param[in] bfr Buffer to parse.
/// @param[in] bfr_len Length of the buffer.
Message* parser(const uint8_t* bfr, uint16_t bfr_len);

uint16_t serialize(const Message* msg, uint8_t* bfr, uint16_t bfr_len);

Message* produce(uint16_t id);

uint16_t compute_CRC16(const uint8_t* bfr, uint16_t bfr_len);
} // namespace IMC

#endif