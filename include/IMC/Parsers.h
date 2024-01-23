#ifndef IMC_PARSERS_H_INCLUDED_
#define IMC_PARSERS_H_INCLUDED_

// Local headers
#include "Header.h"
#include "Message.h"

namespace IMC
{
	//! Parses a buffer into a Message object.
	//! @param[in] bfr Buffer to parse.
	//! @param[in] bfr_len Length of the buffer.
    Message* 
	parser(const uint8_t* bfr, uint16_t bfr_len);

    uint16_t 
	serialize(const Message* msg, uint8_t* bfr, uint16_t bfr_len);

	Message*
	produce(uint16_t id);
}

#endif