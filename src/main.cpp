#include <Arduino.h>
#include <STM32Ethernet.h>
#include "IMC.h"

IPAddress ip(10, 0, 2, 83);

EthernetUDP sock;

unsigned int port = 8080;

uint8_t packetBuffer[100];  //buffer to hold incoming packet,

IMC::SetPWM* imc;

void parser(const uint8_t* data, void* _struct);

void setup() {

  Serial.begin(9600);
  delay(250);

  Ethernet.begin(ip);
  if(sock.begin(port))
    Serial.println("sock ready");

  uint8_t *mac;
  mac = Ethernet.MACAddress();

  for (size_t i = 0; i < sizeof(mac); i++)
  {
    Serial.print(mac[i]);
    if(i < 3)
      Serial.print('.');
  }
  Serial.println();
}

void loop() 
{
  int packetSize = sock.parsePacket();
  if (packetSize) 
  {
    Serial.print("Received packet of size ");
    Serial.println(packetSize);
    Serial.print("From ");
    IPAddress remote = sock.remoteIP();
    
    for (int i = 0; i < 4; i++) 
    {
      Serial.print(remote[i], DEC);
      if (i < 3)
        Serial.print(".");
    }
    Serial.println();
    memset(packetBuffer, 0, packetSize);
    sock.read(packetBuffer, packetSize);

    parser(packetBuffer, imc);

  }
  delay(100);
}

void copy(uint8_t* dest, const uint8_t* src, int n)
{
  for(int i = 0; i < n; i++)
  {
    dest[i] = src[i];
  }
}


void parser(const uint8_t* msg, void* _struct)
{
  IMC::Header data;

  memcpy(&data.sync, msg, 2);
  Serial.printf("Sync is %d\n", data.sync);

  memcpy(&data.msgid, msg+2, 2);
  Serial.printf("Msg id is %d\n", data.msgid);

  memcpy(&data.size, msg+4, 2);
  Serial.printf("Size is %d\n", data.size);

  //dont know why it should have 2 padding bytes
  memcpy(&data.timestamp, msg+8, 8);
  Serial.printf("timestamp is %d\n", data.timestamp);

  memcpy(&data.src, msg+16, 2);
  Serial.printf("src is %d\n", data.src);
  
  memcpy(&data.src_ent, msg+18, 1);
  Serial.printf("src_ent is %d\n", data.src_ent);

  memcpy(&data.dst, msg+20, 2);
  Serial.printf("dst is %d\n", data.dst);

  memcpy(&data.dst_ent, msg+22, 2);
  Serial.printf("dst_ent is %d\n", data.dst_ent);
  
}