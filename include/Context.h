#ifndef CONTEXT_H_INCLUDED_
#define CONTEXT_H_INCLUDED_

#include "Bus.h"
#include "Scheduler.h"

struct Context
{
  Bus imc_bus;
  Scheduler task_scheduler;
};


#endif