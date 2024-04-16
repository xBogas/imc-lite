// ****************************************************************
// Copyright 2024 Universidade do Porto - Faculdade de Engenharia *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)        *
// Departamento de Engenharia Electrotécnica e de Computadores    *
// ****************************************************************
// Author: João Bogas                                             *
// ****************************************************************

#ifndef IMC_SERIALIZATION_HPP_INCLUDED_
#define IMC_SERIALIZATION_HPP_INCLUDED_

// C++ headers.
#include <cstring>
#include <string>
#include <vector>

// may need to change implementation for throw to send specific msg
#include "Defines.h"
#include "System/Error.h"

#define THROW(...)                                                             \
	do {                                                                       \
		ASSERT_DBG(false, __VA_ARGS__);                                        \
		return {};                                                             \
	} while (0)

namespace IMC {
/// Reverse memcpy
void rev_memcpy(void* dst, const void* src, size_t len);

/// Retrieve the number of bytes required to serialize a variable
/// of type 'plaintext'.
/// @param[in] variable variable.
/// @return number of bytes required to serialize variable.
static unsigned getSerializationSize(const std::string& variable)
{
	return variable.size() + 2;
}

/// Retrieve the number of bytes required to serialize a variable
/// of type 'rawdata'.
/// @param[in] variable variable.
/// @return number of bytes required to serialize variable.
static unsigned getSerializationSize(const std::vector<char>& variable)
{
	return variable.size() + 2;
}

/// Serialization for variable of type 'const char*'.
/// @param str variable to serialize.
/// @param bfr buffer where to place the serialized bytes.
/// @return number of serialized bytes.
uint16_t serialize(const char* str, uint8_t* bfr);

/// Deserialization for variable of type 'const char*'.
/// @param str variable to serialize.
/// @param bfr buffer where to place the serialized bytes.
/// @param bfr_len amount of bytes available to unserialize.
/// @return number of serialized bytes.
uint16_t deserialize(char* str, const uint8_t* bfr, uint16_t& bfr_len);

/// Serialization for variable of type 'plaintext'.
/// @param t variable to serialize.
/// @param bfr buffer where to place the serialized bytes.
/// @return number of serialized bytes.
uint16_t serialize(const std::string& str, uint8_t* bfr);

/// Deserialization for variable of type 'plaintext'.
/// @param t variable to serialize.
/// @param bfr buffer where to place the serialized bytes.
/// @return number of serialized bytes.
uint16_t deserialize(std::string& t, const uint8_t* bfr, uint16_t& bfr_len);

/// Reverse deserialization for variable of type 'plaintext'.
/// @param t variable to serialize.
/// @param bfr buffer where to place the serialized bytes.
/// @return number of serialized bytes.
uint16_t reverseDeserialize(std::string& str, const uint8_t* bfr,
							uint16_t& bfr_len);

/// Serialization for variable of type 'rawdata'.
/// @param t variable to serialize.
/// @param bfr buffer where to place the serialized bytes.
/// @return number of serialized bytes.
uint16_t serialize(const std::vector<char>& arr, uint8_t* bfr);

/// Deserialization for variable of type 'rawdata'.
/// @param t variable to serialize.
/// @param bfr buffer where to place the serialized bytes.
/// @return number of serialized bytes.
uint16_t deserialize(std::vector<char>& t, const uint8_t* bfr,
					 uint16_t& bfr_len);

/// Reverse deserialization for variable of type 'rawdata'.
/// @param t variable to serialize.
/// @param bfr buffer where to place the serialized bytes.
/// @return number of serialized bytes.
uint16_t reverseDeserialize(std::vector<char>& t, const uint8_t* bfr,
							uint16_t& bfr_len);

/// Serialization for scalar types.
/// @param t scalar to serialize.
/// @param bfr buffer where to place the serialized bytes.
/// @return number of serialized bytes.
template <typename Type>
static inline uint16_t serialize(const Type& t, uint8_t* bfr)
{
	uint16_t size = sizeof(t);
	memcpy(bfr, &t, size);
	return size;
}

/// Deserialization for scalar types.
/// @param t scalar where to place the unserialized bytes.
/// @param bfr buffer where to read the serialized bytes.
/// @param length amount of bytes available to unserialize.
/// @return number of serialized bytes.
/// @return -1 in case of error
template <typename Type>
inline uint16_t deserialize(Type& type, const uint8_t* bfr, uint16_t& length)
{
	uint16_t size = sizeof(type);
	if (length < size)
		THROW("failed to deserialize");

	memcpy(&type, bfr, size);
	length -= size;
	return size;
}

/// Reverse deserialization for scalar types.
/// @param t variable where to place the unserialized result.
/// @param bfr buffer where to read the serialized bytes.
/// @param length amount of bytes available to unserialize.
/// @return number of serialized bytes.
template <typename Type>
inline uint16_t reverseDeserialize(Type& type, const uint8_t* bfr,
								   uint16_t& length)
{
	uint16_t size = sizeof(type);
	if (length < size)
		THROW("failed to reverse deserialize scalar type");

	rev_memcpy(&type, bfr, size);
	length -= size;

	return size;
}
} // namespace IMC

#endif