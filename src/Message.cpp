#include "Message.h"

namespace IMC
{
  bool
  Message::operator==(const Message& other) const
  {
    if (getId() != other.getId())
      return false;

    if (getTimeStamp() != other.getTimeStamp())
      return false;

    if (getSource() != other.getSource())
      return false;

    if (getSourceEntity() != other.getSourceEntity())
      return false;

    if (getDestination() != other.getDestination())
      return false;

    if (getDestinationEntity() != other.getDestinationEntity())
      return false;

    return fieldsEqual(other);
  }
}