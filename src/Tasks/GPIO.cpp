// ****************************************************************
// Copyright 2023 Universidade do Porto - Faculdade de Engenharia *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)        *
// Departamento de Engenharia Electrotécnica e de Computadores    *
// ****************************************************************
// Author: João Bogas                                             *
// ****************************************************************

// Core includes
#include "Tasks.h"
#include "Timer.h"

#include "IMC_GENERATED/Definitions.hpp"

namespace Tasks {
namespace GPIO {

struct Task : public AbstractTask
{
  Task(Context& c):
    AbstractTask("GPIO", c)
  {
    debug("Creating task");
    timer = setTimer(50);
  }

  ~Task()
  { }

  void setup()
  { 
    start = millis();
  }


  uint32_t start;
  void loop()
  {
    IMC::Message* msg = new IMC::SetPWM();

    dispatch(msg);
    delete msg;
  }
};

//static Task worker;

}}


TASK_EXPORT(GPIO)