#ifndef IMC_SERIALIZATION_HPP_INCLUDED_
#define IMC_SERIALIZATION_HPP_INCLUDED_

// C++ headers.
#include <vector>
#include <string>
#include <cstring>

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

  static inline uint16_t
  serialize(uint16_t scalar, uint8_t* bfr)
  {
    memcpy(bfr, &scalar, 2);
    return 2;
  }

  template <typename Type>
  static inline uint16_t
  serialize(const Type t, uint8_t* bfr)
  {
    return 0;
  }

  //! Deserializer for scalar types.
  //! @param t scalar where to place the unserialized bytes.
  //! @param bfr buffer where to read the serialized bytes.
  //! @param length amount of bytes available to unserialize.
  //! @return number of serialized bytes.
  //! @throw BufferTooShort
  template <typename Type>
  static inline uint16_t
  deserialize(Type& t, const uint8_t* bfr, uint16_t& length)
  {
    return 0;
  }

  //! Deserialize a numeric field with a different byte.
  //! @param t variable where to place the unserialized result.
  //! @param bfr buffer where to read the serialized bytes.
  //! @param length amount of bytes available to unserialize.
  //! @return number of serialized bytes.
  //! @throw BufferTooShort
  template <typename Type>
  static inline uint16_t
  reverseDeserialize(Type& t, const uint8_t* bfr, uint16_t& length)
  {
    return 0;
  }
}

#endif