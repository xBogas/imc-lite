#ifndef BUS_H_INCLUDED_
#define BUS_H_INCLUDED_

#include "Message.h"
#include "debug.h"

#include <unordered_map>

void _dispatch(const IMC::Message* msg);

class Queue
{
public:

  Queue(void) :
    begin(NULL),
    end(NULL),
    q_size(0)
  { 
    debug("Queue", "Created Queue");
  }

  ~Queue(void)
  { }

  void push(const IMC::Message* ref)
  {
    debug("Queue", "Inserting %p", ref);
    q_size++;
    if (begin == NULL)
    {
      debug("Queue", "Inserting first");
      begin = new List{ref, end};
      return;
    }
    else if (end == NULL)
    {
      debug("Queue", "Inserting second");
      end = new List{ref, NULL};
      return;
    }
    debug("Queue", "Appending");
    List* _ptr = new List{ref, NULL};
    end->next = _ptr;
    end = _ptr;
  }

  unsigned size()
  { return q_size; }

  bool pop(const IMC::Message*& ref)
  {
    if (size() > 0)
    {
      debug("Queue", "Pop msg");

      List* _ptr = begin->next;
      ref = begin->elem;
      delete begin;

      begin = _ptr;
      q_size--;
      return true;
    }
    return false;
  }

private:
  struct List
  {
    const IMC::Message* elem;
    List* next;
  };

  List* begin;
  List* end;
  unsigned q_size;
};


//Change to queue of shared_ptr
typedef Queue MessageQueue;

struct ListQueue
{
  MessageQueue& task_container;
  ListQueue* next;
};

class Bus
{
public:

  Bus(void);

  ~Bus(void);

  void dispatch(const IMC::Message* msg);

  void registerQueue(uint16_t msg_id, MessageQueue& task_bfr);

private:
  void operator=(const Bus&) = delete;
  Bus(const Bus&) = delete;

  

  std::unordered_map<uint16_t, ListQueue*> bus;  
};

#endif