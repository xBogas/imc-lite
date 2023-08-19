#include "Tasks.h"
#include "Launcher.h"

bool serial_ready = false;


void setup() 
{
  Serial.begin(115200);
  delay(250);
  Serial.println("Ready for debug");
  serial_ready = true;
  Launcher boot;
  boot.startTasks();
}


void loop() 
{

}