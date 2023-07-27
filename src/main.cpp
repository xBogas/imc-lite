#include "Tasks.h"

bool serial_ready = false;

void setup() 
{
  Serial.begin(115200);
  delay(250);
  Serial.println("Ready for debug");
  serial_ready = true;
  print_debug_msg();
  delay(500);
  start_tasks();
}


void loop() 
{

}