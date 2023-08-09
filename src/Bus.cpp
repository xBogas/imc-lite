#include "Bus.h"
#include "Tasks.h"
#include "IMC_GENERATED/Definitions.hpp"

/**
 * !Note:
 * ! Bus will be shared
 * ! Tasks must only decrease 'message reader number' 
 * ! only after not needing msg anymore
*/


// struct ListQueue
// {
//   MessageQueue& task_container;
//   ListQueue* next;
// };

static std::unordered_map<uint16_t, ListQueue*> Bus;

void _dispatch(const IMC::Message* msg)
{
  if (msg == NULL)
    return;

  ListQueue* iter = Bus[msg->getId()];
  if (iter == NULL)
    return;

  while (iter != NULL)
  {
    // Copying msg for now
    // Maybe utilise shared_ptr
    IMC::Message* ptr = msg->clone();
    debug("Message", "Create copy %p", ptr);
    iter->task_container.push(ptr);
    iter = iter->next;
  }
}

void bus_subscribe(uint16_t msg_id, MessageQueue& task_bfr)
{
  ListQueue*& list = Bus[msg_id];
  if (list)
  {
    ListQueue* iter = list;
    while (iter->next != NULL)
      iter = iter->next;
    
    iter->next = new ListQueue{task_bfr, NULL};
    return;
  }

  list = new ListQueue{task_bfr, NULL};
}

//! Not functional yet
Bus::Bus(void)
{ 
  debug("Bus", "Created");
}

Bus::~Bus(void)
{ 
  debug("Bus", "Deleted");
}

void Bus::dispatch(const IMC::Message* msg)
{ 
  if (msg == NULL)
    return;

  ListQueue* iter = bus[msg->getId()];
  if (iter == NULL)
    return;

  while (iter != NULL)
  {
    iter->task_container.push(msg->clone());
    iter = iter->next;
  }
}

void Bus::registerQueue(uint16_t msg_id, MessageQueue& task_bfr)
{ 
  ListQueue*& list = bus[msg_id];
  if (list)
  {
    ListQueue* iter = list;
    while (iter->next != NULL)
      iter = iter->next;
    
    iter->next = new ListQueue{task_bfr, NULL};
    return;
  }

  list = new ListQueue{task_bfr, NULL};
}
