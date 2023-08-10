#include "Launcher.h"
#include "IMC_GENERATED/Definitions.hpp"

Context Launcher::c;

typedef AbstractTask* (*Creator)(const char*, Context&);


// TODO: 
static void announceTask(AbstractTask *)
{
  
}

static AbstractTask* createTask(const char* name, Creator creator)
{
  //TODO: add task to scheduler
  AbstractTask* task = creator(name, Launcher::c);
  announceTask(task); // anounce Task in Constructor ?
  Launcher::c.task_scheduler.addTask(task);
  return task;
}

//! Exported constructores
#include "Launcher.def"


Launcher::Launcher()
{ 
  //TODO: Create Scheduler
  registerTasks();
  IMC::Announce msg;
  msg.sys_name  = "Lite - STM32";
  msg.sys_type  = IMC::SYSTEMTYPE_CCU;
  msg.owner     = 0xFFFF;
  msg.setTimeStamp();
  c.imc_bus.dispatch(&msg);
}

Launcher::~Launcher()
{ }

void Launcher::startTasks(void)
{
  Launcher::c.task_scheduler.startTasks();
}
