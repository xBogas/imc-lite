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
  Task(): 
    AbstractTask("GPIO")
  {
    debug("Creating task");
    timer = setTimer(500);
    if (timer != NULL)
      debug("Timer allocated");
    else
      debug("Failed to allocate timer");
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
    if ((millis() - start) > 1'000)
    {
      IMC::Message* msg = new IMC::SetPWM();

      dispatch(msg->clone());
      start = millis();
      delete msg;
    }
  }
};

//static Task worker;

}}