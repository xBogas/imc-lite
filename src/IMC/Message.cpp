#include "IMC/Message.h"

namespace IMC
{
	Message::Message(void)
	{
		m_header.src = 0xffff;
		m_header.src_ent = IMC_CONST_UNK_EID;
		m_header.dst = 0xffff;
		m_header.dst_ent = IMC_CONST_UNK_EID;
		m_header.timestamp = -1.0;
	}

	Message::~Message(void)
	{ }
}
