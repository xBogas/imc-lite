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
#include "Context.h"

#include "parsers.h"
#include <STM32Ethernet.h>

namespace Tasks {
namespace UDP {

//! Very Memory heavy task > 40 KB
//TODO: Create smaller EthernetUDP class
struct Task: public AbstractTask
{
  EthernetUDP sock;
  uint16_t remote_port;
  uint8_t packetBuffer[66];

  Task(Context& c):
    AbstractTask("UDP", c)
  {
    timer = setTimer(5);
  }

  ~Task()
  { }

  void setup()
  {
    const IPAddress src_ip(192, 168, 1, 200);
    Ethernet.begin(src_ip);
    if(sock.begin(8080))
      debug("Socket ready");
  }

  void readUDP();

  //! Main loop.
  void loop()
  {
    readUDP();
  }
};

void Task::readUDP()
{
  int packetSize = sock.parsePacket();
  if (packetSize)
  {
    union
    {
      uint8_t arr[4];
      uint32_t u32;
    } conv;
    
    conv.u32 = sock.remoteIP();

    debug("Received %d from remote %d.%d.%d.%d", packetSize, 
      conv.arr[0], conv.arr[1], conv.arr[2], conv.arr[3]);

    int bfr_len = sock.read(packetBuffer, packetSize);
    IMC::Message* msg = IMC::parser(packetBuffer, bfr_len);
    if (msg == NULL)
      return;

    debug("Received %s message", msg->getName());
    dispatch(msg);
    delete msg;
  }
}

}}



TASK
TASK_EXPORT(UDP)