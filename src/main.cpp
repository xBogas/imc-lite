#include <Arduino.h>
#include <STM32Ethernet.h>
#include "IMC.h"

static const IPAddress ip(10, 0, 2, 83);

static EthernetUDP sock;

static const int port = 8080;

static u8_t packetBuffer[100];  //buffer to hold incoming packet,

static void parserHeader(IMC::Header& hdr, const uint8_t* msg)
{
  memcpy(&hdr.sync, msg, 2);
  Serial.printf("Sync is %d\n", hdr.sync);

  memcpy(&hdr.msgid, msg+2, 2);
  Serial.printf("Msg id is %d\n", hdr.msgid);

  memcpy(&hdr.size, msg+4, 2);
  Serial.printf("Size is %d\n", hdr.size);

  u64_t data;
  memcpy(&data, msg+6, 8);
  hdr.timestamp = fp64_t::to_float(data);
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

void print_u64_t(const u64_t num) 
{
  Serial.print("Printing u64_t: ");
  u64_t val = num;
  char bfr[128]; 
  char *p = bfr+1;

  while (val > 0) {
    *p++ = '0' + (val % 10);
    val /= 10;
  }
  p--;

  while (p > bfr) {
    Serial.print(*p--);
  }
  Serial.println();
}

static void readUDP()
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
}


static void readSerial()
{
  while(Serial.available())
  {
    //Reading only 8 bits to test double conversion
    int size = Serial.readBytes(packetBuffer, 8);
    Serial.printf("Read %d bytes\n", size);

    // IMC::Header test;
    // parserHeader(test, packetBuffer);

    u64_t data;
    memcpy(&data, packetBuffer, 8);
    print_u64_t(data);

    float rv = fp64_t::to_float(data);
    Serial.print("Converted to float ");
    Serial.println(rv);
  }
}


void setup() 
{
  Serial.begin(9600);
  delay(500);

  Serial.println("Setup completed");
}


void loop() 
{
  readSerial();
  delay(500);
}