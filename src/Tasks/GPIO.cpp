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
    IMC::SetPWM* msg = new IMC::SetPWM();
    msg->duty_cycle = 1'000;
    msg->period = 2'000;
    msg->id = 1;
    dispatch(msg);
    delete msg;
  }
};

}}


TASK
TASK_EXPORT(GPIO)