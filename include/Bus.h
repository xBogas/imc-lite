#ifndef BUS_H_INCLUDED_
#define BUS_H_INCLUDED_

#include "MailBox.h"
#include "Message.h"

void dispatch(const IMC::Message* msg);

void bus_subscribe(uint16_t msg_id, MessageQueue& task_bfr);


// TODO:
class Bus
{
public:

  Bus(void);

  ~Bus(void);

  void dispatch(const IMC::Message* msg);

  void registerQueue(uint16_t msg_id, MessageQueue* task_bfr);
};

#endif