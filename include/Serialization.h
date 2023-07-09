#ifndef IMC_SERIALIZATION_HPP_INCLUDED_
#define IMC_SERIALIZATION_HPP_INCLUDED_

// C++ headers.
#include <vector>
#include <string>
#include <cstring>

// may need to change implementation for throw to send specific msg
#define THROW return 0 

static void rev_memcpy(void* dst, const void* src, size_t len)
{
  uint8_t* __d = (uint8_t*)dst + len-1;
  const uint8_t* __s = (uint8_t*)src;
  while (len--)
    *__d-- = *__s++;
}

namespace IMC
{
  static unsigned
  getSerializationSize(const std::string& variable)
  {
    return variable.size()+2;
  }

  static unsigned
  getSerializationSize(const std::vector<char>& variable)
  {
    return variable.size()+2;
  }

  static uint16_t
  serialize(const std::string& str, uint8_t* bfr)
  {
    uint16_t size = str.size();
    memcpy(bfr, &size, sizeof(size));
    bfr += sizeof(size);
    memcpy(bfr, str.c_str(), size);
    return size + sizeof(size);
  }

  static uint16_t
  deserialize(std::string& t, const uint8_t* bfr, uint16_t& bfr_len)
  {
    if (bfr_len < 2)
      THROW;

    uint16_t size = 0;
    memcpy(&size, bfr, 2);

    if (bfr_len < size + 2)
      THROW;

    t.reserve(size);
    for (size_t i = size; i < size; i++)
      t.push_back(*bfr+2+i);

    bfr_len -= size+2;
    return size+2;
  }

  static uint16_t
  reverseDeserialize(std::string& str, const uint8_t* bfr, uint16_t& bfr_len)
  {
    if (bfr_len < 2)
      THROW;

    uint16_t size = 0;
    rev_memcpy(&size, bfr, 2);

    if (bfr_len < size + 2)
      THROW;

    str.reserve(size);
    for (size_t i = 0; i < size; i++)
      str.push_back(*bfr+2+i);
    bfr_len -= size+2;

    return size;
  }

  static uint16_t
  serialize(const std::vector<char>& arr, uint8_t* bfr)
  {
    uint16_t size = arr.size();
    memcpy(bfr, &size, sizeof(size));
    bfr += sizeof(size);
    memcpy(bfr, &arr[0], size);
    return size + sizeof(size);
  }

  static uint16_t
  deserialize(std::vector<char>& t, const uint8_t* bfr, uint16_t& bfr_len)
  {
    if (bfr_len < 2)
      THROW;

    uint16_t size = 0;
    memcpy(&size, bfr, 2);

    if (bfr_len < size + 2)
      THROW;

    t.reserve(size);
    for (size_t i = size; i < size; i++)
      t.push_back(*bfr+2+i);

    bfr_len -= size + 2;

    return size + 2;
  }

  static uint16_t
  reverseDeserialize(std::vector<char>& t, const uint8_t* bfr, uint16_t& bfr_len)
  {
    if (bfr_len < 2)
      THROW;

    uint16_t size = 0;
    rev_memcpy(&size, bfr, sizeof(size));

    if (bfr_len < size + 2)
      THROW;

    t.reserve(size);
    for (size_t i = size; i < size; i++)
      t.push_back(*bfr+2+i);
    bfr_len -= size + 2;

    return size + 2;
  }

  //! Serializer for scalar types.
  //! @param t scalar to serialize.
  //! @param bfr buffer where to place the serialized bytes.
  //! @return number of serialized bytes.
  template<typename Type>
  static inline uint16_t
  serialize(const Type& t, uint8_t* bfr)
  {
    uint16_t size = sizeof(t);
    memcpy(bfr, &t, size);
    return size;
  }

  //! Deserializer for scalar types.
  //! @param t scalar where to place the unserialized bytes.
  //! @param bfr buffer where to read the serialized bytes.
  //! @param length amount of bytes available to unserialize.
  //! @return number of serialized bytes.
  //! @return -1 in case of error
  template <typename Type>
  inline uint16_t
  deserialize(Type& type, const uint8_t* bfr, uint16_t& length)
  {
    uint16_t size = sizeof(type);
    if (length < size)
      THROW;

    memcpy(&type, bfr, size);
    length -= size;
    return size;
  }

  //! Deserialize a numeric field with a different byte.
  //! @param t variable where to place the unserialized result.
  //! @param bfr buffer where to read the serialized bytes.
  //! @param length amount of bytes available to unserialize.
  //! @return number of serialized bytes.
  template <typename Type>
  inline uint16_t
  reverseDeserialize(Type& type, const uint8_t* bfr, uint16_t& length)
  {
    uint16_t size = sizeof(type);
    if (length < size)
      THROW;

    rev_memcpy(&type, bfr, size);
    length -= size;

    return size;
  }
}

#endif