// ****************************************************************
// Copyright 2024 Universidade do Porto - Faculdade de Engenharia *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)        *
// Departamento de Engenharia Electrotécnica e de Computadores    *
// ****************************************************************
// Author: João Bogas                                             *
// ****************************************************************

#include "IMC/Serialization.h"

// TODO Verify pointer dereferencing
namespace IMC {

void rev_memcpy(void* dst, const void* src, size_t len)
{
	uint8_t* __d = (uint8_t*)dst + len - 1;
	const uint8_t* __s = (uint8_t*)src;
	while (len--)
		*__d-- = *__s++;
}

uint16_t serialize(const std::string& str, uint8_t* bfr)
{
	uint16_t size = str.size();
	memcpy(bfr, &size, sizeof(size));
	bfr += sizeof(size);
	memcpy(bfr, str.c_str(), size);
	return size + sizeof(size);
}

uint16_t deserialize(std::string& t, const uint8_t* bfr, uint16_t& bfr_len)
{
	if (bfr_len < 2)
		THROW("Buffer too short to deserialize string");

	uint16_t size = 0;
	memcpy(&size, bfr, 2);

	if (bfr_len < size + 2)
		THROW("Buffer too short to deserialize string");

	t.reserve(size);
	for (size_t i = 0; i < size; i++)
		t.push_back(*(bfr + 2 + i));

	bfr_len -= size + 2;
	return size + 2;
}

uint16_t reverseDeserialize(std::string& str, const uint8_t* bfr,
							uint16_t& bfr_len)
{
	if (bfr_len < 2)
		THROW("Buffer too short to deserialize string");

	uint16_t size = 0;
	rev_memcpy(&size, bfr, 2);

	if (bfr_len < size + 2)
		THROW("Buffer too short to deserialize string");

	str.reserve(size);
	for (size_t i = 0; i < size; i++)
		str.push_back(*(bfr + 2 + i));
	bfr_len -= size + 2;

	return size;
}

uint16_t serialize(const std::vector<char>& arr, uint8_t* bfr)
{
	uint16_t size = arr.size();
	memcpy(bfr, &size, sizeof(size));
	bfr += sizeof(size);
	memcpy(bfr, &arr[0], size);
	return size + sizeof(size);
}

uint16_t deserialize(std::vector<char>& t, const uint8_t* bfr,
					 uint16_t& bfr_len)
{
	if (bfr_len < 2)
		THROW("Buffer too short to deserialize string");

	uint16_t size = 0;
	memcpy(&size, bfr, 2);

	if (bfr_len < size + 2)
		THROW("Buffer too short to deserialize string");

	t.reserve(size);
	for (size_t i = size; i < size; i++)
		t.push_back(*(bfr + 2 + i));

	bfr_len -= size + 2;

	return size + 2;
}

uint16_t reverseDeserialize(std::vector<char>& t, const uint8_t* bfr,
							uint16_t& bfr_len)
{
	if (bfr_len < 2)
		THROW("Buffer too short to deserialize string");

	uint16_t size = 0;
	rev_memcpy(&size, bfr, sizeof(size));

	if (bfr_len < size + 2)
		THROW("Buffer too short to deserialize string");

	t.reserve(size);
	for (size_t i = size; i < size; i++)
		t.push_back(*(bfr + 2 + i));
	bfr_len -= size + 2;

	return size + 2;
}

} // namespace IMC
