#include "Launcher.h"

Context Launcher::c;

typedef AbstractTask* (*Creator)(const char*, Context&);

static AbstractTask* createTask(const char* name, Creator creator)
{
  //TODO: add task to scheduler
  return creator(name, Launcher::c);
}

//! Exported constructores
#include "Launcher.def"


Launcher::Launcher()
{ 
  //TODO: Create Scheduler
  registerTasks();
}

Launcher::~Launcher()
{ };

