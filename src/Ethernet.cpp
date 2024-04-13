#include <Core.h>

#include <LwIP.h>
#include <STM32Ethernet.h>

EthernetUDP sock;

class EthernetTask : public Task {
public:
	EthernetTask()
	  : Task("Ethernet", 0)
	{
		subscribe<IMC::QueryEntityParameters>(*this);
	}

	u8 bfr[1024];
	bool sendParams = false;
	IPAddress recvIP;
	u16 recvPort;

	void consume(const IMC::QueryEntityParameters* msg)
	{
		spew("Received QueryEntityParameters");
		sendParams = true;
	}

	void setup(void)
	{
		const IPAddress ip(10, 0, 2, 82);
		Ethernet.begin(ip);
		sock.begin(8080);
	}

	void read(void)
	{
		int packetSize = sock.parsePacket();
		if (packetSize) {
			union {
				uint8_t arr[4];
				uint32_t u32;
			} conv;

			recvIP = sock.remoteIP();
			recvPort = sock.remotePort();
			conv.u32 = recvIP;

			spew("Received %d from remote %d.%d.%d.%d", packetSize, conv.arr[0],
				 conv.arr[1], conv.arr[2], conv.arr[3]);

			int bfr_len = sock.read(bfr, packetSize);
			IMC::Message* msg = IMC::parser(bfr, bfr_len);
			if (msg == NULL)
				return;

			spew("Received %s message", msg->getName());
			delete msg;
		}
	}

	void send(void)
	{
		IMC::EntityParameter msg;
		msg.name = "UdpTask";
		msg.value = "No params";

		u16 len = IMC::serialize(&msg, bfr, sizeof(bfr));
		if (len == 0) {
			spew("Failed to serialize message");
			return;
		}

		sock.beginPacket(recvIP, recvPort);
		sock.write(bfr, len);
		sock.endPacket();
		sendParams = false;
	}

	void loop(void)
	{
		read();
		if (sendParams)
			send();
	}
};