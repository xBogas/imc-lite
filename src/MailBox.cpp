#include "MailBox.h"
#include "Bus.h"
#include "debug.h"
#include "IMC_GENERATED/Definitions.hpp"

MailBox::MailBox(void)
{ }

//TODO: unsubsribe before deleting queue
MailBox::~MailBox(void)
{ }

//! Not a good way to do this but saves memory
MessageQueue& MailBox::createQueue(const AbstractCallback* call)
{
  receiver.emplace_back(call);
  return receiver[receiver.size()-1].container;
}

void MailBox::subscribe(uint16_t msg_id, const AbstractCallback* call)
{
  bus_subscribe(msg_id, createQueue(call));
}

void MailBox::consume(void)
{
  for (int i = 0; i < receiver.size(); i++)
  {
    const IMC::Message* to_consume = NULL;
    if(receiver[i].container.pop(to_consume))
    {
      if (to_consume == NULL)
      {
        debug("MailBox", "to_consume should not be NULL");
        return;
      }
      debug("MailBox", "running callback %p of %d", to_consume, receiver[i].container.size());
      receiver[i].consumer->callback(to_consume);

      IMC::Message* _ptr = (IMC::Message*)to_consume;
      delete _ptr; // can't delete const ptr
    }
  }
}