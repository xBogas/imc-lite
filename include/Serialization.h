#ifndef IMC_SERIALIZATION_HPP_INCLUDED_
#define IMC_SERIALIZATION_HPP_INCLUDED_

// C++ headers.
#include <vector>
#include <string>

namespace IMC
{
  unsigned
  getSerializationSize(const std::string& variable)
  {
    return variable.size()+2;
  }

  unsigned
  getSerializationSize(const std::vector<char>& variable)
  {
    return variable.size()+2;
  }

}
#endif