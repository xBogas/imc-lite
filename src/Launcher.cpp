#include "Launcher.h"

// TODO: when create task and declaration to Launcher.def
AbstractTask* createGPIOTask(const char* _name_, Context& _c_);

Context Launcher::c;

typedef AbstractTask* (*Creator)(const char*, Context&);

static AbstractTask* registerTasks(const char* name, Creator creator)
{
  // add task to scheduler
  return creator(name, Launcher::c);
}

Launcher::Launcher()
{ 
  // Create Scheduler
  registerTasks("GPIO", createGPIOTask)->start();
}

Launcher::~Launcher()
{ };

