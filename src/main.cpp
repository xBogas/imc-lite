#include <Arduino.h>
#include <STM32Ethernet.h>
#include "IMC.h"

#undef double

IPAddress ip(10, 0, 2, 83);

EthernetUDP sock;

unsigned int port = 8080;

uint8_t packetBuffer[100];  //buffer to hold incoming packet,

IMC::SetPWM* imc;

void parserHeader(IMC::Header& hdr, const uint8_t* msg);

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

    IMC::Header head;
    parserHeader(head, packetBuffer);

  }
  delay(100);
}

void parserHeader(IMC::Header& hdr, const uint8_t* msg)
{
  memcpy(&hdr.sync, msg, 2);
  Serial.printf("Sync is %d\n", hdr.sync);

  memcpy(&hdr.msgid, msg+2, 2);
  Serial.printf("Msg id is %d\n", hdr.msgid);

  memcpy(&hdr.size, msg+4, 2);
  Serial.printf("Size is %d\n", hdr.size);

  uint64_t data;
  memcpy(&data, msg+6, 8);
  hdr.timestamp = IMC::fp64_t::toFloat(data);
  Serial.printf("timestamp is %f\n", hdr.timestamp);

  memcpy(&hdr.src, msg+14, 2);
  Serial.printf("src is %d\n", hdr.src);
  
  memcpy(&hdr.src_ent, msg+16, 1);
  Serial.printf("src_ent is %d\n", hdr.src_ent);

  memcpy(&hdr.dst, msg+17, 2);
  Serial.printf("dst is %d\n", hdr.dst);

  memcpy(&hdr.dst_ent, msg+19, 2);
  Serial.printf("dst_ent is %d\n", hdr.dst_ent);
  
}