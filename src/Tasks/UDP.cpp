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

#include "parsers.h"
#include <STM32Ethernet.h>

struct Task: public Tasks
{
  const IPAddress src_ip;
  EthernetUDP sock;
  uint16_t remote_port;
  const IPAddress remote;
  const int port;
  uint8_t packetBuffer[100];

  Task():
    Tasks("UDP"),
    src_ip(10, 0, 2, 83),
    remote(10,0,2,81),
    port(8080)
  {
    debug("Creating task");
    timer = setTimer(100);
    if (timer != NULL)
      debug("Timer allocated");
    else
      debug("Failed to allocate timer");
  }

  ~Task()
  { }

  void start()
  {
    debug("Enabled");
    Ethernet.begin(src_ip);
    if(sock.begin(port))
      debug("Socket ready");

    timer->attachInterrupt(std::bind(&Task::loop, this));
    timer->refresh();
    timer->resume();
  }

  void readUDP();

  //! Main loop.
  void loop()
  {
    debug("Task starting");
    readUDP();
    debug("Task concluded");
  }
};

static Task worker_UDP;

void Task::readUDP()
{
  int packetSize = sock.parsePacket();
  if (packetSize) 
  {
    if (sock.remoteIP() != remote)
      return;

    debug("Received packet of size %d from remote", packetSize);
    
    memset(packetBuffer, 0, packetSize);
    int bfr_len = sock.read(packetBuffer, packetSize);

    IMC::Message* msg = IMC::parser(packetBuffer, bfr_len);
    delete msg;
  }
  else
    debug("Socket empty");
}