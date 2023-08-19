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
#include "Bus.h"
#include "IMC_GENERATED/Definitions.hpp"

namespace Tasks {
namespace PWM {

struct Task : public AbstractTask
{
  
  Task(Context& c)
    : AbstractTask("PWM", c)
  {
    debug("Creating task");
    timer = setTimer(5);
    subscribe<IMC::SetPWM>(*this, &Task::consume);
  }

  ~Task()
  { }

  void setup()
  { }

  void consume(const IMC::SetPWM* msg)
  {
    debug("Consuming SetPWM");
    debug("Set PWM %d on %d", msg->id, msg->duty_cycle);
  }

  void loop()
  {
    runConsumers();
  }

};

}}


//TASK
TASK_EXPORT(PWM)