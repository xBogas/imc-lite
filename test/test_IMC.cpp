//***************************************************************************
// Copyright 2007-2023 Universidade do Porto - Faculdade de Engenharia      *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)                  *
//***************************************************************************
// This file is part of DUNE: Unified Navigation Environment.               *
//                                                                          *
// Commercial Licence Usage                                                 *
// Licencees holding valid commercial DUNE licences may use this file in    *
// accordance with the commercial licence agreement provided with the       *
// Software or, alternatively, in accordance with the terms contained in a  *
// written agreement between you and Faculdade de Engenharia da             *
// Universidade do Porto. For licensing terms, conditions, and further      *
// information contact lsts@fe.up.pt.                                       *
//                                                                          *
// Modified European Union Public Licence - EUPL v.1.1 Usage                *
// Alternatively, this file may be used under the terms of the Modified     *
// EUPL, Version 1.1 only (the "Licence"), appearing in the file LICENCE.md *
// included in the packaging of this file. You may not use this work        *
// except in compliance with the Licence. Unless required by applicable     *
// law or agreed to in writing, software distributed under the Licence is   *
// distributed on an "AS IS" basis, WITHOUT WARRANTIES OR CONDITIONS OF     *
// ANY KIND, either express or implied. See the Licence for the specific    *
// language governing permissions and limitations at                        *
// https://github.com/LSTS/dune/blob/master/LICENCE.md and                  *
// http://ec.europa.eu/idabc/eupl.html.                                     *
//***************************************************************************
// Author: Ricardo Martins                                                  *
// Modified: João Bogas                                                     *
//***************************************************************************
// Automatically generated.                                                 *
//***************************************************************************
// IMC XML MD5: 406480ab74ab0c03199886360b1a801d                            *
//***************************************************************************

// IMC Generated Files
#include "IMC.hpp"

// Local header file
#include "Test.hpp"

int
main(void)
{
  Test test("IMC Serialization/Deserialization");

  {
    IMC::EntityState msg;
    msg.setTimeStamp(0.3006166844942112);
    msg.setSource(64477U);
    msg.setSourceEntity(49U);
    msg.setDestination(64253U);
    msg.setDestinationEntity(226U);
    msg.state = 2U;
    msg.flags = 18U;
    msg.description.assign("CXBGZQUGBKLSTVMMRHOSHCULSGPYKQBRIQDYHVJSDHCJUAFOXTKOYVHVBFNKHFFWABWHSFVCBQFGWNHQBETMLUTXXJYPDZTZAWLQRQTJKELVYUMNNGTAEEAAOZVEMVBCLGJRIXCDTRRDFBANYXDFQOSDUYTXNCPANFWMHONUSZZIQIOUISJOVKIRCLWGWIPOHPZJSIEWJMNY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityState msg;
    msg.setTimeStamp(0.9940136711801024);
    msg.setSource(40451U);
    msg.setSourceEntity(67U);
    msg.setDestination(59514U);
    msg.setDestinationEntity(214U);
    msg.state = 71U;
    msg.flags = 144U;
    msg.description.assign("UGPIQRRXNUFWCCVKYWWEFAWNIPJOOAOSJQWKHZKLSIBLUMBGEBN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityState msg;
    msg.setTimeStamp(0.6467915389323983);
    msg.setSource(7785U);
    msg.setSourceEntity(243U);
    msg.setDestination(4720U);
    msg.setDestinationEntity(225U);
    msg.state = 109U;
    msg.flags = 151U;
    msg.description.assign("YSKIWKVHJTOOFFALYKFZUCAXSEJCFQPITTMHIXLQJRXJZJKPAUMNIIMYHITXRZEYINJTRWDHQNXCLFUGEUONPEZHCLTDDYMEJDEBNWVFEHOQFTMSZMT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityState msg;
    msg.setTimeStamp(0.018656151128515153);
    msg.setSource(56907U);
    msg.setSourceEntity(105U);
    msg.setDestination(62948U);
    msg.setDestinationEntity(218U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityState msg;
    msg.setTimeStamp(0.4252837778600479);
    msg.setSource(17333U);
    msg.setSourceEntity(247U);
    msg.setDestination(41008U);
    msg.setDestinationEntity(189U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityState msg;
    msg.setTimeStamp(0.5320772920779601);
    msg.setSource(54239U);
    msg.setSourceEntity(229U);
    msg.setDestination(60843U);
    msg.setDestinationEntity(251U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityInfo msg;
    msg.setTimeStamp(0.7464362016738622);
    msg.setSource(54270U);
    msg.setSourceEntity(137U);
    msg.setDestination(48827U);
    msg.setDestinationEntity(3U);
    msg.id = 155U;
    msg.label.assign("QHLEBBTVVPLHLXPHSZMRXMAGOBMAHHLTURKWYCRMLJGFWESPTUFKVEUIZNNLOJIEWZ");
    msg.component.assign("FNEOKDFNJRUJSVKAFBJEXXAVCXRLIYOTNJXRIWBVCDPDZGYYUKBWSJFPEGNVNQMMOVCNBPISWRTTRZTAHARMJKWKFLSWQXOWEGHICOZVKUIKTZGETFGHCLAYFJSRPUICDTNMPZNGZBAJUALCBRDEHUNBCXBHHQXVELPWIOFZMEMLRAQVYEPKSTOHQAOZZPGSFVUIXNXMOYMLQIITZYBGQOHSWUYDGTAJKEQFVYMHUWCSPLMKWUDYHQRLDBQPL");
    msg.act_time = 34002U;
    msg.deact_time = 31939U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityInfo #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityInfo msg;
    msg.setTimeStamp(0.9125228782907067);
    msg.setSource(33741U);
    msg.setSourceEntity(232U);
    msg.setDestination(14608U);
    msg.setDestinationEntity(122U);
    msg.id = 193U;
    msg.label.assign("OYIRNMWDOALGQNKKIZNEEULLKTETUTONURXAPOOSXUAVNBMKVVAJHZQJQMRBGSYEMXUQE");
    msg.component.assign("QLYEYHOBFHRHXSGNJWFIYEABCNAULMWTVPKRVNEMWPPCLCGGYFBNUHUSVCCLDTWHEZPSJTJPRDXGOURRVBNUKHOMKSSHUSPKJGQVXVHIAXOUJIEWDJTBAXIDZDZFKIQLGLMQYBVYXWJZOIWVUJOAGMZHITZFLARVSNMDRMEELOHANKXWOWDJGWGXONXMBFZCBSNOAGMTDULYCKIRBFIFEDTLCVTPDBCREQYAKUPTNFQJMXQPPQCTKYQSRKZAFZ");
    msg.act_time = 38498U;
    msg.deact_time = 37525U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityInfo #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityInfo msg;
    msg.setTimeStamp(0.3303517559054344);
    msg.setSource(43778U);
    msg.setSourceEntity(163U);
    msg.setDestination(35525U);
    msg.setDestinationEntity(220U);
    msg.id = 183U;
    msg.label.assign("EHVUTXSUJAXBRUKZFJNKSEWTLSWDYLUIRMUYILDVOAYQKYKHXVSRLWMXIROATPBMXR");
    msg.component.assign("VVXAOKMXYFTTRADDHHQVZXIEUJMBZCQMPUNIZIWVZZFSKSFJMLIHOMDVKQGUXNFSHKHLVDBRBKBDYNHDLAKSKWJUPYIJQQWLSLNANPVIOLVEQMSXACZFEVCZRQBZMPAIBWGXUNSGWTDGER");
    msg.act_time = 24866U;
    msg.deact_time = 20039U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityInfo #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityInfo msg;
    msg.setTimeStamp(0.5029010302840274);
    msg.setSource(26625U);
    msg.setSourceEntity(131U);
    msg.setDestination(47386U);
    msg.setDestinationEntity(122U);
    msg.id = 150U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityInfo #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityInfo msg;
    msg.setTimeStamp(0.08915614475807099);
    msg.setSource(52260U);
    msg.setSourceEntity(195U);
    msg.setDestination(62629U);
    msg.setDestinationEntity(41U);
    msg.id = 55U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityInfo #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityInfo msg;
    msg.setTimeStamp(0.41730459624068617);
    msg.setSource(14789U);
    msg.setSourceEntity(76U);
    msg.setDestination(35730U);
    msg.setDestinationEntity(249U);
    msg.id = 60U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityInfo #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityList msg;
    msg.setTimeStamp(0.29766094920994557);
    msg.setSource(53094U);
    msg.setSourceEntity(98U);
    msg.setDestination(59422U);
    msg.setDestinationEntity(15U);
    msg.op = 62U;
    msg.list.assign("ZNFTWYZVGPWHDPFZHYCXWLCTGHLJCTJRSFIRKHERTOYOTIQDD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityList #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityList msg;
    msg.setTimeStamp(0.06297903781656877);
    msg.setSource(49240U);
    msg.setSourceEntity(112U);
    msg.setDestination(45700U);
    msg.setDestinationEntity(9U);
    msg.op = 62U;
    msg.list.assign("RKRGPZHKFDJMIXWZGUNINLWGRZTDHCUDRDYWMKTBGBERFCFDXAHMSYQSYPEYUVDLRFKJRHVPBPGSXKEEPRTLLBCJYEQOVNIQQCLIHJFWPWOSTWMADZVYPJAFMUIBOENXKPEWIXJAKUPGMSYHBVCHBNSEDGZOOQJCRXFTQGZWUMTPYTXABCTYFLAGQVIHLOYVFNSKZHOBKMJWZSD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityList #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityList msg;
    msg.setTimeStamp(0.5875894155632814);
    msg.setSource(57650U);
    msg.setSourceEntity(201U);
    msg.setDestination(36597U);
    msg.setDestinationEntity(144U);
    msg.op = 145U;
    msg.list.assign("JXLZSAQCTZNDDKT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityList #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CpuUsage msg;
    msg.setTimeStamp(0.5804195260291499);
    msg.setSource(54806U);
    msg.setSourceEntity(237U);
    msg.setDestination(2112U);
    msg.setDestinationEntity(92U);
    msg.value = 244U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CpuUsage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CpuUsage msg;
    msg.setTimeStamp(0.9429349277494621);
    msg.setSource(57068U);
    msg.setSourceEntity(126U);
    msg.setDestination(23655U);
    msg.setDestinationEntity(75U);
    msg.value = 73U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CpuUsage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CpuUsage msg;
    msg.setTimeStamp(0.7146417973479416);
    msg.setSource(33356U);
    msg.setSourceEntity(97U);
    msg.setDestination(2854U);
    msg.setDestinationEntity(11U);
    msg.value = 97U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CpuUsage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransportBindings msg;
    msg.setTimeStamp(0.6379119398122699);
    msg.setSource(54503U);
    msg.setSourceEntity(0U);
    msg.setDestination(36333U);
    msg.setDestinationEntity(132U);
    msg.consumer.assign("FOMFKEXWJDOMJGIWZJQYLRCEPQIAJWEPXVCDEOUMBGZCLPZBJPPKGPXIKDEALJUH");
    msg.message_id = 13044U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransportBindings #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransportBindings msg;
    msg.setTimeStamp(0.41360379105189815);
    msg.setSource(6805U);
    msg.setSourceEntity(107U);
    msg.setDestination(60018U);
    msg.setDestinationEntity(129U);
    msg.consumer.assign("UEZQJQDDJWSSTVFBVLIYLWHWTNKYJSKKWNGNWXFBSTCCKBTMYTKGJLIAZZ");
    msg.message_id = 21592U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransportBindings #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransportBindings msg;
    msg.setTimeStamp(0.5255450793167264);
    msg.setSource(16104U);
    msg.setSourceEntity(246U);
    msg.setDestination(20425U);
    msg.setDestinationEntity(134U);
    msg.consumer.assign("XTVADTOVUWGKPXWRCBZZLWLBPKKIVMUUECGHYAYWADMESTEQOFKWXCPNLZEMJSFKUHMGSQXPPLIYGBSOPEIHCRQOYXTHORJWINRAG");
    msg.message_id = 38718U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransportBindings #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RestartSystem msg;
    msg.setTimeStamp(0.8025366468015489);
    msg.setSource(9677U);
    msg.setSourceEntity(16U);
    msg.setDestination(47737U);
    msg.setDestinationEntity(134U);
    msg.type = 10U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RestartSystem #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RestartSystem msg;
    msg.setTimeStamp(0.5898955744558942);
    msg.setSource(19819U);
    msg.setSourceEntity(54U);
    msg.setDestination(40825U);
    msg.setDestinationEntity(69U);
    msg.type = 75U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RestartSystem #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RestartSystem msg;
    msg.setTimeStamp(0.5885692869788659);
    msg.setSource(14199U);
    msg.setSourceEntity(144U);
    msg.setDestination(35722U);
    msg.setDestinationEntity(252U);
    msg.type = 45U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RestartSystem #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevCalibrationControl msg;
    msg.setTimeStamp(0.5400659422016006);
    msg.setSource(18555U);
    msg.setSourceEntity(178U);
    msg.setDestination(61450U);
    msg.setDestinationEntity(234U);
    msg.op = 202U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevCalibrationControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevCalibrationControl msg;
    msg.setTimeStamp(0.854389458421586);
    msg.setSource(25509U);
    msg.setSourceEntity(150U);
    msg.setDestination(33113U);
    msg.setDestinationEntity(241U);
    msg.op = 88U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevCalibrationControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevCalibrationControl msg;
    msg.setTimeStamp(0.8719201092383086);
    msg.setSource(46551U);
    msg.setSourceEntity(4U);
    msg.setDestination(6462U);
    msg.setDestinationEntity(72U);
    msg.op = 145U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevCalibrationControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevCalibrationState msg;
    msg.setTimeStamp(0.8545254147992596);
    msg.setSource(18617U);
    msg.setSourceEntity(8U);
    msg.setDestination(13907U);
    msg.setDestinationEntity(53U);
    msg.total_steps = 200U;
    msg.step_number = 70U;
    msg.step.assign("ORVRYQYAHBWNJYJDSNFOIRQKYJLZLYHBUTHQVGHINVMAKUPKESWRLPBEUWFPQSVOHZCAROJHBJQUFTRZXNWZPUTPBATKXSOUZRIMFGYCVQEBOZXKBQYVMCXIEMXFXDRTNONSETODJDVKGMDJOVGDXIHRNPCZMKCEKVPYYOHIKQGEULEFWAQCTMJWLGMIQFZGUCMADGVTNSMB");
    msg.flags = 153U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevCalibrationState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevCalibrationState msg;
    msg.setTimeStamp(0.8753272029136455);
    msg.setSource(60001U);
    msg.setSourceEntity(99U);
    msg.setDestination(1929U);
    msg.setDestinationEntity(78U);
    msg.total_steps = 15U;
    msg.step_number = 105U;
    msg.step.assign("NWMINKLJLYZUGIVPGPCXVJJMPQYMXSSUGNHQTYKTFDFPHCKCVZUBVAMVXOAPAEFCUUGLATGXRTEYXFKOMTHUAMFIFAD");
    msg.flags = 163U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevCalibrationState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevCalibrationState msg;
    msg.setTimeStamp(0.6299129156940472);
    msg.setSource(48121U);
    msg.setSourceEntity(152U);
    msg.setDestination(34073U);
    msg.setDestinationEntity(156U);
    msg.total_steps = 63U;
    msg.step_number = 11U;
    msg.step.assign("NLJYNZERVMVOZWLLNFIDPKRHTNEY");
    msg.flags = 106U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevCalibrationState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityActivationState msg;
    msg.setTimeStamp(0.5790043242065117);
    msg.setSource(9391U);
    msg.setSourceEntity(108U);
    msg.setDestination(7355U);
    msg.setDestinationEntity(98U);
    msg.state = 79U;
    msg.error.assign("XGZICDWIFRVBULPDQOAUOUSSJKZRKPOXMUAFGBYQCAVHMARMIQHNFANQPDEHICFRQLUQOHHJPJTYGUZVYOISCUDLSZYAYDGMYXCCPNXZIVJQNERIFZCWMLRLTBVCDUZSKSOAENKXBRWEFTNFHOGWHJOLYHHNHTGB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityActivationState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityActivationState msg;
    msg.setTimeStamp(0.9353516653596712);
    msg.setSource(38741U);
    msg.setSourceEntity(85U);
    msg.setDestination(51356U);
    msg.setDestinationEntity(158U);
    msg.state = 90U;
    msg.error.assign("WKXJSVNQJABFIZAHCUHRDILBLGD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityActivationState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityActivationState msg;
    msg.setTimeStamp(0.7640550418075597);
    msg.setSource(9604U);
    msg.setSourceEntity(138U);
    msg.setDestination(64369U);
    msg.setDestinationEntity(56U);
    msg.state = 42U;
    msg.error.assign("CYIGZTKQLKHYMYTQKWYZQEHSNGLKZEWCORWUBDHLORXEPLMBGWFDISVVBJCLFJONJGPZIBNNYOZJVELRAMLYDDHSONGHMGIVMCARQILZXBTTUBRAFSWXRBYXMZUDYKUTDEXSLJVRQOXHTCDLTNVEJVFEVXOJPNZQUAW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityActivationState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityActivationState msg;
    msg.setTimeStamp(0.32229218343036814);
    msg.setSource(5163U);
    msg.setSourceEntity(47U);
    msg.setDestination(42853U);
    msg.setDestinationEntity(183U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityActivationState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityActivationState msg;
    msg.setTimeStamp(0.8275299865331792);
    msg.setSource(32596U);
    msg.setSourceEntity(200U);
    msg.setDestination(11436U);
    msg.setDestinationEntity(249U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityActivationState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityActivationState msg;
    msg.setTimeStamp(0.869289267003417);
    msg.setSource(20360U);
    msg.setSourceEntity(137U);
    msg.setDestination(16500U);
    msg.setDestinationEntity(246U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityActivationState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleOperationalLimits msg;
    msg.setTimeStamp(0.21458285280529654);
    msg.setSource(18642U);
    msg.setSourceEntity(222U);
    msg.setDestination(62254U);
    msg.setDestinationEntity(248U);
    msg.op = 75U;
    msg.speed_min = 0.6905547800490183;
    msg.speed_max = 0.5837257647157607;
    msg.long_accel = 0.8247309073566647;
    msg.alt_max_msl = 0.443889859798563;
    msg.dive_fraction_max = 0.9768637148913462;
    msg.climb_fraction_max = 0.903011425448303;
    msg.bank_max = 0.28038687496099113;
    msg.p_max = 0.9468395006732925;
    msg.pitch_min = 0.031955929503159064;
    msg.pitch_max = 0.8248682288382392;
    msg.q_max = 0.8794892089154146;
    msg.g_min = 0.6544667544547814;
    msg.g_max = 0.6207654424342414;
    msg.g_lat_max = 0.256598553923286;
    msg.rpm_min = 0.9520801017165357;
    msg.rpm_max = 0.1269833672066112;
    msg.rpm_rate_max = 0.3945119922204158;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleOperationalLimits #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleOperationalLimits msg;
    msg.setTimeStamp(0.9919495483365107);
    msg.setSource(19345U);
    msg.setSourceEntity(107U);
    msg.setDestination(32203U);
    msg.setDestinationEntity(19U);
    msg.op = 178U;
    msg.speed_min = 0.9940522131092197;
    msg.speed_max = 0.950857542421641;
    msg.long_accel = 0.5560974133379533;
    msg.alt_max_msl = 0.9968714824040984;
    msg.dive_fraction_max = 0.985160686083785;
    msg.climb_fraction_max = 0.11581552189807431;
    msg.bank_max = 0.8847397785345245;
    msg.p_max = 0.1471705848852044;
    msg.pitch_min = 0.26765485121197163;
    msg.pitch_max = 0.8159230523951094;
    msg.q_max = 0.47306569574513657;
    msg.g_min = 0.8805647037451588;
    msg.g_max = 0.6930321076309983;
    msg.g_lat_max = 0.4099871064945769;
    msg.rpm_min = 0.030240031819593227;
    msg.rpm_max = 0.6856627058297506;
    msg.rpm_rate_max = 0.1629595282834111;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleOperationalLimits #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleOperationalLimits msg;
    msg.setTimeStamp(0.6059024482985632);
    msg.setSource(1171U);
    msg.setSourceEntity(1U);
    msg.setDestination(61411U);
    msg.setDestinationEntity(165U);
    msg.op = 24U;
    msg.speed_min = 0.2700385628030184;
    msg.speed_max = 0.5065654938893963;
    msg.long_accel = 0.5017554164101773;
    msg.alt_max_msl = 0.8277512678348674;
    msg.dive_fraction_max = 0.37517249754803916;
    msg.climb_fraction_max = 0.005761926891549196;
    msg.bank_max = 0.7649890477879432;
    msg.p_max = 0.8495240191822551;
    msg.pitch_min = 0.4354762939825769;
    msg.pitch_max = 0.06469505608915771;
    msg.q_max = 0.5448354826416443;
    msg.g_min = 0.3201489445224428;
    msg.g_max = 0.7519315618762594;
    msg.g_lat_max = 0.7372578539445074;
    msg.rpm_min = 0.1280654641027823;
    msg.rpm_max = 0.7724162724681588;
    msg.rpm_rate_max = 0.13842984947363035;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleOperationalLimits #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MsgList msg;
    msg.setTimeStamp(0.6199355156018805);
    msg.setSource(23117U);
    msg.setSourceEntity(168U);
    msg.setDestination(14807U);
    msg.setDestinationEntity(48U);
    IMC::VehicleOperationalLimits tmp_msg_0;
    tmp_msg_0.op = 24U;
    tmp_msg_0.speed_min = 0.6334336318615208;
    tmp_msg_0.speed_max = 0.4810670481130579;
    tmp_msg_0.long_accel = 0.21189547921898633;
    tmp_msg_0.alt_max_msl = 0.0938511201942257;
    tmp_msg_0.dive_fraction_max = 0.6520879488451751;
    tmp_msg_0.climb_fraction_max = 0.6811178393049039;
    tmp_msg_0.bank_max = 0.3402752150848559;
    tmp_msg_0.p_max = 0.8339381314301065;
    tmp_msg_0.pitch_min = 0.5144151251407594;
    tmp_msg_0.pitch_max = 0.6304210365550236;
    tmp_msg_0.q_max = 0.6154774369500338;
    tmp_msg_0.g_min = 0.6339621927264308;
    tmp_msg_0.g_max = 0.40970523478278664;
    tmp_msg_0.g_lat_max = 0.9801370791020557;
    tmp_msg_0.rpm_min = 0.780167125406036;
    tmp_msg_0.rpm_max = 0.4151862826562771;
    tmp_msg_0.rpm_rate_max = 0.6712266245522769;
    msg.msgs.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MsgList #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MsgList msg;
    msg.setTimeStamp(0.21676246009968692);
    msg.setSource(65449U);
    msg.setSourceEntity(209U);
    msg.setDestination(20208U);
    msg.setDestinationEntity(143U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MsgList #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MsgList msg;
    msg.setTimeStamp(0.39172345460044977);
    msg.setSource(36367U);
    msg.setSourceEntity(184U);
    msg.setDestination(47237U);
    msg.setDestinationEntity(198U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MsgList #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SimulatedState msg;
    msg.setTimeStamp(0.7186219581806976);
    msg.setSource(26656U);
    msg.setSourceEntity(227U);
    msg.setDestination(4972U);
    msg.setDestinationEntity(163U);
    msg.lat = 0.33093907039264825;
    msg.lon = 0.024208450100472123;
    msg.height = 0.6023031167528916;
    msg.x = 0.8570897899359627;
    msg.y = 0.9753105471704014;
    msg.z = 0.49694898920579145;
    msg.phi = 0.0844763557753575;
    msg.theta = 0.4332692137818339;
    msg.psi = 0.8905024487867503;
    msg.u = 0.19808715729016013;
    msg.v = 0.37085758213412945;
    msg.w = 0.4904207278378453;
    msg.p = 0.01730379715327257;
    msg.q = 0.16358385124280372;
    msg.r = 0.5797674766822769;
    msg.svx = 0.7960719431001583;
    msg.svy = 0.49289569789398735;
    msg.svz = 0.4590948623149208;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SimulatedState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SimulatedState msg;
    msg.setTimeStamp(0.9303288760040423);
    msg.setSource(49014U);
    msg.setSourceEntity(156U);
    msg.setDestination(15235U);
    msg.setDestinationEntity(107U);
    msg.lat = 0.7445054632656822;
    msg.lon = 0.17727870058728834;
    msg.height = 0.6964013201805314;
    msg.x = 0.26516940375341846;
    msg.y = 0.38925755004338536;
    msg.z = 0.6960051914167724;
    msg.phi = 0.05649427327727574;
    msg.theta = 0.4890574931397954;
    msg.psi = 0.0010305059156457963;
    msg.u = 0.5930074465016347;
    msg.v = 0.9820493409790818;
    msg.w = 0.5710855904363761;
    msg.p = 0.38132898939772186;
    msg.q = 0.819600259812019;
    msg.r = 0.42672196483843383;
    msg.svx = 0.5709701082695916;
    msg.svy = 0.9916599254476508;
    msg.svz = 0.309243231325513;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SimulatedState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SimulatedState msg;
    msg.setTimeStamp(0.5165046134945859);
    msg.setSource(55491U);
    msg.setSourceEntity(51U);
    msg.setDestination(11120U);
    msg.setDestinationEntity(127U);
    msg.lat = 0.7646792821689556;
    msg.lon = 0.5233337689893348;
    msg.height = 0.220471662239637;
    msg.x = 0.6594323343634466;
    msg.y = 0.6318526553946007;
    msg.z = 0.16591205032479106;
    msg.phi = 0.5270505689149527;
    msg.theta = 0.8301686499041018;
    msg.psi = 0.2165788905706083;
    msg.u = 0.03943683974177459;
    msg.v = 0.8111924575541465;
    msg.w = 0.02781197129376245;
    msg.p = 0.7571931375296208;
    msg.q = 0.6112001865966471;
    msg.r = 0.5098633332646825;
    msg.svx = 0.5457519981691192;
    msg.svy = 0.760246891157625;
    msg.svz = 0.6408096477520305;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SimulatedState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LeakSimulation msg;
    msg.setTimeStamp(0.801729590307026);
    msg.setSource(12365U);
    msg.setSourceEntity(234U);
    msg.setDestination(29019U);
    msg.setDestinationEntity(55U);
    msg.op = 34U;
    msg.entities.assign("RPIUDTYZENUEVWRCFBBKOXTWQOCZKCECMFZGSYKMURKYCAYIMYRAEHKNXXEDMSBOTHZNZVJWQHFAITMORCQVROLZLYRYSSQGQDPSLUNDGPQPGWVYEQJUSJALNRPSIEIAFHAPOGTTJZMWVPXMJXKBPDURXVJIVOCIQOKWHSGVBLHVGEJNZWLZHDJIXWPRASBHDFMUCDZLAPTKVKULAIDMFKN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LeakSimulation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LeakSimulation msg;
    msg.setTimeStamp(0.2880805468340901);
    msg.setSource(22594U);
    msg.setSourceEntity(207U);
    msg.setDestination(41677U);
    msg.setDestinationEntity(130U);
    msg.op = 149U;
    msg.entities.assign("ZSECYRSPHORXGUIUKDHJLMAFJLQCQNAHRHEDYFYDTVYNWTXWNGOLXCSZQPKAESFCKUHUWFIOPMBKUBWFTNTSYHNEEGM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LeakSimulation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LeakSimulation msg;
    msg.setTimeStamp(0.1823611089825321);
    msg.setSource(343U);
    msg.setSourceEntity(49U);
    msg.setDestination(18680U);
    msg.setDestinationEntity(134U);
    msg.op = 85U;
    msg.entities.assign("HUMKVQLMUWNQJTAG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LeakSimulation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UASimulation msg;
    msg.setTimeStamp(0.8486635786662684);
    msg.setSource(14098U);
    msg.setSourceEntity(220U);
    msg.setDestination(31830U);
    msg.setDestinationEntity(0U);
    msg.type = 62U;
    msg.speed = 45517U;
    const signed char tmp_msg_0[] = {-66, 119, -84, -75, 111, 34, 125, 1, -55, -78, 95, -77, -95, -89, 45, 17, -8, -25, -67, 67, 28, -56, -108, 84, 41, 114};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UASimulation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UASimulation msg;
    msg.setTimeStamp(0.19114531180809757);
    msg.setSource(16328U);
    msg.setSourceEntity(203U);
    msg.setDestination(1046U);
    msg.setDestinationEntity(204U);
    msg.type = 76U;
    msg.speed = 8378U;
    const signed char tmp_msg_0[] = {-120, -113, -108, -102, -126, -126, 125, -30, -59, -53, 57, -37, 75, 36, 21, 87, -105, 12, 67, 102, -20, -113, 18, -81, 97, -53, 59, -65, -11, -85, 31, 66, 4, -109, 70, 89, -16, 39, -89, 126, -68, 113, 24, 38, -73, -117, -18, -83, -21, -17, -63, 67, -109, 92, 85, 11, 86, -52, 12, 76, -42, -62, -29, 34, -99, 122, 97, 82, 120, -10, -101, -45, 36, -59, 80, -45, -44, -26, -67, 108, -110, 50, 29, -118, -124, 103, 121, 60, 15, -66, -52, 52, 32, 59, -101, 125, 118, -64, 20, -7, -6, 81, 79, 4, 73, -74, -93, 58, -37, 43, -49, 113, 101, -10, 66, -43, -115, -84, 54, 81, 81, -113, 38, 61, 80, -18, 100, 19, -109, -70, -11, 21, -62, 89, 49, -24, 44, 4, -96, 93, 9, 114, 94, 102, 121, -102, -55, 12, -77, 123, 102, 31, -98, 83, 100, -118, -6, 115, -29, -109, -32, -110, 108, 53, -92, -84, -88, -67, -30, 42, 50, -30, 86, -109, 46, 109, 108, 75, 42, -44, 76, -68, 98, -21, 19, 108, 79, 72, 61, 74, -6, 45, -10, -53, -43};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UASimulation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UASimulation msg;
    msg.setTimeStamp(0.8470301473201807);
    msg.setSource(40533U);
    msg.setSourceEntity(144U);
    msg.setDestination(26834U);
    msg.setDestinationEntity(21U);
    msg.type = 163U;
    msg.speed = 8573U;
    const signed char tmp_msg_0[] = {-21, -7, 4, -47, 101, 102, 88, -17, 46, -90, -59, -66, -108, 39, 99, -62, -28, -105, -42, -78, -7, -53, 114, -69, 110, -37, -52, 83, -60, -20, -62, -28, 68, -117, 126, 71, 108, 50, -116, -104, -20, 61, 98, 82, 17, 43, 12, -122, 78, 73, 51, 10, 3, 9, 58, 123, -40, -1, -125, 87, -112, -61, -79, -3, 87, 82, 77, 96, -11, -74, 119, -7, 79, -64, -97, 68, -125, 42, 42, 126, -33, -95, 121, 122, -119, -78, 39, 70, -104, 14, 83, 113, 46, 79, -23, -115, 78, 67, 88, 120, -92, 109, 121, 124, 11, -91, 38, -76, -76, 113, 1, -82, -60, 52, -2, 35, -63, 106, 124, -76, -121, -31, 87, -1, 100, -23, 70, 89, 29, -121, 104, 120, 90, 76, 4, 16, 18, 34, 45, -40, -25, 41, -87, -82, -44, -64, 115, -51, -127, -69, 63, -59, -8, 29, -85, 121, 29, 123, -26, 86, 49, 22, 83, 15, 97, -103, -34, -101, -123, -97, -23, 2, -117, 52, -36, -43, -123, 111, -12, -103, 54, 0, 89, -62, 111, 119, 12, -52, -119, 85, 57, 46, -74, -125, -52, 18, 109, 94, -4, -78, -31, -108, 31, -48, 26, 98, -43, 3, 86, -113, -47, 77, 81, 89, -70, -52, -111, 102};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UASimulation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DynamicsSimParam msg;
    msg.setTimeStamp(0.8227278836318556);
    msg.setSource(64553U);
    msg.setSourceEntity(37U);
    msg.setDestination(64119U);
    msg.setDestinationEntity(75U);
    msg.op = 83U;
    msg.tas2acc_pgain = 0.1570515479185436;
    msg.bank2p_pgain = 0.9285363130136398;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DynamicsSimParam #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DynamicsSimParam msg;
    msg.setTimeStamp(0.9193305256885453);
    msg.setSource(17071U);
    msg.setSourceEntity(23U);
    msg.setDestination(52970U);
    msg.setDestinationEntity(24U);
    msg.op = 40U;
    msg.tas2acc_pgain = 0.7014438873642038;
    msg.bank2p_pgain = 0.766390047269176;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DynamicsSimParam #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DynamicsSimParam msg;
    msg.setTimeStamp(0.7971048746486428);
    msg.setSource(25406U);
    msg.setSourceEntity(141U);
    msg.setDestination(42147U);
    msg.setDestinationEntity(115U);
    msg.op = 9U;
    msg.tas2acc_pgain = 0.8186490604080338;
    msg.bank2p_pgain = 0.5391338525109834;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DynamicsSimParam #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StorageUsage msg;
    msg.setTimeStamp(0.09920944160996592);
    msg.setSource(30564U);
    msg.setSourceEntity(191U);
    msg.setDestination(46604U);
    msg.setDestinationEntity(216U);
    msg.available = 3904527993U;
    msg.value = 152U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StorageUsage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StorageUsage msg;
    msg.setTimeStamp(0.794267681285652);
    msg.setSource(14101U);
    msg.setSourceEntity(227U);
    msg.setDestination(25456U);
    msg.setDestinationEntity(41U);
    msg.available = 3240397242U;
    msg.value = 215U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StorageUsage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StorageUsage msg;
    msg.setTimeStamp(0.4597533516675778);
    msg.setSource(44479U);
    msg.setSourceEntity(234U);
    msg.setDestination(24011U);
    msg.setDestinationEntity(84U);
    msg.available = 1745815384U;
    msg.value = 49U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StorageUsage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CacheControl msg;
    msg.setTimeStamp(0.6813641636091929);
    msg.setSource(30778U);
    msg.setSourceEntity(227U);
    msg.setDestination(33083U);
    msg.setDestinationEntity(59U);
    msg.op = 227U;
    msg.snapshot.assign("FSIQKUALAXDQNJRUOPLNEWDHKBLEMHNMQHIUYOCZPPPNGVOBUT");
    IMC::NavigationUncertainty tmp_msg_0;
    tmp_msg_0.x = 0.06366551248485064;
    tmp_msg_0.y = 0.5476689680061089;
    tmp_msg_0.z = 0.14237097454742653;
    tmp_msg_0.phi = 0.4598172320216003;
    tmp_msg_0.theta = 0.0074300833804598065;
    tmp_msg_0.psi = 0.866180372166212;
    tmp_msg_0.p = 0.12554346633041413;
    tmp_msg_0.q = 0.4213571253688757;
    tmp_msg_0.r = 0.6994338748735388;
    tmp_msg_0.u = 0.6051248127111205;
    tmp_msg_0.v = 0.6832103103520298;
    tmp_msg_0.w = 0.6670886252126759;
    tmp_msg_0.bias_psi = 0.6867611006162471;
    tmp_msg_0.bias_r = 0.0635832186799854;
    msg.message.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CacheControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CacheControl msg;
    msg.setTimeStamp(0.18298832667011544);
    msg.setSource(35273U);
    msg.setSourceEntity(32U);
    msg.setDestination(62666U);
    msg.setDestinationEntity(9U);
    msg.op = 108U;
    msg.snapshot.assign("XEUBKJFWRQU");
    IMC::VerticalProfile tmp_msg_0;
    tmp_msg_0.parameter = 199U;
    tmp_msg_0.numsamples = 1U;
    IMC::ProfileSample tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.depth = 50417U;
    tmp_tmp_msg_0_0.avg = 0.3437524318588743;
    tmp_msg_0.samples.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.lat = 0.376167398607297;
    tmp_msg_0.lon = 0.8957793832861881;
    msg.message.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CacheControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CacheControl msg;
    msg.setTimeStamp(0.2368171349511885);
    msg.setSource(58884U);
    msg.setSourceEntity(105U);
    msg.setDestination(38819U);
    msg.setDestinationEntity(100U);
    msg.op = 78U;
    msg.snapshot.assign("XWWHEYAQPTBJXQBLIOOKHFZSMKYTMBZZCKNGLTZQGGEKTRRMIEAEDWODJCNBMBQYUXNLNLQETYXAHHJBCNQANOEVHHENYUVVSQKYRDOQZTAZMAGLHOLTDFKEJJUMPTPWUPYASPRQVSFPOTCRDDYSPRVCVWDRLWXJKXIOKSVGNVACGEEZBWFIXUDTSMJOHCIFYRNBXFUZDJOPZW");
    IMC::Acceleration tmp_msg_0;
    tmp_msg_0.time = 0.04641897747695012;
    tmp_msg_0.x = 0.6092820603283581;
    tmp_msg_0.y = 0.25043306437169865;
    tmp_msg_0.z = 0.3330655716394286;
    msg.message.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CacheControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LoggingControl msg;
    msg.setTimeStamp(0.024297870074628802);
    msg.setSource(14941U);
    msg.setSourceEntity(120U);
    msg.setDestination(40011U);
    msg.setDestinationEntity(246U);
    msg.op = 57U;
    msg.name.assign("OQRPWHZPREPVHZEGWQLJZXXBUZZJQPRVDXMVBWDSRBDLYFCOSLKJAYHXAXTUUJPJRYTGEQVVCBYLKMIIBVQWMNONCITNTWUMTMBKQEKIVBYCAONU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LoggingControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LoggingControl msg;
    msg.setTimeStamp(0.8200238802780524);
    msg.setSource(37332U);
    msg.setSourceEntity(2U);
    msg.setDestination(39518U);
    msg.setDestinationEntity(238U);
    msg.op = 185U;
    msg.name.assign("KKIZQLCZSLOZEMPCKDRJHXLOOGHHFOWBXEBIQSMVIABGUYVKXKYGPBSZRULGNDUYTKOQLQZYERPGQANUKJXKRTPVBTPHWVO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LoggingControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LoggingControl msg;
    msg.setTimeStamp(0.9046660057369543);
    msg.setSource(57883U);
    msg.setSourceEntity(140U);
    msg.setDestination(37380U);
    msg.setDestinationEntity(231U);
    msg.op = 111U;
    msg.name.assign("NVSZHOYKOPDRBMRYYJYLHXQJQSJKSABJDBUNFZBHIFCEZWTVIXZVLTJPOQFZMOMWGHKHPOTIXZSHSWSNYPQZQBAPSFBJRSAMWSWKBCGBD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LoggingControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogBookEntry msg;
    msg.setTimeStamp(0.6802423213177604);
    msg.setSource(35225U);
    msg.setSourceEntity(225U);
    msg.setDestination(63345U);
    msg.setDestinationEntity(246U);
    msg.type = 40U;
    msg.htime = 0.4560981253809183;
    msg.context.assign("EBFAGCSXGACQKGFDGQNTPVKDGUCKXKYXFKJWGEMUQMPXWOSLIZZDGLHNEHMEVHLGYNNIPXAJUCOMBBNXPRNADOLFJOJBBEMZJNVCDERIVWZDSQWIQPHSZJGUSNCYVTRRMTGZVRZPHUYFUNBFUIFYSEWMACTXLAUTMFWEQWUSLXDDBSRTHKVCLXVOQINUOSFRTPDIAQRCBMJEOTPWYZRBLXSATOJKOP");
    msg.text.assign("ATZNHOZBFQQBQALFZI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogBookEntry #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogBookEntry msg;
    msg.setTimeStamp(0.737331476182139);
    msg.setSource(12268U);
    msg.setSourceEntity(239U);
    msg.setDestination(62315U);
    msg.setDestinationEntity(82U);
    msg.type = 103U;
    msg.htime = 0.10556857889554627;
    msg.context.assign("CLENWVPDBCXVUVCTDKHEBVALHMZZVPFIWAXSHMUKBGJDWRKMHGIOHCKYJBEZTLSSGSIPQYFMQTRRFJSBBFFRHMXTSDUSHVSRKPWQIYPEUW");
    msg.text.assign("CNUFSTGGCMPKXZEIIKCXVYBBVXMSLHYIMWOBKYZIQNCKOCEPSHTUKFDDFLHLJDEVOLZFWGOSHZOZMDPZVDRMFJGZKBIWAXXAPBLJW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogBookEntry #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogBookEntry msg;
    msg.setTimeStamp(0.2630240219096177);
    msg.setSource(50632U);
    msg.setSourceEntity(237U);
    msg.setDestination(41409U);
    msg.setDestinationEntity(92U);
    msg.type = 152U;
    msg.htime = 0.18286302939001098;
    msg.context.assign("GTJKQOPRYAHYOFUTEDTVYFTWGUQZNGCDNKPPBLITMGWXMHUPVFZLIUACMCXFACOWLNBBJIZAMYSXMFUAZABFVNBIQYCKKKRSUNLDNYTIDKZDORLZWVCUFKSSROCPRANRUKIOKLBWAHLOBQXFDSGMGFXASJNEWWSQPJEHJIGCXVZPMGSTVJZDUCEREOPOHKX");
    msg.text.assign("KIGRVIJEWFNRSFQQUUXZZADBZNZWNRRQMXTCJRCHPKQHQBEQCVBHFRJJOJGGLCPELPVWONUBIKECAEEGRKUYWAPWVXOUDZILCHGWMOPTYBEEVAIVGMMUWYQSALZCZSTNIMQJIMYWDFTLYIXOZDZVSINSFHXTTOMGXPSJNCW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogBookEntry #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogBookControl msg;
    msg.setTimeStamp(0.8529896778006109);
    msg.setSource(60058U);
    msg.setSourceEntity(61U);
    msg.setDestination(39925U);
    msg.setDestinationEntity(15U);
    msg.command = 227U;
    msg.htime = 0.489823731808104;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 48U;
    tmp_msg_0.htime = 0.07933535087168575;
    tmp_msg_0.context.assign("IIVBGLVZSSDEAHEWPNQAHIALLVVMGF");
    tmp_msg_0.text.assign("DHYYHDWBRXQREVISZFOREUGJGAWQXYUTQZHPJCFJSMHMIRPKOBVKJCJGKMODKLKFNCEWDGNINCPIDDADHYQNMKOZOSEBSGKPERVNZWGLQYXETWMYXXUAGYALJLCRLRASFVDTZNFOBHEDWIOEJTDVFWATRXBQIKEHBMTVBQVGFPRGICJBYVIBULAMUBCSNGTVLJZNQPWUTAOMXMWZAZPOA");
    msg.msg.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogBookControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogBookControl msg;
    msg.setTimeStamp(0.15859146935823998);
    msg.setSource(26832U);
    msg.setSourceEntity(37U);
    msg.setDestination(28854U);
    msg.setDestinationEntity(64U);
    msg.command = 178U;
    msg.htime = 0.07580640006696426;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogBookControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogBookControl msg;
    msg.setTimeStamp(0.9661042130088461);
    msg.setSource(48344U);
    msg.setSourceEntity(63U);
    msg.setDestination(43916U);
    msg.setDestinationEntity(1U);
    msg.command = 235U;
    msg.htime = 0.19281569684345723;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 38U;
    tmp_msg_0.htime = 0.48388532753200564;
    tmp_msg_0.context.assign("DMVLNMRLOEZUZLVBEVWTZIXSRBSGMYXQXMSLAILYJSRBDBTZTYGHNESGQZOYVUFAEUNHKRYVCFXBYBRXKOTFDQHZZKEJOWNWSQQRGUAOKATCJCGEIVPYBHDUUQQQZPHRMKOWCNNJIVHQGIHUTJWILVAHPWSEFICQPECIKPSPAYXKFVFSBLFDNWEGMNKCOHSLNCMUXFKPOYAMBAJOWDJVZTDDWRIATLIHGXTGUGFDAYJWERPDCXX");
    tmp_msg_0.text.assign("RWYRIZYZWVYEIGONIEXLDMPEBPYEVCBSUSJDJVTUULKXWBIYEAGHTTKRRZMGUWNSONWDRKOQBEPFBOBIFMTTGFUVUQXQMPGA");
    msg.msg.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogBookControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReplayControl msg;
    msg.setTimeStamp(0.28411075702803523);
    msg.setSource(21301U);
    msg.setSourceEntity(254U);
    msg.setDestination(44924U);
    msg.setDestinationEntity(214U);
    msg.op = 0U;
    msg.file.assign("ZFCYHLKZNRKZTQTFRFZMPRKXFADBZGEKAJQTGVBOHQNXTJVCCFNTLYNXIBPGKTQVLIDBTHQBNHSSOTGCPOVHDQOJDGUBZSQDAMSFUUEIMESNBCAGFQOHXUYNGCPXDZJKELUX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReplayControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReplayControl msg;
    msg.setTimeStamp(0.614489982319471);
    msg.setSource(44063U);
    msg.setSourceEntity(239U);
    msg.setDestination(2289U);
    msg.setDestinationEntity(147U);
    msg.op = 61U;
    msg.file.assign("CABCRCNWCFQGQQFPIEREOIJULSPMMBGNOHXSCQKMHWMXDTEANMRKKWFSHIWZTQJQWVXUJBYAHJQBUFASTLTTJBLEXRWXNQHETWBXVDOGPVFQSRYEOSVLRTWPACFNGMTBHAKDSGKHPLDLUHORFEBVNZZLRKDGPILXYJQOKEKPOZDIAYFGYITVPICKZZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReplayControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReplayControl msg;
    msg.setTimeStamp(0.1553683375972328);
    msg.setSource(56656U);
    msg.setSourceEntity(199U);
    msg.setDestination(63473U);
    msg.setDestinationEntity(90U);
    msg.op = 162U;
    msg.file.assign("UVCVCYBALTHKJPUDXHEERWRCXAVNMHQCBBOWNLLU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReplayControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ClockControl msg;
    msg.setTimeStamp(0.8725877595274455);
    msg.setSource(11699U);
    msg.setSourceEntity(82U);
    msg.setDestination(56082U);
    msg.setDestinationEntity(142U);
    msg.op = 22U;
    msg.clock = 0.020806748891129212;
    msg.tz = 103;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ClockControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ClockControl msg;
    msg.setTimeStamp(0.6980068161723313);
    msg.setSource(28217U);
    msg.setSourceEntity(104U);
    msg.setDestination(37638U);
    msg.setDestinationEntity(134U);
    msg.op = 153U;
    msg.clock = 0.682908283692907;
    msg.tz = 46;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ClockControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ClockControl msg;
    msg.setTimeStamp(0.35884508129313675);
    msg.setSource(15934U);
    msg.setSourceEntity(173U);
    msg.setDestination(56203U);
    msg.setDestinationEntity(88U);
    msg.op = 101U;
    msg.clock = 0.5944622916680224;
    msg.tz = 6;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ClockControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricCTD msg;
    msg.setTimeStamp(0.527718489707112);
    msg.setSource(4678U);
    msg.setSourceEntity(13U);
    msg.setDestination(47327U);
    msg.setDestinationEntity(68U);
    msg.conductivity = 0.4014422374242991;
    msg.temperature = 0.49139923914804884;
    msg.depth = 0.48067105329445003;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricCTD #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricCTD msg;
    msg.setTimeStamp(0.18819465206471253);
    msg.setSource(51466U);
    msg.setSourceEntity(241U);
    msg.setDestination(47037U);
    msg.setDestinationEntity(62U);
    msg.conductivity = 0.865401159705755;
    msg.temperature = 0.09876952013519491;
    msg.depth = 0.9126839619798071;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricCTD #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricCTD msg;
    msg.setTimeStamp(0.15807283847448284);
    msg.setSource(27795U);
    msg.setSourceEntity(225U);
    msg.setDestination(65184U);
    msg.setDestinationEntity(123U);
    msg.conductivity = 0.14266035057559312;
    msg.temperature = 0.6854321669729682;
    msg.depth = 0.9196778023913854;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricCTD #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricTelemetry msg;
    msg.setTimeStamp(0.7892385950060151);
    msg.setSource(7753U);
    msg.setSourceEntity(241U);
    msg.setDestination(28547U);
    msg.setDestinationEntity(191U);
    msg.altitude = 0.7416034895024056;
    msg.roll = 3202U;
    msg.pitch = 1442U;
    msg.yaw = 58048U;
    msg.speed = 31552;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricTelemetry #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricTelemetry msg;
    msg.setTimeStamp(0.10940153884070636);
    msg.setSource(52565U);
    msg.setSourceEntity(110U);
    msg.setDestination(48698U);
    msg.setDestinationEntity(89U);
    msg.altitude = 0.9035673350071538;
    msg.roll = 48773U;
    msg.pitch = 1668U;
    msg.yaw = 34390U;
    msg.speed = -5984;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricTelemetry #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricTelemetry msg;
    msg.setTimeStamp(0.3655393208962423);
    msg.setSource(11407U);
    msg.setSourceEntity(81U);
    msg.setDestination(5609U);
    msg.setDestinationEntity(143U);
    msg.altitude = 0.4791486895077902;
    msg.roll = 23412U;
    msg.pitch = 64077U;
    msg.yaw = 53715U;
    msg.speed = -8297;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricTelemetry #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricSonarData msg;
    msg.setTimeStamp(0.9780563915024768);
    msg.setSource(19648U);
    msg.setSourceEntity(52U);
    msg.setDestination(36961U);
    msg.setDestinationEntity(230U);
    msg.altitude = 0.24506719924905107;
    msg.width = 0.3857187500839846;
    msg.length = 0.5444357772316858;
    msg.bearing = 0.13739417566065604;
    msg.pxl = 9231;
    msg.encoding = 31U;
    const signed char tmp_msg_0[] = {-22, 15, -66, 7, -102, 53, 92, 12, 111, -126, 91, 113, -79, 100, 17, 21, 25, -38, 46, -46, -90, -80, -16, -111, -2, -1, -104, -24, -120, -37, -54, -45, 5, 86, -97, -85, -12, -112, 115, -72, 6, 17, 38, -80, -79, 56, 6, -73, 59, 88, -5, -32, 80, 124, 81, 82, 118, -68, 40, 92, -101, 78, -85, 74, -59, 66, 72, -6, -118, -17, -3, 64, -89, 70, 46, 39, 79, -4, 28, 52, -54, -17, -19, -56, -125, -62, 110, 61, 15, 78, 37, 41, 107, -97, -46, 4, -35, -20, -113, -59, 65, -58, -90, -86, 57, -113, 7, -112, 110, -17, 98, 49, -95, -20, 61, -59, -17, 122, -65, -107, 8, -22, -119, -99, 105, -69, -128, -22, -32, 64, 68, 22, -108, 28, -7, -70, -28, -63, 103, -86, -124, 43, 56, -94, 4, -69, 116, -48, -117, 33, -75, 70, 46, -3, 40, -88, -24, -3, 15, -85, 22, -22, -116, -69, 37, -125, 119, 66, -127, -80};
    msg.sonar_data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricSonarData #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricSonarData msg;
    msg.setTimeStamp(0.45691361116305573);
    msg.setSource(56741U);
    msg.setSourceEntity(44U);
    msg.setDestination(18009U);
    msg.setDestinationEntity(44U);
    msg.altitude = 0.1264700643798996;
    msg.width = 0.4743389939168393;
    msg.length = 0.638895019112044;
    msg.bearing = 0.8176262507191987;
    msg.pxl = 32306;
    msg.encoding = 57U;
    const signed char tmp_msg_0[] = {-48, -70, -31, -100, -36, -98, -110, -30, 60, -59, -74, -104, -76, -44, 16, -71, 34, -12, -53, -57, -23, 17, 112, -83, -118, -32, -63, 78, -106, -112, 116, 55, 71, -68, 62, -77, 91, -107, 31, 33, 94, -2, 26, 123, -4, -79, -73, -127, -98, 90, -33, 101, -87, 126, -115, 38, 109, -36, 30, -18, -73, -26, 96, -23, -18, 122, 76, -84, 52, 118, 64, 62, 9, -103, 67, -4, -121, -52, -115, -106, -92, -112, 41, 67, -23, 103, -59, -55, 73, 27, -95, 122, 85, -64, -56, -14, -81, 76, 17, 2, -106, 75, 120, 10, -68, -75, 12, 117, -3, -1, -125, 96, 81, 108, 33, 35, 60, -44, 2, 122, 8, -27, 41, -29, 22, 112, 99, -99, -26, -110, -8, -44, 109, -110, 97, 87, -55, -84, -79, 85, -4, -18, -94, 6, -82, 68, 39, -113, 68, 94, 117, 115, -31, -63, -37, 116, 26, -84, 106, -75, -32, -122, 44, -89, 103, 14, -7, -26, -16, 98, -30, -15, -111, 124, 1, 94, -48, -114, 45, 114, 18, 76, 57, 63, -103, -110, -25, 46, 38, -14, 94, 94, 52, 94, -26, -64, -73, -10, 80, -105};
    msg.sonar_data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricSonarData #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricSonarData msg;
    msg.setTimeStamp(0.341341392990282);
    msg.setSource(42960U);
    msg.setSourceEntity(222U);
    msg.setDestination(59568U);
    msg.setDestinationEntity(176U);
    msg.altitude = 0.9532267388598432;
    msg.width = 0.28084502114018983;
    msg.length = 0.731956351514505;
    msg.bearing = 0.730519183750074;
    msg.pxl = 28921;
    msg.encoding = 170U;
    const signed char tmp_msg_0[] = {-72, -80, -96, -125, -73, -33, -40, -33, 28, 33, -88, 41, -80, -14, -121, 67, -47, -21, -116, 45, -10, -58, -6, -23, -28, -35, 42, -87, -63, 101, 25, 106, 83, 113, -31, 44, -3, -25, 106, -111, 83, 48, 88, -41, -42, 23, -82, 19, -57, 36, -11, -46, 40, 7, 84, -78, -29, 98, -18, -74, -122, -25, 25, -93, 35, 94, -55, 113, 78, -5, 44, -80, -84, -105, 30, 77, 56, 108, -18, -49, -7, -123, -56, -127, 64, -46, -103, -108, -102, -19};
    msg.sonar_data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricSonarData #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricEvent msg;
    msg.setTimeStamp(0.3130259769906978);
    msg.setSource(10703U);
    msg.setSourceEntity(129U);
    msg.setDestination(57510U);
    msg.setDestinationEntity(75U);
    msg.text.assign("VPQSGVAUXJZQGTF");
    msg.type = 54U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricEvent #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricEvent msg;
    msg.setTimeStamp(0.8583580530215311);
    msg.setSource(3181U);
    msg.setSourceEntity(23U);
    msg.setDestination(4133U);
    msg.setDestinationEntity(140U);
    msg.text.assign("ILRZDHTDYJIUXZDHVWUXHWCMTAIRNAMMMNOTKYBHFUWRULNOACFMVXFDSBECBYOZUNKAEWILHRSNEQGSWQYFKQGURKEMWNDCAJGQONJVPDKVVSAKIMEFWJLGSVCUXLOSGXCZQTCPEFNVPVEQOBHLVCVBIJSKLLBHIRFMFLLJYIXJXCOFQOZQWFMREAOJDQOHIGKARJNSYTGSBXHZUKPY");
    msg.type = 45U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricEvent #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricEvent msg;
    msg.setTimeStamp(0.9972250203870732);
    msg.setSource(40988U);
    msg.setSourceEntity(243U);
    msg.setDestination(46381U);
    msg.setDestinationEntity(231U);
    msg.text.assign("CKECHQPOEUZHKOZZJDJRQQXAGKNHMLYADOVRNHUVOOSJQGVPQBADJZHBUTRTMWMPFFLDJFYMFMUQRKKVDBTORYGBBLYJORXIEGZXSNLEISIVNPYPWIRABTYYYRUTFXWHTGAGIXSVSDIJMLIQXBHZZMKWNQMXVCUXCPHPUKATREIAVQWUONKBJNJPSDGTUZVENBSMFPACEIACCILJDXENGLDWLLKQGWZOFBZPYSWWCXFWVN");
    msg.type = 235U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricEvent #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VerticalProfile msg;
    msg.setTimeStamp(0.6885203103585461);
    msg.setSource(16488U);
    msg.setSourceEntity(16U);
    msg.setDestination(28842U);
    msg.setDestinationEntity(119U);
    msg.parameter = 63U;
    msg.numsamples = 149U;
    msg.lat = 0.47673316312353486;
    msg.lon = 0.723738606858885;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VerticalProfile #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VerticalProfile msg;
    msg.setTimeStamp(0.13898914673690688);
    msg.setSource(3481U);
    msg.setSourceEntity(117U);
    msg.setDestination(49698U);
    msg.setDestinationEntity(246U);
    msg.parameter = 206U;
    msg.numsamples = 210U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 6226U;
    tmp_msg_0.avg = 0.4164261191465338;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.6263343060469136;
    msg.lon = 0.1342290234097897;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VerticalProfile #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VerticalProfile msg;
    msg.setTimeStamp(0.6987916071015856);
    msg.setSource(19183U);
    msg.setSourceEntity(176U);
    msg.setDestination(6427U);
    msg.setDestinationEntity(91U);
    msg.parameter = 48U;
    msg.numsamples = 252U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 29210U;
    tmp_msg_0.avg = 0.9719439273406127;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.5270821668626529;
    msg.lon = 0.9519972747305406;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VerticalProfile #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ProfileSample msg;
    msg.setTimeStamp(0.7212144142650854);
    msg.setSource(61524U);
    msg.setSourceEntity(187U);
    msg.setDestination(50326U);
    msg.setDestinationEntity(193U);
    msg.depth = 58648U;
    msg.avg = 0.5384489612333628;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ProfileSample #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ProfileSample msg;
    msg.setTimeStamp(0.09306422960282879);
    msg.setSource(21678U);
    msg.setSourceEntity(243U);
    msg.setDestination(4178U);
    msg.setDestinationEntity(179U);
    msg.depth = 23302U;
    msg.avg = 0.5615155234260628;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ProfileSample #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ProfileSample msg;
    msg.setTimeStamp(0.5724079715637386);
    msg.setSource(57104U);
    msg.setSourceEntity(94U);
    msg.setDestination(1007U);
    msg.setDestinationEntity(159U);
    msg.depth = 30315U;
    msg.avg = 0.061230222931303646;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ProfileSample #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Heartbeat msg;
    msg.setTimeStamp(0.19920374314599743);
    msg.setSource(39099U);
    msg.setSourceEntity(21U);
    msg.setDestination(8119U);
    msg.setDestinationEntity(171U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Heartbeat #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Heartbeat msg;
    msg.setTimeStamp(0.5010820132631524);
    msg.setSource(36431U);
    msg.setSourceEntity(185U);
    msg.setDestination(23738U);
    msg.setDestinationEntity(220U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Heartbeat #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Heartbeat msg;
    msg.setTimeStamp(0.8814482458355274);
    msg.setSource(52158U);
    msg.setSourceEntity(251U);
    msg.setDestination(56381U);
    msg.setDestinationEntity(145U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Heartbeat #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Announce msg;
    msg.setTimeStamp(0.9400720546205894);
    msg.setSource(7585U);
    msg.setSourceEntity(229U);
    msg.setDestination(38596U);
    msg.setDestinationEntity(56U);
    msg.sys_name.assign("CIJPNDNNDJJPBSMSSROWTEUBKCTDMLPRTIVSJOYXBW");
    msg.sys_type = 3U;
    msg.owner = 60510U;
    msg.lat = 0.43734238503348;
    msg.lon = 0.9894323737388286;
    msg.height = 0.3140221170751457;
    msg.services.assign("SUEAULXVCZZKADWQZYAHJVNBCHPUSCYSDIHZSQKYVMQEWSJHVWNSGQRBZVHQMAKIRUFMKBSZWLTNQFZCGHUGDYOLKGDY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Announce #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Announce msg;
    msg.setTimeStamp(0.4576473168766385);
    msg.setSource(17691U);
    msg.setSourceEntity(218U);
    msg.setDestination(24277U);
    msg.setDestinationEntity(99U);
    msg.sys_name.assign("XZFNBGRZFAXNBMYNFYAXEEEHYGEFWXPUIKILLGSFTTSVWVRDQOFGLVMOOLLNNCTIBGTLKEZSCXZIAHJTRJPBAOKHRACHJPVQZJDHHQDVSDYPFRIQJGVYZPNUOJRPONIBAHQKUBCGMHOJPWGRWCUUAQMMVCUOSWEKKEDLOQLXPFYBXOTEDZTCUWGYHUADSGCWMXQVVIRMQWPTRNPXFYMYBTKNJIRVZLSSZZYKUDAWEEC");
    msg.sys_type = 249U;
    msg.owner = 58847U;
    msg.lat = 0.4723506262467463;
    msg.lon = 0.540491881249843;
    msg.height = 0.9144495773391937;
    msg.services.assign("DEQEJSZGCOTROMKJNSJFAJXYGXGFYHMXWLRIRWPDBZAKNHFADIZCNLUUKPXHLZNDBUCCOKNDVJGFIZLNEHUOWQHGIWYNVJVTVBNXWVEPLMLOMHVLMMWFSKKXKWAMCYRPNTJNYWWPHTZXZHFEUMASRAOEFIVMSGRTHQFHRLUIATQZOUVBCOZJSBKUFXYRIPYBSLDEEIYGPEXCFCYSQWTSSZUGGQQUBGVVKBPIAXI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Announce #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Announce msg;
    msg.setTimeStamp(0.878683047539075);
    msg.setSource(52316U);
    msg.setSourceEntity(229U);
    msg.setDestination(26946U);
    msg.setDestinationEntity(242U);
    msg.sys_name.assign("MTLRIPPBQDWXCHIMBUVJTIRFZPQUOWXUJLJPOTASWYSNGFFNEJIEEUBNCDBAMLHIJVZONYBRVMWVRXRQIUTMBHANOKVXIQRWKBQWRSNPJFBLRYCADU");
    msg.sys_type = 45U;
    msg.owner = 45534U;
    msg.lat = 0.0829318468580641;
    msg.lon = 0.569231014244573;
    msg.height = 0.7258164124855526;
    msg.services.assign("CCSPJAUIHNLYZVYLKSFKXCXZNKNVAPYLCPZLRPRAXBOEVOHOREUMYJEVNMTQZAJPXGPRFUWQHCJBYHGIBTEDINAODJIFMSQRIPLRVIOAPUEERGEFWHWTMBYCSNKUDDIXTXZK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Announce #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AnnounceService msg;
    msg.setTimeStamp(0.21445690258066463);
    msg.setSource(21183U);
    msg.setSourceEntity(53U);
    msg.setDestination(42079U);
    msg.setDestinationEntity(201U);
    msg.service.assign("PFPBQIIFWFQWMOZISFIYCGKAMNEKYOUEBL");
    msg.service_type = 97U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AnnounceService #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AnnounceService msg;
    msg.setTimeStamp(0.6237775389154226);
    msg.setSource(47650U);
    msg.setSourceEntity(156U);
    msg.setDestination(53913U);
    msg.setDestinationEntity(223U);
    msg.service.assign("QABDRMINNACMFBXGPKZDUTOYKYYMKTBZAILYZMABNUXBPUDXSZLXVQOVFLGTWQPAECMMCJJOGW");
    msg.service_type = 110U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AnnounceService #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AnnounceService msg;
    msg.setTimeStamp(0.10082329063473816);
    msg.setSource(19909U);
    msg.setSourceEntity(51U);
    msg.setDestination(52377U);
    msg.setDestinationEntity(144U);
    msg.service.assign("QREYWPTAPTLLJBRUWXSDDFEAUMQAHREVSXTZEVWNBHGKRYVGAFPOAFBQVXUATEWUSPOYZZCCCQ");
    msg.service_type = 174U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AnnounceService #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RSSI msg;
    msg.setTimeStamp(0.21350631533126485);
    msg.setSource(25472U);
    msg.setSourceEntity(68U);
    msg.setDestination(60560U);
    msg.setDestinationEntity(161U);
    msg.value = 0.5204009239627254;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RSSI #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RSSI msg;
    msg.setTimeStamp(0.7488820729490421);
    msg.setSource(13238U);
    msg.setSourceEntity(32U);
    msg.setDestination(17968U);
    msg.setDestinationEntity(187U);
    msg.value = 0.7388036035245281;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RSSI #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RSSI msg;
    msg.setTimeStamp(0.7665991246281);
    msg.setSource(19106U);
    msg.setSourceEntity(207U);
    msg.setDestination(16549U);
    msg.setDestinationEntity(241U);
    msg.value = 0.911820992604174;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RSSI #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VSWR msg;
    msg.setTimeStamp(0.09531753724805836);
    msg.setSource(30097U);
    msg.setSourceEntity(21U);
    msg.setDestination(14050U);
    msg.setDestinationEntity(69U);
    msg.value = 0.4532852993382305;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VSWR #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VSWR msg;
    msg.setTimeStamp(0.4045604017736313);
    msg.setSource(24704U);
    msg.setSourceEntity(57U);
    msg.setDestination(18545U);
    msg.setDestinationEntity(45U);
    msg.value = 0.00899304119484623;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VSWR #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VSWR msg;
    msg.setTimeStamp(0.9393460886433449);
    msg.setSource(63305U);
    msg.setSourceEntity(144U);
    msg.setDestination(22356U);
    msg.setDestinationEntity(234U);
    msg.value = 0.7935392557554991;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VSWR #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LinkLevel msg;
    msg.setTimeStamp(0.14519272804166172);
    msg.setSource(6401U);
    msg.setSourceEntity(10U);
    msg.setDestination(16903U);
    msg.setDestinationEntity(156U);
    msg.value = 0.8709464143955112;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LinkLevel #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LinkLevel msg;
    msg.setTimeStamp(0.6930507618818073);
    msg.setSource(34268U);
    msg.setSourceEntity(3U);
    msg.setDestination(1526U);
    msg.setDestinationEntity(249U);
    msg.value = 0.8573525946542808;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LinkLevel #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LinkLevel msg;
    msg.setTimeStamp(0.32766350989497783);
    msg.setSource(15317U);
    msg.setSourceEntity(195U);
    msg.setDestination(63813U);
    msg.setDestinationEntity(101U);
    msg.value = 0.007454655452580838;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LinkLevel #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Sms msg;
    msg.setTimeStamp(0.039277077090862034);
    msg.setSource(17781U);
    msg.setSourceEntity(79U);
    msg.setDestination(28546U);
    msg.setDestinationEntity(18U);
    msg.number.assign("TCPQPJWOKHQUHXNLCTTMWZUKJSNPKAMGSRCUVXLYAYDWDDZKWZROPZNUPETLWPIFZMBFIQPJFFXOYFAKMIDJGJOWFKGYYFVFATEUZLBZAMVQQPBSDOGKIXETRGSXLMRORY");
    msg.timeout = 15296U;
    msg.contents.assign("HQAASFJZXPXTUIQFTGKXQKAS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Sms #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Sms msg;
    msg.setTimeStamp(0.2214999992097363);
    msg.setSource(6211U);
    msg.setSourceEntity(220U);
    msg.setDestination(38863U);
    msg.setDestinationEntity(89U);
    msg.number.assign("WDTZKPBFUTBHMWOPGQXKCNVHVSYCTEKALHXACUSUIYEYAMJGDLZWBCWOKINZBDQLRTKDDQKQIXVNORTTQHQMLCXJRUGMJRPNNTSNHKCKSUPYYPSQOJFWZRMYERSAUNUZEPQPXXKVEYRBRFNOYOCZFHJNEXELJFFSIMHWFXEAIADZAVJGBMWYBVAWUCQPBLFMZASJLLDATOIBEOFSGJGDNFGHDKWTURZSCMZBCPGDEVGOVJVHUWLORIIGIM");
    msg.timeout = 169U;
    msg.contents.assign("NJOZPNNYTSCVWOJJRFQKOGUELJUMIAIFHMZLCJCMDL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Sms #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Sms msg;
    msg.setTimeStamp(0.9878283219019895);
    msg.setSource(36350U);
    msg.setSourceEntity(69U);
    msg.setDestination(21465U);
    msg.setDestinationEntity(126U);
    msg.number.assign("GQYJKRPYOQWGSMMSZWMCBFQDTBDZPMRLSKCINEQIYNWNIEEAGOBUKNEIWPLJDLCHDAFSDBPXRPTTSBTHCMKWGZVHRRCUSKAXQBMOOAVYXDMZLRCABYNXIHUPYYEUDIAGVNILUWQELRCOFARXSGTFJJOGLTOXCHVVKFQYFBWNEVMDKL");
    msg.timeout = 33086U;
    msg.contents.assign("RAWETTSXWBCPVLBOLSOQDKOBLJHOZUAPFJHPQQPGYNLNJTGFXHUTXMQWADOFSWEGWDVJNEMROKUZDMCSFGHXYRUWNH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Sms #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsTx msg;
    msg.setTimeStamp(0.3510427228788977);
    msg.setSource(42282U);
    msg.setSourceEntity(121U);
    msg.setDestination(17952U);
    msg.setDestinationEntity(86U);
    msg.seq = 2422341520U;
    msg.destination.assign("FTOMIXFTHBSAKNWNEJHOAUPOUOTCRBZHXXTJBRNNNOVZHLFPRQCEGGVVDWSDHWYSIYPVKJMTDWEQFDZTIOTKCZPSUEWIXGAQLCFUMZLBAIWFSDXVYQBIWJIEJDRQUPVNAHLLGGFZTGICQBXULGPJMSMFORRLXYSGRDYDP");
    msg.timeout = 21699U;
    const signed char tmp_msg_0[] = {-106, 61, 111, -123, -16, 107, -59, -102, -37, 92, 25, 87, 1, -126, -62, -109, 28, 15, 123, -36, 37};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsTx #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsTx msg;
    msg.setTimeStamp(0.7706705064337077);
    msg.setSource(26049U);
    msg.setSourceEntity(37U);
    msg.setDestination(17225U);
    msg.setDestinationEntity(10U);
    msg.seq = 594235915U;
    msg.destination.assign("AFOAUYSRXRTGJNNZVKCGNHEWGJHQLXODUBBQWRDTLFDZFIWXXFCRSDTNTANJHZHQPWVUTFESVRESJKIBFZKUWHXSGIEKCRNHOPLXBUUSGRIEPYJ");
    msg.timeout = 10761U;
    const signed char tmp_msg_0[] = {122, 17, 106, -113, -13, -126, -88, 58, -104, -22, -40, 0, -32, 124, -127, -35, 39, 5, -92, -10, -118, 40, 58, 17, -43, 9, -57, 15, 117, 56, -28, -74, 119, 4, -80, -119, 107, 70, 99, -128, 109, 24, 13, 107, 54, 53, 54, 38, 107, 32, -98, -101, -55, -63, 88, -40, -39, 116, -44, 86};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsTx #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsTx msg;
    msg.setTimeStamp(0.8321678887160573);
    msg.setSource(63926U);
    msg.setSourceEntity(80U);
    msg.setDestination(55233U);
    msg.setDestinationEntity(87U);
    msg.seq = 4009125920U;
    msg.destination.assign("OEBBMTBFUKMUDSMKTWUHWLEFERCCRLKAEDGXIDLRNJQNZOOPPBDPJRARYFHOXATUNGMOPHYBYDHKIHSPXWWJOQCIWGXTQKYZFSBZXFPDVTGSFZAIEYVJINLUUJZLCKQBSLEUAQTFJCQSSSAXAJVRRMTKVCRGNVTVIFXVGMXXEUYDHPMILYBOOERWNZPAUYQBZWNTV");
    msg.timeout = 58483U;
    const signed char tmp_msg_0[] = {-104, 71, -127, -75, 11, -127, -4, -117, -66, 44, 11, 96, 61, 23, -44, -113, 43, -19, -41, -106, -49, 17, 22, -100, -36, 14, 125, -114, 7, -90, -100, 44, 6, 46, -51, 119, 64, -60, -45, -35, -72, -82, 71, -28, 91, 21, -24, 54, 25, -78, 31, -29, 109, 76, -6, 66, -116, 18, -19, 113, -102, 105, -6, -85, -57, -94, 105, -83, 77, -62, -102, -67, 74, -80, -29, -36, 96, 42, -113, 125, 91, 16, -28, -55, -43, -24, 75, -59, -112, 95, -34, 45, 64, -87, 29, 79, 56, 26, -127, -62, 56, 2, -105, -36, 55, 88, -6, 123, -119, -6, 42, -90, -56, 65, 78, -57, -101, -14, 29, -38, -20, -68, 48, -40, -38, -18, 75, 48, -69, 59, 17, 8, -13, 15, 68, 105, 114, -72, 112, 98, 17, -94, 102, 11, -47, -56, 88, -9, -23, 45, -83, 72, -87, 31, -42, 125, 99, -15, -63, -41, -46, -16, 63, -49, -66, -51, -88, 21, 122, 2, -104, -81, 112, -21, 48, -23, 109, -93, 120, -62, -47, -94, -115, 104, -42, -120, -111, -34, 9, 21, -123, 105, 22, -87, -22, 4, 49, -118, 52, -84, -85, -62, 13, 58, 28, -56, -96, 125, -67, 109, 119, 118, -10, 1, 124, 111, 44, 38, -121, 59, 51};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsTx #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsRx msg;
    msg.setTimeStamp(0.3344669667675674);
    msg.setSource(41931U);
    msg.setSourceEntity(147U);
    msg.setDestination(53861U);
    msg.setDestinationEntity(135U);
    msg.source.assign("HJXICGAKSLQHBWQUUEJNRPZDSXYOUEHTMMAEMLAVOLWOPVNZWBFLDUNYSAOETJBIPYVOPELHRTEZH");
    const signed char tmp_msg_0[] = {47, -11, -40, 126, 54, 104, 102, 80, 109, 36, 18, 7, 89, 36, 23, -95, -29, -88, -72, 91, -91, 1, 87, 66, 124, -126, -128, 79, -103, -120, 0, -97, 85, -86, 11, 53, -10, -80, -113, -108, -125, -50, 121, 121, 4, -99};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsRx #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsRx msg;
    msg.setTimeStamp(0.30177366566541397);
    msg.setSource(8602U);
    msg.setSourceEntity(193U);
    msg.setDestination(42497U);
    msg.setDestinationEntity(223U);
    msg.source.assign("VHDGCYYAFMCNNSKBBBVMTRPARBYSFKRSLYNDSVJYFQLZGXTOVPLAFOGWHPXWJGICAOJGYKVBINSECVVZKZ");
    const signed char tmp_msg_0[] = {81, 51, -33, 40, -2, -92, -4, -110, -99, -100, -113, 1, -73, 93, 70, -123, 23, -17, 73, -27, -56, -58, 18, -43, 82, 124, 56, 91, 84, -3, -15, 68, 61, -29, -46, 44, -21, 121, -36, -68, 106, -38, 84, 46, -78, 123, 9, -90, 68, -81, -2, 119, -113, -124, -89, 77, -52, -127, -106, -2, -56, 124, -78, -25, 29, 124, 82, 22, 78, 17, -62, 98, 111, -57, 102, 44, 38, 111, -93, 121, -58, -115, -62, -63, -74, -33, -110, -123, 44, -122, 108, -123, -54, -86, -46, -68, -72, -91, 63, -28, 91, 42, -100, 40, 12, 60, -38, -121, 64, 87, -28, -106, -93, -72, -86, 120, 54, -12, 86, 56, 107, 125, 7, 98, -88, 37, 107, -116, -77, -50, 26, 34, 55, 107, -112, -90, 54, -92, -84, 76, 25, -7, -10, 117, 97, 123, -38, 14, 121, 61, 75, -96, 38, 78, 50, 64, 1, 120};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsRx #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsRx msg;
    msg.setTimeStamp(0.4697190514358244);
    msg.setSource(62275U);
    msg.setSourceEntity(54U);
    msg.setDestination(45873U);
    msg.setDestinationEntity(224U);
    msg.source.assign("XIRFKBCEGCECFCQOATKENVFSFYLHWAOIJVAZWJLSTUSDPTGABCFOXQTZOEBXLIGMMMRZJDDVZTYMYBBUKYCWUQUVMSEEZZHPRYRPYRUNDFOXLAKTGEIHRDNIVKJYSHMYVJHAGLVQTNQHFIPDGWKWHISJBUHSXUKLDPEHLRJDQICOPBOOUQKXISKANWJXNADSVZNHLOXLCGZOXZMTNEYNEW");
    const signed char tmp_msg_0[] = {105, -111, -56, -115, 49, 124, -121, 68, 109, 31, 111, 102, 107, 18, 88, 58, 60, -90, 7, 76, 116, -94, -101, -16, 70, -34, 98, -70, 108, 121, 102, 25, 40, 87, 109, -102, -21, -64, -34, 69, 15, 122, 28, 103, -3, 73, -55, -108, -114, -111, 57, 80, -93, -59, -101, 67, 58, -2, 111, -109, -65, 95, -9, 122, -48, 126, -115, -61, 91, -56, 126, 85, -24, 37, 125, 54, 124, -20, -85, -102, 54, 75, 104, 32, 121, 114, 120, 96, -126, -112, -128, 106, 95, 61, -78, -13, 111, -81, 31, -23, -76, 99, -10, -63, 80, -45, 29, -30, 88, -93, -120, -92, -25, -109, -18, 117, -42, -119, -24, 57, 110, -42, 3, -26, -49, 72, -105, 106, 96, -50, 89, 67, 52, -3, -65, 91, 37, -118, 52, 89, 11, 53, -92, -15, -100, -104, 96, -29, 102, -62, -23, 55, 34, -112, -81, -57, -29, -36, 51, -9, 120, -36, -84, 50, -45, -34, -58, 15, -113, 76, -103, -125, 56, 62, 96, -115, 18, 46, -43, -110, 12, -80, -44, -100, -115, 7, -54, 57, 121, -119, 19, 46, -41, -14, -81, 99, -85, -123, 31, 93, 78, 105, 99, -40, 60, 119, 50, 126, -124, -14, -34, -23, 91, -12, -125, 110, 65, -72, 98, -36, -98, -1, 93, 76, 113, 20, 64, 1, -16, 95, -57, -81, -113, -13, 36, 59, 74, 76};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsRx #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsState msg;
    msg.setTimeStamp(0.3352575874752538);
    msg.setSource(55981U);
    msg.setSourceEntity(230U);
    msg.setDestination(46314U);
    msg.setDestinationEntity(126U);
    msg.seq = 3849486207U;
    msg.state = 134U;
    msg.error.assign("WRCJIZMYHMWBWIGJKCPASDHGMSGFGNWRZOLOIBXSGPDZYVEECIOGQZNBGMWAVUXTUFTDIERIJQYYFKCLTUEJCLEWFX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsState msg;
    msg.setTimeStamp(0.2125967280244866);
    msg.setSource(41706U);
    msg.setSourceEntity(183U);
    msg.setDestination(58099U);
    msg.setDestinationEntity(152U);
    msg.seq = 3621027940U;
    msg.state = 208U;
    msg.error.assign("CZQDIXZMQPVSXVBEWRLFLADLWCQOUKOGUETAPPCSAKUQMVMEFDSRMLGUAQRGFYIAWONRQIJJERZYMHBWGMOKCZSFPDTSGUTILHCVVSEW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsState msg;
    msg.setTimeStamp(0.36832552737721647);
    msg.setSource(38044U);
    msg.setSourceEntity(101U);
    msg.setDestination(18695U);
    msg.setDestinationEntity(11U);
    msg.seq = 911396996U;
    msg.state = 120U;
    msg.error.assign("UUIETKQDEORIMJYEWHJHNTVFOWELBLLIHWECVCNZIKQDSRLIUVRHDIYFEZGNKRMRCWMOQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TextMessage msg;
    msg.setTimeStamp(0.05277102300361192);
    msg.setSource(7654U);
    msg.setSourceEntity(136U);
    msg.setDestination(29134U);
    msg.setDestinationEntity(138U);
    msg.origin.assign("TNAMMKFXEELVRSPVYODNKADAHGABYTHRAPXRPBDWWAXLYCNFZZMIQVHBLVTBOJFXIYZEJETE");
    msg.text.assign("MWPGKRDNFQYIMCTZJXVUNXDSMVIBTNPQDZJTRORCYNSONXFTJUECQBEV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TextMessage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TextMessage msg;
    msg.setTimeStamp(0.1863635980695294);
    msg.setSource(41925U);
    msg.setSourceEntity(54U);
    msg.setDestination(34409U);
    msg.setDestinationEntity(132U);
    msg.origin.assign("DXOJIDKMCFLTPCBQFOVFBRBIGAXNABAWIYSKHGHNAKSQQWYELXYLXKPEBSUGMUNCUSLTRRMHNCMHMLRFRUQGORSFAXOJOPFJJIRXDJTTNTGLGKLSYDQVWZBCJCIYIQEOZVWNSMTAUOWIRWTHJEHDPVABWZSGJAVBPBPHCXDXNPDBXITFZNWKNQUNEULVEVDUZIWIWECFQYAJZMMYKDVHUFQCHGUKMZPETVHJYLGCOYKRD");
    msg.text.assign("VRSJMJCYMLITSGTLWZVMBCRZBSYAUALPCNRDYDSUSEIHKWLTGVRBNZJFNYUHEKUIQUJPUUOLBGNBGBXYYPXOPZOZOAQAHYQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TextMessage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TextMessage msg;
    msg.setTimeStamp(0.2732291344819294);
    msg.setSource(33775U);
    msg.setSourceEntity(91U);
    msg.setDestination(49557U);
    msg.setDestinationEntity(164U);
    msg.origin.assign("RCQGXOPAIDIVDZNEBMNMWHIYFIWIMDHQJXTZFLBOKYCZTLGOPSVIHDKQIHTBRKTYFCWSSANYFCJEBMZQZCVXKDQZPGHBIXPRYLTAZPOBWYRNBAGMGVZMWQOZNYIKGUBXOYASGUWLFMKDTVLEDFTSJNZ");
    msg.text.assign("NRZFFINTUXOEJHEAYPRKLGQNVHYXRJKFFZCPCBPLYKQJODDPVSPNEEDXRWDPOITZCLOYIMOPJUSCWIFVINDFCTDG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TextMessage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumMsgRx msg;
    msg.setTimeStamp(0.0653684205793168);
    msg.setSource(37884U);
    msg.setSourceEntity(43U);
    msg.setDestination(6224U);
    msg.setDestinationEntity(247U);
    msg.origin.assign("HALTFAZRMPNXFRYSTDNVMWJUDTJBBEHWLAVTYCGXMNCYNLMOFQXICJLFGNSVBLUICUSCPRPYBBZGONRWTWSSKYFQDJTECRFKOGHWARWLOVNSUVXIDUKKZESDYNAVOMEJNDXASGTPROPGEORYLJBZAWDIUGLUQJMOVIIMPUCQXPDJRMGZFHYWSPSXZKCKUDQL");
    msg.htime = 0.013010715055719158;
    msg.lat = 0.13458163089483266;
    msg.lon = 0.5053834484132079;
    const signed char tmp_msg_0[] = {-10, 101, -32, 81, -98, -52, 8, -13, -4, 19, -99, 66, -70, -83, -35, 87, -123, 52, -47, 55, -84, 54, -107, -77, 44, -40, -21, -11, -53, 97, -128, -40, -123, 6, -19, 115, 38, 97, 55, -53, -118, 16, -50, 96, -57, 59, -6, 54, -127, -56, 56, 12, 29, -116, -95, 117, -90, 20, 85, -48, -96, 65, -47, -78, 118, -86, 74, 20, -9, 91, -81, 116, -111, 109, 78, -58, -114, -68, 46, 54, 58, 106, 1, -12, -4, 123, -93, 100, -25, -103, 88, -127, -34, 84, -112, 60, 2, -60, -32, -111, 125, -78, 40, 124, -53, 17, 28, -98, 35, 17, -102, 2, 51, -38, 27, -51, -83, 116, -71, 62, 96, -4, 10, 29, -109, 9, 99, -100, 99, -89, 45, 73, -61, 100, 116, 29, 114, -10, 28, 65, 30, 41, -19, 4, -43, 62, 45, -29, 87, 58, -39, -99, 42, 10, 120, 64, -40, -9, 79, 1, -64, -51, 41, 94, 117, 91, -25, -40, 104, 37, -68, 122, 17, -27, 22, -26, -127, -44, -17, -1, 115, -98, -65, -98, 107, -62, 53, -105, -104, -18, -15, -8, -94, 102, 1, 25, 39, 68, 21, 4};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumMsgRx #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumMsgRx msg;
    msg.setTimeStamp(0.22341034432956108);
    msg.setSource(41038U);
    msg.setSourceEntity(181U);
    msg.setDestination(58019U);
    msg.setDestinationEntity(194U);
    msg.origin.assign("RXWHUSXDOPDSMCZKLMCMNPDXMVJNPOAIDYVLZFCQXOQSAYPIDHRBRLSCPPBFGZNGTNELNIDIODJPFJVUBJBSFSBVTPLQYHORAPBKNQTHCBND");
    msg.htime = 0.2633183761129878;
    msg.lat = 0.21976904798995567;
    msg.lon = 0.9446733258176444;
    const signed char tmp_msg_0[] = {109, -50, 85, -31, -80, 19, 89, 100, -54, -13, -71, -71, -57, -72, 121, 102, 34, 66, -65, -21, 98, -108, -53, 21, 30, -123, -34, -128, 37, -105, -13, 101, -33, 101, 108, 86, 86, -103, -16, -122, -59, -103, 60, 42, 125, -2, 69, 9, -114, -70, 65, 67, 41, -110, 3, 80, -74, 116, -111, -44, 34, 77, 20, -20, 105, -89, 14, 119, 89, 65, -20, 96, -119, 77, -5, -82, 40, -87, 4, 94, -108, 55, 27, -93, 55, 65, -91, -71, -6, -102, 77, -121, 122, -49, 45, 41, 36, 51, 51, 26, 21, 65, -58, -43, 123, 78, -17, -66, -31, -113, -67, -128, 46, 1, -117, -21, -21, 22, -91, 19, 50, -32, 123, 113, 57, 39, 73, -39, 109, -27, 80, -59, -49, 53, 16, 34, 38, -101, 32, 13, -111, -103, 106, 0, 25, 25, 65, -6, 105, -128, -106, 120, 26, -22, -44, -26, 116, -40, 111, -114, 29, 25, -53, 12, -85, 117, 14, -100, -95, 73, 12, -100, 78, 39, -62, -91, -68, 13, 25, 84, 20, -70, 41, 98, 77, 56, -95, -110, -124, -73, -24, 57, -31, 32, -21, -110, 69, -1, -76, 75, 77, 80, 41, 42, 119, 11, 61, 22, -108};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumMsgRx #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumMsgRx msg;
    msg.setTimeStamp(0.8109603837793034);
    msg.setSource(5832U);
    msg.setSourceEntity(177U);
    msg.setDestination(46113U);
    msg.setDestinationEntity(191U);
    msg.origin.assign("COQOARVNMFWREHQIRJAVPTVCUCZXFAEISLBLTUFRGZNSHHKIEMRFLSFQZDQCZNQSZTSWBYYBBBRPCNPRWZKCRYCBCPQUAOKNHMSLDJZMXINEPJEXKQYXKAOWMVHIBMGGGCFEHBYWEJKTFWVDFDIPAEYJGIPLFQJOATOSKLTWSZVMURILUOJPYGJKDXXAOKZYNWQXVSVJTRGDDDVIEUL");
    msg.htime = 0.75646034018668;
    msg.lat = 0.08359327054658827;
    msg.lon = 0.1262589365698361;
    const signed char tmp_msg_0[] = {-59, -35, -74, -114, 66, -111, 85, -88, -37, 43, -50, 67, -115, 88, -41, 61, -76, -72, -58, 74, -101, -2, 51, -123, 55, -103, 101, 28, -50, -116, -113, -55, 45, -80, -127, -44, -106, 117, 71, -80, -126, -115, 65, -61, 125, -111, 47, -66, -70, 26, 72, 124, -75, -15, 50, -127, 66, 91, 119, -80, -91, 33, -59, 20, 70, 74, -21, 43, -30, 8, 69, -79, 93, 71, 101, -12, -111, 59, 16, 9, -114, -89, -40, -92, 13, 125, 98, -124, -68, -13, -58, -102, -111, 86, 32, 121, 120, 77, 64, 67, -125, 70, -38, -5, -94, 19, 26, 102, 90, 27, -46, -46, -84, -13, -97, 62, 17, -83, -18, 97, 83, 74, 88, 1, 96, 126};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumMsgRx #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumMsgTx msg;
    msg.setTimeStamp(0.3228279606985962);
    msg.setSource(29728U);
    msg.setSourceEntity(55U);
    msg.setDestination(40888U);
    msg.setDestinationEntity(16U);
    msg.req_id = 45425U;
    msg.ttl = 62769U;
    msg.destination.assign("RSOYPZQWXFADXQJOVZVTURUWUNBGFYCHYZNDDNHF");
    const signed char tmp_msg_0[] = {-104, 111, 48, -65, 95, 62, 97, -31, 41, 98, -5, -31, -22, 110, 97, -61, -117, 44, -101, -8, -102, -25, -2, -56, 33, -43, -87, 37, 96, -36, -76, -115, 64, -114, -121, -91, -117, 82, -75, -126, 120, 84, -68, 100, -58, -72, 18, 99, 46, -8, 58, 12, -113, -35, -109, -65, 94, -27, 55, 59, 21, 18, -71, -3, 41, -3, 87, -27, -91, 122, -38, -27, 19, -104, 119, 72, 123, -44, -54, 28, 14, 106, -73, -124, -101, -64, 71, -99, 33, 29, 33, 109, -25, -12, -99, -45, -98, 67, 27, -30, 71, -111, -104, 72, -113, -107, 63, -29, 79, 42, -29, -75, 20, 26, 32, -44, 123, 38, 22, 13, 72, -124, 119, 42, 58, -24, 53, -114, 46, 67, 60, -56, 57, 61, 51, -95, 20, 63, -94, 35, 4, -83, -11, 58, -5, -42, 18, -25, 23, 100, 28, 41, 70, -49, 95, -41, -79, -10, -67, 42, -101, -8, 53, 77, -53, -10, -118, 105, -57, -94, 116, -21, 89, 84, -50, -17, 107, 72, -25, 104, 41, 56, 23, -97, 86, -117, 57, 1, -30, 118, -25, 89, 125, -65, 69, 33, -27, 99, 87, -35, -71, 96, -74, -42, -52, 87, -4, 26, 76, -9, 45, -126, 18, -13, 115, -22, -111, 63, 115, -6, 4, 28, 102, 4, -56, -10, 17, 71, 59, -105, -11, 27, 112, 16, 101, -124};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumMsgTx #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumMsgTx msg;
    msg.setTimeStamp(0.586726178116303);
    msg.setSource(24555U);
    msg.setSourceEntity(235U);
    msg.setDestination(34160U);
    msg.setDestinationEntity(63U);
    msg.req_id = 38137U;
    msg.ttl = 4624U;
    msg.destination.assign("WHRHSNWQXEUOPXNVZLGPIXDVEUAQFHWNACGBNENYHCOCDKLIEZBWUKYGKDBVUFMTWLADONG");
    const signed char tmp_msg_0[] = {-91, 107, -58, -80, 80, -74, -81, -81, 47, 53};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumMsgTx #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumMsgTx msg;
    msg.setTimeStamp(0.9128902939580543);
    msg.setSource(11391U);
    msg.setSourceEntity(4U);
    msg.setDestination(57974U);
    msg.setDestinationEntity(229U);
    msg.req_id = 8988U;
    msg.ttl = 7666U;
    msg.destination.assign("JYRPYAUEVPGFXUXPAEIUQGKDQWHCCTURWPCOPEUDSBEXLZKLYNM");
    const signed char tmp_msg_0[] = {41, 38, 18, 51, -93, 12, -101, -80, -17, 79, 39, -81, 99, -92, -100, -44, -99, 108, 61, 87, -30, -61, -123, 79, 64, 101, -114, -110, 18, -62, 73, -22, 79, -11, -125, 61, -20, -101, 40, -74, -89, -77, 37, -89, 32, 123, -27, 51, -126, -122, 35, -61, 58, 96, -69, -55, 10, 27, 123};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumMsgTx #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumTxStatus msg;
    msg.setTimeStamp(0.6079693514367865);
    msg.setSource(19977U);
    msg.setSourceEntity(95U);
    msg.setDestination(17240U);
    msg.setDestinationEntity(191U);
    msg.req_id = 62935U;
    msg.status = 225U;
    msg.text.assign("EJEKNKMNITHSDZBNBJUXOEPBYYLOOG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumTxStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumTxStatus msg;
    msg.setTimeStamp(0.6913270582253925);
    msg.setSource(46189U);
    msg.setSourceEntity(138U);
    msg.setDestination(38778U);
    msg.setDestinationEntity(168U);
    msg.req_id = 40895U;
    msg.status = 0U;
    msg.text.assign("OHKIRRHDILUXHKMDYSFGJTAEHVXKIGUEGFEMWDPQSEUAUMMDZLVCAVMVPCFECHMQYETKTLZSJXDHAWFASSBTCLZVABYRGXWQSBUBSBQRBYPTRZDFWPCLIYWNQJNOPOPK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumTxStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumTxStatus msg;
    msg.setTimeStamp(0.7100225121331858);
    msg.setSource(34231U);
    msg.setSourceEntity(242U);
    msg.setDestination(55651U);
    msg.setDestinationEntity(101U);
    msg.req_id = 7081U;
    msg.status = 204U;
    msg.text.assign("BAYZIBJLSETWGYZYDOPVWMGMJHYPULWOGNVSWTFLGDVATHITEYWIMXTROI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumTxStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroupMembershipState msg;
    msg.setTimeStamp(0.40720264084913105);
    msg.setSource(53583U);
    msg.setSourceEntity(44U);
    msg.setDestination(52661U);
    msg.setDestinationEntity(107U);
    msg.group_name.assign("KYWGCGHOZMEOPOSQLBRVGEYHAKRZUTZEMPTXUYWXNJKCJNHXXTMJVDUXUEBCWQQLFKZAHDLVISE");
    msg.links = 988713959U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroupMembershipState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroupMembershipState msg;
    msg.setTimeStamp(0.42358424321884736);
    msg.setSource(27730U);
    msg.setSourceEntity(131U);
    msg.setDestination(2958U);
    msg.setDestinationEntity(226U);
    msg.group_name.assign("WQUZBPHIYVSOQAIUQVHZZNROYCYSUZTMXNA");
    msg.links = 3603902831U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroupMembershipState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroupMembershipState msg;
    msg.setTimeStamp(0.03797219847499045);
    msg.setSource(46918U);
    msg.setSourceEntity(145U);
    msg.setDestination(11223U);
    msg.setDestinationEntity(74U);
    msg.group_name.assign("EUGSIYYFCKFURDUZSNXEZTDVWQGEYPWOLPHLAGOTMROTWEQKXASCTYDSGJIDIFUFBUIHSSCWEDTUPNQWPMXHOQBCJZNNCXZKYPNFAJQXKYIODFPXGMBDVKOSVXLBOQGRPBZHVHWEVUECHAGLREILZWNJIALDZPRXYANRKMCMKFKOGRJKUQQCRJYMVTNVXKYLILPALJTHSDWTNSAMQHBQEVYPV");
    msg.links = 2242966606U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroupMembershipState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SystemGroup msg;
    msg.setTimeStamp(0.9238515690451998);
    msg.setSource(60225U);
    msg.setSourceEntity(251U);
    msg.setDestination(24855U);
    msg.setDestinationEntity(138U);
    msg.groupname.assign("YYGPFSUFXRWHTSVMQCYRMRIVKTSWNTJZCEAZOUDXILTANIFXFKVZOHKHGMBJFEOEOTYZIXJQLALDZZSXUTMUOLHGGVLIGRSDEQPYNMVIBBMTBCOJEUDUIWWAQCTOHRXUQDDGKBPQAJGPONMVOVYACPAWLPYHIGD");
    msg.action = 232U;
    msg.grouplist.assign("LKNGKTDPQKHTPSSZNIKVJOWZMFNDARJRILYIINTZJGYWKWAQVHTDGBGMTIFSQSBUUIRQOANPCGPEVDPIJJUQCGBUOBHDEBXJXVVUDSTVQWXRGHSMZMCFJKFAEXEAOXMSASVCH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SystemGroup #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SystemGroup msg;
    msg.setTimeStamp(0.4872342144497692);
    msg.setSource(52433U);
    msg.setSourceEntity(186U);
    msg.setDestination(64826U);
    msg.setDestinationEntity(160U);
    msg.groupname.assign("QGSORHFFWWTUZVDLKVTFUNVCPDPBPOYBORWTYAZMKMFHLQMQLMZQPQXJJEBEOJXTPMUOFDXHAEHUKFXCBUTJVVLSMTUEVSIISHCOLYWMNEZOYXFOFWDSKZHYZGZKCVBJYASBHSZPQVOIOUYDADJIUIACJAVIMNQDXNBAEAYIIGGKMNGXNWQSHBCRESWNVKTXLCWLNSRPUDFEZHHTBGAKMQK");
    msg.action = 173U;
    msg.grouplist.assign("OBDWIWIMUZEGOGVCCAMJVSGSKRMUYTXSHJCWFZRPWKJSQYKFYTFDUMIEDOTPPFZIWTUQUMOHTULJZL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SystemGroup #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SystemGroup msg;
    msg.setTimeStamp(0.7636002034129454);
    msg.setSource(62720U);
    msg.setSourceEntity(24U);
    msg.setDestination(62221U);
    msg.setDestinationEntity(8U);
    msg.groupname.assign("TCWZLCYBNXFRHSRAXFBGIMKRBTSYEGBDXSFIJNRYRSMSBIEYNYUAQATDGXBQBQYOLPAGAAUXCZFCUOZNUPFUMOVCLPIPJZJRTYKROQTTSNZNKIWJSQLPEHVDEBVFCHFOMDGSJDZPJGIMQQDMUXQHZJBWHHYUUKMNDKLXTVWXZLWFRKAEDMOLCHNYIDTKJSWUMGFRCLVWCSAQIPVXVZBEHXWO");
    msg.action = 68U;
    msg.grouplist.assign("UFGIMOQANSHDCWYNI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SystemGroup #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LinkLatency msg;
    msg.setTimeStamp(0.36566753053175727);
    msg.setSource(7308U);
    msg.setSourceEntity(194U);
    msg.setDestination(36797U);
    msg.setDestinationEntity(140U);
    msg.value = 0.97205191568596;
    msg.sys_src = 14455U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LinkLatency #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LinkLatency msg;
    msg.setTimeStamp(0.018831299771586152);
    msg.setSource(59559U);
    msg.setSourceEntity(5U);
    msg.setDestination(14991U);
    msg.setDestinationEntity(47U);
    msg.value = 0.07289444544702295;
    msg.sys_src = 63048U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LinkLatency #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LinkLatency msg;
    msg.setTimeStamp(0.14862575536741907);
    msg.setSource(9009U);
    msg.setSourceEntity(37U);
    msg.setDestination(39256U);
    msg.setDestinationEntity(201U);
    msg.value = 0.0325407856297486;
    msg.sys_src = 55136U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LinkLatency #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ExtendedRSSI msg;
    msg.setTimeStamp(0.06877852325620049);
    msg.setSource(64995U);
    msg.setSourceEntity(18U);
    msg.setDestination(58740U);
    msg.setDestinationEntity(81U);
    msg.value = 0.36592993002955554;
    msg.units = 110U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ExtendedRSSI #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ExtendedRSSI msg;
    msg.setTimeStamp(0.5874029104427231);
    msg.setSource(26991U);
    msg.setSourceEntity(180U);
    msg.setDestination(17170U);
    msg.setDestinationEntity(103U);
    msg.value = 0.7852153659607204;
    msg.units = 13U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ExtendedRSSI #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ExtendedRSSI msg;
    msg.setTimeStamp(0.5820483296172537);
    msg.setSource(12710U);
    msg.setSourceEntity(164U);
    msg.setDestination(37259U);
    msg.setDestinationEntity(25U);
    msg.value = 0.18756809010068232;
    msg.units = 56U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ExtendedRSSI #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricData msg;
    msg.setTimeStamp(0.39165321004962417);
    msg.setSource(13291U);
    msg.setSourceEntity(238U);
    msg.setDestination(21644U);
    msg.setDestinationEntity(132U);
    msg.base_lat = 0.9933363352194228;
    msg.base_lon = 0.753874943092436;
    msg.base_time = 0.19073443954480362;
    IMC::RemoteCommand tmp_msg_0;
    tmp_msg_0.original_source = 50397U;
    tmp_msg_0.destination = 20573U;
    tmp_msg_0.timeout = 0.1701758547573219;
    IMC::UsblFixExtended tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.target.assign("GHZWQUGOFOITBGPOGQEKELYKELIJYKITEOXLFSBODKAGVYVXNAHDTGQEVIACPKSHFYDCTBKLMCYJRXPOQREUQQDOUANNJZIRAGKGHCJVSUDBRNZSSNJMLW");
    tmp_tmp_msg_0_0.lat = 0.5290406361299922;
    tmp_tmp_msg_0_0.lon = 0.5612315797341016;
    tmp_tmp_msg_0_0.z_units = 100U;
    tmp_tmp_msg_0_0.z = 0.05140735687514442;
    tmp_tmp_msg_0_0.accuracy = 0.2919913244661061;
    tmp_msg_0.cmd.set(tmp_tmp_msg_0_0);
    msg.data.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricData #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricData msg;
    msg.setTimeStamp(0.987112243271622);
    msg.setSource(1601U);
    msg.setSourceEntity(105U);
    msg.setDestination(28603U);
    msg.setDestinationEntity(47U);
    msg.base_lat = 0.6567259025482326;
    msg.base_lon = 0.36429489723496045;
    msg.base_time = 0.035776159791005124;
    IMC::RemoteCommand tmp_msg_0;
    tmp_msg_0.original_source = 9988U;
    tmp_msg_0.destination = 16112U;
    tmp_msg_0.timeout = 0.20652445258340835;
    IMC::SoiCommand tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.type = 102U;
    tmp_tmp_msg_0_0.command = 116U;
    tmp_tmp_msg_0_0.settings.assign("DTZITGSNJOHCVYSAVEIXPAFCIEENQBQWIJZZIUIWDFZSTVRXVXBDYSHORVFCOLETPAXJFJFHEMVKGENCIOUCYOXTRPMPKSNTUFGYQQRAKWNBYTFGLUOPTBSCOVBRNIMYKUCAVXBUPMGGNYQGAYIUJKZUTVFEENFACSGIKZQLQQHGMLZXWDOWHWMYCOWSPKDJRRDXL");
    IMC::SoiPlan tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.plan_id = 10577U;
    tmp_tmp_msg_0_0.plan.set(tmp_tmp_tmp_msg_0_0_0);
    tmp_tmp_msg_0_0.info.assign("BYPIJZJFGWEXIPMCTIYFQKSBQRTNGRTJVODVXPLZCSYDCQMZEMMRKRDDKTHRSQHUQUZWOUGYCKLDNTFHKQHLQJIPFATFKVGARKECBRJSSWYLDNYUEMEIMDBUNWQUAVLUXFQNCXHJKHLYEVZFWNKPJPZWHFJIYPQDVUAOPTGWLBXSNIARRSBGXINGCTHUXBO");
    tmp_msg_0.cmd.set(tmp_tmp_msg_0_0);
    msg.data.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricData #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricData msg;
    msg.setTimeStamp(0.4293066563554798);
    msg.setSource(57287U);
    msg.setSourceEntity(21U);
    msg.setDestination(18923U);
    msg.setDestinationEntity(181U);
    msg.base_lat = 0.6906077010698138;
    msg.base_lon = 0.8833888027662532;
    msg.base_time = 0.8556068794104518;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricData #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompressedHistory msg;
    msg.setTimeStamp(0.2902701676207706);
    msg.setSource(49301U);
    msg.setSourceEntity(77U);
    msg.setDestination(33053U);
    msg.setDestinationEntity(67U);
    msg.base_lat = 0.108775966284131;
    msg.base_lon = 0.7779807777214186;
    msg.base_time = 0.16020557811314196;
    const signed char tmp_msg_0[] = {34, -120, -17, 65, -85, 5, 109, -126, 49, 4, -58, -78, 116, -49, -49, -6, -90, 53, 27, 83, -74, -45, -7, -36, 68, 83, -69, 59, -111, -18, 115, -48, 103, 8, -115, -61, 108, 41, 1, 46, 124, -35, 32, 86, -16, -100, -2, -128, 87, 91, -102, 115, -107, -47, 24, -76, 5, 30, 21, -47, -58, 29, -108, 20, -123, -44, 95, 65, 78, 90, -48, 81, 11, -110, -127, -14, -10, -123, 10, 6, -49, 114, -39, -111, -106, 24, -68, 122, 25, -3, 42, -39, -49, 38, -90, 75, -60, 105, 122, -42, 15, 26, -17, 120, -15, 55, 41, -55, 20, 3, -73, -98, -44, -121, -43, 96, 123, 92, 45, 64, 91, 113, -123, -10, 80, 2, 30, -98, -52, -16, 18, -70, 126, 67, 57, -82, 125, 102, 25, -93, 28, -97, 45, 25, -16, 5, -23, 11, 117, -44, 60, 113, 74, 71, 91, -102, -88, -118, -32, 37, -83, -86, 79, 102, 30, 51, 81, 15, -113, -13, -35, 0, -128, 5, -8, -26, -3, -19, 112, 64, -112, -43, -56, -38, -68, -96, -30, 46, 36, -6, -23, 70, 27, -39, 79, -23, 74, -13, -45, 49, 87, -91, -17, 29, -109, -121, -81, 25, 99, -58, 64, -109, -53, -52, 99, -66, -99, -53, 74, -125, -118, 60, 55, 27, -116, 82, 35, 67, -86, -73, 29, -53, 98, -98, -7, 17, -105, 25, 2, -81, -56, 60, 9, 71, 11, -41, -73, 40, 13, -121, -34, 52, 100};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompressedHistory #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompressedHistory msg;
    msg.setTimeStamp(0.19362256648613552);
    msg.setSource(42603U);
    msg.setSourceEntity(187U);
    msg.setDestination(4959U);
    msg.setDestinationEntity(119U);
    msg.base_lat = 0.9502465315090372;
    msg.base_lon = 0.5874801471120488;
    msg.base_time = 0.418791195945616;
    const signed char tmp_msg_0[] = {-70, -84, -24, -4, -70, -122, -89, 69, -99, 34, -116, -52, 7, -76, 6, -21, -128, 67, -13, 47, 112, 58, 113, 83, -48, 11, 101, -88, 21, 79, -30, -105, 37, 9, -6, 92, -19, -44, 5, -85, 53, 80, -124, -52, -61, 40, -13, -71, 50, -69, 117, 30, -38, -114, 80, 101, 94, -43, 70, -28, -60, -27, -61, 22, 6, -17, 35, -12, -88, 47, -25, 111, 80, 97, 88, 33, -41, 102, 107, 83, -3, 41, 77, -18, -40, 111, 43, -9, 117, 8, -120, 75, -124, -33, 109, 35, 96, 125, -84, 120, -37, 63, -91, 22, 98, -72, -33, -5, -81, -104, -64, -97, 40, 55, 55, -124, 120, -38, -13, 89, -50, 122, 78, 41, 36, 74, -118, 93, 39, -47, -50, -67, -83, 115, 53, -117, -115, -49, -126};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompressedHistory #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompressedHistory msg;
    msg.setTimeStamp(0.3964946440246574);
    msg.setSource(12486U);
    msg.setSourceEntity(173U);
    msg.setDestination(27908U);
    msg.setDestinationEntity(40U);
    msg.base_lat = 0.9618520943142818;
    msg.base_lon = 0.5745036117458244;
    msg.base_time = 0.9560978217947947;
    const signed char tmp_msg_0[] = {-84, -57, 32, -49, 101, -45, -73, -34, -37, -14, -122, 37, 98, -39, -103, 23, 84, -63, 73, -5, 29, -65, -65, 84, -3, 53, 53, -28, 110, 84, -42, 18, -18, 99, 35, 87, 29, 34, 8, -12, 45, -102, 63, 84, -75, -83, 44, -27, 123, -67, -108, -56, 23, 62, -45, -121, -55, 67, 107, 78, 5, -21, -41, -30, 14, -66, 47, 47, 92, 72, 113, -64, 75, 18, -24, 102, -111, 54, -91, -77, -25, -50, -126, -16, 109, 99, 115, 29, -47, -97, -48, -106, -76, -56, -38, -58, 110, -17, 26, -86, 45, -61, 30, -52, 103, -84, -88, 15, 61, -3, -80, -104, -4, 49, -89, -60, -82, 119, 73, -31, -40, -49, -121, -89, -119, -27, 67, 64, -74, -15, -18, -25, 61, 100, -64, -107, -79, -20, -71, 1, 25, 51, -70, -2, -126, 109, -52, -122, -40, -78, -29, -23, 2, -106, 2, -12, 15, -25, 35, -87, -107, -91, 109, 53, 50, -77, 27, 124, -47, 99, -84, 90, -42, 29, 39, -29, -29, -107, -60, -106, -1, 124, -44, 28, -25, 98, 72, -73, -39, 23, 107, 96, -64, -85, 1, -69, 39, -28, 89, 90, -43, -90, -46, 27, 63, 114, -80, 16, 85, 27, -100, -107};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompressedHistory #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricSample msg;
    msg.setTimeStamp(0.9960529071028763);
    msg.setSource(45233U);
    msg.setSourceEntity(253U);
    msg.setDestination(44536U);
    msg.setDestinationEntity(34U);
    msg.sys_id = 51487U;
    msg.priority = 14;
    msg.x = -589;
    msg.y = -6211;
    msg.z = 13621;
    msg.t = -24203;
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("IGILRXOPJEXERRUZQNSAHUAVROEBDFYAQDCJAWXNSTATTHZXTWBVKQWVSEAUIQJLYUMVFMKLWBEDWGBNFQTVCZOKHLYKBMDAPSONBGFAGCOWCCPRURNBMHIMULFLPXDRVAYODHWQRQPFXISWFINMPOTHZGXEVJMSECKDZHZSZJFLJEDOCJQPLUKCVQ");
    tmp_msg_0.sys_type = 46U;
    tmp_msg_0.owner = 13179U;
    tmp_msg_0.lat = 0.18690953423270895;
    tmp_msg_0.lon = 0.39104473456716426;
    tmp_msg_0.height = 0.44486120249151695;
    tmp_msg_0.services.assign("JECMTYOUIATRGVLUACNCGELXXLZCVRCHKXDQHSWZEYJAENOYKKKEDHZCOGKHNBUCRBUOESVMHPRAKACMPWTAKOIHAPQLWQJFWZ");
    msg.sample.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricSample #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricSample msg;
    msg.setTimeStamp(0.42161886885685496);
    msg.setSource(52313U);
    msg.setSourceEntity(32U);
    msg.setDestination(1156U);
    msg.setDestinationEntity(60U);
    msg.sys_id = 5966U;
    msg.priority = 16;
    msg.x = 30972;
    msg.y = 25795;
    msg.z = 25735;
    msg.t = -32303;
    IMC::SimulatedState tmp_msg_0;
    tmp_msg_0.lat = 0.285328065640986;
    tmp_msg_0.lon = 0.15436969226385444;
    tmp_msg_0.height = 0.7412555808364664;
    tmp_msg_0.x = 0.2823380663169942;
    tmp_msg_0.y = 0.8784026614104798;
    tmp_msg_0.z = 0.2638647985549678;
    tmp_msg_0.phi = 0.7289290971354297;
    tmp_msg_0.theta = 0.04782226704601844;
    tmp_msg_0.psi = 0.7845622323408945;
    tmp_msg_0.u = 0.9904967021917991;
    tmp_msg_0.v = 0.7238326014719935;
    tmp_msg_0.w = 0.958252415119758;
    tmp_msg_0.p = 0.5079843310355276;
    tmp_msg_0.q = 0.5840914444022444;
    tmp_msg_0.r = 0.15391666720307418;
    tmp_msg_0.svx = 0.7892780102955922;
    tmp_msg_0.svy = 0.9074708076412833;
    tmp_msg_0.svz = 0.6866720492480767;
    msg.sample.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricSample #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricSample msg;
    msg.setTimeStamp(0.17029519699839823);
    msg.setSource(54501U);
    msg.setSourceEntity(122U);
    msg.setDestination(29298U);
    msg.setDestinationEntity(85U);
    msg.sys_id = 8100U;
    msg.priority = -127;
    msg.x = 10250;
    msg.y = -20207;
    msg.z = 7023;
    msg.t = -12843;
    IMC::PushEntityParameters tmp_msg_0;
    tmp_msg_0.name.assign("RQQJUJLPZVHAZHVZTQWJYJAZVWHDUXKOOIOOOGPGCMIWXNIRRAZDIBBSGJJBEKYCBQPNWBESFITXVEWIALNXCMJDQEMUXDEGTSUHVZNUMDKMUUAOPLLTXFXEYIHESCNPZBOVSFHYLNXKALAFWW");
    msg.sample.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricSample #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricDataQuery msg;
    msg.setTimeStamp(0.6268196315509904);
    msg.setSource(11917U);
    msg.setSourceEntity(82U);
    msg.setDestination(35067U);
    msg.setDestinationEntity(96U);
    msg.req_id = 41778U;
    msg.type = 197U;
    msg.max_size = 22014U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.5988740032461727;
    tmp_msg_0.base_lon = 0.022702360340165928;
    tmp_msg_0.base_time = 0.7920664793437334;
    IMC::HistoricSample tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sys_id = 40398U;
    tmp_tmp_msg_0_0.priority = -6;
    tmp_tmp_msg_0_0.x = -2629;
    tmp_tmp_msg_0_0.y = -12401;
    tmp_tmp_msg_0_0.z = 26914;
    tmp_tmp_msg_0_0.t = 14543;
    IMC::Voltage tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.value = 0.7064102782249059;
    tmp_tmp_msg_0_0.sample.set(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.data.push_back(tmp_tmp_msg_0_0);
    msg.data.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricDataQuery #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricDataQuery msg;
    msg.setTimeStamp(0.1914385752640757);
    msg.setSource(48014U);
    msg.setSourceEntity(240U);
    msg.setDestination(21256U);
    msg.setDestinationEntity(209U);
    msg.req_id = 18126U;
    msg.type = 35U;
    msg.max_size = 3580U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.5277363994347041;
    tmp_msg_0.base_lon = 0.8931019399912808;
    tmp_msg_0.base_time = 0.3513082547244534;
    IMC::HistoricSample tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sys_id = 2139U;
    tmp_tmp_msg_0_0.priority = 113;
    tmp_tmp_msg_0_0.x = -19014;
    tmp_tmp_msg_0_0.y = -13800;
    tmp_tmp_msg_0_0.z = -5196;
    tmp_tmp_msg_0_0.t = -14968;
    IMC::GroupStreamVelocity tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.x = 0.09394230165588857;
    tmp_tmp_tmp_msg_0_0_0.y = 0.3738366755050211;
    tmp_tmp_tmp_msg_0_0_0.z = 0.5780146025073204;
    tmp_tmp_msg_0_0.sample.set(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.data.push_back(tmp_tmp_msg_0_0);
    msg.data.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricDataQuery #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricDataQuery msg;
    msg.setTimeStamp(0.4320102240834093);
    msg.setSource(44462U);
    msg.setSourceEntity(117U);
    msg.setDestination(53735U);
    msg.setDestinationEntity(184U);
    msg.req_id = 17394U;
    msg.type = 137U;
    msg.max_size = 63530U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.034631932579864966;
    tmp_msg_0.base_lon = 0.5130601344802509;
    tmp_msg_0.base_time = 0.6155774421761988;
    msg.data.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricDataQuery #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteCommand msg;
    msg.setTimeStamp(0.7167723131936652);
    msg.setSource(46687U);
    msg.setSourceEntity(78U);
    msg.setDestination(2972U);
    msg.setDestinationEntity(210U);
    msg.original_source = 35382U;
    msg.destination = 31458U;
    msg.timeout = 0.4058021055642662;
    IMC::VSWR tmp_msg_0;
    tmp_msg_0.value = 0.7219427717636808;
    msg.cmd.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteCommand #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteCommand msg;
    msg.setTimeStamp(0.12258355693334311);
    msg.setSource(60578U);
    msg.setSourceEntity(92U);
    msg.setDestination(27466U);
    msg.setDestinationEntity(100U);
    msg.original_source = 4404U;
    msg.destination = 27681U;
    msg.timeout = 0.34868090736333024;
    IMC::ButtonEvent tmp_msg_0;
    tmp_msg_0.button = 230U;
    tmp_msg_0.value = 125U;
    msg.cmd.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteCommand #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteCommand msg;
    msg.setTimeStamp(0.3369397689597913);
    msg.setSource(21722U);
    msg.setSourceEntity(186U);
    msg.setDestination(2251U);
    msg.setDestinationEntity(197U);
    msg.original_source = 5877U;
    msg.destination = 658U;
    msg.timeout = 0.16439710310469224;
    IMC::Magnetometer tmp_msg_0;
    tmp_msg_0.timeout = 21198U;
    tmp_msg_0.lat = 0.9953746656780437;
    tmp_msg_0.lon = 0.14360148927518956;
    tmp_msg_0.z = 0.827098642659574;
    tmp_msg_0.z_units = 174U;
    tmp_msg_0.speed = 0.7262609470874059;
    tmp_msg_0.speed_units = 6U;
    tmp_msg_0.bearing = 0.2626360337247411;
    tmp_msg_0.width = 0.4237211732074453;
    tmp_msg_0.direction = 96U;
    tmp_msg_0.custom.assign("XXFVDIASDDGNEHMXYJVJWASFSFCJNWXVOQZTIXYXQDCBQPYQARPZUKBLJLFCFPNOZBZL");
    msg.cmd.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteCommand #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CommSystemsQuery msg;
    msg.setTimeStamp(0.3939433751337056);
    msg.setSource(57657U);
    msg.setSourceEntity(235U);
    msg.setDestination(21757U);
    msg.setDestinationEntity(37U);
    msg.type = 215U;
    msg.comm_interface = 37676U;
    msg.model = 51521U;
    msg.list.assign("RPPMYXQYZMQCOJAMDWZTSCWVIRQOVOFSSRWEWOUBZFCPNSANDIZWGMMKPEEQCYFHBTHBKTTGCKIVKQRIDTBDJLJSWKLLGITNUIR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CommSystemsQuery #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CommSystemsQuery msg;
    msg.setTimeStamp(0.12137801645657742);
    msg.setSource(11039U);
    msg.setSourceEntity(26U);
    msg.setDestination(51550U);
    msg.setDestinationEntity(168U);
    msg.type = 16U;
    msg.comm_interface = 23944U;
    msg.model = 40695U;
    msg.list.assign("WVEMYUVILGZRNYVHDVRKQMBCLEJABALHNNZTRREYQZYGZXDTUWPWNJIYFNDATLTHWQLKQMDIMBPWICLABGAIHMRDPJKUHVSACIYLYXOUSVZSLOHQBKFEQBKUQW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CommSystemsQuery #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CommSystemsQuery msg;
    msg.setTimeStamp(0.9156721187628043);
    msg.setSource(37256U);
    msg.setSourceEntity(193U);
    msg.setDestination(47231U);
    msg.setDestinationEntity(160U);
    msg.type = 69U;
    msg.comm_interface = 48083U;
    msg.model = 55846U;
    msg.list.assign("PNQRFHCBULVWSBUUGXLSERPGEDCXECXXKRQZQGIKQAIUUUOTECIOXVOJUAPBEWFOAYGMMTJELSMDBRODLVSZPTLWZASIDDKEWWMWYIDDNFWCAGBOKBINLHKQWMTHDNKZSNTJTFOBAOTWVFZHRGAGZCSSYGZVNWAXGIRQLCTQKHCILRXRFMZFJOAXKXYTPJRHFN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CommSystemsQuery #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TelemetryMsg msg;
    msg.setTimeStamp(0.12386425524277);
    msg.setSource(27210U);
    msg.setSourceEntity(192U);
    msg.setDestination(52850U);
    msg.setDestinationEntity(136U);
    msg.type = 182U;
    msg.req_id = 3209605054U;
    msg.ttl = 55616U;
    msg.code = 6U;
    msg.destination.assign("RYCOXULDTNUZMXIMGUOSEOKXPOOMIVADYJNNUWVZMRWFTPQPFJLLNRXXZTATBGDZZNWPFXKEETIURQRHGYEDZHZOABWHLHTSVGQDGBRRLXWYYEVICHZBEVIVDJXHLBYNBZNKVJFYQBWBGWUQJFTIYLPGJTFTTKMKGACNMRVQWJIZHAUNJBI");
    msg.source.assign("CFVRJYLXOWJQASHUWCDSHZLXKKYYEAIDPPXRCBZTUMXYDALKMWIYZNSZOSOFBJOTHIGLXTOVPIOCTINVJGACQHAZYQXKDILIVNNPIKEMBTGBELZLMIJFRMUQGYISUNLVFVXNWCBGENMZDRMZHTARDTHOGJRYRAYBQDWPEPKUUVOFBEVRHKOTFUMHDNGKLUWGX");
    msg.acknowledge = 122U;
    msg.status = 105U;
    const signed char tmp_msg_0[] = {-105, -26, -35, -48, 83, -5, 95, 71, 116, 69, 114, -5, 57, -28, -27, -95, 4, 59, 110, -79, -11, -59, -96, 64, -76, -87, -42, -78, -93, 57, -2, 97, 4, -59, 72, 6, -42, 18, -67, 26, -49, 30, 106, 11, 82, -80, 42, -101, 2, 86, -124, -1, 69, -35, 19, -26, -20, 18, -6, 34, -122, 121, -53, -66, -115, -50, 79, -29, -23, -4, 70, -24, 10, -47, -72, 36, -90, -44, -81, 69, -115, -16, -81, -29, 106, -15, -126, -111, -61, -34, -93, 15, 114, 68, -58, -124, 28, 11, 111, 44, 7, -3, 14, -110, -102, -48, 125, -79, 63, -83, 24, 67, 109, -82, 16, 62, 5, 24, 40, 63, -69, 52, -49, -63, -49, 126, 53, -106, 39, 71, -45, -50, -111, -34, -13, 100, 122, 100, -21, 99, -25, -5, -90, 32, -127, 23, 10, -12, 44, -122, -23, -45, -126, 12, 0, -126, 58, 81, -92, -101, 21, -100, -79, 36, -16, -111, -68, -73, 126, 78, 16, 40, -95, -68, -124, -121, -77, 95, -33, -13, 36, -86, 21, -11, -67, 114, 94, 90};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TelemetryMsg #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TelemetryMsg msg;
    msg.setTimeStamp(0.4808001156038405);
    msg.setSource(40178U);
    msg.setSourceEntity(118U);
    msg.setDestination(25860U);
    msg.setDestinationEntity(101U);
    msg.type = 193U;
    msg.req_id = 743698137U;
    msg.ttl = 34850U;
    msg.code = 111U;
    msg.destination.assign("CLRJZKVMFCCXWETFIRHGVYRMXYCFXTABVECQQJEFNWUEGSHMKZRMBNMPTORHMIVADFCDGPDZKFWQBZZWXPSDDDLLWUQXLLUJMFLUILNPZIFDOALHEKRMCQIPUQWKEWGEVWOOAELGIQJCUNBSBHPWSAINBXAKUXOTSTOFKVAGLJZBJSRMBNUYPQWZUQPGTTVKCTYGDBBXJJPGINGHAPIYJI");
    msg.source.assign("HPABOREGVUPJJXHOWUUJXYIRZPVWCOKAKVLCNOWPYBLFMEHUCWOIXLZYHFDDPHBHMPWZCCDTXIXZVBKATNJVJOCYNRSOLPGLBRBRKSAWWCILGLPSGHIEOZFQTMBEIAFPDINMFTZSQIQEFDQNLLZQASXRTRFAVQPJFFGRUYAXATIVNYVQEJQKRWTWDKMMDOEUKBQNYWSAIDGKHCYJZDBVNMEFTMMSKJBGGXNETSSXXCDV");
    msg.acknowledge = 131U;
    msg.status = 74U;
    const signed char tmp_msg_0[] = {-1, 0, 102, -78, -80, -79, -91, -28, -8, 54, -100, -70, -70, 83, 45, 110, 63, -19, 22, 57, -104, 0, 46, 110, -110, 59, -84, -128, 30, 21, -66, -58, 38, 97, 123, 40, -85, 55, 52, -24, -103, 78, 106, -104, -13, 41, 56, -84, 69, -111, -108, -82, -126, 11, -117, -121, 99, 1, -45, 97, 40, -74, 19, 29, 25, -91, 113, -13, 44, -10, -96, -90, 88, 68, -58, -53, -55, -16, 22, -43, -57, 70, -3, 6, -76, 109, -126, 90, 44, 87, 106, -92, -47, -50, 13, -21, 36, -96, -25, 57, -44, 35, 80, 5, 4, -124, -38, 31, 62, -23, 58, -1, 79, 37, -95, 91, 60, 32, -75, -12, 10, -86, -128, 9, 48, 115, 62, -8, 77, 85, -6, -69, 12, 119, -39, 7, 44, 97, -83, 11, 30, -42, 56, -78, -91, -94, -84, -87, 107, -128, 30, -112, -18, 60, -58, 53, 18, -104, -14, -91, 112, 29, -15, 8, -44, 41, -35, 8, -41, 39, -110, -24, 123, -115, -98, 118, 26, -54, -45, -49, -44, 101, 68, 115};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TelemetryMsg #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TelemetryMsg msg;
    msg.setTimeStamp(0.920241028961498);
    msg.setSource(26790U);
    msg.setSourceEntity(175U);
    msg.setDestination(48630U);
    msg.setDestinationEntity(124U);
    msg.type = 152U;
    msg.req_id = 778752346U;
    msg.ttl = 15495U;
    msg.code = 104U;
    msg.destination.assign("AACTCWLWHDUVWDYYLOOD");
    msg.source.assign("DFKPOWUSIYQEUUBHDMKJNXEUJOVZTWZNHAOACISMTIBPMOUONDQBODHNXSXGYFVFUWWBELPKBDCFTPXVXMMINQFOAREEKDEGQHFGCMWHRBQUHEFSQZ");
    msg.acknowledge = 57U;
    msg.status = 227U;
    const signed char tmp_msg_0[] = {22, -97, 91, 9, 65, -9, 89, 62, 55, -73, 79, -105, -96, -64, 0, 27, 4, 26, -8, -115, 82, 90, -14, 11, 33, 21, -85, -16, -99, -30, -31, -39, 8, 46, 95, -112, 90, -122, -75, 29, 13, -73, 120, 39, -75, 40, -119, -47, -103, -70, 32, -51, 35, 34, 7, -103, 10, -109, 40, -48, -72, 37, 57, -6, -63, -87, -64, -128, -72, 60, 94, -102};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TelemetryMsg #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblRange msg;
    msg.setTimeStamp(0.9914247758817124);
    msg.setSource(12725U);
    msg.setSourceEntity(10U);
    msg.setDestination(37246U);
    msg.setDestinationEntity(180U);
    msg.id = 52U;
    msg.range = 0.8184547626020688;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblRange #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblRange msg;
    msg.setTimeStamp(0.10472827141758412);
    msg.setSource(62714U);
    msg.setSourceEntity(197U);
    msg.setDestination(56789U);
    msg.setDestinationEntity(193U);
    msg.id = 217U;
    msg.range = 0.9643453624367124;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblRange #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblRange msg;
    msg.setTimeStamp(0.2766463904548465);
    msg.setSource(24343U);
    msg.setSourceEntity(104U);
    msg.setDestination(63846U);
    msg.setDestinationEntity(124U);
    msg.id = 126U;
    msg.range = 0.9842559311437811;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblRange #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblBeacon msg;
    msg.setTimeStamp(0.8749633400589661);
    msg.setSource(26389U);
    msg.setSourceEntity(106U);
    msg.setDestination(51039U);
    msg.setDestinationEntity(181U);
    msg.beacon.assign("PBVRCNARUGZTOCYVQCOGAIUDRIDFLAJYMTTOSSPKKZRTTKFNIVAVJCEFE");
    msg.lat = 0.9968763242058379;
    msg.lon = 0.1799087224425392;
    msg.depth = 0.11538676973804318;
    msg.query_channel = 40U;
    msg.reply_channel = 239U;
    msg.transponder_delay = 75U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblBeacon #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblBeacon msg;
    msg.setTimeStamp(0.5695109225324948);
    msg.setSource(36436U);
    msg.setSourceEntity(236U);
    msg.setDestination(20198U);
    msg.setDestinationEntity(38U);
    msg.beacon.assign("FBLGRIUZYZYSJYUTQEKFUUCEFWJQVOCPUQPLLMJVLERMYIRFZKXNWIOCZOFAFGYATVQDVJHOODAXBSKLGBKDWIJPATBQYDLMCVDFRPBRKTZNJEXSGSPMQYHTIMKLCTPSAZBRKBBNXEQSGUCWTHSCVNRYNOCSUOOEPHGMXOUJOIVWHMIHWDEWPXVNMWUZUQNQLMSMNKFXGDCWLPJHDRXIAGBEFRZJZVXFSHZW");
    msg.lat = 0.3901466564456135;
    msg.lon = 0.2440080741591032;
    msg.depth = 0.6730929848799386;
    msg.query_channel = 127U;
    msg.reply_channel = 13U;
    msg.transponder_delay = 202U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblBeacon #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblBeacon msg;
    msg.setTimeStamp(0.6643944081225505);
    msg.setSource(30960U);
    msg.setSourceEntity(149U);
    msg.setDestination(30410U);
    msg.setDestinationEntity(163U);
    msg.beacon.assign("CVCXZGKZXZXSBTGKYRUH");
    msg.lat = 0.12317895670762746;
    msg.lon = 0.5159469956838989;
    msg.depth = 0.5145466759818111;
    msg.query_channel = 203U;
    msg.reply_channel = 89U;
    msg.transponder_delay = 72U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblBeacon #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblConfig msg;
    msg.setTimeStamp(0.5385555544521131);
    msg.setSource(52225U);
    msg.setSourceEntity(8U);
    msg.setDestination(4108U);
    msg.setDestinationEntity(113U);
    msg.op = 67U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblConfig #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblConfig msg;
    msg.setTimeStamp(0.36648355288933865);
    msg.setSource(43091U);
    msg.setSourceEntity(132U);
    msg.setDestination(53819U);
    msg.setDestinationEntity(12U);
    msg.op = 104U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("OAJUFXUNDCNRVTHMEEWMOUSCOSMGMIWVFLORRIEJBQXMYPXQKJYYKRKXTGWPGDRETJPWNYBXHGIIKVETPVLMUQNYJGYHLMOCCPNTWJIZAHSRAXAWFODF");
    tmp_msg_0.lat = 0.382299042661422;
    tmp_msg_0.lon = 0.9361926513440121;
    tmp_msg_0.depth = 0.7552556299223526;
    tmp_msg_0.query_channel = 13U;
    tmp_msg_0.reply_channel = 191U;
    tmp_msg_0.transponder_delay = 211U;
    msg.beacons.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblConfig #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblConfig msg;
    msg.setTimeStamp(0.11920575961833169);
    msg.setSource(59217U);
    msg.setSourceEntity(239U);
    msg.setDestination(42754U);
    msg.setDestinationEntity(29U);
    msg.op = 118U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblConfig #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticMessage msg;
    msg.setTimeStamp(0.2568417535911307);
    msg.setSource(48910U);
    msg.setSourceEntity(195U);
    msg.setDestination(8083U);
    msg.setDestinationEntity(35U);
    IMC::Land tmp_msg_0;
    tmp_msg_0.lat = 0.5760822429607115;
    tmp_msg_0.lon = 0.47817605558972665;
    tmp_msg_0.z = 0.5572496753023959;
    tmp_msg_0.z_units = 157U;
    tmp_msg_0.speed = 0.1836865044592414;
    tmp_msg_0.speed_units = 178U;
    tmp_msg_0.abort_z = 0.5715136123909975;
    tmp_msg_0.bearing = 0.5902266280903418;
    tmp_msg_0.glide_slope = 127U;
    tmp_msg_0.glide_slope_alt = 0.9552297161298876;
    tmp_msg_0.custom.assign("TTSYYKVHIRMGFBNZMSTROXFQTQACWOLTEGKRVPJNIAFZEERQJOUJRATDPPLVVIXVSZBPZDHWTH");
    msg.message.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticMessage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticMessage msg;
    msg.setTimeStamp(0.7772957831597674);
    msg.setSource(58472U);
    msg.setSourceEntity(201U);
    msg.setDestination(32140U);
    msg.setDestinationEntity(142U);
    IMC::Collision tmp_msg_0;
    tmp_msg_0.value = 0.24701266127356358;
    tmp_msg_0.type = 122U;
    msg.message.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticMessage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticMessage msg;
    msg.setTimeStamp(0.8324874938262562);
    msg.setSource(38725U);
    msg.setSourceEntity(168U);
    msg.setDestination(30131U);
    msg.setDestinationEntity(149U);
    IMC::UamRxRange tmp_msg_0;
    tmp_msg_0.seq = 27676U;
    tmp_msg_0.sys.assign("IZIBLWLYWFOYPTERPEXDCILLRAVGZYGQVOAGBUIYNEDWDMAZICFQFSQWVGDDVVPNIWUMJTRAZUBKHHWYJEUBMWNMPVZUNECZTYKSSOANDUQLGXJOVCBBGHNYMRRJELIXHVIFHJXGKQ");
    tmp_msg_0.value = 0.717361217258209;
    msg.message.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticMessage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SimAcousticMessage msg;
    msg.setTimeStamp(0.07899395729252234);
    msg.setSource(38028U);
    msg.setSourceEntity(169U);
    msg.setDestination(30249U);
    msg.setDestinationEntity(239U);
    msg.lat = 0.3039795745023338;
    msg.lon = 0.5772109487047141;
    msg.depth = 0.815970728824437;
    msg.sentence.assign("DOCFVZFAKHIAJYTDGZSTUMYVLBZCWZOWKRGISXYTXUOKSHQMRDNPWHPUBGJBNOWNFTNQYCHZSPUFUDJAQTGPJRUQRAXQYSUDEHLAGIHMGVLORBAAPEQSENLRBWJKKTNQRVOIPOEGEXMLHKTCPFGFXEZDXLFPNUMKOJRSBVVYHQYDWOSIJNEXAZSWZWBALMMENBVDCBVLXFTCQORJRBTQUHELCCXMHWPKIGGKACDZPINTEIZWYKVUMDIJLVI");
    msg.txtime = 0.08690197505654074;
    msg.modem_type.assign("OYAGKESBXVWIGNFLORMUNPDSLEUEKIMZEMEX");
    msg.sys_src.assign("FDLWPQOFJGB");
    msg.seq = 16527U;
    msg.sys_dst.assign("DNWXMZYNMEGSYYCPQVVFZWNUYNMYTYIJCSVDLOWBOOWOTKHSHQJFXKXPCSJKIKFOGCQSPZTJVZMHFHFRUYXIWQSZNBWETXADLAAROMELRKBUQVQDCGIWBPGXZFDTHLBKYJCOJUHMZEDRIHRZXANIZQWPQUBWTOGPJIUIUNSPCMBLTVJROLRHP");
    msg.flags = 64U;
    const signed char tmp_msg_0[] = {12, -106, 78, 87, 58, 77, -120, 49, -24, -39, -72, -80, -112, -64, -73, -79, 72, 99, -2, -7, -33, -36, 14, 26, 49, -77, -7, 118, 48, -109, -68, -92, -39, 12, -110, -83, -37, -118, -88, -110, 10, 65, 79, 73, 43, -32, 63, 109, -120, 114, 62, 39, 23, -18, -63, 43, -108, -127, 42, 12, 114, 69, 63, 100, 72, 18, 116, 12, 99, -66, 35, 39, -17, -12, 84, -101, -117, -100, -8, -60, 62, 69, -113, -21, 122, -30, 41, -25, 123, -106, -119, -89, 39, -85, -121, 74, 48, -60, 2, 40, 33, 79, 125, 125, -103, 97, -63, -99, 101, 37, 100, -10, 22, 14, -39, -90, 35, 50, -86, -126, -30, -14, 42, 91, -83, -40, 52, 38, 7, 120, 35, 108, 50, 65, -54, -43, -38, 103, 93, 20, -81, 103, -7, 76, 65, 20, -124, 62, -124, 54, 57, 58, -70, 81, 74, 57, -87, 96, 4, 74, 123, 66, 86, 116, -95, -92, 105, 36, 116, -118, 54, 83, 114, -84, -57, 115, -120, -79, 107, -72, -70, 123, 65, 47, -69, -75, -7, 33, 12, -72, -53, 35, 96, 59};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SimAcousticMessage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SimAcousticMessage msg;
    msg.setTimeStamp(0.2080219120286867);
    msg.setSource(50016U);
    msg.setSourceEntity(39U);
    msg.setDestination(11221U);
    msg.setDestinationEntity(177U);
    msg.lat = 0.9708557310918614;
    msg.lon = 0.9771943958334989;
    msg.depth = 0.6067441872796192;
    msg.sentence.assign("HRJQTFGTNMRQBWLCPJIBRLCXGOROCBOPEXSEEGMYZMVXXMBASVVIYEPQIXWLICHSBKNJNTHFDJNMHRTDUAARCNNDTEBYCCYNZSJXFIDGHWLIVAHYZOWTRAHKLFDVMKAGHAGQDVZRFBQUYAVHEEPCWOVLUIZKDPYPURZDUPQJSEQG");
    msg.txtime = 0.6436459166653081;
    msg.modem_type.assign("XBPVODDBWROBEEKHAUMQIHZPPLTQMVDEYDXAADCCIYRKZJZLITBSEUUDMKKSPIUCLSLZBJIHGO");
    msg.sys_src.assign("RBXDXUGSWUVTRNQSDFJGBLGRZLABWNVKUHLNUDHCPRKYEOIXANNOGLOFMNRNUYEJJLWUOSVMCFKDCTHYZMIHIJZWXETTUEJIOTAQUEIONFCJMZPTDPMGBCQQFBBVMQPDAQIKSUAIKIVYAYKCPDHSWLSTZYGNMELHVP");
    msg.seq = 19947U;
    msg.sys_dst.assign("PQSXZHHGOWVFHUDRKHGMIADMZXUNDYSWDXLJBRZHDKYRXOXARECAIQMMNBPGFYANSRBQILBTERJYPC");
    msg.flags = 133U;
    const signed char tmp_msg_0[] = {93, -90, 20, -113, -21, -87, 45, 60, 93, 59, 109, 32, 64, -42, -72, -100, 113, 70, 71, -84, -105, -89, 14, 90, 103, 92, 38, 111, -104, 104, 108, 55, 38, 77, -106, -67, -86, -14, -63, -21, -64, -55, 71, -69, 14, 14, -100, 89, 65, 4, -26, -118, -100, 115};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SimAcousticMessage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SimAcousticMessage msg;
    msg.setTimeStamp(0.3811305402940717);
    msg.setSource(50517U);
    msg.setSourceEntity(171U);
    msg.setDestination(206U);
    msg.setDestinationEntity(235U);
    msg.lat = 0.5571934727102918;
    msg.lon = 0.5710199660499683;
    msg.depth = 0.8823367158516585;
    msg.sentence.assign("RPSAHSASUMLXMLBHZGEXMZOQWSYZMLDIFHJPLT");
    msg.txtime = 0.1663033399634426;
    msg.modem_type.assign("BTKAIDKYPRECYVIEGUCOPCWEDMSMZIOHOZQJXIFQMFFRLTGJAIGSDLROWQIHLDOIWGJIXNPVPJUXPPRVORVPSZNJNEYIZNUAWFLSWR");
    msg.sys_src.assign("VUGVOJXNEBEJCWOGEDTKCKDKGFKTTXTIZPWOFAIEGXXQHOXTRNQFUGJWXVIQUCMKBDJQZNMAQPMLQLJVNNSQHYZVZCYETHEIMHNJRSK");
    msg.seq = 1221U;
    msg.sys_dst.assign("HHSKUUBDJMOEVXDAHRYA");
    msg.flags = 233U;
    const signed char tmp_msg_0[] = {43, -67, -57, 0, -30, 118, -29, 109, -19, -31, -116, 30, 112, -76, 82, 49, -56, 16, 93, 25, 46, 112, -80, 1, 76, 43, 63, -47, 76, 96, -125, 87, 49, 108, -33, 103, 109, 101, 29, 62, -120, 93, -1, -26, -55, 102, 70, 19, -101, -104, 27, -100, 20, -80, -81, -36, -32, 41, -87, 4, 53, -49, -39, 3, -128, -102, -76, -87, -118, -95, 35, 56, -75, -64, 118, 2, 113, 3, -24, -65, -79, 13, -71, -107, -1, 94, 10, 8, 46, -67, -74, 78, 93, -76, 26, -28, 2, -79, -84, -26, 120, 29, -3, 42, 88, 3, -68, 35, 82, -108, -18, -68, -3, -35, -104, 6, -33, -74, -114, 125, -2};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SimAcousticMessage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticOperation msg;
    msg.setTimeStamp(0.17195289945673953);
    msg.setSource(29235U);
    msg.setSourceEntity(45U);
    msg.setDestination(20030U);
    msg.setDestinationEntity(232U);
    msg.op = 176U;
    msg.system.assign("PQYDLKRKXAZEUIJJIECGKETJZGRZUINHLRVWCZEGXWRNUZNSBHFFHXIYOWDMTOASHQEAYYSHVDJNEUPGXGIMDQCLNENKQUDYPVDSTMHFMQVFTXSISQVCCAOPRQTYOTZFFOJKADGNHGBQRRBAZGXKFPBTGCSEHAWFXACATBLBYLOVQSLMXWWMFKMWSUPMYJHWYIAVNQVWJDKTCLFVC");
    msg.range = 0.774229334262011;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("KKSNWMZFGIIZLWALHUIDQUJLSLHWANCMRYZOBUFPXTLZWWQXFJDSIAUPOKQNNPCSGVOPENPYIVKSNLGUYFBDHWVAUUXGORHZHHUEMGNVRNCLMBUPAZIGOSQNHTWGFPLRYXRJTSOZTAARBFNRFQEZETYQFTPXKBIJOJRYDMEXQKSKOQUEXTVVMCRSBPMVWZDQZXBJDLCEDVJLMBFTMHCCPQMGGYOXATWVKIYVWCO");
    tmp_msg_0.description.assign("KYUXPOXSPYIFOAINHLRSABEWJANQSCCXRHJFAVGRBWLBZGRFEVUVPOGTULTRSXNUQYQXLKWZGYSUFWUBNNZDTDJFGHWEVYDMYMMGYYDOHEOQZIAQKWRFKGZFSQHKESNZIEBJVGHSMNBCJBILKTFTL");
    tmp_msg_0.vnamespace.assign("CIRHJZPBFBGSTEMAQNMKVBMFIDDPYTODZUDFYVYOKVLWOHQBBMIIGIJJSAYQVKQBBDYMJEJHLHULEQYLUTIKEPKZPXPABUWXXWDIZAGTCUMJRNTGHXHZPWGOJATRMLSDWVAUGTKIKLWLGCXVMSYYOZKFZDSSASNORUMUXVVXFRHUNENVYXO");
    tmp_msg_0.start_man_id.assign("HPHZYKQNFCVAVUNETTIJXTWTFLWNMFXZZUSFDSYWICNXSFIUOLWYLAQSQUDUKPOEGKZDLPHJJKEKRDBMSSHCNZBSCHDYEWQAHMGNOUKJAUOIRDXELMDQWBYZBRRXNPDMMCISKVRWOBMHJBMOVYRLUIRGLCAVOOSWPBAZAJRNCBOYJQZAQTAYLGMTUGKGVFHQZIVPDEHMCDXZXYOJTKYEVCIXFKPTBWGGGLJIEXFPCPR");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("AOZBVLLIFTFUWQEUSRLYQUXQHBPMDNRKENZDLVBFYCRGPTXSCZWWSKNYUWTYQWZBZHBKKEJHUUYPBOTJKSGXXGMVGU");
    IMC::Rows tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.timeout = 40541U;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.3014125647015071;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.8034480172345184;
    tmp_tmp_tmp_msg_0_0_0.z = 0.7642620888377019;
    tmp_tmp_tmp_msg_0_0_0.z_units = 124U;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.8178509888836074;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 148U;
    tmp_tmp_tmp_msg_0_0_0.bearing = 0.9414081034410211;
    tmp_tmp_tmp_msg_0_0_0.cross_angle = 0.991434667669385;
    tmp_tmp_tmp_msg_0_0_0.width = 0.4604162117823456;
    tmp_tmp_tmp_msg_0_0_0.length = 0.4454072071243814;
    tmp_tmp_tmp_msg_0_0_0.hstep = 0.04566375538650391;
    tmp_tmp_tmp_msg_0_0_0.coff = 57U;
    tmp_tmp_tmp_msg_0_0_0.alternation = 188U;
    tmp_tmp_tmp_msg_0_0_0.flags = 243U;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("HBEGADKBZVOFIGSNICPTZVWUMVYRWHBJQAGQLBJGFHLUKHBOKJCFULGCSURCSDRVFXNZEVWWCHHOUMMLQQIJGAHIRQRAJGXTXIBEOWQLDYRKGNHMZIYKEYAUTEYNLNYUISNXPMDJFRKJMOXBOXVNWEPDFHYANZOHVTVBUTTKEZAXDDWQSLITOAW");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::VerticalProfile tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.parameter = 118U;
    tmp_tmp_tmp_msg_0_0_1.numsamples = 178U;
    tmp_tmp_tmp_msg_0_0_1.lat = 0.6611071410943689;
    tmp_tmp_tmp_msg_0_0_1.lon = 0.04442524334574638;
    tmp_tmp_msg_0_0.start_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    IMC::DesiredPitch tmp_tmp_tmp_msg_0_0_2;
    tmp_tmp_tmp_msg_0_0_2.value = 0.7897544690459783;
    tmp_tmp_msg_0_0.end_actions.push_back(tmp_tmp_tmp_msg_0_0_2);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("HIFGAOFBYZZDPOQFCUNQXPHGFVKBVRWTSQEJIIAXXSDTRPHLYUIYQQQJGYBJRPZZWJ");
    tmp_tmp_msg_0_1.dest_man.assign("JROZWQPDOURKNTAWMLHEWERYNYUHONSJHMFOPCBEGIIMULKPIBCEKTHFVZNUGTDDPJFZTFFFVLEPDGBCIXRTQLRVDBVIMOAVZKIXGQRFZCTCPQEUQQAWHP");
    tmp_tmp_msg_0_1.conditions.assign("OFUWEVQPVQKYWACSWCSJWJSJTVGRDYUKEZCZAXHNUFJENBDFWNTMSTMGPXGDUAQNLYNMERQKSQSRYVIUIIRRUFLXFKPDDRKZFYSHVPRLOTEDCBAZLOHSFTVOAGOHWPMGUUGFDOGJISMROPIQNNJBWERMUMGZORBYHVBIYCLJALXPZGWQITXAJJBWVZHAHEIVOLVYD");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    msg.msg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticOperation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticOperation msg;
    msg.setTimeStamp(0.39522212746896457);
    msg.setSource(61159U);
    msg.setSourceEntity(214U);
    msg.setDestination(48133U);
    msg.setDestinationEntity(254U);
    msg.op = 157U;
    msg.system.assign("LYYSHMDSDHPUVBGQEMBYBNJDRAVLGGZ");
    msg.range = 0.4209274834529396;
    IMC::AutonomousSection tmp_msg_0;
    tmp_msg_0.lat = 0.15280323689325603;
    tmp_msg_0.lon = 0.5912580291047298;
    tmp_msg_0.speed = 0.04406860443984795;
    tmp_msg_0.speed_units = 118U;
    tmp_msg_0.limits = 225U;
    tmp_msg_0.max_depth = 0.09610486849677813;
    tmp_msg_0.min_alt = 0.6309665150280538;
    tmp_msg_0.time_limit = 0.7161052528791103;
    tmp_msg_0.controller.assign("NODDQDNQVUGETHWQLEPSZJTXEMHVWKGOYIQCUSRDGQORNRJUAWXKNEOAVAKLFQJHXB");
    tmp_msg_0.custom.assign("VZKJCEMKYBWUYSHMCDIJZQNESSIPYFBNLBRBQSEVLGAWISGLPWKHDDHN");
    msg.msg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticOperation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticOperation msg;
    msg.setTimeStamp(0.83504223045366);
    msg.setSource(1438U);
    msg.setSourceEntity(126U);
    msg.setDestination(60931U);
    msg.setDestinationEntity(140U);
    msg.op = 199U;
    msg.system.assign("CIRHQLIYBHWBLNXNBAPQQJKKODNHWADZVAGF");
    msg.range = 0.6518219019228739;
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("EHLRJRCUOAKGUXQSPELLWKLAUFNQXK");
    tmp_msg_0.attr_type = 59U;
    tmp_msg_0.min.assign("WMKRILRBUZYKJKPLQJIHHXQOONDIICBLUDOTYXDPUHVHCGGFTPLBUYDJVJGBXTHANZTROLJUNVHGWOEXYGZWKRVEMWYDSGVSOVATSEBTBZKUQYQQGJAQNCBEMFKFIFTSFINTZVRPXAHOEAWNFUZHDCQOICNOMQSWZXLWSNAXMWLAQFEDEGHXCPYEPJVFIFRLLTIYYTJDMA");
    tmp_msg_0.max.assign("ZCMLDWJIWGDLZZCDAPVHBZCIBBZXEHDJKWZVQNWEUWVGRBHFRVCCCOBQHSKEINTSLYJNBPYRFSLELBQAWAYLTXWDOIEVIWGKMJNAHDGGPVYFUKNPTXFFTRCEJLMFATRIHQDSGDBRU");
    msg.msg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticOperation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticSystemsQuery msg;
    msg.setTimeStamp(0.2309384729911126);
    msg.setSource(8755U);
    msg.setSourceEntity(103U);
    msg.setDestination(23043U);
    msg.setDestinationEntity(34U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticSystemsQuery #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticSystemsQuery msg;
    msg.setTimeStamp(0.5054253783543704);
    msg.setSource(38898U);
    msg.setSourceEntity(139U);
    msg.setDestination(38947U);
    msg.setDestinationEntity(81U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticSystemsQuery #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticSystemsQuery msg;
    msg.setTimeStamp(0.2747976491802502);
    msg.setSource(49478U);
    msg.setSourceEntity(153U);
    msg.setDestination(48813U);
    msg.setDestinationEntity(180U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticSystemsQuery #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticSystems msg;
    msg.setTimeStamp(0.6365745980902702);
    msg.setSource(65012U);
    msg.setSourceEntity(32U);
    msg.setDestination(21382U);
    msg.setDestinationEntity(70U);
    msg.list.assign("SPAAIGJCUHVKJXSTGBHWLLEFTVQCUKFIECZMRRKUZWQNWDUEKGNRCCDRIQNTHBWQXINZKCAQEMSROLTLWJPWYDTPZZMOYVQBWPSKLDASUGVULLDEKEVFVQDFHQJDDMYSKJICKIYNZNPHTWTAHRGAXQCBWHZFVZIVOIKOOPYBPEPRRPQXPAYYGMUBZYCOOVMNXBJXUSGBXFOSMR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticSystems #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticSystems msg;
    msg.setTimeStamp(0.5759905414332428);
    msg.setSource(2459U);
    msg.setSourceEntity(117U);
    msg.setDestination(11998U);
    msg.setDestinationEntity(99U);
    msg.list.assign("QZZZJOJBKYMQOINJLJPTBCGCXVYIONBKYGBDYUFTEVGWBVUADIPXTQZGODCIFBAEOCJOHJYFPSYHQWIWXIGHCTNIYSTKUJQALBOUFUSKPSWESCJV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticSystems #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticSystems msg;
    msg.setTimeStamp(0.8208639989971185);
    msg.setSource(41422U);
    msg.setSourceEntity(10U);
    msg.setDestination(65292U);
    msg.setDestinationEntity(29U);
    msg.list.assign("OGZIJIZRVMRNUEWSXOWULGCZKHYBHERUNERMYDQUFMVXCWEDHLCCSCLOWPZLCPPLQONPEWNILPKKTQJAIGUZAVGBCXTOTXDVFDGXOGLSRPJONWJSPGTTAOBYMMIVHFUGDJBKAUSTEATXADDHKYEAQTBXKLVRPIURPDESJVHGYBBEQDFVABHHPQZWNWDNRYIRXZJXSCZEVKBQYNMMYIVFCMLKRFAJXQYM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticSystems #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticLink msg;
    msg.setTimeStamp(0.940233665854217);
    msg.setSource(65504U);
    msg.setSourceEntity(95U);
    msg.setDestination(65204U);
    msg.setDestinationEntity(163U);
    msg.peer.assign("MTIOVVWZPSCNLUVGXHSRKKEQMFKZJLPXSKDKBGMWFZCKHBISORJCBIWRYC");
    msg.rssi = 0.41781427060179055;
    msg.integrity = 7211U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticLink #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticLink msg;
    msg.setTimeStamp(0.14802104161360286);
    msg.setSource(58147U);
    msg.setSourceEntity(240U);
    msg.setDestination(4286U);
    msg.setDestinationEntity(18U);
    msg.peer.assign("NRUNHZLJHKDUNPPROLTWPFYQQKYAOGLXNSNNNRISIECXYXMELHVRAKCBUKRWMBCSYIDPYOAQWGSVUXDAPESXAGMILHUOHKULPWJZHELDPKJRTJJWCYDVQTKHSWCTNDEFVO");
    msg.rssi = 0.3585339854201993;
    msg.integrity = 37210U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticLink #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticLink msg;
    msg.setTimeStamp(0.46725898690127854);
    msg.setSource(46765U);
    msg.setSourceEntity(221U);
    msg.setDestination(56536U);
    msg.setDestinationEntity(45U);
    msg.peer.assign("ADUCKLQYRFSTCAHPBQWQYY");
    msg.rssi = 0.4547927937506844;
    msg.integrity = 27451U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticLink #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticRequest msg;
    msg.setTimeStamp(0.12171806691316489);
    msg.setSource(56560U);
    msg.setSourceEntity(64U);
    msg.setDestination(39463U);
    msg.setDestinationEntity(26U);
    msg.req_id = 5374U;
    msg.destination.assign("EHMHKZTKRCZSIXEQTGCVEBTBPKAQEPFEOJDHUCEOARDYYAIHYJDOCPMWDNKSLTGBNZWIQHVGPXJBBXUUYALTCNSMTOFHUFQPPSAFKWNFDLCGUERMDNKCWTOUZXGVLICACMVHUWPPECOSZUJJQGJVQZXVOVIBQFILPKSXSRWAFWLISLXTH");
    msg.timeout = 0.5699603121990275;
    msg.range = 0.5534999335437787;
    msg.type = 71U;
    IMC::FollowReference tmp_msg_0;
    tmp_msg_0.control_src = 11913U;
    tmp_msg_0.control_ent = 241U;
    tmp_msg_0.timeout = 0.041155107172256566;
    tmp_msg_0.loiter_radius = 0.05709486892440352;
    tmp_msg_0.altitude_interval = 0.553825981118063;
    msg.msg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticRequest #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticRequest msg;
    msg.setTimeStamp(0.9085783181483306);
    msg.setSource(6611U);
    msg.setSourceEntity(221U);
    msg.setDestination(50615U);
    msg.setDestinationEntity(157U);
    msg.req_id = 41069U;
    msg.destination.assign("XZJOEADSGMETKSIUTEFGECCESULBSINNXHLWIUXXUJOPHWQILNONUUPAUNHBIDKQOKFRNSMS");
    msg.timeout = 0.6042613477316248;
    msg.range = 0.8134185011074148;
    msg.type = 87U;
    IMC::HistoricCTD tmp_msg_0;
    tmp_msg_0.conductivity = 0.614217260278537;
    tmp_msg_0.temperature = 0.15702427008506803;
    tmp_msg_0.depth = 0.9095703255361537;
    msg.msg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticRequest #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticRequest msg;
    msg.setTimeStamp(0.764014529570206);
    msg.setSource(6963U);
    msg.setSourceEntity(3U);
    msg.setDestination(26775U);
    msg.setDestinationEntity(211U);
    msg.req_id = 26681U;
    msg.destination.assign("VAODESNQLOKZXMBBLMGBLYZWHILCTXHPPNUOLWPFVCQAXYSOEVTIQHRQCGSHJRNDBMHWDLHPGBAZXRIWGFHLJFOBUSDTORFZTLHAYNFRCZEMXMMZJWQMABIBAJQUVFZNYSEMQYCSGDEUIQPAAOMVKGWCGGSZHITDNVKYAWDCTFSUEEPDXVQFYYDWA");
    msg.timeout = 0.9847603959595366;
    msg.range = 0.3499097825501546;
    msg.type = 40U;
    IMC::FormationEval tmp_msg_0;
    tmp_msg_0.err_mean = 0.8186377498197289;
    tmp_msg_0.dist_min_abs = 0.20566053621668146;
    tmp_msg_0.dist_min_mean = 0.48812839826284593;
    msg.msg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticRequest #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticStatus msg;
    msg.setTimeStamp(0.24641025445455322);
    msg.setSource(20509U);
    msg.setSourceEntity(64U);
    msg.setDestination(641U);
    msg.setDestinationEntity(60U);
    msg.req_id = 4349U;
    msg.type = 9U;
    msg.status = 51U;
    msg.info.assign("HFIOJWIKNMZTZJQQIAYPHZAXMMX");
    msg.range = 0.839674887307298;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticStatus msg;
    msg.setTimeStamp(0.8051270118857831);
    msg.setSource(54564U);
    msg.setSourceEntity(5U);
    msg.setDestination(64195U);
    msg.setDestinationEntity(36U);
    msg.req_id = 3294U;
    msg.type = 180U;
    msg.status = 173U;
    msg.info.assign("BTEPUYHJDXWOZQSOCRYIDKEODODVKTNBRXKVTAZAEMUDJWIXOXELTZDVRVIGAAHMMDOCGUWUWLSURJNJJPXGVPYPKVLVEMHNYCIOGJWYSERXLSAGBUTOMSEBWMPNWVHKNERFTSFWGZFLUZMNLOJSVWQGHNIHRUKNLFORFPKCUZXYYIMCTLZEKHDSQRTQKFCBACACJZFLRAFWSXLMZDYIQJXVSGCXAUQTMPPHAFHQDPPIKGBEGJYNZQTB");
    msg.range = 0.19337650403859152;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticStatus msg;
    msg.setTimeStamp(0.4577397386311861);
    msg.setSource(35397U);
    msg.setSourceEntity(96U);
    msg.setDestination(57958U);
    msg.setDestinationEntity(160U);
    msg.req_id = 8554U;
    msg.type = 88U;
    msg.status = 155U;
    msg.info.assign("MDNSMOFKOXILZLIZBDVQXCHZZOJQWQCQGMMLJFAYESBHKRVYTPCAREPYVDDKSCTAXNZWEBFJK");
    msg.range = 0.10485932385839669;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticRelease msg;
    msg.setTimeStamp(0.4882414232553609);
    msg.setSource(301U);
    msg.setSourceEntity(239U);
    msg.setDestination(56082U);
    msg.setDestinationEntity(253U);
    msg.system.assign("XEKRZYUDNGVKXWAMLRRRDHWWIQSTSZICPLLEBABEELQCPYYGWKWHCHUPRIIVECDXSSUFMWHXITHQOSNYKBRZCIUJLHVCOKTDTZHGKOAEBNWUUDYNDFUROVEKCHQVYSQPLNOGAZFTJSVGMCWPFDJBVPFTWEFOZFEVGQRZQKNNPJCSJJLAXAAFMTVMYMAIIXZBOMUB");
    msg.op = 163U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticRelease #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticRelease msg;
    msg.setTimeStamp(0.34019054799838155);
    msg.setSource(15604U);
    msg.setSourceEntity(198U);
    msg.setDestination(13341U);
    msg.setDestinationEntity(41U);
    msg.system.assign("QOPLSFTKAVPXSUVFBHPMUYIGZYAYAIBPNFWLAYTUAPYENHFJUGQXKIXZNAGBJRCACVOEZLGXTOQPBSEVJWRJYCQLEDIJHSADKRAQZUGGCTEYZIJCTQKHIPLQSLILYUMZJBFLCWZVXFPXJMRUCLHKNVXGRETBGEFDBVSDQKUUSWMCUVBRDEATZ");
    msg.op = 103U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticRelease #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticRelease msg;
    msg.setTimeStamp(0.8050861129382741);
    msg.setSource(719U);
    msg.setSourceEntity(142U);
    msg.setDestination(51690U);
    msg.setDestinationEntity(105U);
    msg.system.assign("MMUVFABFCGJSSGIKLEFC");
    msg.op = 47U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticRelease #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Rpm msg;
    msg.setTimeStamp(0.2064321837198846);
    msg.setSource(9792U);
    msg.setSourceEntity(200U);
    msg.setDestination(56375U);
    msg.setDestinationEntity(218U);
    msg.value = 29707;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Rpm #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Rpm msg;
    msg.setTimeStamp(0.9802575230342842);
    msg.setSource(8090U);
    msg.setSourceEntity(191U);
    msg.setDestination(22291U);
    msg.setDestinationEntity(83U);
    msg.value = 11231;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Rpm #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Rpm msg;
    msg.setTimeStamp(0.6760109618447092);
    msg.setSource(14429U);
    msg.setSourceEntity(39U);
    msg.setDestination(35412U);
    msg.setDestinationEntity(18U);
    msg.value = -26824;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Rpm #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Voltage msg;
    msg.setTimeStamp(0.22079218025714797);
    msg.setSource(40507U);
    msg.setSourceEntity(57U);
    msg.setDestination(8311U);
    msg.setDestinationEntity(68U);
    msg.value = 0.5344029354009157;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Voltage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Voltage msg;
    msg.setTimeStamp(0.2792828559889423);
    msg.setSource(64102U);
    msg.setSourceEntity(132U);
    msg.setDestination(33305U);
    msg.setDestinationEntity(248U);
    msg.value = 0.3504513415146536;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Voltage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Voltage msg;
    msg.setTimeStamp(0.650345262183661);
    msg.setSource(59509U);
    msg.setSourceEntity(242U);
    msg.setDestination(40905U);
    msg.setDestinationEntity(99U);
    msg.value = 0.3714275829146426;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Voltage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Current msg;
    msg.setTimeStamp(0.7056105357201992);
    msg.setSource(11922U);
    msg.setSourceEntity(6U);
    msg.setDestination(25683U);
    msg.setDestinationEntity(211U);
    msg.value = 0.3743590878312103;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Current #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Current msg;
    msg.setTimeStamp(0.6243240910719621);
    msg.setSource(50228U);
    msg.setSourceEntity(0U);
    msg.setDestination(62558U);
    msg.setDestinationEntity(162U);
    msg.value = 0.5830773350196962;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Current #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Current msg;
    msg.setTimeStamp(0.8067141460734117);
    msg.setSource(3412U);
    msg.setSourceEntity(12U);
    msg.setDestination(28371U);
    msg.setDestinationEntity(168U);
    msg.value = 0.7654190848604089;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Current #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFix msg;
    msg.setTimeStamp(0.8451811531286803);
    msg.setSource(19961U);
    msg.setSourceEntity(88U);
    msg.setDestination(48696U);
    msg.setDestinationEntity(208U);
    msg.validity = 18807U;
    msg.type = 118U;
    msg.utc_year = 24814U;
    msg.utc_month = 10U;
    msg.utc_day = 159U;
    msg.utc_time = 0.969672095807806;
    msg.lat = 0.19294587335841307;
    msg.lon = 0.8965116994003263;
    msg.height = 0.470006524538242;
    msg.satellites = 72U;
    msg.cog = 0.014307662911281382;
    msg.sog = 0.21655958139583276;
    msg.hdop = 0.2975762101236754;
    msg.vdop = 0.10707545805922969;
    msg.hacc = 0.4853643224024138;
    msg.vacc = 0.4120814586450594;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFix #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFix msg;
    msg.setTimeStamp(0.9965804452684585);
    msg.setSource(21095U);
    msg.setSourceEntity(214U);
    msg.setDestination(35039U);
    msg.setDestinationEntity(167U);
    msg.validity = 47410U;
    msg.type = 193U;
    msg.utc_year = 54296U;
    msg.utc_month = 9U;
    msg.utc_day = 107U;
    msg.utc_time = 0.31799936877556223;
    msg.lat = 0.7535174699196758;
    msg.lon = 0.9516995591748737;
    msg.height = 0.9677796520151307;
    msg.satellites = 227U;
    msg.cog = 0.9482122413271205;
    msg.sog = 0.763200910705157;
    msg.hdop = 0.7242102688759396;
    msg.vdop = 0.676716456519891;
    msg.hacc = 0.25800381527325034;
    msg.vacc = 0.889881465481731;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFix #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFix msg;
    msg.setTimeStamp(0.25401009362045157);
    msg.setSource(48861U);
    msg.setSourceEntity(92U);
    msg.setDestination(28485U);
    msg.setDestinationEntity(107U);
    msg.validity = 5579U;
    msg.type = 152U;
    msg.utc_year = 18205U;
    msg.utc_month = 71U;
    msg.utc_day = 211U;
    msg.utc_time = 0.3285563155449668;
    msg.lat = 0.6910141395460093;
    msg.lon = 0.31427535265396045;
    msg.height = 0.7849368097651684;
    msg.satellites = 38U;
    msg.cog = 0.7325555613633922;
    msg.sog = 0.3022574047268842;
    msg.hdop = 0.6427225939311364;
    msg.vdop = 0.454921207340811;
    msg.hacc = 0.5547025097335442;
    msg.vacc = 0.2848924314226927;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFix #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EulerAngles msg;
    msg.setTimeStamp(0.9355031671759205);
    msg.setSource(23708U);
    msg.setSourceEntity(174U);
    msg.setDestination(35816U);
    msg.setDestinationEntity(8U);
    msg.time = 0.3363917720027557;
    msg.phi = 0.7856004885047279;
    msg.theta = 0.6767539625171708;
    msg.psi = 0.615544608666009;
    msg.psi_magnetic = 0.31489194791616504;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EulerAngles #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EulerAngles msg;
    msg.setTimeStamp(0.7471144191813046);
    msg.setSource(20529U);
    msg.setSourceEntity(38U);
    msg.setDestination(61727U);
    msg.setDestinationEntity(72U);
    msg.time = 0.6534352135794222;
    msg.phi = 0.25542833372090135;
    msg.theta = 0.2168111990681778;
    msg.psi = 0.5030357478424394;
    msg.psi_magnetic = 0.8531667610181464;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EulerAngles #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EulerAngles msg;
    msg.setTimeStamp(0.9715621387086997);
    msg.setSource(43846U);
    msg.setSourceEntity(65U);
    msg.setDestination(58850U);
    msg.setDestinationEntity(188U);
    msg.time = 0.9817692072156465;
    msg.phi = 0.6749893904314627;
    msg.theta = 0.715168081873735;
    msg.psi = 0.26724355801725685;
    msg.psi_magnetic = 0.7379349717115748;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EulerAngles #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EulerAnglesDelta msg;
    msg.setTimeStamp(0.9217398586350734);
    msg.setSource(43233U);
    msg.setSourceEntity(142U);
    msg.setDestination(45904U);
    msg.setDestinationEntity(252U);
    msg.time = 0.8161398233682052;
    msg.x = 0.7136862033863633;
    msg.y = 0.5823339488642912;
    msg.z = 0.2999369789502204;
    msg.timestep = 0.02414805154193167;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EulerAnglesDelta #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EulerAnglesDelta msg;
    msg.setTimeStamp(0.6539712901942589);
    msg.setSource(14330U);
    msg.setSourceEntity(143U);
    msg.setDestination(7528U);
    msg.setDestinationEntity(85U);
    msg.time = 0.5318449223155258;
    msg.x = 0.9819927399416555;
    msg.y = 0.3247571565225753;
    msg.z = 0.7412238618074359;
    msg.timestep = 0.6584015110925922;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EulerAnglesDelta #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EulerAnglesDelta msg;
    msg.setTimeStamp(0.3750914457662968);
    msg.setSource(43818U);
    msg.setSourceEntity(25U);
    msg.setDestination(804U);
    msg.setDestinationEntity(235U);
    msg.time = 0.3169583037048396;
    msg.x = 0.6122790345856292;
    msg.y = 0.02730820175835791;
    msg.z = 0.2529395494992287;
    msg.timestep = 0.13547229228415159;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EulerAnglesDelta #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AngularVelocity msg;
    msg.setTimeStamp(0.2557703054556757);
    msg.setSource(14720U);
    msg.setSourceEntity(111U);
    msg.setDestination(2848U);
    msg.setDestinationEntity(205U);
    msg.time = 0.761250711037663;
    msg.x = 0.40305432710673916;
    msg.y = 0.14797362574448836;
    msg.z = 0.6216363794948435;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AngularVelocity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AngularVelocity msg;
    msg.setTimeStamp(0.8896897922467166);
    msg.setSource(16326U);
    msg.setSourceEntity(233U);
    msg.setDestination(45468U);
    msg.setDestinationEntity(84U);
    msg.time = 0.6759374607488265;
    msg.x = 0.05534211054773319;
    msg.y = 0.1704297529563984;
    msg.z = 0.44887301628278065;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AngularVelocity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AngularVelocity msg;
    msg.setTimeStamp(0.6774112248611265);
    msg.setSource(7076U);
    msg.setSourceEntity(164U);
    msg.setDestination(58285U);
    msg.setDestinationEntity(133U);
    msg.time = 0.29758386375271206;
    msg.x = 0.2343896904314321;
    msg.y = 0.7212542803074622;
    msg.z = 0.0913589499130788;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AngularVelocity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Acceleration msg;
    msg.setTimeStamp(0.6904922007481036);
    msg.setSource(55180U);
    msg.setSourceEntity(62U);
    msg.setDestination(39705U);
    msg.setDestinationEntity(109U);
    msg.time = 0.6521693340214395;
    msg.x = 0.6849120099048289;
    msg.y = 0.8297853855333374;
    msg.z = 0.25668134516454466;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Acceleration #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Acceleration msg;
    msg.setTimeStamp(0.7964040061843451);
    msg.setSource(19783U);
    msg.setSourceEntity(55U);
    msg.setDestination(39434U);
    msg.setDestinationEntity(210U);
    msg.time = 0.5808333764539131;
    msg.x = 0.12057009235110183;
    msg.y = 0.03986694175961436;
    msg.z = 0.477073606015183;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Acceleration #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Acceleration msg;
    msg.setTimeStamp(0.034818314041149545);
    msg.setSource(37400U);
    msg.setSourceEntity(135U);
    msg.setDestination(10072U);
    msg.setDestinationEntity(162U);
    msg.time = 0.06475200355747235;
    msg.x = 0.9631426849371094;
    msg.y = 0.0008975990893151931;
    msg.z = 0.030511562027324968;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Acceleration #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MagneticField msg;
    msg.setTimeStamp(0.10400140187256779);
    msg.setSource(16321U);
    msg.setSourceEntity(20U);
    msg.setDestination(61946U);
    msg.setDestinationEntity(1U);
    msg.time = 0.9247131476919873;
    msg.x = 0.5827458755495633;
    msg.y = 0.16789935026857195;
    msg.z = 0.2939473169136563;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MagneticField #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MagneticField msg;
    msg.setTimeStamp(0.4947229752037805);
    msg.setSource(26312U);
    msg.setSourceEntity(70U);
    msg.setDestination(48992U);
    msg.setDestinationEntity(229U);
    msg.time = 0.6040740731992791;
    msg.x = 0.31077747833824465;
    msg.y = 0.9469034327518473;
    msg.z = 0.3626831865507928;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MagneticField #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MagneticField msg;
    msg.setTimeStamp(0.17053387613764548);
    msg.setSource(34559U);
    msg.setSourceEntity(2U);
    msg.setDestination(19679U);
    msg.setDestinationEntity(67U);
    msg.time = 0.7990740236926501;
    msg.x = 0.8904760041561806;
    msg.y = 0.6902597613665636;
    msg.z = 0.4237342459042769;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MagneticField #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroundVelocity msg;
    msg.setTimeStamp(0.05209577332916415);
    msg.setSource(60128U);
    msg.setSourceEntity(1U);
    msg.setDestination(52786U);
    msg.setDestinationEntity(115U);
    msg.validity = 34U;
    msg.x = 0.0031435740994316674;
    msg.y = 0.7272577739432055;
    msg.z = 0.3272208137980521;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroundVelocity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroundVelocity msg;
    msg.setTimeStamp(0.07939084626145276);
    msg.setSource(57315U);
    msg.setSourceEntity(47U);
    msg.setDestination(33827U);
    msg.setDestinationEntity(229U);
    msg.validity = 162U;
    msg.x = 0.6606621620805159;
    msg.y = 0.28969482480927367;
    msg.z = 0.7523403718044563;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroundVelocity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroundVelocity msg;
    msg.setTimeStamp(0.1849746116593759);
    msg.setSource(41217U);
    msg.setSourceEntity(239U);
    msg.setDestination(5248U);
    msg.setDestinationEntity(59U);
    msg.validity = 117U;
    msg.x = 0.9240809669102141;
    msg.y = 0.44870797566496345;
    msg.z = 0.4368375159826252;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroundVelocity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaterVelocity msg;
    msg.setTimeStamp(0.6298545941193244);
    msg.setSource(60547U);
    msg.setSourceEntity(57U);
    msg.setDestination(29214U);
    msg.setDestinationEntity(80U);
    msg.validity = 232U;
    msg.x = 0.6673648118889088;
    msg.y = 0.7526428538677524;
    msg.z = 0.045311993535934625;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaterVelocity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaterVelocity msg;
    msg.setTimeStamp(0.29590643978298037);
    msg.setSource(65117U);
    msg.setSourceEntity(210U);
    msg.setDestination(40489U);
    msg.setDestinationEntity(69U);
    msg.validity = 176U;
    msg.x = 0.5944799239713225;
    msg.y = 0.17856040030017406;
    msg.z = 0.021407769949060573;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaterVelocity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaterVelocity msg;
    msg.setTimeStamp(0.5451692643587701);
    msg.setSource(1870U);
    msg.setSourceEntity(102U);
    msg.setDestination(30489U);
    msg.setDestinationEntity(173U);
    msg.validity = 135U;
    msg.x = 0.4588041008773551;
    msg.y = 0.5115830506780679;
    msg.z = 0.048799888745519326;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaterVelocity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VelocityDelta msg;
    msg.setTimeStamp(0.10158099295464007);
    msg.setSource(8020U);
    msg.setSourceEntity(139U);
    msg.setDestination(12332U);
    msg.setDestinationEntity(57U);
    msg.time = 0.05600471444572741;
    msg.x = 0.5949473078435626;
    msg.y = 0.3783936854032348;
    msg.z = 0.2902417318900864;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VelocityDelta #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VelocityDelta msg;
    msg.setTimeStamp(0.10074693277728808);
    msg.setSource(63392U);
    msg.setSourceEntity(152U);
    msg.setDestination(57535U);
    msg.setDestinationEntity(196U);
    msg.time = 0.24892451798301474;
    msg.x = 0.7071588163927442;
    msg.y = 0.04574089621445154;
    msg.z = 0.6703192607885329;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VelocityDelta #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VelocityDelta msg;
    msg.setTimeStamp(0.1504273844434656);
    msg.setSource(40562U);
    msg.setSourceEntity(51U);
    msg.setDestination(54288U);
    msg.setDestinationEntity(212U);
    msg.time = 0.5916180408674913;
    msg.x = 0.5021737901556245;
    msg.y = 0.2370726622906848;
    msg.z = 0.14684018111736397;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VelocityDelta #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Distance msg;
    msg.setTimeStamp(0.018597109803777268);
    msg.setSource(306U);
    msg.setSourceEntity(219U);
    msg.setDestination(54499U);
    msg.setDestinationEntity(123U);
    msg.validity = 204U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.6654046884145005;
    tmp_msg_0.beam_height = 0.3030124511915713;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.8545205278375186;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Distance #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Distance msg;
    msg.setTimeStamp(0.0888736845468805);
    msg.setSource(34386U);
    msg.setSourceEntity(56U);
    msg.setDestination(43603U);
    msg.setDestinationEntity(208U);
    msg.validity = 62U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.8727701010600114;
    tmp_msg_0.y = 0.8976758410343764;
    tmp_msg_0.z = 0.07835726454472103;
    tmp_msg_0.phi = 0.07260455335116478;
    tmp_msg_0.theta = 0.004739517574103069;
    tmp_msg_0.psi = 0.3252726180257419;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.19349702290813076;
    tmp_msg_1.beam_height = 0.23410020616870852;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.8472163617744717;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Distance #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Distance msg;
    msg.setTimeStamp(0.1699383467793143);
    msg.setSource(60875U);
    msg.setSourceEntity(36U);
    msg.setDestination(19523U);
    msg.setDestinationEntity(48U);
    msg.validity = 151U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.08740862443630604;
    tmp_msg_0.beam_height = 0.7065605603132155;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.8799781813802281;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Distance #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Temperature msg;
    msg.setTimeStamp(0.037302670185922926);
    msg.setSource(55339U);
    msg.setSourceEntity(190U);
    msg.setDestination(51407U);
    msg.setDestinationEntity(72U);
    msg.value = 0.42888537059570275;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Temperature #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Temperature msg;
    msg.setTimeStamp(0.07560177055947892);
    msg.setSource(22497U);
    msg.setSourceEntity(123U);
    msg.setDestination(58039U);
    msg.setDestinationEntity(223U);
    msg.value = 0.5185838863481038;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Temperature #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Temperature msg;
    msg.setTimeStamp(0.1790611428369122);
    msg.setSource(6467U);
    msg.setSourceEntity(23U);
    msg.setDestination(53666U);
    msg.setDestinationEntity(190U);
    msg.value = 0.5191602893925711;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Temperature #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Pressure msg;
    msg.setTimeStamp(0.12550683821588404);
    msg.setSource(54762U);
    msg.setSourceEntity(62U);
    msg.setDestination(30149U);
    msg.setDestinationEntity(84U);
    msg.value = 0.20523850674773325;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Pressure #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Pressure msg;
    msg.setTimeStamp(0.0513576044835069);
    msg.setSource(21298U);
    msg.setSourceEntity(149U);
    msg.setDestination(36417U);
    msg.setDestinationEntity(22U);
    msg.value = 0.6212270657010134;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Pressure #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Pressure msg;
    msg.setTimeStamp(0.25775256323732376);
    msg.setSource(27366U);
    msg.setSourceEntity(132U);
    msg.setDestination(25634U);
    msg.setDestinationEntity(192U);
    msg.value = 0.4343537926160901;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Pressure #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Depth msg;
    msg.setTimeStamp(0.3957108182742689);
    msg.setSource(3653U);
    msg.setSourceEntity(128U);
    msg.setDestination(30776U);
    msg.setDestinationEntity(171U);
    msg.value = 0.20506137407324743;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Depth #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Depth msg;
    msg.setTimeStamp(0.3015280493759911);
    msg.setSource(40494U);
    msg.setSourceEntity(102U);
    msg.setDestination(2463U);
    msg.setDestinationEntity(89U);
    msg.value = 0.11247057067988842;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Depth #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Depth msg;
    msg.setTimeStamp(0.10703307582701704);
    msg.setSource(28399U);
    msg.setSourceEntity(138U);
    msg.setDestination(30610U);
    msg.setDestinationEntity(229U);
    msg.value = 0.6870195025611967;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Depth #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DepthOffset msg;
    msg.setTimeStamp(0.5589790103660306);
    msg.setSource(2796U);
    msg.setSourceEntity(203U);
    msg.setDestination(57783U);
    msg.setDestinationEntity(142U);
    msg.value = 0.9881011707525575;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DepthOffset #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DepthOffset msg;
    msg.setTimeStamp(0.7965158698268894);
    msg.setSource(15220U);
    msg.setSourceEntity(101U);
    msg.setDestination(1518U);
    msg.setDestinationEntity(219U);
    msg.value = 0.8275044176517481;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DepthOffset #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DepthOffset msg;
    msg.setTimeStamp(0.3924337815659652);
    msg.setSource(3231U);
    msg.setSourceEntity(228U);
    msg.setDestination(18627U);
    msg.setDestinationEntity(84U);
    msg.value = 0.875844885022978;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DepthOffset #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoundSpeed msg;
    msg.setTimeStamp(0.9346341391440802);
    msg.setSource(38993U);
    msg.setSourceEntity(9U);
    msg.setDestination(60605U);
    msg.setDestinationEntity(32U);
    msg.value = 0.9654331975790471;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoundSpeed #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoundSpeed msg;
    msg.setTimeStamp(0.9116277377935159);
    msg.setSource(37467U);
    msg.setSourceEntity(94U);
    msg.setDestination(26886U);
    msg.setDestinationEntity(128U);
    msg.value = 0.10602347590361239;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoundSpeed #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoundSpeed msg;
    msg.setTimeStamp(0.15451376130262529);
    msg.setSource(51758U);
    msg.setSourceEntity(9U);
    msg.setDestination(16962U);
    msg.setDestinationEntity(174U);
    msg.value = 0.42692683803639886;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoundSpeed #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaterDensity msg;
    msg.setTimeStamp(0.14984688573860816);
    msg.setSource(57446U);
    msg.setSourceEntity(103U);
    msg.setDestination(17474U);
    msg.setDestinationEntity(175U);
    msg.value = 0.5314771853609912;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaterDensity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaterDensity msg;
    msg.setTimeStamp(0.9061879887927682);
    msg.setSource(57208U);
    msg.setSourceEntity(100U);
    msg.setDestination(36058U);
    msg.setDestinationEntity(60U);
    msg.value = 0.7305644603059939;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaterDensity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaterDensity msg;
    msg.setTimeStamp(0.5184518362575843);
    msg.setSource(48875U);
    msg.setSourceEntity(44U);
    msg.setDestination(20425U);
    msg.setDestinationEntity(2U);
    msg.value = 0.6187804933391083;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaterDensity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Conductivity msg;
    msg.setTimeStamp(0.5599581030167997);
    msg.setSource(46676U);
    msg.setSourceEntity(241U);
    msg.setDestination(11786U);
    msg.setDestinationEntity(160U);
    msg.value = 0.5005485259380739;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Conductivity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Conductivity msg;
    msg.setTimeStamp(0.2886941544491056);
    msg.setSource(45359U);
    msg.setSourceEntity(244U);
    msg.setDestination(55638U);
    msg.setDestinationEntity(196U);
    msg.value = 0.6551039927909689;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Conductivity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Conductivity msg;
    msg.setTimeStamp(0.8292724210848108);
    msg.setSource(15287U);
    msg.setSourceEntity(90U);
    msg.setDestination(52632U);
    msg.setDestinationEntity(237U);
    msg.value = 0.18722434542046507;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Conductivity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Salinity msg;
    msg.setTimeStamp(0.18149926386700843);
    msg.setSource(54125U);
    msg.setSourceEntity(190U);
    msg.setDestination(50806U);
    msg.setDestinationEntity(51U);
    msg.value = 0.649758705720493;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Salinity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Salinity msg;
    msg.setTimeStamp(0.2048523710273047);
    msg.setSource(36610U);
    msg.setSourceEntity(83U);
    msg.setDestination(18470U);
    msg.setDestinationEntity(2U);
    msg.value = 0.09846616974317224;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Salinity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Salinity msg;
    msg.setTimeStamp(0.5505054995562813);
    msg.setSource(42690U);
    msg.setSourceEntity(151U);
    msg.setDestination(27474U);
    msg.setDestinationEntity(111U);
    msg.value = 0.5698317402960064;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Salinity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WindSpeed msg;
    msg.setTimeStamp(0.4828385665024404);
    msg.setSource(34648U);
    msg.setSourceEntity(96U);
    msg.setDestination(37347U);
    msg.setDestinationEntity(145U);
    msg.direction = 0.4706381490954582;
    msg.speed = 0.9651891484737293;
    msg.turbulence = 0.15499211105613675;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WindSpeed #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WindSpeed msg;
    msg.setTimeStamp(0.41040919969457434);
    msg.setSource(36932U);
    msg.setSourceEntity(178U);
    msg.setDestination(11195U);
    msg.setDestinationEntity(244U);
    msg.direction = 0.4772860290931923;
    msg.speed = 0.829748208829502;
    msg.turbulence = 0.2197160828636886;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WindSpeed #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WindSpeed msg;
    msg.setTimeStamp(0.2994509480984502);
    msg.setSource(45059U);
    msg.setSourceEntity(178U);
    msg.setDestination(34267U);
    msg.setDestinationEntity(47U);
    msg.direction = 0.8719952528186709;
    msg.speed = 0.38918230769255047;
    msg.turbulence = 0.8049470738506554;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WindSpeed #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RelativeHumidity msg;
    msg.setTimeStamp(0.3239396786849803);
    msg.setSource(58681U);
    msg.setSourceEntity(100U);
    msg.setDestination(56435U);
    msg.setDestinationEntity(32U);
    msg.value = 0.7791659102655586;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RelativeHumidity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RelativeHumidity msg;
    msg.setTimeStamp(0.7277620925646507);
    msg.setSource(63825U);
    msg.setSourceEntity(154U);
    msg.setDestination(26896U);
    msg.setDestinationEntity(142U);
    msg.value = 0.8582134161412874;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RelativeHumidity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RelativeHumidity msg;
    msg.setTimeStamp(0.9889402280653086);
    msg.setSource(32860U);
    msg.setSourceEntity(99U);
    msg.setDestination(44336U);
    msg.setDestinationEntity(67U);
    msg.value = 0.33712349415501264;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RelativeHumidity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevDataText msg;
    msg.setTimeStamp(0.8592869331944061);
    msg.setSource(8389U);
    msg.setSourceEntity(127U);
    msg.setDestination(15684U);
    msg.setDestinationEntity(64U);
    msg.value.assign("UDWHRIACMNHSAOSGTPFIJBDSKRYYOBNSZAOGBDCVPBMRVXNGLIVHWTBCQFGNIVAAAMLZWNWFWWSGTYLUWCKHGYOHEVEJCGMGQJGUJCKZMVQLZJYJZMHYJNEWOCZQCEMXTQLWKDSPNDEKCTKTYCUHJIURSUEEZTONKRDKAFUTIXFSWHORODBDYRPVQKYOMKIXPENUTIOPPBHVTZFXFQZBJSXEFUYXDLUSRRQLDXXLIEFAHPLVLPQM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevDataText #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevDataText msg;
    msg.setTimeStamp(0.6131134513535215);
    msg.setSource(31805U);
    msg.setSourceEntity(81U);
    msg.setDestination(62804U);
    msg.setDestinationEntity(204U);
    msg.value.assign("VXHDYSZIOAOFQXXWULQKAURESRNJZEMWDOICMYXBKIZQIOJHFKAHEMRWMVABVFZGSZRTYFSIYCEXFCHLWGDRJEVACBYNJWDUSQJZWPNJPOZRKELOOTXABQFTFXYBPPZSIHWDUGCLFMHJYSEPLJAWCADPLCUXMUVGDKNURUYLDIQCJMCPVPHLGKEIFASLZHGMHVPJKOVOD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevDataText #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevDataText msg;
    msg.setTimeStamp(0.4172144191540671);
    msg.setSource(45442U);
    msg.setSourceEntity(170U);
    msg.setDestination(22598U);
    msg.setDestinationEntity(32U);
    msg.value.assign("TBYIRNSKOZEEUUPFRTOTHTGYLAHGJCNBIBBVXFIESCYWBXPDAGFAPCXZEMBIYUIKHDLYAXNGMCZFXTEYUKANHMVJFPWDJENTGURIOQWCXJQVQJSTDLIVCXOUPOHJZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevDataText #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevDataBinary msg;
    msg.setTimeStamp(0.6698527087355423);
    msg.setSource(27592U);
    msg.setSourceEntity(150U);
    msg.setDestination(700U);
    msg.setDestinationEntity(216U);
    const signed char tmp_msg_0[] = {-99, -6, 18, -29, -28, 54, -125, 105, -61, 19, -57, -121, -65, -61, -91, 105, -35, -119, -101, -4, 82, -71, 41, -34, -31, -26, -75, 64, 70, -3, -9, -38, -29, -52, -100, -90, -62, -35, -33, -105, 110, 117, -64, -17, 121, -47, 30, 55, 64, -52, -73, -10, -28, 14, 50, 88, -108, 107, -28, -55, -21, 29, 20, -7, -78, 75, -37, -10, 52, 4, -9, 126, -108, -84, 72, -76, 22, -21, -64, -70, 9, 111, -3, -107, -36, -59, 73, 78, 26, 73, -42, -10, 105, -66, -40, 114, 105, -24, 38, -47, -8, -128, -49, 37, -115, 57, -95, -69, -2, 24, -66, 110, -123, -90, 98, -91, -79, 43, 94, -72, -8, -13, -16, -85, -24, -39, 13, 51, -3, 43, -1, 53, 18, -19, -44, 47, -24, -64, -70, 67, 47, 15, -45, -64, -62, -66, -14, 90, 77, -75, -9, -65, 105, -68, -30, 0, 68, -109, 10, -104, 109, 95, -39, 113, -39, -41, 33, 10, -59, -68, -117, 35, 33, -5, -46, 113, -124, -66, -35, 51, -120, -99, 29, 60, -53, -98, 0, -6, -18, -104, 58, 27, -42, 41};
    msg.value.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevDataBinary #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevDataBinary msg;
    msg.setTimeStamp(0.3606588505201387);
    msg.setSource(2815U);
    msg.setSourceEntity(187U);
    msg.setDestination(62534U);
    msg.setDestinationEntity(219U);
    const signed char tmp_msg_0[] = {-17, 34, -112, 47, 101, 99, -75, -20, 24, 37, -124, -115, -26, -87, -65, 104, -107, -64, -128, -52, 59, 98, -65, 23, -33, 15, -127, -95, 90, -119, 69, 68, 41, -11, -33, -26, 122, -47, 11, 69, -9, 21, 19, -6, 14, -77, 72, 3, -128, 98, 95, -8, -100, 81, -88, 119, -64, 122, 82, 62, -76, -38, 114, 62, -85, 90, 16, 45, -19, 117, 84, -88, 125, 105, -50, -126, -44, 115, 79, -127, 56, -70, 61, -71, 17, 21, -41, 52, 49, 14, 86, 115, 49, 77, -57, 91, 119, 74, -57, -6, -38, -47, -92, 38, 70, -37, -117, -31, 16, 35};
    msg.value.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevDataBinary #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevDataBinary msg;
    msg.setTimeStamp(0.6826716025149691);
    msg.setSource(64160U);
    msg.setSourceEntity(251U);
    msg.setDestination(7811U);
    msg.setDestinationEntity(55U);
    const signed char tmp_msg_0[] = {-114, -32, 122, 21, 84, 33, -123, 28, -55, -2, -67, 48, 19, -88, -125, 62, -117, 0, 74, 27, 65, -44, -41, -59, 28, -42, 3, 66, 114, -108, -5, 83, -58, -93, -31, 37, 76, -8, -119, 64, -1, -90, 112, -78, -52, -53, -57, -106, -114, -25, -89, 69, -40, -52, -23, -64, -90, 109, 95, 85, 46, -10, 72, 6, -124, 6, -90, -24, -49, -66, -46, 100, -99, -11, 44, 122, -103, -94, 75, -125, -98, -97, 83, -25, 102, 69, -115, 39, 107, 0, -74, 63, 83, 62, -33, -108, 93, -99, 124, -36, -107, 81, 76, -59, -8, -109, -32, 124, 116, -20, -118, -117, 94, 108, -107, -120, 121, -18, -125, 8, -39, -125, 122, -99, -126, 68, -12, -75, -115, 72, 60, 92, 46, -112, 64, 122, 90, -70, -106, -71, 76, 40, -112, 50, 42, 12, 11, 91, -98, -104, 72, 92, 103, -33, 118, -75, 2, -121, -54, 124, 86, 26, 88, -12, -9, -35, 33, 66, -33, -60, 49, 37, -93, 99, 21, -75, 98, -7, -72, 40, -96, -93, -79};
    msg.value.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevDataBinary #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Force msg;
    msg.setTimeStamp(0.852436743288733);
    msg.setSource(53705U);
    msg.setSourceEntity(59U);
    msg.setDestination(1519U);
    msg.setDestinationEntity(211U);
    msg.value = 0.5539429344136684;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Force #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Force msg;
    msg.setTimeStamp(0.3270903051349038);
    msg.setSource(40315U);
    msg.setSourceEntity(86U);
    msg.setDestination(39550U);
    msg.setDestinationEntity(136U);
    msg.value = 0.859149477253336;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Force #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Force msg;
    msg.setTimeStamp(0.9142328439178238);
    msg.setSource(64135U);
    msg.setSourceEntity(235U);
    msg.setDestination(27510U);
    msg.setDestinationEntity(101U);
    msg.value = 0.19361850006980874;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Force #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SonarData msg;
    msg.setTimeStamp(0.7554337969629171);
    msg.setSource(44690U);
    msg.setSourceEntity(14U);
    msg.setDestination(6785U);
    msg.setDestinationEntity(247U);
    msg.type = 242U;
    msg.frequency = 86089366U;
    msg.min_range = 57589U;
    msg.max_range = 53907U;
    msg.bits_per_point = 221U;
    msg.scale_factor = 0.6083507096935155;
    const signed char tmp_msg_0[] = {79, -97, 42, -111, 49, -109, -109, 35, 0, 95, 84, -52, 38, -57, -34, -67, 101, 69, -86, 75, -111, -54, -27, -122, 66, 91, -93, -98, 86, 37, -31, -39, -22, -57, 109, 58, 55, -34, 10, 15, 23, 39, 45, -79, -76, 10, -49, 88, -44, -77, -103, 75, -78, -17, -126, 3, 99, -127, 17, 124, -80, -32, 57, 124, 43, 83, -44, 124, -117, -81, -84, 83, 22, -43, 117, -75, 85, 76, -91, 102, -99, 54, 1, -79, 69, -65, 34, 9, 45, 31, -73, 2, -76, 75, -65, 29, -1, -83, -25, 84, -36, -91, -51, 2, -110, 22, 40, 1, 56, -77, -102, -23, 17, 106, 94, -55, 0, 53, 63, -39, -19, -53, 51, -100, 90, 20, 122, 85, -82, -118, -46, 115, -70, -108, -36};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SonarData #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SonarData msg;
    msg.setTimeStamp(0.5099807165821011);
    msg.setSource(49010U);
    msg.setSourceEntity(243U);
    msg.setDestination(19741U);
    msg.setDestinationEntity(29U);
    msg.type = 169U;
    msg.frequency = 795958227U;
    msg.min_range = 16781U;
    msg.max_range = 7464U;
    msg.bits_per_point = 81U;
    msg.scale_factor = 0.6663681625503605;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.31173643719452104;
    tmp_msg_0.beam_height = 0.47154036308171465;
    msg.beam_config.push_back(tmp_msg_0);
    const signed char tmp_msg_1[] = {-33, -119, -9, 28, 78, -17, 6, 64, -36, -75, 95, -83, -17, 41, -69, -13, -99, 46, 72, -104, 84, 31, 94, -2, -21, 101, -33, 37, -48, 98, -73, 109, -29, -56, -98, -124, -91, 29, -114, -99, -59, -53, 119, -11, 10, 62, 106, 5, -88, -58, -9, -75, 46, 18, -32, -114, 41, 114, 106, -81, -36, -107, -92, -108, -50, 38, -46, -2, -28, -88, 15, 113, -57, 123, -96, -48, -97, -35, -35, 126, -12, -95, 43, 100, 31, -17, 62, 50, 84, 119, -12, -94, 53, 109, -106, 32, -37, 23, -38, -45, 72, 75, -2, 4, -57, -99, 81, 1, -112, -39, -24, -127, 2, 38, 19, -3, 53, 116, -98, 116, -37, -83, 112, -12, -74, -67, 79, 46, 10, -87};
    msg.data.assign(tmp_msg_1, tmp_msg_1 + sizeof(tmp_msg_1));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SonarData #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SonarData msg;
    msg.setTimeStamp(0.5946279209707181);
    msg.setSource(18001U);
    msg.setSourceEntity(216U);
    msg.setDestination(13590U);
    msg.setDestinationEntity(167U);
    msg.type = 64U;
    msg.frequency = 1876716251U;
    msg.min_range = 56000U;
    msg.max_range = 62060U;
    msg.bits_per_point = 164U;
    msg.scale_factor = 0.8921160231336024;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.8096928601155367;
    tmp_msg_0.beam_height = 0.6867731154661418;
    msg.beam_config.push_back(tmp_msg_0);
    const signed char tmp_msg_1[] = {124, 22, 101, -121, 41, 59, 46, -85, -46, -58, -11, 50, -42, 70, 110, -6, 50, 67, -41, 7, 92, 86, 76, 116, 123, -80};
    msg.data.assign(tmp_msg_1, tmp_msg_1 + sizeof(tmp_msg_1));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SonarData #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Pulse msg;
    msg.setTimeStamp(0.32953726957472906);
    msg.setSource(3608U);
    msg.setSourceEntity(40U);
    msg.setDestination(12517U);
    msg.setDestinationEntity(90U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Pulse #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Pulse msg;
    msg.setTimeStamp(0.4982967375132106);
    msg.setSource(9560U);
    msg.setSourceEntity(23U);
    msg.setDestination(60878U);
    msg.setDestinationEntity(101U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Pulse #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Pulse msg;
    msg.setTimeStamp(0.6902774422520073);
    msg.setSource(40586U);
    msg.setSourceEntity(109U);
    msg.setDestination(12611U);
    msg.setDestinationEntity(169U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Pulse #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PulseDetectionControl msg;
    msg.setTimeStamp(0.728502581098912);
    msg.setSource(49062U);
    msg.setSourceEntity(58U);
    msg.setDestination(63006U);
    msg.setDestinationEntity(60U);
    msg.op = 219U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PulseDetectionControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PulseDetectionControl msg;
    msg.setTimeStamp(0.7606910510202917);
    msg.setSource(49508U);
    msg.setSourceEntity(63U);
    msg.setDestination(41664U);
    msg.setDestinationEntity(14U);
    msg.op = 43U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PulseDetectionControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PulseDetectionControl msg;
    msg.setTimeStamp(0.06505981289853746);
    msg.setSource(31795U);
    msg.setSourceEntity(186U);
    msg.setDestination(26587U);
    msg.setDestinationEntity(248U);
    msg.op = 239U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PulseDetectionControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FuelLevel msg;
    msg.setTimeStamp(0.24370363217760915);
    msg.setSource(36680U);
    msg.setSourceEntity(189U);
    msg.setDestination(53180U);
    msg.setDestinationEntity(89U);
    msg.value = 0.2606745830166872;
    msg.confidence = 0.1711720531455181;
    msg.opmodes.assign("TYGWSXLRKPAPAMTVCHMQFMORSPIGTNFSMWEVRSXOQFFJFPVWEKNNSIUJKFMWEJCVHBDJGXZCBZPCIPICRKRZGYTNXDBJTOMUWFNAKXMLLYDGWJAKHZOUCOYUTWZZTFQEBDCEONVLZGSNILHQSEMJANJINBRGQOUBQISKHJPXLARLVKPMUEUFDJXESZHVQMLQXAG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FuelLevel #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FuelLevel msg;
    msg.setTimeStamp(0.851889278052699);
    msg.setSource(28935U);
    msg.setSourceEntity(229U);
    msg.setDestination(53537U);
    msg.setDestinationEntity(2U);
    msg.value = 0.17710913202619372;
    msg.confidence = 0.5978827674853759;
    msg.opmodes.assign("PUFFNYRMAQDEFSCRXPOCEKTQKEKNVQPDSEGCBMDHZLHJTTEKSBGWITUMSFSPIKVOZWAOQUHNNMBHFUUVIJOXXWDQBKRFAAGHHTQYVZGWYODZRMXNNJYOLCIJKGTCFXYSUIOESEGBXHNIEMZFUCLPOOIBVWLWQZXLHRGJJJAQARDHLTUVWLVDZGIZMPCWMXVPVLH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FuelLevel #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FuelLevel msg;
    msg.setTimeStamp(0.7846648065762453);
    msg.setSource(48550U);
    msg.setSourceEntity(162U);
    msg.setDestination(46053U);
    msg.setDestinationEntity(2U);
    msg.value = 0.1427995644080039;
    msg.confidence = 0.5817628968432884;
    msg.opmodes.assign("UAXLXQTFTHOLLMFOTXRZEZDDXFWSOKTTAEWDUYAVJVJCRAPBCHEGBFLIPMKJKERBGIEETMXLKBCRNZYKMGVWUQANIYNFAPUQLIOWZYQWOLAFCBHSEJTDZLJZPVCDXHDKSQVDSHJFIJADENPKTLFGEIWSPVBHOCONFRGGUUYCJOPNMBURFMQBVQAIGSGWVGYBJOBTMTCMAYYURWIRZSPJILXHSWYRXSDXNCICYZEVXKPUDKQPMNGWHSNORH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FuelLevel #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsNavData msg;
    msg.setTimeStamp(0.27161418364323);
    msg.setSource(9300U);
    msg.setSourceEntity(126U);
    msg.setDestination(2034U);
    msg.setDestinationEntity(92U);
    msg.itow = 727917726U;
    msg.lat = 0.4563890586818141;
    msg.lon = 0.9156615032639098;
    msg.height_ell = 0.9155812527488663;
    msg.height_sea = 0.19527910183943198;
    msg.hacc = 0.2770763308725016;
    msg.vacc = 0.5147709322735196;
    msg.vel_n = 0.3715963363903676;
    msg.vel_e = 0.5208872271760593;
    msg.vel_d = 0.8142633854276016;
    msg.speed = 0.8374425466908781;
    msg.gspeed = 0.875227067237226;
    msg.heading = 0.5163633018845978;
    msg.sacc = 0.30587329398029894;
    msg.cacc = 0.751778456979855;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsNavData #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsNavData msg;
    msg.setTimeStamp(0.581073179580611);
    msg.setSource(35457U);
    msg.setSourceEntity(234U);
    msg.setDestination(38695U);
    msg.setDestinationEntity(60U);
    msg.itow = 347632928U;
    msg.lat = 0.8899154242609925;
    msg.lon = 0.9256857318543555;
    msg.height_ell = 0.174745463503292;
    msg.height_sea = 0.7365753793241345;
    msg.hacc = 0.05619045337467177;
    msg.vacc = 0.7711997066055385;
    msg.vel_n = 0.45373695624367527;
    msg.vel_e = 0.954874233753399;
    msg.vel_d = 0.06937201901562584;
    msg.speed = 0.812920340000935;
    msg.gspeed = 0.9702063011401911;
    msg.heading = 0.37502501613032824;
    msg.sacc = 0.3409080788708361;
    msg.cacc = 0.9059724991482778;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsNavData #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsNavData msg;
    msg.setTimeStamp(0.32797749718118063);
    msg.setSource(40126U);
    msg.setSourceEntity(117U);
    msg.setDestination(44114U);
    msg.setDestinationEntity(70U);
    msg.itow = 4247157529U;
    msg.lat = 0.9901452226111438;
    msg.lon = 0.24275971494799164;
    msg.height_ell = 0.2166307966610176;
    msg.height_sea = 0.94443745592395;
    msg.hacc = 0.2646822665886074;
    msg.vacc = 0.332100379070431;
    msg.vel_n = 0.5714496939654664;
    msg.vel_e = 0.20776062623609848;
    msg.vel_d = 0.20352221319409824;
    msg.speed = 0.5365171827283144;
    msg.gspeed = 0.4840416296973561;
    msg.heading = 0.9710914865182467;
    msg.sacc = 0.7502172008005885;
    msg.cacc = 0.42371230876641797;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsNavData #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ServoPosition msg;
    msg.setTimeStamp(0.34221232947264);
    msg.setSource(30522U);
    msg.setSourceEntity(93U);
    msg.setDestination(46181U);
    msg.setDestinationEntity(252U);
    msg.id = 214U;
    msg.value = 0.08858858107989409;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ServoPosition #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ServoPosition msg;
    msg.setTimeStamp(0.9188366775344847);
    msg.setSource(32689U);
    msg.setSourceEntity(106U);
    msg.setDestination(27107U);
    msg.setDestinationEntity(3U);
    msg.id = 3U;
    msg.value = 0.15550676582863932;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ServoPosition #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ServoPosition msg;
    msg.setTimeStamp(0.66234133638737);
    msg.setSource(812U);
    msg.setSourceEntity(82U);
    msg.setDestination(33286U);
    msg.setDestinationEntity(93U);
    msg.id = 192U;
    msg.value = 0.598840266348069;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ServoPosition #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DeviceState msg;
    msg.setTimeStamp(0.3773595964210583);
    msg.setSource(49870U);
    msg.setSourceEntity(27U);
    msg.setDestination(47545U);
    msg.setDestinationEntity(140U);
    msg.x = 0.014645575642483477;
    msg.y = 0.22846522525569757;
    msg.z = 0.3790979139887407;
    msg.phi = 0.7439779357853906;
    msg.theta = 0.9922991955796334;
    msg.psi = 0.0866928545340464;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DeviceState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DeviceState msg;
    msg.setTimeStamp(0.25681683250973253);
    msg.setSource(18909U);
    msg.setSourceEntity(127U);
    msg.setDestination(16928U);
    msg.setDestinationEntity(210U);
    msg.x = 0.23122459722340283;
    msg.y = 0.4774363453668672;
    msg.z = 0.37624961546509883;
    msg.phi = 0.42301000126251154;
    msg.theta = 0.5028573856446934;
    msg.psi = 0.6733139981792589;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DeviceState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DeviceState msg;
    msg.setTimeStamp(0.061367341936778064);
    msg.setSource(59955U);
    msg.setSourceEntity(133U);
    msg.setDestination(34518U);
    msg.setDestinationEntity(174U);
    msg.x = 0.663232029426015;
    msg.y = 0.15435626273755865;
    msg.z = 0.12721211973015945;
    msg.phi = 0.6428323334293319;
    msg.theta = 0.2996439423855074;
    msg.psi = 0.6688577094627196;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DeviceState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::BeamConfig msg;
    msg.setTimeStamp(0.1748022060279325);
    msg.setSource(26005U);
    msg.setSourceEntity(235U);
    msg.setDestination(4348U);
    msg.setDestinationEntity(42U);
    msg.beam_width = 0.1552770245738161;
    msg.beam_height = 0.5392922343128198;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("BeamConfig #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::BeamConfig msg;
    msg.setTimeStamp(0.0643776267041698);
    msg.setSource(39134U);
    msg.setSourceEntity(127U);
    msg.setDestination(57576U);
    msg.setDestinationEntity(89U);
    msg.beam_width = 0.8973299398457993;
    msg.beam_height = 0.7620362410847488;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("BeamConfig #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::BeamConfig msg;
    msg.setTimeStamp(0.04883145422497981);
    msg.setSource(25462U);
    msg.setSourceEntity(140U);
    msg.setDestination(41469U);
    msg.setDestinationEntity(108U);
    msg.beam_width = 0.62660347263387;
    msg.beam_height = 0.5923237884647382;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("BeamConfig #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DataSanity msg;
    msg.setTimeStamp(0.11034754742833308);
    msg.setSource(12019U);
    msg.setSourceEntity(81U);
    msg.setDestination(241U);
    msg.setDestinationEntity(122U);
    msg.sane = 152U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DataSanity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DataSanity msg;
    msg.setTimeStamp(0.685053488244311);
    msg.setSource(42862U);
    msg.setSourceEntity(214U);
    msg.setDestination(15685U);
    msg.setDestinationEntity(244U);
    msg.sane = 61U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DataSanity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DataSanity msg;
    msg.setTimeStamp(0.05011607520530392);
    msg.setSource(14724U);
    msg.setSourceEntity(214U);
    msg.setDestination(27303U);
    msg.setDestinationEntity(206U);
    msg.sane = 207U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DataSanity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RhodamineDye msg;
    msg.setTimeStamp(0.0396197931411042);
    msg.setSource(17734U);
    msg.setSourceEntity(167U);
    msg.setDestination(18294U);
    msg.setDestinationEntity(36U);
    msg.value = 0.20527956370066425;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RhodamineDye #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RhodamineDye msg;
    msg.setTimeStamp(0.2606228841597932);
    msg.setSource(6931U);
    msg.setSourceEntity(196U);
    msg.setDestination(30950U);
    msg.setDestinationEntity(142U);
    msg.value = 0.39801145400863325;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RhodamineDye #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RhodamineDye msg;
    msg.setTimeStamp(0.26946362922575506);
    msg.setSource(12011U);
    msg.setSourceEntity(211U);
    msg.setDestination(39249U);
    msg.setDestinationEntity(194U);
    msg.value = 0.9720360183440895;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RhodamineDye #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CrudeOil msg;
    msg.setTimeStamp(0.8377850221695754);
    msg.setSource(35837U);
    msg.setSourceEntity(52U);
    msg.setDestination(19644U);
    msg.setDestinationEntity(172U);
    msg.value = 0.524349760070551;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CrudeOil #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CrudeOil msg;
    msg.setTimeStamp(0.6237490845220495);
    msg.setSource(58381U);
    msg.setSourceEntity(202U);
    msg.setDestination(1233U);
    msg.setDestinationEntity(79U);
    msg.value = 0.5491725521476774;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CrudeOil #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CrudeOil msg;
    msg.setTimeStamp(0.9410434899040129);
    msg.setSource(18724U);
    msg.setSourceEntity(156U);
    msg.setDestination(26488U);
    msg.setDestinationEntity(182U);
    msg.value = 0.5500558617888269;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CrudeOil #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FineOil msg;
    msg.setTimeStamp(0.34922631661654646);
    msg.setSource(3471U);
    msg.setSourceEntity(190U);
    msg.setDestination(9028U);
    msg.setDestinationEntity(133U);
    msg.value = 0.834566993323655;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FineOil #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FineOil msg;
    msg.setTimeStamp(0.3440080252020937);
    msg.setSource(14484U);
    msg.setSourceEntity(144U);
    msg.setDestination(64598U);
    msg.setDestinationEntity(75U);
    msg.value = 0.0038949871276677817;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FineOil #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FineOil msg;
    msg.setTimeStamp(0.4850948145760555);
    msg.setSource(1842U);
    msg.setSourceEntity(179U);
    msg.setDestination(9090U);
    msg.setDestinationEntity(50U);
    msg.value = 0.19998532028317184;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FineOil #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Turbidity msg;
    msg.setTimeStamp(0.9523116172976852);
    msg.setSource(10578U);
    msg.setSourceEntity(17U);
    msg.setDestination(40657U);
    msg.setDestinationEntity(53U);
    msg.value = 0.3144736296465551;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Turbidity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Turbidity msg;
    msg.setTimeStamp(0.28122315482332627);
    msg.setSource(36986U);
    msg.setSourceEntity(66U);
    msg.setDestination(60095U);
    msg.setDestinationEntity(153U);
    msg.value = 0.828435211933076;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Turbidity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Turbidity msg;
    msg.setTimeStamp(0.6988205142068512);
    msg.setSource(7733U);
    msg.setSourceEntity(240U);
    msg.setDestination(14335U);
    msg.setDestinationEntity(240U);
    msg.value = 0.9777656623885929;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Turbidity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Chlorophyll msg;
    msg.setTimeStamp(0.7488393913456125);
    msg.setSource(60991U);
    msg.setSourceEntity(182U);
    msg.setDestination(20687U);
    msg.setDestinationEntity(1U);
    msg.value = 0.7895150251531818;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Chlorophyll #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Chlorophyll msg;
    msg.setTimeStamp(0.5345587160063174);
    msg.setSource(23038U);
    msg.setSourceEntity(82U);
    msg.setDestination(16776U);
    msg.setDestinationEntity(40U);
    msg.value = 0.8716886305443869;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Chlorophyll #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Chlorophyll msg;
    msg.setTimeStamp(0.7973752841499463);
    msg.setSource(38910U);
    msg.setSourceEntity(76U);
    msg.setDestination(2803U);
    msg.setDestinationEntity(250U);
    msg.value = 0.06970420698530977;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Chlorophyll #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Fluorescein msg;
    msg.setTimeStamp(0.9658340787771859);
    msg.setSource(11264U);
    msg.setSourceEntity(157U);
    msg.setDestination(43677U);
    msg.setDestinationEntity(164U);
    msg.value = 0.44202108705158893;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Fluorescein #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Fluorescein msg;
    msg.setTimeStamp(0.369602214424688);
    msg.setSource(43825U);
    msg.setSourceEntity(17U);
    msg.setDestination(44323U);
    msg.setDestinationEntity(129U);
    msg.value = 0.5003377805225336;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Fluorescein #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Fluorescein msg;
    msg.setTimeStamp(0.46553359374135084);
    msg.setSource(8132U);
    msg.setSourceEntity(144U);
    msg.setDestination(45362U);
    msg.setDestinationEntity(120U);
    msg.value = 0.30164586764866774;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Fluorescein #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Phycocyanin msg;
    msg.setTimeStamp(0.5289126889237302);
    msg.setSource(21676U);
    msg.setSourceEntity(2U);
    msg.setDestination(35374U);
    msg.setDestinationEntity(221U);
    msg.value = 0.9447247766395837;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Phycocyanin #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Phycocyanin msg;
    msg.setTimeStamp(0.7832953966596256);
    msg.setSource(22755U);
    msg.setSourceEntity(36U);
    msg.setDestination(28731U);
    msg.setDestinationEntity(186U);
    msg.value = 0.47050750238415173;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Phycocyanin #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Phycocyanin msg;
    msg.setTimeStamp(0.9296617057321814);
    msg.setSource(10908U);
    msg.setSourceEntity(156U);
    msg.setDestination(61983U);
    msg.setDestinationEntity(178U);
    msg.value = 0.29038853193514824;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Phycocyanin #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Phycoerythrin msg;
    msg.setTimeStamp(0.7698685782810107);
    msg.setSource(23768U);
    msg.setSourceEntity(226U);
    msg.setDestination(64785U);
    msg.setDestinationEntity(198U);
    msg.value = 0.975416631349924;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Phycoerythrin #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Phycoerythrin msg;
    msg.setTimeStamp(0.9037053930967487);
    msg.setSource(16512U);
    msg.setSourceEntity(167U);
    msg.setDestination(41839U);
    msg.setDestinationEntity(176U);
    msg.value = 0.5145775818602376;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Phycoerythrin #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Phycoerythrin msg;
    msg.setTimeStamp(0.3631539644553178);
    msg.setSource(65471U);
    msg.setSourceEntity(198U);
    msg.setDestination(41617U);
    msg.setDestinationEntity(192U);
    msg.value = 0.5928366767932809;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Phycoerythrin #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFixRtk msg;
    msg.setTimeStamp(0.7860507637943379);
    msg.setSource(58557U);
    msg.setSourceEntity(118U);
    msg.setDestination(8333U);
    msg.setDestinationEntity(13U);
    msg.validity = 59443U;
    msg.type = 159U;
    msg.tow = 2768414888U;
    msg.base_lat = 0.24868285186096417;
    msg.base_lon = 0.13505159076052042;
    msg.base_height = 0.5519562390694008;
    msg.n = 0.5009153563954717;
    msg.e = 0.9265940299702157;
    msg.d = 0.3274730619593592;
    msg.v_n = 0.13080955465180621;
    msg.v_e = 0.9260332523232421;
    msg.v_d = 0.4335302832213275;
    msg.satellites = 107U;
    msg.iar_hyp = 25879U;
    msg.iar_ratio = 0.49898512556979413;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFixRtk #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFixRtk msg;
    msg.setTimeStamp(0.16818347622036522);
    msg.setSource(63890U);
    msg.setSourceEntity(20U);
    msg.setDestination(35423U);
    msg.setDestinationEntity(19U);
    msg.validity = 57150U;
    msg.type = 78U;
    msg.tow = 351717839U;
    msg.base_lat = 0.656786409009813;
    msg.base_lon = 0.6119811227278279;
    msg.base_height = 0.8313684596279592;
    msg.n = 0.6479597886121782;
    msg.e = 0.676536695718408;
    msg.d = 0.3081626743924868;
    msg.v_n = 0.9059087034987816;
    msg.v_e = 0.03012565478662399;
    msg.v_d = 0.15045225412988883;
    msg.satellites = 106U;
    msg.iar_hyp = 5785U;
    msg.iar_ratio = 0.10953651229155748;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFixRtk #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFixRtk msg;
    msg.setTimeStamp(0.055854136971214996);
    msg.setSource(10322U);
    msg.setSourceEntity(123U);
    msg.setDestination(3784U);
    msg.setDestinationEntity(165U);
    msg.validity = 17166U;
    msg.type = 114U;
    msg.tow = 1717863161U;
    msg.base_lat = 0.8325749069288906;
    msg.base_lon = 0.17022094293392287;
    msg.base_height = 0.8928943242205033;
    msg.n = 0.789595943812313;
    msg.e = 0.8072173336915722;
    msg.d = 0.13164479989582623;
    msg.v_n = 0.3338643337857595;
    msg.v_e = 0.5495363483221343;
    msg.v_d = 0.19325470668380995;
    msg.satellites = 7U;
    msg.iar_hyp = 2978U;
    msg.iar_ratio = 0.6294022024284763;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFixRtk #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ExternalNavData msg;
    msg.setTimeStamp(0.07997521694455179);
    msg.setSource(24784U);
    msg.setSourceEntity(237U);
    msg.setDestination(7809U);
    msg.setDestinationEntity(39U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.13553187654466348;
    tmp_msg_0.lon = 0.3718535265696443;
    tmp_msg_0.height = 0.844346462522115;
    tmp_msg_0.x = 0.6374386565910817;
    tmp_msg_0.y = 0.0508280998317987;
    tmp_msg_0.z = 0.6648451903495355;
    tmp_msg_0.phi = 0.4519048044110823;
    tmp_msg_0.theta = 0.6897028846663379;
    tmp_msg_0.psi = 0.6887356256270627;
    tmp_msg_0.u = 0.5636371468366024;
    tmp_msg_0.v = 0.17141356133459207;
    tmp_msg_0.w = 0.43699858955671755;
    tmp_msg_0.vx = 0.34059837500142776;
    tmp_msg_0.vy = 0.1447551089137178;
    tmp_msg_0.vz = 0.8761145367566493;
    tmp_msg_0.p = 0.6502757137570722;
    tmp_msg_0.q = 0.34008489164763234;
    tmp_msg_0.r = 0.15129510759821085;
    tmp_msg_0.depth = 0.3244703632336873;
    tmp_msg_0.alt = 0.11967705083869151;
    msg.state.set(tmp_msg_0);
    msg.type = 1U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ExternalNavData #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ExternalNavData msg;
    msg.setTimeStamp(0.44541993100148713);
    msg.setSource(36922U);
    msg.setSourceEntity(192U);
    msg.setDestination(43444U);
    msg.setDestinationEntity(246U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.8720942745827329;
    tmp_msg_0.lon = 0.6857673749934651;
    tmp_msg_0.height = 0.8140534356363383;
    tmp_msg_0.x = 0.11396003949687061;
    tmp_msg_0.y = 0.6223705826998779;
    tmp_msg_0.z = 0.1847048859942927;
    tmp_msg_0.phi = 0.9901007955389592;
    tmp_msg_0.theta = 0.28708950896627383;
    tmp_msg_0.psi = 0.2560016866563515;
    tmp_msg_0.u = 0.5889475352554076;
    tmp_msg_0.v = 0.8717916708875368;
    tmp_msg_0.w = 0.44546129298159065;
    tmp_msg_0.vx = 0.039367193770752595;
    tmp_msg_0.vy = 0.4311966342626462;
    tmp_msg_0.vz = 0.8321234180352938;
    tmp_msg_0.p = 0.08971117494104797;
    tmp_msg_0.q = 0.04099666233751664;
    tmp_msg_0.r = 0.15288859186736203;
    tmp_msg_0.depth = 0.361524651222755;
    tmp_msg_0.alt = 0.8013379683035496;
    msg.state.set(tmp_msg_0);
    msg.type = 194U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ExternalNavData #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ExternalNavData msg;
    msg.setTimeStamp(0.4749338232052228);
    msg.setSource(62048U);
    msg.setSourceEntity(156U);
    msg.setDestination(8892U);
    msg.setDestinationEntity(183U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.9314659089611721;
    tmp_msg_0.lon = 0.3920963527866983;
    tmp_msg_0.height = 0.8094145408199476;
    tmp_msg_0.x = 0.7677209106984004;
    tmp_msg_0.y = 0.4406550958739013;
    tmp_msg_0.z = 0.809065652670681;
    tmp_msg_0.phi = 0.6528117821451024;
    tmp_msg_0.theta = 0.12831792202562475;
    tmp_msg_0.psi = 0.3240970142804439;
    tmp_msg_0.u = 0.2694744523609123;
    tmp_msg_0.v = 0.15804081614392396;
    tmp_msg_0.w = 0.7217621819269527;
    tmp_msg_0.vx = 0.6035429842927775;
    tmp_msg_0.vy = 0.4298060066421886;
    tmp_msg_0.vz = 0.9473792292216305;
    tmp_msg_0.p = 0.46105420405122655;
    tmp_msg_0.q = 0.44066062982464915;
    tmp_msg_0.r = 0.3662686817071521;
    tmp_msg_0.depth = 0.8003291769327301;
    tmp_msg_0.alt = 0.020079718749270614;
    msg.state.set(tmp_msg_0);
    msg.type = 81U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ExternalNavData #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DissolvedOxygen msg;
    msg.setTimeStamp(0.42479477679045896);
    msg.setSource(40390U);
    msg.setSourceEntity(49U);
    msg.setDestination(36299U);
    msg.setDestinationEntity(20U);
    msg.value = 0.7266000879398871;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DissolvedOxygen #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DissolvedOxygen msg;
    msg.setTimeStamp(0.9462828045693578);
    msg.setSource(5220U);
    msg.setSourceEntity(133U);
    msg.setDestination(42773U);
    msg.setDestinationEntity(158U);
    msg.value = 0.3591828160904479;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DissolvedOxygen #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DissolvedOxygen msg;
    msg.setTimeStamp(0.7362107200635881);
    msg.setSource(31466U);
    msg.setSourceEntity(82U);
    msg.setDestination(23202U);
    msg.setDestinationEntity(243U);
    msg.value = 0.6080228499951321;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DissolvedOxygen #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AirSaturation msg;
    msg.setTimeStamp(0.7268436355941661);
    msg.setSource(56658U);
    msg.setSourceEntity(118U);
    msg.setDestination(36883U);
    msg.setDestinationEntity(47U);
    msg.value = 0.00822909883987366;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AirSaturation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AirSaturation msg;
    msg.setTimeStamp(0.20828260525991227);
    msg.setSource(8953U);
    msg.setSourceEntity(184U);
    msg.setDestination(28129U);
    msg.setDestinationEntity(3U);
    msg.value = 0.16797246657804643;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AirSaturation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AirSaturation msg;
    msg.setTimeStamp(0.9490307019150396);
    msg.setSource(62527U);
    msg.setSourceEntity(253U);
    msg.setDestination(27137U);
    msg.setDestinationEntity(50U);
    msg.value = 0.2328502877114963;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AirSaturation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Throttle msg;
    msg.setTimeStamp(0.25572321854628066);
    msg.setSource(53826U);
    msg.setSourceEntity(216U);
    msg.setDestination(61906U);
    msg.setDestinationEntity(188U);
    msg.value = 0.10365108214876884;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Throttle #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Throttle msg;
    msg.setTimeStamp(0.651065607227379);
    msg.setSource(28819U);
    msg.setSourceEntity(200U);
    msg.setDestination(33480U);
    msg.setDestinationEntity(201U);
    msg.value = 0.45752601509252844;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Throttle #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Throttle msg;
    msg.setTimeStamp(0.5954799479706455);
    msg.setSource(53716U);
    msg.setSourceEntity(243U);
    msg.setDestination(24692U);
    msg.setDestinationEntity(83U);
    msg.value = 0.6953488897877479;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Throttle #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PH msg;
    msg.setTimeStamp(0.02556401973366651);
    msg.setSource(37912U);
    msg.setSourceEntity(150U);
    msg.setDestination(39408U);
    msg.setDestinationEntity(247U);
    msg.value = 0.7980509420579209;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PH #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PH msg;
    msg.setTimeStamp(0.7113041072290388);
    msg.setSource(24U);
    msg.setSourceEntity(141U);
    msg.setDestination(32633U);
    msg.setDestinationEntity(229U);
    msg.value = 0.7770332630857433;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PH #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PH msg;
    msg.setTimeStamp(0.5277195608942213);
    msg.setSource(43828U);
    msg.setSourceEntity(140U);
    msg.setDestination(43029U);
    msg.setDestinationEntity(239U);
    msg.value = 0.28955513786376685;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PH #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Redox msg;
    msg.setTimeStamp(0.6936237922361189);
    msg.setSource(42U);
    msg.setSourceEntity(153U);
    msg.setDestination(30826U);
    msg.setDestinationEntity(195U);
    msg.value = 0.571527475617859;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Redox #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Redox msg;
    msg.setTimeStamp(0.6672096189539652);
    msg.setSource(8640U);
    msg.setSourceEntity(117U);
    msg.setDestination(51293U);
    msg.setDestinationEntity(167U);
    msg.value = 0.80805203883056;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Redox #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Redox msg;
    msg.setTimeStamp(0.16979349823212353);
    msg.setSource(8670U);
    msg.setSourceEntity(71U);
    msg.setDestination(44941U);
    msg.setDestinationEntity(244U);
    msg.value = 0.5208006022155194;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Redox #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CameraZoom msg;
    msg.setTimeStamp(0.4497452871459672);
    msg.setSource(61640U);
    msg.setSourceEntity(118U);
    msg.setDestination(25975U);
    msg.setDestinationEntity(153U);
    msg.id = 121U;
    msg.zoom = 77U;
    msg.action = 116U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CameraZoom #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CameraZoom msg;
    msg.setTimeStamp(0.22552098909050888);
    msg.setSource(53416U);
    msg.setSourceEntity(123U);
    msg.setDestination(4326U);
    msg.setDestinationEntity(210U);
    msg.id = 183U;
    msg.zoom = 19U;
    msg.action = 26U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CameraZoom #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CameraZoom msg;
    msg.setTimeStamp(0.6536222369982183);
    msg.setSource(58324U);
    msg.setSourceEntity(192U);
    msg.setDestination(30814U);
    msg.setDestinationEntity(109U);
    msg.id = 169U;
    msg.zoom = 87U;
    msg.action = 133U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CameraZoom #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetThrusterActuation msg;
    msg.setTimeStamp(0.20013990511620305);
    msg.setSource(25759U);
    msg.setSourceEntity(49U);
    msg.setDestination(45731U);
    msg.setDestinationEntity(196U);
    msg.id = 94U;
    msg.value = 0.923455166481633;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetThrusterActuation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetThrusterActuation msg;
    msg.setTimeStamp(0.7057252112714897);
    msg.setSource(26135U);
    msg.setSourceEntity(96U);
    msg.setDestination(32404U);
    msg.setDestinationEntity(3U);
    msg.id = 119U;
    msg.value = 0.9256394290607994;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetThrusterActuation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetThrusterActuation msg;
    msg.setTimeStamp(0.11700564991882079);
    msg.setSource(9302U);
    msg.setSourceEntity(86U);
    msg.setDestination(40461U);
    msg.setDestinationEntity(47U);
    msg.id = 87U;
    msg.value = 0.16705175803160444;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetThrusterActuation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetServoPosition msg;
    msg.setTimeStamp(0.024748931995014156);
    msg.setSource(49449U);
    msg.setSourceEntity(109U);
    msg.setDestination(59524U);
    msg.setDestinationEntity(111U);
    msg.id = 60U;
    msg.value = 0.9674935225185016;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetServoPosition #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetServoPosition msg;
    msg.setTimeStamp(0.7391034843750989);
    msg.setSource(15341U);
    msg.setSourceEntity(156U);
    msg.setDestination(32545U);
    msg.setDestinationEntity(104U);
    msg.id = 236U;
    msg.value = 0.02134985787922017;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetServoPosition #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetServoPosition msg;
    msg.setTimeStamp(0.7613443290135355);
    msg.setSource(38858U);
    msg.setSourceEntity(19U);
    msg.setDestination(12269U);
    msg.setDestinationEntity(169U);
    msg.id = 152U;
    msg.value = 0.2459853768125213;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetServoPosition #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetControlSurfaceDeflection msg;
    msg.setTimeStamp(0.820636052248657);
    msg.setSource(26933U);
    msg.setSourceEntity(41U);
    msg.setDestination(62331U);
    msg.setDestinationEntity(42U);
    msg.id = 244U;
    msg.angle = 0.5974490678528036;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetControlSurfaceDeflection #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetControlSurfaceDeflection msg;
    msg.setTimeStamp(0.6222890633735776);
    msg.setSource(43216U);
    msg.setSourceEntity(182U);
    msg.setDestination(47922U);
    msg.setDestinationEntity(57U);
    msg.id = 187U;
    msg.angle = 0.6254166305753032;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetControlSurfaceDeflection #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetControlSurfaceDeflection msg;
    msg.setTimeStamp(0.8896160789016774);
    msg.setSource(47139U);
    msg.setSourceEntity(12U);
    msg.setDestination(32943U);
    msg.setDestinationEntity(101U);
    msg.id = 43U;
    msg.angle = 0.966008743277062;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetControlSurfaceDeflection #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteActionsRequest msg;
    msg.setTimeStamp(0.546797940481511);
    msg.setSource(8470U);
    msg.setSourceEntity(175U);
    msg.setDestination(7908U);
    msg.setDestinationEntity(59U);
    msg.op = 57U;
    msg.actions.assign("DBXYBAKZNCMYLXSWOPQLDEBJNPCMBEACBAAOELTZZGVQHJRFXJUUFULPKSUHTNFRMPBNRUMAVUVMRVTGUBENHQWISSEGFJPLQCDVJBNOIPCXSOJGSWCMGWQPXQKRZYARLKJXUIFODYCPUPIAWMVDOGHKNCMOLPWECSVFIGRJQTTTAKDQAWYUNBLOSMYIJIZGVNZZGZARJTHDFEOSILHDTXNZIKYTYKTCVFREDWWQMZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteActionsRequest #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteActionsRequest msg;
    msg.setTimeStamp(0.10728156562845537);
    msg.setSource(18486U);
    msg.setSourceEntity(212U);
    msg.setDestination(1749U);
    msg.setDestinationEntity(80U);
    msg.op = 93U;
    msg.actions.assign("GBZZPUCLBZYJAVAOFGEJCRTAJYYKFAQLNCJXKHIBSDRQEDCTZNYLGMUMMJXVYBZDQDVWRLUUPTYOQZROVFZKNVPMTIGXHPLPHSUGPSAEPADWVDLPVFTHTVERFKJMQCSSZOHSTOXKXSXRLIAJBOIXQDRSYFCCFHAVXNIGOLMUJWQQBIRKGIWWCKWBDVGGUHZEIONHOJISDJBWYFUMXGETNHIBBXYWAEMW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteActionsRequest #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteActionsRequest msg;
    msg.setTimeStamp(0.4284438801650503);
    msg.setSource(36548U);
    msg.setSourceEntity(230U);
    msg.setDestination(19167U);
    msg.setDestinationEntity(33U);
    msg.op = 45U;
    msg.actions.assign("HIEIMYZWKWSZXSNVUBSIHCXRDMRGXZADUNYAYEGCLUTCQXJAVPTITFUCFISBWSPJBLOXFQLWKRLNL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteActionsRequest #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteActions msg;
    msg.setTimeStamp(0.4114016054663785);
    msg.setSource(12736U);
    msg.setSourceEntity(24U);
    msg.setDestination(42785U);
    msg.setDestinationEntity(193U);
    msg.actions.assign("VFEGUCRCYESTOYUXYMAHZDOJPXIKKAWCPYXXWSRLDVKMSSJASUAVWWNOUURYCTWJKOPSVKTZQZSLUQBBOHQCIVYMXGMZR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteActions #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteActions msg;
    msg.setTimeStamp(0.7457769906622311);
    msg.setSource(52232U);
    msg.setSourceEntity(51U);
    msg.setDestination(64292U);
    msg.setDestinationEntity(55U);
    msg.actions.assign("ZMESHZRTNGPULVCYVWDCHYDMSADSGOUNQSNMEUFFSKVQAOQVHLLRKKZIREIOTUIETQKXBGIVJYBZTNSXJJATONPRFIDQPYLMMWBYOZDFZYUDTVGXRJHFNHUYRKNPHOJLWPHVVMALRSGAYWQBEABONWHUUKQIMFWXKCXBERXOPGMFBVAKFCJJTTHCAXZMJOHEWPWDFT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteActions #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteActions msg;
    msg.setTimeStamp(0.10878701826672521);
    msg.setSource(17129U);
    msg.setSourceEntity(250U);
    msg.setDestination(19839U);
    msg.setDestinationEntity(51U);
    msg.actions.assign("PMQSYNQXJLTEVGDPBXXDNUXOXYTGWAHDJBFEOGBHPCAISIUETEHGRWSUFFHPRQOCYRVLMMUTCAGFDLQXCFNBXDZBZOWFBXILYLZZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteActions #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ButtonEvent msg;
    msg.setTimeStamp(0.10633821075000494);
    msg.setSource(1751U);
    msg.setSourceEntity(153U);
    msg.setDestination(39730U);
    msg.setDestinationEntity(135U);
    msg.button = 49U;
    msg.value = 227U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ButtonEvent #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ButtonEvent msg;
    msg.setTimeStamp(0.16180074816142442);
    msg.setSource(33702U);
    msg.setSourceEntity(41U);
    msg.setDestination(54417U);
    msg.setDestinationEntity(139U);
    msg.button = 54U;
    msg.value = 171U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ButtonEvent #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ButtonEvent msg;
    msg.setTimeStamp(0.2073735696564012);
    msg.setSource(32545U);
    msg.setSourceEntity(194U);
    msg.setDestination(59064U);
    msg.setDestinationEntity(37U);
    msg.button = 167U;
    msg.value = 240U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ButtonEvent #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LcdControl msg;
    msg.setTimeStamp(0.8494422440485889);
    msg.setSource(23251U);
    msg.setSourceEntity(28U);
    msg.setDestination(30578U);
    msg.setDestinationEntity(143U);
    msg.op = 16U;
    msg.text.assign("WFKZJGIGTGPCRVCXJVYHFENXYFDBPOHYROUUISZDLSDEBLTZTFABZHCLAFHNBTCYMRKWIJCPVAF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LcdControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LcdControl msg;
    msg.setTimeStamp(0.6948272231856558);
    msg.setSource(58864U);
    msg.setSourceEntity(247U);
    msg.setDestination(5324U);
    msg.setDestinationEntity(249U);
    msg.op = 128U;
    msg.text.assign("PFYXCUEGIUPAREKCTHCJSCVXSGWFXDBUQE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LcdControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LcdControl msg;
    msg.setTimeStamp(0.8723423210336968);
    msg.setSource(23392U);
    msg.setSourceEntity(62U);
    msg.setDestination(1832U);
    msg.setDestinationEntity(50U);
    msg.op = 4U;
    msg.text.assign("GUWIJPFDICPXICYAXHOFARPVJKQQATZLUTEMRHCVGUAENZIMZCFLUPOROQUNWAYVMNGWFMZFICXXIFGHHTNDRYXHSUMKDPMSWIPVUMRYKTKLNZWUGTELRPQTBVACHTSQXPRJCZDOYOJYZISKSQNLOLSCQMUNVYNBBEEVHLTJDEVNJSFUAYFZX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LcdControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerOperation msg;
    msg.setTimeStamp(0.9921943026122231);
    msg.setSource(57346U);
    msg.setSourceEntity(53U);
    msg.setDestination(2628U);
    msg.setDestinationEntity(151U);
    msg.op = 216U;
    msg.time_remain = 0.9557684926404477;
    msg.sched_time = 0.8198848197657699;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerOperation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerOperation msg;
    msg.setTimeStamp(0.3293545930891639);
    msg.setSource(35687U);
    msg.setSourceEntity(75U);
    msg.setDestination(63615U);
    msg.setDestinationEntity(233U);
    msg.op = 52U;
    msg.time_remain = 0.8190146767023433;
    msg.sched_time = 0.8411089555224617;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerOperation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerOperation msg;
    msg.setTimeStamp(0.07162960436748023);
    msg.setSource(53781U);
    msg.setSourceEntity(244U);
    msg.setDestination(1582U);
    msg.setDestinationEntity(1U);
    msg.op = 15U;
    msg.time_remain = 0.33788193405846856;
    msg.sched_time = 0.9714864265316011;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerOperation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerChannelControl msg;
    msg.setTimeStamp(0.9443113104188208);
    msg.setSource(65232U);
    msg.setSourceEntity(30U);
    msg.setDestination(1180U);
    msg.setDestinationEntity(178U);
    msg.name.assign("IJOQYNSORXLBNERBFUXIIUMEPPKBZPCTFOZIATHDSSQZNHAWNBQXRMHOUMMTHUJWQEVTCPLPZSTHFCNYQPXLMYUZLGVWEYWHVTIGDJEXXMVWKGJJRSITMWCXAOWUGQKIIBLKFFGVHZXMZAZGWVKVQPCQNLBBYDEDDZGSQELPRFHTWFRNVHODRIXXRFNJGUDYKUTKPLHNAVBAY");
    msg.op = 103U;
    msg.sched_time = 0.37361277071881116;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerChannelControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerChannelControl msg;
    msg.setTimeStamp(0.3098653146888283);
    msg.setSource(8382U);
    msg.setSourceEntity(232U);
    msg.setDestination(12460U);
    msg.setDestinationEntity(197U);
    msg.name.assign("PWEXDOAWBPYAGHMVSRUXOMLYFTFNAWNHEPCMLQQCBIBTZTTIYRQKIGSYHWUSNAZEYVKRJMPLVOXUOFJALRASGOJHVSOUXULLYRYJFIEMLWMESQDJXADDGKHQYZDJJDSCK");
    msg.op = 156U;
    msg.sched_time = 0.34622977516440867;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerChannelControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerChannelControl msg;
    msg.setTimeStamp(0.31226561157624644);
    msg.setSource(36902U);
    msg.setSourceEntity(93U);
    msg.setDestination(39403U);
    msg.setDestinationEntity(133U);
    msg.name.assign("IEVDRIXPTDMWWGUHCXPBZNUSERGTEZKSKGQEYJWUUHBQAYKMIJDFDQVGYTRPRQZNGLOBTDSBGXJWZKFYWRXVGRYYEXGZTYOXCHBHYAKHFXV");
    msg.op = 185U;
    msg.sched_time = 0.46913323396269446;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerChannelControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryPowerChannelState msg;
    msg.setTimeStamp(0.7077305771638474);
    msg.setSource(34192U);
    msg.setSourceEntity(233U);
    msg.setDestination(25797U);
    msg.setDestinationEntity(100U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryPowerChannelState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryPowerChannelState msg;
    msg.setTimeStamp(0.17666617781423766);
    msg.setSource(31932U);
    msg.setSourceEntity(220U);
    msg.setDestination(39771U);
    msg.setDestinationEntity(251U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryPowerChannelState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryPowerChannelState msg;
    msg.setTimeStamp(0.9994953612691008);
    msg.setSource(48471U);
    msg.setSourceEntity(92U);
    msg.setDestination(52060U);
    msg.setDestinationEntity(7U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryPowerChannelState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerChannelState msg;
    msg.setTimeStamp(0.8085700662643914);
    msg.setSource(8597U);
    msg.setSourceEntity(30U);
    msg.setDestination(63969U);
    msg.setDestinationEntity(41U);
    msg.name.assign("QSQYWGSNFBLMAVPFXMNLQKTKZKUOMZVQBYTOEIVIEHFUMGANMICYCZCOULARCGSRLHVBOSKDQAGWJQNRILHUEVWGDGFXTUOAYWIEOUIJXRSKKWAAZZDXCHEAEYPYQPFPZCLOIDTNVNYBJKJSGGNWPMHXBRYCJHITOLXUEYSEIWPYKJXKUGLZZPFEOJVHMSWLFBZHATBNHRMQDSVSURMDQ");
    msg.state = 149U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerChannelState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerChannelState msg;
    msg.setTimeStamp(0.6278933341297048);
    msg.setSource(19922U);
    msg.setSourceEntity(242U);
    msg.setDestination(40084U);
    msg.setDestinationEntity(159U);
    msg.name.assign("SJLTOAZDFKAXASNRCPGTIIJTROZLEXKXREPPVM");
    msg.state = 140U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerChannelState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerChannelState msg;
    msg.setTimeStamp(0.5227981942669591);
    msg.setSource(36282U);
    msg.setSourceEntity(232U);
    msg.setDestination(47711U);
    msg.setDestinationEntity(19U);
    msg.name.assign("VQZCCNVYHHUWUAJAFMEGLZKJ");
    msg.state = 118U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerChannelState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LedBrightness msg;
    msg.setTimeStamp(0.5658832998417584);
    msg.setSource(733U);
    msg.setSourceEntity(225U);
    msg.setDestination(36418U);
    msg.setDestinationEntity(73U);
    msg.name.assign("NNJASQAUZQCTQNDKRLZBSXPBABFYQXMQDJTJZGMUJGWPGWYODVFXDUEXTBXHSWKKHQILHVIFWVMRDHYWLYRHMIPHV");
    msg.value = 48U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LedBrightness #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LedBrightness msg;
    msg.setTimeStamp(0.4713422846872829);
    msg.setSource(31944U);
    msg.setSourceEntity(201U);
    msg.setDestination(47517U);
    msg.setDestinationEntity(37U);
    msg.name.assign("JLXZUKIGSHPEPQRUMVEGRJHZLEQJFFHADXXJMJFSLZQNEDHPCDISVMILVYACEBFWGQBTBGUASSKFQUTCOIXBBUHKNZTWWDFBTBZYOALJRMRVEMZQYSXNUMOGGXLZPJHHQAZFRLFWRGBKCPHICHYEYITEVDAXO");
    msg.value = 201U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LedBrightness #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LedBrightness msg;
    msg.setTimeStamp(0.5314973564084889);
    msg.setSource(42865U);
    msg.setSourceEntity(134U);
    msg.setDestination(30745U);
    msg.setDestinationEntity(237U);
    msg.name.assign("YECWDCOVMOVADXEMFJFJXCGZPUJXIIMRIZSAZTGSBZMYZQZOTSDXQOLAGNVSUCZERJUHWAERZCNCUADFHVYPFONACTBTMPFYRRXJMZKKBHTJWXOQNBDBLQKWUJDLQUL");
    msg.value = 174U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LedBrightness #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryLedBrightness msg;
    msg.setTimeStamp(0.37612364425857514);
    msg.setSource(48647U);
    msg.setSourceEntity(43U);
    msg.setDestination(14310U);
    msg.setDestinationEntity(154U);
    msg.name.assign("QLKVHHDNFKLEQMRZTSARWNPBWLNMOMGKNKBIDUVIUWJSEJLQZJRXCSCFTZFAKANVFIRIYMCDDXZKABEURTOPGWWCUBWAJQURDAVRTPQMIZGPJEVIZVPYYQJUEEXYDMCUBAFVKTUPDUXSZRCBCYSTJEVFUPYFCXNXOHLPSPYMDNJHHMQGOXOBBYQZLMLGNYNAXGXRQIHZFWGKTSV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryLedBrightness #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryLedBrightness msg;
    msg.setTimeStamp(0.595777399687411);
    msg.setSource(52096U);
    msg.setSourceEntity(188U);
    msg.setDestination(10235U);
    msg.setDestinationEntity(130U);
    msg.name.assign("KGFYSWIYLBLCMLITRACKBBDSPIIZUTTMDTUJPHXZHUAOEMTAQOPVHKFEWJDMZJDMNLESVUBRUKDWCETOOVCWDGCFLJGPQFWAUATBNGPWHFEVRJTKCMKNMWBLJUXCNFFZLQVTBGWUXAEGGZQIKRYJUIVXCNOWYMGOYZQOEISSHNMOXETKQGRZRSAEVJDLMVVWKRQJAZXXYXISNDYEZQKSRNZOHPYOULVAFAIGHHBQYPHIDLQRND");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryLedBrightness #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryLedBrightness msg;
    msg.setTimeStamp(0.8054927599688972);
    msg.setSource(31352U);
    msg.setSourceEntity(198U);
    msg.setDestination(2887U);
    msg.setDestinationEntity(6U);
    msg.name.assign("URPKIAGMSSAWLZGBVCSUBHQVEALSYOTFZDMLZVYWVQGSQKMMXZSDQIYUJIQHRIBXONPNBPTYUFGSDJUPVXNZGWWWEGNFBLDATCYMRCJBJQAZRHDHNSLOBDXKFXBEOLNOBMGUEMQGJEFPTKWXGKUTCIZVAUKFOKZOIDFJJCTMYFURTQMJCHXKX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryLedBrightness #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetLedBrightness msg;
    msg.setTimeStamp(0.6848049606781922);
    msg.setSource(21013U);
    msg.setSourceEntity(227U);
    msg.setDestination(46702U);
    msg.setDestinationEntity(162U);
    msg.name.assign("CLZUWXBTQJHGOXFQOHIYCBWKQGHDNZASLCRXSCRCYYWHVZAZUWEGRLYQOMEJTNEDPIBYCW");
    msg.value = 154U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetLedBrightness #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetLedBrightness msg;
    msg.setTimeStamp(0.8277463885564612);
    msg.setSource(7733U);
    msg.setSourceEntity(184U);
    msg.setDestination(14417U);
    msg.setDestinationEntity(86U);
    msg.name.assign("IEMXUQOKQSDLHPTUMBLWNOWFLPSXRIAEDFLCFGWUGJTOKZCGJBZQPIYXXALYORAKESLNHUPFUDGRHVGZQAEDEIFOZLLS");
    msg.value = 188U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetLedBrightness #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetLedBrightness msg;
    msg.setTimeStamp(0.05669004185517179);
    msg.setSource(3310U);
    msg.setSourceEntity(40U);
    msg.setDestination(3840U);
    msg.setDestinationEntity(180U);
    msg.name.assign("OIGCTBAJNEIHWASHFWUFSTJAYQLLMVMXCGKTWSVPMAKCXSQFLOWVUWTZVNBPBGQMXFQZQOHDDBCYJRE");
    msg.value = 84U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetLedBrightness #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetPWM msg;
    msg.setTimeStamp(0.3661474282498307);
    msg.setSource(20338U);
    msg.setSourceEntity(239U);
    msg.setDestination(41563U);
    msg.setDestinationEntity(214U);
    msg.id = 200U;
    msg.period = 421569584U;
    msg.duty_cycle = 2919436045U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetPWM #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetPWM msg;
    msg.setTimeStamp(0.42226112466167587);
    msg.setSource(21409U);
    msg.setSourceEntity(211U);
    msg.setDestination(18226U);
    msg.setDestinationEntity(68U);
    msg.id = 226U;
    msg.period = 87875615U;
    msg.duty_cycle = 3721375794U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetPWM #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetPWM msg;
    msg.setTimeStamp(0.1056401845381918);
    msg.setSource(8634U);
    msg.setSourceEntity(183U);
    msg.setDestination(28879U);
    msg.setDestinationEntity(19U);
    msg.id = 100U;
    msg.period = 4103140476U;
    msg.duty_cycle = 3888246793U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetPWM #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PWM msg;
    msg.setTimeStamp(0.5426551755825659);
    msg.setSource(33187U);
    msg.setSourceEntity(139U);
    msg.setDestination(44784U);
    msg.setDestinationEntity(229U);
    msg.id = 148U;
    msg.period = 868836635U;
    msg.duty_cycle = 4223811545U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PWM #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PWM msg;
    msg.setTimeStamp(0.9697327166281401);
    msg.setSource(28652U);
    msg.setSourceEntity(173U);
    msg.setDestination(37671U);
    msg.setDestinationEntity(65U);
    msg.id = 85U;
    msg.period = 3830527399U;
    msg.duty_cycle = 3438052111U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PWM #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PWM msg;
    msg.setTimeStamp(0.7150541264158982);
    msg.setSource(46456U);
    msg.setSourceEntity(35U);
    msg.setDestination(41548U);
    msg.setDestinationEntity(146U);
    msg.id = 4U;
    msg.period = 3620579569U;
    msg.duty_cycle = 3424754859U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PWM #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EstimatedState msg;
    msg.setTimeStamp(0.6933510555073004);
    msg.setSource(7225U);
    msg.setSourceEntity(82U);
    msg.setDestination(51956U);
    msg.setDestinationEntity(76U);
    msg.lat = 0.42123413356740447;
    msg.lon = 0.19265870096748927;
    msg.height = 0.5205853110677471;
    msg.x = 0.03706577262439559;
    msg.y = 0.4702835067654224;
    msg.z = 0.46573674035357127;
    msg.phi = 0.9088732277258263;
    msg.theta = 0.2963857478843669;
    msg.psi = 0.4941660109944974;
    msg.u = 0.7550956788017105;
    msg.v = 0.9481520430991878;
    msg.w = 0.7190740257822673;
    msg.vx = 0.21899945931938902;
    msg.vy = 0.5778244026696345;
    msg.vz = 0.6873030978052789;
    msg.p = 0.9923587689822884;
    msg.q = 0.9769985457086114;
    msg.r = 0.8526576659498688;
    msg.depth = 0.6441694796792969;
    msg.alt = 0.8838556489415209;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EstimatedState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EstimatedState msg;
    msg.setTimeStamp(0.5839251527746914);
    msg.setSource(56476U);
    msg.setSourceEntity(28U);
    msg.setDestination(44953U);
    msg.setDestinationEntity(170U);
    msg.lat = 0.5362667623079564;
    msg.lon = 0.16411663366644957;
    msg.height = 0.9655707530608789;
    msg.x = 0.20903721319870794;
    msg.y = 0.035009037346468874;
    msg.z = 0.03816248970887515;
    msg.phi = 0.7693566400295158;
    msg.theta = 0.3283930471878381;
    msg.psi = 0.8434613484536558;
    msg.u = 0.9533218128634315;
    msg.v = 0.25210372420479366;
    msg.w = 0.35342341370845853;
    msg.vx = 0.4332215827140875;
    msg.vy = 0.7715658581051303;
    msg.vz = 0.4488016680422938;
    msg.p = 0.9046823629639182;
    msg.q = 0.9721275594918601;
    msg.r = 0.9239924752984646;
    msg.depth = 0.9892935336326467;
    msg.alt = 0.6673628066072379;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EstimatedState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EstimatedState msg;
    msg.setTimeStamp(0.7043233256039064);
    msg.setSource(5739U);
    msg.setSourceEntity(41U);
    msg.setDestination(63103U);
    msg.setDestinationEntity(155U);
    msg.lat = 0.25328264848206294;
    msg.lon = 0.7635016942283213;
    msg.height = 0.955530634833004;
    msg.x = 0.012546513997321207;
    msg.y = 0.808404079803576;
    msg.z = 0.4640062338049845;
    msg.phi = 0.21535007273882922;
    msg.theta = 0.6669698866030324;
    msg.psi = 0.5507063340238183;
    msg.u = 0.07889205980195824;
    msg.v = 0.2858441112678022;
    msg.w = 0.8443025358153154;
    msg.vx = 0.7801299078302237;
    msg.vy = 0.995221536058131;
    msg.vz = 0.3083115147408614;
    msg.p = 0.09768337207547517;
    msg.q = 0.7499375343046196;
    msg.r = 0.5413592620534678;
    msg.depth = 0.8797086409681105;
    msg.alt = 0.8362622713439921;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EstimatedState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EstimatedStreamVelocity msg;
    msg.setTimeStamp(0.3874413119448029);
    msg.setSource(362U);
    msg.setSourceEntity(130U);
    msg.setDestination(3542U);
    msg.setDestinationEntity(220U);
    msg.x = 0.7957971510003522;
    msg.y = 0.4493262270789463;
    msg.z = 0.4058698706560012;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EstimatedStreamVelocity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EstimatedStreamVelocity msg;
    msg.setTimeStamp(0.37917811397943635);
    msg.setSource(52020U);
    msg.setSourceEntity(214U);
    msg.setDestination(50700U);
    msg.setDestinationEntity(203U);
    msg.x = 0.6561732997140767;
    msg.y = 0.2615181372897669;
    msg.z = 0.5370834171514361;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EstimatedStreamVelocity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EstimatedStreamVelocity msg;
    msg.setTimeStamp(0.23279363736401093);
    msg.setSource(52714U);
    msg.setSourceEntity(144U);
    msg.setDestination(10071U);
    msg.setDestinationEntity(115U);
    msg.x = 0.8585903476309692;
    msg.y = 0.8976726589817856;
    msg.z = 0.3844465812811333;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EstimatedStreamVelocity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IndicatedSpeed msg;
    msg.setTimeStamp(0.03948837271694705);
    msg.setSource(34216U);
    msg.setSourceEntity(155U);
    msg.setDestination(49163U);
    msg.setDestinationEntity(16U);
    msg.value = 0.8785391129750102;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IndicatedSpeed #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IndicatedSpeed msg;
    msg.setTimeStamp(0.14195664846427702);
    msg.setSource(23087U);
    msg.setSourceEntity(217U);
    msg.setDestination(50190U);
    msg.setDestinationEntity(59U);
    msg.value = 0.5530952104521792;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IndicatedSpeed #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IndicatedSpeed msg;
    msg.setTimeStamp(0.4930540131779205);
    msg.setSource(16292U);
    msg.setSourceEntity(103U);
    msg.setDestination(59423U);
    msg.setDestinationEntity(160U);
    msg.value = 0.9261099422828083;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IndicatedSpeed #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrueSpeed msg;
    msg.setTimeStamp(0.10440290172049649);
    msg.setSource(50826U);
    msg.setSourceEntity(159U);
    msg.setDestination(37256U);
    msg.setDestinationEntity(158U);
    msg.value = 0.32628774821479667;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrueSpeed #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrueSpeed msg;
    msg.setTimeStamp(0.68729034380766);
    msg.setSource(12344U);
    msg.setSourceEntity(230U);
    msg.setDestination(31763U);
    msg.setDestinationEntity(157U);
    msg.value = 0.9728793519646584;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrueSpeed #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrueSpeed msg;
    msg.setTimeStamp(0.75907491412454);
    msg.setSource(38498U);
    msg.setSourceEntity(244U);
    msg.setDestination(55930U);
    msg.setDestinationEntity(32U);
    msg.value = 0.26461357219557546;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrueSpeed #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NavigationUncertainty msg;
    msg.setTimeStamp(0.7640973106942458);
    msg.setSource(62326U);
    msg.setSourceEntity(31U);
    msg.setDestination(38735U);
    msg.setDestinationEntity(141U);
    msg.x = 0.08797565710714794;
    msg.y = 0.9950151006722945;
    msg.z = 0.15943084130558538;
    msg.phi = 0.3757261706938265;
    msg.theta = 0.2421304569383932;
    msg.psi = 0.28754308839341336;
    msg.p = 0.03850586792664301;
    msg.q = 0.9918950426683997;
    msg.r = 0.8363647341308059;
    msg.u = 0.1523850240574317;
    msg.v = 0.10418910109153212;
    msg.w = 0.839387702797883;
    msg.bias_psi = 0.540136734088865;
    msg.bias_r = 0.2413474309628676;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NavigationUncertainty #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NavigationUncertainty msg;
    msg.setTimeStamp(0.07123908611761642);
    msg.setSource(58779U);
    msg.setSourceEntity(26U);
    msg.setDestination(30149U);
    msg.setDestinationEntity(162U);
    msg.x = 0.3351162569269983;
    msg.y = 0.2641008412288759;
    msg.z = 0.2595029435238235;
    msg.phi = 0.39620782989235104;
    msg.theta = 0.1267647131539743;
    msg.psi = 0.7479815615209985;
    msg.p = 0.8506317304745038;
    msg.q = 0.09298696257027517;
    msg.r = 0.5926283652056401;
    msg.u = 0.7728797816921601;
    msg.v = 0.0976684133370308;
    msg.w = 0.002755211633654553;
    msg.bias_psi = 0.5518245003549266;
    msg.bias_r = 0.8957500980330719;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NavigationUncertainty #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NavigationUncertainty msg;
    msg.setTimeStamp(0.4644002824013852);
    msg.setSource(64829U);
    msg.setSourceEntity(112U);
    msg.setDestination(43559U);
    msg.setDestinationEntity(172U);
    msg.x = 0.034334852996354526;
    msg.y = 0.05748384451377464;
    msg.z = 0.899375507522314;
    msg.phi = 0.5650330155319807;
    msg.theta = 0.5970851328220622;
    msg.psi = 0.5611379945138069;
    msg.p = 0.3411030784267869;
    msg.q = 0.3350204279410982;
    msg.r = 0.5813006758981987;
    msg.u = 0.7760167145868198;
    msg.v = 0.4171261674868011;
    msg.w = 0.5318677841267986;
    msg.bias_psi = 0.26191024643745786;
    msg.bias_r = 0.34235188587157284;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NavigationUncertainty #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NavigationData msg;
    msg.setTimeStamp(0.7250198639115888);
    msg.setSource(40821U);
    msg.setSourceEntity(108U);
    msg.setDestination(43048U);
    msg.setDestinationEntity(101U);
    msg.bias_psi = 0.4646336245684497;
    msg.bias_r = 0.8816566598045473;
    msg.cog = 0.4256059266545097;
    msg.cyaw = 0.8302566543685128;
    msg.lbl_rej_level = 0.9311636266204643;
    msg.gps_rej_level = 0.6795303179131423;
    msg.custom_x = 0.4199032201141889;
    msg.custom_y = 0.455640001234342;
    msg.custom_z = 0.5577985104766451;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NavigationData #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NavigationData msg;
    msg.setTimeStamp(0.19736639782931087);
    msg.setSource(23000U);
    msg.setSourceEntity(105U);
    msg.setDestination(58355U);
    msg.setDestinationEntity(0U);
    msg.bias_psi = 0.8240127595318459;
    msg.bias_r = 0.04742044944300805;
    msg.cog = 0.6667732611325822;
    msg.cyaw = 0.5285812590455969;
    msg.lbl_rej_level = 0.4915938933448879;
    msg.gps_rej_level = 0.6184080037319851;
    msg.custom_x = 0.4084205804392236;
    msg.custom_y = 0.5424436691709179;
    msg.custom_z = 0.9053536514878351;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NavigationData #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NavigationData msg;
    msg.setTimeStamp(0.08215027149621912);
    msg.setSource(17944U);
    msg.setSourceEntity(196U);
    msg.setDestination(14819U);
    msg.setDestinationEntity(75U);
    msg.bias_psi = 0.08489081568793677;
    msg.bias_r = 0.0033916972726579786;
    msg.cog = 0.9266035030946711;
    msg.cyaw = 0.10949176719250397;
    msg.lbl_rej_level = 0.7758339839333918;
    msg.gps_rej_level = 0.4130797916583261;
    msg.custom_x = 0.1221121317493592;
    msg.custom_y = 0.2823248154034034;
    msg.custom_z = 0.6218960387289338;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NavigationData #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFixRejection msg;
    msg.setTimeStamp(0.28255086400003127);
    msg.setSource(54249U);
    msg.setSourceEntity(216U);
    msg.setDestination(8645U);
    msg.setDestinationEntity(145U);
    msg.utc_time = 0.6251839342033831;
    msg.reason = 157U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFixRejection #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFixRejection msg;
    msg.setTimeStamp(0.9391485908717483);
    msg.setSource(29039U);
    msg.setSourceEntity(202U);
    msg.setDestination(62717U);
    msg.setDestinationEntity(100U);
    msg.utc_time = 0.05393915254745829;
    msg.reason = 155U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFixRejection #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFixRejection msg;
    msg.setTimeStamp(0.9671608842692783);
    msg.setSource(15065U);
    msg.setSourceEntity(171U);
    msg.setDestination(65015U);
    msg.setDestinationEntity(133U);
    msg.utc_time = 0.37098489177053384;
    msg.reason = 100U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFixRejection #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblRangeAcceptance msg;
    msg.setTimeStamp(0.6057301741724648);
    msg.setSource(47573U);
    msg.setSourceEntity(25U);
    msg.setDestination(39535U);
    msg.setDestinationEntity(93U);
    msg.id = 193U;
    msg.range = 0.7800926420066444;
    msg.acceptance = 177U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblRangeAcceptance #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblRangeAcceptance msg;
    msg.setTimeStamp(0.3216195777555523);
    msg.setSource(2825U);
    msg.setSourceEntity(150U);
    msg.setDestination(54192U);
    msg.setDestinationEntity(225U);
    msg.id = 214U;
    msg.range = 0.887599340971484;
    msg.acceptance = 245U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblRangeAcceptance #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblRangeAcceptance msg;
    msg.setTimeStamp(0.5037970661639886);
    msg.setSource(53859U);
    msg.setSourceEntity(224U);
    msg.setDestination(29566U);
    msg.setDestinationEntity(206U);
    msg.id = 39U;
    msg.range = 0.05157911100619694;
    msg.acceptance = 178U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblRangeAcceptance #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DvlRejection msg;
    msg.setTimeStamp(0.5168554886320484);
    msg.setSource(5976U);
    msg.setSourceEntity(2U);
    msg.setDestination(57616U);
    msg.setDestinationEntity(145U);
    msg.type = 95U;
    msg.reason = 27U;
    msg.value = 0.09511969144082721;
    msg.timestep = 0.4911161293241081;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DvlRejection #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DvlRejection msg;
    msg.setTimeStamp(0.06673910428308794);
    msg.setSource(60937U);
    msg.setSourceEntity(122U);
    msg.setDestination(63482U);
    msg.setDestinationEntity(179U);
    msg.type = 136U;
    msg.reason = 81U;
    msg.value = 0.7302845235580203;
    msg.timestep = 0.7634570077003046;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DvlRejection #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DvlRejection msg;
    msg.setTimeStamp(0.9098431987367542);
    msg.setSource(37171U);
    msg.setSourceEntity(178U);
    msg.setDestination(48287U);
    msg.setDestinationEntity(177U);
    msg.type = 183U;
    msg.reason = 96U;
    msg.value = 0.8374594683239917;
    msg.timestep = 0.7765966220492643;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DvlRejection #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblEstimate msg;
    msg.setTimeStamp(0.7035801941671389);
    msg.setSource(9178U);
    msg.setSourceEntity(63U);
    msg.setDestination(3791U);
    msg.setDestinationEntity(215U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("IXFPYFOWTHCUWNLSWHFFIKVYCOKALLPDMIPTZHKLLEYXHTQBHRXJPQXVMJZHXZOLCFMORZZJXEYMCYORVVIPUBUFNNFFUTKQBZHODJAUDJWHVZQAVGWEOXQTOAACGJJOSMCEGKGPYPYQDYFLKWSTSGTRTNAVMWLCNFKIPJDBNUEGB");
    tmp_msg_0.lat = 0.2047674668660504;
    tmp_msg_0.lon = 0.12004409652896564;
    tmp_msg_0.depth = 0.09863152862985514;
    tmp_msg_0.query_channel = 173U;
    tmp_msg_0.reply_channel = 31U;
    tmp_msg_0.transponder_delay = 192U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.18489902041609585;
    msg.y = 0.654179338361513;
    msg.var_x = 0.026338680648752888;
    msg.var_y = 0.44898007059507095;
    msg.distance = 0.8479680624240297;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblEstimate #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblEstimate msg;
    msg.setTimeStamp(0.06918555932004611);
    msg.setSource(44845U);
    msg.setSourceEntity(116U);
    msg.setDestination(14706U);
    msg.setDestinationEntity(1U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("GSSFFVJBHZLXLZYGXGMHMISRJDTAWLJUKOCYUYEIIFAI");
    tmp_msg_0.lat = 0.38562807693532186;
    tmp_msg_0.lon = 0.5696316152138597;
    tmp_msg_0.depth = 0.8986304976720667;
    tmp_msg_0.query_channel = 114U;
    tmp_msg_0.reply_channel = 217U;
    tmp_msg_0.transponder_delay = 20U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.6241699149361996;
    msg.y = 0.14458759234558638;
    msg.var_x = 0.3561713678641435;
    msg.var_y = 0.9795659255969181;
    msg.distance = 0.6383772910600274;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblEstimate #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblEstimate msg;
    msg.setTimeStamp(0.46082123494539184);
    msg.setSource(17901U);
    msg.setSourceEntity(76U);
    msg.setDestination(2839U);
    msg.setDestinationEntity(170U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("OEIBSKFUNBVEWCPXHBGAKBWDBKQURTTJYEMODMPJKAWSSDWRLUECPRVHHFQGIKFNMSCGJHVJAWTHPUZDIWYZMFRKMNEBJDCZVHZRWBQLXJNLEVVCGIYOLTWFJRZHUYAPNRJZMVXLKSLOISQUFHWMCAESNXQQTTRTOXRBVELERSLAJHYKZNUFDGHYSIYTLDVFXPPPAYIDNQXCOZMSCOGPXAZYOCLJNIUEXFCUYOGMGW");
    tmp_msg_0.lat = 0.49139662571356324;
    tmp_msg_0.lon = 0.39263057173487836;
    tmp_msg_0.depth = 0.7306486661967325;
    tmp_msg_0.query_channel = 117U;
    tmp_msg_0.reply_channel = 185U;
    tmp_msg_0.transponder_delay = 103U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.37036516518867446;
    msg.y = 0.13665086058533538;
    msg.var_x = 0.5655534113075102;
    msg.var_y = 0.4716209083980719;
    msg.distance = 0.7655191117475176;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblEstimate #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AlignmentState msg;
    msg.setTimeStamp(0.6914563520631973);
    msg.setSource(26216U);
    msg.setSourceEntity(7U);
    msg.setDestination(57169U);
    msg.setDestinationEntity(64U);
    msg.state = 247U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AlignmentState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AlignmentState msg;
    msg.setTimeStamp(0.37324831596071073);
    msg.setSource(50960U);
    msg.setSourceEntity(88U);
    msg.setDestination(57824U);
    msg.setDestinationEntity(220U);
    msg.state = 50U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AlignmentState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AlignmentState msg;
    msg.setTimeStamp(0.978721185572392);
    msg.setSource(55796U);
    msg.setSourceEntity(166U);
    msg.setDestination(13863U);
    msg.setDestinationEntity(139U);
    msg.state = 88U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AlignmentState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroupStreamVelocity msg;
    msg.setTimeStamp(0.4581495621168211);
    msg.setSource(10613U);
    msg.setSourceEntity(200U);
    msg.setDestination(39293U);
    msg.setDestinationEntity(89U);
    msg.x = 0.06255766206212299;
    msg.y = 0.7428275893164074;
    msg.z = 0.6781555127858754;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroupStreamVelocity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroupStreamVelocity msg;
    msg.setTimeStamp(0.6540775836287971);
    msg.setSource(50953U);
    msg.setSourceEntity(91U);
    msg.setDestination(9158U);
    msg.setDestinationEntity(251U);
    msg.x = 0.2942522220993177;
    msg.y = 0.8112907857541832;
    msg.z = 0.4560504458316177;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroupStreamVelocity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroupStreamVelocity msg;
    msg.setTimeStamp(0.3508668977199907);
    msg.setSource(61775U);
    msg.setSourceEntity(192U);
    msg.setDestination(45510U);
    msg.setDestinationEntity(73U);
    msg.x = 0.2602779227909028;
    msg.y = 0.8021126569531419;
    msg.z = 0.34908494976894267;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroupStreamVelocity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Airflow msg;
    msg.setTimeStamp(0.5963441656914552);
    msg.setSource(29641U);
    msg.setSourceEntity(157U);
    msg.setDestination(55172U);
    msg.setDestinationEntity(102U);
    msg.va = 0.7829721927949707;
    msg.aoa = 0.27093656824867973;
    msg.ssa = 0.09077328059299727;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Airflow #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Airflow msg;
    msg.setTimeStamp(0.006199301606620744);
    msg.setSource(16685U);
    msg.setSourceEntity(190U);
    msg.setDestination(21862U);
    msg.setDestinationEntity(68U);
    msg.va = 0.6698987400197092;
    msg.aoa = 0.933941688800669;
    msg.ssa = 0.1828255958562296;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Airflow #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Airflow msg;
    msg.setTimeStamp(0.6931195580988032);
    msg.setSource(538U);
    msg.setSourceEntity(89U);
    msg.setDestination(6741U);
    msg.setDestinationEntity(89U);
    msg.va = 0.48950137289777784;
    msg.aoa = 0.752914719134651;
    msg.ssa = 0.9286534805941788;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Airflow #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredHeading msg;
    msg.setTimeStamp(0.3635344546173568);
    msg.setSource(16934U);
    msg.setSourceEntity(100U);
    msg.setDestination(47542U);
    msg.setDestinationEntity(241U);
    msg.value = 0.8235355832641753;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredHeading #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredHeading msg;
    msg.setTimeStamp(0.06604061902830138);
    msg.setSource(27118U);
    msg.setSourceEntity(221U);
    msg.setDestination(45929U);
    msg.setDestinationEntity(3U);
    msg.value = 0.7026701083907866;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredHeading #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredHeading msg;
    msg.setTimeStamp(0.30297860915215435);
    msg.setSource(49967U);
    msg.setSourceEntity(58U);
    msg.setDestination(13435U);
    msg.setDestinationEntity(219U);
    msg.value = 0.4736822344834848;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredHeading #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredZ msg;
    msg.setTimeStamp(0.4847374917361379);
    msg.setSource(65211U);
    msg.setSourceEntity(201U);
    msg.setDestination(45493U);
    msg.setDestinationEntity(88U);
    msg.value = 0.38648792838977764;
    msg.z_units = 156U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredZ #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredZ msg;
    msg.setTimeStamp(0.4185366812787664);
    msg.setSource(51545U);
    msg.setSourceEntity(216U);
    msg.setDestination(9894U);
    msg.setDestinationEntity(159U);
    msg.value = 0.5792573981652763;
    msg.z_units = 31U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredZ #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredZ msg;
    msg.setTimeStamp(0.34623878598330626);
    msg.setSource(47065U);
    msg.setSourceEntity(187U);
    msg.setDestination(7696U);
    msg.setDestinationEntity(130U);
    msg.value = 0.4251176706372517;
    msg.z_units = 150U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredZ #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredSpeed msg;
    msg.setTimeStamp(0.22002403302260243);
    msg.setSource(13541U);
    msg.setSourceEntity(189U);
    msg.setDestination(51595U);
    msg.setDestinationEntity(138U);
    msg.value = 0.48021238481513107;
    msg.speed_units = 128U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredSpeed #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredSpeed msg;
    msg.setTimeStamp(0.2618976934841253);
    msg.setSource(18110U);
    msg.setSourceEntity(252U);
    msg.setDestination(41937U);
    msg.setDestinationEntity(234U);
    msg.value = 0.1997089183839933;
    msg.speed_units = 218U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredSpeed #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredSpeed msg;
    msg.setTimeStamp(0.6811855259441858);
    msg.setSource(52635U);
    msg.setSourceEntity(41U);
    msg.setDestination(59856U);
    msg.setDestinationEntity(173U);
    msg.value = 0.6528162971206836;
    msg.speed_units = 104U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredSpeed #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredRoll msg;
    msg.setTimeStamp(0.14405814704072084);
    msg.setSource(55854U);
    msg.setSourceEntity(60U);
    msg.setDestination(60409U);
    msg.setDestinationEntity(81U);
    msg.value = 0.48986824192146416;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredRoll #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredRoll msg;
    msg.setTimeStamp(0.6254108490594565);
    msg.setSource(34141U);
    msg.setSourceEntity(240U);
    msg.setDestination(37356U);
    msg.setDestinationEntity(170U);
    msg.value = 0.6949002327272784;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredRoll #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredRoll msg;
    msg.setTimeStamp(0.12368071078818588);
    msg.setSource(28453U);
    msg.setSourceEntity(115U);
    msg.setDestination(64252U);
    msg.setDestinationEntity(27U);
    msg.value = 0.31655105326999444;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredRoll #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredPitch msg;
    msg.setTimeStamp(0.6901233366324021);
    msg.setSource(22185U);
    msg.setSourceEntity(251U);
    msg.setDestination(16113U);
    msg.setDestinationEntity(177U);
    msg.value = 0.0541082393663912;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredPitch #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredPitch msg;
    msg.setTimeStamp(0.6600668072628009);
    msg.setSource(14758U);
    msg.setSourceEntity(187U);
    msg.setDestination(2451U);
    msg.setDestinationEntity(107U);
    msg.value = 0.6140438229390656;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredPitch #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredPitch msg;
    msg.setTimeStamp(0.9926898087893987);
    msg.setSource(50009U);
    msg.setSourceEntity(52U);
    msg.setDestination(22373U);
    msg.setDestinationEntity(102U);
    msg.value = 0.30528104345559026;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredPitch #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredVerticalRate msg;
    msg.setTimeStamp(0.4849068963061972);
    msg.setSource(9211U);
    msg.setSourceEntity(234U);
    msg.setDestination(48529U);
    msg.setDestinationEntity(166U);
    msg.value = 0.17097792612703466;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredVerticalRate #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredVerticalRate msg;
    msg.setTimeStamp(0.7356642440840762);
    msg.setSource(41681U);
    msg.setSourceEntity(156U);
    msg.setDestination(12642U);
    msg.setDestinationEntity(145U);
    msg.value = 0.4570532563268366;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredVerticalRate #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredVerticalRate msg;
    msg.setTimeStamp(0.03396606414127945);
    msg.setSource(23188U);
    msg.setSourceEntity(60U);
    msg.setDestination(22818U);
    msg.setDestinationEntity(3U);
    msg.value = 0.930302261924341;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredVerticalRate #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredPath msg;
    msg.setTimeStamp(0.004128042728478776);
    msg.setSource(11590U);
    msg.setSourceEntity(94U);
    msg.setDestination(2496U);
    msg.setDestinationEntity(31U);
    msg.path_ref = 1488648413U;
    msg.start_lat = 0.621583418539642;
    msg.start_lon = 0.9156320327910655;
    msg.start_z = 0.47020057704115736;
    msg.start_z_units = 6U;
    msg.end_lat = 0.8942506932124457;
    msg.end_lon = 0.61004047786876;
    msg.end_z = 0.08482976801211206;
    msg.end_z_units = 80U;
    msg.speed = 0.5520405890461382;
    msg.speed_units = 123U;
    msg.lradius = 0.9594966932576385;
    msg.flags = 9U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredPath #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredPath msg;
    msg.setTimeStamp(0.16363705206469903);
    msg.setSource(23377U);
    msg.setSourceEntity(17U);
    msg.setDestination(15081U);
    msg.setDestinationEntity(242U);
    msg.path_ref = 4024686661U;
    msg.start_lat = 0.6303668843348091;
    msg.start_lon = 0.20276883759445008;
    msg.start_z = 0.7894466227673799;
    msg.start_z_units = 192U;
    msg.end_lat = 0.9499368993408372;
    msg.end_lon = 0.8219653167417975;
    msg.end_z = 0.4438849588301875;
    msg.end_z_units = 29U;
    msg.speed = 0.6422372591871351;
    msg.speed_units = 195U;
    msg.lradius = 0.3677111251444297;
    msg.flags = 120U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredPath #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredPath msg;
    msg.setTimeStamp(0.22916174410712675);
    msg.setSource(31598U);
    msg.setSourceEntity(153U);
    msg.setDestination(7149U);
    msg.setDestinationEntity(224U);
    msg.path_ref = 1938264137U;
    msg.start_lat = 0.588632707782978;
    msg.start_lon = 0.07808785702847831;
    msg.start_z = 0.17310314541481042;
    msg.start_z_units = 20U;
    msg.end_lat = 0.8917113881935784;
    msg.end_lon = 0.8064664568865705;
    msg.end_z = 0.13596909319666273;
    msg.end_z_units = 33U;
    msg.speed = 0.6532833922772759;
    msg.speed_units = 170U;
    msg.lradius = 0.18220052419922383;
    msg.flags = 72U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredPath #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredControl msg;
    msg.setTimeStamp(0.5901246182910254);
    msg.setSource(999U);
    msg.setSourceEntity(146U);
    msg.setDestination(2973U);
    msg.setDestinationEntity(27U);
    msg.x = 0.42445132622030746;
    msg.y = 0.4050114912274322;
    msg.z = 0.16578502226858471;
    msg.k = 0.15093461555588494;
    msg.m = 0.40358879788377666;
    msg.n = 0.048184047846103195;
    msg.flags = 48U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredControl msg;
    msg.setTimeStamp(0.8161950245063664);
    msg.setSource(47914U);
    msg.setSourceEntity(70U);
    msg.setDestination(9825U);
    msg.setDestinationEntity(197U);
    msg.x = 0.5937191190961993;
    msg.y = 0.38294266058431226;
    msg.z = 0.6016220898244675;
    msg.k = 0.8795621318855742;
    msg.m = 0.5654914192498167;
    msg.n = 0.1102437797729866;
    msg.flags = 120U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredControl msg;
    msg.setTimeStamp(0.44020594263510127);
    msg.setSource(51710U);
    msg.setSourceEntity(202U);
    msg.setDestination(21601U);
    msg.setDestinationEntity(156U);
    msg.x = 0.22049088504325176;
    msg.y = 0.03665128085264624;
    msg.z = 0.8056446098598753;
    msg.k = 0.1440418124108569;
    msg.m = 0.8266510548745365;
    msg.n = 0.8484373033690349;
    msg.flags = 176U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredHeadingRate msg;
    msg.setTimeStamp(0.3584300690259018);
    msg.setSource(14392U);
    msg.setSourceEntity(245U);
    msg.setDestination(13029U);
    msg.setDestinationEntity(124U);
    msg.value = 0.7714085434216185;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredHeadingRate #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredHeadingRate msg;
    msg.setTimeStamp(0.7383964780782031);
    msg.setSource(4206U);
    msg.setSourceEntity(95U);
    msg.setDestination(56829U);
    msg.setDestinationEntity(160U);
    msg.value = 0.5529710587389317;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredHeadingRate #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredHeadingRate msg;
    msg.setTimeStamp(0.7822345902058291);
    msg.setSource(5694U);
    msg.setSourceEntity(209U);
    msg.setDestination(8848U);
    msg.setDestinationEntity(24U);
    msg.value = 0.3910201533594947;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredHeadingRate #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredVelocity msg;
    msg.setTimeStamp(0.11165375276528655);
    msg.setSource(33968U);
    msg.setSourceEntity(221U);
    msg.setDestination(47245U);
    msg.setDestinationEntity(56U);
    msg.u = 0.4178625339086761;
    msg.v = 0.39846225885657716;
    msg.w = 0.17748601123353447;
    msg.p = 0.7814253847317496;
    msg.q = 0.5541062869511825;
    msg.r = 0.6433968381803155;
    msg.flags = 14U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredVelocity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredVelocity msg;
    msg.setTimeStamp(0.8793966435169345);
    msg.setSource(52552U);
    msg.setSourceEntity(32U);
    msg.setDestination(45229U);
    msg.setDestinationEntity(232U);
    msg.u = 0.6349585685771407;
    msg.v = 0.4623623920956469;
    msg.w = 0.7419736406783928;
    msg.p = 0.14246172802320156;
    msg.q = 0.4301803992844865;
    msg.r = 0.7401295896892274;
    msg.flags = 127U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredVelocity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredVelocity msg;
    msg.setTimeStamp(0.9677272254787734);
    msg.setSource(55957U);
    msg.setSourceEntity(126U);
    msg.setDestination(3158U);
    msg.setDestinationEntity(158U);
    msg.u = 0.13210587866436374;
    msg.v = 0.8851875036004861;
    msg.w = 0.9853311810083093;
    msg.p = 0.43831133908384634;
    msg.q = 0.09309596483897009;
    msg.r = 0.6408758223997855;
    msg.flags = 154U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredVelocity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PathControlState msg;
    msg.setTimeStamp(0.1580859495893917);
    msg.setSource(58956U);
    msg.setSourceEntity(1U);
    msg.setDestination(45368U);
    msg.setDestinationEntity(27U);
    msg.path_ref = 1383084698U;
    msg.start_lat = 0.46365278069098603;
    msg.start_lon = 0.8177719446031997;
    msg.start_z = 0.6216839410665109;
    msg.start_z_units = 178U;
    msg.end_lat = 0.635308249639996;
    msg.end_lon = 0.3324472137938451;
    msg.end_z = 0.5839036459301656;
    msg.end_z_units = 169U;
    msg.lradius = 0.21885331734291102;
    msg.flags = 85U;
    msg.x = 0.26950375462126763;
    msg.y = 0.6243825400946302;
    msg.z = 0.7698637154977819;
    msg.vx = 0.4898895694164399;
    msg.vy = 0.8869641853987547;
    msg.vz = 0.9027377298130836;
    msg.course_error = 0.30045590761429497;
    msg.eta = 49512U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PathControlState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PathControlState msg;
    msg.setTimeStamp(0.469178324927943);
    msg.setSource(43660U);
    msg.setSourceEntity(55U);
    msg.setDestination(30918U);
    msg.setDestinationEntity(68U);
    msg.path_ref = 3001096437U;
    msg.start_lat = 0.5281498668918283;
    msg.start_lon = 0.10810128486333415;
    msg.start_z = 0.24319092243517948;
    msg.start_z_units = 26U;
    msg.end_lat = 0.8495105438133282;
    msg.end_lon = 0.42749832020976786;
    msg.end_z = 0.5094957686478807;
    msg.end_z_units = 197U;
    msg.lradius = 0.5012353471959065;
    msg.flags = 86U;
    msg.x = 0.07500139407952922;
    msg.y = 0.4541677201751949;
    msg.z = 0.46563178205086087;
    msg.vx = 0.3504228453353253;
    msg.vy = 0.4550967035930329;
    msg.vz = 0.21722456840538973;
    msg.course_error = 0.7957521550495659;
    msg.eta = 32232U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PathControlState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PathControlState msg;
    msg.setTimeStamp(0.17996012300382758);
    msg.setSource(64433U);
    msg.setSourceEntity(250U);
    msg.setDestination(56082U);
    msg.setDestinationEntity(52U);
    msg.path_ref = 1610923116U;
    msg.start_lat = 0.6734063952681182;
    msg.start_lon = 0.7643164055797492;
    msg.start_z = 0.9398571490228762;
    msg.start_z_units = 110U;
    msg.end_lat = 0.003483691981482351;
    msg.end_lon = 0.9982200616898637;
    msg.end_z = 0.6182052530144693;
    msg.end_z_units = 156U;
    msg.lradius = 0.19393785530295815;
    msg.flags = 171U;
    msg.x = 0.27394150220974256;
    msg.y = 0.23346273605565981;
    msg.z = 0.5124609184535636;
    msg.vx = 0.7508473743542382;
    msg.vy = 0.0824565328576794;
    msg.vz = 0.7442060495603691;
    msg.course_error = 0.6669499026104103;
    msg.eta = 1678U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PathControlState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AllocatedControlTorques msg;
    msg.setTimeStamp(0.09844202573494909);
    msg.setSource(4229U);
    msg.setSourceEntity(184U);
    msg.setDestination(12220U);
    msg.setDestinationEntity(105U);
    msg.k = 0.9116521491682102;
    msg.m = 0.6823554460674277;
    msg.n = 0.2794032643879306;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AllocatedControlTorques #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AllocatedControlTorques msg;
    msg.setTimeStamp(0.9178794451555993);
    msg.setSource(11355U);
    msg.setSourceEntity(233U);
    msg.setDestination(15322U);
    msg.setDestinationEntity(71U);
    msg.k = 0.07379853525529356;
    msg.m = 0.28446936106881093;
    msg.n = 0.952756455521617;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AllocatedControlTorques #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AllocatedControlTorques msg;
    msg.setTimeStamp(0.22808243847682985);
    msg.setSource(34762U);
    msg.setSourceEntity(248U);
    msg.setDestination(37576U);
    msg.setDestinationEntity(50U);
    msg.k = 0.955070681117102;
    msg.m = 0.21264088875687448;
    msg.n = 0.16637669188608217;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AllocatedControlTorques #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ControlParcel msg;
    msg.setTimeStamp(0.7759076216814726);
    msg.setSource(48923U);
    msg.setSourceEntity(37U);
    msg.setDestination(10277U);
    msg.setDestinationEntity(61U);
    msg.p = 0.08768798361837382;
    msg.i = 0.49270296323034246;
    msg.d = 0.4432830459582823;
    msg.a = 0.8288069279260232;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ControlParcel #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ControlParcel msg;
    msg.setTimeStamp(0.6823287769604528);
    msg.setSource(46291U);
    msg.setSourceEntity(99U);
    msg.setDestination(62035U);
    msg.setDestinationEntity(119U);
    msg.p = 0.6873437972955819;
    msg.i = 0.1577573543661125;
    msg.d = 0.6278338117854178;
    msg.a = 0.6984183038766213;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ControlParcel #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ControlParcel msg;
    msg.setTimeStamp(0.8729070321986369);
    msg.setSource(49128U);
    msg.setSourceEntity(33U);
    msg.setDestination(29027U);
    msg.setDestinationEntity(124U);
    msg.p = 0.035839902214649944;
    msg.i = 0.26216363821037947;
    msg.d = 0.5890538029538986;
    msg.a = 0.31473065326526717;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ControlParcel #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Brake msg;
    msg.setTimeStamp(0.7925445971929816);
    msg.setSource(30261U);
    msg.setSourceEntity(140U);
    msg.setDestination(24013U);
    msg.setDestinationEntity(184U);
    msg.op = 228U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Brake #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Brake msg;
    msg.setTimeStamp(0.314321187460028);
    msg.setSource(9576U);
    msg.setSourceEntity(135U);
    msg.setDestination(11581U);
    msg.setDestinationEntity(27U);
    msg.op = 90U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Brake #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Brake msg;
    msg.setTimeStamp(0.473585182056402);
    msg.setSource(20808U);
    msg.setSourceEntity(157U);
    msg.setDestination(54918U);
    msg.setDestinationEntity(11U);
    msg.op = 216U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Brake #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredLinearState msg;
    msg.setTimeStamp(0.1685369267072444);
    msg.setSource(8390U);
    msg.setSourceEntity(229U);
    msg.setDestination(60582U);
    msg.setDestinationEntity(210U);
    msg.x = 0.017972585837322752;
    msg.y = 0.252816123343545;
    msg.z = 0.31706295716933275;
    msg.vx = 0.9442550244339288;
    msg.vy = 0.49485522839433616;
    msg.vz = 0.042232689355999664;
    msg.ax = 0.8853684198779798;
    msg.ay = 0.35402102060922125;
    msg.az = 0.14919975657223927;
    msg.flags = 8697U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredLinearState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredLinearState msg;
    msg.setTimeStamp(0.4020334252552932);
    msg.setSource(59493U);
    msg.setSourceEntity(224U);
    msg.setDestination(31604U);
    msg.setDestinationEntity(114U);
    msg.x = 0.43700657105598106;
    msg.y = 0.515298361863811;
    msg.z = 0.4614284095277197;
    msg.vx = 0.5341804821739257;
    msg.vy = 0.5911652083463528;
    msg.vz = 0.5349591124999147;
    msg.ax = 0.04687154601035848;
    msg.ay = 0.6712205187238239;
    msg.az = 0.7472404963246062;
    msg.flags = 30170U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredLinearState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredLinearState msg;
    msg.setTimeStamp(0.2853148711566659);
    msg.setSource(49936U);
    msg.setSourceEntity(161U);
    msg.setDestination(16490U);
    msg.setDestinationEntity(199U);
    msg.x = 0.9463847640973898;
    msg.y = 0.03480275614727513;
    msg.z = 0.18696899064617178;
    msg.vx = 0.4320944389109328;
    msg.vy = 0.0059386686781179865;
    msg.vz = 0.22448401923546035;
    msg.ax = 0.7016105103375324;
    msg.ay = 0.43774466716143035;
    msg.az = 0.7872444251037914;
    msg.flags = 45947U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredLinearState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredThrottle msg;
    msg.setTimeStamp(0.35924302590707835);
    msg.setSource(14484U);
    msg.setSourceEntity(53U);
    msg.setDestination(2062U);
    msg.setDestinationEntity(17U);
    msg.value = 0.9170860949229558;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredThrottle #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredThrottle msg;
    msg.setTimeStamp(0.1269988318290579);
    msg.setSource(31896U);
    msg.setSourceEntity(41U);
    msg.setDestination(20680U);
    msg.setDestinationEntity(166U);
    msg.value = 0.18190459551828198;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredThrottle #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredThrottle msg;
    msg.setTimeStamp(0.7180084571281088);
    msg.setSource(15840U);
    msg.setSourceEntity(122U);
    msg.setDestination(62519U);
    msg.setDestinationEntity(48U);
    msg.value = 0.35889939822654227;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredThrottle #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Goto msg;
    msg.setTimeStamp(0.3495715972624063);
    msg.setSource(4925U);
    msg.setSourceEntity(205U);
    msg.setDestination(13999U);
    msg.setDestinationEntity(115U);
    msg.timeout = 57024U;
    msg.lat = 0.6779215894534758;
    msg.lon = 0.5987830201548829;
    msg.z = 0.24018651209565012;
    msg.z_units = 171U;
    msg.speed = 0.26838396943812803;
    msg.speed_units = 95U;
    msg.roll = 0.8289504714507956;
    msg.pitch = 0.790248468680618;
    msg.yaw = 0.6964835862143905;
    msg.custom.assign("FGYINQMZRYQVSUDOWZOCNKXFQAJPBECKXGEAFTRVKDNZRIFLGYKZLXVQCFUXBTNWQLOJBRSAMEEYIKGORZLYMDPQNWEPTRGRAKMWNHXJBLKDHEURVGDUGCSLTVCLBIORBOLSSAIPIQHXIJNOAGLAQZSUFMWOPUSOVTJJDTBDMNVDCJMTJJCFPWKNHZEEHWXQFPWEFYQFDUAZXCPDKAACOSBUSNSPI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Goto #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Goto msg;
    msg.setTimeStamp(0.6647447505597914);
    msg.setSource(42827U);
    msg.setSourceEntity(39U);
    msg.setDestination(33472U);
    msg.setDestinationEntity(125U);
    msg.timeout = 23572U;
    msg.lat = 0.8541063918859362;
    msg.lon = 0.20791155339692913;
    msg.z = 0.017815638379238385;
    msg.z_units = 62U;
    msg.speed = 0.7430670179745996;
    msg.speed_units = 210U;
    msg.roll = 0.7812608079641925;
    msg.pitch = 0.843935399781157;
    msg.yaw = 0.12789463375224996;
    msg.custom.assign("DVHAGQDHMCUSTAYYEVFYGZWZSKUSMWUVZONNZUTTCSVZJAOLOPUSJZSVKJDPEKOYIFZIHMZJQYCNDIHFRLVBWTTKNKFRITCNKPYJBBDVVQPBOLXXLXYQEHERKTJGDMKLHIFEDPKEFOOCLUYXMDA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Goto #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Goto msg;
    msg.setTimeStamp(0.41592179398408613);
    msg.setSource(27178U);
    msg.setSourceEntity(216U);
    msg.setDestination(48907U);
    msg.setDestinationEntity(51U);
    msg.timeout = 46004U;
    msg.lat = 0.9465804224851627;
    msg.lon = 0.1438656527145854;
    msg.z = 0.05163807839167012;
    msg.z_units = 53U;
    msg.speed = 0.704982343211971;
    msg.speed_units = 162U;
    msg.roll = 0.07969712188492772;
    msg.pitch = 0.4337925176286146;
    msg.yaw = 0.21208128452058939;
    msg.custom.assign("NYZBDWKKFCEKEKDJDCIOFVVRZQCMCTMJEQYGNWRXZHHYXJBJVIPIPFYMWEPHFLKETFEIULYZKXNHLESRBDPRSPNMGTGYMBZSTJPOACLJOWFU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Goto #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PopUp msg;
    msg.setTimeStamp(0.12377887019035094);
    msg.setSource(57399U);
    msg.setSourceEntity(175U);
    msg.setDestination(36445U);
    msg.setDestinationEntity(23U);
    msg.timeout = 57465U;
    msg.lat = 0.8647530684157725;
    msg.lon = 0.9585519486747909;
    msg.z = 0.021975085206026312;
    msg.z_units = 139U;
    msg.speed = 0.2316200611225705;
    msg.speed_units = 181U;
    msg.duration = 30655U;
    msg.radius = 0.8824280451059144;
    msg.flags = 192U;
    msg.custom.assign("IXQAPJUXFWMZWTMLNXAURDVGEMYGHYCWHRMBVDRKBQVXNQCRVWIIHYETYANQTNOVGOVCGQGLPVFZSABSEFHCWXPLVQDJAEBRMDPYUKIFYHZRIYESRTCDTSUFIZKXHTVXOJQZPOOSXHLICKMUYRIHKDFZVXMUBHGMLBGTBXWQN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PopUp #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PopUp msg;
    msg.setTimeStamp(0.269479129036829);
    msg.setSource(26875U);
    msg.setSourceEntity(164U);
    msg.setDestination(29751U);
    msg.setDestinationEntity(234U);
    msg.timeout = 20669U;
    msg.lat = 0.5843526379806971;
    msg.lon = 0.15807079118066458;
    msg.z = 0.7625174042973996;
    msg.z_units = 246U;
    msg.speed = 0.17279771325036863;
    msg.speed_units = 190U;
    msg.duration = 32808U;
    msg.radius = 0.6076890118136165;
    msg.flags = 119U;
    msg.custom.assign("QZKMUEKMJPYQKHSFILKBROJFEZEWZIBLJHLDBECOWVKUKAPZWSFQBMHKZGXYTJDIBBMGXHYFPWCWTBJAVMRGNYWLZUAXTTOFSLLYVEZUORFCGOGNVTNMNUCSVYYDTSZGNCTWNCUXRQSNPLCDQSQCCOEEV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PopUp #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PopUp msg;
    msg.setTimeStamp(0.4266756656250805);
    msg.setSource(7338U);
    msg.setSourceEntity(55U);
    msg.setDestination(38786U);
    msg.setDestinationEntity(161U);
    msg.timeout = 40510U;
    msg.lat = 0.49724426986263837;
    msg.lon = 0.3558268772498805;
    msg.z = 0.2630457326231347;
    msg.z_units = 130U;
    msg.speed = 0.34711565011635503;
    msg.speed_units = 219U;
    msg.duration = 63914U;
    msg.radius = 0.8185170053769747;
    msg.flags = 109U;
    msg.custom.assign("CZIFPHQNIOMYLJQMCJGSTPAPNTLBPQGCTVYIFCDPQARLJMYOKEFRENXFSKGINQWDEQCAMWAXOGDNMYDARBPHEBTUTELSIDZRVZVTYEHFEXTJKUIUKNSLLUDHDTRX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PopUp #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Teleoperation msg;
    msg.setTimeStamp(0.9162169838658444);
    msg.setSource(15319U);
    msg.setSourceEntity(66U);
    msg.setDestination(47423U);
    msg.setDestinationEntity(134U);
    msg.custom.assign("QJXLBCSPRGLTUZMRXOUKVYAGWSMRMRNUBWTNRDOVICWRIWCXOCFWPMGYTEJPEUXOXMVBHAHFVJAGGHCYRJZEFWABJALCMXNPZZTASEUNBDUGNCPTZWEVFFHSYLULOSKPXQWOYMUWYFMLJODHOLDKKFIJTXTFNZYDZRTBZQIGVY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Teleoperation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Teleoperation msg;
    msg.setTimeStamp(0.7168800040350757);
    msg.setSource(61086U);
    msg.setSourceEntity(154U);
    msg.setDestination(33326U);
    msg.setDestinationEntity(217U);
    msg.custom.assign("AOXWAMHTCPJSAJDHGOWJGLGYVIMMBYOEIQHFYFRAALCUNFBFDLSNQIQWZLXXGKUOSDKDRIHICZFRNMKFYBJZLOTKTRNXPAKZGYQSJLVNLXKIP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Teleoperation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Teleoperation msg;
    msg.setTimeStamp(0.21525741574787938);
    msg.setSource(17419U);
    msg.setSourceEntity(235U);
    msg.setDestination(36973U);
    msg.setDestinationEntity(83U);
    msg.custom.assign("LCVTIFVORZBPPBSXLZZOORIOAHREJUYZZRMRZWVPJTNWDMMSIOKXTESDCMIQDBHTWIEYAKQQENEHQCVTLIVAZQOFPCSXGUWFNPWLGEXUMGTWZFDXJHBKMUYWCHLPLFJNVCADKHDNGPEGJZSURLNSHMJOGFQDKSBSWTWYJYLMDQUGABMPORUEKINHXAEXGFTVHARNJFPQNHKXDOCQIZTJGMIBVCUALUBFAACVKEJWYROKVNDYSIBRSXYCLPU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Teleoperation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Loiter msg;
    msg.setTimeStamp(0.6097354270903227);
    msg.setSource(21514U);
    msg.setSourceEntity(170U);
    msg.setDestination(2572U);
    msg.setDestinationEntity(126U);
    msg.timeout = 26590U;
    msg.lat = 0.5716628458290616;
    msg.lon = 0.24422917865285054;
    msg.z = 0.22398007414519894;
    msg.z_units = 17U;
    msg.duration = 24447U;
    msg.speed = 0.16649337889666127;
    msg.speed_units = 89U;
    msg.type = 134U;
    msg.radius = 0.4148490766095996;
    msg.length = 0.10323305688082818;
    msg.bearing = 0.7506713454767947;
    msg.direction = 11U;
    msg.custom.assign("ECWXESBHXZZMWKXIHWJHULFSISQNLGYZLDWEAZIWNLKPSJSUZLQWFLRJMZITIHYZVVPCKFTGWYAULEIPAFZJKEGAQOLJFDZOWENANBPPGEVJBHTKMAXRSYYYVHDHVQTRCCIJMNVYPBVYUG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Loiter #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Loiter msg;
    msg.setTimeStamp(0.06407351486997959);
    msg.setSource(403U);
    msg.setSourceEntity(40U);
    msg.setDestination(56231U);
    msg.setDestinationEntity(203U);
    msg.timeout = 7702U;
    msg.lat = 0.10548008404258036;
    msg.lon = 0.4527172475059065;
    msg.z = 0.9644985803660417;
    msg.z_units = 187U;
    msg.duration = 50657U;
    msg.speed = 0.6405245908431846;
    msg.speed_units = 197U;
    msg.type = 138U;
    msg.radius = 0.9202340921495346;
    msg.length = 0.7151954280715112;
    msg.bearing = 0.5919556451088259;
    msg.direction = 246U;
    msg.custom.assign("IXLJCNKPIPSGGCABJDPOQCQJFWGBKORTCUYGSXJOHGMKHDWUJLMHCX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Loiter #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Loiter msg;
    msg.setTimeStamp(0.9242064314903273);
    msg.setSource(32823U);
    msg.setSourceEntity(6U);
    msg.setDestination(23748U);
    msg.setDestinationEntity(228U);
    msg.timeout = 17310U;
    msg.lat = 0.9293340366885612;
    msg.lon = 0.11805271608354928;
    msg.z = 0.3240742750009096;
    msg.z_units = 5U;
    msg.duration = 43793U;
    msg.speed = 0.6774351010330684;
    msg.speed_units = 204U;
    msg.type = 45U;
    msg.radius = 0.5428778756248777;
    msg.length = 0.3737657363654233;
    msg.bearing = 0.08997350693676309;
    msg.direction = 253U;
    msg.custom.assign("ZLVPTTYKJYTMBQXSSXAFENNBXEYVWMOUJTICBNOWAQWCRXZCWZEJLPRCDWVLMJMWBHWRFHADGBESZRAFJUDETV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Loiter #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IdleManeuver msg;
    msg.setTimeStamp(0.19433674372006238);
    msg.setSource(44554U);
    msg.setSourceEntity(129U);
    msg.setDestination(39984U);
    msg.setDestinationEntity(120U);
    msg.duration = 52527U;
    msg.custom.assign("UQFKXZMYVHEBDHICHSOJQVTCFZNXRHXVGFEHLORMZQUKSXUMLOMVZXPYIEWRGKCIOGIKAZKKEQNYNUTYMTITLUQQNVCYJUCCAFBSNGOOOPHIIALYMEF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IdleManeuver #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IdleManeuver msg;
    msg.setTimeStamp(0.32354710837049816);
    msg.setSource(48571U);
    msg.setSourceEntity(188U);
    msg.setDestination(59847U);
    msg.setDestinationEntity(224U);
    msg.duration = 16108U;
    msg.custom.assign("RLNVTCSGYYBLSUDAIVWXCSRDQGBQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IdleManeuver #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IdleManeuver msg;
    msg.setTimeStamp(0.8485405710871606);
    msg.setSource(43083U);
    msg.setSourceEntity(21U);
    msg.setDestination(9798U);
    msg.setDestinationEntity(23U);
    msg.duration = 19051U;
    msg.custom.assign("VIPNDGEOAXHSLRWXQRFCHHKPMKKDXBLEQEGTYZEWOLWPMSNSXYRTIOHKOPGSVRWFPEIBYKLSURN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IdleManeuver #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LowLevelControl msg;
    msg.setTimeStamp(0.8545441859398399);
    msg.setSource(39445U);
    msg.setSourceEntity(223U);
    msg.setDestination(16153U);
    msg.setDestinationEntity(158U);
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.47475075231182096;
    tmp_msg_0.speed_units = 245U;
    msg.control.set(tmp_msg_0);
    msg.duration = 10548U;
    msg.custom.assign("DPCJNLTOKVIYUEAHGWLYVLNDSOS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LowLevelControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LowLevelControl msg;
    msg.setTimeStamp(0.9373417179541529);
    msg.setSource(23961U);
    msg.setSourceEntity(185U);
    msg.setDestination(43952U);
    msg.setDestinationEntity(34U);
    IMC::DesiredRoll tmp_msg_0;
    tmp_msg_0.value = 0.4122438746315603;
    msg.control.set(tmp_msg_0);
    msg.duration = 3212U;
    msg.custom.assign("KDVFOUZZURIMFPZXGKDAXBBXPEBGATHNDYDVYXBUFOSHOMOPMTOMBSLNZWBFTHHSVHSCFWSLYRGGINOUWRQQDALRHZHCBUUQYJVVEGJFNYANAQSEKEJZWEFZYBIRACCCIJQLGRSLPY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LowLevelControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LowLevelControl msg;
    msg.setTimeStamp(0.21760945987235814);
    msg.setSource(58366U);
    msg.setSourceEntity(252U);
    msg.setDestination(59707U);
    msg.setDestinationEntity(112U);
    IMC::DesiredPitch tmp_msg_0;
    tmp_msg_0.value = 0.13626654342127908;
    msg.control.set(tmp_msg_0);
    msg.duration = 347U;
    msg.custom.assign("WVEAGYEUSKIPFJFXTUOXXQYJYANTZEPWLLZQVNBDYJXIWKOYTVYSZHRAPMCTENIVJUOTNFDTCFVKMDJGYLGSZBPGBNUZELHCRBCOEPCCHLXURFXOIKNWEIRHIAOJJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LowLevelControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Rows msg;
    msg.setTimeStamp(0.08582749390758637);
    msg.setSource(54371U);
    msg.setSourceEntity(221U);
    msg.setDestination(22163U);
    msg.setDestinationEntity(29U);
    msg.timeout = 8000U;
    msg.lat = 0.7146138300702165;
    msg.lon = 0.082212874037774;
    msg.z = 0.6024422786106515;
    msg.z_units = 175U;
    msg.speed = 0.7676657271439367;
    msg.speed_units = 202U;
    msg.bearing = 0.4160711032327191;
    msg.cross_angle = 0.8140087615595368;
    msg.width = 0.6137268677285044;
    msg.length = 0.2803896299440045;
    msg.hstep = 0.17717183996093644;
    msg.coff = 173U;
    msg.alternation = 222U;
    msg.flags = 17U;
    msg.custom.assign("WTFJOHVOXANDUXASZXJYRLQZINNJUXPQQMIIAOEWDKREGJYHZHORVGCACYPBVEQWZIMCYYUHPXCBLUSJVSBYZVRBFKMWFXJOEPMCCSGTWIOOZEFFWDAXDKOQNCRTHJRYHTGPDELFWFVNQSTFYDRQAUCNALSMTZJZZOUQQAKVDHKLLTERUGGQLIUXLHJLWIUIRDXKSNBCPESRWDHHPILGIMMNVAZDGBTAKKJVYPUTFNKBB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Rows #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Rows msg;
    msg.setTimeStamp(0.3997629572260172);
    msg.setSource(43513U);
    msg.setSourceEntity(50U);
    msg.setDestination(49982U);
    msg.setDestinationEntity(78U);
    msg.timeout = 10470U;
    msg.lat = 0.22235642664032473;
    msg.lon = 0.5162084576424697;
    msg.z = 0.9229100789961401;
    msg.z_units = 83U;
    msg.speed = 0.23883598575709786;
    msg.speed_units = 125U;
    msg.bearing = 0.7940250999249823;
    msg.cross_angle = 0.5590073740223838;
    msg.width = 0.05627320531377911;
    msg.length = 0.5676802659962675;
    msg.hstep = 0.5647822006862245;
    msg.coff = 1U;
    msg.alternation = 96U;
    msg.flags = 80U;
    msg.custom.assign("GHQGIMJOFDXYUDBWJZJWOCMQSPTTWLCCAAADEHILCPIGCOBROKPVYTXELHUCUNKQMFIITSKBLKZXBFZQAEAXVBQTVJQRTF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Rows #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Rows msg;
    msg.setTimeStamp(0.8606234589913954);
    msg.setSource(16455U);
    msg.setSourceEntity(131U);
    msg.setDestination(15230U);
    msg.setDestinationEntity(42U);
    msg.timeout = 33253U;
    msg.lat = 0.15593034474347955;
    msg.lon = 0.8549124882572567;
    msg.z = 0.1745211816477904;
    msg.z_units = 95U;
    msg.speed = 0.3076854403919188;
    msg.speed_units = 163U;
    msg.bearing = 0.3608951326480394;
    msg.cross_angle = 0.06769352846643817;
    msg.width = 0.7548107701688054;
    msg.length = 0.36234901014576015;
    msg.hstep = 0.3532065454929155;
    msg.coff = 250U;
    msg.alternation = 154U;
    msg.flags = 103U;
    msg.custom.assign("UJNJWMRNGREOORQSUDLTAGMGWOHZOFZVYHEPHXWCQXCMGZPTXIWRAEGFBJNCDRFTVLGMYMVOFHIKKYQHBSGJSRZQQIXZUCNVDPIZCYSJBBYAVXGZQSNNWBNKSJQIXLILUKHHUCFDADXFWAPCUYFUQKUAWFLYFUPTZIXTKDUOPSASJVVTCEGCQXBTRDLIZKOJONNCFYTNEHTVHDYVRLYKJMWPPOKEZMBWSMHPAIGBBBAOELTIEDM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Rows #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowPath msg;
    msg.setTimeStamp(0.6659532054803594);
    msg.setSource(30121U);
    msg.setSourceEntity(122U);
    msg.setDestination(56999U);
    msg.setDestinationEntity(167U);
    msg.timeout = 3891U;
    msg.lat = 0.10463375194901814;
    msg.lon = 0.4574728296624698;
    msg.z = 0.6563673901358362;
    msg.z_units = 237U;
    msg.speed = 0.9994907370249435;
    msg.speed_units = 11U;
    msg.custom.assign("SJFVOXRPNUZZZYUTCGHSRJOXHCXPZOJSRMXDMVQBISMRITMQAXLVJGHFWIDPY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowPath #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowPath msg;
    msg.setTimeStamp(0.4553770836849613);
    msg.setSource(850U);
    msg.setSourceEntity(66U);
    msg.setDestination(8076U);
    msg.setDestinationEntity(69U);
    msg.timeout = 12555U;
    msg.lat = 0.7207390684625024;
    msg.lon = 0.7270297645633018;
    msg.z = 0.27964755825324705;
    msg.z_units = 5U;
    msg.speed = 0.46795206266820144;
    msg.speed_units = 58U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.7767559591729198;
    tmp_msg_0.y = 0.7569560894143816;
    tmp_msg_0.z = 0.01621360190364174;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("MWSXNYVIQWBWESOMKQRTDDLCTZQBESPOFJNLGKISRZTDXXZUOQIYYZEKPQTNBOCPBIRLBDUBKZPZAXKTOAVGIEIVUHWUKKQZNWTMCJTDREVJNKYIECNJZSEQAMWRJHLSGAAYKFLTCDGFOBFNAPOCHVZGNRVDEHIRRPVCXFAIVFRXFEXNYTTXBPOPHUUCYFSWJAJFMBMDLCCLFUNZVR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowPath #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowPath msg;
    msg.setTimeStamp(0.13912847612190038);
    msg.setSource(36457U);
    msg.setSourceEntity(188U);
    msg.setDestination(28551U);
    msg.setDestinationEntity(54U);
    msg.timeout = 18583U;
    msg.lat = 0.1457055860815748;
    msg.lon = 0.05671268640842475;
    msg.z = 0.9560678067026965;
    msg.z_units = 37U;
    msg.speed = 0.09388703167279577;
    msg.speed_units = 54U;
    msg.custom.assign("EZRNIXSUNRWCQMKURFHVHDDLOJUZPTBEYJHIRVDAYYVYIJXPHFLLOKOJAVUOZQCIWZCAZSEAPTOVXTRWLNHDTSPBWUNRJEBTAAPXTQGQQNRLHQMVGYUXPIBCJZNASYKGEUAVMIXGRYKHRATPGOMCSWNPGVFLKLXFECGFKQWUDMNKBZCUFXBZDSXDMESJKXFVPMVKGIBGEBSHJWIOWTYQPJDJLYCIRLQNOWFZEYSGSAUIOLEQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowPath #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PathPoint msg;
    msg.setTimeStamp(0.7632824905407154);
    msg.setSource(14900U);
    msg.setSourceEntity(24U);
    msg.setDestination(18314U);
    msg.setDestinationEntity(226U);
    msg.x = 0.5231576353045471;
    msg.y = 0.30615543463994477;
    msg.z = 0.13608110959414943;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PathPoint #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PathPoint msg;
    msg.setTimeStamp(0.7860927116973724);
    msg.setSource(5700U);
    msg.setSourceEntity(173U);
    msg.setDestination(22459U);
    msg.setDestinationEntity(28U);
    msg.x = 0.1519606233476074;
    msg.y = 0.7040777261513056;
    msg.z = 0.07318828531917099;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PathPoint #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PathPoint msg;
    msg.setTimeStamp(0.8761300802983062);
    msg.setSource(60433U);
    msg.setSourceEntity(233U);
    msg.setDestination(33188U);
    msg.setDestinationEntity(253U);
    msg.x = 0.2173626359166504;
    msg.y = 0.711895604174273;
    msg.z = 0.734784690045337;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PathPoint #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::YoYo msg;
    msg.setTimeStamp(0.6590981879744422);
    msg.setSource(64532U);
    msg.setSourceEntity(139U);
    msg.setDestination(6637U);
    msg.setDestinationEntity(81U);
    msg.timeout = 31432U;
    msg.lat = 0.5798576973894753;
    msg.lon = 0.24488047390734535;
    msg.z = 0.4533429657425889;
    msg.z_units = 244U;
    msg.amplitude = 0.43933274641567743;
    msg.pitch = 0.8581925948915932;
    msg.speed = 0.004054732852354359;
    msg.speed_units = 11U;
    msg.custom.assign("SSYAGFZOJVLXDTNBNHPXDUEMESOUIVFIZDRZLVRJYXGGOBKOCWLIMUEKBNSHEGISTVAODKWKTFOJOLTQEZVLYFIIURYZACTFCWNZDXMQZTUCEWPFGHUJQSNLJABRNWBDYRVQQCHEVPUYHTVWRLGURHWGFQICTFMTTQMQYEKMPNUWOKCPDBJHOYJXPRLYSRSHPKFBHXPLXNJEDIBMZOZQJAUKIFICMZSAHAMYKXRGEWG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("YoYo #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::YoYo msg;
    msg.setTimeStamp(0.7682362938470735);
    msg.setSource(42641U);
    msg.setSourceEntity(87U);
    msg.setDestination(48472U);
    msg.setDestinationEntity(214U);
    msg.timeout = 6040U;
    msg.lat = 0.47278075751347837;
    msg.lon = 0.7329791589498753;
    msg.z = 0.09009444234436292;
    msg.z_units = 114U;
    msg.amplitude = 0.38408035107300575;
    msg.pitch = 0.9065755528751329;
    msg.speed = 0.5402037549895492;
    msg.speed_units = 54U;
    msg.custom.assign("UXJCAPVRMSTNBHWGIDHWQBZRJQOBXZDOFJOCMTGKWPIOVDMGPXLBESCORUHFSPIJVANQPSCQVIZQHJEHTEZPZTTAWJNEOQLNMSDTFEXFRKFKECJC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("YoYo #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::YoYo msg;
    msg.setTimeStamp(0.5629804384004994);
    msg.setSource(29371U);
    msg.setSourceEntity(208U);
    msg.setDestination(22079U);
    msg.setDestinationEntity(140U);
    msg.timeout = 65389U;
    msg.lat = 0.3296347115299578;
    msg.lon = 0.022505015873619638;
    msg.z = 0.2289829044988061;
    msg.z_units = 180U;
    msg.amplitude = 0.6776716676955128;
    msg.pitch = 0.5974297855231896;
    msg.speed = 0.45861695217802045;
    msg.speed_units = 27U;
    msg.custom.assign("HKRDIVCTPVXWUQQBNMJXCKGSZFRGEDSMZUPIOEEFWTXIPTDBKOZIDATSXYKHQGWUSVBFYRHUBICJUYWFNUIYYAGOAXOBUEQOSPZEFZLLWJEHVJZLNWIP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("YoYo #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TeleoperationDone msg;
    msg.setTimeStamp(0.8585019143139192);
    msg.setSource(57372U);
    msg.setSourceEntity(23U);
    msg.setDestination(4034U);
    msg.setDestinationEntity(37U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TeleoperationDone #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TeleoperationDone msg;
    msg.setTimeStamp(0.33276924111555584);
    msg.setSource(42743U);
    msg.setSourceEntity(29U);
    msg.setDestination(16489U);
    msg.setDestinationEntity(224U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TeleoperationDone #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TeleoperationDone msg;
    msg.setTimeStamp(0.9029375664294177);
    msg.setSource(14342U);
    msg.setSourceEntity(130U);
    msg.setDestination(6961U);
    msg.setDestinationEntity(194U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TeleoperationDone #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StationKeeping msg;
    msg.setTimeStamp(0.3483186266208447);
    msg.setSource(53770U);
    msg.setSourceEntity(7U);
    msg.setDestination(1841U);
    msg.setDestinationEntity(81U);
    msg.lat = 0.3028980285590066;
    msg.lon = 0.37238394915304285;
    msg.z = 0.3299905613229722;
    msg.z_units = 195U;
    msg.radius = 0.487311668260237;
    msg.duration = 9142U;
    msg.speed = 0.08405226971631274;
    msg.speed_units = 99U;
    msg.custom.assign("TZPBBVWLRBKPODGBGUNAYTYSAXRLGVFLJDIFZUDHRGKZWMESXZAJPLCVYDJHVHMZDHFQWHOYLIXTUJFZRFWQILTCMEHCVNMPHKPEMSNUMRQMYUEKMJICHBRWYIQCPBMSQGKFNJXXHSZQFQPQDURPWZSQODTEITEQAFOUDEXLKIALWCYGIRWKAZKEOVDBYBHLVCAKRWINTAXBGYFFXI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StationKeeping #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StationKeeping msg;
    msg.setTimeStamp(0.40066594999173943);
    msg.setSource(39250U);
    msg.setSourceEntity(49U);
    msg.setDestination(13851U);
    msg.setDestinationEntity(109U);
    msg.lat = 0.9252703026531237;
    msg.lon = 0.12037917318876712;
    msg.z = 0.3599172159321057;
    msg.z_units = 144U;
    msg.radius = 0.9831266244369274;
    msg.duration = 3833U;
    msg.speed = 0.8464199290099242;
    msg.speed_units = 223U;
    msg.custom.assign("HBTIQTZMVSVIMHGPXRDKDXKGQNULABAABZDWZABHEDJKEULGCJHRTVVMXSPPPFLCVYPUVSJJSCMIHVEGEYFWYQPTRYZGHATODEGNYUOEZAXYABZWOIBHWZNVKFDCIFWGONZEUHQWTQLQJLSMPZYFBRMXEICKULFKFYCNRJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StationKeeping #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StationKeeping msg;
    msg.setTimeStamp(0.07688875572564857);
    msg.setSource(17639U);
    msg.setSourceEntity(153U);
    msg.setDestination(8767U);
    msg.setDestinationEntity(40U);
    msg.lat = 0.2932771117192787;
    msg.lon = 0.6009365115965795;
    msg.z = 0.7742370184195376;
    msg.z_units = 10U;
    msg.radius = 0.14345167379537882;
    msg.duration = 61699U;
    msg.speed = 0.19623668164980224;
    msg.speed_units = 116U;
    msg.custom.assign("NBTQLXJZHHTPJVNUAIHMEKFGRIBKAKNULAFS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StationKeeping #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Elevator msg;
    msg.setTimeStamp(0.33507760184548996);
    msg.setSource(56567U);
    msg.setSourceEntity(190U);
    msg.setDestination(4228U);
    msg.setDestinationEntity(101U);
    msg.timeout = 41435U;
    msg.flags = 153U;
    msg.lat = 0.2031748870982375;
    msg.lon = 0.45568539086966153;
    msg.start_z = 0.8521548639942113;
    msg.start_z_units = 132U;
    msg.end_z = 0.006840447713598818;
    msg.end_z_units = 183U;
    msg.radius = 0.5773190301377702;
    msg.speed = 0.7404109824961183;
    msg.speed_units = 250U;
    msg.custom.assign("PYAXSRHPPUGVZZDIQSUNJIJFFQOASXZDVBJWHFDYLBMFLRGKARMLSHCRQBIOXNCYEWFKZPWCTSKPMWQKWLGOTADEEBETNFRXAUJNWSOFTDWEGUKPKIYZSCXAIJPJNTMVKBLIZLCELWJCXKHWVNZIUBY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Elevator #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Elevator msg;
    msg.setTimeStamp(0.08887721841173946);
    msg.setSource(48804U);
    msg.setSourceEntity(0U);
    msg.setDestination(33596U);
    msg.setDestinationEntity(201U);
    msg.timeout = 35456U;
    msg.flags = 42U;
    msg.lat = 0.5594158532428127;
    msg.lon = 0.378353912241816;
    msg.start_z = 0.7634585331953553;
    msg.start_z_units = 46U;
    msg.end_z = 0.9213959041227382;
    msg.end_z_units = 150U;
    msg.radius = 0.46582221179089145;
    msg.speed = 0.15749951291862907;
    msg.speed_units = 71U;
    msg.custom.assign("DEAKKVWMAKXNRLWTPSYUBZNZNPIDPUQNQXSPLDVTAWHYJTGDMADWCOOGSEYOTQFAQGCBEAFKNFIWGIBMQUFLRBYRVQKBHRLOJMIUPWQCTBCEZMCFXLHONSFRGFDRUJUUNGAWKMOXJHVOG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Elevator #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Elevator msg;
    msg.setTimeStamp(0.36109668597951605);
    msg.setSource(29087U);
    msg.setSourceEntity(39U);
    msg.setDestination(9233U);
    msg.setDestinationEntity(78U);
    msg.timeout = 7808U;
    msg.flags = 210U;
    msg.lat = 0.9547504477603674;
    msg.lon = 0.950870236456385;
    msg.start_z = 0.7845565942122671;
    msg.start_z_units = 240U;
    msg.end_z = 0.571451424710133;
    msg.end_z_units = 242U;
    msg.radius = 0.6034595072624191;
    msg.speed = 0.3096244458217957;
    msg.speed_units = 78U;
    msg.custom.assign("RRMRRJAZGETKBPGMZQQZIDZUNSAEHOOIESWWOCRZVDUVVSGIMUJMYABZEWBAPSKXBPTYGLBKPAMPJKRYRUFSPELCJSKNEBDRDCUHMFGOGCAALLVQUCWNXJNXXTFMGZJKXCQDVSSYSLWVBCWFZKXSHXJWCNJUHXVDHDYBTZAGOUQNHJCPQNMTOXBFPYHOXLI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Elevator #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowTrajectory msg;
    msg.setTimeStamp(0.06203846937273949);
    msg.setSource(29803U);
    msg.setSourceEntity(140U);
    msg.setDestination(26568U);
    msg.setDestinationEntity(12U);
    msg.timeout = 40830U;
    msg.lat = 0.6277258924028514;
    msg.lon = 0.5620552869794588;
    msg.z = 0.8473580876262695;
    msg.z_units = 174U;
    msg.speed = 0.9904391482695383;
    msg.speed_units = 43U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.9582190096936637;
    tmp_msg_0.y = 0.4694463914699589;
    tmp_msg_0.z = 0.9745930091136453;
    tmp_msg_0.t = 0.11065041383689522;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("AEDFMYNUBLHQGYKMHUJULIEDPTCVXVRGUEWGYKXZUFPOSIVFIOCAQQLKABWDIYVTRABMJZTGXNNOKZMQKYEJZPTAFMVSTTPEOZRIMWJGWLOGDTCHXAREDJYQNZRPOJVWQTMXDGLGFCLXZAUAISVIVXFHWPNQSGSSNLEBAZNBFQJCSICKBDCQVHWDHIFPGRKBBKPYDFNXRRXFCEUMAYULPLJMZWBWHOUOERHKCSIVQBOHZTYJOPDSMY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowTrajectory #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowTrajectory msg;
    msg.setTimeStamp(0.43681167922569364);
    msg.setSource(15287U);
    msg.setSourceEntity(237U);
    msg.setDestination(23093U);
    msg.setDestinationEntity(244U);
    msg.timeout = 9131U;
    msg.lat = 0.2623913431651974;
    msg.lon = 0.010284944553588415;
    msg.z = 0.8678442799250723;
    msg.z_units = 214U;
    msg.speed = 0.1405248574569823;
    msg.speed_units = 77U;
    msg.custom.assign("QQEUBDMWDEPXZNCTAUZJUPHALFRMGWFSLWYVOEGXYULHBZBUNXIPUFKCXQKVSONUGYGZTBQROZFHKANORKHYUHNTGRHQZVLPIBTOBRSEYJYAFKVIFTSMMYELXPCLQWPXMAIITYVFEDVEDWCMZCCKQBYJAJJDSCTZJITXJOPCQRHALQLMURFJIBWDNTVNHNKHEKEDWNGAMEOIDIJSBO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowTrajectory #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowTrajectory msg;
    msg.setTimeStamp(0.4236812653876715);
    msg.setSource(8377U);
    msg.setSourceEntity(113U);
    msg.setDestination(55818U);
    msg.setDestinationEntity(84U);
    msg.timeout = 4273U;
    msg.lat = 0.1245143293500316;
    msg.lon = 0.006464735710106861;
    msg.z = 0.6359302099647255;
    msg.z_units = 205U;
    msg.speed = 0.5323689349957459;
    msg.speed_units = 183U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.847676452642762;
    tmp_msg_0.y = 0.3053851327031617;
    tmp_msg_0.z = 0.7273630427802559;
    tmp_msg_0.t = 0.22271477617826396;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("MPKIMDHUIJUGBFEWDNUXWXYSBHVDIOWKEKYHJCYCUVYDOJCZYEKZAFINXPZOVOTLFIOSDRKKEGFREYFYTOGSHBLIMFTPRNKSVROJQWVQBIRONCXLYWAMXSKWSBTRQDTSQJVTMCADUOLUWXBLIALPNCPGBEYJHKCNGVPUQAGIUYXFGTAAZQCFNAZTPJHSWOQQVVMKZMZGJMTUWMSZALEZPJPXBHDLJZRRRHXVBEQN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowTrajectory #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrajectoryPoint msg;
    msg.setTimeStamp(0.25027983763624506);
    msg.setSource(12878U);
    msg.setSourceEntity(124U);
    msg.setDestination(16440U);
    msg.setDestinationEntity(231U);
    msg.x = 0.9028661585560115;
    msg.y = 0.8626623023857359;
    msg.z = 0.4720806035670011;
    msg.t = 0.7193502634899501;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrajectoryPoint #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrajectoryPoint msg;
    msg.setTimeStamp(0.32533632867784623);
    msg.setSource(64675U);
    msg.setSourceEntity(198U);
    msg.setDestination(46534U);
    msg.setDestinationEntity(23U);
    msg.x = 0.8551484458207596;
    msg.y = 0.0526603681476665;
    msg.z = 0.933095705470751;
    msg.t = 0.016497072199583518;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrajectoryPoint #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrajectoryPoint msg;
    msg.setTimeStamp(0.020948593936818916);
    msg.setSource(59978U);
    msg.setSourceEntity(51U);
    msg.setDestination(48563U);
    msg.setDestinationEntity(28U);
    msg.x = 0.8719336906343133;
    msg.y = 0.3900476857328623;
    msg.z = 0.02884178032589657;
    msg.t = 0.999675505812962;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrajectoryPoint #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CustomManeuver msg;
    msg.setTimeStamp(0.53033242397532);
    msg.setSource(8341U);
    msg.setSourceEntity(227U);
    msg.setDestination(5725U);
    msg.setDestinationEntity(11U);
    msg.timeout = 44229U;
    msg.name.assign("RTVDPOEQRFSPZCELCVKMHJUAWKKOPEAZUPVHJTQSPMCOEYSAFUNULRKDCMZBBXYBKS");
    msg.custom.assign("YKGWFBGLDSSIAPARVLPPTULDRFEJENCRTKMJQNZQANKOKDMUFHWYOZZIYXBAPTKSINDWWNOCAUFLYYWYEAZXMDOGKFOJWUOLKGWYTGTERQEBOUZQESBMGCHKTNHSUBIVNRZWCVXLTCFBWYDFOSMAERJIFNKPUXHTEBOZDCLVQSMPSXUED");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CustomManeuver #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CustomManeuver msg;
    msg.setTimeStamp(0.7831019258917328);
    msg.setSource(56082U);
    msg.setSourceEntity(44U);
    msg.setDestination(63516U);
    msg.setDestinationEntity(190U);
    msg.timeout = 42806U;
    msg.name.assign("SVGVSAWZIMRAQFWJBWLPXCLUUB");
    msg.custom.assign("FSQHSWUVIYABHBIMFWTUGHLGLYRRVCEUCEHFGDGJFEVWUIQDTJPCWWD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CustomManeuver #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CustomManeuver msg;
    msg.setTimeStamp(0.23968890844807134);
    msg.setSource(33954U);
    msg.setSourceEntity(30U);
    msg.setDestination(17707U);
    msg.setDestinationEntity(62U);
    msg.timeout = 42874U;
    msg.name.assign("BIWQURPVMRBCJRMAJCHZUEUIUVNHVUMWDYMKAITALGVJSGHWDZAS");
    msg.custom.assign("NQJPIHTRTKJMIVIADMRODSCRPKJHTPHWQNFEOFRSJTMDBNNARQVEJKU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CustomManeuver #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleFormation msg;
    msg.setTimeStamp(0.8848204682672202);
    msg.setSource(1262U);
    msg.setSourceEntity(194U);
    msg.setDestination(57797U);
    msg.setDestinationEntity(227U);
    msg.lat = 0.7450059793470051;
    msg.lon = 0.5572654485346102;
    msg.z = 0.7834718282394161;
    msg.z_units = 252U;
    msg.speed = 0.0819953363451813;
    msg.speed_units = 220U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.5551934886253016;
    tmp_msg_0.y = 0.45466179181984734;
    tmp_msg_0.z = 0.5171436861932248;
    tmp_msg_0.t = 0.29530755306495937;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 61991U;
    tmp_msg_1.off_x = 0.18288366902368225;
    tmp_msg_1.off_y = 0.8039053927751717;
    tmp_msg_1.off_z = 0.3547406090926756;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.6240430568435258;
    msg.custom.assign("RSAMUUYSISSZCQGIJLKJFILMSSPEFKAIOHHTLWZNXAUEAPLCFDHUEMUWTEJYTEMYAKIXWOKCCOZBVVSZYMGWJQNWFIBOWXQNRVGTVGVGRMPDLTUDPFFRUEXGJXCRYR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleFormation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleFormation msg;
    msg.setTimeStamp(0.744850167890514);
    msg.setSource(35319U);
    msg.setSourceEntity(208U);
    msg.setDestination(21442U);
    msg.setDestinationEntity(120U);
    msg.lat = 0.36098102575699964;
    msg.lon = 0.2948440119075808;
    msg.z = 0.1582415649313217;
    msg.z_units = 19U;
    msg.speed = 0.6289302168314332;
    msg.speed_units = 40U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.4757716566195682;
    tmp_msg_0.y = 0.01693250214399522;
    tmp_msg_0.z = 0.6682941737752561;
    tmp_msg_0.t = 0.7794235000046513;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.9509063383730769;
    msg.custom.assign("FSRXDRRZRSZJAPDYDHUHTBQKGQKHWPEZVFTYYTDSCNLXSIBONWNSIYGOOJXSCYQSBAKVVKURWLGPNBFKWIYRITPFOLIMRLJHZLODAMQIAVWKGTCIAGEDRQTTICEKXMBMJPXVSEXERPXGPCVVCWMAXDQBEYOYCCENFVOCUAJTHMUCSQOWFHHMJQUEAGVZUUOFEMZNATDZLAUSDIJYOWMNDBXHFYQEF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleFormation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleFormation msg;
    msg.setTimeStamp(0.9394296798519435);
    msg.setSource(39336U);
    msg.setSourceEntity(185U);
    msg.setDestination(55990U);
    msg.setDestinationEntity(27U);
    msg.lat = 0.8367869909274849;
    msg.lon = 0.8075297955344305;
    msg.z = 0.8156793903705263;
    msg.z_units = 147U;
    msg.speed = 0.18695707212552348;
    msg.speed_units = 134U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.9891452397655276;
    tmp_msg_0.y = 0.6294357446531668;
    tmp_msg_0.z = 0.9812803380341725;
    tmp_msg_0.t = 0.6093196201002986;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.6102122666356083;
    msg.custom.assign("RRMHXIERMMNQXMKCUPBSNIABOSVFJMHRAWLTLOUBHLQPRXOCEHXMVKNCOYIQVTWLWCNHEWTMEPFRJLDKIZGRHDBJSXGOBNKCDCNSTEKAHYZKGWQMTQTAJULNQGPEOWQVCFBNVLGAJYUQYIYZWUDPXYIDMIODDKVJSVRAZCXPWKGLEDCNAWUH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleFormation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleFormationParticipant msg;
    msg.setTimeStamp(0.23795797825208131);
    msg.setSource(25087U);
    msg.setSourceEntity(118U);
    msg.setDestination(65273U);
    msg.setDestinationEntity(85U);
    msg.vid = 48979U;
    msg.off_x = 0.29602736361036575;
    msg.off_y = 0.038078600346785785;
    msg.off_z = 0.930582782621126;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleFormationParticipant #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleFormationParticipant msg;
    msg.setTimeStamp(0.46308748485245055);
    msg.setSource(50689U);
    msg.setSourceEntity(154U);
    msg.setDestination(26127U);
    msg.setDestinationEntity(179U);
    msg.vid = 16946U;
    msg.off_x = 0.8452006957416676;
    msg.off_y = 0.30765462389060316;
    msg.off_z = 0.9543389241043649;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleFormationParticipant #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleFormationParticipant msg;
    msg.setTimeStamp(0.5232353559471035);
    msg.setSource(1168U);
    msg.setSourceEntity(218U);
    msg.setDestination(49793U);
    msg.setDestinationEntity(221U);
    msg.vid = 36133U;
    msg.off_x = 0.17001261474869123;
    msg.off_y = 0.10684561197162956;
    msg.off_z = 0.6190264407725982;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleFormationParticipant #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StopManeuver msg;
    msg.setTimeStamp(0.4142803908187892);
    msg.setSource(13293U);
    msg.setSourceEntity(202U);
    msg.setDestination(36018U);
    msg.setDestinationEntity(158U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StopManeuver #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StopManeuver msg;
    msg.setTimeStamp(0.1966440579210832);
    msg.setSource(9833U);
    msg.setSourceEntity(233U);
    msg.setDestination(37920U);
    msg.setDestinationEntity(27U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StopManeuver #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StopManeuver msg;
    msg.setTimeStamp(0.046262603895458554);
    msg.setSource(33392U);
    msg.setSourceEntity(6U);
    msg.setDestination(4004U);
    msg.setDestinationEntity(226U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StopManeuver #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RegisterManeuver msg;
    msg.setTimeStamp(0.2877917253426311);
    msg.setSource(45560U);
    msg.setSourceEntity(176U);
    msg.setDestination(24441U);
    msg.setDestinationEntity(177U);
    msg.mid = 32514U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RegisterManeuver #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RegisterManeuver msg;
    msg.setTimeStamp(0.2734745419858936);
    msg.setSource(8380U);
    msg.setSourceEntity(133U);
    msg.setDestination(3829U);
    msg.setDestinationEntity(67U);
    msg.mid = 47493U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RegisterManeuver #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RegisterManeuver msg;
    msg.setTimeStamp(0.7431529029652529);
    msg.setSource(10113U);
    msg.setSourceEntity(96U);
    msg.setDestination(35242U);
    msg.setDestinationEntity(124U);
    msg.mid = 42112U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RegisterManeuver #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ManeuverControlState msg;
    msg.setTimeStamp(0.8556815149297256);
    msg.setSource(60780U);
    msg.setSourceEntity(26U);
    msg.setDestination(36966U);
    msg.setDestinationEntity(77U);
    msg.state = 216U;
    msg.eta = 49627U;
    msg.info.assign("LSVBGCVZLCYKAMJAXNETZSQGZJJWDVUGQQPABIONRZSYHINIFSLITYQJUKMPBRAPHOINPZVCUWRFGQMUNXVALXIFYBFATXLBJFYAAMWEWCVG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ManeuverControlState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ManeuverControlState msg;
    msg.setTimeStamp(0.1282878511189205);
    msg.setSource(54868U);
    msg.setSourceEntity(210U);
    msg.setDestination(59459U);
    msg.setDestinationEntity(188U);
    msg.state = 174U;
    msg.eta = 50195U;
    msg.info.assign("TVDOFBNRWTVNTNPYWTAALBZOWIXJAIQHTKLHWRWJWLKFQFOHNOLSPOWCQAEIZVLDIUNMCPUMDYBRRNLMTAAISDJOQBGYHZFXLAFFEMGATJVEKZSQGYFC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ManeuverControlState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ManeuverControlState msg;
    msg.setTimeStamp(0.8141078557286014);
    msg.setSource(20210U);
    msg.setSourceEntity(62U);
    msg.setDestination(45084U);
    msg.setDestinationEntity(225U);
    msg.state = 203U;
    msg.eta = 60321U;
    msg.info.assign("SLDBJGUWYHMRKPGUYFOTLKAMJUWQTVDZGWARWVNSDBVGTZBEUDBVCFBKPNKIQKWEENAQFOYCMQZQWSGDNFYDZHJGXDLWBJVOHUVOHNPIZETCXASCMGPNSRCIDBTZQAPRXRKFSZKKJORLEAZHTJOIOPGMXIDINVUCGDLRQRFCYLSMNEYTAXXUHZUYYVFLTERONSYAHHRQPQBEFVWBLSZCMYS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ManeuverControlState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowSystem msg;
    msg.setTimeStamp(0.594942218154195);
    msg.setSource(24997U);
    msg.setSourceEntity(114U);
    msg.setDestination(60221U);
    msg.setDestinationEntity(82U);
    msg.system = 36271U;
    msg.duration = 10710U;
    msg.speed = 0.16839156156013613;
    msg.speed_units = 238U;
    msg.x = 0.1920089095444112;
    msg.y = 0.5983200068152136;
    msg.z = 0.6939093870165612;
    msg.z_units = 120U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowSystem #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowSystem msg;
    msg.setTimeStamp(0.56746805045578);
    msg.setSource(34820U);
    msg.setSourceEntity(84U);
    msg.setDestination(761U);
    msg.setDestinationEntity(199U);
    msg.system = 25167U;
    msg.duration = 11424U;
    msg.speed = 0.8551355066655271;
    msg.speed_units = 85U;
    msg.x = 0.5195861340691666;
    msg.y = 0.10249804202380708;
    msg.z = 0.8494825768219566;
    msg.z_units = 56U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowSystem #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowSystem msg;
    msg.setTimeStamp(0.12369617800961896);
    msg.setSource(38438U);
    msg.setSourceEntity(240U);
    msg.setDestination(22911U);
    msg.setDestinationEntity(60U);
    msg.system = 20119U;
    msg.duration = 1926U;
    msg.speed = 0.6332532375841794;
    msg.speed_units = 74U;
    msg.x = 0.2875468793146977;
    msg.y = 0.8104380369752819;
    msg.z = 0.3719891785545495;
    msg.z_units = 194U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowSystem #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CommsRelay msg;
    msg.setTimeStamp(0.4692535609634818);
    msg.setSource(29095U);
    msg.setSourceEntity(226U);
    msg.setDestination(64990U);
    msg.setDestinationEntity(101U);
    msg.lat = 0.1795498326339796;
    msg.lon = 0.658716301736202;
    msg.speed = 0.427417069102097;
    msg.speed_units = 224U;
    msg.duration = 38826U;
    msg.sys_a = 11630U;
    msg.sys_b = 55489U;
    msg.move_threshold = 0.4442753575228059;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CommsRelay #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CommsRelay msg;
    msg.setTimeStamp(0.7865017005587814);
    msg.setSource(3325U);
    msg.setSourceEntity(133U);
    msg.setDestination(44099U);
    msg.setDestinationEntity(7U);
    msg.lat = 0.44749478117449515;
    msg.lon = 0.5844745413939363;
    msg.speed = 0.12469724355306411;
    msg.speed_units = 16U;
    msg.duration = 62158U;
    msg.sys_a = 9295U;
    msg.sys_b = 26839U;
    msg.move_threshold = 0.6333937610841232;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CommsRelay #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CommsRelay msg;
    msg.setTimeStamp(0.8417701876713802);
    msg.setSource(28731U);
    msg.setSourceEntity(213U);
    msg.setDestination(17182U);
    msg.setDestinationEntity(108U);
    msg.lat = 0.8157684012873879;
    msg.lon = 0.512976878478232;
    msg.speed = 0.13201566172511425;
    msg.speed_units = 162U;
    msg.duration = 18725U;
    msg.sys_a = 7596U;
    msg.sys_b = 49094U;
    msg.move_threshold = 0.34980969629446657;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CommsRelay #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CoverArea msg;
    msg.setTimeStamp(0.8950208463214314);
    msg.setSource(28346U);
    msg.setSourceEntity(103U);
    msg.setDestination(55249U);
    msg.setDestinationEntity(128U);
    msg.lat = 0.6313156213094688;
    msg.lon = 0.9975592515460506;
    msg.z = 0.5031461760190739;
    msg.z_units = 158U;
    msg.speed = 0.6904424720127831;
    msg.speed_units = 48U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.2724700332660339;
    tmp_msg_0.lon = 0.8598552937977593;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("EDFAZQVKPKZGQXNFROLJFWHSTPVOAUYMJELDMNRVNWMMQQDA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CoverArea #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CoverArea msg;
    msg.setTimeStamp(0.10511995718144196);
    msg.setSource(56420U);
    msg.setSourceEntity(118U);
    msg.setDestination(48620U);
    msg.setDestinationEntity(140U);
    msg.lat = 0.968265618094015;
    msg.lon = 0.3796890207192716;
    msg.z = 0.5248578938320129;
    msg.z_units = 41U;
    msg.speed = 0.9724579240061527;
    msg.speed_units = 113U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.8318733711072509;
    tmp_msg_0.lon = 0.962175805420078;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("CCMIOGGYKJJBAQODREHSGWNERUGGPACOETFFKJNNKJCMQUBJLIKPMALEPWSTLVEVPHZPVNHLOMRHKNXHNTEKRFMYKDDRJBWTMUHDIQZCWISREUQRJMASJFZWSSTIFMWUBSFWPAPLVKSODXXXGZYUYOTLKCEVFMBABOIPASVIXWJRVZCTYHLVDQANQIGUYADBUPEDFXHPIDTZUCQKYYNBGDEZLC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CoverArea #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CoverArea msg;
    msg.setTimeStamp(0.43079721643788615);
    msg.setSource(34075U);
    msg.setSourceEntity(105U);
    msg.setDestination(61371U);
    msg.setDestinationEntity(54U);
    msg.lat = 0.37166382590371183;
    msg.lon = 0.687040740050586;
    msg.z = 0.8840715491738301;
    msg.z_units = 49U;
    msg.speed = 0.18979475248845024;
    msg.speed_units = 37U;
    msg.custom.assign("OLFKQAQORRPRXUIOACTWXGPOOZRSLUQSMWYNKVEXYZHBGMGHSPQJUBHACEFGCBVXCXHSJPAOYMHRKWIEAAWEQHEPBTKQELYINAZGMLFOGKEPDZPMDLVICBMOMXQDJRGI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CoverArea #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PolygonVertex msg;
    msg.setTimeStamp(0.6210208579801697);
    msg.setSource(25237U);
    msg.setSourceEntity(75U);
    msg.setDestination(12509U);
    msg.setDestinationEntity(81U);
    msg.lat = 0.16376074716592237;
    msg.lon = 0.13167895156981657;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PolygonVertex #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PolygonVertex msg;
    msg.setTimeStamp(0.3015840242104998);
    msg.setSource(10849U);
    msg.setSourceEntity(160U);
    msg.setDestination(54767U);
    msg.setDestinationEntity(33U);
    msg.lat = 0.8046786525035982;
    msg.lon = 0.5172213212647799;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PolygonVertex #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PolygonVertex msg;
    msg.setTimeStamp(0.5420250126227018);
    msg.setSource(14057U);
    msg.setSourceEntity(83U);
    msg.setDestination(17157U);
    msg.setDestinationEntity(244U);
    msg.lat = 0.1934575946534406;
    msg.lon = 0.5573038005866813;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PolygonVertex #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompassCalibration msg;
    msg.setTimeStamp(0.40154128992994476);
    msg.setSource(64950U);
    msg.setSourceEntity(180U);
    msg.setDestination(1873U);
    msg.setDestinationEntity(109U);
    msg.timeout = 32171U;
    msg.lat = 0.9584127507532185;
    msg.lon = 0.4827046109429324;
    msg.z = 0.20358557130892252;
    msg.z_units = 43U;
    msg.pitch = 0.5214956666272758;
    msg.amplitude = 0.6965438702246998;
    msg.duration = 30740U;
    msg.speed = 0.191936406564701;
    msg.speed_units = 222U;
    msg.radius = 0.41235167428246566;
    msg.direction = 20U;
    msg.custom.assign("OGZOSPNRQCYFKNDAIYPOYHJKWBZUEWRRKKWIIYJAUTZCPAAWQNIRHOMYZYQODDVDCHXGQLBGZIVMTWJIXQSFLRFVGXMGDPEDFWHQEOZBOAEMIPRBCEUFBNNESATBQWHGTSZXCSHBTVXCKBJXKDQVSFKRTUNLPFPLCXOMCVJDXNQMRIZWAFIEEJGLSSXXUKAO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompassCalibration #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompassCalibration msg;
    msg.setTimeStamp(0.658038945776589);
    msg.setSource(64899U);
    msg.setSourceEntity(62U);
    msg.setDestination(56787U);
    msg.setDestinationEntity(203U);
    msg.timeout = 5711U;
    msg.lat = 0.3202025584104021;
    msg.lon = 0.4367627573933037;
    msg.z = 0.7102722531268849;
    msg.z_units = 137U;
    msg.pitch = 0.3092921328206647;
    msg.amplitude = 0.5840531057825551;
    msg.duration = 8051U;
    msg.speed = 0.09140105071907711;
    msg.speed_units = 242U;
    msg.radius = 0.6777388966886296;
    msg.direction = 91U;
    msg.custom.assign("YRIAJGDWKSLKRQQTVZYEWOITDXWDEULZMBETCTUVUWNJMLNKMQMQXBJSRUOAAOZXXJIDVZYIGXU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompassCalibration #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompassCalibration msg;
    msg.setTimeStamp(0.700552078365473);
    msg.setSource(53469U);
    msg.setSourceEntity(191U);
    msg.setDestination(12217U);
    msg.setDestinationEntity(220U);
    msg.timeout = 52578U;
    msg.lat = 0.020224127681528925;
    msg.lon = 0.330292119547661;
    msg.z = 0.790693082141812;
    msg.z_units = 170U;
    msg.pitch = 0.08635451291241758;
    msg.amplitude = 0.11831647577250992;
    msg.duration = 17841U;
    msg.speed = 0.2259400111459583;
    msg.speed_units = 144U;
    msg.radius = 0.3913010926023809;
    msg.direction = 133U;
    msg.custom.assign("EVKUQYDZMUWDABBUBSFDGOTKGQBSTJAVLODQHNJDUYQISPGWXSEROXDIBUZMASVTLHQGCJQZNRPGSTXVYCFC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompassCalibration #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationParameters msg;
    msg.setTimeStamp(0.841989421214549);
    msg.setSource(60222U);
    msg.setSourceEntity(56U);
    msg.setDestination(57505U);
    msg.setDestinationEntity(121U);
    msg.formation_name.assign("VJFSFXQWGTHOHMRZRPYPLOLAZNAKPBDJBFETWDMHPLDZUYDJNOLTJWMKUIIISXILZDQKGTFVEQMAXVPBKUQZDRYKAJQVXSVCJMZJORGNCVPEUAYUUXQDHDVOQSWZENGARTFCIKTMRWSWUQEUSKSFOJGBLPAULIMXBMYCWXBBEXTZRTWGHXYBDGJTFNENTLFCWDOSQHRHQNICMKCPGNHPAICLHLCYVJYCVOZWANS");
    msg.reference_frame = 4U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 63489U;
    tmp_msg_0.off_x = 0.7439612595321641;
    tmp_msg_0.off_y = 0.7453802964762425;
    tmp_msg_0.off_z = 0.9402034583877616;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("SEYZXMJOINQYOYFALFNLJHJOMVHYOPATHGNGNXWTOEJRMCUUWDUPNS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationParameters msg;
    msg.setTimeStamp(0.8960791996578836);
    msg.setSource(8639U);
    msg.setSourceEntity(4U);
    msg.setDestination(48977U);
    msg.setDestinationEntity(56U);
    msg.formation_name.assign("QPBCNRBYGDWXZHRWMHSIKNVGWYSQCFNIYLRUUBDUPGXOAQCUTHZDHDSJAZXJ");
    msg.reference_frame = 167U;
    msg.custom.assign("LBMWWQDSMRQMWCJPUDLJNFUVXOTRDHMMEHGLBKLYVKOSGUZTMAVGSIIIQXRJRQEJANYXYDRRMBJIXGNSHSKDWOKTVFPAFWWHK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationParameters msg;
    msg.setTimeStamp(0.1764404603741795);
    msg.setSource(26784U);
    msg.setSourceEntity(96U);
    msg.setDestination(48390U);
    msg.setDestinationEntity(187U);
    msg.formation_name.assign("FKXKBWMVUPWRHCZPLGYIHINALLXUVFEPRBJQEZFMACZJRXYTEZUUSVFCGRIODLTZYMDWMUAORJYRAIAIFBEIJHPBRTWBSVWUKKQZQXYTPSNFBZGLSQTUUITBKYA");
    msg.reference_frame = 252U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 12564U;
    tmp_msg_0.off_x = 0.7202572090587244;
    tmp_msg_0.off_y = 0.02909972009346895;
    tmp_msg_0.off_z = 0.7691611480568822;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("EILNZQBDYASPAMGPJQHAEADQRTCFWMFUAWVXGPCQUVNOLIVJEJGLIYOZPGNWIUSDEJPQNMDTZYCZVKGNBJAQZPODTHWBWZWRJEHHVVWXFQKAESKBOOBRCKFEXLGROSMOANRFTXPKBUYPTJFIHRBUYFUOBLFNOYLDQQZMRVJIIKLKDSNVGBKXCROZWKSXKYTGMZFUCYDEWQMMACCHNGTURXVBEJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationPlanExecution msg;
    msg.setTimeStamp(0.06545510351582973);
    msg.setSource(24560U);
    msg.setSourceEntity(237U);
    msg.setDestination(27043U);
    msg.setDestinationEntity(25U);
    msg.group_name.assign("WQKIWYQNGXPITUHOMXMLBCYMDIDKNFDEAJMRBVSHJLKFFYUJLBCKWVRNVVTZJWVQYYOEYKCVDZLPXQNGQODCUAAZPPTJNEHDBMXEILRKIRMIWAHWNLIHUFEYSTVKKEDBFHNQMYTOHZWKQZCAGQXPBWSUJNONPXTRMAGZEOESFQJCXUZHBVFAHSPSIUDRJZLGWCDXEYGGFLOUORJRUGCBGTLAKFR");
    msg.formation_name.assign("IVEWSOGFTEPXYHKDHSFEZRUMIXRVGEKEFLHKPHKWMRILJYTYCXCOWRTPGISTHPESIBKUXXQFGOOKJKARHDQUFRGAVBEDBYZMNWINQZXMOLGZLFWZGUOIYLMFUUNVNJRYTRHXSQHIRJWMDDCUFGCNJIBLVKJVWBAQBDMGYWD");
    msg.plan_id.assign("BZTYTUKQHCICLRZYCYZDFFELTQOHVMCGNHILZVWMAORSSYGMYVIJQIJAGYXPROHVUCVLSFEAQAOBUKIZKPIUHFBDXMWNOSWFXSJRJHXSQUGFCZVZQBSKHDRTXHANTEGSVIWXFRKNEKNYMDTBRCTQOITIHGLGWVLPXLQWLAJAWMVDUCXJJMZUMLCKLBBFVWQUDKRUMTZODYYZCGSBNYPSJOFPBQERUNEDGPFGEDBKEWANPHAAJT");
    msg.description.assign("DBTMRKACHGIWLGPZCEZPNOVEYMKHLUSEWHAQXFMBSPQZERHAOIZOPJVGIVXNECGXDJKFHJHXOGUOSTNDYPXZHMFRHTBMZVBTRCTWNAAN");
    msg.leader_speed = 0.27718520730364204;
    msg.leader_bank_lim = 0.48074522580983203;
    msg.pos_sim_err_lim = 0.5273843924454935;
    msg.pos_sim_err_wrn = 0.10571724804858984;
    msg.pos_sim_err_timeout = 27842U;
    msg.converg_max = 0.15784288224166154;
    msg.converg_timeout = 45720U;
    msg.comms_timeout = 11283U;
    msg.turb_lim = 0.2297442480355435;
    msg.custom.assign("HYCNQYLPBPDRJAUSMWKOVBGSOGKAGUDBTEUVNFARGVUYKZWEGTMDEJZDBKTCQGFALNZLIJVRHHPYYEHCBSIQCSOLNUIZCCYXWZIESJAZAXTDZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationPlanExecution #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationPlanExecution msg;
    msg.setTimeStamp(0.7900341618047445);
    msg.setSource(37061U);
    msg.setSourceEntity(7U);
    msg.setDestination(63500U);
    msg.setDestinationEntity(88U);
    msg.group_name.assign("FZRMFHDYUXFFKXSPEBKVXTAJJKFVMFXCJSUJCQJJEMOSMYPPGCVWQ");
    msg.formation_name.assign("BQQNHUVYNAIERUGJDBNMESHKWOTBGITURTEWKLKTBXJZVSWGJQURLSGIAIOBWVCTUGNMDNFYZKPOHAIZFRMHLBSZKMTRAYEFIOQYONDVBJMPQXTWMPDBGEUKUYSELSBCLZHZZMAFRWRHTOHJYWLJHTGOEDCLEAMQXVSVMSZKVFOWFFDDXACSEJPWCKRJWGUAQQNVHPEFQXCGCACSPPMJGZYXLBXKONJ");
    msg.plan_id.assign("BMPVEHBLXVCEWTZUPNAJWFYKGXEEBFWDGYQSIQYOPZMSONUAEWORRGXOHDVWIDZLVGFHNQ");
    msg.description.assign("GLNODQIRCTJZUVTTMZZLQTRGQHQLJQIDKIOPVAEKGWHLAJUYKOXLLWAJAHBRVURZPPLTWXCYMTCIVYWPTIRICAHSEXPNRNFNKMDVGEJZZQXLMSGQBWV");
    msg.leader_speed = 0.9259110447008979;
    msg.leader_bank_lim = 0.03258756091124548;
    msg.pos_sim_err_lim = 0.33793319050736703;
    msg.pos_sim_err_wrn = 0.9028816394658167;
    msg.pos_sim_err_timeout = 43206U;
    msg.converg_max = 0.12419756760860823;
    msg.converg_timeout = 44825U;
    msg.comms_timeout = 51985U;
    msg.turb_lim = 0.29697387603259995;
    msg.custom.assign("PFTDISAQMGFVNVEWORJUUDUAIBQJDJFIGXNXYWDNBIOCUCZMSNRNIVGQHHJGFLFJKTXITMVLVKYKOYTKELZXTCQSNMPNMMZBBAWHCXZECPJRRELRZJQYFDRVILHFUOPXUDYIEOZOQYGWEAPHRTFMSXXULCSLGRLNHGMSEFNYJQHYAKIOTSWTZHBPTCOKVRWBLPAAPHHEAGXKBMBXUSYUODWICKDQAUSCVQCGZNREKDSFMYBAZWB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationPlanExecution #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationPlanExecution msg;
    msg.setTimeStamp(0.2653058379014398);
    msg.setSource(20276U);
    msg.setSourceEntity(145U);
    msg.setDestination(30850U);
    msg.setDestinationEntity(166U);
    msg.group_name.assign("PUBEMTJHURLGWBQLJJHQFEBTKAJITUJKOLSPIZJVNMMIMADDXNHVRBCYLCZLOSOFIOGFZYPGFVPRLSJDZPGQWAXQRWLUSMOQJAXXGZPCDBIMNEPORKCFRYQZEZCOEHYVZXKTXZTCKWIALVHGGNSOPGSUCTNUWENABMNPWVFFTLHGQVSQHZIDAWTYHDUJSXVKRKEBMHSPSDXREKMYR");
    msg.formation_name.assign("OVCMARQFZEKHEWMVBCKTAQOHPFTLUSFFYDKMVTYAVXVLMDFOWPWZMQXHICXSARWIGJBXBEXEJZCGOJCLQBVZKYXJUSZRPONRUASYIIFTYPJTAVCLWSXGFBLQPYQXPKVVQBCMIRPGTYKPJHOHIWTKLNYWLCEHUJLKPSNGESUAGZDMUWNDSWLTUQQGZKEHI");
    msg.plan_id.assign("JTMJIWMIJPLDLDQTXAQGBNHUORXKYQSLASSKMHGPDINQZXUVZLHRSFZEVJXTMAHKEIPTSIYCNTBDJDBKBZKVZFCITVWDYOWCROFGHSPXFCMMDFJZAKNUYKECYLIRNQXQDZFUVBEBSUVRGMTCMDSOJZQHXPRXYEVWGUGUXPONBVNKGEBLBIEQXFQGWQWTYRAAOZOLNWLFJ");
    msg.description.assign("QQTDSGJYBEOJDPIWFYBVSTBMZHCSIUFDATJOFKZQZVJTDLWASLCHOEHOAXRTDUJUOMQTTHEKGRWQMCCNCGEZPXEUSAMMRRTCWYZWZPKEPIIJKSGYUZLLZIBJKNZKMVEHVBMQNLGAFSBLDUKNAVIFQSQZAVCSWIIPYEHJKWGWPUORWQCFITNVBJYUIWQXYHNNGYFXXPUHDOBNBKAGAFCODVGFHSFPJMLRYYXHLMRRDOULEEXXGMTNRKDNXL");
    msg.leader_speed = 0.6780318735550656;
    msg.leader_bank_lim = 0.9347835903968008;
    msg.pos_sim_err_lim = 0.5434929204742485;
    msg.pos_sim_err_wrn = 0.9493174375040231;
    msg.pos_sim_err_timeout = 28550U;
    msg.converg_max = 0.6153983016871503;
    msg.converg_timeout = 41798U;
    msg.comms_timeout = 7486U;
    msg.turb_lim = 0.14755739927638756;
    msg.custom.assign("PYSLXZYJTBBCUCVYNHIIJRCZHOAXSWQOPVGZLGTLBHFLLZSAMEFBWDKXPSCPXVVWYEUIVBIMTGPHOVQQSXLGDKARZJUGXTOXRSVDWAJQONPQRKNBVCCYYMUFMTUFMBTSWFOKIJDCBGAIANMJKBPKHLUANRUYTGJERBWWSSDVOIHLZHRMDCNEEFMZZIFMRITCKWPHTFYUQSCENNXXYRPTEKOGAHDOQUEFKKZNQZDJYJLGJDQRIAOEPG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationPlanExecution #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowReference msg;
    msg.setTimeStamp(0.12808638315169696);
    msg.setSource(37096U);
    msg.setSourceEntity(182U);
    msg.setDestination(18378U);
    msg.setDestinationEntity(109U);
    msg.control_src = 40288U;
    msg.control_ent = 230U;
    msg.timeout = 0.45709406028273547;
    msg.loiter_radius = 0.4392541395151044;
    msg.altitude_interval = 0.9821064408536422;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowReference #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowReference msg;
    msg.setTimeStamp(0.2707285534495678);
    msg.setSource(5174U);
    msg.setSourceEntity(248U);
    msg.setDestination(39032U);
    msg.setDestinationEntity(139U);
    msg.control_src = 35583U;
    msg.control_ent = 87U;
    msg.timeout = 0.24524796748607214;
    msg.loiter_radius = 0.6228996776895706;
    msg.altitude_interval = 0.42358043020509784;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowReference #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowReference msg;
    msg.setTimeStamp(0.2479375368250254);
    msg.setSource(62729U);
    msg.setSourceEntity(156U);
    msg.setDestination(56015U);
    msg.setDestinationEntity(187U);
    msg.control_src = 1787U;
    msg.control_ent = 151U;
    msg.timeout = 0.9905404554963452;
    msg.loiter_radius = 0.34704068894176743;
    msg.altitude_interval = 0.04788371888841425;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowReference #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Reference msg;
    msg.setTimeStamp(0.05789543985177392);
    msg.setSource(49358U);
    msg.setSourceEntity(248U);
    msg.setDestination(15574U);
    msg.setDestinationEntity(127U);
    msg.flags = 239U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.990757847016279;
    tmp_msg_0.speed_units = 50U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.6502383209731376;
    tmp_msg_1.z_units = 43U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.1417407369630478;
    msg.lon = 0.19930719296479438;
    msg.radius = 0.7248359116682928;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Reference #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Reference msg;
    msg.setTimeStamp(0.7149102761027537);
    msg.setSource(59134U);
    msg.setSourceEntity(115U);
    msg.setDestination(56191U);
    msg.setDestinationEntity(253U);
    msg.flags = 186U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.18745512569922462;
    tmp_msg_0.speed_units = 1U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.8474917483859362;
    tmp_msg_1.z_units = 193U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.076579742916708;
    msg.lon = 0.9811644524484824;
    msg.radius = 0.038751690480148815;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Reference #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Reference msg;
    msg.setTimeStamp(0.17348332942967692);
    msg.setSource(46829U);
    msg.setSourceEntity(115U);
    msg.setDestination(19914U);
    msg.setDestinationEntity(222U);
    msg.flags = 180U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.4889405568227747;
    tmp_msg_0.speed_units = 183U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.7102224254857756;
    tmp_msg_1.z_units = 63U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.3700147540058628;
    msg.lon = 0.012243828573291315;
    msg.radius = 0.15761734383593684;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Reference #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowRefState msg;
    msg.setTimeStamp(0.08570163447582835);
    msg.setSource(37145U);
    msg.setSourceEntity(202U);
    msg.setDestination(13307U);
    msg.setDestinationEntity(91U);
    msg.control_src = 51282U;
    msg.control_ent = 198U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 146U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.7154087092492025;
    tmp_tmp_msg_0_0.speed_units = 217U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.713671192237448;
    tmp_tmp_msg_0_1.z_units = 169U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.4515902768935224;
    tmp_msg_0.lon = 0.3655936480984324;
    tmp_msg_0.radius = 0.6225249953974056;
    msg.reference.set(tmp_msg_0);
    msg.state = 177U;
    msg.proximity = 4U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowRefState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowRefState msg;
    msg.setTimeStamp(0.8477894123311756);
    msg.setSource(39334U);
    msg.setSourceEntity(135U);
    msg.setDestination(4942U);
    msg.setDestinationEntity(143U);
    msg.control_src = 63245U;
    msg.control_ent = 197U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 118U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.2085974930382105;
    tmp_tmp_msg_0_0.speed_units = 27U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.09391211202917549;
    tmp_tmp_msg_0_1.z_units = 168U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.38609611931325594;
    tmp_msg_0.lon = 0.8728564592209285;
    tmp_msg_0.radius = 0.023253893547420135;
    msg.reference.set(tmp_msg_0);
    msg.state = 252U;
    msg.proximity = 244U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowRefState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowRefState msg;
    msg.setTimeStamp(0.7441641321612775);
    msg.setSource(27700U);
    msg.setSourceEntity(163U);
    msg.setDestination(55619U);
    msg.setDestinationEntity(192U);
    msg.control_src = 25843U;
    msg.control_ent = 97U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 33U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.03142291710554035;
    tmp_tmp_msg_0_0.speed_units = 148U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.886268970560724;
    tmp_tmp_msg_0_1.z_units = 152U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.7651024848102126;
    tmp_msg_0.lon = 0.5058772425411765;
    tmp_msg_0.radius = 0.7683435565289013;
    msg.reference.set(tmp_msg_0);
    msg.state = 44U;
    msg.proximity = 207U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowRefState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationMonitor msg;
    msg.setTimeStamp(0.6848462211851344);
    msg.setSource(58765U);
    msg.setSourceEntity(141U);
    msg.setDestination(11503U);
    msg.setDestinationEntity(249U);
    msg.ax_cmd = 0.6971173187993508;
    msg.ay_cmd = 0.7731998246663858;
    msg.az_cmd = 0.6490337872265;
    msg.ax_des = 0.17349635045169387;
    msg.ay_des = 0.8260910677257879;
    msg.az_des = 0.8178281066072773;
    msg.virt_err_x = 0.5191110789906134;
    msg.virt_err_y = 0.9997950869946758;
    msg.virt_err_z = 0.717322125909128;
    msg.surf_fdbk_x = 0.9174936889328695;
    msg.surf_fdbk_y = 0.5631532386770303;
    msg.surf_fdbk_z = 0.37348054951243825;
    msg.surf_unkn_x = 0.6259547344942141;
    msg.surf_unkn_y = 0.7252715175455537;
    msg.surf_unkn_z = 0.06669905456110725;
    msg.ss_x = 0.8127174983226231;
    msg.ss_y = 0.9647516403796071;
    msg.ss_z = 0.3976497715987303;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("QSNAAAZISGXEPQPQPBFWMQYNYKXUOODFEYQVJRDURRADNLDJWOISXFDCHTKQMIAJCBTNUPGRWXNJJAD");
    tmp_msg_0.dist = 0.6182326450745842;
    tmp_msg_0.err = 0.1758618802031765;
    tmp_msg_0.ctrl_imp = 0.26740334750994044;
    tmp_msg_0.rel_dir_x = 0.3773405096225212;
    tmp_msg_0.rel_dir_y = 0.728629878722557;
    tmp_msg_0.rel_dir_z = 0.43678057784527324;
    tmp_msg_0.err_x = 0.948409352130244;
    tmp_msg_0.err_y = 0.9249884851654355;
    tmp_msg_0.err_z = 0.08385323798445388;
    tmp_msg_0.rf_err_x = 0.0558236243025122;
    tmp_msg_0.rf_err_y = 0.54661320451344;
    tmp_msg_0.rf_err_z = 0.4496123615261214;
    tmp_msg_0.rf_err_vx = 0.9701517740558647;
    tmp_msg_0.rf_err_vy = 0.5417108731022515;
    tmp_msg_0.rf_err_vz = 0.638799664924898;
    tmp_msg_0.ss_x = 0.6974305823641217;
    tmp_msg_0.ss_y = 0.19215803208967652;
    tmp_msg_0.ss_z = 0.20228231517484108;
    tmp_msg_0.virt_err_x = 0.6732697296706998;
    tmp_msg_0.virt_err_y = 0.04452819646019901;
    tmp_msg_0.virt_err_z = 0.5290213605594187;
    msg.rel_state.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationMonitor #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationMonitor msg;
    msg.setTimeStamp(0.28733872149359674);
    msg.setSource(22604U);
    msg.setSourceEntity(240U);
    msg.setDestination(32340U);
    msg.setDestinationEntity(135U);
    msg.ax_cmd = 0.5173337651864428;
    msg.ay_cmd = 0.16845568418864887;
    msg.az_cmd = 0.9800152378168312;
    msg.ax_des = 0.7656470085874196;
    msg.ay_des = 0.2076265617235683;
    msg.az_des = 0.31791881617558293;
    msg.virt_err_x = 0.7552047636383797;
    msg.virt_err_y = 0.0779960077097056;
    msg.virt_err_z = 0.41967735786866733;
    msg.surf_fdbk_x = 0.10420049961520061;
    msg.surf_fdbk_y = 0.40782842104136574;
    msg.surf_fdbk_z = 0.08462633829483268;
    msg.surf_unkn_x = 0.29328729995548064;
    msg.surf_unkn_y = 0.6914845277622157;
    msg.surf_unkn_z = 0.609182910474674;
    msg.ss_x = 0.08806545063345605;
    msg.ss_y = 0.6218508175606485;
    msg.ss_z = 0.4272700828451159;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("GWNEBSVPPXEKVRXSJAMSFVRLOPADCQBICNVQKUHYRYAMZQDDMTGJRGVAYURAKFRLKJTCUTGUBKZHMZSWWOTKJTXTUVCXJFFNYXACIYHFXVQEWHSWECPZBOYKNJPWUCLWUUEGJIWOXOVYMMOPGZSZEYOIANUHJYDBSKGDTPTDDHKCRDMBFHNZECFRRNKQLNZLLYECFP");
    tmp_msg_0.dist = 0.9932477518252352;
    tmp_msg_0.err = 0.36071517949665555;
    tmp_msg_0.ctrl_imp = 0.025691565017955553;
    tmp_msg_0.rel_dir_x = 0.9386364719440802;
    tmp_msg_0.rel_dir_y = 0.8475841984560417;
    tmp_msg_0.rel_dir_z = 0.07697634535635;
    tmp_msg_0.err_x = 0.7342536054115782;
    tmp_msg_0.err_y = 0.711758788754406;
    tmp_msg_0.err_z = 0.6781276820914879;
    tmp_msg_0.rf_err_x = 0.42606013124371445;
    tmp_msg_0.rf_err_y = 0.5796038644318068;
    tmp_msg_0.rf_err_z = 0.0023399460406886563;
    tmp_msg_0.rf_err_vx = 0.44334741151519885;
    tmp_msg_0.rf_err_vy = 0.25836624387510554;
    tmp_msg_0.rf_err_vz = 0.6295718282384583;
    tmp_msg_0.ss_x = 0.19767626341816158;
    tmp_msg_0.ss_y = 0.7452773340351768;
    tmp_msg_0.ss_z = 0.2691579848075474;
    tmp_msg_0.virt_err_x = 0.6388360413609637;
    tmp_msg_0.virt_err_y = 0.9184315845842514;
    tmp_msg_0.virt_err_z = 0.2958992447268487;
    msg.rel_state.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationMonitor #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationMonitor msg;
    msg.setTimeStamp(0.4768714203810829);
    msg.setSource(15526U);
    msg.setSourceEntity(163U);
    msg.setDestination(30229U);
    msg.setDestinationEntity(169U);
    msg.ax_cmd = 0.6980115337847455;
    msg.ay_cmd = 0.5647133912370421;
    msg.az_cmd = 0.11242465498999343;
    msg.ax_des = 0.8351985100892101;
    msg.ay_des = 0.008789472445566271;
    msg.az_des = 0.02715050498354943;
    msg.virt_err_x = 0.38820339198530707;
    msg.virt_err_y = 0.41367563739943525;
    msg.virt_err_z = 0.80006920325106;
    msg.surf_fdbk_x = 0.8551375088240522;
    msg.surf_fdbk_y = 0.7653097161995677;
    msg.surf_fdbk_z = 0.5070707258967662;
    msg.surf_unkn_x = 0.3690218266372617;
    msg.surf_unkn_y = 0.0533115768063368;
    msg.surf_unkn_z = 0.41485053614128387;
    msg.ss_x = 0.4282290675477043;
    msg.ss_y = 0.958577142615698;
    msg.ss_z = 0.4425403144828558;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationMonitor #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RelativeState msg;
    msg.setTimeStamp(0.49311057172135253);
    msg.setSource(35454U);
    msg.setSourceEntity(97U);
    msg.setDestination(35361U);
    msg.setDestinationEntity(143U);
    msg.s_id.assign("NPTVMSUUJRXMQIXAYOPVHZJZSJBWKSDKMWOGOQDIQAKVGEIUKKYKTIUHQVARMNXYTFSWPFIPWPOHZZPMCQJARFHGXEVZJKCDVTTECQLZLJFNNFCZOLGA");
    msg.dist = 0.7370185079510746;
    msg.err = 0.3358821999598308;
    msg.ctrl_imp = 0.015340732675902968;
    msg.rel_dir_x = 0.08072765491549205;
    msg.rel_dir_y = 0.21020923365382793;
    msg.rel_dir_z = 0.7892974734075617;
    msg.err_x = 0.0014237928621646523;
    msg.err_y = 0.22973297885774469;
    msg.err_z = 0.0020014726439855357;
    msg.rf_err_x = 0.46281536136430734;
    msg.rf_err_y = 0.8576779198015871;
    msg.rf_err_z = 0.26655169231695963;
    msg.rf_err_vx = 0.04121100628177088;
    msg.rf_err_vy = 0.8979345069604964;
    msg.rf_err_vz = 0.8243011370649256;
    msg.ss_x = 0.012265953339321789;
    msg.ss_y = 0.3646348665351382;
    msg.ss_z = 0.895750078622966;
    msg.virt_err_x = 0.5397575700129668;
    msg.virt_err_y = 0.5298308151921618;
    msg.virt_err_z = 0.00602757361011752;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RelativeState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RelativeState msg;
    msg.setTimeStamp(0.8215454824184022);
    msg.setSource(2851U);
    msg.setSourceEntity(0U);
    msg.setDestination(24854U);
    msg.setDestinationEntity(78U);
    msg.s_id.assign("PDAKNYYQUSIPBMXLELJDJORCDMSRPQZHJHMJAVTWUAKUHDJODLKYOZHXWIUGPBNCPXNHZLRPFCNTRTJBLCXFWEYCHJGOGRWFVSPGMKNLDKJQFEKIFVWKVYSHMWZIEWPWMMQCBMUSZLAKTVRATGYLAUWGREZFXUYKGRTOYBJVAOSTIMXRSAENEQSFSBHACFRQGXGGPOUNEFNXPONHTYQYLZDBAOTQBIXEDCIT");
    msg.dist = 0.510845341925441;
    msg.err = 0.7277287906400863;
    msg.ctrl_imp = 0.770981789553922;
    msg.rel_dir_x = 0.5458897489452368;
    msg.rel_dir_y = 0.9690291135306083;
    msg.rel_dir_z = 0.433220953690012;
    msg.err_x = 0.004984427005343073;
    msg.err_y = 0.8646646812950576;
    msg.err_z = 0.3049540171777215;
    msg.rf_err_x = 0.572001770387577;
    msg.rf_err_y = 0.18412539788934446;
    msg.rf_err_z = 0.12333555770992644;
    msg.rf_err_vx = 0.4750568178929595;
    msg.rf_err_vy = 0.48007949760113133;
    msg.rf_err_vz = 0.4758110687217879;
    msg.ss_x = 0.7790777728491657;
    msg.ss_y = 0.4092408085064899;
    msg.ss_z = 0.10119263924814215;
    msg.virt_err_x = 0.22590046438750333;
    msg.virt_err_y = 0.9791268373357029;
    msg.virt_err_z = 0.3689102385069213;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RelativeState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RelativeState msg;
    msg.setTimeStamp(0.11174945205391817);
    msg.setSource(25104U);
    msg.setSourceEntity(141U);
    msg.setDestination(20953U);
    msg.setDestinationEntity(22U);
    msg.s_id.assign("LRTLIJDSKSKEWZIQDPPYWJTNVIRDCUXSAAGGIGKEQDHWEXYHCHPLCOIFUNOVJHUHZKHWADDKBZSXPXVRTEGGCQIBVALCNPCTIRALNLCWQUJSKRFBGGNDURJZTAUEVSYVJJGRORZYXUBDNUUMYCARQHQTQEVMFBZEMCVWIPQRB");
    msg.dist = 0.8969760137353782;
    msg.err = 0.33709381162340446;
    msg.ctrl_imp = 0.005950324200348911;
    msg.rel_dir_x = 0.17237872682815136;
    msg.rel_dir_y = 0.550604633963317;
    msg.rel_dir_z = 0.38880909688870724;
    msg.err_x = 0.7760313868250208;
    msg.err_y = 0.5458522150946755;
    msg.err_z = 0.018892753267220064;
    msg.rf_err_x = 0.6818914710670303;
    msg.rf_err_y = 0.8791256609388852;
    msg.rf_err_z = 0.7624471523445241;
    msg.rf_err_vx = 0.43671860395531825;
    msg.rf_err_vy = 0.6669093313772553;
    msg.rf_err_vz = 0.6240422461160248;
    msg.ss_x = 0.8198105716715061;
    msg.ss_y = 0.3429845934133756;
    msg.ss_z = 0.36950733770448496;
    msg.virt_err_x = 0.9972199638009489;
    msg.virt_err_y = 0.2246184613991672;
    msg.virt_err_z = 0.12462464821391084;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RelativeState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Dislodge msg;
    msg.setTimeStamp(0.20896755264449496);
    msg.setSource(7546U);
    msg.setSourceEntity(94U);
    msg.setDestination(14502U);
    msg.setDestinationEntity(29U);
    msg.timeout = 8491U;
    msg.rpm = 0.7796478743975791;
    msg.direction = 172U;
    msg.custom.assign("ELUUVVOBFCHBPFZDQFETHPRIJDLGNTOPLEEUDJZOFXLXCFDZEZGPLBVFXCSUIMSAAWYIRKAIKMSTBRPGIHFLHXSONAKDYOW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Dislodge #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Dislodge msg;
    msg.setTimeStamp(0.19156913921204355);
    msg.setSource(4497U);
    msg.setSourceEntity(198U);
    msg.setDestination(37177U);
    msg.setDestinationEntity(244U);
    msg.timeout = 42538U;
    msg.rpm = 0.6527239655294553;
    msg.direction = 235U;
    msg.custom.assign("JTVBYPBQLOWEGSQUYSMUNLAAYFBFSWCPKZMJCDHXBXIJGSJMFQYJXFQFAPB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Dislodge #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Dislodge msg;
    msg.setTimeStamp(0.5998227202351789);
    msg.setSource(1484U);
    msg.setSourceEntity(12U);
    msg.setDestination(20280U);
    msg.setDestinationEntity(162U);
    msg.timeout = 53156U;
    msg.rpm = 0.03381583497375584;
    msg.direction = 151U;
    msg.custom.assign("NHIECRDTNWBTRLSCPMAEBGYYINVMBKUNXPTSKBGFUMCAJLTUIKFKSUBIAAXZINWTRFGZHYLSGQGDPJIJKWIQMFXZLHQMJCRONLUQVTEECDMBHTLMWSZEXSLXERWBDRPZJWXKHSOJUBXSAROZHVLNVWEKSMKHYGVAXNOQNVIOAGUDOSIGWFRTVDLPOQIDEJCLTRWMYKPUQZHPFQHZEHQUGZRTYJFPAZMFOVFDCPD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Dislodge #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Formation msg;
    msg.setTimeStamp(0.982540913534086);
    msg.setSource(16639U);
    msg.setSourceEntity(96U);
    msg.setDestination(16860U);
    msg.setDestinationEntity(228U);
    msg.formation_name.assign("TIVKTIWVPFXBHBDTVPZOQCJJVRWFUYSJHHQHCGZXRUJGYQMFBVCYTNAMKHEYLDNCUXGXDELKHEPSBCVSFBCAWGWWNOUVBIDOYPDWIPSPXUSLMJCLGLQNNMSXLNMAFKJTZRLYBALQFQLZRROOWIMK");
    msg.type = 168U;
    msg.op = 41U;
    msg.group_name.assign("CTSEIWGQAHRLFSMVOODMFSMBNXIQWAMPCCBVUIXBIHVXKZFZDKLNOJMTDJAREEQGVLHIWMRYEDLDGHSSIUTJYOBPUIDVDNDHVBECFDSGTETCHXXWNJNYBBLRZXKDXKRPOOMKHVATGNPNTSQHFSGKZTJYLRJTLUKGCUFWLUFCQYWBXNIQAPFOKHOAGQWZOUUQYAEMEJCLRLGBZAVPPZGFMJAZKSCQWOXREMWIHZNPRTVASYZP");
    msg.plan_id.assign("OMQHDNFCVDAYFFPBRXRSJFVEDVGWOAARQAXERUGQBYLGDNTZCUSLOHJLORUUDKXAJWOZNDYAIUPAULGWTVWTXPBQTJHOQYNIKPOMEPOCRMNYABXSGZHZRKRCXVYVWLNHGSCWUVMYZIFEEXGOQGTWTKTZRFJVPKJCBSYLHLVCBJEPYCWXHRNMHOZKUDUQKIEAKZINIZIDEXTINSHJEDMWFSTJLBXSWJEQHILMMCBGNKGLQISTVMSBF");
    msg.description.assign("XHBGQXHKTAVSEFSLZIVVWCC");
    msg.reference_frame = 90U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 3710U;
    tmp_msg_0.off_x = 0.9676840370741464;
    tmp_msg_0.off_y = 0.19696722620484852;
    tmp_msg_0.off_z = 0.8855225424385144;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.3423627832703994;
    msg.leader_speed_min = 0.3899537917326733;
    msg.leader_speed_max = 0.739514786060703;
    msg.leader_alt_min = 0.5761397921634036;
    msg.leader_alt_max = 0.5538661303396613;
    msg.pos_sim_err_lim = 0.7865806602449381;
    msg.pos_sim_err_wrn = 0.9572831377456656;
    msg.pos_sim_err_timeout = 35000U;
    msg.converg_max = 0.7037304714013815;
    msg.converg_timeout = 37463U;
    msg.comms_timeout = 19413U;
    msg.turb_lim = 0.8135216485187303;
    msg.custom.assign("MXWSFEYSEZRLBJZOLFIAAIQBCLQLJANVOULDJZIYULHJABDRASEVITNNUGGCLBISTGPYRCUHMBCQSWVXWGSJHTJQOYRNTLUEZPPDKMXOWOIOZGUKDTCMNQBZISNQMLNMTCPFEYQDWGAQEZPFYFWDKZOVMKMRGEPFCKDDXHQNYKVXXKPOWVRFSBPYFRJESOKMRFYSGJOHCHCDX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Formation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Formation msg;
    msg.setTimeStamp(0.8546936619033058);
    msg.setSource(25017U);
    msg.setSourceEntity(16U);
    msg.setDestination(1497U);
    msg.setDestinationEntity(16U);
    msg.formation_name.assign("WFVOPIIIJTLQAGVCXSDAJKFFHDLBAUNZSAGEQCYCQZIXBPSLRSRZIYXEUATVOYVZTPHFYVJRNGJTNWEFUOLMUTLLXEIJRWVPXMSAQFDPTOSSGVWHVKTIDNZN");
    msg.type = 39U;
    msg.op = 225U;
    msg.group_name.assign("UJUJSWAHDQDPVLNEWRUOMKRZMQVVXGAKENZRVXMLTMPFPHXDWTDIAGQFPXSVYFOQUBTCPGXZNMXHTBELFJUWEWB");
    msg.plan_id.assign("KZRXJTYBCPMOWXJZNMMGIRURYSTEKFIWUCWSAXAYMVBUMTQWUENOVXDXAHSSBLCTLGTDZBMNBXZZSPMABUHJFHWXZRGFLNCI");
    msg.description.assign("XMPABQSJBWETEEGZTHCCUID");
    msg.reference_frame = 177U;
    msg.leader_bank_lim = 0.6011538625008166;
    msg.leader_speed_min = 0.9468306289865015;
    msg.leader_speed_max = 0.8070366878072206;
    msg.leader_alt_min = 0.46446064205154514;
    msg.leader_alt_max = 0.8264474685846452;
    msg.pos_sim_err_lim = 0.6402073373785304;
    msg.pos_sim_err_wrn = 0.03278973730008483;
    msg.pos_sim_err_timeout = 6512U;
    msg.converg_max = 0.4980414507858336;
    msg.converg_timeout = 3843U;
    msg.comms_timeout = 53925U;
    msg.turb_lim = 0.7642677263826229;
    msg.custom.assign("DELSWRJBXUKNNCNXPDFHGMZFVATVNKSMBJOMKXAMEBDIYKHQSWKBMZVTPBCELOZPQHMMFUCSSQMKZOEXZGUYZGLISXUSARRSVFXWLQXDOFFXQCDRCYNOIIYVHPWRZIAKAXQAXPUVGLOIEYQZKFJSLULNYTATRNJTHCPJCNVCTDOWBHDBCJHNJEGTLLMWYTUHRPRAGGFYOHZGRJWIGHMKOUPJYUBVTEQQQBLVIGSVIWNBWFDCPPETFUIERO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Formation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Formation msg;
    msg.setTimeStamp(0.4176339534043044);
    msg.setSource(27828U);
    msg.setSourceEntity(108U);
    msg.setDestination(48791U);
    msg.setDestinationEntity(119U);
    msg.formation_name.assign("DAANWDRHEWVFHUMUICOPYAVKPHFXTCFLYEIKEOSRBUIVUTOEWRPRQXTGCAXRNLUXMCXJOLODGWVNSSZYUMEYGNZSYDDBQECMRLAZKSVFVXMVZZLHDIJWKEMIDNMGUAPPNVHPJWFMLTOKKQSNJFZPTBJVABBBQQBJDBYXDPDNIQNWNUGZHJTXCXHHTMHZWGI");
    msg.type = 245U;
    msg.op = 177U;
    msg.group_name.assign("OWEBDOYMNEVNAUVFJBPCFYUJPSDAUTETWWKGVLKUBYTGBSYHACRQESEXHZP");
    msg.plan_id.assign("AZILYVDRZEAPWUMWWIGYPTCLMXFNNEUHUFUULZNGRQAFBBCZHKSHUTFSEOKJHXSEBNKWPSIGXLJADATBLQIRHDXWBFGYNMLEOOTPYIRHEQRNJKBHUXWUYDAPSGJIWOKNWSSOXLPVAWFNMYPYJDAXKRY");
    msg.description.assign("AMXSFYJBCYHUFIPXNCDRZATPUPBALGERUDROYQAILINKKLQVYYIGNXCWMWUVJHVGMTEZFOUWUQKFTCIPVGSQAHFHMSRVADGKSEFLICSCIDEGKCMQXARSWECRFZPNZNSWHTZQTHJXZKGOEKWBJNWOANOGJJEBYDXDQOXIDBBXBJTYMNLEDASUMTDWMZHEKXPWBRIUZGCCUMWJPKVYFFSLRSJLPNZQU");
    msg.reference_frame = 178U;
    msg.leader_bank_lim = 0.9137962853976126;
    msg.leader_speed_min = 0.4457134361210898;
    msg.leader_speed_max = 0.8907103177412207;
    msg.leader_alt_min = 0.2236933053641239;
    msg.leader_alt_max = 0.20950302955916356;
    msg.pos_sim_err_lim = 0.3129485095091187;
    msg.pos_sim_err_wrn = 0.809846149600932;
    msg.pos_sim_err_timeout = 5445U;
    msg.converg_max = 0.7840137777249759;
    msg.converg_timeout = 61830U;
    msg.comms_timeout = 58432U;
    msg.turb_lim = 0.21480555451306482;
    msg.custom.assign("IBRYHNZAWZUVTQHAJOZVVCIFBJXKGWYSLPNDVMGDLBKUSXTTIFORHXACDZZWGQAZUNKNYONLDSWNNAIMLLBOQCEYXRKQTQZERFRHNPPSTDDEPDFXOFSAZQRFQBJDUWNJYXUUIMTIUWKBVBYEAFJDMTSJUPWSQXDZNAIBROGEOFCLBJKLKEEIPGXGMVQGGKREZCOMMYOMLCSPXKMQTLPSHXHHJMIR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Formation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Launch msg;
    msg.setTimeStamp(0.0056066838796242635);
    msg.setSource(8668U);
    msg.setSourceEntity(78U);
    msg.setDestination(48744U);
    msg.setDestinationEntity(122U);
    msg.timeout = 51049U;
    msg.lat = 0.18395210035116039;
    msg.lon = 0.614572609467213;
    msg.z = 0.01402966835450592;
    msg.z_units = 152U;
    msg.speed = 0.6506192379947847;
    msg.speed_units = 105U;
    msg.custom.assign("ALSAVGXEYMFZNRUQRNSSVJLKARSVYIWBUZFQOUKWTXXNZHGPCKTAYXPMZBCYMQDKXADELTEVLIHEMCVOKOFPPVKOQJQGUMETHSQHDJSHJHJXLMENQLSLRCEWJDRPXUDNHQSVTLXIFCTADLYPORGBPHJIVIFKFJUSJRIIMXBAESPCNOAGYQUIHOZWDWDFOVTRKMOHTBWGBCBDYWZCBMGXMIQNRPKUZTT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Launch #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Launch msg;
    msg.setTimeStamp(0.7800640341061466);
    msg.setSource(14872U);
    msg.setSourceEntity(146U);
    msg.setDestination(63883U);
    msg.setDestinationEntity(43U);
    msg.timeout = 32590U;
    msg.lat = 0.1286409922071282;
    msg.lon = 0.15091278621433635;
    msg.z = 0.7042842237886531;
    msg.z_units = 42U;
    msg.speed = 0.6717400797108165;
    msg.speed_units = 70U;
    msg.custom.assign("KVUHRTQGDNRCNDKOWAONFRJLYJPEIXUKFLXVXMVZEGVRQOYTOWJMVWCRBVSWCLBRZLVOXNQZHREIOYEAUKUWTDMYYZSARDEBLCUHZCBRYDMGNPZQEIHJALSXXYBOQGCAFJOFXSIRMJNVGHWWIUZWBKTIEZDAGMLSKDZVYGTLQNITIYUPPHCQSNJPKUECGKPQAAHTJTJA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Launch #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Launch msg;
    msg.setTimeStamp(0.15063946797518557);
    msg.setSource(31581U);
    msg.setSourceEntity(124U);
    msg.setDestination(2121U);
    msg.setDestinationEntity(39U);
    msg.timeout = 29979U;
    msg.lat = 0.5457222515442345;
    msg.lon = 0.6384454939589492;
    msg.z = 0.3732508171206991;
    msg.z_units = 167U;
    msg.speed = 0.5079716788587723;
    msg.speed_units = 133U;
    msg.custom.assign("JFKFDPUMEKXTYTPICKXJHL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Launch #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Drop msg;
    msg.setTimeStamp(0.6879389878162696);
    msg.setSource(58490U);
    msg.setSourceEntity(106U);
    msg.setDestination(55360U);
    msg.setDestinationEntity(136U);
    msg.timeout = 37683U;
    msg.lat = 0.12509170488867538;
    msg.lon = 0.5773186057989423;
    msg.z = 0.2072776344846753;
    msg.z_units = 33U;
    msg.speed = 0.07634849221602369;
    msg.speed_units = 13U;
    msg.custom.assign("CMVVJHGIOBIXKQBQXAQLCUJAWDFAHSXYCCLMENSIRLWNAJVVZZHYTCDGJVZHUAJNSGXMGKHRGVOSQCIYBOANNEVTEORPDZKIWXHBGZROJMHWYBXOWQDXQFBXFZZLPNAUIFNWYQOMTFLANLSKPAMWEPPGKLQHUWNBBMPTJMKXWHCTDVUPYKUTLYESIYQZYSTBPHDVODDJRWRCFSX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Drop #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Drop msg;
    msg.setTimeStamp(0.32215269110932576);
    msg.setSource(16030U);
    msg.setSourceEntity(61U);
    msg.setDestination(38234U);
    msg.setDestinationEntity(56U);
    msg.timeout = 52228U;
    msg.lat = 0.09413286033321744;
    msg.lon = 0.18363795887207912;
    msg.z = 0.4276540052377116;
    msg.z_units = 229U;
    msg.speed = 0.006853602992407892;
    msg.speed_units = 26U;
    msg.custom.assign("AFINWUFBDWJMXODBLYTZUZEMKNTGGFRMJAEILBKQWZEHHLRZPRJBGDSHLCUHQFIGCSEIRLUXYTAYKKQNICTWCGRSJQUEGWXFLNEYZROHXSXRUCFYOGFDYJYBVKAJEAFQCM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Drop #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Drop msg;
    msg.setTimeStamp(0.9168860279618487);
    msg.setSource(6507U);
    msg.setSourceEntity(70U);
    msg.setDestination(26013U);
    msg.setDestinationEntity(69U);
    msg.timeout = 2588U;
    msg.lat = 0.251826593903151;
    msg.lon = 0.20729039213879352;
    msg.z = 0.26651215492989966;
    msg.z_units = 227U;
    msg.speed = 0.6663075828469676;
    msg.speed_units = 201U;
    msg.custom.assign("MZCBVYGFYBXRIYDMLDNHERUPJXYPBQZLNZMTXBPLKJYSWSDMAHEYVAMZNPUTVHNVKBBOUIHORTRJRJIXSIAQCEQPAFHIDXJCOZSMGERJKFNZDUBVNCIVFDUJDHGWSAWOWAMFYNEGRLSALEUOCWRWKLBKLFPKEN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Drop #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ScheduledGoto msg;
    msg.setTimeStamp(0.5021746032450363);
    msg.setSource(57480U);
    msg.setSourceEntity(160U);
    msg.setDestination(25214U);
    msg.setDestinationEntity(82U);
    msg.arrival_time = 0.08248907691927998;
    msg.lat = 0.3676514389386092;
    msg.lon = 0.7549684478683419;
    msg.z = 0.9637526891818285;
    msg.z_units = 193U;
    msg.travel_z = 0.3766905887038239;
    msg.travel_z_units = 55U;
    msg.delayed = 202U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ScheduledGoto #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ScheduledGoto msg;
    msg.setTimeStamp(0.43822972193024);
    msg.setSource(18832U);
    msg.setSourceEntity(23U);
    msg.setDestination(40662U);
    msg.setDestinationEntity(252U);
    msg.arrival_time = 0.06061179073473588;
    msg.lat = 0.050661816852105246;
    msg.lon = 0.8528414582311373;
    msg.z = 0.9374872933779782;
    msg.z_units = 117U;
    msg.travel_z = 0.9096530050386926;
    msg.travel_z_units = 67U;
    msg.delayed = 45U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ScheduledGoto #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ScheduledGoto msg;
    msg.setTimeStamp(0.00728047649414354);
    msg.setSource(2916U);
    msg.setSourceEntity(73U);
    msg.setDestination(39182U);
    msg.setDestinationEntity(188U);
    msg.arrival_time = 0.9726438226959244;
    msg.lat = 0.6733742412174101;
    msg.lon = 0.6219917276932292;
    msg.z = 0.3322758098390953;
    msg.z_units = 201U;
    msg.travel_z = 0.7155446815768369;
    msg.travel_z_units = 146U;
    msg.delayed = 86U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ScheduledGoto #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RowsCoverage msg;
    msg.setTimeStamp(0.6328558849082938);
    msg.setSource(34676U);
    msg.setSourceEntity(214U);
    msg.setDestination(5820U);
    msg.setDestinationEntity(146U);
    msg.lat = 0.7755332104535405;
    msg.lon = 0.7482220370661599;
    msg.z = 0.09249859858378251;
    msg.z_units = 240U;
    msg.speed = 0.2708597587781243;
    msg.speed_units = 253U;
    msg.bearing = 0.03236871894338378;
    msg.cross_angle = 0.7482939916761087;
    msg.width = 0.4179504717111835;
    msg.length = 0.20496672182574438;
    msg.coff = 102U;
    msg.angaperture = 0.007017677995988736;
    msg.range = 9564U;
    msg.overlap = 123U;
    msg.flags = 134U;
    msg.custom.assign("FWZDBFERTEHREOMFIVPKCFZHRSJTVYUHXKMGMQGAQSGXOIHVYHPNMOZOWKIIOWBUFEEATARTLR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RowsCoverage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RowsCoverage msg;
    msg.setTimeStamp(0.4021926074263895);
    msg.setSource(24969U);
    msg.setSourceEntity(238U);
    msg.setDestination(6861U);
    msg.setDestinationEntity(69U);
    msg.lat = 0.6794345660380384;
    msg.lon = 0.04422003698530108;
    msg.z = 0.9310584761268504;
    msg.z_units = 45U;
    msg.speed = 0.8883289845217643;
    msg.speed_units = 118U;
    msg.bearing = 0.7935178898836571;
    msg.cross_angle = 0.19610360754489486;
    msg.width = 0.7876159058173752;
    msg.length = 0.7631028036680694;
    msg.coff = 31U;
    msg.angaperture = 0.043100665435454766;
    msg.range = 19227U;
    msg.overlap = 221U;
    msg.flags = 195U;
    msg.custom.assign("MFCQTCYMCEVVZKOTKQCOFQGLTSPXHBVEMNCFAZUPSMTJDRIZEHDNTUZFXNUDWSOJCDWYHQTJYFNDJJDVILOKCPIMWSDFDFZKLPCUMPIBBPNBQESAUBONUYBUQNGWDILXGNYASHLTBSX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RowsCoverage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RowsCoverage msg;
    msg.setTimeStamp(0.7189421034559322);
    msg.setSource(60337U);
    msg.setSourceEntity(149U);
    msg.setDestination(3035U);
    msg.setDestinationEntity(177U);
    msg.lat = 0.17124290066834835;
    msg.lon = 0.2731430370310567;
    msg.z = 0.32443150678582555;
    msg.z_units = 187U;
    msg.speed = 0.7234427458662962;
    msg.speed_units = 25U;
    msg.bearing = 0.6689088935368785;
    msg.cross_angle = 0.3525044245407958;
    msg.width = 0.26301598027256246;
    msg.length = 0.6916252821681769;
    msg.coff = 33U;
    msg.angaperture = 0.8622126560055835;
    msg.range = 6526U;
    msg.overlap = 146U;
    msg.flags = 169U;
    msg.custom.assign("VOGKFWAMCGXMTGZYRJNKXTBSPQPMQO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RowsCoverage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Sample msg;
    msg.setTimeStamp(0.6882645210893663);
    msg.setSource(42941U);
    msg.setSourceEntity(23U);
    msg.setDestination(10517U);
    msg.setDestinationEntity(138U);
    msg.timeout = 41762U;
    msg.lat = 0.14580532282587066;
    msg.lon = 0.8771288770934583;
    msg.z = 0.5907380306759029;
    msg.z_units = 189U;
    msg.speed = 0.9450877853969376;
    msg.speed_units = 37U;
    msg.syringe0 = 87U;
    msg.syringe1 = 178U;
    msg.syringe2 = 115U;
    msg.custom.assign("LBUXIEZJEROYUIZUKWUPQBIOGCXHWKYQCKODWTNJFIJIFHYSXHRUVYBNAFHUPSZTVUOKA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Sample #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Sample msg;
    msg.setTimeStamp(0.5156395716363804);
    msg.setSource(7345U);
    msg.setSourceEntity(169U);
    msg.setDestination(25617U);
    msg.setDestinationEntity(242U);
    msg.timeout = 7586U;
    msg.lat = 0.017953349003140384;
    msg.lon = 0.59761605397088;
    msg.z = 0.9089715365907076;
    msg.z_units = 17U;
    msg.speed = 0.1656331645982646;
    msg.speed_units = 9U;
    msg.syringe0 = 106U;
    msg.syringe1 = 194U;
    msg.syringe2 = 237U;
    msg.custom.assign("FXELAVPSFQJHSXWBYZTSWZUCPGNOWABCIKTYNBFRPNEQCLIXOXUTLPIWNQE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Sample #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Sample msg;
    msg.setTimeStamp(0.26710806546219235);
    msg.setSource(45311U);
    msg.setSourceEntity(109U);
    msg.setDestination(29788U);
    msg.setDestinationEntity(0U);
    msg.timeout = 38711U;
    msg.lat = 0.5087102873728697;
    msg.lon = 0.2491625539740424;
    msg.z = 0.8015933732125492;
    msg.z_units = 107U;
    msg.speed = 0.3060714837611066;
    msg.speed_units = 156U;
    msg.syringe0 = 83U;
    msg.syringe1 = 69U;
    msg.syringe2 = 90U;
    msg.custom.assign("HGVWTOINURHARFCUFDBJXUSQMEZZFCHSAMMIKQPHQUKOUMONGLRACPTKIFI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Sample #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ImageTracking msg;
    msg.setTimeStamp(0.7193250953737929);
    msg.setSource(2043U);
    msg.setSourceEntity(61U);
    msg.setDestination(61920U);
    msg.setDestinationEntity(74U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ImageTracking #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ImageTracking msg;
    msg.setTimeStamp(0.3515359935403223);
    msg.setSource(48971U);
    msg.setSourceEntity(145U);
    msg.setDestination(34704U);
    msg.setDestinationEntity(71U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ImageTracking #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ImageTracking msg;
    msg.setTimeStamp(0.8264114566019031);
    msg.setSource(47743U);
    msg.setSourceEntity(252U);
    msg.setDestination(29232U);
    msg.setDestinationEntity(59U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ImageTracking #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Takeoff msg;
    msg.setTimeStamp(0.5948789450555375);
    msg.setSource(20025U);
    msg.setSourceEntity(201U);
    msg.setDestination(36967U);
    msg.setDestinationEntity(27U);
    msg.lat = 0.2891255246308091;
    msg.lon = 0.3079557607667056;
    msg.z = 0.14644667404706657;
    msg.z_units = 34U;
    msg.speed = 0.9235585355907225;
    msg.speed_units = 198U;
    msg.takeoff_pitch = 0.41820981093023746;
    msg.custom.assign("GVJJTNZFZYCJWSWINNJJKWILWKHMZRPFEQGVKIPYCDDUGJETFGHYEFRYQAFQUBRTJECTDMMNVRMXSVLHHQHGSUQUKRNDTADTAJUEAVIYLLHCROKBBRHSDDVWCKCXIFBAIOXQDOWKPWUYVSTAZQLROBXQHMSELZCPZEOENXCDUJQOMPRBXOXJHNSBSKSGVBOYMHOTZWFNVPTBMZITFLWEUZGIFAPNLVFCXA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Takeoff #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Takeoff msg;
    msg.setTimeStamp(0.8038948122407436);
    msg.setSource(33873U);
    msg.setSourceEntity(152U);
    msg.setDestination(9723U);
    msg.setDestinationEntity(199U);
    msg.lat = 0.9407362208858454;
    msg.lon = 0.8656817252051665;
    msg.z = 0.2221339143547565;
    msg.z_units = 181U;
    msg.speed = 0.981100723432234;
    msg.speed_units = 56U;
    msg.takeoff_pitch = 0.6546311933762837;
    msg.custom.assign("SIZSXYETILBKXPEKAAAEJZIYUNGQSDSAPWFPBBXFZSUJOQGDRXLGIUHJXLFJWJXVYBDBEQILF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Takeoff #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Takeoff msg;
    msg.setTimeStamp(0.15900144920845216);
    msg.setSource(3611U);
    msg.setSourceEntity(198U);
    msg.setDestination(2590U);
    msg.setDestinationEntity(154U);
    msg.lat = 0.7857054334317195;
    msg.lon = 0.5484977742586378;
    msg.z = 0.8476071150354718;
    msg.z_units = 143U;
    msg.speed = 0.6162931104227216;
    msg.speed_units = 142U;
    msg.takeoff_pitch = 0.39453114811904577;
    msg.custom.assign("WVRFCMJHLDCCPWGXBG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Takeoff #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Land msg;
    msg.setTimeStamp(0.9248656832874971);
    msg.setSource(748U);
    msg.setSourceEntity(1U);
    msg.setDestination(7210U);
    msg.setDestinationEntity(1U);
    msg.lat = 0.5899570306528578;
    msg.lon = 0.24151504961260317;
    msg.z = 0.9375698890335035;
    msg.z_units = 123U;
    msg.speed = 0.8555313419863158;
    msg.speed_units = 150U;
    msg.abort_z = 0.9654550824015108;
    msg.bearing = 0.6683828943568061;
    msg.glide_slope = 160U;
    msg.glide_slope_alt = 0.126031121691347;
    msg.custom.assign("FWJGYYODMFBVODJYWJGFUHTVAFKEHZENRGODMCPQLFZAGKJXJZEROXUNBZBRSAMRKANRNBIPEUOHLEHGPQCPEAOOPVUMYRUOODFTWXFVCWYALPLHTHRDWTKQQTRUFISNQUYMDIIGYQHGLLZXTS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Land #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Land msg;
    msg.setTimeStamp(0.4822737785042267);
    msg.setSource(50541U);
    msg.setSourceEntity(121U);
    msg.setDestination(25356U);
    msg.setDestinationEntity(225U);
    msg.lat = 0.22049689902832204;
    msg.lon = 0.8332242795080759;
    msg.z = 0.5988730502697943;
    msg.z_units = 3U;
    msg.speed = 0.6930793039507219;
    msg.speed_units = 187U;
    msg.abort_z = 0.9331798167920867;
    msg.bearing = 0.4232454122305559;
    msg.glide_slope = 22U;
    msg.glide_slope_alt = 0.882714713855291;
    msg.custom.assign("BSEFPGYMJYAORSQFPQPJGKEVTOGVDRHESXXDNAHORQBNPPBWHEBDHICZBCUAKLQNAJAWESFISTJOTXVTOACWKVUCIHLYZCETVVSISZHUGOTDQRABLOFBOZRDRZDYPLDFGQSNEMRJULXAQRBLNLIWXCXPLUYNIMENTJQSHINKUICXYXHHOJGGJKDMKB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Land #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Land msg;
    msg.setTimeStamp(0.595485543097972);
    msg.setSource(3159U);
    msg.setSourceEntity(69U);
    msg.setDestination(46311U);
    msg.setDestinationEntity(118U);
    msg.lat = 0.5480243831049333;
    msg.lon = 0.6477422144348639;
    msg.z = 0.29066357229121775;
    msg.z_units = 175U;
    msg.speed = 0.282480554077848;
    msg.speed_units = 193U;
    msg.abort_z = 0.7819890767020039;
    msg.bearing = 0.8885854367340653;
    msg.glide_slope = 193U;
    msg.glide_slope_alt = 0.3435684185832294;
    msg.custom.assign("AXPYQHTWXTQSJASVTBLPKEBKWRILDJKEQOJGWCSQHLXNDDGMUEAWNHQDSRZJXOUDKJXDSSPVTOIZFATRYKVCBLLCVPETEMGLZHFIKACISPUBBZGNHLKVIQQMYFXIEYYHNVODPQGQFNJWCLCMOXNAWHFMRCOWGKDRBCOXUMSEPXWWYVRNBIQTGZTBLONFBENCUJHKGSRWZVOYZCPJNMAMFYPZSEEKHVDUJAGJDFIUIRRMYFHF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Land #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AutonomousSection msg;
    msg.setTimeStamp(0.1619996156056086);
    msg.setSource(28563U);
    msg.setSourceEntity(207U);
    msg.setDestination(33430U);
    msg.setDestinationEntity(166U);
    msg.lat = 0.5283816203138958;
    msg.lon = 0.2677157072651962;
    msg.speed = 0.5136049960358822;
    msg.speed_units = 108U;
    msg.limits = 51U;
    msg.max_depth = 0.5021972272751059;
    msg.min_alt = 0.7285025235742133;
    msg.time_limit = 0.8751767011338166;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.1568328734929757;
    tmp_msg_0.lon = 0.6902867013042218;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("LNAZKZCGBTHOUCENCUNWEXUREXMRNSLZXFKGLPLBTIUFWMJSRXTRBEZARSYACVFWTFZQSMEDVJHRFCTCEGIUYSOBMCJRMTSPNHTPQAUYZXHHDPFWOKBJJJXNOFKHTGVQDIUJXWEQITOTGHKYZLUFV");
    msg.custom.assign("EDZHXZDMNTJJDCHKRQFKHRFUYQRZHMDSYMTPQVRVSQXYFIHGNPBWEXZBTBFLLIWIYFGEKLNXNSPFETNAPCUOMUVINMAMXLDAOYZQYVWGGISMWETXONSJBKKBDOTEEQMJROQTXVCBIHMGDJUVKYRJZFHWIXWP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AutonomousSection #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AutonomousSection msg;
    msg.setTimeStamp(0.9279598783728344);
    msg.setSource(33573U);
    msg.setSourceEntity(122U);
    msg.setDestination(62954U);
    msg.setDestinationEntity(78U);
    msg.lat = 0.07928119651735399;
    msg.lon = 0.8006140983973251;
    msg.speed = 0.9329057547206207;
    msg.speed_units = 62U;
    msg.limits = 215U;
    msg.max_depth = 0.4486696310322371;
    msg.min_alt = 0.7914935506299146;
    msg.time_limit = 0.4088390384126196;
    msg.controller.assign("OEZVEFCSEIUMCGJRLOXZPMKFSVKOIYZNSZQHDNNTATFIEMPCOSGZBJUBHKVYYSXDXTAXWHDLSYJXNBFXGCBJOOEAXGINELVRPCUUGKBODETYULQHPSWAWFCWZKANFENIRRMBQDYZSNZFJWJUJYDYDVZIVADLHCPLUBQAGDPQKASPYJRKXPWPJRGLHYMIVHHVXFWCTGSVMWKA");
    msg.custom.assign("NYKSASHQBDXEXCJXDIGYCLNIIZROSZUSDXBLTWMNTBJWBOFYDJJJQPGLUTQKUICOHEXVNHGDI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AutonomousSection #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AutonomousSection msg;
    msg.setTimeStamp(0.6278704487942592);
    msg.setSource(12773U);
    msg.setSourceEntity(2U);
    msg.setDestination(41361U);
    msg.setDestinationEntity(161U);
    msg.lat = 0.9180734645398821;
    msg.lon = 0.8349608148423379;
    msg.speed = 0.7248202409926023;
    msg.speed_units = 5U;
    msg.limits = 6U;
    msg.max_depth = 0.6341855165896393;
    msg.min_alt = 0.011691597160938594;
    msg.time_limit = 0.31911057079377636;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.7739731993311415;
    tmp_msg_0.lon = 0.559695893173467;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("OVWNWTPYBUPGWBNWDVISBXQTVFMULLRRQEHLHRJSFDUOOZJNKBCMHIRSGCYQXMBHHJXMPV");
    msg.custom.assign("RFVQHEQSNDWZKYLPYGQEZMXWNWMJFJSJGQDUGZNTRATAQKRDPDMANGYFFGODCBBWRSEISBREPHPHJPGQZQHJGRTSKESZOXFEIWKTGUDLXZSRWDOXKXBURZQYLMDVRPITCOBVOYIKSAYMBYHHHBKNTYZJPXCKVJJNIHTXUKEVJBQXHAVNWNMVNIOKVFCPLBLUIEOFGTDLUWCYAICTRCENYFCLTALMIDLXMZIHJCAOSAS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AutonomousSection #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowPoint msg;
    msg.setTimeStamp(0.18932455773679568);
    msg.setSource(24571U);
    msg.setSourceEntity(144U);
    msg.setDestination(6642U);
    msg.setDestinationEntity(230U);
    msg.target.assign("XSKOBASDPWVMICYURVPLDFXYOTGWEIKFSQWDVFBNRXDDPCO");
    msg.max_speed = 0.2803283783425431;
    msg.speed_units = 60U;
    msg.lat = 0.8004557245695452;
    msg.lon = 0.7826932119200922;
    msg.z = 0.9439744753137149;
    msg.z_units = 210U;
    msg.custom.assign("PMTZEHRWBODWXRWDCZDZCWAWPUNONANYHFTPYSXLTLWWXOGJSQDSSCSOUMBLGLPKYZBVCAOVIPZNBXNDBUROVZLCKWTFMVVFGXOZRLRYMHFFSXIIYIQIOBZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowPoint #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowPoint msg;
    msg.setTimeStamp(0.658148195480642);
    msg.setSource(14730U);
    msg.setSourceEntity(64U);
    msg.setDestination(48168U);
    msg.setDestinationEntity(248U);
    msg.target.assign("TFGDRNZNKUEFJFSQMYQLKFSJQHXYWJAUJJZRBMXLKEZDKOOWZPURBCBHNAZINXEFCIXPMXWTBQJAVULBPZHQJNBUFECXXDPETXWWVGAVZTNTHICVAKLGRMDJFNYDAPAAG");
    msg.max_speed = 0.5881698061392255;
    msg.speed_units = 72U;
    msg.lat = 0.30209090049994636;
    msg.lon = 0.24718458514856234;
    msg.z = 0.4650174355496437;
    msg.z_units = 170U;
    msg.custom.assign("NJFKHTSNCMZOTJIINQFUZAHJHMACVDRKLIDPZJLYABPMFEVONVHWFFTQHASBVPMGXEYSEQSWTNJUBKEAGKYVERTRNDDHWCHPACPRIXVLUXIDMBOKC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowPoint #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowPoint msg;
    msg.setTimeStamp(0.5737833527880352);
    msg.setSource(15247U);
    msg.setSourceEntity(37U);
    msg.setDestination(41975U);
    msg.setDestinationEntity(225U);
    msg.target.assign("YIFBTUCBAETFLXGACONANIGJRRZPUQOOYCTLRCOGBZGBQMNBMOSWIYYRHSHSUHUDLTHJIFAYRZLOICVNMULYAXWXZQJNPDLJJKWAYQFRTDPDPDIV");
    msg.max_speed = 0.8027890789928611;
    msg.speed_units = 115U;
    msg.lat = 0.5360429907527862;
    msg.lon = 0.7258727723744197;
    msg.z = 0.9772536135693481;
    msg.z_units = 13U;
    msg.custom.assign("FNIUPMADYXOSPMTXZPWMXKQSRAZRIMEVSPRKIRGBBCNKHCFWLBPBWWTEDCOJGDOJUMRCXHJXWLBQBQDHCVVOYNGAGOPWXILJFUQFFDQMEDVFYQZBDIKGJJSVWUFHAVIJSTCPXWOQHEDSUMAWEEAROWGYCKHLJISSTEBFVALYPRRPKRATJXNL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowPoint #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Alignment msg;
    msg.setTimeStamp(0.3010006955566169);
    msg.setSource(10392U);
    msg.setSourceEntity(168U);
    msg.setDestination(15659U);
    msg.setDestinationEntity(81U);
    msg.timeout = 8245U;
    msg.lat = 0.5797791313760041;
    msg.lon = 0.8309326656179307;
    msg.speed = 0.9589224585935612;
    msg.speed_units = 117U;
    msg.custom.assign("KZJEPUASGANSHNQEZJFJJRFMEQTRGPZPVIHWJPMHZDLXGRFALUQSMOWLBNFYLUMDQKRDWLOOJTUAIACYTTEYBGPUCSCADRZEBDUJNEOKFYJXYUPVKBNEWHISSDBDNXMLCMVRQOVVILFBQFTYXVQDVSEUAZPZCZCKNRKCXYBVILJWTBGIWJWRMWHLPGLVOX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Alignment #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Alignment msg;
    msg.setTimeStamp(0.4774145298841974);
    msg.setSource(46815U);
    msg.setSourceEntity(202U);
    msg.setDestination(28754U);
    msg.setDestinationEntity(157U);
    msg.timeout = 34660U;
    msg.lat = 0.9973012674007663;
    msg.lon = 0.20870616342263504;
    msg.speed = 0.21870829128924107;
    msg.speed_units = 49U;
    msg.custom.assign("BHZREGWAKYWMHDGCLRGBONSCYUJZAQOHITJOKGYMINZCWKZLSEXDMHQUYAGBXPXBAPSCVTTLAPYORJAQPTDEIHKADHBVFAOUDOEQFIZRVRBCFEYECGPLMUYMLJUPZTOXXSQPWPTBJDWTVDSOWFUMNQVIGUDSIJJWSYAXNNIRVCMKKTKQZIDHNICCWVXLXDLENRGFXQNNFBWUMBJFJVFTMMUPRGOKQKEIFWSCKLQZAZYFEBZVOYRGPXHLUELNH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Alignment #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Alignment msg;
    msg.setTimeStamp(0.28001199498555784);
    msg.setSource(56989U);
    msg.setSourceEntity(252U);
    msg.setDestination(44127U);
    msg.setDestinationEntity(179U);
    msg.timeout = 25783U;
    msg.lat = 0.4734805364804259;
    msg.lon = 0.09054848439391883;
    msg.speed = 0.04417015457423412;
    msg.speed_units = 135U;
    msg.custom.assign("UIUZVDHBNDLIJOYARKTXPUGAZEHDOCDCADRAZYVOSGLLQLBEWXSVULVRMAORCJKVWHDQPVLCQSGXHGEMGGOJBXKOGZAQFXNLKTYGPASSEFZUWLDMBVZJXDJNRXQBGFNEICHYFNQGQKFAKPCNWCZBXFZFETEBCZIIJQMMKUNPTVRPNYTTUTRCYDHWTHWDITSJKORMOKUSNBZCHXOVFWWWPSJITAJUIIVLBRQSRIFPMLJQXSAWUYB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Alignment #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StationKeepingExtended msg;
    msg.setTimeStamp(0.2375039051736868);
    msg.setSource(59606U);
    msg.setSourceEntity(254U);
    msg.setDestination(59064U);
    msg.setDestinationEntity(35U);
    msg.lat = 0.2595263851497115;
    msg.lon = 0.7356070025437922;
    msg.z = 0.8473499336807966;
    msg.z_units = 236U;
    msg.radius = 0.21000864359055238;
    msg.duration = 39243U;
    msg.speed = 0.21332389628208548;
    msg.speed_units = 207U;
    msg.popup_period = 58240U;
    msg.popup_duration = 43695U;
    msg.flags = 248U;
    msg.custom.assign("LRSNECPKLLPUQFASRLXMYLFOWKAQQMKEMUJJSGVMBMATVWLRVQNMZVZKHEJLCTRCUSTYKJOPZWABOCTY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StationKeepingExtended #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StationKeepingExtended msg;
    msg.setTimeStamp(0.19617033759049252);
    msg.setSource(47770U);
    msg.setSourceEntity(92U);
    msg.setDestination(28480U);
    msg.setDestinationEntity(107U);
    msg.lat = 0.5974557902988711;
    msg.lon = 0.3153222638505916;
    msg.z = 0.28505900168048304;
    msg.z_units = 121U;
    msg.radius = 0.27442661687468306;
    msg.duration = 6944U;
    msg.speed = 0.6891011735165014;
    msg.speed_units = 193U;
    msg.popup_period = 14834U;
    msg.popup_duration = 7497U;
    msg.flags = 193U;
    msg.custom.assign("GFCRYYAMSGIMHXHNBHYWYVJALLFRMVEDRWNCYUUJJVEDAGKBLXOISTGRGUWHETRZLWZODIBUVRXIPTXHNBZSSHLMGPJQCNEUXEDVVAZNATRZMIYPBPYDOJOQGUZZKLWOYX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StationKeepingExtended #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StationKeepingExtended msg;
    msg.setTimeStamp(0.4023754443369295);
    msg.setSource(5608U);
    msg.setSourceEntity(82U);
    msg.setDestination(29112U);
    msg.setDestinationEntity(72U);
    msg.lat = 0.13633480754727512;
    msg.lon = 0.4781807593134869;
    msg.z = 0.03357374303460825;
    msg.z_units = 215U;
    msg.radius = 0.18962349068514328;
    msg.duration = 39489U;
    msg.speed = 0.015756128392797608;
    msg.speed_units = 135U;
    msg.popup_period = 61166U;
    msg.popup_duration = 60227U;
    msg.flags = 191U;
    msg.custom.assign("MAGWXUKDZKQRHQRHKLVJZAHWMMCFODJYKXCSTUSOHMKPVKGHABRJBHWSEFVXDIYTCCENCZJEBTXLLOTUEPALFVGGUFMCSQHJNIZVRSOFNVGBBPMVTEIROCKTEZFBAXXFUSHAQOMTCJFUZGHJLSUQBXDYZBQAEHRGIOWLGPZASJVPYNNINXCYRGWYCKLMW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StationKeepingExtended #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ManeuverDone msg;
    msg.setTimeStamp(0.6464562707405787);
    msg.setSource(48971U);
    msg.setSourceEntity(239U);
    msg.setDestination(52508U);
    msg.setDestinationEntity(122U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ManeuverDone #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ManeuverDone msg;
    msg.setTimeStamp(0.5915728891178136);
    msg.setSource(10998U);
    msg.setSourceEntity(214U);
    msg.setDestination(24895U);
    msg.setDestinationEntity(48U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ManeuverDone #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ManeuverDone msg;
    msg.setTimeStamp(0.05843833798021747);
    msg.setSource(34828U);
    msg.setSourceEntity(182U);
    msg.setDestination(23390U);
    msg.setDestinationEntity(132U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ManeuverDone #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Magnetometer msg;
    msg.setTimeStamp(0.17603459067504879);
    msg.setSource(1524U);
    msg.setSourceEntity(33U);
    msg.setDestination(30444U);
    msg.setDestinationEntity(33U);
    msg.timeout = 36962U;
    msg.lat = 0.30675097476421076;
    msg.lon = 0.6182510248338735;
    msg.z = 0.3775631639543301;
    msg.z_units = 174U;
    msg.speed = 0.3604735252478315;
    msg.speed_units = 95U;
    msg.bearing = 0.3138942418840328;
    msg.width = 0.1384010031830829;
    msg.direction = 142U;
    msg.custom.assign("ZSJWDEIXTHCFFOHZUVJGZBKGZWTSPGFRNSIJXLCTMNKMXMVLCEVSTKRRXQWNGCFOVWXXUBYKDCOJYMXPGNOCHDQYMPSHAYDDQVTGEJANHXEFKRUELINVMBIWQJVIZZZJNMQJUNERBQKWWAFTTKMBCRLFVOGPSDEWMYXB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Magnetometer #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Magnetometer msg;
    msg.setTimeStamp(0.5620603375928339);
    msg.setSource(44098U);
    msg.setSourceEntity(179U);
    msg.setDestination(40330U);
    msg.setDestinationEntity(166U);
    msg.timeout = 19083U;
    msg.lat = 0.39428632751685333;
    msg.lon = 0.9471072696443635;
    msg.z = 0.01088671417699183;
    msg.z_units = 152U;
    msg.speed = 0.9347053081715586;
    msg.speed_units = 250U;
    msg.bearing = 0.39472922550400336;
    msg.width = 0.5208693944883992;
    msg.direction = 15U;
    msg.custom.assign("RMHIYONFLERZJGBMBLQKUTXIPNIHUEDD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Magnetometer #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Magnetometer msg;
    msg.setTimeStamp(0.7876207332934027);
    msg.setSource(45442U);
    msg.setSourceEntity(207U);
    msg.setDestination(22116U);
    msg.setDestinationEntity(28U);
    msg.timeout = 48027U;
    msg.lat = 0.4214187136992781;
    msg.lon = 0.28550304694633977;
    msg.z = 0.3757208564404294;
    msg.z_units = 136U;
    msg.speed = 0.6750639130755605;
    msg.speed_units = 164U;
    msg.bearing = 0.9023649093854623;
    msg.width = 0.6713444658938584;
    msg.direction = 14U;
    msg.custom.assign("CRMBXQWFRSXTXTBLXXPYEUHPTVFQWFCCEFSKTRUKVJWKBBYAHMQGHRPUERYLRZGCJVISVCDSFBMCJAKWPYQGCMNOLGNTNJZVSMVQVDFNPNAUUVJALKLDDXXVIOETNNIHUCZPQIH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Magnetometer #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleState msg;
    msg.setTimeStamp(0.18480344898803158);
    msg.setSource(46854U);
    msg.setSourceEntity(187U);
    msg.setDestination(48911U);
    msg.setDestinationEntity(99U);
    msg.op_mode = 239U;
    msg.error_count = 215U;
    msg.error_ents.assign("UOZRVVVJOUMFJSVHIMYYCWWSYRWJUGHBTDONVGWWSXBYQPIBUYTTMPAWACTNHZXJCJCKBJAGFKRXDPXYGZRGIAEHQCTLONKQNRFIDPCYTECHVMKTSDOUZKIHQFLDIPEVMTGXHEEFUBEPKHSSUQQOFWQROKNPNXCALZOGFODGWPMUZTFWASZNNYXBFMBDCJRESHVLAIPRBDLB");
    msg.maneuver_type = 5283U;
    msg.maneuver_stime = 0.5148200340244091;
    msg.maneuver_eta = 30926U;
    msg.control_loops = 3304294051U;
    msg.flags = 101U;
    msg.last_error.assign("YNSUUIXSXQMHURPMIFUVKWBNBDKWEVBAKYBLG");
    msg.last_error_time = 0.6962291004053428;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleState msg;
    msg.setTimeStamp(0.4215646871163746);
    msg.setSource(31711U);
    msg.setSourceEntity(250U);
    msg.setDestination(27159U);
    msg.setDestinationEntity(46U);
    msg.op_mode = 54U;
    msg.error_count = 9U;
    msg.error_ents.assign("UMIKYEPDWXGBOQMXWYTSVDQPTGADWBLTZNORGDUZLZBVSUTQKIJAMCFCPWOMUOCFVGCIVWCFBDQKNFHSZAVTSPYTVCTQHSDMOIAJKMKEQXOYYPZUQIRISKPGKOYJJAGXXEFTLWJUKLJZXOUGEMBXRLREIPNSDDARNZCGWVYEENDANOHDHNNSTLYBMXJFQFQPFHBHHXSUHULRZRMHEVQUOWLYBZ");
    msg.maneuver_type = 31542U;
    msg.maneuver_stime = 0.49862005011651367;
    msg.maneuver_eta = 51741U;
    msg.control_loops = 1301818089U;
    msg.flags = 92U;
    msg.last_error.assign("SZRUZUZRDQ");
    msg.last_error_time = 0.5321917382695606;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleState msg;
    msg.setTimeStamp(0.921051968130742);
    msg.setSource(4926U);
    msg.setSourceEntity(252U);
    msg.setDestination(33622U);
    msg.setDestinationEntity(53U);
    msg.op_mode = 18U;
    msg.error_count = 32U;
    msg.error_ents.assign("UIKOGUROPFNMECIOXMEHXFDITHU");
    msg.maneuver_type = 60609U;
    msg.maneuver_stime = 0.339208521304424;
    msg.maneuver_eta = 34479U;
    msg.control_loops = 814355375U;
    msg.flags = 186U;
    msg.last_error.assign("VDZYOTJEPSARKWAIAQLIVCBPGTJRIISUSBHOOYFQIKDMLRNQDOKEUXMUKYMMPBHJOWVYWEBWRXCNKOYXLLTHKCXQMVGULNAJWDKUFXBNDDVYSHWFTBHCAPGBCFLOGUJMNRZCOREIRSPBQQMSESQTOALKRNLBXHDQPPGVZFTEMAFZGWKEASFTCXJIUDEERDVTHNBXHAFPYWYSXYNJNFISHTU");
    msg.last_error_time = 0.4056846222850491;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleCommand msg;
    msg.setTimeStamp(0.5607519988951181);
    msg.setSource(21764U);
    msg.setSourceEntity(97U);
    msg.setDestination(31367U);
    msg.setDestinationEntity(129U);
    msg.type = 172U;
    msg.request_id = 42129U;
    msg.command = 34U;
    IMC::Magnetometer tmp_msg_0;
    tmp_msg_0.timeout = 9182U;
    tmp_msg_0.lat = 0.7437252415628708;
    tmp_msg_0.lon = 0.4544414963744524;
    tmp_msg_0.z = 0.5504162772985348;
    tmp_msg_0.z_units = 217U;
    tmp_msg_0.speed = 0.3561037939375674;
    tmp_msg_0.speed_units = 95U;
    tmp_msg_0.bearing = 0.6011588172953535;
    tmp_msg_0.width = 0.2123276514584217;
    tmp_msg_0.direction = 107U;
    tmp_msg_0.custom.assign("DZMIWQPKBTOUHJFMCU");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 12812U;
    msg.info.assign("DHQVDCEDPFBOLOSIPCQRAVNWCAPAGOTPEWFQXCYKSDRLFUKNGPQOUSNHIPRM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleCommand #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleCommand msg;
    msg.setTimeStamp(0.16009571126973932);
    msg.setSource(15654U);
    msg.setSourceEntity(35U);
    msg.setDestination(52379U);
    msg.setDestinationEntity(144U);
    msg.type = 23U;
    msg.request_id = 52623U;
    msg.command = 108U;
    IMC::CommsRelay tmp_msg_0;
    tmp_msg_0.lat = 0.8196919668275765;
    tmp_msg_0.lon = 0.32382066481436556;
    tmp_msg_0.speed = 0.7257494653908789;
    tmp_msg_0.speed_units = 123U;
    tmp_msg_0.duration = 31195U;
    tmp_msg_0.sys_a = 19191U;
    tmp_msg_0.sys_b = 55114U;
    tmp_msg_0.move_threshold = 0.12885093561740923;
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 56521U;
    msg.info.assign("XYTRQWCXSPWUYEZSBUHFYPBFXJZSUKSANKEUHKQLGNKJJEAWKVTPOXCZTHNFSNOADRBRIMHNKPWZEMEHCCPNLWUAQNESSOCUDYBLVXMTRVXDZGBXZECPGTITYCPJOJIARRWJFLGJVWCAAZDQPMDQVZDBAVWLGX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleCommand #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleCommand msg;
    msg.setTimeStamp(0.11079632884401702);
    msg.setSource(1341U);
    msg.setSourceEntity(23U);
    msg.setDestination(46499U);
    msg.setDestinationEntity(141U);
    msg.type = 244U;
    msg.request_id = 21966U;
    msg.command = 236U;
    IMC::FollowReference tmp_msg_0;
    tmp_msg_0.control_src = 59888U;
    tmp_msg_0.control_ent = 172U;
    tmp_msg_0.timeout = 0.4123096084932325;
    tmp_msg_0.loiter_radius = 0.2755158739091189;
    tmp_msg_0.altitude_interval = 0.9116546104990374;
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 50236U;
    msg.info.assign("FUFZUVIJSECHXMUEJOXJHFOYETWNIIZGMQBVIQXILQHYFFBHVKGPWFMTXRKHLGTZZOMJECCUOVKSWCQHQEMDTTBLWYLVYOACWEVWRRJLDDAOGRWXZKBMGUJIQHJVARFJTUNZKPHUAYXKFNQFN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleCommand #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MonitorEntityState msg;
    msg.setTimeStamp(0.1066436450996493);
    msg.setSource(29803U);
    msg.setSourceEntity(81U);
    msg.setDestination(23073U);
    msg.setDestinationEntity(156U);
    msg.command = 239U;
    msg.entities.assign("KRVNSGWBTYZEUDRRXFGGCXLTIBNMCFJWHYYUHLTGGPDBIYKQTSLZWBRNMMHGJCAMTPBTPEACHJMPUDFNCZWWRMVSEBZEOGEOCXAVOHNTZEYKPYXLIYOXXQGHXEJJGEDCIVOLBIFAFUXXHSSWNIVQKHNANGLWQJYA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MonitorEntityState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MonitorEntityState msg;
    msg.setTimeStamp(0.31125700237316667);
    msg.setSource(36443U);
    msg.setSourceEntity(126U);
    msg.setDestination(33157U);
    msg.setDestinationEntity(22U);
    msg.command = 93U;
    msg.entities.assign("MFOYVULNEJSCJRWUTAIXYPESHZDUPRMWKQSASBXRERBOCWZGGXHYTKSJTZMBRLUKCBOHXIKQAMVUCURFHDJWKGNMYCZKDMQDFCANVVIWZATCXLBLHRPFIZNPAQLHMGNQMYJEMDNOGXWGHEUJCLOJTYZESGYIQNITGHHKYDDLPUTGSYQEZKTUPQBAVAFFFANWKRFJIFNOPDMIBEJBCIWFGXSXOOPVDPBJQUYKVWLL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MonitorEntityState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MonitorEntityState msg;
    msg.setTimeStamp(0.18305197508672166);
    msg.setSource(12571U);
    msg.setSourceEntity(125U);
    msg.setDestination(35133U);
    msg.setDestinationEntity(34U);
    msg.command = 21U;
    msg.entities.assign("DAIGPCLGZVPAEEHLVSZNXOFDYGRRVHFWQUWYVEYRYRJTZAUXJTQGRLTWGHNRPJYDBBOIDMWHFCHTYUKJCINKMJNMWLZMEROSXLRCBHFFSBNZLZMPULGXROXAGBGRAWD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MonitorEntityState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityMonitoringState msg;
    msg.setTimeStamp(0.594303946539416);
    msg.setSource(27187U);
    msg.setSourceEntity(137U);
    msg.setDestination(53175U);
    msg.setDestinationEntity(110U);
    msg.mcount = 63U;
    msg.mnames.assign("OBWRXBQQUHEMHAPDZSMT");
    msg.ecount = 122U;
    msg.enames.assign("XEVKSMVCDEUQBYJYEIXETDZQPASJKDHWRLCYUDBQRVFYXHQYNTMACFBSVMNBGWGQLDSIUCQGKQHBPFHDXFUVMMUPIEHPSELZXTAQOZWSPFDRGCPJIORNJKAUBZEFPMUTRVFMAAOVQOCIJXZSROLKAZSXCLLGTMJZZWXYPGWGBANPDNKMFOTYBKWIPNMGVWKSCVHSUUCTLBEWLJARLQHNXDYRERFCEKOVOOJGBWRHAFWTITGJUTHYYN");
    msg.ccount = 70U;
    msg.cnames.assign("QLNBJLOIYAPHXQXPYBFFQTDDZEREYJNWMWYKNBBNASZBRTFUIMTQDHTGZVOAJULMMHXLRVGGGHKYKENDUZIJJOSRVREPHDEBDYPTWPLSKOECQGNIUHMMMWGCFAFYHCAEZIPUBCWCQQUUFAUWVAKWNTLXTVQOXHEWTIRCXRXFMDIDVVKMBQNXDLSFQBMROCSVPCWNAZUJKYGVJIXXPZZG");
    msg.last_error.assign("DJLWXTOUASCUVXYTOQGSTQYTDFSSXNQQLSVBYTQSJHKWNTJCZVMOXOMAPKLLEFFYILGMDOQZGVYHDPVSEGBATTBZTGJOGWWFBZNNMHEPCZKGFRHQBHPMDUQDVELPXDHDHIKLZRCZBYASRACIUXU");
    msg.last_error_time = 0.7899507643163248;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityMonitoringState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityMonitoringState msg;
    msg.setTimeStamp(0.573729668304006);
    msg.setSource(63340U);
    msg.setSourceEntity(100U);
    msg.setDestination(57553U);
    msg.setDestinationEntity(151U);
    msg.mcount = 37U;
    msg.mnames.assign("ZWDJTLQHIMYERGJBXWLKVFTMYEJCNGXCEHNVZGQUOISWXBBXDTQOUFQOMRECTAJKOQYVCYCSFJEBJLHLUZUZKKSPEOMBDDJRRNGSFGNHOSWGPMHEIKYACPOORIVLGCKXFQCHLERHGJUTDZPNVKVPBVMOASINGIFIRAFLAFRHXNWKAGIWEPDTTKXTUADQNMWFPSWQHZFYZIYDYKQUZHNBVVLQAUIM");
    msg.ecount = 216U;
    msg.enames.assign("DDKYLPZGVFYWUPVMTNLMHVFXDHCQXBTPGRBHEQHUGGWDGSQWDRBOOAPQZRJVKCUIBTCZIFJYKNIFNCNIFAUKXVAJYZBBBOINTFNZAFPWSZPOKSNXJJELAOZOZGPMGOMLHXHFRIZECVHJJEEBYRWABRFYOCMVMKEIDLGSLVORSLPVJYKIOSURUNXXQUPEE");
    msg.ccount = 142U;
    msg.cnames.assign("JHDFJEWZIRBKUSMYMENYAHSKUZIHSQJYSUZJBTTOYRWKWUBDBUTTNXBEAJYKFJDCQHSJSNGFRCCJWKUCEHBPIZLMLACKLLMARSZHZLIPBMQGKUXUUKIPWEYWDNOCOXVGHVGXLQQFESWNWQROVMDNKVVOHBZOFGKNHWIHIYPEAFCAGXTTDVOFXRJOCAPLZDMEQDIVDTZYTRFOVODASNMWPASGQBXMCYMRRGPIEGYZVQ");
    msg.last_error.assign("RIKDOSLILCGNEKCCAZFBBFWTSSLBLLGQCQVTUZAOUWMWFGTLMZZVL");
    msg.last_error_time = 0.447035558935169;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityMonitoringState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityMonitoringState msg;
    msg.setTimeStamp(0.06922273651884658);
    msg.setSource(36713U);
    msg.setSourceEntity(216U);
    msg.setDestination(23528U);
    msg.setDestinationEntity(216U);
    msg.mcount = 220U;
    msg.mnames.assign("TKDRSJVDWDVOYNBZCFFMBTJTVWDHHTKRKKSPNZHILQRZDCTEYOLQXEGVHVCDCAAIAFBUYTHGQIDPXPBXWTAYFPGKELENRCUMLPXBQELNKIOWJYMMSFBSMRIJNALNKYPSBGJHFROFGUUHUNYHQOBSWSGQPFBRQVQZKKSGIDCSZNYEQMOVUAFZRW");
    msg.ecount = 89U;
    msg.enames.assign("GTKUYZOZXCHATKNFPWWVYSHKVVWAXSFCLKXQMLONHWHZKBQLDLPWEPYDKGWBAVPJDTWBACNOUYDIFFLSHYBUHKGGEQJYLMJXH");
    msg.ccount = 11U;
    msg.cnames.assign("VBLACERTWCTTPHEXWSXQCDRLVJTOTNEXOLUVCYSMXPIMVFNRJVWUZPZMKGOFMQJGCQWAHFQUCTDREOYEJKEMHWAAEHZDKQWGZNKINIZGWGPWSAQBPVUNMMISUZSZPYFCJUD");
    msg.last_error.assign("ATXVTJOFHKPYTDCQGFYMBIONDKVYJAIOGPZTNCEESQRVQKNKQJGXLMPAIBBHWGRIUSINHRZWHLLKPRFBXRTEYUHSYNVJZIPLJRQTMCUJUORVAZFWAYMMOASVNPJEUCVVZHLGSNMVCAENRXDWLYGQXNKKZXUTESUCSCXOKRMERQOHBUFYQDPHWWWAMX");
    msg.last_error_time = 0.265003472901174;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityMonitoringState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::OperationalLimits msg;
    msg.setTimeStamp(0.4605646180937446);
    msg.setSource(57402U);
    msg.setSourceEntity(127U);
    msg.setDestination(60783U);
    msg.setDestinationEntity(115U);
    msg.mask = 237U;
    msg.max_depth = 0.20009609258853045;
    msg.min_altitude = 0.8335406720086352;
    msg.max_altitude = 0.9113049378125395;
    msg.min_speed = 0.1916923882561653;
    msg.max_speed = 0.6904456580565822;
    msg.max_vrate = 0.3380365515288465;
    msg.lat = 0.7708740041597217;
    msg.lon = 0.2328488769858038;
    msg.orientation = 0.9447155355740812;
    msg.width = 0.6462711703801624;
    msg.length = 0.8889120421663758;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("OperationalLimits #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::OperationalLimits msg;
    msg.setTimeStamp(0.5774170747719923);
    msg.setSource(18526U);
    msg.setSourceEntity(172U);
    msg.setDestination(48019U);
    msg.setDestinationEntity(36U);
    msg.mask = 242U;
    msg.max_depth = 0.41338744210248823;
    msg.min_altitude = 0.25085210035445016;
    msg.max_altitude = 0.341363218902507;
    msg.min_speed = 0.9658380124351021;
    msg.max_speed = 0.7314039445433248;
    msg.max_vrate = 0.9566270314445711;
    msg.lat = 0.5820169415580166;
    msg.lon = 0.7055492442719086;
    msg.orientation = 0.33976260213092513;
    msg.width = 0.563729828431072;
    msg.length = 0.8591101137152735;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("OperationalLimits #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::OperationalLimits msg;
    msg.setTimeStamp(0.9278097652374925);
    msg.setSource(34338U);
    msg.setSourceEntity(43U);
    msg.setDestination(36528U);
    msg.setDestinationEntity(176U);
    msg.mask = 228U;
    msg.max_depth = 0.2568466712936287;
    msg.min_altitude = 0.8996605194275934;
    msg.max_altitude = 0.17928372861397002;
    msg.min_speed = 0.17772285369187213;
    msg.max_speed = 0.6228040939971867;
    msg.max_vrate = 0.45946742382956485;
    msg.lat = 0.13712266543998286;
    msg.lon = 0.966100674345517;
    msg.orientation = 0.9620408118439102;
    msg.width = 0.8335303497091725;
    msg.length = 0.6046823624257148;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("OperationalLimits #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetOperationalLimits msg;
    msg.setTimeStamp(0.8713460288900535);
    msg.setSource(43566U);
    msg.setSourceEntity(199U);
    msg.setDestination(22891U);
    msg.setDestinationEntity(153U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetOperationalLimits #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetOperationalLimits msg;
    msg.setTimeStamp(0.25783538934331296);
    msg.setSource(53834U);
    msg.setSourceEntity(112U);
    msg.setDestination(40387U);
    msg.setDestinationEntity(42U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetOperationalLimits #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetOperationalLimits msg;
    msg.setTimeStamp(0.7236589126601835);
    msg.setSource(10277U);
    msg.setSourceEntity(11U);
    msg.setDestination(22102U);
    msg.setDestinationEntity(246U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetOperationalLimits #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Calibration msg;
    msg.setTimeStamp(0.5900922176499315);
    msg.setSource(47716U);
    msg.setSourceEntity(159U);
    msg.setDestination(20843U);
    msg.setDestinationEntity(22U);
    msg.duration = 23921U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Calibration #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Calibration msg;
    msg.setTimeStamp(0.2601942993544526);
    msg.setSource(65363U);
    msg.setSourceEntity(245U);
    msg.setDestination(28597U);
    msg.setDestinationEntity(98U);
    msg.duration = 5411U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Calibration #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Calibration msg;
    msg.setTimeStamp(0.9844588051704455);
    msg.setSource(40202U);
    msg.setSourceEntity(24U);
    msg.setDestination(64059U);
    msg.setDestinationEntity(91U);
    msg.duration = 19039U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Calibration #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ControlLoops msg;
    msg.setTimeStamp(0.8942068069047197);
    msg.setSource(8178U);
    msg.setSourceEntity(223U);
    msg.setDestination(27796U);
    msg.setDestinationEntity(84U);
    msg.enable = 253U;
    msg.mask = 358334621U;
    msg.scope_ref = 1924634407U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ControlLoops #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ControlLoops msg;
    msg.setTimeStamp(0.7089333789134581);
    msg.setSource(48068U);
    msg.setSourceEntity(130U);
    msg.setDestination(26286U);
    msg.setDestinationEntity(235U);
    msg.enable = 234U;
    msg.mask = 2857564340U;
    msg.scope_ref = 1632917639U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ControlLoops #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ControlLoops msg;
    msg.setTimeStamp(0.182593805846201);
    msg.setSource(6707U);
    msg.setSourceEntity(137U);
    msg.setDestination(42168U);
    msg.setDestinationEntity(134U);
    msg.enable = 83U;
    msg.mask = 3979925009U;
    msg.scope_ref = 3035815111U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ControlLoops #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleMedium msg;
    msg.setTimeStamp(0.9497719979741751);
    msg.setSource(4466U);
    msg.setSourceEntity(97U);
    msg.setDestination(41950U);
    msg.setDestinationEntity(51U);
    msg.medium = 182U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleMedium #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleMedium msg;
    msg.setTimeStamp(0.8483427588305804);
    msg.setSource(17588U);
    msg.setSourceEntity(105U);
    msg.setDestination(19307U);
    msg.setDestinationEntity(218U);
    msg.medium = 71U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleMedium #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleMedium msg;
    msg.setTimeStamp(0.05022596099647603);
    msg.setSource(49456U);
    msg.setSourceEntity(71U);
    msg.setDestination(60427U);
    msg.setDestinationEntity(231U);
    msg.medium = 241U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleMedium #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Collision msg;
    msg.setTimeStamp(0.8806216791590935);
    msg.setSource(12224U);
    msg.setSourceEntity(139U);
    msg.setDestination(53848U);
    msg.setDestinationEntity(155U);
    msg.value = 0.12045371569916485;
    msg.type = 96U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Collision #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Collision msg;
    msg.setTimeStamp(0.047352910230528455);
    msg.setSource(8440U);
    msg.setSourceEntity(210U);
    msg.setDestination(21261U);
    msg.setDestinationEntity(156U);
    msg.value = 0.9397278297018847;
    msg.type = 254U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Collision #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Collision msg;
    msg.setTimeStamp(0.5777788564018619);
    msg.setSource(44675U);
    msg.setSourceEntity(248U);
    msg.setDestination(43182U);
    msg.setDestinationEntity(231U);
    msg.value = 0.4450575021589247;
    msg.type = 66U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Collision #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormState msg;
    msg.setTimeStamp(0.7625410914055334);
    msg.setSource(26618U);
    msg.setSourceEntity(127U);
    msg.setDestination(40587U);
    msg.setDestinationEntity(142U);
    msg.possimerr = 0.8175102269060871;
    msg.converg = 0.9287321195953158;
    msg.turbulence = 0.6396974398943351;
    msg.possimmon = 135U;
    msg.commmon = 161U;
    msg.convergmon = 40U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormState msg;
    msg.setTimeStamp(0.9330529907950531);
    msg.setSource(36397U);
    msg.setSourceEntity(44U);
    msg.setDestination(18091U);
    msg.setDestinationEntity(54U);
    msg.possimerr = 0.015992647819249473;
    msg.converg = 0.31480944484253315;
    msg.turbulence = 0.3205232322853897;
    msg.possimmon = 112U;
    msg.commmon = 62U;
    msg.convergmon = 58U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormState msg;
    msg.setTimeStamp(0.5791543230684518);
    msg.setSource(13768U);
    msg.setSourceEntity(109U);
    msg.setDestination(22518U);
    msg.setDestinationEntity(189U);
    msg.possimerr = 0.02680614113607971;
    msg.converg = 0.7124317896539385;
    msg.turbulence = 0.08501718661069102;
    msg.possimmon = 219U;
    msg.commmon = 185U;
    msg.convergmon = 244U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AutopilotMode msg;
    msg.setTimeStamp(0.17479151427626294);
    msg.setSource(25592U);
    msg.setSourceEntity(4U);
    msg.setDestination(39431U);
    msg.setDestinationEntity(25U);
    msg.autonomy = 214U;
    msg.mode.assign("FWHAJARUMCDRDIRHNZUJTBXLTDCMGJDNDMXHKCPVAHQGNXEWTFNCTHSNGYJRTPBGJGPBPYEEFKOUIZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AutopilotMode #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AutopilotMode msg;
    msg.setTimeStamp(0.38460933501743466);
    msg.setSource(36892U);
    msg.setSourceEntity(5U);
    msg.setDestination(21586U);
    msg.setDestinationEntity(210U);
    msg.autonomy = 160U;
    msg.mode.assign("YPMHSQTTYUOEWYGKUXOKVVOWBAYVGZHDBTKBFNDJXNLZBLUOJVGGMZMRYJTYZGHPEFNHIEXS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AutopilotMode #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AutopilotMode msg;
    msg.setTimeStamp(0.9968346491473752);
    msg.setSource(1544U);
    msg.setSourceEntity(226U);
    msg.setDestination(380U);
    msg.setDestinationEntity(98U);
    msg.autonomy = 3U;
    msg.mode.assign("XGSGMJAOTPKMAPHGKBOUHSWVHMHRTKHKVZWJRTQXVLFNULYQUEXGVNYFTUDAGGIKDSWCQWINYFDZYJWYDRJHSXBZMROSPNHUITTIPBFOCSMFEEDIRZCKAETCQBRYVQNVELOBJZBZRCIQUJYBAKFLMZAXJIQTNZBLXAEQVPOLAODBCDFPMJCXTOEUN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AutopilotMode #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationState msg;
    msg.setTimeStamp(0.3511708359419965);
    msg.setSource(13051U);
    msg.setSourceEntity(124U);
    msg.setDestination(40043U);
    msg.setDestinationEntity(78U);
    msg.type = 91U;
    msg.op = 32U;
    msg.possimerr = 0.9239197530725463;
    msg.converg = 0.32970201095942386;
    msg.turbulence = 0.36867937089568614;
    msg.possimmon = 46U;
    msg.commmon = 175U;
    msg.convergmon = 132U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationState msg;
    msg.setTimeStamp(0.5404859984253028);
    msg.setSource(30907U);
    msg.setSourceEntity(10U);
    msg.setDestination(59027U);
    msg.setDestinationEntity(17U);
    msg.type = 100U;
    msg.op = 206U;
    msg.possimerr = 0.6058404567843478;
    msg.converg = 0.40655149391373613;
    msg.turbulence = 0.9234788599355894;
    msg.possimmon = 154U;
    msg.commmon = 185U;
    msg.convergmon = 214U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationState msg;
    msg.setTimeStamp(0.6713892364524443);
    msg.setSource(27633U);
    msg.setSourceEntity(12U);
    msg.setDestination(34303U);
    msg.setDestinationEntity(56U);
    msg.type = 204U;
    msg.op = 196U;
    msg.possimerr = 0.7165088164051893;
    msg.converg = 0.3646906991954002;
    msg.turbulence = 0.6144672197026473;
    msg.possimmon = 55U;
    msg.commmon = 225U;
    msg.convergmon = 135U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReportControl msg;
    msg.setTimeStamp(0.17737580396835506);
    msg.setSource(13068U);
    msg.setSourceEntity(144U);
    msg.setDestination(45820U);
    msg.setDestinationEntity(51U);
    msg.op = 174U;
    msg.comm_interface = 202U;
    msg.period = 35230U;
    msg.sys_dst.assign("KPPYTEMAERYAOTPNDPLRMHJEAAXBYXQCSREVFDGRSVLKWXMHCKVZABRVNXIXTULOXKZSMDGGZLWUF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReportControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReportControl msg;
    msg.setTimeStamp(0.8487661222617024);
    msg.setSource(20067U);
    msg.setSourceEntity(150U);
    msg.setDestination(61545U);
    msg.setDestinationEntity(179U);
    msg.op = 127U;
    msg.comm_interface = 47U;
    msg.period = 3057U;
    msg.sys_dst.assign("AKAPZMGHZTTKTJPKWHUCBQSKNHBITQCPJDPCSQDCHSMFCOVASHSOGDABNFGVAMLCCZZNYSGWTGXBGBFEVHWEXWVOYJDEUXDSMWIOIBCOGUZZPFJRBJZYKNGRXLLRKYFOKQNNNPITAQREWUILYMWHBULXCTQGNQOAIVESQRFLDUVDCWYILKDTYIQKXVLIXXFYUBPRDFYWLNBGLPMYMXFZTUDFMHEUAQEKJTRPVJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReportControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReportControl msg;
    msg.setTimeStamp(0.9288941051199054);
    msg.setSource(7842U);
    msg.setSourceEntity(102U);
    msg.setDestination(9580U);
    msg.setDestinationEntity(212U);
    msg.op = 137U;
    msg.comm_interface = 181U;
    msg.period = 5621U;
    msg.sys_dst.assign("LFCZHKEQPKDGLPEYVHUBZMPNOZFMICGCEMXJGIOSOUVNEWIULVQOYNAPRIQVXKFJKHQSJGSELXUOWMTTZBAQYWTKAHDFFVPEMBSBHYDLTCTTGWEPJBCOUTUQYDABGNCTGIPPVGUODTLKAUANALXQVSNKJNLMRREWRKZDWDRXJWFCHHNHIKIZKMRZIJMTVNWGAFIXARBHAYCVDBULWBWBSXVHQPO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReportControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StateReport msg;
    msg.setTimeStamp(0.07907350373977706);
    msg.setSource(61491U);
    msg.setSourceEntity(0U);
    msg.setDestination(34274U);
    msg.setDestinationEntity(8U);
    msg.stime = 79410153U;
    msg.latitude = 0.8653035423177138;
    msg.longitude = 0.806294211497581;
    msg.altitude = 48501U;
    msg.depth = 12927U;
    msg.heading = 14084U;
    msg.speed = -31535;
    msg.fuel = 105;
    msg.exec_state = -110;
    msg.plan_checksum = 65481U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StateReport #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StateReport msg;
    msg.setTimeStamp(0.35147761284858925);
    msg.setSource(20785U);
    msg.setSourceEntity(185U);
    msg.setDestination(26581U);
    msg.setDestinationEntity(65U);
    msg.stime = 3087082971U;
    msg.latitude = 0.1011605888417394;
    msg.longitude = 0.22174256155340066;
    msg.altitude = 49349U;
    msg.depth = 50196U;
    msg.heading = 1397U;
    msg.speed = 28320;
    msg.fuel = 116;
    msg.exec_state = 27;
    msg.plan_checksum = 41199U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StateReport #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StateReport msg;
    msg.setTimeStamp(0.47015872328882935);
    msg.setSource(34417U);
    msg.setSourceEntity(51U);
    msg.setDestination(9971U);
    msg.setDestinationEntity(110U);
    msg.stime = 1210375539U;
    msg.latitude = 0.9506590614563907;
    msg.longitude = 0.15838480719985948;
    msg.altitude = 50304U;
    msg.depth = 16559U;
    msg.heading = 13680U;
    msg.speed = -8637;
    msg.fuel = 102;
    msg.exec_state = -4;
    msg.plan_checksum = 8542U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StateReport #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransmissionRequest msg;
    msg.setTimeStamp(0.9085291044542143);
    msg.setSource(36859U);
    msg.setSourceEntity(83U);
    msg.setDestination(37830U);
    msg.setDestinationEntity(142U);
    msg.req_id = 4861U;
    msg.comm_mean = 98U;
    msg.destination.assign("NQVCABYFWDJOXCXMWXHBDTYTRQQIVLFXXZQLIOJPXLIAVKWZGKHFRLIGGDFMWUVMQOGJDDODEGGBZWPTHYNUZWFXYHYNQSYMTMTTKRPQNLRSCDCQIOHJXKSUKJVJRAUVFHBNLRRIHAODYFBWTKUACZPDCETVPDAYKFCKBKGNOSH");
    msg.deadline = 0.27091996293277987;
    msg.range = 0.36894946418591035;
    msg.data_mode = 26U;
    IMC::GpioStateGet tmp_msg_0;
    tmp_msg_0.name.assign("TXIRSDVXGIWVXACMSZMAQCSYPRGRFPSGNTLKEJZDDUFCNNFAYNCDRPYCLGEGXJORDSP");
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("SPCKSHRBQEHMBWYGFJEROUCPDPOJFNHMUGIUZGMABGYDVNNUTTFKSMYPOHOIMKLULOTTPURUOZTGZRADQDYLQFYENHRQIJIIEAFZBEHZOALBXC");
    const signed char tmp_msg_1[] = {-53, -7, 15, -2, 102, 35, 88, 8, -34, 125, -47, 78, -3};
    msg.raw_data.assign(tmp_msg_1, tmp_msg_1 + sizeof(tmp_msg_1));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransmissionRequest #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransmissionRequest msg;
    msg.setTimeStamp(0.8959375248192398);
    msg.setSource(2218U);
    msg.setSourceEntity(244U);
    msg.setDestination(45141U);
    msg.setDestinationEntity(130U);
    msg.req_id = 13383U;
    msg.comm_mean = 23U;
    msg.destination.assign("EHOAGREKFEKBMCQXCQLYSWSHPJYNJDHNCBBDHHURNROAFNTPPPNSOKFUZSDDUTMWWLEAXARPWWJRMSJWIFCAFXVTKALIEWDQXZZNPBKAHLIEIPZIXUOULYZZDVLMMLJDQYXT");
    msg.deadline = 0.9219633454622443;
    msg.range = 0.5316447018764097;
    msg.data_mode = 233U;
    IMC::UsblAnglesExtended tmp_msg_0;
    tmp_msg_0.target.assign("HVGSYNUKSINJNQXZERXPKZPJWQVOHGRGWIYAWRRCHDOQABCAXBBWVINOGORQCJBLOXAAPIWXUWWXVMZNQQUJELHVOPIBYPSP");
    tmp_msg_0.lbearing = 0.041533551691144255;
    tmp_msg_0.lelevation = 0.1571889512100728;
    tmp_msg_0.bearing = 0.6646820717894119;
    tmp_msg_0.elevation = 0.28183910462698225;
    tmp_msg_0.phi = 0.8905111770735554;
    tmp_msg_0.theta = 0.13534936506358763;
    tmp_msg_0.psi = 0.06954512770671883;
    tmp_msg_0.accuracy = 0.9629790986661699;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("XYQOZUJLQMALBQTKVFAXNMSBXMEFPGHUJOXWNYKIYAQRBVJRHMOCTESKBHDFFJPYHXVQAFMTDBOJZJYEHIDRKNCOABPULZZWXBSQRKLLRVLCSCAVITSGADARLWTVCFNSCCCIUGWPPPZGMPHDTIMCBYKOFQETAGOMKRZOJFEVIYSDQHWOWEEPKGLAZIXULEWXVZPGUCUVYI");
    const signed char tmp_msg_1[] = {111, -10, 68, 20, -101, -9, -42, -110, -9, -123, -96, -81, 80, -6, 116, -112, -120, -57, -69, -12, -36, -97, 29, 25, -31, -92, 120, 112, -88, -11, -18, 97, 36, -43, -1, 28, 97, 13, -48, -77, 30, -73, 55, 71, -73, -26, 64, 109, -19, -2, 46, -119, 121, 14, -95, 100, 44, -93, -121, 93, 0, -85, -69, 111, 95, -48, -13, -100, -73, -85, -23, 122, -22, -14, 123, -4, -26, -1, 75, -113, 101, 121, 76, -72, 89, -31, -74, -37, -38, -23, -2, -104, -128, 33, -81, -13, 110, 95, -38, 106, -124, 25, -115, 110, 37, -47, -47, -55, -40, 88, -38, -35, 54, -51, -90, 16, 90, -2, 117, -84, -118, -6, 29, 105, -97, -19, -72, -60, -48, 5, 8, -112, 92, 91, 38, -117, 115, -49, 24, -86, 54, -119, 107, -95, 108, -101, 124, -58, 49, 94, 102, -119, -109, -95, 8, 114, -31, -58, 41, -128, 92, -28, -78, -117, 124, 31, -123, 47, 107, -5, 113, 4, -82, -78, 29, 60, -50, -50, -26, -98, 16, 4, 80, -116, 102};
    msg.raw_data.assign(tmp_msg_1, tmp_msg_1 + sizeof(tmp_msg_1));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransmissionRequest #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransmissionRequest msg;
    msg.setTimeStamp(0.2052939205608133);
    msg.setSource(32421U);
    msg.setSourceEntity(199U);
    msg.setDestination(8640U);
    msg.setDestinationEntity(198U);
    msg.req_id = 18570U;
    msg.comm_mean = 184U;
    msg.destination.assign("KVRJHXMWXKBHOVPNHQENUAYXNWPSKESRABPAPSQWCMNTJWKJSWRMQRALXVRFNBFZAZOVXDAFATTUWGYDHCGHEEOWYQPLEYHPKMLNRUYMXFNO");
    msg.deadline = 0.6544722341329656;
    msg.range = 0.26167682994314934;
    msg.data_mode = 96U;
    IMC::VelocityDelta tmp_msg_0;
    tmp_msg_0.time = 0.7150508216589418;
    tmp_msg_0.x = 0.27235314474166306;
    tmp_msg_0.y = 0.1649460763104874;
    tmp_msg_0.z = 0.6069228893432047;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("PKFOUCJQWPXEWTYHPETLZJR");
    const signed char tmp_msg_1[] = {32, -95, 9, 105, -97, 41, 110, -111, 103, 119, 120, 92, -85, -95, 29, 4, -57, 49, 5, 39, 113, -23, 56, -9, -1, -6, 29, 69, -62, -51, 59, -68, 22, -70, -5, -126, 22, -87, -44, 76, 89, -63, -97, -105, -26, 55, -71, -119, -111};
    msg.raw_data.assign(tmp_msg_1, tmp_msg_1 + sizeof(tmp_msg_1));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransmissionRequest #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransmissionStatus msg;
    msg.setTimeStamp(0.46031679929114855);
    msg.setSource(26861U);
    msg.setSourceEntity(199U);
    msg.setDestination(46821U);
    msg.setDestinationEntity(150U);
    msg.req_id = 38758U;
    msg.status = 57U;
    msg.range = 0.5573225942104901;
    msg.info.assign("NBTGLFTZQODOSZYBCMWXRFDXKKHCBPLSZWUEBNIUQXMGWFFNFBSWTZNBFAJDJGETEAORXUZJLTCEYKBUQGQQXMFPOMJCCDGHNP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransmissionStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransmissionStatus msg;
    msg.setTimeStamp(0.5949715347740979);
    msg.setSource(62536U);
    msg.setSourceEntity(219U);
    msg.setDestination(5992U);
    msg.setDestinationEntity(122U);
    msg.req_id = 41016U;
    msg.status = 118U;
    msg.range = 0.8332207008854412;
    msg.info.assign("XANGBTZTSHBFQMIVSGVYBYDHDCJBQDMCYRQNODFLLOCQQSYUKWCJJYNVAIE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransmissionStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransmissionStatus msg;
    msg.setTimeStamp(0.35840932570759276);
    msg.setSource(4245U);
    msg.setSourceEntity(37U);
    msg.setDestination(29876U);
    msg.setDestinationEntity(251U);
    msg.req_id = 57342U;
    msg.status = 92U;
    msg.range = 0.6620926738116767;
    msg.info.assign("TYLCSVWKGNOHCRYGONLSQRZEAIFKJSRWDPUVGTLTJGKUPQOUBVGCNTNDWXUPWTVYUXBNXZXVXMLPUDIHQVCZKCZHHDQJGEL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransmissionStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsRequest msg;
    msg.setTimeStamp(0.4267978684659839);
    msg.setSource(17778U);
    msg.setSourceEntity(224U);
    msg.setDestination(63420U);
    msg.setDestinationEntity(211U);
    msg.req_id = 49755U;
    msg.destination.assign("KEIFYDAYTUCPNASSZSOAUEFEGUQGDEJHCGDBUUDHYHITOEEYUUWFUVBREQJLVFZZKMIGATNVPLJVTCUYICEBBCODBTSBLHYWVSZFHTKVGIGLCTBKGMNXHRNDWXFPXVXJKITNEZNR");
    msg.timeout = 0.5019310660319073;
    msg.sms_text.assign("ARPTJWGKLGKCMHFMPFTGFURDBIHGVALGVONKXEBMZKCAUYLHJBXVGBPREHDSLFYSUGONSPZZLNHQMZECZJNINYTIQEACJXOTDXAZDTFIQENTYUPIHOQSHSTSQOJQAKSVJLTEVYBQMOPHRLLUXFPVUQIJYJYRWUMGAWINYZJUJPMPWZACVBNDCLNRCNBGUDHZIRFWBCWCZLXHMRMDKSXVFPEDQFWIEWARXFDCTEKUWSVT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsRequest #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsRequest msg;
    msg.setTimeStamp(0.06533864091936559);
    msg.setSource(58690U);
    msg.setSourceEntity(91U);
    msg.setDestination(10445U);
    msg.setDestinationEntity(204U);
    msg.req_id = 22110U;
    msg.destination.assign("NRIUAWRBGZBWLSAWCQPRXVSJXBJYPSAMMPXQZGSBBMDIRYNMEJQGPOOKXTUREKWLZWJJCHTKETXPEMFDMSLHHUKZUOJCCPDYRH");
    msg.timeout = 0.24871003486830012;
    msg.sms_text.assign("JAIWBOYHUZWOEKSMLRGXXQBUGBFZPGGIXDSNXIQGVZV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsRequest #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsRequest msg;
    msg.setTimeStamp(0.7301758431293686);
    msg.setSource(13974U);
    msg.setSourceEntity(128U);
    msg.setDestination(15474U);
    msg.setDestinationEntity(64U);
    msg.req_id = 65163U;
    msg.destination.assign("URBERGZXQCLZBTUHMWKJIVPZXTYSBPTTHOUIKWPQOXCUSQGOWVDAVHEAJQEIJSMYNCLLCTPSCHVFXGIVHLKYFWDSXQYUGWUJHURGNMINPIDPYLZGWXCBNDMSNITASAEOZRQQRXWKKHVTIONPMMBOLPJFVTZGBDZJE");
    msg.timeout = 0.3017069270797673;
    msg.sms_text.assign("WGQRIFSWOBVNOKQMVTKUJUNAGLHSHXTPWHRLQCIIQWYLCQDWYTNDRCETXDJPFIUVXOKYHEYIJADMHMTUGDVPJAAOUGESVLZXNSZFMHFFJDBSLDDUWJGKHZMMCNKREKUUTAXRVSOHZGCZAPPQBRCKWRZIOKXEJVZPTFMSBPQXGWAXOAIACBBFNPFYULZXTOYRFJBBRGLLVEPEQGY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsRequest #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsStatus msg;
    msg.setTimeStamp(0.7905114429028167);
    msg.setSource(35750U);
    msg.setSourceEntity(123U);
    msg.setDestination(29338U);
    msg.setDestinationEntity(111U);
    msg.req_id = 45677U;
    msg.status = 145U;
    msg.info.assign("OPFQQETKYCKCGADCDRPKSVOGDHFJSXUYDMPOSJRZFSIJPHMREXJLRPZWXMOWOKBISQGUKHZXMTOLZJBJTNBYHSZVYFWERXGNNPVRFAZAENLCVQKZIPLTCJFRTYYUDVXMABSURQFWKYWIMAZCMOIJXWFVDHXDHTOUYVUYZVBKAWBKBEATANIUWJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsStatus msg;
    msg.setTimeStamp(0.15764666252338244);
    msg.setSource(11247U);
    msg.setSourceEntity(98U);
    msg.setDestination(50190U);
    msg.setDestinationEntity(146U);
    msg.req_id = 25301U;
    msg.status = 33U;
    msg.info.assign("QTCEQVNTHHPWIDWOWLSGNPUIKFGWRRQDNBRNMELBUOFPQZIIXCLAAOKDAJRJEDRUSYMPPDGMSABOGJLCOXTRHVC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsStatus msg;
    msg.setTimeStamp(0.3925213441591775);
    msg.setSource(5077U);
    msg.setSourceEntity(62U);
    msg.setDestination(59275U);
    msg.setDestinationEntity(19U);
    msg.req_id = 25800U;
    msg.status = 151U;
    msg.info.assign("TOEMWZRFOXKQMMGUUWXYUPHHYINBBEZXVYYGHPDNYPDRQQCSWOQNDZKYRSPVLFLCJLSCJNHJBWJCUKEZRAKGMIQPHKADZNELUEBFHNLSKERWRTXTIAWWCXQSDPCFXEM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VtolState msg;
    msg.setTimeStamp(0.6811216522221111);
    msg.setSource(48563U);
    msg.setSourceEntity(10U);
    msg.setDestination(46454U);
    msg.setDestinationEntity(154U);
    msg.state = 214U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VtolState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VtolState msg;
    msg.setTimeStamp(0.48273434712549546);
    msg.setSource(4583U);
    msg.setSourceEntity(72U);
    msg.setDestination(60391U);
    msg.setDestinationEntity(10U);
    msg.state = 184U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VtolState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VtolState msg;
    msg.setTimeStamp(0.09847799678295521);
    msg.setSource(59191U);
    msg.setSourceEntity(125U);
    msg.setDestination(24640U);
    msg.setDestinationEntity(141U);
    msg.state = 116U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VtolState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ArmingState msg;
    msg.setTimeStamp(0.4287027145263438);
    msg.setSource(32695U);
    msg.setSourceEntity(85U);
    msg.setDestination(25206U);
    msg.setDestinationEntity(68U);
    msg.state = 38U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ArmingState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ArmingState msg;
    msg.setTimeStamp(0.5851780299409987);
    msg.setSource(39006U);
    msg.setSourceEntity(220U);
    msg.setDestination(62654U);
    msg.setDestinationEntity(64U);
    msg.state = 66U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ArmingState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ArmingState msg;
    msg.setTimeStamp(0.5629965853967005);
    msg.setSource(28736U);
    msg.setSourceEntity(165U);
    msg.setDestination(47885U);
    msg.setDestinationEntity(157U);
    msg.state = 217U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ArmingState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TCPRequest msg;
    msg.setTimeStamp(0.15317233260945773);
    msg.setSource(7376U);
    msg.setSourceEntity(81U);
    msg.setDestination(64871U);
    msg.setDestinationEntity(200U);
    msg.req_id = 44475U;
    msg.destination.assign("UDTGTZBTPQLAWWPLDZRAEIVZXAVHLVTYALFJYPTXSNPFXXWONJYOEFADHNXVKPCXLMIOKUGLRVSTHGGMQRCOHDYCPIPBRZRSFCYAGFEVAMSEDHQJZUHVSYBJXYHAB");
    msg.timeout = 0.9194812693491355;
    IMC::FluorescentDissolvedOrganicMatter tmp_msg_0;
    tmp_msg_0.value = 0.14094651262487568;
    msg.msg_data.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TCPRequest #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TCPRequest msg;
    msg.setTimeStamp(0.8353422664455423);
    msg.setSource(45571U);
    msg.setSourceEntity(44U);
    msg.setDestination(21784U);
    msg.setDestinationEntity(207U);
    msg.req_id = 17124U;
    msg.destination.assign("OHZHFMCWAKMZSKHJYNNQRGJWHIBBWGHPSIZAVFBSPVOFUSVQNUSNKZSIVZYPQSDIQDLLJDEMCOYSCTJJTUGORIKCWTEHTULAPIZDTAMCWFEJNRUHYHHNJYTCNAUREKXKYERXVBLRAFYJIQEOMMWOKGLWBCTQCPXOMOATBQQEXCIMVZLWCZGLUPXRUSX");
    msg.timeout = 0.9149832462990309;
    IMC::UsblConfig tmp_msg_0;
    tmp_msg_0.op = 229U;
    msg.msg_data.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TCPRequest #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TCPRequest msg;
    msg.setTimeStamp(0.8301096854375806);
    msg.setSource(57246U);
    msg.setSourceEntity(28U);
    msg.setDestination(27028U);
    msg.setDestinationEntity(86U);
    msg.req_id = 58427U;
    msg.destination.assign("UGIQPGZWQKBTPSHPKYXLRNWWJRLSUNSKHODJRQWBFBDHFVZIZPYNT");
    msg.timeout = 0.6339937226251491;
    IMC::Force tmp_msg_0;
    tmp_msg_0.value = 0.1259967186208074;
    msg.msg_data.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TCPRequest #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TCPStatus msg;
    msg.setTimeStamp(0.9273189287982151);
    msg.setSource(56101U);
    msg.setSourceEntity(88U);
    msg.setDestination(55563U);
    msg.setDestinationEntity(18U);
    msg.req_id = 2452U;
    msg.status = 18U;
    msg.info.assign("BJWXNPPRPLJXFNJUGTEWVOUSZJNRVYRYXCYTIUXDKEVIMZFANSFOXJEGONM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TCPStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TCPStatus msg;
    msg.setTimeStamp(0.7851735288034777);
    msg.setSource(56776U);
    msg.setSourceEntity(121U);
    msg.setDestination(64602U);
    msg.setDestinationEntity(208U);
    msg.req_id = 19828U;
    msg.status = 128U;
    msg.info.assign("QXXCCLDCTPJLASBHWUEHVTNJFKKEMNRANZSTEZPXBAPRAMZJBIBIJYMYBLAMCDMYIYMGKWRLCJXSYGOWIBKIQFKDXOFOSOFTZHQTLVOFWPFLRKGREUJRZUROYJJOZNTBPIQVKICGAWWRHYDYFIVUNHPY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TCPStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TCPStatus msg;
    msg.setTimeStamp(0.4053539895165822);
    msg.setSource(501U);
    msg.setSourceEntity(80U);
    msg.setDestination(43779U);
    msg.setDestinationEntity(160U);
    msg.req_id = 28409U;
    msg.status = 58U;
    msg.info.assign("WONPTAPOYISUBVYRQGLJNIKYGSFONXFHVVJFNENOQLWNRKFZVIWTDZCTDQDCHVOMJRQMZGHKMLIZOCTLWLSMZUGDYTAYFZVYALRPISORJWUCLPLGKHAHCJYOEJTBCMVXYRDJMNEDEBQYSIMCTACPKBGXAGADUKLPBPGXKFWUSSOVQCSRKUNIEWAQANHPBWCJEBEPMDFUWQKZDTRKXBOIPIRHRXZFFEDITMSEZNXBXGH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TCPStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AssetReport msg;
    msg.setTimeStamp(0.10987089659754168);
    msg.setSource(58403U);
    msg.setSourceEntity(23U);
    msg.setDestination(34437U);
    msg.setDestinationEntity(81U);
    msg.name.assign("DHASTENCCELLMEVFDUULJWXDYBZUYUWSXFSWGV");
    msg.report_time = 0.3065462528484907;
    msg.medium = 200U;
    msg.lat = 0.9874740668573412;
    msg.lon = 0.032947704304234215;
    msg.depth = 0.6273084068472036;
    msg.alt = 0.1694474472246683;
    msg.sog = 0.6230311061527052;
    msg.cog = 0.395929958259879;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AssetReport #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AssetReport msg;
    msg.setTimeStamp(0.043638933759357124);
    msg.setSource(55497U);
    msg.setSourceEntity(12U);
    msg.setDestination(31988U);
    msg.setDestinationEntity(144U);
    msg.name.assign("XZAFBCJGGVSAKPPWMEFKDWNKBEXFAMXQCHNYWYTHCIQBBYGTIFDOGZHVWRWUZLRYQUEIIXGNOAPCYZTSMXYAAJOXLWCUUHINHDCCSDUJNULKEWM");
    msg.report_time = 0.976369976040802;
    msg.medium = 107U;
    msg.lat = 0.22417137490056382;
    msg.lon = 0.8042725604030836;
    msg.depth = 0.9935665765790064;
    msg.alt = 0.5607462084399246;
    msg.sog = 0.8544174968544398;
    msg.cog = 0.14104657510611074;
    IMC::FormationEvaluation tmp_msg_0;
    tmp_msg_0.type = 172U;
    tmp_msg_0.op = 78U;
    tmp_msg_0.err_mean = 0.04993892195073735;
    tmp_msg_0.dist_min_abs = 0.4302416726768884;
    tmp_msg_0.dist_min_mean = 0.593706646551406;
    tmp_msg_0.roll_rate_mean = 0.2988695511531688;
    tmp_msg_0.time = 0.8930175488632299;
    IMC::FormationControlParams tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.action = 176U;
    tmp_tmp_msg_0_0.lon_gain = 0.4156711376403158;
    tmp_tmp_msg_0_0.lat_gain = 0.9515118145818158;
    tmp_tmp_msg_0_0.bond_thick = 0.019423315837041932;
    tmp_tmp_msg_0_0.lead_gain = 0.6148920935733306;
    tmp_tmp_msg_0_0.deconfl_gain = 0.2814090679118202;
    tmp_tmp_msg_0_0.accel_switch_gain = 0.11252959936074558;
    tmp_tmp_msg_0_0.safe_dist = 0.11445287328897225;
    tmp_tmp_msg_0_0.deconflict_offset = 0.15002273596673976;
    tmp_tmp_msg_0_0.accel_safe_margin = 0.007767901069496208;
    tmp_tmp_msg_0_0.accel_lim_x = 0.022481430666103197;
    tmp_msg_0.controlparams.set(tmp_tmp_msg_0_0);
    msg.msgs.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AssetReport #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AssetReport msg;
    msg.setTimeStamp(0.7415893096053452);
    msg.setSource(20125U);
    msg.setSourceEntity(61U);
    msg.setDestination(54699U);
    msg.setDestinationEntity(33U);
    msg.name.assign("PZYDSEQDSMWZPMX");
    msg.report_time = 0.27180724915442345;
    msg.medium = 126U;
    msg.lat = 0.99417754158232;
    msg.lon = 0.6638682874715596;
    msg.depth = 0.699855856692289;
    msg.alt = 0.4443296221672697;
    msg.sog = 0.8482398062170297;
    msg.cog = 0.47276298216512125;
    IMC::LedBrightness tmp_msg_0;
    tmp_msg_0.name.assign("WHTWKHZWXHCGQYAPOAITCCYWUOUCSAIFGQGJECJYGXYPYURYNFPAHIRZRWLEJ");
    tmp_msg_0.value = 18U;
    msg.msgs.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AssetReport #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Abort msg;
    msg.setTimeStamp(0.957526890101831);
    msg.setSource(36647U);
    msg.setSourceEntity(229U);
    msg.setDestination(11169U);
    msg.setDestinationEntity(147U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Abort #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Abort msg;
    msg.setTimeStamp(0.49511090003754454);
    msg.setSource(16759U);
    msg.setSourceEntity(36U);
    msg.setDestination(27949U);
    msg.setDestinationEntity(171U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Abort #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Abort msg;
    msg.setTimeStamp(0.9151872469804119);
    msg.setSource(14608U);
    msg.setSourceEntity(196U);
    msg.setDestination(41548U);
    msg.setDestinationEntity(150U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Abort #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanSpecification msg;
    msg.setTimeStamp(0.47058126769347075);
    msg.setSource(29922U);
    msg.setSourceEntity(128U);
    msg.setDestination(43339U);
    msg.setDestinationEntity(190U);
    msg.plan_id.assign("KPYYNELGBOWOZVWEYDHMVBAKNLJECWDRIVGNPJTOJADRCIFPOUAVSWBOLGXIFRKKKQKTJELHBOUDHKSOIQXVFDTMXITFESUWNMAQHLCXGBLWXGSTTGPEICMUHDFAHPGICGP");
    msg.description.assign("YPTGDLFYKGXSECGOREHKIXQUAACTHLGWTTQMJLVAWCJSHMTRGVBSRZHDRCXEQMZCPDMXCDOBUEUBWRNNNVASAOFGADWBILDYHOGISTUAVUXPHQKFCEZZDFQKSOQGIPNTZAJYFBKPBUZAOHTNILNOGIAFFVMLEMMSSJZUILXNFBXERFPMQKKKTSIRCNYDJWB");
    msg.vnamespace.assign("OKBNDGVRSWPTWQJATZLABEDGCBWPJNFFOEMXFOAVJNQJMFCHSMRERHPAVCEMWWH");
    msg.start_man_id.assign("QSGDZHEYFUGGFQXCURYFTNRIFBOMFLBKORLEMVRJGSIMHQJHYVSXYOJIVUZKSFGJMEPQXUFHTOSSZAFFZBWAVOONWIZCGGSKEPKYWUOLKCYRRTRKBMDXNCYAQEHNTPJXXDATCDCAZNMLMYQALZQOBUDJIXQCRNVRIHHPEWAVPNBMGJIHPOABLOFKPEIEDNHEPXEPST");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("RGYCNXTDOUHNWIDFGDWVYSEMROWPZCZQHDQQJZTERJMPRKAVVQEKUBVUSFYGDOXEUEDDRRTTUFHIBFMLZXJFJNKLAABSYYRMWCWFCPPBIZUT");
    IMC::LowLevelControl tmp_tmp_msg_0_0;
    IMC::DesiredZ tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.value = 0.985347485495693;
    tmp_tmp_tmp_msg_0_0_0.z_units = 160U;
    tmp_tmp_msg_0_0.control.set(tmp_tmp_tmp_msg_0_0_0);
    tmp_tmp_msg_0_0.duration = 51387U;
    tmp_tmp_msg_0_0.custom.assign("TGAFTXFOURTALBCPQVUZKIGNMHIWGHGOPCCKHUESLLVMSTONDMFNODFSBNVDNGXMKRSMCDQJPJCIPVAVYDEPEYUFYPDYV");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("ZSQPSXIZZLVDGDFMQXNWXYIRZFGRQUJFVBBVCNEJYCORXSURKRIBLHDHVNYWVNIGUETJLPEHBASQZJMAOUTMUDRZAZBJPGOCJSBOTFWCTBQPGRNMJOALYXYDHKLHDEKAVWWQPSICYBFECQXJHFEVQRENGOQUKANSECLVFVPGNOIIXCTFKSHMOUKDIVAWTLNTYTGLPMPEUCDBAJKUKP");
    IMC::Dislodge tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.timeout = 3806U;
    tmp_tmp_tmp_msg_0_1_0.rpm = 0.9739744658949199;
    tmp_tmp_tmp_msg_0_1_0.direction = 170U;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("ESEWHCLIOJBTZFEFAMQPVDFBPOKKHHTBVBQITRLJXFIAGJURSIRKMXBNSBKZLWLCRJTRWTYLHTJYOVWUXERTGNCYSOXPCHMCVWQCSZBRLKHNNEZVYDKNQEPZDOHVMQQPMWZTIKIFVAAXNCSQSYSXLAFWFGNGQXALGMYABSHDIPRGIDRJKUCADPRDLWFJEVUAZMEJTFMYUCWZUJONOCGHBPUPQKZNNLEJHU");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::PlanControlState tmp_tmp_tmp_msg_0_1_1;
    tmp_tmp_tmp_msg_0_1_1.state = 85U;
    tmp_tmp_tmp_msg_0_1_1.plan_id.assign("CEGAWTKOSBCWXBLUEAZIEOYLMUKDOUSWHHCSKMDLMQTN");
    tmp_tmp_tmp_msg_0_1_1.plan_eta = -1896806020;
    tmp_tmp_tmp_msg_0_1_1.plan_progress = 0.7400329730179394;
    tmp_tmp_tmp_msg_0_1_1.man_id.assign("MZYPOZONZJZKCQEYGRJCKDUQVLPXAAHILASQBIMHRJOYKV");
    tmp_tmp_tmp_msg_0_1_1.man_type = 24790U;
    tmp_tmp_tmp_msg_0_1_1.man_eta = 901458865;
    tmp_tmp_tmp_msg_0_1_1.last_outcome = 102U;
    tmp_tmp_msg_0_1.end_actions.push_back(tmp_tmp_tmp_msg_0_1_1);
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    IMC::AcousticSystems tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.list.assign("VBGPTKZOCQTSKJITMNQQPFOPPEDLHMTSBIQXLWUFUFHBUNAIMIXEUVNQHIQQMNKOGUYEMZLHKZGFOGUVOJZYWPMVTJAEVEHBCRCMJBIUDODKCJYAEAFLGUYGKVRNBXPCMUZEVPDPUNWSRFJTJSTBOTQHLYADOXQHZAZIRACIFKKRRNPDCFLKISMXRSBJWNSIEZZDFLYVCRQVXXDHNWYHMEWAPRVBXJTSBRHFAGSCXECAWLKTOY");
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_2);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("LYFPHRTXLFGCFOUCYTPMQYRBDUDYEXCCIGRFZZHAQYBROWKGHHVIWKKUTXVOMRFMMOIGUWJNUPPRQMDT");
    tmp_msg_1.dest_man.assign("LIRGTHNSQMOKIOEMQDRKXYLMAAUNFKSFLUVYYCCUBWRTVFYEVBGKLTKVWGCRGXJCSHHMYNVGSEJAMKFYOEDRHOBPAZDCTUAZMOBSIIXDUZQEEOEJVPZURTLFVJLFDPANR");
    tmp_msg_1.conditions.assign("CMGLZDIPPROYOBBFKPEQXVNWMVBAUNJYKGNIEMFTOLWDTZLBKYDPLSLVDWHIOWGXNSJFLERRYKDASQZGAMEUITBTCWHYWMFJFJTKMCHJZHHLFRYYGDNCJMZNTYHVUXHZOXNNIOPNJWREPVNGSPXACUXJFUWJUBSESYMWSIUEDVKQTIRGVGRFEDJAQFQDSVTHYBMAXQBADAXVVQGIZTLLFSBC");
    IMC::Formation tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.formation_name.assign("JGUVNVUHNXUGAXJYGEZNZXMXTPYWFMBUWIDXROAJKNMYVNSOILKACSKPUCTQ");
    tmp_tmp_msg_1_0.type = 136U;
    tmp_tmp_msg_1_0.op = 251U;
    tmp_tmp_msg_1_0.group_name.assign("QNGAYXIZHGZRWQDKMFHIYZRMEAISGPXWPYBSDQDMTABYKEDLBUTNERTJNMBBDHLXTFRDOZSNXWCLPIBAOULWJACPVRFHPWACFUFYAPUNDEEQQKBTKSIUZZJHUHTVHYAOROSHOKJNGMCLJFAOQWMVUXRXGOZBGBSEOSMVDYPYJVIIZCTLUQWTRGPLNFUKCSGEOKCIZVUCWEMXRXKXBWLQJMSFWNEGAZSGOQHYV");
    tmp_tmp_msg_1_0.plan_id.assign("VEYBSTLAQQHBNTWTMFXHSPXOTZPIEULEEPRORRZZYABIFXKUELYRYHBPBVSOOFXFWTDKJCOJEYNAVVMPIAJFCIHXPTXMNQLRQEJGQKGTCCKGJPGZSFCMRFWTSJEYOYTWUIHHJIKGSOVOKLZNWCSPSZOVHAUVFGMTGMMSRKMBAFYAWQNNZGCDCJLDQCJXMVQDIKZDNAHWXLIDNRUYKWNMIPBGNDFZUUEHRXYALCQRDUHBLSKDLOP");
    tmp_tmp_msg_1_0.description.assign("BYVMZZFUMSBEGVVGKUOAPIZQPQXHGRXCQWNNJHCRCDNBHWYZCSEHFPMAQLTEXIBUNUADJZFBTONHPVJKWWCUFWJLBVXJFBGKNLCKRPIIZMQLXLJEGSEXVYXTYEAJZOIKXUCZAGQVTRKWFPDMVKLIDYOOEWKYOSPNDBNIDFZHSWRDQHLSUDOQUU");
    tmp_tmp_msg_1_0.reference_frame = 175U;
    IMC::VehicleFormationParticipant tmp_tmp_tmp_msg_1_0_0;
    tmp_tmp_tmp_msg_1_0_0.vid = 40778U;
    tmp_tmp_tmp_msg_1_0_0.off_x = 0.08958770677839478;
    tmp_tmp_tmp_msg_1_0_0.off_y = 0.4042025697195972;
    tmp_tmp_tmp_msg_1_0_0.off_z = 0.048143409654050395;
    tmp_tmp_msg_1_0.participants.push_back(tmp_tmp_tmp_msg_1_0_0);
    tmp_tmp_msg_1_0.leader_bank_lim = 0.07251061286766525;
    tmp_tmp_msg_1_0.leader_speed_min = 0.04143616936790939;
    tmp_tmp_msg_1_0.leader_speed_max = 0.23996634887074142;
    tmp_tmp_msg_1_0.leader_alt_min = 0.12421263370534275;
    tmp_tmp_msg_1_0.leader_alt_max = 0.2649621854586435;
    tmp_tmp_msg_1_0.pos_sim_err_lim = 0.7068025061889333;
    tmp_tmp_msg_1_0.pos_sim_err_wrn = 0.03340193694721205;
    tmp_tmp_msg_1_0.pos_sim_err_timeout = 32309U;
    tmp_tmp_msg_1_0.converg_max = 0.5908036561006493;
    tmp_tmp_msg_1_0.converg_timeout = 37289U;
    tmp_tmp_msg_1_0.comms_timeout = 65490U;
    tmp_tmp_msg_1_0.turb_lim = 0.8674503476275903;
    tmp_tmp_msg_1_0.custom.assign("JWGMOPWLCLGODKHCEJCUISBXBLTQFUEHOQFDMGLFRRPDIHWYBKPQQQUASCLIBTGWFTYSZGAGAFNYAKYFRMCEVXDPXSCDVXAXRTDCURRIXMHSRWXLVKIEUWZJ");
    tmp_msg_1.actions.push_back(tmp_tmp_msg_1_0);
    msg.transitions.push_back(tmp_msg_1);
    IMC::SoiWaypoint tmp_msg_2;
    tmp_msg_2.lat = 0.6676206793852302;
    tmp_msg_2.lon = 0.732710604219819;
    tmp_msg_2.eta = 2828947998U;
    tmp_msg_2.duration = 60244U;
    msg.start_actions.push_back(tmp_msg_2);
    IMC::ButtonEvent tmp_msg_3;
    tmp_msg_3.button = 200U;
    tmp_msg_3.value = 92U;
    msg.end_actions.push_back(tmp_msg_3);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanSpecification #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanSpecification msg;
    msg.setTimeStamp(0.40915234627045016);
    msg.setSource(38928U);
    msg.setSourceEntity(224U);
    msg.setDestination(55319U);
    msg.setDestinationEntity(237U);
    msg.plan_id.assign("RCFSUNOJQYKBEQVTGGHSOYBFRBCYMUXJPMCNJNYYZROVGSZKCFXYDNAQNZWUXPTURMBJF");
    msg.description.assign("EZIAJLZDNQHVCYNURMSPWEGTQKPROFKERLRQUVYKUYYAGVVLMHMYIGWOCNIWALURVDJPDONCGFJCXXBDMXFELFKZTIMPGGLUUONDJZAXESWZAQZRHXLDONESJADRFQOEVMAQEGIHDKBPUBUFOTCEJSYBWYXWLTLMQ");
    msg.vnamespace.assign("ABZQGWVIONVMBOHHVVNUPKHFXYRPJWRZFUWBZLONLRGMVTFMIMJDOSJGKBICUFSLZTSMNPAQREWPNLVCXNKFNCQXIELIVRIJODLRZDIATHQBGD");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("SJCTWXRJWCKVCMAHDRSOIFUKBSQVNPCIZNLPOCEAODATKPPQFSQDWYHLIMNFQNTNPXNJPHCMEYBDSGZLWLJGBCOGZQRFFBXZMCUSUZNGVPJTEGOQYUEYMIFRJUXHFOBTMKKPFRHOIUNKEIZVTKLYJUHQZDAEQJIZXZYHEBMADSVWKUALGRLSOYDKLXRQWOFGUPFZAVXSXGKWXNTMPLHNEEWOABBMVUBCDVLGWWRTBHJEYRRV");
    tmp_msg_0.value.assign("HGGDIVLRGJKKMDHUTXBLNGIMYPEUUBWCZXGYVQCFSURKQUXDWRBCMFAPYWFXNDLNIOJC");
    tmp_msg_0.type = 242U;
    tmp_msg_0.access = 164U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("GWPOSRFGBBEKIFXVEYYFPNVYCJYYHVNOBJECPOZXTTSINZJST");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("RAEGVOZMHOOHZUVPCJKAFMPDVBZYBKZLDRWHPEUWMSHWCTFCTOTMIBIQELBMBUPEZFSCJFPRCDKYXQJPWACYXWVSTCQEDCQEDPDKLNVIVXIQSTAYHOVHWLTUKAHXXGSLJKSUOGNZAKARYIUPQXJXYBZMGNLQMMFEILFYWEIUXRLXTSHZJGBJRFGHAJYISNVROZWABKMSBGQSNVBPIEQNENCUUGTDWFLYTIFKXGUAGDORMDYPWKZHNNTOV");
    IMC::CustomManeuver tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.timeout = 16572U;
    tmp_tmp_msg_1_0.name.assign("IAKNADHGMUTJFDZCC");
    tmp_tmp_msg_1_0.custom.assign("PQNQRPJMLVBAMVTWXIABPPOXUMPZRGWBUIWRECEHKJZMYAHFXHRLYKNPFTWXSOQLGIOEEHBXYFJWMNQFYTJGCYHGDCPNSRTCVIEIZFHPVDBDFTNUHGWJZWGYSIZYYBDGTDPDJSASCLMERNWVOXOGKJLQXCMLOSBVZJXTLQSMKEOQAIASXNETNHFASUKFDEOWBVCBGLNTCUADMIRZCJZRGPMJDWUO");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    IMC::IndicatedSpeed tmp_tmp_msg_1_1;
    tmp_tmp_msg_1_1.value = 0.3941866940669274;
    tmp_msg_1.start_actions.push_back(tmp_tmp_msg_1_1);
    IMC::CurrentProfileCell tmp_tmp_msg_1_2;
    tmp_tmp_msg_1_2.cell_position = 0.874788883052481;
    IMC::ADCPBeam tmp_tmp_tmp_msg_1_2_0;
    tmp_tmp_tmp_msg_1_2_0.vel = 0.9115409402265282;
    tmp_tmp_tmp_msg_1_2_0.amp = 0.3530047552337575;
    tmp_tmp_tmp_msg_1_2_0.cor = 108U;
    tmp_tmp_msg_1_2.beams.push_back(tmp_tmp_tmp_msg_1_2_0);
    tmp_msg_1.end_actions.push_back(tmp_tmp_msg_1_2);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::PlanTransition tmp_msg_2;
    tmp_msg_2.source_man.assign("LIJJDKZPHBJUHDO");
    tmp_msg_2.dest_man.assign("BUSFOEGFQLATHJGDNGXILTDMYALXPMNVHZQKJDFHCRNLEUJFTGPLLZVHRUYSAZBDMWTIVGUGWLNTRWWAUAADPKVIGXMEFVZHQSACZYYYJAKBCGNOEOQNUOFOVQPJTSXSOXIUMYYFDBOFDGSCXCSNZONKEDQHBPELSEPBRKEIVRUJCHYYUPAKXQCCONHWPMRSDXRCJHILPSITBZVYBMMWZFD");
    tmp_msg_2.conditions.assign("NMGWUVFFMUTEPYLHWDBLLHXKETQJANRIVIFFUWZNEEDCZNMTPLCIPHCTQNQDYDOQFMPIXB");
    msg.transitions.push_back(tmp_msg_2);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanSpecification #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanSpecification msg;
    msg.setTimeStamp(0.797620476556672);
    msg.setSource(59170U);
    msg.setSourceEntity(23U);
    msg.setDestination(28142U);
    msg.setDestinationEntity(155U);
    msg.plan_id.assign("FLVLWNNMGXEODIWXGXNVZFNMVDPQTHBXFCOMRSCIIUXCLAIRWVSEPEAWBXKHGCOUDGSDHPOKCQVPFKSRTBJFZLHVC");
    msg.description.assign("PVNQFUQTAKXJMABTYWPLXIDLYNTWVRZWNVPRJPPPWNEHSQZNKOUZYFMBRTAQRORDUQOVMKJGXEXIEZSQYZXYLSHGOTMYSCXAKRJDSLMCOIGZMSCEWNDEATVOWFDFWXYBYHBZFAKTMMILHFSPOKILLUAPDXGUCGNKJH");
    msg.vnamespace.assign("DSBJKLLXGAVMUHMOIREICSIVFWIURAXBDUSYZYFPNVYNUZXIXFBBXWCPEVLGJKARMPVQIPBAZHDKNROZRYHJSWDAMUPZLTBASCQFEOTBJHXGXZZYKETPBDQGGYCVUUMJVKXQNTGMWMEQEMLRZACHYTMWCKMDLARHGUPJJA");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("IFMKGFZJEOR");
    tmp_msg_0.value.assign("XAXAKWGRRKFEFYZMODFVXHJVTTL");
    tmp_msg_0.type = 201U;
    tmp_msg_0.access = 131U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("BOIDYIMUZANAZRVLCMHMMHDFJTBZBFYYWYFQLMQHTRRHWYPUYLBRQRUPZKEAQDZNVNVOIOECXJKAAYZDEQDIBVVSEFFXRBLWNWUTRESHXWOTSIGJRZMSKTKPZRNXWONQMFGATIDTZSHEXPPPDNQGYWNZJVMVESJIKUWVMXKHFUJHKSEOPUXGFGSDFDVPOX");
    IMC::StateReport tmp_msg_1;
    tmp_msg_1.stime = 3926914570U;
    tmp_msg_1.latitude = 0.16888435973006888;
    tmp_msg_1.longitude = 0.7016771758916241;
    tmp_msg_1.altitude = 6587U;
    tmp_msg_1.depth = 626U;
    tmp_msg_1.heading = 16457U;
    tmp_msg_1.speed = -6706;
    tmp_msg_1.fuel = 53;
    tmp_msg_1.exec_state = -101;
    tmp_msg_1.plan_checksum = 60390U;
    msg.start_actions.push_back(tmp_msg_1);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanSpecification #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanManeuver msg;
    msg.setTimeStamp(0.6064255742704343);
    msg.setSource(35901U);
    msg.setSourceEntity(199U);
    msg.setDestination(60759U);
    msg.setDestinationEntity(224U);
    msg.maneuver_id.assign("DKBIETGZRDWSAMRDUNKHEYAXMOVLZHTOUQOTNZGWNDRNIP");
    IMC::Land tmp_msg_0;
    tmp_msg_0.lat = 0.3500283791122496;
    tmp_msg_0.lon = 0.5634461915722545;
    tmp_msg_0.z = 0.6817837679180888;
    tmp_msg_0.z_units = 235U;
    tmp_msg_0.speed = 0.930230378619143;
    tmp_msg_0.speed_units = 189U;
    tmp_msg_0.abort_z = 0.4673245356605157;
    tmp_msg_0.bearing = 0.7580829979509524;
    tmp_msg_0.glide_slope = 50U;
    tmp_msg_0.glide_slope_alt = 0.08980561156083766;
    tmp_msg_0.custom.assign("LCENTLEIYXYVKXEJUSJJMJTTIJXRFTNZFLYNBGDZSBQKOYLYVFCZHTBWSMZVHRWDQWQOSFJOGOIBNBGMRKREBZQXZNTWUKXNDUOFHXJAVRSJUQFTIFVUCRYRY");
    msg.data.set(tmp_msg_0);
    IMC::ReportControl tmp_msg_1;
    tmp_msg_1.op = 61U;
    tmp_msg_1.comm_interface = 19U;
    tmp_msg_1.period = 56209U;
    tmp_msg_1.sys_dst.assign("KHXPYSDOEFBRQGVRMOJDFFLPXXBPYVKODZONLJFHLWWEIHWHYFIMICJV");
    msg.end_actions.push_back(tmp_msg_1);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanManeuver #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanManeuver msg;
    msg.setTimeStamp(0.3017642286561314);
    msg.setSource(35412U);
    msg.setSourceEntity(161U);
    msg.setDestination(29777U);
    msg.setDestinationEntity(88U);
    msg.maneuver_id.assign("RKACJOBDEJLBFKBYSHQHASPNBOSXESAEIINXAHMDWYEWTDKDOZMPLLOGUPYEPSQTDITXNHYYIQVHNTJAQXBWPMZQVNUSGTKKUTPJZOSFDIQOBQCGL");
    IMC::LowLevelControl tmp_msg_0;
    IMC::DesiredRoll tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.2023224298442987;
    tmp_msg_0.control.set(tmp_tmp_msg_0_0);
    tmp_msg_0.duration = 18907U;
    tmp_msg_0.custom.assign("UQDYYPMCBKEXVTRTSNMGGNOOBOXSYLZWEXUEZPMEQDFWJRPQJCFVQCAPNQBYGSTMQJDOZRKKMLNBHUUXOQZQKSWKYCVHBWYNTHRCFOUIABCDTVXHNJSLDDOJPLXGASIZZSBWUXGJKWAVEH");
    msg.data.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanManeuver #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanManeuver msg;
    msg.setTimeStamp(0.7967750800364535);
    msg.setSource(41253U);
    msg.setSourceEntity(181U);
    msg.setDestination(4392U);
    msg.setDestinationEntity(109U);
    msg.maneuver_id.assign("RVEYOAPDWTGAXEOYNBJKKLEDUZMQPQGJLPWLWJCNSSXYNIHFYMKLXTQHBBDRSIAN");
    IMC::ImageTracking tmp_msg_0;
    msg.data.set(tmp_msg_0);
    IMC::FuelLevel tmp_msg_1;
    tmp_msg_1.value = 0.41280318925852544;
    tmp_msg_1.confidence = 0.8389006762348344;
    tmp_msg_1.opmodes.assign("PJEKBVJGOUDJXWSQDMPCMTMSNRJZUCKPZTASTTOONSYRDGAJPQNBRUWSVZDUXLZVFOREIXIGYYBEXCLNNIQMPXSMADVZAPWCFQCBKTSRLBLTKWXHTEIDGIKJJGOAANJEHOLXXHLFPVYURHYQRZMYHOLEGIFBPFRXQWRKDVGFWDHEACMDMQ");
    msg.start_actions.push_back(tmp_msg_1);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanManeuver #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanTransition msg;
    msg.setTimeStamp(0.8304391089116095);
    msg.setSource(29234U);
    msg.setSourceEntity(247U);
    msg.setDestination(59678U);
    msg.setDestinationEntity(62U);
    msg.source_man.assign("OGKMZSXERYYCLQHTCRMNFRJNAUYCKLBJPVETQEIJCSNEQQGTHCLSQOMWXEZDQGTDAFWUMVMTJJJWDVVZPWSPKBUAZNQFTQXHYXIUMUQOLUGYESDGMLZSPZGNIYROCHQLSJWYZBGTYLIKRKHWIFOFAVDMXJPVHVTVXOWJMXBOZIT");
    msg.dest_man.assign("HXSLBZSRGPQIRUUTUAOPRYYZCHKRGEDPKNVQUNTTOKGVALJGDNEOBTAMWUCQYSXLZQZGHCQNSJTRZXMSBEHYGHVGTPJFLH");
    msg.conditions.assign("CBTGFBSEEBUEKLWNRATRKGDSJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanTransition #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanTransition msg;
    msg.setTimeStamp(0.21918513201907364);
    msg.setSource(38087U);
    msg.setSourceEntity(241U);
    msg.setDestination(63148U);
    msg.setDestinationEntity(93U);
    msg.source_man.assign("GGJNVXITANJPINSBPWORWTIATMRDMLXPBWWXWXJKHMPYFYPIMLFSAMQVUYDE");
    msg.dest_man.assign("DXOSHWYUMFIXHQNNUCFKZMZEGRGHIEZOXJTRONQQ");
    msg.conditions.assign("ADUKGHHGWXJTBZOYKTAQWBVZLECHFJMWYXZLBPUDLNBUISQIOCNBRRZHEXUGMDSTUOSDTTUZVDZILEQQFUVQJPQHUEKPKOCIAEAAREYFRVMHPCAXRVCCMESTLODBAXGNKWIIENONRWSDZFDJBCK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanTransition #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanTransition msg;
    msg.setTimeStamp(0.2661035467722991);
    msg.setSource(20457U);
    msg.setSourceEntity(161U);
    msg.setDestination(59010U);
    msg.setDestinationEntity(119U);
    msg.source_man.assign("BPXLCYOWVLGRBORGEKSAICZYZVTTXPMQTFCQH");
    msg.dest_man.assign("URCHWQAYWSCCAQAIPZULGOZFGLZFCGYEOADYCGBZMUTEVKZSHJVDNGVGZWDNPHHVD");
    msg.conditions.assign("AXLZXQURELJMKDDJSUBTVOSINMCVHGRUIFAWEUJXNUTDNCPLFT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanTransition #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EmergencyControl msg;
    msg.setTimeStamp(0.07735406859821292);
    msg.setSource(11182U);
    msg.setSourceEntity(193U);
    msg.setDestination(44789U);
    msg.setDestinationEntity(122U);
    msg.command = 81U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("KWGDJVDCWSPELLYSYGUAUVLOGYBQRTSFEIRDBMJHAUFAXIPPXTWNEMHQNDCYLPYWIFGZCBRRATUFEGRCOULCIFAZTIWQUYPRSTNOADJOTSDMXKBJSHEMLJHZMJHZMNXXUYGVCJIZVTHCOLNKGORFPTZAOLNZLV");
    tmp_msg_0.description.assign("XIKNDMRAGPUMRYQFEYOXLAMDKAWBPZLTMTOXSRUSQSTHZGTQUVHJRHKOYUBZESSLUCIHVWPJXSPLHCSOUKQKOJCNISFKPELEQFXFWNFVBIVIKTABHKLXREMJOKXNVEJPAZVBYSCLPZTTDECDVBFDZWBZUCYNLWRPGOUOIXGWHBJSGCRNYFRUJMTFADQQYZBMQPMTI");
    tmp_msg_0.vnamespace.assign("JAHUSSRTJAFULACMBGFLCTCUNMYRUYICELXKNRRKTZDYJZQUQIZGRBHNVSBUNPECWGFXPWQIUIZKQVEJSOZBXOGDEFNIFMXLDLKZHEGWYOQVWRPVBYKEJTVZQVMWHDOVBKBPBURUSIKRROHPGZFKFLBTFGSSACVXLLWATXSIMJUOAQJEOHXQWFPMPVYLTSANPEPCMHEHDGODBOOJQTWNHXYMKRYJVAXYPDALNGXHDNWZWMIEAKDTNYQFCITIJ");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("ZOEAKQWTNOEHTUCBWRDVXNUIPDK");
    tmp_tmp_msg_0_0.value.assign("NMQKZECAUEXMXEIAMNDDBWAWRCRTPLIBJMUZRSHVFIPKUNSQLBDJVIHWKGJCACMISYKYWWVGAVTVQYOCMKDGHXVOHEQYCTCGZDVZFIXBUFFYFLUUUOKORGWHWOTPUJFLQKIFXQNEXIGWSVPPZCJPQTQDGHFE");
    tmp_tmp_msg_0_0.type = 137U;
    tmp_tmp_msg_0_0.access = 228U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("NQAYNSVHBAMQMITMLILMWYKGHGMJVSOWJXNYXVVYPFEVDTPRKHLLNHZXHCZDBIEVOFVEQPJSHPQUBTQPXXSGEKIVYDPYDSEIADVIZLKCWUAWUCDYBWGOGHPCZLOWTTRXOAWDMJFWRCVROXDRYJGZKOCJKSNACXFMZYZHIKQUSEIMYJNBPRADFEGGGJNWBWKGUZROSZLC");
    msg.plan.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EmergencyControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EmergencyControl msg;
    msg.setTimeStamp(0.22034235825130466);
    msg.setSource(27090U);
    msg.setSourceEntity(156U);
    msg.setDestination(29779U);
    msg.setDestinationEntity(153U);
    msg.command = 254U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("ANZPPGFBKXWSDEHUARZBAVPVPPEUGPLSLCWPHLSZEORIBXIVMYGPCSYJJQITCUUDJZZNABEFNLQSOLNVWSMEZIDGVVQRDREFALKWXONJORXNZCUDICYGSAJKICXDVMWQGWZTNFQWJXUCITGYHIFIAHFFKOGAQDSORRJTENKLHOET");
    tmp_msg_0.description.assign("OJQKGOISUBLSNQMVPRPZTNKNBSRFOUNEOHTZVXAULWVXNKMJYOGDHHYVWVPQAPPBSWLUQBREZKFTZNGCDMOXAFULZTDSIYHGQPAFEZMGISJHWCDBAYAXVWQDDQBWILAYRCISMBWGRAJSJLCMQBPJPJFIUYUIZCXZENEFRUTNSKLAKROHXZHEMDTWERLDXKHFTGFBATNTSMVCRFNVPXEDKEIHGLCIPYMJOCTQHZOGJBDKI");
    tmp_msg_0.vnamespace.assign("YEYISEFXSHFGLCFMKQPRIUXTHVSUXAPEBEZLVYTPCIYPERLJGMJDMFEJOMUDZIDKTSMWIUSHTOGXBLYZKNBYCLJCFUHFNWRUDNXPCJSUAULKBZUHPAQLFYVGNETLGEBXGYTMGSKHOVQFOSKOTMKPHDXWR");
    tmp_msg_0.start_man_id.assign("ZXWQMDRNIIJDBBFLHWRJYHFKMKWUIGTJLVUKEKYDCYQZCOPEUBAOKABQRNWIXMVCHAZXRBDRVNATMQSCUIPAIRCRKGPXAOZXZPWYJSIJXVLEMFGCPOI");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("IQPWHRYHIJYCOBKLXKJECZLSND");
    IMC::RowsCoverage tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.1686691388139766;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.2740616342128255;
    tmp_tmp_tmp_msg_0_0_0.z = 0.5724896495424026;
    tmp_tmp_tmp_msg_0_0_0.z_units = 35U;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.187205066737537;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 119U;
    tmp_tmp_tmp_msg_0_0_0.bearing = 0.4874247549632442;
    tmp_tmp_tmp_msg_0_0_0.cross_angle = 0.614479865944135;
    tmp_tmp_tmp_msg_0_0_0.width = 0.516489561761364;
    tmp_tmp_tmp_msg_0_0_0.length = 0.6754852473854367;
    tmp_tmp_tmp_msg_0_0_0.coff = 218U;
    tmp_tmp_tmp_msg_0_0_0.angaperture = 0.553735845113809;
    tmp_tmp_tmp_msg_0_0_0.range = 32389U;
    tmp_tmp_tmp_msg_0_0_0.overlap = 24U;
    tmp_tmp_tmp_msg_0_0_0.flags = 215U;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("RIZZZQTYACYNJNLOTPSDHIVSDQEDOPLGRHTXMIROWHLCTIHVXGCADPGUIGBGPKBIMRLMFTSNNMXZUGEFIDEVYAIDHFUPQNOOWWUB");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::FuelLevel tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.value = 0.3225201736858856;
    tmp_tmp_tmp_msg_0_0_1.confidence = 0.6184068955909461;
    tmp_tmp_tmp_msg_0_0_1.opmodes.assign("XEXTNMXTGNFON");
    tmp_tmp_msg_0_0.start_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("MBDRFVZIQUYUSETAIQXNBBSTADNEHVDTFCZGMSCUUFRREPFVCNEVLEPATHFXNKBXYGFMXQIGQLJDYWAZUBWSOOIYSZDVHGUYIHEWENJNKMKLCGPWUISOWKWRPGJQTLHOPLXEGJXZSFRVPROFMCOJAEYRQFDTHADCVBWLHCDYUCKZBKQUMNXHLTOPVQSAKVDGXFARTOYSMPXJATZJBVKYGZNWQCTJWERIDIQBOGNLYAMKPWBHIJLL");
    tmp_tmp_msg_0_1.dest_man.assign("NPVRFFCXAOPSSPUDHOLEOJNFXQMPVTLVTVQYBPNBBTZNAAOFOXZHKZOSGOXDQDJQYWBVNELDMSCUTXWQKRCN");
    tmp_tmp_msg_0_1.conditions.assign("WYKKKLPQETCDBPGUMTRUUS");
    IMC::TCPStatus tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.req_id = 27571U;
    tmp_tmp_tmp_msg_0_1_0.status = 236U;
    tmp_tmp_tmp_msg_0_1_0.info.assign("ORRDQHCGUJDGULKILUKTZCZQKAVNRKDHWIPAIPEAILNFRSX");
    tmp_tmp_msg_0_1.actions.push_back(tmp_tmp_tmp_msg_0_1_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    msg.plan.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EmergencyControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EmergencyControl msg;
    msg.setTimeStamp(0.8056883489035095);
    msg.setSource(58242U);
    msg.setSourceEntity(201U);
    msg.setDestination(34581U);
    msg.setDestinationEntity(218U);
    msg.command = 166U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("ZLZJCNUBACCSRANFFMHBWVOOFQVWLYKCGMKXRYBDJRWMREZWJJSTAMFPZLGWCMRYXIZXYPGHCAERDXKRPZNXWAOJKUQDVQSPDT");
    tmp_msg_0.description.assign("IOGGLSJPYBACHPWHXHZXUVQCDJLNUSABOLENULYVRJZLFMZBYNDSXFBWFLUEEGCMLWSNIOLPKPOOWQYSVPMIMATWRFUEQTDUDGSZTSCLAQPFOKNUBP");
    tmp_msg_0.vnamespace.assign("NWEUEBWPTIGZBCROMEMBJHXJDTLVLXDZUJBGLHOASQRFVIZLTJSJIBSOMWJIZVHOWMFNKXFAIZFHNAYLRGLTGTUGTQ");
    tmp_msg_0.start_man_id.assign("DJDMSAIAPYMIPVUGOJROHJXGBFGWJECXQLCALIQLRYFPKKLVGIJOMPFNIKNLPYCJXBNSEOCMLMUJOFEYAUGHYCXTGKTDBZHRDAGD");
    IMC::PlanTransition tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.source_man.assign("AQFUPEJTTMOOPCDCAFWDNSVXDQGVVGVORHSGBXFZKJRGSYORWUNSZQNEITPJZNGELFGOUIFXQRBHYJMZFNKNOLHKZWCIWINOZLHEMXQNCCKMYDVBBKDMURAGHLAYUIJKRXDMVEDICPICKTGSTRQFNBXFQAQHXLKJDCTBJGPEPVHITFUABYJMMEW");
    tmp_tmp_msg_0_0.dest_man.assign("NRGBHRJYSLLVCMQUHMBZXFKENGQRSRAEKTHUXPEMFJRSDUNCOWGLEBNWZXVBTGLWSKYYCCYRQAYRHVGXPZXCVUTSQKVCEEQGLDSFTPZZODIHGYBOUXIVHUJQZZRSFTWAWLNYFQTPJRHOMDAFKOJXEOIRIJNAXQOTHVXZEZNESVIGMMKLNMAOPIWULFKIIPPFCQPJSHOCWWUSCYNWPDFQXHNJADZLKA");
    tmp_tmp_msg_0_0.conditions.assign("ABIFEBSJRYP");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_0);
    IMC::RelativeState tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.s_id.assign("IOEBISYHDNXAMUWUXIOHSTZXJYZLSZBWVXLMKAEWCVTIIERKUKSAQBYBGOGFCTOLFKREYRWSEJAMZUJBYCJUHHYDJXJONWRLLFQHNEFGXVWMUGOMTUSZNKDLQPDJVCXZITRKYWRSIPTMOHBGEATIHEZYROPGPNQNPHTNRNZDXRBURQKZ");
    tmp_tmp_msg_0_1.dist = 0.8138645412344101;
    tmp_tmp_msg_0_1.err = 0.2987200689813273;
    tmp_tmp_msg_0_1.ctrl_imp = 0.7446777403967656;
    tmp_tmp_msg_0_1.rel_dir_x = 0.39645986040221093;
    tmp_tmp_msg_0_1.rel_dir_y = 0.8848838706683345;
    tmp_tmp_msg_0_1.rel_dir_z = 0.3066813563713239;
    tmp_tmp_msg_0_1.err_x = 0.6546549752033204;
    tmp_tmp_msg_0_1.err_y = 0.7782651644873623;
    tmp_tmp_msg_0_1.err_z = 0.1647181755821241;
    tmp_tmp_msg_0_1.rf_err_x = 0.5860775364128601;
    tmp_tmp_msg_0_1.rf_err_y = 0.9804344122454567;
    tmp_tmp_msg_0_1.rf_err_z = 0.540161822796873;
    tmp_tmp_msg_0_1.rf_err_vx = 0.42964370360460646;
    tmp_tmp_msg_0_1.rf_err_vy = 0.4411479400088998;
    tmp_tmp_msg_0_1.rf_err_vz = 0.8008470477698105;
    tmp_tmp_msg_0_1.ss_x = 0.9183095391367864;
    tmp_tmp_msg_0_1.ss_y = 0.30051833707193243;
    tmp_tmp_msg_0_1.ss_z = 0.2588936141433933;
    tmp_tmp_msg_0_1.virt_err_x = 0.12328812223842234;
    tmp_tmp_msg_0_1.virt_err_y = 0.9311656985133129;
    tmp_tmp_msg_0_1.virt_err_z = 0.9198241990985828;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_1);
    msg.plan.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EmergencyControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EmergencyControlState msg;
    msg.setTimeStamp(0.11193551644153232);
    msg.setSource(19331U);
    msg.setSourceEntity(103U);
    msg.setDestination(11744U);
    msg.setDestinationEntity(112U);
    msg.state = 26U;
    msg.plan_id.assign("FQWOHZPQHMVMZAIJEGZAZIHYMLGXYNPYVEZJLXOVZPWTXJQCBGWIEGPIFSVLJFIMUYBNUJMICXVNNLHBSDMRPKDRJBKAKQPXQGHIJNVRPCBNBWCNKUDCTTMFESKAOGHQUQYFIAEFYTASCQYTNLBBAABXWBUYOKAJUOAWSHTQUZLNPHVRPSRXWX");
    msg.comm_level = 224U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EmergencyControlState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EmergencyControlState msg;
    msg.setTimeStamp(0.47345958540355215);
    msg.setSource(64916U);
    msg.setSourceEntity(49U);
    msg.setDestination(42944U);
    msg.setDestinationEntity(123U);
    msg.state = 110U;
    msg.plan_id.assign("DZOHDTZDWUBGAJFPLPQUMWAVEGELGYDYRKIWJZKICVXAURYORAMVQGDBWXRNHEQICMAMAAHHOFTPJFKOHGEZRNCWBCDFWPZFSYSEVPQQO");
    msg.comm_level = 160U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EmergencyControlState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EmergencyControlState msg;
    msg.setTimeStamp(0.4497692128719968);
    msg.setSource(28852U);
    msg.setSourceEntity(160U);
    msg.setDestination(22713U);
    msg.setDestinationEntity(212U);
    msg.state = 73U;
    msg.plan_id.assign("FHTRLEJGIPKOGHEZKTKCXOVJHMZRMUMYLDSKVVAICQSOBUMF");
    msg.comm_level = 218U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EmergencyControlState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDB msg;
    msg.setTimeStamp(0.6991851642112096);
    msg.setSource(41725U);
    msg.setSourceEntity(196U);
    msg.setDestination(41476U);
    msg.setDestinationEntity(82U);
    msg.type = 182U;
    msg.op = 46U;
    msg.request_id = 41772U;
    msg.plan_id.assign("CKWMBMHCFQHVALFPICCFPYJABQNPJYXULSNSGTJPQSWZHDFMWDEHNMPBWEYESRIYZSBOCTITMOZNZKYWUSOSFBEZKIMDXKRXXLWDUFAMKRPFULIXJNKGPO");
    IMC::RemoteSensorInfo tmp_msg_0;
    tmp_msg_0.id.assign("OAEFYHTOORRKUTJWDPYSSOYUCTUALJFLYXYZKUVUMPKELJBSWTLZGNAIDQUSKZQBKMNVOXSYRMEQQPCMEXBCXLDFRVPLAMIREBMHWTPPGWTMQWHTUXGJIDAYGURBCEGRARZBOCKJZJGPNVDNYUCXEHVERSGXEQBMAJCAHSJFHWTKDMYYLHIDWINXVHWRVAXCPXFIBKPOFZQZOIFDPNWDVJFCUDFZNSQSOJBLN");
    tmp_msg_0.sensor_class.assign("PXBUJIBIFWXDDSTAEYMZUOOQBGVMGMEFRAWSLHHLCNQLSUEUJVYKKGGZRYIPDAODMWSHLCVUATQRITUPXBCJANTZCIRDTVOVQSLKGMFYYDPXMAGVDQXECWOYCEXHSYZYQRFBOJDVEOWHNFUODKIZMNBJWYEWIVKTFECMNCGJNSSLLBTHFLBKJKIXNKPEASPTTXMKXAFHVMWJQWANPJLKRNIVHAPEBWQOQPQLIZDZRYSUHGZTGRBO");
    tmp_msg_0.lat = 0.32473890066247957;
    tmp_msg_0.lon = 0.4147756070665607;
    tmp_msg_0.alt = 0.07118294987029916;
    tmp_msg_0.heading = 0.11394886233611268;
    tmp_msg_0.data.assign("GFVAEDFLWNAHUOZRMZBCTEBMTRHPZIKEVSZFZRLVONZGYMDTAUEIPAYZVCPWKEFSWXZZKTBJWPTOPLKGTYEARKKCVRNMQFS");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("IUSOJDFGJESBNAYJBTSPZKEYZJWBHLNLFZBPMACHDYFWGXAAXAVQJSUOFTLLJMPFILOYCIPTBMNGYKUPRHZDMHBVHVGUVHNXRURADTGWEVNXBPTQCERGQJLQLBFAIPCYQSZSEAFWTCWSNIYWEHECIKMKXOKFDUBVJVEISTMXHOWXLSR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDB #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDB msg;
    msg.setTimeStamp(0.7038162425372085);
    msg.setSource(16598U);
    msg.setSourceEntity(189U);
    msg.setDestination(6335U);
    msg.setDestinationEntity(127U);
    msg.type = 72U;
    msg.op = 137U;
    msg.request_id = 57965U;
    msg.plan_id.assign("HDGURROILVKPCHTQUFZHNOWAVUXCYQDWCRDTDDSYKWXZLTXUREGDUZRZBLTGFQMLXFOEEBTCSEHWBYRJYOTITSARPZRHHCJAYNIGQPMVFDQUJEEXNJCHMHUGFBHOIYIFXBSIWOPVUESBYNHQAYLNJDNOWWBJTJMDQPZMOPFNJAGXKEATSOGKVKXYDUPVAFF");
    IMC::Sample tmp_msg_0;
    tmp_msg_0.timeout = 18798U;
    tmp_msg_0.lat = 0.9539794033715167;
    tmp_msg_0.lon = 0.7154323793437072;
    tmp_msg_0.z = 0.9150496356188985;
    tmp_msg_0.z_units = 78U;
    tmp_msg_0.speed = 0.2906502025163632;
    tmp_msg_0.speed_units = 130U;
    tmp_msg_0.syringe0 = 121U;
    tmp_msg_0.syringe1 = 149U;
    tmp_msg_0.syringe2 = 220U;
    tmp_msg_0.custom.assign("WBSVGDQVFSKIHUWGPHQKWXZNSTBRWDXOABNLUQJDMXYDSUBHVBTBYFRHEVFOTULQJAIMSTBQCQZOKAEMJFUNLALSCDEAPFAXUCPEOWESRQEKLNWDXPDWRGYLVGKRRNVPUFMLOKTNUCNMFXYVJEEYYWHXOHJZJXGI");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("APSCVXNVZWGZUDKYKJJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDB #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDB msg;
    msg.setTimeStamp(0.3061582618182366);
    msg.setSource(50907U);
    msg.setSourceEntity(245U);
    msg.setDestination(17368U);
    msg.setDestinationEntity(50U);
    msg.type = 90U;
    msg.op = 233U;
    msg.request_id = 53346U;
    msg.plan_id.assign("CYQPLWPZKZBKJYGSOOVRMZYNRKBWK");
    IMC::CoverArea tmp_msg_0;
    tmp_msg_0.lat = 0.6268199446467448;
    tmp_msg_0.lon = 0.813795630516642;
    tmp_msg_0.z = 0.8355846054640106;
    tmp_msg_0.z_units = 107U;
    tmp_msg_0.speed = 0.44406252941354296;
    tmp_msg_0.speed_units = 105U;
    IMC::PolygonVertex tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.9693707263000845;
    tmp_tmp_msg_0_0.lon = 0.49203450766145207;
    tmp_msg_0.polygon.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.custom.assign("COMLMKTMFNYEHHDUKBAMLSRXTCDISVZCGIGWODNFIOOLUQCYWGFWFCEXRENLANYGRTJCQAIIHUCLKUNPJYFXLTBOZOTHNFPDJEEJVDXPXMOZEOTMOKDBWVXXBF");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("HNECARLCUYCSFTGLHXNUKYFDAAQCOQGMWVTBPKUKJHQW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDB #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDBState msg;
    msg.setTimeStamp(0.35043815370856857);
    msg.setSource(33089U);
    msg.setSourceEntity(181U);
    msg.setDestination(51448U);
    msg.setDestinationEntity(206U);
    msg.plan_count = 23179U;
    msg.plan_size = 3131939788U;
    msg.change_time = 0.34808036111980123;
    msg.change_sid = 51555U;
    msg.change_sname.assign("AFTJLFHDHXUZDRCYWASUIUYCSMEUTRZZJRLWLCXJXXTMMDWM");
    const signed char tmp_msg_0[] = {15, -127, 24, 11, -83, 15, 88, 12, -39, -12, 42, 80, 42, 104, -19, 29, 45, 115, -82, 28, -108, -117, -126, -108, 7, -97, -11, -12, 120, -111, -102, 1, 84, 50, -111, 113, -125, 114, -17, -86, -7, -87, -28, -35, -45, -74, -118, -88, -20, -82, -116, -83, -117, -73, 72, 50, 86, -108, -111, -126, 100, -19, 123, 46, -115, -64, 107, -28, -67, -9, 0, 74, -81, 89, -85, 118, 3, -54, -124, -51, 20, 103, -120, 16, 104, 110, 120, 47, 75, 88, -112, 79, 31, 66, 13, -8, 10, -5, -117, -65, -96, 38, 103, -56, -52, 70, -77, 55, -124, 77, 74, -104, -39, 88, 123, -3, 83, -85, -17, -74, -58, 126, -51, -66, -116, -73, 82, -77, 32, 2, 99, -98, 125, 48, -127, -25, 21, -24, -107, -9, 53, 119, 15, 4, -66, -115, 75, 121, 104, 4, 112, -108, 77, -85, -35, 5, 54, -3, -54, -53, -41, -120, 63, -74, -103, -10, -66, 2, -51, -60, -68, 34, -72, 4, -111, -18, -50, -86, 4, 0, 32, -38, -56, 24, 19, -103, 49, 67, -20, 66, -7, 46, -118, -50, -36, 77, -86, -113, 107, 35, -46, 95, 91, 73, 74, -61, -56, 19, -94, -69, -93, 30, -32, 126, 105, -79, 95, 89, -117, 48, -53, 63, 90, -7, 57, 22, 18, -103, 53, -77, 74, -48, 76, -50, 126, 26, 9, 52, -116, 122, 30, -111, -5, -43, 118};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("BJGXAENMFNPKKQWCNXCJQLBPLNBHTRBEZDMAEOIBRHUBKYKDCJZLVDVCSSFPJKLCQYESFVKQWOHHIXOOCTUMPLHITEWIVUSUTSRVVXFZVSLUQLQSQTDZEFW");
    tmp_msg_1.plan_size = 63562U;
    tmp_msg_1.change_time = 0.5172739565525116;
    tmp_msg_1.change_sid = 43577U;
    tmp_msg_1.change_sname.assign("ZADTBMYWIJZAUCWHVWQVTOBBMFSCFTKTUIRXHJNDHWBCVYMIRIMDQGOSSCHNVPRIJXLNNJMYPAIZWANFDOQDQUZFAFDZAIRUZRTBKKPPYPJVCGLPHQGQRUVYBEKCETIDZLSSBKNHELPWDJLSRGJOCEKOROJEGUSNMCMFLAEUTHFQYOFGQMJYNKEPRGNCAOZX");
    const signed char tmp_tmp_msg_1_0[] = {4, -3, 36, 33, 113, -9, -127, -107, 58, 101, 19, -22, -60, 67, -12, 57, -57, -74, -116, 15, 80, -71, 10, -94, 121, 0, 13, -5, 124, -75, 89, 57, 124, -103, 102, -88, 69, 96, 41, 96, 23, -77, 91, -64, -113, -44, 10, 50, 84, 51, 25, 77, -26, 75, -83, 108, -97, 32, -72, 33, 92, 35, -60, -37, 124, 4, 48, 62, 76, -126, 14, -84, -43, 46, -120, 27, -8, -56, 7, -54, -73, -6, 32, 16, 84, -11, 46, 50, 45, 0, -60, 49, -48, -80, 120, 120, 41, 91, -33, 120, -53, -18, -20, 115, -97, -45, 116, -6, -30, 39, -62, 87, -19, 55, -43, 18, 71, 97, -89, 34, -27, 17, -120, -70, 114, -85, 55, 92, -48, 34, 91, 98, -69, -75, -126, -91, -106, -113, 96, 81, 21, -117, -19, 117, -103, 24, -11, -20, 18, -85, -88, -46, -105, 71, -52, 24, -9, -32, 111, -36, -51, 31, 103, -86, 110, -98, -43, -13, -102, -17, -82, 63, -63, -87, 95, -73, -22, 13, -89, -40, 5, 9, -101, 122, -62, -27, -87, 77, 43, -119, -85, -108, 54, -7, 53, -108, -49, -71, 43, -46, -58, -104, -41, -100, -29, 5, -42, -50, -126, -54, 74, -34, 13, 91, 57, 112, -5, -42, -25, -35, -42, 117, 74, -31, 69, -74, 54};
    tmp_msg_1.md5.assign(tmp_tmp_msg_1_0, tmp_tmp_msg_1_0 + sizeof(tmp_tmp_msg_1_0));
    msg.plans_info.push_back(tmp_msg_1);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDBState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDBState msg;
    msg.setTimeStamp(0.01352389378138974);
    msg.setSource(31420U);
    msg.setSourceEntity(12U);
    msg.setDestination(45632U);
    msg.setDestinationEntity(136U);
    msg.plan_count = 50720U;
    msg.plan_size = 2254530069U;
    msg.change_time = 0.21701238508214904;
    msg.change_sid = 62547U;
    msg.change_sname.assign("PVYSCTOVOIONXUXJVQBEWLVFXPKUDWZXLVQOMTGJDASEIPQWVDNXFWLPZQAAMTTZGUEGFDCTAKENIXDIUORHKVVUBJKWJTKMH");
    const signed char tmp_msg_0[] = {-125, 50, 70, -53, 93, -102, 38, 38, -102, 47, 26, 94, 41, -91, 23, 50, 87, 109, -43, -6, 118, -10, -42, -44, -126, -92, -103, -65, 56, -96, -59, -120, -90, -65, -88, 1, 43, -100, -86, 125, -27, 1, -28, 97, -71, -32, 12, 95, 88, 105, 95, -90, 23, 9, 61, 84, 117, 118, 75, 111, -72, 44, 62, 44, 43, -53, 115, -38, 110, 95, -26, 34, -50, -125, -121, -22, -11, -121, 104, -90, -73, 59, 92, 60, -54, -15, 98, -106};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("JLTNELSKWFKMXVVWXRTKMIKHILZJGOKCDANBUFQABBZXELSLDWBVXNKKJFAYQCGWMPIRVMRSYWHESICPUPGUNZAXMURUHSXTHZIWZGUJVBQOOCRXOTKONQDFFYQVBJTDPEDCPHFSGRXVLEDUAHTLFQHYGZKFTNVUQUEHBKBCEPJYTOJEMLYAORALDDSIBPYJZJZHJRIRVCYGHLSBFAZPNADGOPQXVGYPFIQCNIIEWQOMRWYZOSCGWUMTDXMNS");
    tmp_msg_1.plan_size = 56036U;
    tmp_msg_1.change_time = 0.8531947146094622;
    tmp_msg_1.change_sid = 40705U;
    tmp_msg_1.change_sname.assign("MRMHAYSQEPDJTZKCGVGXXBBTVJRXTJYCHRRHFKTUCEKLCZUIZAOFQGPNVETYCLKYOGWQNPTXIRCWPEFAOFSJLGQSEBMVFZULINDOIWJOFEBIMSKCBCDDWQHXHVOLHMPUBRJGCVYUWYBWPSKSDNKQMQLMDPAXLMJIOXVSGTRQFELZDMOZAHISBUWZNYEWKKNGYUYUHIOUSJXGGCSRFWBXPAYIRIZTDQLR");
    const signed char tmp_tmp_msg_1_0[] = {56, -77, 30, 20, 97, 65, -85, -50, 57, 4, -72, -77, -74, -58, -55, 11, -18, -59, 18, -105, 124, 6, 98, -76, 104, 32, 121, -4, -93, 83, -50, 60, 20, -21, 29, 10, 49, -19, 2, -117, 94, 30, 77, -119, 81, -26, -34, -20, -29, -60, -45, 88, 86, 74, 96, -52, -45, -118, 109, -10, 25, -125, 25, 29, -24, 47, 59, 96, 106, 0, -14, 62, 44, -28, -87, 37, -56, 102, -96, 68, -83, -20, -26, -122, -104, 21, 103, -33, -96, -16, 58, 61, -100, -66, 67, -19, 37, 115, 68, 114, 59, -16, 60, 54, 45};
    tmp_msg_1.md5.assign(tmp_tmp_msg_1_0, tmp_tmp_msg_1_0 + sizeof(tmp_tmp_msg_1_0));
    msg.plans_info.push_back(tmp_msg_1);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDBState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDBState msg;
    msg.setTimeStamp(0.8680307089576185);
    msg.setSource(35755U);
    msg.setSourceEntity(230U);
    msg.setDestination(38530U);
    msg.setDestinationEntity(43U);
    msg.plan_count = 62160U;
    msg.plan_size = 210989987U;
    msg.change_time = 0.757590406704007;
    msg.change_sid = 56104U;
    msg.change_sname.assign("MJXZMFJHOBJSIKCSNVWENYEYEHORHKRLIQXUQZFJDLDWNTTSBRACCOEWRMHKGCVGHGFPSTGTRUDQCWSCXOWSPBFPDYOKYBHVKUDXZMAEPVBJWJLMGMCZBEIYZXISCZUEILIZHODSRKDMFRKIFAXQQVYJLTERPURTGUNUTGTNYMUNKHXBYMILPBANXWOFJVFZLHQJLGAQVE");
    const signed char tmp_msg_0[] = {123, -50, -46, 112, -99, 7, -20, 45, -91, -79, 61, 9, -94, -108, -61, 101, -95, -79, -10, -28, -5, -85, -103, 114, -8, -126, -92, 113, -3, 110, -116, -27, -123, -35, -15, 64, 96, -29, 87, 117, 111, 72, -103, -118, 65, -120, -83, 46, 63, 35, -60, -118, 88, 2, 61, 59, -45, -100, 14, 35, -27, 50, 85, -76, 122, -17, 18, -117, -44, 56, -37, -56, 44, -115, -19, 38, -36, 77, 16, -106, 56, 55, 100, -61, -32, 79, -53, -58, -124, 109, -48, 90, -61, 91, -128, 10, 27, 123, 31, -24, -102, 8, -42, 24, 41};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("FPOGFKXOZWPTXDGEIMKHZYHOQRLZSCCWBAFOIMZELHWFTXFZUNNQANJWHRVUSXVEZVBBJNANARJHEETKSLOQUHDVLZXGJUOQCQGVQFYNSCIDOOKYFCGAAIPRYGCAILLVDKZRJBRPWCSWLJTZEHBSHIBEGJNMCIIKFP");
    tmp_msg_1.plan_size = 38568U;
    tmp_msg_1.change_time = 0.12598544574725168;
    tmp_msg_1.change_sid = 65156U;
    tmp_msg_1.change_sname.assign("DSVYNTEPFFPKQMEMYZDKRBOGXTFOUWTNSVVUHLYHYTVHBNGNWRNMNCUQEOJFOFWDEKHWHJFEXPZDSXYNROIGQAUDGOQBJKTXWLFCBLMVQMTECZZTWAARAMNSKMVPLZYIPLRMHSQATEZFJPUIZRGQPJCOCSCAMBLVGGIDRIIXISJGWYBUXPDIPWAVZXDDCOAHYCBFYXHKMFELBXXPQUWQKLLRJIVSCS");
    const signed char tmp_tmp_msg_1_0[] = {-55, 10, 107, -22, 103, -45, -18, -64, 110, -58, 59, 91, 48, 93, 78, -89, 82, -8, 54, -29, -53, 93, -76, 38, -82, -5, 110, 21, 101, -7, -125, -29, 118, 54, -70, -97, -25, -122, -51, 98, -112, -95, -55, 64, -12, 13, -127, -94, -96, 62, 119, 93, -52, -13, 11, 10, 24, -11, 110, -42, 81, 90, -64, 67, 112, -110, -12, -120, 16, 110, -47, -118, 1, 12, 95, 114, -64, -55, -3, -98};
    tmp_msg_1.md5.assign(tmp_tmp_msg_1_0, tmp_tmp_msg_1_0 + sizeof(tmp_tmp_msg_1_0));
    msg.plans_info.push_back(tmp_msg_1);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDBState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDBInformation msg;
    msg.setTimeStamp(0.7123269574068051);
    msg.setSource(33989U);
    msg.setSourceEntity(88U);
    msg.setDestination(31794U);
    msg.setDestinationEntity(119U);
    msg.plan_id.assign("OWUISRKDYOWTOVUNRGWXJNZCTTKVJFWGRVZDOUOVXMGDMQSQNFIEIJJRUWNXYPLBUVAZLXAEBWQCFIMVHNXNBMRFWNYTDAMCGXGFLRHRGKPYSBEXINMQFCFOBMPLGRGZLCYDKHCOUKYKVXRBCKPEDNIPLATJHDYYJHPKVWSJODIBTJEPSZYTMUSAGHTHXYQSMBILQQSJIKEDLAAUSWMZEHFZK");
    msg.plan_size = 13122U;
    msg.change_time = 0.5591205634142419;
    msg.change_sid = 50828U;
    msg.change_sname.assign("BAWVLGDLONBDDRRIZHSHLSTFNVKQOGGBMTAQEYXXQIPMMJ");
    const signed char tmp_msg_0[] = {-77, 111, -71, -97, 116, -74, -74, -64, 83, -34, -54, 86, 62, -30, 40, 110, -53, -13, -48, 108, -73, -78, 122, -12, -116, 124, -73, 4, -21, -41, 124, 91, 109, -114, -41, -67, -33, 109, -30, 47, 13, -66, 120, 4, 125, -56, 28, -32, 47, -65, -112, 110, -44, 66, 33, 1, 108, -58, 31, 70, -60, -46, -61, 88, 28, 106, 7, -48, 24, -114, 38, -8};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDBInformation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDBInformation msg;
    msg.setTimeStamp(0.6103475433478484);
    msg.setSource(33187U);
    msg.setSourceEntity(65U);
    msg.setDestination(42193U);
    msg.setDestinationEntity(3U);
    msg.plan_id.assign("COYYYIFLEOUBWYRNBRBXYEOUCKCPJRXCWTVONSHVNCIEDPCMDAYTGKTNVOCJKEJDYJFVHKQFCFZDXKTHTRNGZKZDHBHGXDIHMDGJIAGMQZEKSNIRKQEWROOVYZQBAJEVQRLWAQZPXGQJWMVOUMKIDATWAJQLRSAN");
    msg.plan_size = 26327U;
    msg.change_time = 0.3408294714751008;
    msg.change_sid = 65223U;
    msg.change_sname.assign("YNVCIHVZDBPIEARMAZAYOWFVJNJJYSPAXCFOZQMQTSPOAOJNGZJLJQMWEHKZBWKIXUEUMUCSFBSOXYJLHLFTYBQZVNHBBPDIXSYONERMHBPFRXSRUPXVIEMPIDWVBSL");
    const signed char tmp_msg_0[] = {-97, -65, -101, -118, -9, -47, 96, -9, 61, -122, -78, -82, 10, -64, -105, -23, -92, 117, 47, 93, 94, 2, 25, -32, -98, -1, -21};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDBInformation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDBInformation msg;
    msg.setTimeStamp(0.10223711075332897);
    msg.setSource(34965U);
    msg.setSourceEntity(201U);
    msg.setDestination(27403U);
    msg.setDestinationEntity(116U);
    msg.plan_id.assign("ABHXHXXZCYWXBHEDGSXVWFKJEZRGADDOVGDZJIUALFIYPUXUAIB");
    msg.plan_size = 5348U;
    msg.change_time = 0.5691128130055932;
    msg.change_sid = 3254U;
    msg.change_sname.assign("QFQLZBLMSOGHPNYNGIQJDUUBIEJZEIUXVXOORH");
    const signed char tmp_msg_0[] = {71, -54, 23, -19, -102, 37, 63, -27, 121, 85, -117, 92, -34, 64, -89, 121, 84, 68, -36, -4, 76, 58, -5, -111, -104, -124, 75, 33, 23, -105, 97, 72, 56, -42, 103, -18, -95, 26, 29, 60, 24, 70, 47, -28, -38, -28, 81, -60, 108, 47, 102, -114, -67, 26, 2, -110, 13, -89, -80, -85, -14, -24, -42, 51, -103, 56, -32, -91, 28, -16, -119, -30, -18, -2, -83, 121, 69, 32, 126, -104, 103, -68, 15, -37, 87, 112, -111, -114, -56, -83, -22, 102, -101, -82, 61, 51, -12, -54, 79, -63, -21, -30, 32, -36, 124, 59, 126, 12, 121, -6, -97, -35, 117, 34, 103, -76, 2, 25, -23, -86, -69, 13, -121, 17, -115, 78, 101, -16, 117, -31, -79, 37, -2, 70, -4, -95, 45, -3, 116, -88, -6, -71, -109, 9, -48, -120, -21, -30, -117, 25, 18, 4, -98, -39, 116, 14, -21, 109, -110, 100, 5, 95, 56, -45, -6, -43, 126, -125, -10, 51, 95, -8, 35, -38, 31, 23, 113, -81, 52, 121, 82, 107, -33, -19, -47, 0, -33, 8, -38, -38, -23, 70, -54, 40, 121, 107, 41, 37, 38, -97, -116, -40, 83, -115, 58};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDBInformation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanControl msg;
    msg.setTimeStamp(0.22716544296129326);
    msg.setSource(64374U);
    msg.setSourceEntity(192U);
    msg.setDestination(64444U);
    msg.setDestinationEntity(143U);
    msg.type = 60U;
    msg.op = 240U;
    msg.request_id = 19172U;
    msg.plan_id.assign("UIRTFNBOIJBGBDMQBXGWPCVFKXVENKEUNTDYFPPPYVQQJOEALTSLORIBTCXKEZCOXMFVGSVVMHKWZACGDPKJMDURFMAWPLQG");
    msg.flags = 16908U;
    IMC::SetEntityParameters tmp_msg_0;
    tmp_msg_0.name.assign("FXMJUKVCVULDTEEFOMPAQUUGCOIAOXIQIZHKYZGBWVAZHDNGOEYXWVUXBIQQCSBDVKRAXYWHGJCCCSVOJBDBJDYJKHCJRVHLWPPRZFNPKOPLEMGWDMSQMZPYKSTEUEGGCIFINMYTRBJTRPCNSSWDQUMWGZHMNOFEAKXISULYIAENAFHRFPRX");
    IMC::EntityParameter tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("LQNTLZBFVWKMSUQHTEASDEREBHXEERCAVJWPRXZGMYITLDNTOWXDFLMTOLGIPZNDMVKGNUWSKQVWWPXTRZHVHQZCDHOPXRJGXYKUFUDOOYQCTJLNEIKVRAQHFWMVTKWPMOKOCM");
    tmp_tmp_msg_0_0.value.assign("HCBLVXKQFROVJKXRARMCDEGLIPJNXIWMZDTOYFJVTDWZLHWFHNUPQZHKNRKYDEBITBYGZGUCEFSISWOBPAMGJGMQYMXKNMJXKOPCGKXUDYDIIHTAEUCXQCQPZCZOSGJDVUJYJMLRFNXJSHLCE");
    tmp_msg_0.params.push_back(tmp_tmp_msg_0_0);
    msg.arg.set(tmp_msg_0);
    msg.info.assign("QVTWOEZAXYSRLBCWABUZUZBXWCWBBNQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanControl msg;
    msg.setTimeStamp(0.020003547603833605);
    msg.setSource(14437U);
    msg.setSourceEntity(49U);
    msg.setDestination(53957U);
    msg.setDestinationEntity(95U);
    msg.type = 65U;
    msg.op = 74U;
    msg.request_id = 17665U;
    msg.plan_id.assign("XQEROALEBIZDHQDUPHMGZDOOLLJLBSUZRYBGLHHSIMIGNBAVCSHMELNWGFDTTERSPOZGRJQIVYNHPADPTDHUYWNWZRAHIBJPUGKBFDPLFKQVWWVCGPDNXVRTRTFMGPJUJOAKCCFKASYMJNGWLLNMJ");
    msg.flags = 17102U;
    IMC::PopEntityParameters tmp_msg_0;
    tmp_msg_0.name.assign("FTXGLWVMSSLYQLLYPSORRLPYPKKOMZZLZSVCNCTMWIXRECHBJQFUWYBSIMCWHGQAVEWXKKQMNIEYKVFOAQUTURGOBFDONLCNIHIGEDXOXNWPDDJSUPGEDDZJRUTEPMFJUEKVOCRZQFTRDYBAAICPZSWQDOGHZSAATIEEPBWVQIXAJTQBMHRFTNVRUUOVKJFKNBI");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("OERXFVBVGSJVMKUFNDDQRACUOGMIJXWEELGSZTUZEFEHDCIFKYHTMJVPAJXVZLTBVHNBHIJFNAKGBTELFONQCUISPLUYALZZUEZGYNMNOWRWPCVZQRHGBTLRBFDQFBYAJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanControl msg;
    msg.setTimeStamp(0.972872995033044);
    msg.setSource(61705U);
    msg.setSourceEntity(235U);
    msg.setDestination(51036U);
    msg.setDestinationEntity(36U);
    msg.type = 22U;
    msg.op = 161U;
    msg.request_id = 52598U;
    msg.plan_id.assign("GGLJHWUJQFOXEFOZPKNHVRHBUDIFVMDWNVBGVMELVRQXCDYRJQITNTPUGIDONSEPHNFCJZHYNWZFZYIWWEMNVSKPTBYMAIMUBUSDKALKXXOYMAWCTVDHCCTJEYHYEHSACRQ");
    msg.flags = 29470U;
    IMC::Collision tmp_msg_0;
    tmp_msg_0.value = 0.1776341871916043;
    tmp_msg_0.type = 89U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("BILGRFPMTTORKETMUBSDQBPXZZUKIHWBPRLNYNAOZTQHQZAPSOLLWGSOBCJDXDMASFXNQCJJUHYVVGBMEPYWERVESKBIYICYVNHRORJCTBVDUPWAAFMZYMEXPHPJNYFZHASJVCGOUYHXKXSOD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanControlState msg;
    msg.setTimeStamp(0.7194909738394816);
    msg.setSource(28793U);
    msg.setSourceEntity(33U);
    msg.setDestination(1527U);
    msg.setDestinationEntity(199U);
    msg.state = 79U;
    msg.plan_id.assign("SPKZYZBUTADJRVVNUQBZKTNSWQLPETOKLODFIHZMGXUEKODENWWFYDGHMOAWQHUVSOMERTUGWRFHODYQGDELTNMVFMLSWPRXAIKPRHFCFYCZRMJIHVSHJXTSXRVUHTE");
    msg.plan_eta = 1524367408;
    msg.plan_progress = 0.9809132680377284;
    msg.man_id.assign("NAKZZLZOCEWSTLSBKPAGQHJEXAYVSCQIDWZXIKVTLJRCWUPVVTKGHOKOEBNEDMWRPWIFPQSYKDYSBIVPUVFQVFSFQQXXXQQTKRXHNGBZXLLRYBVATCGTVSOZEIALJMEPKIDBFOJQIARWFDCYMOGDMZMHLDPOGJNMSWBFLOUTGVGBPJPNONURFEZKXMWYHNNCBDTLMWRAYGSZYHRMYMHEEUEOYXUCUQFPZLRKAIHRCJI");
    msg.man_type = 30976U;
    msg.man_eta = 465362924;
    msg.last_outcome = 126U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanControlState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanControlState msg;
    msg.setTimeStamp(0.5994905518138006);
    msg.setSource(41439U);
    msg.setSourceEntity(179U);
    msg.setDestination(16024U);
    msg.setDestinationEntity(153U);
    msg.state = 32U;
    msg.plan_id.assign("SZBKWBFPZTFHCCDAQWONQSZAPZQUCSIVWBMFLDXNLJLRMENZLQRSNJRTROSKFKEMUGLRJAVVIGACGVJWGVYWDNRFBINFEOXKWWAYFTHOGZYJUKIPLTTYUEJPWTLPZJBESXMAGPZHNCEQZUTPQEZUMJRHVUSIISKORXAYMKHFWEAQFCMIHIHUNNWBXYDGLBDDOCGDRGMCBJDJVUOXGAEVSDTHQFAVYDCOMXTKIESQR");
    msg.plan_eta = 1882635019;
    msg.plan_progress = 0.08437374182181434;
    msg.man_id.assign("CGLFNGEIUENZJBGBOKCUJLVUYHBLEYKAZVLDUNKYTWKSRSCMJKDFNUYESPXOYWOBUQKJWZQKHYLRISDTLOFCAREWUPJJHWAWTDFHEEYKOFZGKGSMWPTMPDFVTQPBTPRM");
    msg.man_type = 981U;
    msg.man_eta = -1892537428;
    msg.last_outcome = 56U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanControlState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanControlState msg;
    msg.setTimeStamp(0.951284525174827);
    msg.setSource(6344U);
    msg.setSourceEntity(63U);
    msg.setDestination(41116U);
    msg.setDestinationEntity(133U);
    msg.state = 24U;
    msg.plan_id.assign("ICYCFYUOOVNDRPSUTTZINMOQJZYVTKHDIPKFPJOQBEEUVCYUEVCNBMGSXGCLRWQXNHBJIXZARXZTQESHIYIBNIKMDPQSBXGIGHPJDSONUDTAPVTLARMOBAGQYAZKPLQMUKLYLNYJFDCUKGRFEQWWVWGWLIBHKRFCFZMDESEAJXDTLVUOJVCPMKLHWHDMJCAMNWHHRKRWZJVRXXAVIQGNWMDTZRCXULQSOEBYPBOUSSWFNHEGYJ");
    msg.plan_eta = -348257854;
    msg.plan_progress = 0.32064514730615745;
    msg.man_id.assign("ZMYDLMPVBAJRNVDNHZJVHELDAZPJUEGNUZJBAXCBCZQQCHILLATRPB");
    msg.man_type = 51705U;
    msg.man_eta = 1802760374;
    msg.last_outcome = 99U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanControlState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanVariable msg;
    msg.setTimeStamp(0.410400842813225);
    msg.setSource(4678U);
    msg.setSourceEntity(196U);
    msg.setDestination(1278U);
    msg.setDestinationEntity(21U);
    msg.name.assign("TPRXSTSGUKJWBWVWVLIGAMPQRVENCRJYEMASOTMRBYQL");
    msg.value.assign("LSKWCSYYTFGHIPRIBRTZJALVWKNJRBIWWZINXPJWCNHRUPQMOKGAOJM");
    msg.type = 26U;
    msg.access = 62U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanVariable #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanVariable msg;
    msg.setTimeStamp(0.3554710533985085);
    msg.setSource(15917U);
    msg.setSourceEntity(86U);
    msg.setDestination(62491U);
    msg.setDestinationEntity(179U);
    msg.name.assign("HSYPBSNVWILMAOPGWKFIGYAITLUPHIFETLZXONHXJNLBXXKKCGLB");
    msg.value.assign("RUPDOTJMPMIZIQINIWBWFUTGOZMDBCOFEMNZFWMRLVGSTZDZIBVOADNSUWBEDUIBKGLZWEKXYOOCPYYHHCXAVMAAQWHVXMQAFQCLNYAYPWNVHGNXZJTVFGJJCVQMHSAUCZDDFLLPTZSY");
    msg.type = 244U;
    msg.access = 188U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanVariable #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanVariable msg;
    msg.setTimeStamp(0.03623090123186112);
    msg.setSource(34342U);
    msg.setSourceEntity(71U);
    msg.setDestination(34263U);
    msg.setDestinationEntity(43U);
    msg.name.assign("REYKYGNFDJDOJQIXUVTNGFDOZOAPBOCYHEUIWCNQCXPLLKZIXFXVCYICACIWHYPWMVHXDHPTANSEJAVZXRTKTWMKQYOEQPMBFKKBQFXYJGAAXRFYYQVLLDZZTONLDXFMRPSWMJRBTJRMNHBGKASHFWLKUIMPZUJKIVJUAPMIJOOZSEHNYALTGNWRBTMTQPDBFVGWCTXUSESWQLSNEFVVEPUIZCELVLHUR");
    msg.value.assign("BDIMCTGKECJGWTERZRUESHUAHEAWGFFPMVWJKJJIPUGLCHRFECRGDJALFKUBXUOMCSYQMUVTXUZPXDOTZKKHUAHQNYBPXJSYYKLBDJDNHPPRNXNQYMIMWRNPZTWCKWAYVQDTNEIFKYSIK");
    msg.type = 206U;
    msg.access = 125U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanVariable #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanGeneration msg;
    msg.setTimeStamp(0.38718826058775524);
    msg.setSource(33113U);
    msg.setSourceEntity(134U);
    msg.setDestination(12718U);
    msg.setDestinationEntity(184U);
    msg.cmd = 102U;
    msg.op = 239U;
    msg.plan_id.assign("YWGQRELMNGXZOTQJHLSXNUZJFEJPDFNCQTUKVHPNQWJNTDLNQYBPFYUXRBLIJJXOFCBSCDKNXADGONDPYZLHYSBQUVQFUBFELUYZPGIRAKVOERTVAVGKHCYICBAVL");
    msg.params.assign("SVSRZVYTZIIIPBMEUCGATZMKQSRTYEGQBUNOBWKDUYTNSMORBOSFAFHHOPKPVUQDCWMWBTARAHVGDJQOLCOFGECFMRBNJHWQMZXSTCPCPUXDOKXQM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanGeneration #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanGeneration msg;
    msg.setTimeStamp(0.25768521662556654);
    msg.setSource(2806U);
    msg.setSourceEntity(114U);
    msg.setDestination(22299U);
    msg.setDestinationEntity(7U);
    msg.cmd = 95U;
    msg.op = 41U;
    msg.plan_id.assign("UEIKSYSZJXTXVVZBHEIMBDEVCTLRBKNUTDJRANCZRGPMDSOPAPGJAERGOWM");
    msg.params.assign("OSLVGVBAOOSTPJIMHKNRCCVYLMDMDRITEJAGYIKKEKBOFLTWWMLHTCOYVXSHVXLWSMEATFKWJFGHHERDZHPFYBFNHLMUYUCOPPAQTDVUCUUNHRDRHTZUCBNJXBGXALZPOSAVAEGPJEPTKNMGPFNQPOUQGTYWRIDSHSWZDADSJIMWU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanGeneration #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanGeneration msg;
    msg.setTimeStamp(0.5229958223519624);
    msg.setSource(8517U);
    msg.setSourceEntity(193U);
    msg.setDestination(52034U);
    msg.setDestinationEntity(125U);
    msg.cmd = 148U;
    msg.op = 42U;
    msg.plan_id.assign("BWAMNTBENIDSEDNETOFNBEWDKPZSLVABUVOGWMCTILNQOHARBGOXSXRCXASAWZGYASCDXSPZVUHVFLOXAIUYIPSUMPQXZGOHWJFMFJJGCBZGMHALCQQHBEITKKUWKMMOFFKJLRUJVHZVDX");
    msg.params.assign("CDYAMCKNAINLHQGNCSUIFKXHFOIAIKODZLXVAJGXQSRBZAPQAHLXRMYNTVUPSQYDGDJALWZATEZPWDZGNNYFOAREFOYVSXERPTXUEMMUHMCBVRCWJPGCPBXORWBFXGUVOJETCQSQEYLUJMMVKLAUNJIOHTNNMRUVSWZTGYWVNGOZXKRROFVUHITSBKBHQFWIFSKUDDMLPCQFHLXBVJKLIZEJYYCEEHYFDPWISQB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanGeneration #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LeaderState msg;
    msg.setTimeStamp(0.9616946848835494);
    msg.setSource(51295U);
    msg.setSourceEntity(207U);
    msg.setDestination(58708U);
    msg.setDestinationEntity(39U);
    msg.group_name.assign("SAVDPQQAPXVODUXEUVZOLKZWLGYCSFKJVWHYKUBMBIXEHWCTNTOIIRPZFGWACQYEGVZDZGSMHBQCC");
    msg.op = 33U;
    msg.lat = 0.788119548165603;
    msg.lon = 0.9997840453744622;
    msg.height = 0.7224489059260338;
    msg.x = 0.3471815863980293;
    msg.y = 0.44563254614859005;
    msg.z = 0.27593714670262315;
    msg.phi = 0.9583779303126081;
    msg.theta = 0.3699182722434393;
    msg.psi = 0.6954831837619354;
    msg.vx = 0.6192790784650615;
    msg.vy = 0.6426656104053795;
    msg.vz = 0.406639134716419;
    msg.p = 0.2908653940053155;
    msg.q = 0.03796161062767389;
    msg.r = 0.8944273258509938;
    msg.svx = 0.6778266852958575;
    msg.svy = 0.18657949475559166;
    msg.svz = 0.38011504452607814;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LeaderState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LeaderState msg;
    msg.setTimeStamp(0.5384786554874328);
    msg.setSource(2873U);
    msg.setSourceEntity(15U);
    msg.setDestination(46922U);
    msg.setDestinationEntity(102U);
    msg.group_name.assign("PGTBVVZCGMPFDXJWGYQFMAZITUOHBIKSYKEXWBSIZERZGMOWLXKYIUEJLGPQHXAEHKJJLVYSRYOCXUOCZMXZDXOCKCVVAN");
    msg.op = 76U;
    msg.lat = 0.3705573236934695;
    msg.lon = 0.24335054162196468;
    msg.height = 0.06614733625521618;
    msg.x = 0.1440297045809119;
    msg.y = 0.4666361982498096;
    msg.z = 0.9235601810383223;
    msg.phi = 0.48715566530676546;
    msg.theta = 0.29725899240976383;
    msg.psi = 0.19357432629211402;
    msg.vx = 0.807325600637655;
    msg.vy = 0.7038024625227439;
    msg.vz = 0.3079094606473979;
    msg.p = 0.9138902125477486;
    msg.q = 0.6983226133097866;
    msg.r = 0.33938526930926793;
    msg.svx = 0.6343294553380588;
    msg.svy = 0.9981134889026481;
    msg.svz = 0.8566550281337957;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LeaderState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LeaderState msg;
    msg.setTimeStamp(0.16224158863115234);
    msg.setSource(26002U);
    msg.setSourceEntity(36U);
    msg.setDestination(33230U);
    msg.setDestinationEntity(149U);
    msg.group_name.assign("KNDBPCSHDLRPEAQJTDBYLNGXZNDXYQFSDRXIYUGOPCIBSHMXEFNCNLXCJTZHFUTJYOEQXQEMWEJDJGEKOUEYTXFUIGWIWAIHBZHUVNKVXNOAPGCYCRKAUAWOIUXOZWLLQVVUKLZPAQBBHGVPIGHFJSKMTQFKKRSVBQRHHJMPBYXZGUWDBL");
    msg.op = 60U;
    msg.lat = 0.14148814414668975;
    msg.lon = 0.7036027203530775;
    msg.height = 0.7590705382681548;
    msg.x = 0.7699237811161276;
    msg.y = 0.05478869355860927;
    msg.z = 0.2649221983454044;
    msg.phi = 0.8467525474797145;
    msg.theta = 0.9574341553061315;
    msg.psi = 0.038840025577508985;
    msg.vx = 0.8192573447267771;
    msg.vy = 0.08187106301709501;
    msg.vz = 0.0004187618938875648;
    msg.p = 0.5536232498637133;
    msg.q = 0.051380618456056015;
    msg.r = 0.3585229137486714;
    msg.svx = 0.4959194853523545;
    msg.svy = 0.16345768395516735;
    msg.svz = 0.3306848166558719;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LeaderState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanStatistics msg;
    msg.setTimeStamp(0.9529382399021736);
    msg.setSource(49131U);
    msg.setSourceEntity(94U);
    msg.setDestination(50137U);
    msg.setDestinationEntity(85U);
    msg.plan_id.assign("RLILETOOKFLQBQRBRNAEWWWHVTVUGDZEXQEYPGVSVZSWQPHJZMEZERINUEHJXHLNNVDPMXAMJJMYDHFGWZBGBULYJPBQZFXNJRMWUEIYEHWMOANGBUTSFOKJNO");
    msg.type = 40U;
    msg.properties = 53U;
    msg.durations.assign("PHKMXZZNBTVQOOPRNOCGRMPIKWKQGWUPYWEMBCZMRCJEVTVDAOVATYHEBQYNQLWLSEMCSHKQQXHIIGBUTWHHBJFVXUKAOCTFDPZJNJAA");
    msg.distances.assign("XVFSRRVOPLOQTLGYSKSDDJQHKJFYRCGHLFJWDNPPJYNDHXQUHUVVVEOZQWTZTPGVTCTNHKBWHPJFLQCUQNGFTKKJSBSAIAWILKTIURGOMWSUYRKIWSXMZDFAAMMVPCDNEIEUYERCLCNH");
    msg.actions.assign("RAQKZBYBSSEUWJRJXWYJWYDBMCPVSPCWCRKSYPTXVGQFZXZNXOUIBUQYXUYYHGBGSIVSHILEBMRQRACAHKVMQSAJQDWZAFMLNTUTZPSRUFQVORJUYJSXLOETRPZKICDOAYMEGKQHBLGLOIILMG");
    msg.fuel.assign("VWUGUFYPKCGUCRCZDDVQTZFSFGZROJKUIAHNOIPMGIOIASVVSUQGQTLCTJYPJOKKHTARPANPDDPKLQUCBMJPXTMUCLGAPONIRBDHHONICYSFJEXAFCLEPDJSBSRHDGJBYQCAXEDMANWFMKQFEBFZSLVTDEWTBWKVSHOIUQUSEXWBNY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanStatistics #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanStatistics msg;
    msg.setTimeStamp(0.0019123703729846397);
    msg.setSource(46386U);
    msg.setSourceEntity(161U);
    msg.setDestination(59408U);
    msg.setDestinationEntity(104U);
    msg.plan_id.assign("JYORXLPUUXRBICBLWGEONXQXDEPVDHYVTMSJOHPICFQRLFCEBAGKQAYICGVGMWJEZAOULVBWJVHSBZFHDLYTAXYLTFZDYUHKWHFWRIMFWVXQKAWRZMNIZNTNYBYYVODZGZKOJZDGWAHBEPLJZKQMXKNYIMNVPSPDSEETCNPVUFTJJLKDRNHQGOTGPCMUWHOSRILSMRRDTKTQTEFQISHGVINCM");
    msg.type = 136U;
    msg.properties = 164U;
    msg.durations.assign("XVSHQTEBMQPQJSHXILBIKGYVFJNGCBEPGLDBJCBRRU");
    msg.distances.assign("ICMAHWVZDWH");
    msg.actions.assign("RARKSIGHPAMJCCLWFRXBSTLWAUKNCHIMFENIAQHUEZLRXEECGANKSRIEUUJDGPQIONDCDCSELVOVWZLNDGQKSBYRXCRJLLDVFNKQGKGJVPZWOBYYWGSYPAIEVB");
    msg.fuel.assign("ZCRNTMBPFXLFAJGBOHPLFBKQQODGIXADFOQIFNPZSKRQHYZGKVSCMGMSQUOAEOEUAEMGRDWWFICPZFSHPZKRNGUCKJYBUCCPHTRNIHPROGJXZYLXINNMGHLLXJLRWKE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanStatistics #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanStatistics msg;
    msg.setTimeStamp(0.9128671745825029);
    msg.setSource(49952U);
    msg.setSourceEntity(221U);
    msg.setDestination(60571U);
    msg.setDestinationEntity(116U);
    msg.plan_id.assign("XDZVPDNNFSTMIJJMOLDBJZBFFNISTCSYUVUXMLCUYESRVORHWBPUHHQCHNMMEDTAEVMZWBXWGFHSRJGGCSFQTDOCCQXGGRKXNHMKBEUUBNPQUJGEWMIXUGGWAKQTIWPOBAPFAXZT");
    msg.type = 182U;
    msg.properties = 63U;
    msg.durations.assign("YWGOAKIKALHLZGOALZISJQCOSMBORUQFPZNRANHZPSQFCHNVFLYEXBXOSOWEKDJALDRZQVETEPUHHPMPTKIVRXYBKGEXMVMLSIWQUDGZCDLVIVWFJWVRIGCASHTXTSTTNUMYRSI");
    msg.distances.assign("XQLNGGCBQKKDLVKZQSORFPHYANUIREDWRIZOQBTYDFZJOUUCQKGEPHJPEDCBUTWBHPWMOWFNCFCQSMRIFLMIXZRUYCYBAKVOKYWOGPSEMFBRHRGFAHEXAUDZGSVHJEWLGADNIHYAPGPPWYWRJARSLEQDLXFXFHBCNOIGBPJOMANVEUOMTNCBRZLHJTTQEJYBTJSSVNQSNIZXLKMNUCKIZMYHWXXCT");
    msg.actions.assign("XEEOKJSYIOKQNKFVQBTGKREUZJYVZSEZRZRNUUUNTMEKLGDUKOLQWAXSJHFINPGYCRTFXXMSWNHFNHJTLPVUWAPVFJCNDJYBRYLRPHYTDZWDOVMLIVGXXBRIQEEEULVXCBLCSKRMWQJLOTDQYYRGGPAESXNFGVCBTACAJWVZSSHIZDAAHTYKHCPAWFUQCOQZIBCJWZPIJEMPLPMWMGDWBMKHO");
    msg.fuel.assign("EPXXGFLSEYSHNICEUVIFAWZIAMBSMDPOBLEKISFGTACIYFDFVOQEIWVGMSUKXTLBAJQZQUWVHDSYZNJIEJOEKGMLEJGSFJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanStatistics #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReportedState msg;
    msg.setTimeStamp(0.6595612345484984);
    msg.setSource(15518U);
    msg.setSourceEntity(121U);
    msg.setDestination(23495U);
    msg.setDestinationEntity(64U);
    msg.lat = 0.33651234269132557;
    msg.lon = 0.31800551789937836;
    msg.depth = 0.9745140047237136;
    msg.roll = 0.9898069085522111;
    msg.pitch = 0.9213441043016269;
    msg.yaw = 0.7639419062867997;
    msg.rcp_time = 0.3174235920877334;
    msg.sid.assign("OGKJFOPHUHXFLVUDPZBWLPZGJNJGHJOHUTRKCLOKOWQABGWDTMERQFNJVNMCBIWRSPKZQVXMTJWWLNAJHWIAVQXCNQRBGCWRNZDBLUSDHZYVAIADROSCKRHGEYVPIBXSIBCFUZYIEECWYYERZPQLQDALIFTMXTHQTUEEMNSQVUVXFOMSWYMKIKAMOBMC");
    msg.s_type = 101U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReportedState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReportedState msg;
    msg.setTimeStamp(0.28276228428465267);
    msg.setSource(3230U);
    msg.setSourceEntity(122U);
    msg.setDestination(48345U);
    msg.setDestinationEntity(141U);
    msg.lat = 0.7795571209806914;
    msg.lon = 0.14936831091344538;
    msg.depth = 0.34759195795295805;
    msg.roll = 0.19570384351244619;
    msg.pitch = 0.6364066390735128;
    msg.yaw = 0.146273621780608;
    msg.rcp_time = 0.6616767438823231;
    msg.sid.assign("FLMQPQBGMKCIZZCEGUUNYTVAVTWNHSSECFSOJYMXVXWSQDDMJQCPZINOUWGOLEFPJAHAMHVAVOFSZQBHKKZBKEQVZPKZNGBEPOLAXDZOWFACLTUYXTIIXBJNARGGJIBKGGXPUHNYTYWHVDRRQSBNYVTI");
    msg.s_type = 224U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReportedState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReportedState msg;
    msg.setTimeStamp(0.40514460483148806);
    msg.setSource(50972U);
    msg.setSourceEntity(184U);
    msg.setDestination(18766U);
    msg.setDestinationEntity(103U);
    msg.lat = 0.9372741292464719;
    msg.lon = 0.3263949035518512;
    msg.depth = 0.41190567560905655;
    msg.roll = 0.5670818077428669;
    msg.pitch = 0.13565605348787735;
    msg.yaw = 0.4939209561973221;
    msg.rcp_time = 0.5251549008444073;
    msg.sid.assign("VCQEKOFJNCFYIYRDTYFCPNWGUZSVXGWTWAQHSWWBZCHTMRGVHYMIFUFYUBKKVDFNJRAPGKSMORDJLTUTPAXRCAEVEHLSVJSHXQCANLCRNLJSXMLICUSOEGOIOZUABXAWXUNHDZBTXYGNMWIPKMLZWGOFNLFBSYDSBXREATVMBOEJREQBZPEZLLNKIMZKPKPINPUTHIPYYOJWJGVIDKQGMRQJSDWFDQQCAJOHAYFGOBQBHX");
    msg.s_type = 37U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReportedState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteSensorInfo msg;
    msg.setTimeStamp(0.7507466263710016);
    msg.setSource(41499U);
    msg.setSourceEntity(21U);
    msg.setDestination(54637U);
    msg.setDestinationEntity(218U);
    msg.id.assign("QAEJGTIQPJSMXTMCKVSRACYVMDX");
    msg.sensor_class.assign("WQYKQBKBSIGFFJZWOWGYTYGXMGQBIZTSCGLVXVYLUHDYQNRPFNDJWWPHHXZNIUXJBHCCDVJCDHCNCXWSDKCHESMALUDKENELRUEHQTFLXZUNMTFOAIPPDOAKRGVPESEHIPMBKLHUFZMZUMYPQIRQIMRJRKUBSLKVJNCXRAEMJZWERLJOKJW");
    msg.lat = 0.3976665465190432;
    msg.lon = 0.10279874633743824;
    msg.alt = 0.39593364178869384;
    msg.heading = 0.981011665203817;
    msg.data.assign("MHHVOGNMCVIKSNWGXOICZITLYYZMVJBEKFHNDWMVNILEOHURVLRQRELXXWONZOWCUKLMFIQXDWIQSQHSKHHRMZRUQFSKTQHYOADSTQSFWFGOPECYAJJZGANPRCVIYKBFHJUQFGGDJNESRMUSVSGLKW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteSensorInfo #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteSensorInfo msg;
    msg.setTimeStamp(0.931391166487293);
    msg.setSource(64310U);
    msg.setSourceEntity(200U);
    msg.setDestination(61080U);
    msg.setDestinationEntity(169U);
    msg.id.assign("XEVFTRJRBGADGCZIMQLXTXKOYZMHKFVRQSZCGIXLLMGUYUMFERGAUAPOGZYCJEBNBMWJEGDTKHOWLMWLEEMVKKNATHSVVWQUYCQAFPHCJTIQQFTBKALGFYDZINIMHWDOBIOSQUUSLUHTJSVJJPZRWBUNEXUXDAPQJOSSDFQASRNKOHLFYFVGPKZCWUBHACEJAVLIINWR");
    msg.sensor_class.assign("RYOPMITAGZXKAAYDYREWIWCETKTWER");
    msg.lat = 0.888881237192251;
    msg.lon = 0.948268995737994;
    msg.alt = 0.709141714035581;
    msg.heading = 0.6336792486708882;
    msg.data.assign("XUWMRJHBVCMBJPCVLEHANXTSAYPUULCKRHTHAZLVFQQYNJQILSVPEDYROTBDHKDTHIBFNKEYDMCSLJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteSensorInfo #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteSensorInfo msg;
    msg.setTimeStamp(0.531742731658916);
    msg.setSource(4725U);
    msg.setSourceEntity(133U);
    msg.setDestination(65517U);
    msg.setDestinationEntity(128U);
    msg.id.assign("TUIZQXNTAJVIFIUXVKDMCDEXIHVTHYUQCJPUSTZVMYGQNBSQWDXFZOGEIEPYKY");
    msg.sensor_class.assign("UUXQEQONCGPRJJCKPADJXWRQPTAAFZRDUJXFASIVPSJCTQERCTLSVWGJATNABQTNRECXWEIMGYZRBLQOMLRZKYNZIAFHEVGHMQXYFOTKNXBZVSDLTDYFFNGRRZYDKVMNEICESCYUXUDUIHWUWCGMUSADLMHTUBQFLHPJALEMVS");
    msg.lat = 0.757125398599012;
    msg.lon = 0.9123080886270494;
    msg.alt = 0.8144740057817043;
    msg.heading = 0.8697647501204847;
    msg.data.assign("YMNGPGHUKNLQACNAFLJTLCC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteSensorInfo #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Map msg;
    msg.setTimeStamp(0.013862713113819813);
    msg.setSource(7794U);
    msg.setSourceEntity(125U);
    msg.setDestination(47617U);
    msg.setDestinationEntity(177U);
    msg.id.assign("AOWMSGEAOLXFCSWTYRGFNJLLRHEKMKNKUCNSEZAIPUGLJRYEYWVSKDZYYIUAATCPHUVLINBQUMVCUVDLJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Map #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Map msg;
    msg.setTimeStamp(0.5776592796903582);
    msg.setSource(56994U);
    msg.setSourceEntity(94U);
    msg.setDestination(1237U);
    msg.setDestinationEntity(213U);
    msg.id.assign("LFLYTKSIPYKUOIPFXASEJOBPJSIYKDYDZFVMGZARBXJWVBPTIOQUOMVKDUWUJLAMWRTAIWHCZGTWTLORCFKZRWRPMCTQUSDSVEJLNDNEZQVLRAZVQLJSUGQNHBCPBCQTQ");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("KPWXQXHRXSYWVHEZJBVODNAJAGWVUEHIHNQBFZUIFBTZDIYTLNASPBMMKPBNEMWMQYUKJCFDIPTQKLIFFQTASDAYZLVHBCFGCKUKMPLXEXBMCFJCGIJZRYGCPZ");
    tmp_msg_0.feature_type = 60U;
    tmp_msg_0.rgb_red = 104U;
    tmp_msg_0.rgb_green = 202U;
    tmp_msg_0.rgb_blue = 239U;
    msg.features.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Map #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Map msg;
    msg.setTimeStamp(0.04358455861293009);
    msg.setSource(39620U);
    msg.setSourceEntity(150U);
    msg.setDestination(64039U);
    msg.setDestinationEntity(22U);
    msg.id.assign("MBROGBONEZDEFKOYIWXNVKAZQCJTUYUNQQ");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("NPKNXSYZSRTBIPNVJDCPTIOQERQBPJKLGWIAXHBPFUHTGWEFCVOZSVNBCXZYUFUBGOTFMQWNORSCMAWGEOSAJUAMODTXQXSMWVOGQDTXWXVVCSVPEDSJUYQPTFHFWNTLXXJWBEZLJCIDBWYXGHOKIFVZEHRSWKVDMQKELFDUVDMEABJRRKEJIKPAIELIBHRCHQZTSYGLKRRULKCOHUNFMYLRHUMJGZDYIYCNMLQTJPYGF");
    tmp_msg_0.feature_type = 84U;
    tmp_msg_0.rgb_red = 22U;
    tmp_msg_0.rgb_green = 27U;
    tmp_msg_0.rgb_blue = 40U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.6484788739342017;
    tmp_tmp_msg_0_0.lon = 0.9863806806471754;
    tmp_tmp_msg_0_0.alt = 0.09520066502526603;
    tmp_msg_0.feature.push_back(tmp_tmp_msg_0_0);
    msg.features.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Map #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MapFeature msg;
    msg.setTimeStamp(0.8597091782952448);
    msg.setSource(26552U);
    msg.setSourceEntity(185U);
    msg.setDestination(34991U);
    msg.setDestinationEntity(223U);
    msg.id.assign("VCTYGDDQBJCLNFVLWWCDTZBEECYMRIFHIFCKYJKIUPZRHLCWAVQLJXMSQGOBQMDXKFYJTKETKWWOJONBBCOVORMJVPPEKTVTKYQHJQLYTGOGFSTTQFFZNXAIGHUBFQBJMYCPIPPEGXWNSRXNUWAXDSMUUUGAVIVVRJHSQNRDZHMTLSQGFLDGKNYPAZOCYXMNWERUAZLHOARMENCZPS");
    msg.feature_type = 154U;
    msg.rgb_red = 74U;
    msg.rgb_green = 144U;
    msg.rgb_blue = 57U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MapFeature #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MapFeature msg;
    msg.setTimeStamp(0.5516727895704919);
    msg.setSource(56953U);
    msg.setSourceEntity(208U);
    msg.setDestination(38724U);
    msg.setDestinationEntity(207U);
    msg.id.assign("ZYXGZMFVDVSNAJGBIZCOYBFUYINOUHQELASXGKRHDATYIFGMWJPVJOHBQXLDNOVLKMUQHBWMABUXMQZCJIXYRGRZEKOCTNTLCTMMLWVNTEZACWBBSXWPDRUZSOAREHZRWSEJMMYKWUXJPQCSPNKHEGUIDDAPJBLLLYYHSXHTSCMJNOGQUTCNLFRAIKIWQNLXEFD");
    msg.feature_type = 185U;
    msg.rgb_red = 149U;
    msg.rgb_green = 73U;
    msg.rgb_blue = 116U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.21280877970972223;
    tmp_msg_0.lon = 0.7036021142138109;
    tmp_msg_0.alt = 0.5536111796828044;
    msg.feature.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MapFeature #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MapFeature msg;
    msg.setTimeStamp(0.6678550719384657);
    msg.setSource(37629U);
    msg.setSourceEntity(27U);
    msg.setDestination(48498U);
    msg.setDestinationEntity(137U);
    msg.id.assign("NFRJRJIZPSCKIJTRAASYTBXZZQJNHNOJULHFEBBMWQJQTDYAGBAAQOIUERHHNGZLDKBEAOSFGJWZUVEXUMVAMTZBUVOVGMSYTFLFUOSHZIDJJYESNWOSZYVAF");
    msg.feature_type = 6U;
    msg.rgb_red = 97U;
    msg.rgb_green = 158U;
    msg.rgb_blue = 220U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MapFeature #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MapPoint msg;
    msg.setTimeStamp(0.6547062897308563);
    msg.setSource(60405U);
    msg.setSourceEntity(61U);
    msg.setDestination(5478U);
    msg.setDestinationEntity(176U);
    msg.lat = 0.5426404829147528;
    msg.lon = 0.0469025663015572;
    msg.alt = 0.7619630225473263;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MapPoint #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MapPoint msg;
    msg.setTimeStamp(0.6339756430893888);
    msg.setSource(20078U);
    msg.setSourceEntity(89U);
    msg.setDestination(59978U);
    msg.setDestinationEntity(58U);
    msg.lat = 0.34204406253095376;
    msg.lon = 0.0760525437702122;
    msg.alt = 0.406482602225263;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MapPoint #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MapPoint msg;
    msg.setTimeStamp(0.5712498156575593);
    msg.setSource(14157U);
    msg.setSourceEntity(84U);
    msg.setDestination(2649U);
    msg.setDestinationEntity(35U);
    msg.lat = 0.5170858111578582;
    msg.lon = 0.015618908444174684;
    msg.alt = 0.6494438979422259;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MapPoint #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CcuEvent msg;
    msg.setTimeStamp(0.12546679898526591);
    msg.setSource(17347U);
    msg.setSourceEntity(159U);
    msg.setDestination(1372U);
    msg.setDestinationEntity(10U);
    msg.type = 117U;
    msg.id.assign("FOJTGQNRBVAVBFGHL");
    IMC::TrexOperation tmp_msg_0;
    tmp_msg_0.op = 94U;
    tmp_msg_0.goal_id.assign("HJIGIXOEMMRDKBTXSENIDAZVSPLRIFGUGOOUSCBKULQASIRHGNARKWPSVEHEMHNDVNKULVTHALIRXLWNNZHTWJHEUMXEIJELKXQZEYXDYUQNZPWPHCIZJZVWBFJKSWYVABHQOYZLYFZSFTYAXLSQAPTUPCCKRDOVPCVOYGAATEPQNRLOTT");
    IMC::TrexToken tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeline.assign("TKVHYGRZOYTFKBPREZTQBEKCYTLWWKPCDUEMINQONAXAGZSGPYRIJWKDSHZJEDODQDQJMUTNAVYVMYLEHAWGXANLFOKJLVPFOULMXGCCNSZDJBWZNZTSASWVXQIFQUNZGSCMJHBHENIHFRXMIFQHQLEGDYJRBQUYSWNPGHBOWKTJBAEVZOXMWFCGVLBPCCJNSQRYUBMIFKLITPZDOMRVAU");
    tmp_tmp_msg_0_0.predicate.assign("BFODIBXAJEIJAAGKTKQQKTMSNOEYHXVLQTZHEVMZZEGHBJJOSLDYXAJFNJWMULUCVPFMIELGWTZKAANNDYSIHAXJFVMONWLXTTQSV");
    IMC::TrexAttribute tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.name.assign("IDMNLSXYTLQHSAWWNRYGVGWWTYJIYEXVSZE");
    tmp_tmp_tmp_msg_0_0_0.attr_type = 252U;
    tmp_tmp_tmp_msg_0_0_0.min.assign("ZYIPQGSADODIKUPKDXWDXYTISLNJDGZDJMQKFEUIJXRFJUYDWJJKXUKGZCWXYMBLMMPNSFFAJLVITMLHSZCITHQZBVPBYCMVRHTQHEOTQFREKVQQLIDENVEZGGSWJRGXBHBWSRYIQWOTRLEAEPWVYWVAQOKZGVHFUHABINHUFYHDSECCYJRLAFLGAXPBDLTGWZBUCTOTP");
    tmp_tmp_tmp_msg_0_0_0.max.assign("MBYJSNTHFZJBCEVRIQWDXKFDNWBQTOFNIVXZSTHZNQOBFQTYKWPKEHAPKIVCWDFOMIOEMLGGEZAUFBRXTIGWPYBZYTNDLKIRDLVHARXVEKLXYFBDXCHAETQDGYIUZDUJEUHBCQKQASZEVVLEMGWGX");
    tmp_tmp_msg_0_0.attributes.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.token.set(tmp_tmp_msg_0_0);
    msg.arg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CcuEvent #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CcuEvent msg;
    msg.setTimeStamp(0.7199293787801987);
    msg.setSource(52995U);
    msg.setSourceEntity(201U);
    msg.setDestination(64578U);
    msg.setDestinationEntity(10U);
    msg.type = 215U;
    msg.id.assign("EYRHNGNDCXWEBHQJFQTPXZFVWCBOMXYRODLFNMIAGLBJGWELSDNKRFSAVQYPORBKLYAZJBFSSYITCVEWSMGZJVMKHNCMVNYMLGCHXHIPNXJRYEIGABMLRPRWPXDUSVTPIJZBXTQCIWTZSQSTFQURZUHZPRZHUFCOUALXXQAGWDRLXOYVEU");
    IMC::SetPWM tmp_msg_0;
    tmp_msg_0.id = 90U;
    tmp_msg_0.period = 3361295581U;
    tmp_msg_0.duty_cycle = 317541690U;
    msg.arg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CcuEvent #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CcuEvent msg;
    msg.setTimeStamp(0.5283898106962632);
    msg.setSource(50967U);
    msg.setSourceEntity(2U);
    msg.setDestination(56074U);
    msg.setDestinationEntity(126U);
    msg.type = 213U;
    msg.id.assign("VHYSMKDDLPKDVGGPCLHUIZGYIHLCBROWRQFMDARNUWYMFMVNAIBHIHMVOBOJHGIKYKPGECTLETWTBQDTYVFLOF");
    IMC::ReportedState tmp_msg_0;
    tmp_msg_0.lat = 0.8114704847444356;
    tmp_msg_0.lon = 0.11339358108527064;
    tmp_msg_0.depth = 0.9032963171958037;
    tmp_msg_0.roll = 0.08925182850095248;
    tmp_msg_0.pitch = 0.5942340320126931;
    tmp_msg_0.yaw = 0.4790368317940005;
    tmp_msg_0.rcp_time = 0.07284588225256838;
    tmp_msg_0.sid.assign("TXMZFNASITVONGLQBUPKXZIHZTLPNLVKVAHIWQVUWXXBFCDURMXJVHFSYHSGWNYAYRDXHCJTGEZNRJFPPZMGZNANVEDOOGEEVEMJPCYMMVLPQJZEQYDWLBIUOQVBYCYLXNOOPIZEFRQTDSBWULWHQKHWKHFNFLJJEYFSBOBSFGGUFRXAAPQLUOCDQ");
    tmp_msg_0.s_type = 28U;
    msg.arg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CcuEvent #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleLinks msg;
    msg.setTimeStamp(0.9628568027780675);
    msg.setSource(31437U);
    msg.setSourceEntity(118U);
    msg.setDestination(48213U);
    msg.setDestinationEntity(86U);
    msg.localname.assign("IUQANZEPKOJGEOWLMVEVOWAMKICOIUIREPBIDHCFRKGFXCSGPNRSDSXNCZSXLMTTAEALGQHRJAYSZLOSANFPCXMZVLGSTAGFUQZSPC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleLinks #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleLinks msg;
    msg.setTimeStamp(0.12986627079710578);
    msg.setSource(57615U);
    msg.setSourceEntity(221U);
    msg.setDestination(10789U);
    msg.setDestinationEntity(24U);
    msg.localname.assign("GEJITXBIUIZJNGTHQRSJKJYVLQUOUULHNWKAAHAZCCZKREEYVNEKUYJDWFVHFLNFAOZMODNWDMISPOIGYMGIVLQCHCJZZBOHEHRNLQHAGMVLBPGMJXQEUWMXSXXSTSNTRWGJDPXCEQFTBTVNECUOXRYDXWKVCSXAGIFMESOZVTFRWBSPWYOWXDKQPDPKPD");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("OUBUSNSPPAXUJNEBVJCTTMNXMGHTLZDJFKMXDJXCIURNKXWYUWWTMDTZCBOEPJRIIIVPDGPXGISGVWCCHYOLFYSZAYASLVKEVFWEAQXLMGJRLCDMOFQDFBHCRSTSRVAHMGLQZOZMZUGMUQCCOKBYEIDAQTHFIRJLGQNKQJYEKFWPCXEABOYNHIGDIZVKYQQEBZEXUXVDWWLTUIFFOSHNLFL");
    tmp_msg_0.sys_type = 75U;
    tmp_msg_0.owner = 55980U;
    tmp_msg_0.lat = 0.15555785752050488;
    tmp_msg_0.lon = 0.7469047083716678;
    tmp_msg_0.height = 0.26595509830612263;
    tmp_msg_0.services.assign("RZBFRFWVUDALDOJJGRDDTCLNWGHEHJHSJQPGPKNIMIUCBXMZSWOYHWHKYHTNXDHZEKWBLZPVRAOMNQENRTYISEFECNTBDISLAMUO");
    msg.links.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleLinks #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleLinks msg;
    msg.setTimeStamp(0.9112952972343873);
    msg.setSource(28938U);
    msg.setSourceEntity(224U);
    msg.setDestination(11163U);
    msg.setDestinationEntity(105U);
    msg.localname.assign("EIZOOXCGUJYYNRWGFMSSHKSDDVXIOJYZQEOQCIJOEEMKQTHHITQEAHQVPESDOGOUEQLGUMAFUBNRBPPWTTYXPRBMSWTJUNYKGEOQMALAWNRKFKFQHAYWRRXVCJZHDGXFFSLKFMVIHKZEUUPXBERTIHVGWJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleLinks #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexObservation msg;
    msg.setTimeStamp(0.7462167532384846);
    msg.setSource(8628U);
    msg.setSourceEntity(187U);
    msg.setDestination(20416U);
    msg.setDestinationEntity(122U);
    msg.timeline.assign("FMKLPNAFAZCIJUINKDDFCHFZYNJRYQSMQYSSIOSABHLYTDOVUOOBBBKIWVWD");
    msg.predicate.assign("KWJGFOOCTIQDAPGCFHQAHAPKIQFCJMKLFXNORBUQJNBMVVOMCRZQTZCYNTHOXBUEFNZSKBGZGSPXFPMLCHRDAUWJLCBSUWXRVGQDERZISGJKFKICKLUPQJRUDOKKSDEHZH");
    msg.attributes.assign("XSSZAYBTILAFVGQDWOSXDTTMBYJUDHKMZEVBHCRNDNEWFRMNHSRIRCGZKAYSMFMYHVPEOECHRHVKRUQDIQRQJFDOVWACSJPQOWMRCWLAFKHBYKPLQFVYKTKXYJCQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexObservation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexObservation msg;
    msg.setTimeStamp(0.9380184578260357);
    msg.setSource(2679U);
    msg.setSourceEntity(150U);
    msg.setDestination(5030U);
    msg.setDestinationEntity(72U);
    msg.timeline.assign("TUNJIAFAEFMYQONKKYDWLUEDCHZWSOAUDIFKPGXPIDXWCZGSIGEMHUFXUCOZZYTXMWVQWMBSTRBRSYVGOLIECYSDCRGREFPLIXGBRVLGUVSRJMTTQIINULQFAAUXJKIBFBKHRXTO");
    msg.predicate.assign("ACYYDSFBDZEYNETLERVRRBIVZRKPEPQVZXYQRXBHGCNTPMDPOODTAQBQZSUIOQQMFHGWRYZUAJWUHNIVHHCEWNHAYNDNMFHLMJVKJVLSNIOCWK");
    msg.attributes.assign("WYKGXOPPYLEMNCBZHGOUAXGVCCJQAPDSBWXOQSIJTTAFQWSYTMKMTSLEQPJESLKIDHVGZOPJLPCCBEINHCAWYPPBJAQLMDRFXSSDVGZFIHROAXQVZPOQOWNBQVWZWLJKKOMRNU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexObservation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexObservation msg;
    msg.setTimeStamp(0.3548230544398384);
    msg.setSource(60061U);
    msg.setSourceEntity(173U);
    msg.setDestination(4448U);
    msg.setDestinationEntity(219U);
    msg.timeline.assign("HXIUYWIPQUCSRKNLPFOISLZPQFOZBFXEBCDXVKOSFWKMZIEHFJNBLVSRYDLIRQLKDHMNANBWTDBOAGSCMJXSFAKZMUYWLAYGFTTMTXMEGMQAAVNPUHUVYPRKUQCPVVEOZJQGQBCZWRGXKRHYZAKJIVXWUJORAQQNCOXUGDWSQWPZXHIJJJVTGNORLDPFSDOBKVTCEIFS");
    msg.predicate.assign("EJJZQVBFHENVUDRODPIRRSVZSPVVRBRLLCMOWUZHIMNHHDUAKBSRQAFRBXGUSFJNYIWRQVIUMICMUBJLCDBTUMEJXTINLNKCWFMYGBLEGTATJBPSPIELIKCZAMTQSXCWQFVPYOFQPVVZMPHZAJTYZIHZSLJELGKDYAAVHPTEKXAARLKNXQOGYJEHNQHDYOXBSTBOPGWPYGKLKNOYUZFXNHWF");
    msg.attributes.assign("RZDBSUWDWRKPJDJGYU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexObservation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexCommand msg;
    msg.setTimeStamp(0.026093605258290298);
    msg.setSource(14496U);
    msg.setSourceEntity(233U);
    msg.setDestination(55919U);
    msg.setDestinationEntity(254U);
    msg.command = 204U;
    msg.goal_id.assign("IFTJROGAYKRGFLKSHPEDTHPGVLLMICVPZRELNTLJJDRINXBMZEROSYYYZEDURSGYNNWCRWTVIUSZOGICEOOYEQCIEYJXBXCTKYKBGFYHMJVN");
    msg.goal_xml.assign("TWXAEXBDHUPHWCCOJMRBUFSJLDUNUSWECDXZMTOFPENVLXGKNFZPNKDKVTNFLOWWVRQSEOSFTJHZKXCWZMQHZGSGLJWGVKDZVNRFYCHBOXMLIEIGMYPURIKOQSMBOGYVCDHAIBOLSAQQKTOVX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexCommand #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexCommand msg;
    msg.setTimeStamp(0.720009327010939);
    msg.setSource(53005U);
    msg.setSourceEntity(89U);
    msg.setDestination(12100U);
    msg.setDestinationEntity(158U);
    msg.command = 74U;
    msg.goal_id.assign("WJDTPZYMNIEGANRKEXGJLNDGLBMMRNECWKQONISBQVKGPTTGVCWHIFXQXKPSWK");
    msg.goal_xml.assign("KZKUERUFLJGJLZDTHKTBBIAJQJIWLZPDFUMIOXGCDOVCBBBMTHOUTXLXEGFRVIGTUIMYMHDZGQFRYVPMMPFISKHTCJRKPMNRYNHQSAPNEQWEXIDBSWPMVJEDYRPSQNVBOXAHABAQRWESDXVFAXVCTQTCYOLOGUTGSTKNWRPAZVADWREYJZWNHVNYCOLCLNPKFBIKKFDGOEENQIZFOXLMXVYUSZGUUHCHQJPLQEWCWBUSANAR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexCommand #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexCommand msg;
    msg.setTimeStamp(0.4714336448738906);
    msg.setSource(15504U);
    msg.setSourceEntity(254U);
    msg.setDestination(17105U);
    msg.setDestinationEntity(175U);
    msg.command = 53U;
    msg.goal_id.assign("MPLKCIIMHGNXYRSPROGQCSTZTXJJBRC");
    msg.goal_xml.assign("LLJAKCKVHWT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexCommand #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexOperation msg;
    msg.setTimeStamp(0.9625913909662707);
    msg.setSource(48319U);
    msg.setSourceEntity(246U);
    msg.setDestination(42258U);
    msg.setDestinationEntity(248U);
    msg.op = 73U;
    msg.goal_id.assign("HSIMCJXXLKKWBKJUGFGKQMJDPRWGDSODZNURLRJNCFEXMNLWABWZEAPOBGOLSITXWIJHLHPTTVANUJHUSJZFNYZVP");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("JRKPOPGMAXQUNBISBZRQEBRTAPXDQLGIJOAWUERWVCOFONQQHNZPEICKDEEXYFCKQFYVXRGWSJAPRDONIHRCUVAQSGVJTOYYLZCUIEXTMISWKKNAINDWRBVPSSOODTKEAXLNBFGTEXBLJCGYVFSQYUFIMXAXHCVGTNWMETBMLYLCQOLKJHPWJHDGVZRBIPFGDZTUZKLG");
    tmp_msg_0.predicate.assign("QMYBHYSUHEVGAXLCQQJ");
    msg.token.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexOperation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexOperation msg;
    msg.setTimeStamp(0.720509650555735);
    msg.setSource(6597U);
    msg.setSourceEntity(103U);
    msg.setDestination(28151U);
    msg.setDestinationEntity(46U);
    msg.op = 45U;
    msg.goal_id.assign("IGKDWQIIPKEASKPCDUGHZONAHRNEEBTSFJDXHGRTPCYESWWHBLDJYBMMVAYTSWIZRMJYFYMTHBTGCZPKPZZCNCREOIOJZLBUBXLXUWSRVIWLMSUKCWVOUGJVFWPMMQGORBHYJAJNXQVQZXNHUELVAOUAFYFFXPHMISBMDQACUKLNBDXVKESAUDQCPIZECGFJOYYDEVPQOWLTQILRCNJSKKALPDLUXNMXXFRNVFHGTGZARGOTDERTKJVQOBQZTF");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("QKPSUJJRCWTJVRHOSGZWRKTWVGLQTCBWMAMDYNMISFTCJHGNIZBFXGLFKSOAYULHSBDNPBBHZBHNMBMCZADXDEEQPKCMHUOFAADKLPGVPCWKELQZKXYLJBFDFSWFSNWYCTNZYKIRMQGZVALQPYKVZGQIEEDIYXJOEUCONRRTFJVVJNOXVMYUTBUMTOIVQXSESQUYL");
    tmp_msg_0.predicate.assign("DSGVQAWUIKAYHJDMPNWPTNCWMXKWQSHAVDVTAXHFOOPACMRHXGKRLNUAYGTGCUBCTUKEEHQURNHORMSFPCMGCBVSVEFJYIUODXMOFQTZGYWJCYAJTHWETQLKNIRGIBSJYFDRMABWKJNXNTMEFJUPYXTUBZFLOHLPPJZRF");
    msg.token.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexOperation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexOperation msg;
    msg.setTimeStamp(0.8316848536474967);
    msg.setSource(9635U);
    msg.setSourceEntity(185U);
    msg.setDestination(27333U);
    msg.setDestinationEntity(105U);
    msg.op = 31U;
    msg.goal_id.assign("OQECMPOPSMYHEZTTJJHNSVTXHFVWKUPYQILR");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("XHSNLWGSYUJZZGFRUXPCLKOHBTUFZYMNZBAHRTEHXWFCOVUQJLVTLWUZSEJGGNJUEOCPOQRWQFXV");
    tmp_msg_0.predicate.assign("NQQPNPCABKACEDTSLYMOWKCRXVQPFLSCFJGXFYXLOLLGEDWDXXBLUXASWMRTKHUHHFTSPMSGKYCYOVYHVCUFPTGNNRHWHDWBIKJQQXRGZZWOFTQLQZUAKJWKTIKFDI");
    msg.token.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexOperation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexAttribute msg;
    msg.setTimeStamp(0.8250633950445285);
    msg.setSource(4974U);
    msg.setSourceEntity(196U);
    msg.setDestination(26439U);
    msg.setDestinationEntity(218U);
    msg.name.assign("DXAOGEOWMGUDIUICMNVBHILBZHRDOLAJXLZINLUCLOYZLWLMJUZRGTJPKDGWVPFPEUYFXYENOIACTVGTNMDHAPRVRCBQLEYEQYLZKKRYVO");
    msg.attr_type = 128U;
    msg.min.assign("RKQFTQJOMSJCGXZCJFMFNTAYXBRYIDNZMVXEUSQEPEMIDETCVBWHBTKBSGBEQNWUKRNDKZADTSXPROQPAZNFLCVDHWARLFHIAGHNMNZK");
    msg.max.assign("JVGVZKRRNNLKMPIPUMQOMWTAKCHYLGADVCEWZCEAEETLXCYFZBMNKEGRRUUJMUKGKJKQNCPZNATVORBGISPCUFCUEQFSDTROENTDIHWB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexAttribute #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexAttribute msg;
    msg.setTimeStamp(0.52408198954747);
    msg.setSource(37741U);
    msg.setSourceEntity(40U);
    msg.setDestination(45887U);
    msg.setDestinationEntity(158U);
    msg.name.assign("UZFDVNVCWXXBNLTBISORJYEORGYBSEFDKJOVJUPTZIFMUIPVCQMNXCGLCWHDBIIWVWHFXOJUHAUCAAMMXTBJYPCPQGJCCAMWFVQNKFIAYQBLHMNDPPOJEIUMKGSTRKPHEFHLEWDDHIZTZPRXIQYZUVUZSROORKTGJRDSZSEZSUZXLINYCVRNENGYXQWKKATANBYNLSPAYB");
    msg.attr_type = 251U;
    msg.min.assign("PLDJSMCIVJCSPWVNOYPATTWOZHBCVDGWAWPRISPUTKFLTNHWLKEUFPIUHQYFNYSJRRYVBWAMBCKINEAKLRJFVBOFOBHSMZXDMYDHVDLEYUIQFOKNFCATBLZTLZYVCQPGPFQQXBDDMARVVEQNAOXJWIDDDLXGXWCUFFNHZTNMHTNEEIQJLSSHJBOOGGUVKGWKYXK");
    msg.max.assign("UAGVPDGNRYVLSCLPSKOHQNUTMJKJTMNSIGGIVMWVVEGEZFLPVBBYGZCWODDIFWWXXTKCJPNXAIHADYGSXILYZFJQQUMPOFCPUNXEBQOHSDLUCODEIFZJWWDQMKEYXLTZXRWQCJAHRGOOTEFIUUSHJICRMAPSRABJBHNVWRKITLHNZNAKELUUHLZOXSLKZXQMNVUBECQTFMIBQBEJVFODBRZHTAKGTAVCMYSPTYSQN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexAttribute #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexAttribute msg;
    msg.setTimeStamp(0.8268073346090752);
    msg.setSource(15259U);
    msg.setSourceEntity(216U);
    msg.setDestination(54339U);
    msg.setDestinationEntity(186U);
    msg.name.assign("NFBYRQFFNSJVGVYHAZDFHMEIRQIEZBWDFACXCCDIJXYJIRMCSXZKPKCODLZDCPATGBRYEVOHWCAAATXTMCKZPBHWBRQDOTHOUYXGNXMSNXQLZJRGVUPFFUIQBNWLRZWJJLGFGUIWKTQGZTWVJIJHKHUMREPOWGZMRSCBLJUXJPAONOPGSEYLMOLF");
    msg.attr_type = 64U;
    msg.min.assign("CZACXHJENOOZFAUCOQQHVZVTPUTRWYWUHTKWYFHBZMRDQSVAALVJUITBXKYELLYGAEJHPBNXMMMEYRAKDRNUXVOWGJBLEDSPJXRZBQECSMHLZIJHMYUBCUMTQDZTV");
    msg.max.assign("WEKUGXPOPKBLQVULFEKOWAKVYFJPFFOXBXHNGDYODCQYIRLGPGBOHZSJXTMGFSAIUWEJWXIZZTMUBXLPTEZG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexAttribute #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexToken msg;
    msg.setTimeStamp(0.46933677455102163);
    msg.setSource(36431U);
    msg.setSourceEntity(140U);
    msg.setDestination(62387U);
    msg.setDestinationEntity(244U);
    msg.timeline.assign("KQBGVNPEDFDVAGCVOYZXJRMFAETGPNWWXILJSFIBENGIVVKBLZOFZJHPZULGBFSKPTALDSQHKACXLYENVYYYXISUVLKZVJJMTWXRQMYTXUFEQEIWKOHQYRH");
    msg.predicate.assign("IDWGFWSNTWZFVRCMERXJQRCIJKVGYBSUDSOOIFNIEPFHQZMUJKBNOLLRKUAFATXASFHLUAOEKSAUVZTVUUFXUHEDRQHNMGBL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexToken #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexToken msg;
    msg.setTimeStamp(0.9065229360686652);
    msg.setSource(11913U);
    msg.setSourceEntity(38U);
    msg.setDestination(55337U);
    msg.setDestinationEntity(240U);
    msg.timeline.assign("WTTPLQSNSINCFPVRGGCRELLJEJCWJCWXTWQPFILVZMEIYBXBBWBLVLBSENHOKQQSJRRHAOKGMYRFDCQCZGUAYUETIQZKVHJCOZUAZXKXKZZGERGFFFVYSMFRURAADJQHXTHBNKHCOMSQDDEXSXDAYNWGCOWKTNTFEVTHVMQGSZDLYUGJBSBUWOCTTANIVVUDZWRHYEMYOBYOFMRPWKXGPPKIEJHKXHABJDUOMDPQXIPIPIUN");
    msg.predicate.assign("KAOKFCIHVCLVXHMAURTSWSYQONJWZRFGNTBUUYDDIDTJPCYDGLMJAWNLTTVOPXBAFPEXCQHLSCDLOELMQCHISIMHQBTKSLPYYWNKMNPWRRWFCVNDZQUAXXZMVSPA");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("KMULRECGDWWIJQZZZIHYMAOBXYKUGGEVUNRMDJO");
    tmp_msg_0.attr_type = 156U;
    tmp_msg_0.min.assign("WCIFMFBLRSKITHUQYDQNSOOKVEXJQZRRRIMROGZDUFSYVSNP");
    tmp_msg_0.max.assign("YRQFFNLHKNQSKACEJFDNAZZOOUMVFFSBJYORNLAIOOJJTHBWHSHDRVHVTPKICGRPZOZSEBRDVTLUJFIZETFYWBIKXMFXSCDSGVWXAAMELXNKAWG");
    msg.attributes.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexToken #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexToken msg;
    msg.setTimeStamp(0.8654025315324426);
    msg.setSource(57973U);
    msg.setSourceEntity(64U);
    msg.setDestination(48270U);
    msg.setDestinationEntity(131U);
    msg.timeline.assign("GSKCIWVKQMDYQACVQSUUGVWCEQCNVHQJSYEKUFDHLOVQRRWIPSLKKCCVTSGHQRXPVZKBXCDGHUDFBINXTPTKAJZKRGHJJOCIMFFPUAPAOESRS");
    msg.predicate.assign("IXJSCJXIRPEYTEHEAQJJACUZPKXDZLPTPXYTCXNILBKQKERNLKHBFMELGG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexToken #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexPlan msg;
    msg.setTimeStamp(0.7355055514103367);
    msg.setSource(1384U);
    msg.setSourceEntity(30U);
    msg.setDestination(16919U);
    msg.setDestinationEntity(244U);
    msg.reactor.assign("PCMBERXDTLANUIGYDQIQVSNWXMACFJOVDKZJSURISXQYUIPTSBZZPTXGVJOMTVOENLUGVXEQNOQTTJSCCKZPBYCJQYFXFDVMWNQNFNFFXIVWLQOGKOAIZKHUKVLDNILOWRAZTUTHOJDWGJFSZMSMWQBMHSFHDUDBPNDDHIZGEXVKLAKQYYSGGGGPRW");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("RLGZOTSFTUIFBYUQKYWVNHMMHXIQRYTUCYRLPADTZDFPFVWKNAGKIEFOJMZFZBCSREJXEPOKUBRELATSHRY");
    tmp_msg_0.predicate.assign("QADKNPXBZMKVEJPMBKFCEMREOGIFLSUGVWVQHTQNQJDJOBVDHVJAZLNKERWHZIIMIALGCQPNDTQGYMSJVZWOZYHFKDUDEMSRKB");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("VHFZCNVDETTPVULDKZQGTHCGFSHZCJDKXJQRDPBHGXNXUSLBZYKTKTWEYTVONADMVANLFTSOWZIMWBUQFIFNFIRWPMGJDIPXMRIYWKRKAGHIRKFXFWHMAHZUWKQIQROLKDYHSGRVCXCNMJNPPIZABRAAVOQXAMQHVCCYOPMEJPJQBWPPFD");
    tmp_tmp_msg_0_0.attr_type = 9U;
    tmp_tmp_msg_0_0.min.assign("WRLSLDLJASZHIFNDYUOCXNZXNBXANNFTGQJBGJGQJVZVGXOIXUUPEAMRAHWVVWAFUKOJTQLZJBOWQFQMHZIGUHXBTDWADBSGDNLYZWUFKFYRCCKTMBANNVRANRCIHSMP");
    tmp_tmp_msg_0_0.max.assign("NIQPSOYUVGESPIKCULZDXLNTCGEDFOGPDAWDCRUHSRLPGMAFIWJVGPBTZRNBSAOVHVTXPHSOSCJEUTMESZUGSAYJBJTGWIKEPEAELTMHEAQSYODFQ");
    tmp_msg_0.attributes.push_back(tmp_tmp_msg_0_0);
    msg.tokens.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexPlan #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexPlan msg;
    msg.setTimeStamp(0.043536008639105006);
    msg.setSource(42587U);
    msg.setSourceEntity(135U);
    msg.setDestination(48568U);
    msg.setDestinationEntity(59U);
    msg.reactor.assign("FLGCDXQCVJVUDUHIYOOXJSIHVFAGNRYTDWROTQISOCSB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexPlan #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexPlan msg;
    msg.setTimeStamp(0.3146537047921285);
    msg.setSource(14632U);
    msg.setSourceEntity(65U);
    msg.setDestination(56209U);
    msg.setDestinationEntity(80U);
    msg.reactor.assign("TQPWXBOJKUIOJKVYLJEOCUQSXXLHDJVRZETLGNUKHHIHADURDDACLHTTGYRBSYMDBTGSXYROUYTROGSACNOSJWLEROEWYEUNPIZMZGEEQFNMQZABGRAXHRSUIWAEMMEVIFMTIZGIYBFJB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexPlan #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Event msg;
    msg.setTimeStamp(0.4620612021505167);
    msg.setSource(29759U);
    msg.setSourceEntity(208U);
    msg.setDestination(4310U);
    msg.setDestinationEntity(84U);
    msg.topic.assign("FXWTNZTTSOCOQHHHETONFQCGETHMPHVUJYBHIAVCUNLULQDADVGSKIPQONEMPBLFAIWSPERCVMJKQMMZGWGZEU");
    msg.data.assign("RQSCIUYSYQDLDBCSNFNIHFIFDMSMMDYPCJKJBTAAITHLUEMJMWRFOVUNXBHUP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Event #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Event msg;
    msg.setTimeStamp(0.8880559336312244);
    msg.setSource(51697U);
    msg.setSourceEntity(25U);
    msg.setDestination(13369U);
    msg.setDestinationEntity(131U);
    msg.topic.assign("ZFYROHTWUWFCUOUFGGYLPLTPDGCMALFQSMUVHVSKXTXQJCYKIPEVGRCVNNVMMTZKQEFRXVNOAHWLIQXITQMSAZOEXDOKYSDRQUPLPBDTYGJGJIDLDOYBBRYCPZWBCAVRIPBQASEFENNOJKZHXKHATGRXTJINNXBYUVZVIFAGWBDHHCIGBKIOABMWKMLEVWZXCEUUBJAMFRNKZWWISHQUYMHHXTOCMOUSZPS");
    msg.data.assign("LWENRPTBOROLTVXDLRFMIFEWJQDVSSASGTOVPM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Event #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Event msg;
    msg.setTimeStamp(0.10902894117248829);
    msg.setSource(4723U);
    msg.setSourceEntity(209U);
    msg.setDestination(26783U);
    msg.setDestinationEntity(217U);
    msg.topic.assign("CTCWYRUPRYDIKXYONVALFBOKHYESEYMJWMASVIEDTWGMMDVBYLXAHUUILPKRIBEBIKNJYKUFBXRNVXPJPAPUJSRXHNXWDSQDSUVBAYQCSRJQWICEGDAKNGHBNNHOABYJGZZWOW");
    msg.data.assign("YWVDZTFOACZXYYXQEVLMNQMGHIYBWTFJSNGJPFDTLHUTNHUWMDCQTCOAARKEOUODGVKEZWOGDEXQZGBRHLKJFKXBYKBUNUVIZWEJJFISENHQXBHZFPBAXCOVRBSJGZIXPUMCTZRIPWDCDISGNLRYNDZAVLKYPBPWDRJANEZEMXJMRQUTKADEXHQLLMIPSBPYMWFAVIQOYHXGALRSVWWRSUGJMPVJR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Event #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompressedImage msg;
    msg.setTimeStamp(0.42134962326285386);
    msg.setSource(32043U);
    msg.setSourceEntity(230U);
    msg.setDestination(41024U);
    msg.setDestinationEntity(142U);
    msg.frameid = 238U;
    const signed char tmp_msg_0[] = {-73, 105, 28, -96, 3, -20, 14, -24, 63, -89, 21, -75, 90, -115, 87, 94, -46, -62, -68, -29, 24, 39, -60, 115, 4, 113, 0, 3, 60, 14, 85, -7, 51, 95, 57, 82, -3, -5, -47, 8, -8, 14, 87, -30, -116, 33, -77, 12, 57, -103, -33, -9};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompressedImage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompressedImage msg;
    msg.setTimeStamp(0.16081904476732345);
    msg.setSource(38080U);
    msg.setSourceEntity(226U);
    msg.setDestination(44923U);
    msg.setDestinationEntity(108U);
    msg.frameid = 229U;
    const signed char tmp_msg_0[] = {-116, -57, -69, -44, 82, 40, 71, -86, 119, 60, 122, -26, 81, -88, -3, -110, 104, -110, 8, 77, 15, 4, 124, 82, 94, -30, 7, 90, -76, 100, 71, 90, 92, 27, -69, 111, -96, -4, 105, 52, 13, 86, 22, 98, -3, 72, -15, -85, -102, -15, -85, -15, -24, 0, 48, -48, 19, -41, -52, -19, -72, -76, 36, -30, -36, -122, 94, -120, -119, 105, -122, 71, -96, -89, 121, 30, -45, -96, -92, -17, 122, -21, 12, 99, 121, -22, -118, 59, 33, -105, 82, -110, -92, -4, -76, 83, 50, -50, 96, -9, 32, 7, -94, -10, -127, 45, 13, 102, -64, 35, 34, -96, 26, 110, 5, 20, -51, -79, 3, -124, 104, -73, -105, -70, -40, -55, -65, 27, 120, -57, 36, -35, 11, 67, -106, 18, -80, -58, -106, -21, 0, -124, -125, -83, 77, 63, -32, -64, 104, 105, 2, 103, 20, -13, -77, -27, 110, -88, -25, 109, 111, -67, -112, -1, 117, -86, 44, 58, 12, 119, -69, 66, -109, -5, 114, -66, 12, 75, 119, 52, -58, -35, -60, 102, 14, -24, -1, 72, -5, 125, -20, -114, -81, 77, -123, -39, -42, 31, 61, 43, -18, -72, -77, 110, 123, 122, 40, -39, -128, 108, 46, 84, 5, 82, 26, -57, -126, 109, -17, -56, 3, -23, -25, 34, 57, 105, 1, -52, 59, 46, -106, 75, -78, 113, 122, 109, 120, 100, 90, 53, -116, -3, 122, -19, 113, 2, 118, 90, 14, 10, 99};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompressedImage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompressedImage msg;
    msg.setTimeStamp(0.23054283845826573);
    msg.setSource(63129U);
    msg.setSourceEntity(87U);
    msg.setDestination(6670U);
    msg.setDestinationEntity(62U);
    msg.frameid = 125U;
    const signed char tmp_msg_0[] = {70, 103, -93, -68, -27, 82, -11, 120, 116, 79, 43, -100, 81, -51, -122, -113, -50, 112, -1, 98, -7, -89, 4, 8, -92, 10, -60, -126, 48, 54, -32, 28, -125, 2};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompressedImage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ImageTxSettings msg;
    msg.setTimeStamp(0.8506804928963058);
    msg.setSource(60713U);
    msg.setSourceEntity(1U);
    msg.setDestination(35385U);
    msg.setDestinationEntity(60U);
    msg.fps = 153U;
    msg.quality = 183U;
    msg.reps = 31U;
    msg.tsize = 109U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ImageTxSettings #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ImageTxSettings msg;
    msg.setTimeStamp(0.2827677146819111);
    msg.setSource(38233U);
    msg.setSourceEntity(83U);
    msg.setDestination(2703U);
    msg.setDestinationEntity(59U);
    msg.fps = 194U;
    msg.quality = 53U;
    msg.reps = 203U;
    msg.tsize = 84U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ImageTxSettings #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ImageTxSettings msg;
    msg.setTimeStamp(0.796917573184915);
    msg.setSource(29077U);
    msg.setSourceEntity(9U);
    msg.setDestination(41005U);
    msg.setDestinationEntity(7U);
    msg.fps = 24U;
    msg.quality = 135U;
    msg.reps = 132U;
    msg.tsize = 96U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ImageTxSettings #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteState msg;
    msg.setTimeStamp(0.37596655141106716);
    msg.setSource(59406U);
    msg.setSourceEntity(123U);
    msg.setDestination(44247U);
    msg.setDestinationEntity(217U);
    msg.lat = 0.4906739450070363;
    msg.lon = 0.3186617527685105;
    msg.depth = 68U;
    msg.speed = 0.44435768623826144;
    msg.psi = 0.7625950409427023;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteState msg;
    msg.setTimeStamp(0.00633310561721534);
    msg.setSource(25156U);
    msg.setSourceEntity(161U);
    msg.setDestination(9222U);
    msg.setDestinationEntity(228U);
    msg.lat = 0.6133826496636682;
    msg.lon = 0.9893738084704365;
    msg.depth = 123U;
    msg.speed = 0.8367716372580043;
    msg.psi = 0.10024559676554057;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteState msg;
    msg.setTimeStamp(0.2970864344573575);
    msg.setSource(39225U);
    msg.setSourceEntity(80U);
    msg.setDestination(52560U);
    msg.setDestinationEntity(152U);
    msg.lat = 0.3384278180348754;
    msg.lon = 0.5009266396640927;
    msg.depth = 105U;
    msg.speed = 0.14918128088591343;
    msg.psi = 0.6935378735988696;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Target msg;
    msg.setTimeStamp(0.7424915439248245);
    msg.setSource(37626U);
    msg.setSourceEntity(85U);
    msg.setDestination(22665U);
    msg.setDestinationEntity(172U);
    msg.label.assign("JSHDJNCBFIAPRFIKZWFPBRVBGQJPISCRSPKRXUWLHPOIXISNXLOCBSEFZYSDEKUZAGEMVGFNHRMZYXUAIIZTRKIJGQTQDWFEXJUFEWJOMMHBTNEQMBOVOCATPJUYVHMJAWGWNEPFWTVUHMUCS");
    msg.lat = 0.20822468060480748;
    msg.lon = 0.4130163837270082;
    msg.z = 0.13213941869160084;
    msg.z_units = 161U;
    msg.cog = 0.9000463350832322;
    msg.sog = 0.4328827785498933;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Target #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Target msg;
    msg.setTimeStamp(0.049493689874800406);
    msg.setSource(14585U);
    msg.setSourceEntity(195U);
    msg.setDestination(50031U);
    msg.setDestinationEntity(58U);
    msg.label.assign("NGOAQRIDRDKHPGUYNPZMLBZJRKLGVIEZEVEDUZDHENOQPLXMELRRECXSQIWIHISYKBEMODIOLKMCPCPKXDLAGNFEYUWHTFIGJLXBLFJJFBFJNRZYEBARYPONFUNFCAXUHNHIKSGUTGCACVOJZKYZQZJCQJZVQSWHFSWYMWPMXPSPGFYHYTTXMDBSEPYATUSQIWOBAHJRTAVCJTTLMNMQCBKFWVVAMNWOXKAHBSLQWIQBKGRUDTXD");
    msg.lat = 0.1403301834250541;
    msg.lon = 0.31649080106817173;
    msg.z = 0.8938131341592216;
    msg.z_units = 48U;
    msg.cog = 0.6590117301159398;
    msg.sog = 0.3373501378080421;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Target #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Target msg;
    msg.setTimeStamp(0.5389213352036543);
    msg.setSource(48635U);
    msg.setSourceEntity(146U);
    msg.setDestination(30186U);
    msg.setDestinationEntity(207U);
    msg.label.assign("OPHPHFWCUQMVTYXLAWAQJJZJQNKORPLNYXRQSHIQZTYTJMEBRVLTGXGABONNKIZWTPAGBRVSHXNIDSRPBZGHNVCNUIFRYVXEZAROCKGOGCTIUGGEBTZZMDFIADFKZMEFAVUWZXIFADQWJKIOVQLBWHMVEBEXWYJPDLWTHFWPLOYQPDLKGXJOUKBBUBXASO");
    msg.lat = 0.7299682811081573;
    msg.lon = 0.6578468435131251;
    msg.z = 0.2534659187560421;
    msg.z_units = 9U;
    msg.cog = 0.5677065118571838;
    msg.sog = 0.022363136281356222;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Target #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityParameter msg;
    msg.setTimeStamp(0.5544046512479436);
    msg.setSource(52375U);
    msg.setSourceEntity(254U);
    msg.setDestination(20876U);
    msg.setDestinationEntity(197U);
    msg.name.assign("SNJMTLHHFKPXXRIETMCHVMAV");
    msg.value.assign("DWBOALCHOWVMFAUHBYUBUXNUHJJMVTRUYDWDXNIRXIPZZNQGUZT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityParameter #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityParameter msg;
    msg.setTimeStamp(0.06083972492431);
    msg.setSource(40182U);
    msg.setSourceEntity(146U);
    msg.setDestination(34163U);
    msg.setDestinationEntity(60U);
    msg.name.assign("XWYRNGCWSFMDSBPLRSDTQIPEZYSCTSHNVOTPRXHLEECYJAHTQBAPIFGBEGAHZWYRATZHZNRRLJBRWQEMJ");
    msg.value.assign("AUXZBHMBYVLEUTXFCCHEFUTITPDWWFXTSEFZSLDIPPRGTERSMFVQLPWEXKFDJSFGGTQFLEMZEBQPYBOCMGQQJASNQAJWICKZKJAZSDPZVAOPSIRUJDERRLXCVLABHSFZBKRMOBOKCGLHTVWDUKUGYNCQNAXNIUKYHGPUOXAOHBGWHKRHS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityParameter #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityParameter msg;
    msg.setTimeStamp(0.4740549494540601);
    msg.setSource(2905U);
    msg.setSourceEntity(143U);
    msg.setDestination(64204U);
    msg.setDestinationEntity(26U);
    msg.name.assign("YHAQKVSPMZHTTPESCWMPYVEYSXUIAFNDJWLWDUOXQSVQBJUNUKJMQWDQYRXITITXQXVNNBVNRQIPVGRPPNGWFDEUGAZFFJCXHOYTYBRHEWSAZCFZMBISVNCQQBZVIOLJITOWA");
    msg.value.assign("TZRRLBBPDKCGYCQWDXVNKFVCNXKFKISMSTPHMUIUOMZLAOQPEGYAOUZXDQGEQQITTVXTCQZLIDSYNNFTIGWKEKRWHPQUDROECTUUUBRCKBYRAHNJVCAS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityParameter #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityParameters msg;
    msg.setTimeStamp(0.8234390335261322);
    msg.setSource(50653U);
    msg.setSourceEntity(232U);
    msg.setDestination(48512U);
    msg.setDestinationEntity(246U);
    msg.name.assign("HKRKZLRUVMYBTOAUKBQAYNTEAKLUVJDXOQKCMPNLBKQXAVBYQHMVTVPZSHTAZCBJXSMCFCHENILNZYEFZYRPGGXERIWPINWJNMETKUPJNGYTUDPZGBQFUWMNYUWFOICEDQDODJPEOXAVLIUOYHHPQRFQUFULIMELCGJWJTDZTSJVWFFBGDIREZLSEVKTMHPSHAGGXRXSOGALTBIIDRYCXOCQDOAOMFRZWHCINWQKDSS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityParameters msg;
    msg.setTimeStamp(0.3622157067958922);
    msg.setSource(52138U);
    msg.setSourceEntity(153U);
    msg.setDestination(49764U);
    msg.setDestinationEntity(1U);
    msg.name.assign("FCWFXNHCFHWHNUVAIMDKDXGLZTXSVCAJTMQQBBMXYKNZWPICSFEBWZYPFQUWZAXZMWYWZAVRSLVLNEMNTSGPGNE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityParameters msg;
    msg.setTimeStamp(0.6852243695661698);
    msg.setSource(36152U);
    msg.setSourceEntity(6U);
    msg.setDestination(17260U);
    msg.setDestinationEntity(78U);
    msg.name.assign("NHQYBOTSAOSWQITEQCIBHHBUNUKTHJVCVAADYUXQLDZWUTPLCGIANLEKIUSGZIXPFILXMLAEEDKYSFJBZUXIOCGWFPVHFOPBWZESNCRIFYONVZMJGQDDVLYAQRUWSSXKWBETLTJHBDBGXTVYFNKKUPTNCIPBACGKXDQWXDK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityParameters msg;
    msg.setTimeStamp(0.29546043897484964);
    msg.setSource(47202U);
    msg.setSourceEntity(185U);
    msg.setDestination(24721U);
    msg.setDestinationEntity(162U);
    msg.name.assign("WXGHAOBCDTBG");
    msg.visibility.assign("RLEYEPHDYIVFKRZEFIYTYJKTSLUMMOOYWZZNHOXOPWVVPBNLSBKWOVWZRXGNNDDREXEQNFDCXSMLZWORGBCVOGFFMITJDTCHBVOVLUTZJQATRQLPLDCKZAUCRGMSKBUQYWMGNUQEVAYVPFGXADELWTJJWYBNBSPXXUBPEIHYJLZGSAJFSCAEFWVMQHSDFKRIGCPFIREK");
    msg.scope.assign("XQKQUTBCBCNSTBQZLFYNSYDLSIFFQUIWWOEEFNYHMTDOJCSRWHIYLPUOG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityParameters msg;
    msg.setTimeStamp(0.3363906880600078);
    msg.setSource(1315U);
    msg.setSourceEntity(144U);
    msg.setDestination(38131U);
    msg.setDestinationEntity(233U);
    msg.name.assign("MJAHKTVEXWKUSNQERXRNTRDLFYSIJPHUGTIEDXSPKGGVBQYPFDYLZCOTVEWUKVSNAFCKEIIXDLSWWOJVIWAIJRZDPAQAJHHANXUGZHPNBGMTDEUGCNZSNFNSUTBROQJZJWLOLAQPPTBCYSXFRMKOCKCJQXCODBUCYNGIPLTZKVHBFZMUZQMPWPODOHJNOBM");
    msg.visibility.assign("JWAIOEOPYLHVDJFOXERBQIQLJFDEMPWDAQVHJLYQZXMUYVETRPJJXWKDBNNUUOMNIKPPGKNSRGFWAVKDSEPQFZHFKZKKYQZNLZFXNCATEOCGYXEITGVGZXLVRUTXKM");
    msg.scope.assign("PKUSRZATRRNOSXYEQPDUMLOWIXMKH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityParameters msg;
    msg.setTimeStamp(0.34460454460992207);
    msg.setSource(41114U);
    msg.setSourceEntity(247U);
    msg.setDestination(23614U);
    msg.setDestinationEntity(75U);
    msg.name.assign("QORDNTDLKPEXVWAXJMBILYXCSZBCXLQUUMECCPANDKHBBOHJEIINLIAJYDTTXGRHZASUCYKVEZGGJQGPXPCVTHNXCOHERCAHLROYQJUISDUCAFBYYDTLBWJMRJOZJQIBIUMBKDPNEKDQGOFGGZVAUPAUKUTZFMWZYRDYAFOWVSHVEYWOWGTNCVPQBTSINEVUFGLERMFMLDPMZIVVQFFOKQJMOHKLZFLXJRQWIPWW");
    msg.visibility.assign("KPXGQLZHTHKJVIZNBACUJNSEF");
    msg.scope.assign("FGKVRAUAZHHEFCVVOUXNZURWTZUQYYMJTBBGHSVYSABMWDNPSDRPGTDNGBBNMVYFLETCDTCKIWAQWXXHYNVTAMBICXYOBVENWCPWHOEONSJDOIQA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetEntityParameters msg;
    msg.setTimeStamp(0.6211620934167327);
    msg.setSource(39384U);
    msg.setSourceEntity(237U);
    msg.setDestination(30454U);
    msg.setDestinationEntity(116U);
    msg.name.assign("GWSHYOQHXKDFDUNSOUGJHLRVDKQSHYXJAFUZVNHVWFTRLEANTJFMACBSEIVPMPVVADMPNPDFEGJGKDEPWOZPDHZMQXNHWDRZEJJTFNKMUYECGCHCQTMLZYOXKCZGJKILLGOIVAYBSFVABMYBBEAXDOTGGIJSPWOAZZEQTIKQIBFACUCUTQESLLHORWMOBWYKBUIWSLXRCAIRXVFNYZXCNJMKKEQZUQTPSQDWYLSJ");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("GOVMQTCBLKIOUZVDRJKIOZHVGLEYPLWPSICHDKRMWQUYMDIBOLFQASURGNWOQLPSJNTVAGSGIDBLAAQEXTZMZCYMBJATXPHNXFKNHWRMCEGYHJNIXBCFFNYOKBTXRRSHDTBCYZWVIDVQAEHGFQCXSERXFQHKAZOQR");
    tmp_msg_0.value.assign("TTJQPEGFKWLBDSRDCFVMOMQJQZVEKCPKNZPRDAUEWQNRFHUWOMGJMYQFRIZTMXZKNRHMSICVSEBQXCPVLAEUGZLXEWDAOFPMVNLDAVKBSKCOOLWPYSJUZEDWXSGYPHDRQBTAUWVMJAGFNHFUVNYTUJTXRXJXLAQXKNNPYTXKEYCYGBCDTFSIOCILXOITFEJHSIWIGLZ");
    msg.params.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetEntityParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetEntityParameters msg;
    msg.setTimeStamp(0.5131555248317631);
    msg.setSource(680U);
    msg.setSourceEntity(103U);
    msg.setDestination(11765U);
    msg.setDestinationEntity(196U);
    msg.name.assign("MFQUTLIKZKVYXZEGVWUQZYSJRHAIUJRNIYOYSOLSWWMESBOSOQIFZBOXRVXCQGVIURGWEDMSDTUBGSPQZOTFJRAMLQUOITMRKHKVKJORBRXWJPIGMBLLEZBADEASENZVWBYQDOEUFQLKVQVPLXBSHLEJFIRECCBUUQHYXMT");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("BATHURHUAIYXWCMXWCHYERKHCJLKOOOJEJTAGYXTTPNKQCJSYJMGVSLLZMBLMOVNXASAVROENFUJGO");
    tmp_msg_0.value.assign("HDEULNMGRZEPPVTURJSJPKCLXYOHAZCOOQMNBRVSNCDTMOWIIHJXOHRGMCKMNKRIRKNEQFSZUWPEBEKCJUEDZDYRZVMHCTQLYXLVBEIHGGNYQKWNSGETROQTSHWFLWFMMZZAFBZYCVNIUGCLXXIPTDBAXWTULDRNUBHWJIMTZYATPDUFKADFRSXVVQKAUYINAIBTKVOPJFBSSOFOLCAGSWYPXUSKZL");
    msg.params.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetEntityParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetEntityParameters msg;
    msg.setTimeStamp(0.868063854216876);
    msg.setSource(10016U);
    msg.setSourceEntity(90U);
    msg.setDestination(1061U);
    msg.setDestinationEntity(189U);
    msg.name.assign("EMTBFCFRZSSMSGQBODYBQWTPXVNCUZQWPHIMIOGVDROKEQALYYVNZRENIHBRXYMPKLSFRKQUREVZFITIJLJEMWPJDGOEZMOEQGANQVYIXZZGNGSTDUVJQUXPZBAWISDJUBPYNX");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("NZTKRXKFQPTNSEBRYAPYPXL");
    tmp_msg_0.value.assign("JXIYMQRPEFQTRXFNFVWUEZLPLMVTUSTQUJILDVZERYUFYQXYDRDNCCRYAEHFVRTHVOMGKKSMKJWLZKUDOWVGCANRUIHNOPCQATVDGCZHZZSKHUJSHKRCXNPWIHK");
    msg.params.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetEntityParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SaveEntityParameters msg;
    msg.setTimeStamp(0.41310868314205784);
    msg.setSource(34373U);
    msg.setSourceEntity(120U);
    msg.setDestination(30964U);
    msg.setDestinationEntity(213U);
    msg.name.assign("ZEFITONYFSLEWXILPBTSUTENPIKFTMIYJPBRFGQNACFJYAVHRMHWERDEXVZLCXHETSBIUCVDJSVDWVGWGPPTQEUSJVFZZURYRLCZRUNKYDNYTWFDORZBRDJAHSKKHPUCWHLQMGSBWOHHKVAEIGWZDUTMPNSOVYKXKAMLIOEASOLKQUQMOZAABTGWQDONXCJOHBXCMHCUQVXMFL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SaveEntityParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SaveEntityParameters msg;
    msg.setTimeStamp(0.27837940398930283);
    msg.setSource(38271U);
    msg.setSourceEntity(137U);
    msg.setDestination(20326U);
    msg.setDestinationEntity(198U);
    msg.name.assign("IZJRPVCSAGDLTJZQEAOCTCATDAVCKXYWYBGVNOCGVWICBIBPNXPXFFGRLMOAEYGNNHLNVGSIYAOWOIWLRJXNRXUCOQNHFKUKVBTMIFBUDZEDJIESPZHBDRDTISOUEEUVORUZWM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SaveEntityParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SaveEntityParameters msg;
    msg.setTimeStamp(0.41900387189227484);
    msg.setSource(30376U);
    msg.setSourceEntity(68U);
    msg.setDestination(41261U);
    msg.setDestinationEntity(126U);
    msg.name.assign("HKJHEVJEMFAOXXNUYSMQMUMIIZZVTTLTNLAVPZNCGUVKZFEAXTECSKYURNMHQXAOAPSQOOHRPRMDVTGHRZRGBUSCWHFWRLBBWMYIICXJNOJFVYSZWBPPIUQGAWQNJTLAJOYDTQQDPABCSDKGWOSMKU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SaveEntityParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CreateSession msg;
    msg.setTimeStamp(0.49314739793339635);
    msg.setSource(8630U);
    msg.setSourceEntity(248U);
    msg.setDestination(22250U);
    msg.setDestinationEntity(211U);
    msg.timeout = 1326429221U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CreateSession #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CreateSession msg;
    msg.setTimeStamp(0.5163317355384367);
    msg.setSource(50432U);
    msg.setSourceEntity(216U);
    msg.setDestination(53820U);
    msg.setDestinationEntity(225U);
    msg.timeout = 2986781497U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CreateSession #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CreateSession msg;
    msg.setTimeStamp(0.22222435975897348);
    msg.setSource(50026U);
    msg.setSourceEntity(92U);
    msg.setDestination(57407U);
    msg.setDestinationEntity(131U);
    msg.timeout = 2356101919U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CreateSession #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CloseSession msg;
    msg.setTimeStamp(0.8843345622976594);
    msg.setSource(61083U);
    msg.setSourceEntity(68U);
    msg.setDestination(7354U);
    msg.setDestinationEntity(221U);
    msg.sessid = 1190823380U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CloseSession #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CloseSession msg;
    msg.setTimeStamp(0.6898390781103015);
    msg.setSource(47513U);
    msg.setSourceEntity(154U);
    msg.setDestination(16316U);
    msg.setDestinationEntity(134U);
    msg.sessid = 2106494202U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CloseSession #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CloseSession msg;
    msg.setTimeStamp(0.2848156047925998);
    msg.setSource(35461U);
    msg.setSourceEntity(211U);
    msg.setDestination(9258U);
    msg.setDestinationEntity(136U);
    msg.sessid = 3932885059U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CloseSession #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionSubscription msg;
    msg.setTimeStamp(0.19808479112024158);
    msg.setSource(48543U);
    msg.setSourceEntity(211U);
    msg.setDestination(19921U);
    msg.setDestinationEntity(248U);
    msg.sessid = 3125499761U;
    msg.messages.assign("VRCMMZWWYLLPKWBNLITDCPVNYNZQZPEUXORSZHUNRTWIODZFJFTHGNLYXMOGZMUVDZUSEOYASVLITPDKLPARRUYRKYAQCDKXOQSWSAGGJAJXRBMNIJHUVDGUFSVXUNCTRLAHXZAFLT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionSubscription #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionSubscription msg;
    msg.setTimeStamp(0.22422154000435757);
    msg.setSource(16839U);
    msg.setSourceEntity(189U);
    msg.setDestination(60621U);
    msg.setDestinationEntity(228U);
    msg.sessid = 950610705U;
    msg.messages.assign("QYCOPXHFBMCHKCTJPOFDJWNCPXYTOHDBTUBXL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionSubscription #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionSubscription msg;
    msg.setTimeStamp(0.5229507073418911);
    msg.setSource(6779U);
    msg.setSourceEntity(113U);
    msg.setDestination(58163U);
    msg.setDestinationEntity(113U);
    msg.sessid = 3686139322U;
    msg.messages.assign("XBIJOBKXECOHULBELGPNNVVTEPWQXUCXPHBWTGJKRUNMBDSSCYSFTHPMQZZJIPXUFAALUCGSWKFJFHMQORSQFGNFMRIRPQVAGZSNVXZKEKIUDWJMGBDCVEYFUKLFPPWAJCDGTARZUMRDRVVQHIDLEARYOBDZVYTMTCBWGCHIAZEOOYEVBJRATNWEHKTOINLUKCKOSMLWQTYFPBWLHISSZJOUDZNOFJYYQCLTLPDQXIDYSM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionSubscription #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionKeepAlive msg;
    msg.setTimeStamp(0.9006964257868697);
    msg.setSource(12872U);
    msg.setSourceEntity(166U);
    msg.setDestination(51586U);
    msg.setDestinationEntity(21U);
    msg.sessid = 3376607326U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionKeepAlive #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionKeepAlive msg;
    msg.setTimeStamp(0.1829709631616514);
    msg.setSource(10360U);
    msg.setSourceEntity(141U);
    msg.setDestination(18500U);
    msg.setDestinationEntity(197U);
    msg.sessid = 2274124910U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionKeepAlive #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionKeepAlive msg;
    msg.setTimeStamp(0.7466844349787651);
    msg.setSource(19683U);
    msg.setSourceEntity(197U);
    msg.setDestination(41039U);
    msg.setDestinationEntity(27U);
    msg.sessid = 2385051376U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionKeepAlive #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionStatus msg;
    msg.setTimeStamp(0.3260228881838443);
    msg.setSource(62098U);
    msg.setSourceEntity(96U);
    msg.setDestination(35049U);
    msg.setDestinationEntity(63U);
    msg.sessid = 2873818548U;
    msg.status = 60U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionStatus msg;
    msg.setTimeStamp(0.24451443730525002);
    msg.setSource(5682U);
    msg.setSourceEntity(122U);
    msg.setDestination(54922U);
    msg.setDestinationEntity(139U);
    msg.sessid = 1573669084U;
    msg.status = 217U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionStatus msg;
    msg.setTimeStamp(0.17972561053526537);
    msg.setSource(11727U);
    msg.setSourceEntity(169U);
    msg.setDestination(54489U);
    msg.setDestinationEntity(236U);
    msg.sessid = 3505638259U;
    msg.status = 91U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PushEntityParameters msg;
    msg.setTimeStamp(0.8966756545706891);
    msg.setSource(52461U);
    msg.setSourceEntity(58U);
    msg.setDestination(40518U);
    msg.setDestinationEntity(159U);
    msg.name.assign("KRJERYBEOUCUPCCOFIGUBEPMUWZVJFTZGIGWVMODRXYWBUAXCBYHJOFWMKUTJSXNZIDIKJTFWPUDIAXNPGXXBVFTQBNKZRZIQYVELHJHHYFXTWAHAORBJLCZVGDSFPVLZRNQDATSAWYMPDEDPYMNMBEEVCCDTWVPMSNSKZKGCSXGICQMALNEA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PushEntityParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PushEntityParameters msg;
    msg.setTimeStamp(0.6285219111844125);
    msg.setSource(33888U);
    msg.setSourceEntity(48U);
    msg.setDestination(44591U);
    msg.setDestinationEntity(156U);
    msg.name.assign("KISLUIFSJMWNEDITIFJYCGSTZSLQLTTWDRMPEXITVEIUBDSRUHNONCH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PushEntityParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PushEntityParameters msg;
    msg.setTimeStamp(0.7896057986454933);
    msg.setSource(13916U);
    msg.setSourceEntity(31U);
    msg.setDestination(11417U);
    msg.setDestinationEntity(172U);
    msg.name.assign("OCCSLPWRKDFQMVCFKXZTXOWIMCVSZGWSIXSHXIWUQBXFDSFYZJEMSHGQNBLYPZZUNKOHYSFDZMWDUMRQUJQRKRKVJEHTAGKVGLWJTEAONKKLKEMAXHVCRYJYIYDFEWNRYNUYIESBCOUGYFUMOJTCCSXGXBU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PushEntityParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PopEntityParameters msg;
    msg.setTimeStamp(0.32185126836519806);
    msg.setSource(55794U);
    msg.setSourceEntity(250U);
    msg.setDestination(55977U);
    msg.setDestinationEntity(153U);
    msg.name.assign("KTPVNHTHZPVGSNGMKUPLLINYOMFXBHUDYUWANVFJTQSXKOCHUQSYHGBZOXXFURMVBBMPOYCKXTSJPRORVSEHDLPSWAJHVDBFVBIBTLXZIAYTEBVCJJDAHUKGFWQAOXBWCRLREECMUEIUKAOJXLOUKMZWIZGMIQZXYMRRQWFQEARULJCTHTDIFWICENRJDZNSZECZIFQJONTOGJRXBAYGLQFSNYGNP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PopEntityParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PopEntityParameters msg;
    msg.setTimeStamp(0.2644423621028231);
    msg.setSource(62661U);
    msg.setSourceEntity(212U);
    msg.setDestination(32487U);
    msg.setDestinationEntity(21U);
    msg.name.assign("MHIRXKAEGSEQCLUTXMWBDILYDOZNUESHJWBGPOAYBPKJPCLEOPSGQVSIMGMWMPULFQPFJFMTQZGBXAEAATRTHRXJUWRZRERZNRUKSZTSOVVNWEBNDKVXJBZDPXWFBBQNKPNTKQUUYUMFEWSSOZF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PopEntityParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PopEntityParameters msg;
    msg.setTimeStamp(0.6856504292641661);
    msg.setSource(26356U);
    msg.setSourceEntity(59U);
    msg.setDestination(44347U);
    msg.setDestinationEntity(246U);
    msg.name.assign("VHXVQNZIYSIGQRWEKAAINHGPTNFRKQDHIUHLTTZBTBXHCFQMIIJRHMFACNVSKGKJCWFEFSZUOKZEPEYXJXERLWQMOAYGKGPGZURCATLGIJWVMBIYXDGLSSFFQUOBUJPKADSOPFJYCQNZWVXDVXUJCZOMSYOBDYXTTT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PopEntityParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IoEvent msg;
    msg.setTimeStamp(0.9700645360410002);
    msg.setSource(22176U);
    msg.setSourceEntity(193U);
    msg.setDestination(2551U);
    msg.setDestinationEntity(125U);
    msg.type = 11U;
    msg.error.assign("EFALIDAWBKOJVZBBIVXPRMNZWQBNNGOXHFHUFTMZLTQWVKXVSPZHCGDXOJVOHLCDXMQPORIRDTNNHQKHUAUWONHXTAIYYVAKFYDCLNBMIMJMYPWEHICKGBJYYWZSDIUJFSKOOBSCKQAUFRRSEQIERFJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IoEvent #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IoEvent msg;
    msg.setTimeStamp(0.7248780265949741);
    msg.setSource(49938U);
    msg.setSourceEntity(46U);
    msg.setDestination(43610U);
    msg.setDestinationEntity(187U);
    msg.type = 119U;
    msg.error.assign("BWUMYCJFGGNIAJYMRTTPORGEWJCZFPRVBROISRAOVLPGJWIHTZLHRFCKKNWSCANQBERKKLYHMTKMDSZPXUNVHMJSUNEHOYVDVEKEMXQWIIHGVVHIMULHEDASCZTFBQZDKGBVQSSZTWAMYZQDPOWIAVRLXLDGLQTNROXDIXYUFKU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IoEvent #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IoEvent msg;
    msg.setTimeStamp(0.38176022561920464);
    msg.setSource(37113U);
    msg.setSourceEntity(211U);
    msg.setDestination(33073U);
    msg.setDestinationEntity(215U);
    msg.type = 125U;
    msg.error.assign("NUTSJRJWVWPTRDAAHMW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IoEvent #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxFrame msg;
    msg.setTimeStamp(0.22816524961753615);
    msg.setSource(20722U);
    msg.setSourceEntity(103U);
    msg.setDestination(31120U);
    msg.setDestinationEntity(241U);
    msg.seq = 29927U;
    msg.sys_dst.assign("POWSZGFMLKAOLXBLZQNAEPPYIKFJGOMLC");
    msg.flags = 186U;
    const signed char tmp_msg_0[] = {-61, -26, -16, 18, -125, 93, -74, -8, -109, 4, -45, 75, -86, -127, 46, -80, 26, -7, 35, 94, -104, 24, 82, 126, -105, 95, -17, -23, -60, -29, -13, -83, -6, -51, 41, -56, 87, 91, 29, 24, 11, -76, 40, -56, -24, 4, -84, -79, 18, 49, -115, 116, 96, -83, 102, 50, 52, -68, 44, 73, 33, -31, 42, -38, 125, 2, 92, -70, -40, -17, -93, -55, -74, 81, -35, 9, 45, 60, 30, -56, -39, -44, -12, 105, -40, 49, 24, 53, -16, 56, 11, 93, -126, 81, -127, 17, -54, 81, -9, -32, 3, 35, 114, 8, -6, -49, -106, 85, 10, -95, 59, 92, 119, 16, 52, 47, -56, 45, 31, -119};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxFrame #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxFrame msg;
    msg.setTimeStamp(0.6885541863996634);
    msg.setSource(29774U);
    msg.setSourceEntity(64U);
    msg.setDestination(30322U);
    msg.setDestinationEntity(61U);
    msg.seq = 24389U;
    msg.sys_dst.assign("HRWWIESPJJKHNZGQVHIDBTVWDNGYOAAUNCBHUGJKBKOJXHIRRVILPBMJNACGQRTDOOKHQRLNGUJAWLILGMCZFUNPZLFGITXAPKZEMIXAHEGCUOMYXWZEZPX");
    msg.flags = 203U;
    const signed char tmp_msg_0[] = {-78, -126, -125, 103, -42, 8, 12, -15, 60, -82, 75, -71, -19, -51, 26, 118, -95, -14, -22, 123, -55, -55, -84, -127, 94, 44, 103, -110, -72, -52, -16, 9, -37, -34, 31, -58, 24, 18, -45, 72, 112, 50, -80, -74, -4, -12, -118, -38, -35, 24, 112, 121, -122, -62, 40, -11, -26, -3, -121, 68, -113, -76, -53, -71, 13, -114, -84, 41, 73, 25, -17, -124, 83, 53, -7, -12, 13, -62, -23, 60, 90, -99, 84, 74, 78, 17, 41, 58, 103, 106, -18, 87, -1, 88, -70, 72, 26, -124, -117, 7, 58, 60, 115, -7, 37, -54, 126, 33, 42, 105, -1, -51, -58, 54, 108, 98, -91, -7, 123, 2, 86, 10, 74, -36, -3, 102, 21, 16, 111, 18, -11, -84, 105, 18, -57, -36, 81, 28, -66, -29, 13, 106, -112, -35, 89, -27, -27, -47, -44, -37, -127, 77, -74, -60, 10, 62, 112, 58, 126, 106, -98, -107, 3, 99, -30, -51, 16, -5, -31, -65, 11, 86, 65, -90, -83, 1, -48, 108, -18, -67, 115, -100};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxFrame #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxFrame msg;
    msg.setTimeStamp(0.7346984195685905);
    msg.setSource(18686U);
    msg.setSourceEntity(3U);
    msg.setDestination(32302U);
    msg.setDestinationEntity(94U);
    msg.seq = 21515U;
    msg.sys_dst.assign("WDPTCEJKAUAZOSCWNNYPHMDSHJMPXMCUGQYUFFPZEBYAIVJQYRVFLZVSAQOTV");
    msg.flags = 165U;
    const signed char tmp_msg_0[] = {38, 109, 37, -117, -82, 47, -76, -22, -8, -85, 69, -75, -66, 16, 109, 114, -10, -29, 85, -81, 110, -24, -71, -104, 60, -71, -128, -57, -75, -67, 83, -119, -87, -18, 23, -39, 58, -105, 40, -103, 33, 46, 17, 66, -114, 28, 28, 73, -10, -128, -35, 37, 103, -59, -77, 7, 17, -46, -17, 100, -122, 55, -28, 4, 90, -41, -4, -77, 12, 66, 116, 110, -32, 18, -62, -45, 17, -72, -38, -10, -56, 50, -99, -95, -22, -106, -38, 38, -51, 16, -103, 44, 121, 122, -47, 39, 109, -107, 58, 98, 29, 88, 24, -105, 70, -120, -38, 89, 81, -96, -126, 125, -118, 96, -55, 30, -74, 14, 112, 122, -84, 69, -53, -39, -4, 110, -103, 89, 16, 33, 101, -82, 30, 80, -68, 85, -10, -31, 28, -99, -48, -70, 113, 69, 114, 74, 77, 10, 95};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxFrame #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamRxFrame msg;
    msg.setTimeStamp(0.1758899452591446);
    msg.setSource(35496U);
    msg.setSourceEntity(144U);
    msg.setDestination(25685U);
    msg.setDestinationEntity(41U);
    msg.sys_src.assign("VWHCQTAXONU");
    msg.sys_dst.assign("FFUTDTAPLNCYKCMTVWRTWYJXSZMCNWYBOORUFREGABLOULGYDHVKNLJBOFZCDKHIZ");
    msg.flags = 196U;
    const signed char tmp_msg_0[] = {83, -27, -74, 74, -74, -115, 72, -99, 33, -1, 93, 77, -46, 42, -50, -32, 17, -125, 47, -110, -24, -65, -103, -91, 72, -24, -103, -126, -114, 21, 103, 46, -5, 123, 123, -38, 94, 28, -94, -53, 65, 89, -113, 20, 79, 84, 91, 36, -53, -33, -110, 46, 85, -110, 55, -39, 70, -85, 11, -24, 104, 90, -116, 124, -73, -109, 103, -51, 67, 101, -15, -49, 89, -10, 53, -51, 115, -86, 93, -70, 1, 77, -98, 91, 116, -102, -123, 46, 61, 111, 47, -60, -85, -2, -31, -113, 86, 14, -50, 55, -23, 43, -40, -7, -67, -71, -103, 55, -105, 86, -60, 71, 96, 108, 40, 116, 39, -116, -116, 67, -57, 58, -71, -25, -3, 97, 52, -75, 39, -74, 74, -69, 58, -32, -10, -27, -108, -120, 125, 20, -70, 13, 19, -11, -97, -55, 66, -13, 67, -79, -125, 24, -43, 5, 81, -93, 7, -4, 112, 91, -98, 17, 122, -74, 42, 95, -91, -25, 49, 16, -33, -18, 34, -79, 55, -82, 90, 44, 61, 110, 41, 46, -20, 36, 16, 93, -43, 90, -103, 70, -43, 94, 117, 9, 92, -54};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamRxFrame #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamRxFrame msg;
    msg.setTimeStamp(0.5814222610528671);
    msg.setSource(27102U);
    msg.setSourceEntity(161U);
    msg.setDestination(24884U);
    msg.setDestinationEntity(154U);
    msg.sys_src.assign("KVDTBBMROGVHGYEGAWPOFWKDUANHKUCQDHXTSNIQJHOQAHCBFGDZMOTJWNJGBLMTRVGPLIKNXWOVHDJLXGERQLWSZFCAEZZNMNFZXPIHVFSQJATETNZYLPFPUISEMTZUPHACMYNIXJOBXYRDHMSCZWICDACJJWAFOFUKIVUTEXTBSPUOXGKKGBGZIPUKFPALQWBNEJMRVVRYLCTUR");
    msg.sys_dst.assign("PPHTTGLNFDYQJEEZNQAVOMKWZ");
    msg.flags = 51U;
    const signed char tmp_msg_0[] = {-23, 85, 102, 67, -39, 5, 70, -35, 29, -11, -19, 87, -81, -120, -65, -121, 91, -111, -103, 95, -38, 116, 69, 96, -7, 0, 69, 6, -34, -87, -73, -23, -23, 73, -72, 103, -120, 8, 54, 78, -126, -36, -19, 55, 123, -12, -14, -43, -58, 67, 77, -115, -34, 16, 125, 41, -62, 51, -32, -128, 105, 114, -8, -21, 12, 95, -77, -5, 87, 19, -34, 88, 16, -97, 52, -72, -69, 115, -19, -63, 32, -92, 97, 8, -8, 88, -85, 81, 98, -99, -82, -23, 68, -14, 80, -109, -43, -42, -115, 26, -88, -75, 102, 3, -99, -30, -68, -73, -56, 83, -75, -26, -40, -34, 74, -92, 103, -94, 67, 109, 15, 1, 62, 76, -20, 42, 29, -51, 58, 111, 3, -63, -116, -15, 84, -128, 16, -5, 58, 122, -58, -24, 63, -80, -126, -128, 126, -35, -91, 61, 34, -32, -20, -45, -94, 60, -60, -96, -14, 14, -43, 110, -35, -122, -77, -92, 39, 101, 118, -27, -92, 53, -126, -23, -43, -90, -14, -6, -18, -72, -86, -31, -47, 67, -86, -39, 15, 41, 69, 35, -70, 89, 106, -107, -42, 14, -75, 110, -97, 112, -13, 16, 126, -88, -18, -82, 86, 72, -50, -77, -108, -44, -12, -94, -78, -99};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamRxFrame #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamRxFrame msg;
    msg.setTimeStamp(0.2746706484871768);
    msg.setSource(13790U);
    msg.setSourceEntity(25U);
    msg.setDestination(58898U);
    msg.setDestinationEntity(143U);
    msg.sys_src.assign("ZPTUGEWGCZMQFCXHFYOCVPXFRDEPXXNXTIQFVWTWASHPFVRYZVEZEQCRBTIJXCFZBLJLJIUYLUOLRVRLHEEQESKLQMQSYPBQKYUHPKGLVIBYURLZMEJJAAHAFTVTB");
    msg.sys_dst.assign("CJTNNXMZYUVZNZUQXLSRSZWWCFSXTFFBHTGKIQKXGCPQWPTJLVVMKAZGBCWDZENWBPTRILAEZEFOCHJSBFYHMJHLOXWFDEUTSCQFSFOEODNA");
    msg.flags = 156U;
    const signed char tmp_msg_0[] = {-51, -48, -101, 96, -94, -88, -74, -35, 54, -85, -69, -21, 11, 121, -12, -98, -120, 122, -61, 121, 57, -47, 63, 73, -31, -98, -118, -9, -38, 89, -93, -126, 78, 16, 24, -24, -53, 109, 123, 64, -5, -30, -113, 59, 74, 21, -35, -97, -127, -122, 120, 89, -101, 61, 68, -62, -99, 64, -66, -29, 100, 55, 17, -23, 110, 72, -92, 106, 121, -96, -57, 104, 37, -122, -110, 33, -114, 97, -25, 2, 43, -92, -67, 115, -62, -11, 28, 20, 9, -114, 124, -85, 74, 91, -54, -79, -32, -78, -47, -41, -87, 97, 42, -126, -117, -63, -30, -65, -47, 122, 41, 64, 121, 68, 91, -77, -18, 119, -125, 20, -127, -121, 38, -125, -127, 84, -97, 71, -110, 19, 21, 101, 106, -58, 36, 103, -73, -44, 107, -45, -33, 122, -22, 44, -116, -83, -29, -9, -97, -73, -89, -2, -124, 31, 125, -63, 26, -52, -116, -102, 122, 109, -91, -118, 115, 112, 24, 2, 125, 67, 126, 25, 66, 50, -87, -22, 90, -128, 29, -67, 92, -87, 33, 8, -63, -37, -81, 70, 100, 51, -3, -26, -26, -35, -67, -14, -10, 9, -63, 71, -111, -86, -55, 26, -86, -47, 41, -56, -74, 108, -13, 45, 64, -38, 112, 62, 8, 61, -16, -62, 123, -70, 102, -43, -7, 83, -112, -1, 105, -24, 56, -65, 63, 97, -56, 95, 63, 106, -124, -6, 49, -12, -29, -1, -1, -68, 32, -57, -78};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamRxFrame #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxStatus msg;
    msg.setTimeStamp(0.7932112360672158);
    msg.setSource(1694U);
    msg.setSourceEntity(81U);
    msg.setDestination(7116U);
    msg.setDestinationEntity(94U);
    msg.seq = 37371U;
    msg.value = 118U;
    msg.error.assign("DEGFFVJNFZOUFUYYQWTZIURCUGVHMBVHYXEXFCGNYBNKVWWSQAOZTFMYWTKXGWPPAJBYPMAWOLWGDOUKKIDIVLXJJNAALCUCCYGRIJMZUXOCNNHFRSZOQSAERSDTXPKDTBQWQQLBYKTKBPIJXVFCNIABJMEHMHPWCOJQHAMTSFVSXEHLMEKRNGLRFLJUYEBQZCNHEQCPUDRVVXEDUDIIB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxStatus msg;
    msg.setTimeStamp(0.6156325358473974);
    msg.setSource(31405U);
    msg.setSourceEntity(113U);
    msg.setDestination(12139U);
    msg.setDestinationEntity(3U);
    msg.seq = 41465U;
    msg.value = 219U;
    msg.error.assign("LFUHJEKLHLOKOOPGSFVPJDGYBZJXWGOPLDBQMSEBCJTHKSLALHQXPBMESAMXEDZYYILEJXLJIREVNNSANWZDBDRVTFCNVEZKPCRUOMJVPCCXGQYPOTHSWCCNZWHHKDAAZAANFQJUQVTHBAAYLVOOQIZMFYDWMWEWEYXXUUTBZMTUFEDFIYCKMGQKQRWKKRC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxStatus msg;
    msg.setTimeStamp(0.8077292096440891);
    msg.setSource(49738U);
    msg.setSourceEntity(166U);
    msg.setDestination(59794U);
    msg.setDestinationEntity(5U);
    msg.seq = 7375U;
    msg.value = 148U;
    msg.error.assign("LNJOBNBRLPFHENFKLUTYWSEWJDJBHEQQYIBCBYEYPOTJHKMBSGKZIHJNGLDZRBAWVAUUYTGXBDAFJLSAQLLOYCRUQUFBCXRGQHMYTMKNKHKXWLIPXYTYMOAMLHASVNDEZQBIRMVZAXRDPUCHEFJDIZWPNHTCCEQRVZFSOMZSAQHESOGXXKIFSODXOVIWPYGFJFVZLGWADVDSZTPONJXSEKURRWT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamRxRange msg;
    msg.setTimeStamp(0.891598828002397);
    msg.setSource(40054U);
    msg.setSourceEntity(145U);
    msg.setDestination(17005U);
    msg.setDestinationEntity(132U);
    msg.seq = 8542U;
    msg.sys.assign("SPOKCZPVQXWHULTDPTLEDOZHVQNFFXRHWFQJPWPXJTIDGBACRYNXEDZDUNMHEPYOMOIICDQLXEPSMTJKCXJXQOMWP");
    msg.value = 0.8018233302433878;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamRxRange #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamRxRange msg;
    msg.setTimeStamp(0.7944140556377961);
    msg.setSource(60470U);
    msg.setSourceEntity(5U);
    msg.setDestination(27639U);
    msg.setDestinationEntity(162U);
    msg.seq = 51410U;
    msg.sys.assign("JJKNPAVCYHMZICA");
    msg.value = 0.797736519709201;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamRxRange #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamRxRange msg;
    msg.setTimeStamp(0.16023060904180209);
    msg.setSource(971U);
    msg.setSourceEntity(212U);
    msg.setDestination(56770U);
    msg.setDestinationEntity(53U);
    msg.seq = 22088U;
    msg.sys.assign("EKEJSXAABGNDJVWUFDNZMHJHUWFVLPCQJPZOTCEOMMBBELNXHAKTRYASMMAKWPQXCWPHPPTTKVGDIFIIXBUFSYBTRENSZCIFPCWHKKNMDCJPCMGSHNIXGOXCUQKYIITJUDLYEVRYYOFDCWRVGVTRJVDROUBNPSFYUDLBOWZLUOXEQZXVYHUGZOFLZTZCHTIJN");
    msg.value = 0.7283897686455113;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamRxRange #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxRange msg;
    msg.setTimeStamp(0.7956260849375854);
    msg.setSource(9094U);
    msg.setSourceEntity(58U);
    msg.setDestination(41638U);
    msg.setDestinationEntity(65U);
    msg.seq = 2709U;
    msg.sys_dst.assign("MOTVFEJWBLGLPXUXFWKAYVVAECENHZBYESYADZPUVGDBJSBOHGUFCTZIHXDWVQTFRBVJRQEDIHL");
    msg.timeout = 0.8902204452573985;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxRange #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxRange msg;
    msg.setTimeStamp(0.0705043800698888);
    msg.setSource(54936U);
    msg.setSourceEntity(164U);
    msg.setDestination(32901U);
    msg.setDestinationEntity(91U);
    msg.seq = 38945U;
    msg.sys_dst.assign("YOPOQAYAVRTVAVSUTUXLBWWFADAXRDHSMT");
    msg.timeout = 0.8137135954810204;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxRange #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxRange msg;
    msg.setTimeStamp(0.026548685114963222);
    msg.setSource(27003U);
    msg.setSourceEntity(152U);
    msg.setDestination(33047U);
    msg.setDestinationEntity(198U);
    msg.seq = 2075U;
    msg.sys_dst.assign("ZBTHDQBPQYBKFLAVHPCFKMCQWZTEIFCIMFPJAFGDARZQAHZWTBSDJOAUIJEXUGKRPITZMLOUJXBOIWGLSHSIKNQXNICW");
    msg.timeout = 0.6119411453758037;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxRange #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormCtrlParam msg;
    msg.setTimeStamp(0.02820987736330116);
    msg.setSource(21867U);
    msg.setSourceEntity(69U);
    msg.setDestination(45825U);
    msg.setDestinationEntity(150U);
    msg.action = 175U;
    msg.longain = 0.7718599557670442;
    msg.latgain = 0.253417211996967;
    msg.bondthick = 764529701U;
    msg.leadgain = 0.22465955884578748;
    msg.deconflgain = 0.28222130562076053;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormCtrlParam #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormCtrlParam msg;
    msg.setTimeStamp(0.6156148427450476);
    msg.setSource(15079U);
    msg.setSourceEntity(199U);
    msg.setDestination(10272U);
    msg.setDestinationEntity(152U);
    msg.action = 61U;
    msg.longain = 0.1475590770077142;
    msg.latgain = 0.842655455014769;
    msg.bondthick = 1128608067U;
    msg.leadgain = 0.6161498705537564;
    msg.deconflgain = 0.1346869281943862;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormCtrlParam #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormCtrlParam msg;
    msg.setTimeStamp(0.8455309442227427);
    msg.setSource(39164U);
    msg.setSourceEntity(165U);
    msg.setDestination(8727U);
    msg.setDestinationEntity(198U);
    msg.action = 197U;
    msg.longain = 0.534861613244972;
    msg.latgain = 0.7912005974384569;
    msg.bondthick = 1879680001U;
    msg.leadgain = 0.7399890018437519;
    msg.deconflgain = 0.6976908473793088;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormCtrlParam #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationEval msg;
    msg.setTimeStamp(0.9293194535942019);
    msg.setSource(19167U);
    msg.setSourceEntity(207U);
    msg.setDestination(32078U);
    msg.setDestinationEntity(226U);
    msg.err_mean = 0.7449949831915001;
    msg.dist_min_abs = 0.8292817194490264;
    msg.dist_min_mean = 0.45012866522938066;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationEval #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationEval msg;
    msg.setTimeStamp(0.8908780441373817);
    msg.setSource(28736U);
    msg.setSourceEntity(105U);
    msg.setDestination(13389U);
    msg.setDestinationEntity(124U);
    msg.err_mean = 0.28145234461291135;
    msg.dist_min_abs = 0.7784950363163241;
    msg.dist_min_mean = 0.02176242890513347;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationEval #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationEval msg;
    msg.setTimeStamp(0.2874025179683486);
    msg.setSource(6952U);
    msg.setSourceEntity(49U);
    msg.setDestination(53745U);
    msg.setDestinationEntity(0U);
    msg.err_mean = 0.3526133957084928;
    msg.dist_min_abs = 0.56944638340306;
    msg.dist_min_mean = 0.3233031927433394;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationEval #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationControlParams msg;
    msg.setTimeStamp(0.30500095832257423);
    msg.setSource(46961U);
    msg.setSourceEntity(198U);
    msg.setDestination(40089U);
    msg.setDestinationEntity(26U);
    msg.action = 93U;
    msg.lon_gain = 0.24714747706848184;
    msg.lat_gain = 0.5519865493358019;
    msg.bond_thick = 0.16833407868565753;
    msg.lead_gain = 0.5639945901035548;
    msg.deconfl_gain = 0.5795131247576925;
    msg.accel_switch_gain = 0.2116660635311336;
    msg.safe_dist = 0.4782319877043033;
    msg.deconflict_offset = 0.6621973317316961;
    msg.accel_safe_margin = 0.019086142970671238;
    msg.accel_lim_x = 0.5491450253306834;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationControlParams #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationControlParams msg;
    msg.setTimeStamp(0.01944659248996705);
    msg.setSource(48792U);
    msg.setSourceEntity(81U);
    msg.setDestination(13357U);
    msg.setDestinationEntity(243U);
    msg.action = 81U;
    msg.lon_gain = 0.730325045172186;
    msg.lat_gain = 0.29038733243795867;
    msg.bond_thick = 0.8426392524999711;
    msg.lead_gain = 0.4284776680389888;
    msg.deconfl_gain = 0.17573864453178334;
    msg.accel_switch_gain = 0.2557308271894907;
    msg.safe_dist = 0.7698466783289505;
    msg.deconflict_offset = 0.9264032007470477;
    msg.accel_safe_margin = 0.7466743015340416;
    msg.accel_lim_x = 0.17492160417764047;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationControlParams #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationControlParams msg;
    msg.setTimeStamp(0.12672950354409362);
    msg.setSource(26454U);
    msg.setSourceEntity(153U);
    msg.setDestination(57206U);
    msg.setDestinationEntity(185U);
    msg.action = 160U;
    msg.lon_gain = 0.5131487657562427;
    msg.lat_gain = 0.50530588731243;
    msg.bond_thick = 0.934332072502272;
    msg.lead_gain = 0.8063012641863142;
    msg.deconfl_gain = 0.1298696959261545;
    msg.accel_switch_gain = 0.31386989587025027;
    msg.safe_dist = 0.008708994258328828;
    msg.deconflict_offset = 0.5743099035447689;
    msg.accel_safe_margin = 0.4620816624092915;
    msg.accel_lim_x = 0.8857832258983792;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationControlParams #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationEvaluation msg;
    msg.setTimeStamp(0.8298895717873538);
    msg.setSource(40733U);
    msg.setSourceEntity(94U);
    msg.setDestination(37195U);
    msg.setDestinationEntity(131U);
    msg.type = 25U;
    msg.op = 164U;
    msg.err_mean = 0.28439697643307604;
    msg.dist_min_abs = 0.977830729581299;
    msg.dist_min_mean = 0.21166788238300938;
    msg.roll_rate_mean = 0.9094769259361859;
    msg.time = 0.31364847754898584;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 20U;
    tmp_msg_0.lon_gain = 0.7107275345436458;
    tmp_msg_0.lat_gain = 0.8531225152977778;
    tmp_msg_0.bond_thick = 0.7509903875535735;
    tmp_msg_0.lead_gain = 0.10127803824151638;
    tmp_msg_0.deconfl_gain = 0.9854071924037769;
    tmp_msg_0.accel_switch_gain = 0.5124804137847688;
    tmp_msg_0.safe_dist = 0.1547946354536769;
    tmp_msg_0.deconflict_offset = 0.3141396600829178;
    tmp_msg_0.accel_safe_margin = 0.4016355336878581;
    tmp_msg_0.accel_lim_x = 0.8228978728791575;
    msg.controlparams.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationEvaluation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationEvaluation msg;
    msg.setTimeStamp(0.5318087026857757);
    msg.setSource(21228U);
    msg.setSourceEntity(140U);
    msg.setDestination(8791U);
    msg.setDestinationEntity(186U);
    msg.type = 45U;
    msg.op = 135U;
    msg.err_mean = 0.49318404651110004;
    msg.dist_min_abs = 0.5866427501829969;
    msg.dist_min_mean = 0.611822879224396;
    msg.roll_rate_mean = 0.2967535040452791;
    msg.time = 0.7318905598072817;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 42U;
    tmp_msg_0.lon_gain = 0.8193660341427359;
    tmp_msg_0.lat_gain = 0.5496736511261511;
    tmp_msg_0.bond_thick = 0.019691189463418524;
    tmp_msg_0.lead_gain = 0.13838099815018212;
    tmp_msg_0.deconfl_gain = 0.863318771188494;
    tmp_msg_0.accel_switch_gain = 0.6966060628954311;
    tmp_msg_0.safe_dist = 0.06889615063634735;
    tmp_msg_0.deconflict_offset = 0.8976999044598153;
    tmp_msg_0.accel_safe_margin = 0.23013061944534785;
    tmp_msg_0.accel_lim_x = 0.17818876873572254;
    msg.controlparams.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationEvaluation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationEvaluation msg;
    msg.setTimeStamp(0.24700698316181158);
    msg.setSource(57591U);
    msg.setSourceEntity(131U);
    msg.setDestination(27077U);
    msg.setDestinationEntity(218U);
    msg.type = 28U;
    msg.op = 42U;
    msg.err_mean = 0.7095959883761238;
    msg.dist_min_abs = 0.9089279849832446;
    msg.dist_min_mean = 0.8673131330651472;
    msg.roll_rate_mean = 0.32568712429090674;
    msg.time = 0.4337466738027943;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 149U;
    tmp_msg_0.lon_gain = 0.6146446931942792;
    tmp_msg_0.lat_gain = 0.8656073819160054;
    tmp_msg_0.bond_thick = 0.3168192686029414;
    tmp_msg_0.lead_gain = 0.8520497838195841;
    tmp_msg_0.deconfl_gain = 0.7568209642686343;
    tmp_msg_0.accel_switch_gain = 0.5709300049157003;
    tmp_msg_0.safe_dist = 0.08295734436054802;
    tmp_msg_0.deconflict_offset = 0.45698348748481465;
    tmp_msg_0.accel_safe_margin = 0.48474722919815927;
    tmp_msg_0.accel_lim_x = 0.8454909326627363;
    msg.controlparams.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationEvaluation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiWaypoint msg;
    msg.setTimeStamp(0.0016845815427858346);
    msg.setSource(64833U);
    msg.setSourceEntity(213U);
    msg.setDestination(29806U);
    msg.setDestinationEntity(72U);
    msg.lat = 0.6117218820377776;
    msg.lon = 0.791410389221565;
    msg.eta = 1035737921U;
    msg.duration = 53842U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiWaypoint #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiWaypoint msg;
    msg.setTimeStamp(0.014051062878078002);
    msg.setSource(20139U);
    msg.setSourceEntity(142U);
    msg.setDestination(60879U);
    msg.setDestinationEntity(4U);
    msg.lat = 0.24118578293421145;
    msg.lon = 0.36580806684439926;
    msg.eta = 3771132703U;
    msg.duration = 3655U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiWaypoint #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiWaypoint msg;
    msg.setTimeStamp(0.5155200065543348);
    msg.setSource(21034U);
    msg.setSourceEntity(101U);
    msg.setDestination(59930U);
    msg.setDestinationEntity(234U);
    msg.lat = 0.5981329751587307;
    msg.lon = 0.5425835056984852;
    msg.eta = 2315793706U;
    msg.duration = 28166U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiWaypoint #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiPlan msg;
    msg.setTimeStamp(0.520321967773204);
    msg.setSource(26115U);
    msg.setSourceEntity(123U);
    msg.setDestination(37586U);
    msg.setDestinationEntity(142U);
    msg.plan_id = 49861U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiPlan #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiPlan msg;
    msg.setTimeStamp(0.05174312433314199);
    msg.setSource(13105U);
    msg.setSourceEntity(246U);
    msg.setDestination(47764U);
    msg.setDestinationEntity(87U);
    msg.plan_id = 60836U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.6541436545635647;
    tmp_msg_0.lon = 0.8918043728680483;
    tmp_msg_0.eta = 224277474U;
    tmp_msg_0.duration = 24857U;
    msg.waypoints.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiPlan #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiPlan msg;
    msg.setTimeStamp(0.4108097568218605);
    msg.setSource(34276U);
    msg.setSourceEntity(110U);
    msg.setDestination(32629U);
    msg.setDestinationEntity(68U);
    msg.plan_id = 62227U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.17453149921449684;
    tmp_msg_0.lon = 0.2136084220329162;
    tmp_msg_0.eta = 3194151178U;
    tmp_msg_0.duration = 44825U;
    msg.waypoints.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiPlan #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiCommand msg;
    msg.setTimeStamp(0.36793931966857163);
    msg.setSource(31337U);
    msg.setSourceEntity(93U);
    msg.setDestination(14084U);
    msg.setDestinationEntity(6U);
    msg.type = 241U;
    msg.command = 125U;
    msg.settings.assign("RABNCBSNCUUDMJODZRZJFKVJHTQKDWKVCABNOIGUGERSAORLPUQBIIMZXAHPYYZSZHQBNQSMDHRICFWZPETEMQPBVSWPRJLCTYKFXZIEBIPFMRVOVAYWVAUQGZTVMETHNWRQHPLPPXIYEIKVDHGVATUHLCUNEXLHYWNGXSJJFWWJFGQOMDYLZEYSSFVUXXAGRWUCPRKAHJTZBU");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 7989U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("DNUDXPLDIONRMAXONAQAOPMFHZCYAMHZSDGKGPEBWYFJRDFQUJVHAMZIRUFPSQVTLTQPCHZFHKCBAVBNGQDTUGISNJRXNBVZITBMOFVOLRCGILBGFBKANJLNZPYXONSCCKQWHBCEFYPHEUXHJGTUYOLGP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiCommand #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiCommand msg;
    msg.setTimeStamp(0.28752521730376446);
    msg.setSource(3650U);
    msg.setSourceEntity(161U);
    msg.setDestination(63714U);
    msg.setDestinationEntity(72U);
    msg.type = 61U;
    msg.command = 172U;
    msg.settings.assign("EMSDQTQDPMGLLQTQZCFMTCEGOAHIMTYAFTFNQYSVBDWMSSHJEIUNJJSRLSLIEXXGNBWPJPUMJROHABEQIWBVLLMMKCRPIKCJCDHFXTGLNDFIHRBUJHZTQSKHIPOKCPZXRKYOROLFWHXRGUMAYZGZGWWEXUFFKBZXVZTIOAJRUMKVBCJGUUFNLEZBQYVWHINXB");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 3340U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("AFBIXUGXEWXRGCLFTNKSMBZVLLXLIOMRAVXTXGUZFYAWMMNLNWDSCMRPCWZJVYALDQNNZJAYQECEASE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiCommand #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiCommand msg;
    msg.setTimeStamp(0.7594302819809725);
    msg.setSource(53880U);
    msg.setSourceEntity(132U);
    msg.setDestination(63291U);
    msg.setDestinationEntity(157U);
    msg.type = 187U;
    msg.command = 39U;
    msg.settings.assign("CSNPBNFJLNLRYLQENDJBQKZDCMXFRHMBJGUUYFAKSDR");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 36386U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.6096114136865225;
    tmp_tmp_msg_0_0.lon = 0.35038271025915113;
    tmp_tmp_msg_0_0.eta = 2899687920U;
    tmp_tmp_msg_0_0.duration = 26652U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("LHWHATEIEOYXKRSKSJUYWAZKYPRAJNLGFLOWFXGQQONSZUGIOFJLVSNRHOYNTJZRNEGZAQXXZDGVIWPBXHCWOWFHOPITJKMUAABHFWYPXLMDDHQMJZTYCRUMEPNDWAKSPURNOKKMFQFCXGHXKZLAUFIBTNVJQAYTCBLVTYMMVJIZBUQYECNBIBCPZMCEJTHQDLQGJAMUDBEMRGVSCDEQPSTIUTOXVLHSEXSIKIZODPYU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiCommand #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiState msg;
    msg.setTimeStamp(0.6809178928380915);
    msg.setSource(19357U);
    msg.setSourceEntity(200U);
    msg.setDestination(14957U);
    msg.setDestinationEntity(89U);
    msg.state = 10U;
    msg.plan_id = 55701U;
    msg.wpt_id = 78U;
    msg.settings_chk = 27260U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiState msg;
    msg.setTimeStamp(0.23668674072777474);
    msg.setSource(47913U);
    msg.setSourceEntity(116U);
    msg.setDestination(53259U);
    msg.setDestinationEntity(31U);
    msg.state = 249U;
    msg.plan_id = 24618U;
    msg.wpt_id = 199U;
    msg.settings_chk = 7962U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiState msg;
    msg.setTimeStamp(0.062454509803450686);
    msg.setSource(21629U);
    msg.setSourceEntity(126U);
    msg.setDestination(39074U);
    msg.setDestinationEntity(124U);
    msg.state = 130U;
    msg.plan_id = 12673U;
    msg.wpt_id = 31U;
    msg.settings_chk = 27139U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MessagePart msg;
    msg.setTimeStamp(0.17090175721800416);
    msg.setSource(58378U);
    msg.setSourceEntity(60U);
    msg.setDestination(36271U);
    msg.setDestinationEntity(228U);
    msg.uid = 6U;
    msg.frag_number = 41U;
    msg.num_frags = 39U;
    const signed char tmp_msg_0[] = {58, 97, 38, 83, 96, -90, -19, -35, -32, 35, -109, 89, -52, -14, -1, 95, 107, -48, 85, -33, 14, 97, 6, -121, -90, -83, 102, -85, -6, -19, 107, -12, 11, 62, 4, 54, 98, 53, -7, -14, 8, -10, 38, 23, 65, -29, -16, -62, 75, -25, -103, 68, -89, -16, -20, -44, -108, 97, -119, -69, -83, -31, 76, 35, -52, 79, 59, -74, -23, -85, -58, 108, -114, -101, -33, 82, 28, -117, -98, -115, -106, 118, -62, -71, 118, -26, -22, 29, 30, 121, -12, -102, -88, 33, -76, 62, 99, 91, 48, 56, 98, -80, -38, 67, -82, 92, 75, 65, -41, -6, -92, 82, 7, 17, -61, -62, -26, -88, -66, 89, -75, 5, -64, -16, 104, 23, -58, -24, -62, 54, 80, -95, 125, 32, 22, -70, -122, 56, -62, -2, -25, 7, -98, 5, -93, 88, -66, -4, -26, 62, 4, -76, 126, 84, 11, 25, -16, -117, -75, 50, 65, 39, -23, 78, -72, 90, 77, -59, -100, 0, -43, -27, -115, 24, -105, -65, -66, 29, -79, -29, 96, -68, 2, 15, -12, 77, -88, 96, 114, -21, -65, -31, -2, 15, 5, -41, 73, -73, -4, -21, -32, -71, 38, -54, 91, -54, -109, -121, 108, -94, -121, 71, -43, -65, -101, 19, 44, 15};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MessagePart #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MessagePart msg;
    msg.setTimeStamp(0.6716199163634207);
    msg.setSource(42186U);
    msg.setSourceEntity(98U);
    msg.setDestination(54630U);
    msg.setDestinationEntity(109U);
    msg.uid = 39U;
    msg.frag_number = 46U;
    msg.num_frags = 72U;
    const signed char tmp_msg_0[] = {66, 77, -12, 46, -106, -51, -51, -16, 58, -59, -68, -81, 9};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MessagePart #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MessagePart msg;
    msg.setTimeStamp(0.6319524331977626);
    msg.setSource(46385U);
    msg.setSourceEntity(234U);
    msg.setDestination(37710U);
    msg.setDestinationEntity(83U);
    msg.uid = 247U;
    msg.frag_number = 214U;
    msg.num_frags = 190U;
    const signed char tmp_msg_0[] = {-13, -16, 31, 16, -48, -95, 104, -42, -115, -103, -87, 42, 70, -119, 57, -21, -91, 71, -46, 102, 35, -4, 125, -81, -81, 113, 37, 91, 57, -20, 95, -93, -36, -109, -26, 34, -115, -125, -33, -65, 115, -106, 49, -108, 41, 46, 121, -86, 18, 52, 3, -25, 33, -46, -36, -63, -42, -42, 26, 69, -74, -104, -35, 101, -124, 21, -29, -57, 79, -118, -77, 50, 15, -99, -19, 119, -42, 18, 55, -24, 110, -38, 125, 77, -23, -91, 64, 27, 102, -78, -92, -127, -28, -25, 73, -26, 112, -6, 52, 67, -123, 68, 91, 63, 57, 10, 16, -95, -74, 11, 89, 19, 73, -37, -80, -101, -10, 44, 111, -4, 2, -10, -48, -53, -27, -65, -6, 122, -2, 83, -46, -117, 88, 17, -95, -80, -100, -97, -118, 84, -29, -31, -103, -112, -105, -6, -49, -104, -101, -30, -55, 78, -103, -71, -72, -82, 94, 3, -63, -50, 83, 27, 88, 122, -49, 18, -91, -38, 34, 81, -56, -118, -82, 6, -2, 21, -62, -67, -28, 126, -71, -86, -44, 31, -114, -3, 30, 88, -31, 58, -5, -53, 47, -5, 23, -50, 94, 18, -5, 95, -63, -111, -30, -38, -70, -22, -49, -50, -118, -91, 60, -61, -65, -101, -113, -81, 65, 53, 35, 118, -91, -23, 39, -22, -19, 95, 0, 90, 109, 46, -43, -55, 20, 86, 44, -107, -73, 124, 56, -15, -108, -8};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MessagePart #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NeptusBlob msg;
    msg.setTimeStamp(0.40820008307102496);
    msg.setSource(16200U);
    msg.setSourceEntity(141U);
    msg.setDestination(16054U);
    msg.setDestinationEntity(189U);
    msg.content_type.assign("VPXMKNWFCUUUJCJZJFYLKKONVNTSOTPGLPYOXHNFGJVHFLDPDOZTRNIITERHERFUAAGGSFQEBAYQWCWYQXWVYDCJLBXPDILIECJHOSCXZMLYSUOHVCSDOBDSKBLNRWNQMYEAEXZERJVSDLEVROIMMCYIBBPRFDKIKGMJXBHAVMAQXVHTXBUJCZBHTZE");
    const signed char tmp_msg_0[] = {23, -118, 87, 49, 26, 87, 60, 36, 65, -16, -103, 111, 2, -90, -95, 28, 71, -31, -36, 61, 104, 97, -83, 54, -87, -110, -69, 77, 126, -68, -34, 91, -86, 23, 88, -18, 33, 62, -70, 13, 53, 107, -102, 22, 106, -32, 62, -13, -48, 57, 122, 93, 6, 79, -13, 96, -94, 63, -18, -102, 109, 16, -18, -103, -42, -118, -103, 58, 112, 87, 101, 103, 93, -99, -126, 95, 27, -62, -39, 89, -111, 49, -102, 86, -79, -5, -119, 104, 112, 88, -61, 125, 44, 67, -53, 21, 91, -32, 3, -45, -102, -82, 55, 16, 118, 99, 79, 0, 36, -82, -45, 84, -66, 84, -39, -115, -69, 45, 59, 51, 79, 18, -73, 92, 9};
    msg.content.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NeptusBlob #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NeptusBlob msg;
    msg.setTimeStamp(0.6217965121878232);
    msg.setSource(30842U);
    msg.setSourceEntity(173U);
    msg.setDestination(15697U);
    msg.setDestinationEntity(90U);
    msg.content_type.assign("BSHDAEXBSJMMGGUWOISUBTGBTRTYXJFDPVVEIMYYNLNPMAFPBSRZKKOSEQXZTPDMKALRFLUJREDNKGICGHBPNCWLZEXOICICFOLQVAECLFZSZGBXDYXDPWWXOPVTFMJQNZBKMQRQZIXSGTVUYYSCFCZUQEIRZEUUCHVZLWAMQXOWKNW");
    const signed char tmp_msg_0[] = {-23, 52, -38, 84, 9, -2, -35, -93, 44, 98, 111, 78, -72, 26, -81, -88, 56, -30, -125, -54, -61, -87, 79, 1, 110, 57, 62, -41, 59, 0, -98, 77, -32, -126, 34, 77, 107, 18, 15, 54, 1, -81, 115, 119, -83, -29, 60, 70, -52, 87, -42, 41, 112, 109, 66, -89, -83, -24, 12, -82, -17, 125, 12, 50, 45, 83, 43, 100, 3, 13, -19, -119, 56, 80, -61, 36, -90, 112, 66, 43, -106, 92, 120, 12, 99, -17, -123, -67, 116, -24, -46, -93, -6, -11, 86, 60, 83, 115, 81, 82, 6, -37, -5, -106, 92, -56, -83, 97, 39, 41, 21, -59, -96, 122, 58, -61, 82, 55, -94, 37, -1, 84, 57, -97, 99, -45, 4, -14, 111, -25, -60, 69, -94, -62, 2, -60, 22, 6, 110, -15, 71, -3, 122, 34, 51, -32, -81, 82, 13, 99, -39, -38, 4, -115, -72, -79, -56, 12, 118, -88, -72, -71, -95, 63, -18, 107, 86, 37, 75, -31, 49, -88, -76, -82};
    msg.content.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NeptusBlob #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NeptusBlob msg;
    msg.setTimeStamp(0.1206929331736486);
    msg.setSource(14364U);
    msg.setSourceEntity(31U);
    msg.setDestination(13762U);
    msg.setDestinationEntity(34U);
    msg.content_type.assign("TTDUJHRMLIRYBBLAODDXEBCVCTKBCOAJTSLUKPPHFUCZZAQOJEQKQGQRKFASPUGSFFZASMELWXBJRGTIEJBCNTNMPBFEVWIWHGTRBCRLKOMPDUZNOADHJKJJIZGXZLXTYIIMSEQTZDMPNYXWVIFDNPOHJNIUXPMJBRCOOSOVECPNQNOVKEGWYHMIMXG");
    const signed char tmp_msg_0[] = {55, -43, -87, -16, 33, 20, 89, -128, -5, 67, 55, 72, 86, -56, 82, 3, 102, -16, -77, -80, -8, -53, 80, 120, 56};
    msg.content.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NeptusBlob #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Aborted msg;
    msg.setTimeStamp(0.7106210815095776);
    msg.setSource(9352U);
    msg.setSourceEntity(252U);
    msg.setDestination(17234U);
    msg.setDestinationEntity(93U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Aborted #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Aborted msg;
    msg.setTimeStamp(0.20297291308606513);
    msg.setSource(35259U);
    msg.setSourceEntity(28U);
    msg.setDestination(8569U);
    msg.setDestinationEntity(152U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Aborted #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Aborted msg;
    msg.setTimeStamp(0.11937992722809121);
    msg.setSource(39992U);
    msg.setSourceEntity(253U);
    msg.setDestination(281U);
    msg.setDestinationEntity(238U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Aborted #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblAngles msg;
    msg.setTimeStamp(0.40124837261732593);
    msg.setSource(21656U);
    msg.setSourceEntity(119U);
    msg.setDestination(7676U);
    msg.setDestinationEntity(93U);
    msg.target = 58578U;
    msg.bearing = 0.38420162326064156;
    msg.elevation = 0.9067780733508544;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblAngles #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblAngles msg;
    msg.setTimeStamp(0.1772543766662814);
    msg.setSource(1428U);
    msg.setSourceEntity(30U);
    msg.setDestination(44129U);
    msg.setDestinationEntity(91U);
    msg.target = 15416U;
    msg.bearing = 0.0769419041238919;
    msg.elevation = 0.3184671104314901;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblAngles #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblAngles msg;
    msg.setTimeStamp(0.05224327785968008);
    msg.setSource(4889U);
    msg.setSourceEntity(116U);
    msg.setDestination(53951U);
    msg.setDestinationEntity(80U);
    msg.target = 2432U;
    msg.bearing = 0.07808914003273948;
    msg.elevation = 0.170420420213941;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblAngles #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblPosition msg;
    msg.setTimeStamp(0.5609500188965506);
    msg.setSource(12747U);
    msg.setSourceEntity(165U);
    msg.setDestination(13708U);
    msg.setDestinationEntity(15U);
    msg.target = 5683U;
    msg.x = 0.23617756789403255;
    msg.y = 0.19049767722079225;
    msg.z = 0.7040664333214549;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblPosition #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblPosition msg;
    msg.setTimeStamp(0.47409867346134493);
    msg.setSource(42760U);
    msg.setSourceEntity(3U);
    msg.setDestination(44354U);
    msg.setDestinationEntity(54U);
    msg.target = 47024U;
    msg.x = 0.14491254194049052;
    msg.y = 0.21202971882329835;
    msg.z = 0.6008754668091686;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblPosition #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblPosition msg;
    msg.setTimeStamp(0.0016810862863159137);
    msg.setSource(30242U);
    msg.setSourceEntity(168U);
    msg.setDestination(2394U);
    msg.setDestinationEntity(86U);
    msg.target = 18736U;
    msg.x = 0.42995407570751765;
    msg.y = 0.6120759400937713;
    msg.z = 0.24473698531576127;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblPosition #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblFix msg;
    msg.setTimeStamp(0.2929237247744445);
    msg.setSource(25446U);
    msg.setSourceEntity(208U);
    msg.setDestination(44090U);
    msg.setDestinationEntity(145U);
    msg.target = 17532U;
    msg.lat = 0.8272509607643397;
    msg.lon = 0.5054354587000788;
    msg.z_units = 209U;
    msg.z = 0.5069099027076658;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblFix #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblFix msg;
    msg.setTimeStamp(0.8008578111903857);
    msg.setSource(18185U);
    msg.setSourceEntity(73U);
    msg.setDestination(56837U);
    msg.setDestinationEntity(192U);
    msg.target = 7376U;
    msg.lat = 0.737041822356738;
    msg.lon = 0.6150038397622715;
    msg.z_units = 36U;
    msg.z = 0.1529044458153015;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblFix #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblFix msg;
    msg.setTimeStamp(0.8672792349040357);
    msg.setSource(45888U);
    msg.setSourceEntity(49U);
    msg.setDestination(29389U);
    msg.setDestinationEntity(93U);
    msg.target = 25341U;
    msg.lat = 0.18462202618380108;
    msg.lon = 0.9333905311438946;
    msg.z_units = 248U;
    msg.z = 0.7241754859376662;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblFix #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ParametersXml msg;
    msg.setTimeStamp(0.32606715878514136);
    msg.setSource(14354U);
    msg.setSourceEntity(199U);
    msg.setDestination(27406U);
    msg.setDestinationEntity(111U);
    msg.locale.assign("AVNIFJRQGQXIMENQCLZYFNZPSIWYTBLORGFYXEPLLZSOXKWUPEEUUVFCAVSEVSWUGJIEKZVEHHMVAGDSNQYDQFBRHPCIUEXZMOFKWMOGZHBAVYLCWLDQNPXNXUGNDJOICZHSGKM");
    const signed char tmp_msg_0[] = {82, 105, 43, -103, -104, -18, -8, -11, -106, 93, -93, -8, -39, -122, -51, -17, -106, 11, -127, 117, 100, 122, 126, 13, -124, -122, 84, 89, -19, -88, -4, -43, 13, 68, 61, -88, -37, -81, 37, 9, -36, -11, 38, 79, -48, 112, -39, 22, -10, -56, 120, 13, 95, 43, -121, -52, -61, -76, 98, -64, -119, -111, -116, -75, -4, -65, 39, -59, 115, 29, -9, -56, -27, -78, -121, 56, -75, 102, -86, 63, 69, 55, -87, -87, -120, -94, -43, 59, 121, 125, 32, 83, 62, -92, 82, -63, -115, -123, 112, 40, 55, -37, 63, 36, -13, 53, -93, 123, 91, 50, 5, -72, -116, 51, 27, -96, -24, -81, 37, 1, -97, 21, -69, 47, -9, 75, -114, 89, 78, -110, 94, 57, 105, 7, 28, 74, 38, 110, 69, -103, -105, -47, -82, 76, 39, 8, 13, 125, -74, -128, 33, -6, 68, 27, -30, -98, -36, -64, -27, -94, 67, -110, 60, -43, 92, 92, -73, 93, 34, 73, -86, 55, -9, 84, 14, -25, 75, -14, 108, -119, 57, -75, 7, -1, 102, -30, -82, -32, 31, -89, -26, 103, 67, 125, 35, -79, 38, 45, 101, 61, 121, 9, -89, 32, 28, -107, 26, -47};
    msg.config.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ParametersXml #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ParametersXml msg;
    msg.setTimeStamp(0.6949504757851364);
    msg.setSource(33829U);
    msg.setSourceEntity(130U);
    msg.setDestination(58811U);
    msg.setDestinationEntity(89U);
    msg.locale.assign("LGXVTNRPLXOQUZBAZGIRZGMOWQMRTMYVEKYEFUNVFXHNZNYFUAFDOTCYIHLOEBJGUROGABPEVKYXTMQCWDGFCEYZLWQPSSUWKBY");
    const signed char tmp_msg_0[] = {-31, -11, -49, 29, 44, 106, 124, 54, -37, -44, -3};
    msg.config.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ParametersXml #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ParametersXml msg;
    msg.setTimeStamp(0.39436512857477535);
    msg.setSource(1232U);
    msg.setSourceEntity(227U);
    msg.setDestination(59811U);
    msg.setDestinationEntity(200U);
    msg.locale.assign("UEZLDPDZCV");
    const signed char tmp_msg_0[] = {92, -110, 39, 2, -122, 37, -88, 74, 58, 40, -80, -100, -80, 96, -30, -60, 26, 53, -69, 95, 113, 7, 70, 58, 43, -13, 0, -61, 30, 55, 80, 52, 112, 74, -72, 3, -82, -72, -38, -16, 28, 66, 13, -92, 75, -66, 68, 126, 116, 39, 84, 41, -66, 81, 33, -114, 0, 16, 71, 66, -32, -114, 55, 23, -1, 96, -15, 124, 7, -36, 46, 113, -98, 0, 77, 69, -124, -124, 32, -117, 77, 60, -82, 57, -122, -95, -107, 90, 28, 121, -67, 103, -86, 29, -105, 75, -96, -36, 126, -103, 94, -35, 55, -90, -20, -105, -112, 28, 12, -118, -120, -48, -29, -54, -31, 69, -57, -108, -60, -119, -106, 30, 110, -99, 112, 60, -45, 25, 46, 59, -115, -6, 99, 92, 113, -25, -35, -25, 89, 103, 10, 61, 65, 17, 82, -55, 60, 90, 20, -93, -6, 111, -103, 82, -115, 29, -119, -94, -113, -24, -64, 68, -4, 17, 115, 6, 112, -30, 46, 31, 41, 82, -27, -49, 99, -116, 56, 73, 11, -116, -18, -116, 5, 83, 57, -24, 116, 108, -79, -76, 75, -15, 75, 74, -94, -26, -56, -112, -12, 25, 123, -63, 101, -111, -42, 16, 108, 107, 126, 4, 92, -83, 36, -62, 98, 96, -62, -21, -118, 104, -97, -111, 9, -76, 31, 75, 7, -96, 100, -64, -13, -89, 19, -49, -30, -52, -36, -30, 109, -112, 65, 29, 54, 111, 106, 40, 79, 108};
    msg.config.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ParametersXml #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetParametersXml msg;
    msg.setTimeStamp(0.7303358818685335);
    msg.setSource(26323U);
    msg.setSourceEntity(124U);
    msg.setDestination(46606U);
    msg.setDestinationEntity(162U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetParametersXml #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetParametersXml msg;
    msg.setTimeStamp(0.7431342225477469);
    msg.setSource(15005U);
    msg.setSourceEntity(144U);
    msg.setDestination(23377U);
    msg.setDestinationEntity(88U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetParametersXml #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetParametersXml msg;
    msg.setTimeStamp(0.0979004087262586);
    msg.setSource(4264U);
    msg.setSourceEntity(193U);
    msg.setDestination(5597U);
    msg.setDestinationEntity(164U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetParametersXml #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetImageCoords msg;
    msg.setTimeStamp(0.202594036693726);
    msg.setSource(65417U);
    msg.setSourceEntity(76U);
    msg.setDestination(22411U);
    msg.setDestinationEntity(28U);
    msg.camid = 45U;
    msg.x = 6492U;
    msg.y = 37514U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetImageCoords #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetImageCoords msg;
    msg.setTimeStamp(0.27379284223093614);
    msg.setSource(15443U);
    msg.setSourceEntity(238U);
    msg.setDestination(44587U);
    msg.setDestinationEntity(141U);
    msg.camid = 246U;
    msg.x = 47937U;
    msg.y = 32859U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetImageCoords #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetImageCoords msg;
    msg.setTimeStamp(0.285272063425258);
    msg.setSource(50935U);
    msg.setSourceEntity(206U);
    msg.setDestination(43955U);
    msg.setDestinationEntity(162U);
    msg.camid = 130U;
    msg.x = 53808U;
    msg.y = 22305U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetImageCoords #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetImageCoords msg;
    msg.setTimeStamp(0.37432880905510624);
    msg.setSource(4606U);
    msg.setSourceEntity(24U);
    msg.setDestination(59866U);
    msg.setDestinationEntity(7U);
    msg.camid = 250U;
    msg.x = 1066U;
    msg.y = 38955U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetImageCoords #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetImageCoords msg;
    msg.setTimeStamp(0.9415856354520953);
    msg.setSource(58280U);
    msg.setSourceEntity(57U);
    msg.setDestination(26385U);
    msg.setDestinationEntity(230U);
    msg.camid = 226U;
    msg.x = 44363U;
    msg.y = 64564U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetImageCoords #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetImageCoords msg;
    msg.setTimeStamp(0.03911172557033782);
    msg.setSource(28696U);
    msg.setSourceEntity(60U);
    msg.setDestination(32851U);
    msg.setDestinationEntity(116U);
    msg.camid = 251U;
    msg.x = 12755U;
    msg.y = 43656U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetImageCoords #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetWorldCoordinates msg;
    msg.setTimeStamp(0.1469422321323196);
    msg.setSource(31783U);
    msg.setSourceEntity(169U);
    msg.setDestination(14862U);
    msg.setDestinationEntity(29U);
    msg.tracking = 97U;
    msg.lat = 0.37956140248694514;
    msg.lon = 0.1492256584494952;
    msg.x = 0.5975096464626187;
    msg.y = 0.9699263863832188;
    msg.z = 0.15029553778012483;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetWorldCoordinates #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetWorldCoordinates msg;
    msg.setTimeStamp(0.2183916098911871);
    msg.setSource(53419U);
    msg.setSourceEntity(75U);
    msg.setDestination(3535U);
    msg.setDestinationEntity(240U);
    msg.tracking = 133U;
    msg.lat = 0.40162040578009905;
    msg.lon = 0.027246293796210574;
    msg.x = 0.5616873339770619;
    msg.y = 0.3555400987697044;
    msg.z = 0.17631667765535586;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetWorldCoordinates #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetWorldCoordinates msg;
    msg.setTimeStamp(0.6518587489680261);
    msg.setSource(8920U);
    msg.setSourceEntity(34U);
    msg.setDestination(18889U);
    msg.setDestinationEntity(128U);
    msg.tracking = 208U;
    msg.lat = 0.3974011834451566;
    msg.lon = 0.23900624569644568;
    msg.x = 0.16451727072596212;
    msg.y = 0.935198721073601;
    msg.z = 0.5405286627035095;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetWorldCoordinates #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblAnglesExtended msg;
    msg.setTimeStamp(0.5510197359505637);
    msg.setSource(12888U);
    msg.setSourceEntity(98U);
    msg.setDestination(9979U);
    msg.setDestinationEntity(99U);
    msg.target.assign("BJYLHMQGCULVYKLWIRIIYLFVCHFAYETRTBJOKKSYWSPSUCFZKARRMJNVTJBBXFUKHPSAHIFWNDWQSVUUYOGBGCOROXZKHNZNDHJRIVEJNMPZRCHHUBTQOQLTQATJOLESXEXUCOPXGMVDAFYBMDLVWUFQEKANPWHLDNEBWFHMACBYGISEUDIQWMORAXL");
    msg.lbearing = 0.6166163508474948;
    msg.lelevation = 0.11202824666246025;
    msg.bearing = 0.6814636116837863;
    msg.elevation = 0.27970799300035454;
    msg.phi = 0.9536767124958899;
    msg.theta = 0.5268890144688211;
    msg.psi = 0.5500919324236017;
    msg.accuracy = 0.7991803609382356;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblAnglesExtended #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblAnglesExtended msg;
    msg.setTimeStamp(0.5852163184875891);
    msg.setSource(38343U);
    msg.setSourceEntity(49U);
    msg.setDestination(37026U);
    msg.setDestinationEntity(246U);
    msg.target.assign("KCBJXVSQYUWQVSUPHCAFLSZ");
    msg.lbearing = 0.5059950277074574;
    msg.lelevation = 0.1969765529837687;
    msg.bearing = 0.2913112402898388;
    msg.elevation = 0.7399775363145421;
    msg.phi = 0.4966775029369416;
    msg.theta = 0.37034752493886036;
    msg.psi = 0.4129577466381502;
    msg.accuracy = 0.7540779470894016;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblAnglesExtended #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblAnglesExtended msg;
    msg.setTimeStamp(0.9853325286678626);
    msg.setSource(45015U);
    msg.setSourceEntity(111U);
    msg.setDestination(26269U);
    msg.setDestinationEntity(247U);
    msg.target.assign("ZWQRPKUENWOCTNOAKCPCILDNJFPEUIRURZLKLHICVHJDJBPYBQAMVPZQOOMQVATNIXAXVYPSKAIBNLMCDLHRCMPQEVZSEHGYMYGGRIEZTHFVSYKWHLDQKYTGESSBCZELDLDBBSUPKTUJMOJUAOVQSHWWMUBFVXBIZDHFTXGDEFGFQWNUFMIFLAJDREJGRRPOBOWOAZSE");
    msg.lbearing = 0.22390957164692893;
    msg.lelevation = 0.612630728376905;
    msg.bearing = 0.20033525519695328;
    msg.elevation = 0.7661215625377644;
    msg.phi = 0.5854091381644212;
    msg.theta = 0.4433989433843317;
    msg.psi = 0.25681289686573083;
    msg.accuracy = 0.31988837920670055;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblAnglesExtended #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblPositionExtended msg;
    msg.setTimeStamp(0.27365825118952325);
    msg.setSource(10988U);
    msg.setSourceEntity(132U);
    msg.setDestination(46125U);
    msg.setDestinationEntity(114U);
    msg.target.assign("XVQXPMYSJVGOTWZLMANCZPRQELKPWRGZQNTIAEHWQGODABIHQWVXEWXLKFSOWENGUBNVUQFHBIWAJHBOZPAAJPQBYASQOFCDKMDLYCLZSNJJFPNCKCUCHXTKYJZWELDLDIVCHSTNUGIROFBYGMISUNU");
    msg.x = 0.18461140694630995;
    msg.y = 0.1926585140063356;
    msg.z = 0.8446393636464246;
    msg.n = 0.7227242538681186;
    msg.e = 0.31953716208877614;
    msg.d = 0.808401691629798;
    msg.phi = 0.5572531163216734;
    msg.theta = 0.9173681624482851;
    msg.psi = 0.19839863385689405;
    msg.accuracy = 0.7153894300224041;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblPositionExtended #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblPositionExtended msg;
    msg.setTimeStamp(0.07495981271310581);
    msg.setSource(18074U);
    msg.setSourceEntity(180U);
    msg.setDestination(35541U);
    msg.setDestinationEntity(120U);
    msg.target.assign("FFZRTDKTUCMQWLOAQNCXGZQJKEJVLIOEPUSYNMJATAIOPOJSYODNRNDNVZCSPGEPHKOKZQUCURBSWIMSRBMYBFALMGWIDGVUHQWFVRTLDRIQHFZHBDEXZCHYAWVOCDFNACPUSTTUPIE");
    msg.x = 0.39871131887449784;
    msg.y = 0.6415950792209567;
    msg.z = 0.42436920989527116;
    msg.n = 0.7521822624462858;
    msg.e = 0.31773030617333065;
    msg.d = 0.41640774937628766;
    msg.phi = 0.9450355937355678;
    msg.theta = 0.03289157796988251;
    msg.psi = 0.45272192651172116;
    msg.accuracy = 0.1040985157890627;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblPositionExtended #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblPositionExtended msg;
    msg.setTimeStamp(0.28765935783642926);
    msg.setSource(20823U);
    msg.setSourceEntity(247U);
    msg.setDestination(20048U);
    msg.setDestinationEntity(233U);
    msg.target.assign("MPGVHGPPBUWKKXFHRUCYMSGEWRIOQUPGLWVJKRZFCNHZAUTYJOWQZUXERTQAQDIZSNWZTPZYIOPJRLGMIHBHKOHDXWNHNKEDEKCWNUVYDWHAMOCYD");
    msg.x = 0.8773786908242286;
    msg.y = 0.8989491570271941;
    msg.z = 0.4343522938359695;
    msg.n = 0.28413794603645337;
    msg.e = 0.23403440265965558;
    msg.d = 0.9217797564507938;
    msg.phi = 0.5436003022666531;
    msg.theta = 0.8525785026524019;
    msg.psi = 0.9915978697902367;
    msg.accuracy = 0.888358712186327;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblPositionExtended #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblFixExtended msg;
    msg.setTimeStamp(0.19215588420441398);
    msg.setSource(38892U);
    msg.setSourceEntity(80U);
    msg.setDestination(11496U);
    msg.setDestinationEntity(3U);
    msg.target.assign("ZKFXYRFXJPNVFHEFKGOJCHRAHEUBCERAWHPVOUBQZZQVXHSNAWMYFKRHEKITSSCQTSGYTVGZMCMNLQIGNOTAJELNYWLCKQDXETNDACNNZGDRYSNBLLSRBDVSPYPJVXMEWKKRFGYAIHWWXWZA");
    msg.lat = 0.10861157265283872;
    msg.lon = 0.5421391886479412;
    msg.z_units = 118U;
    msg.z = 0.43586622966104693;
    msg.accuracy = 0.3140283495211704;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblFixExtended #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblFixExtended msg;
    msg.setTimeStamp(0.9515609877187876);
    msg.setSource(31567U);
    msg.setSourceEntity(7U);
    msg.setDestination(36807U);
    msg.setDestinationEntity(6U);
    msg.target.assign("JMNYAFLDIUW");
    msg.lat = 0.5636669415402057;
    msg.lon = 0.33503529613018657;
    msg.z_units = 174U;
    msg.z = 0.4252387396310774;
    msg.accuracy = 0.1385788104395319;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblFixExtended #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblFixExtended msg;
    msg.setTimeStamp(0.13426049312448107);
    msg.setSource(60900U);
    msg.setSourceEntity(5U);
    msg.setDestination(15955U);
    msg.setDestinationEntity(74U);
    msg.target.assign("EIJOUVRXUDJOVUPNSBVGPWOFREEMHBHOGVSMUNIHUFZGIHYBOJUZDLUEQOPXOAMJUJSGDTGIBVXMNCAVNURXYQWPBKQEHPATMDTFJXKRENMHYWLCRRJGLACKFPTILFX");
    msg.lat = 0.8155584980892476;
    msg.lon = 0.7523083572275635;
    msg.z_units = 8U;
    msg.z = 0.0009312713707581022;
    msg.accuracy = 0.25469550488605475;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblFixExtended #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblModem msg;
    msg.setTimeStamp(0.024572132886909626);
    msg.setSource(38576U);
    msg.setSourceEntity(16U);
    msg.setDestination(62773U);
    msg.setDestinationEntity(54U);
    msg.name.assign("IDFYRSCJVACEKNKEFUCVZYFVULQBLSHBHVCBIZJJKXUTMIZLQVRAWN");
    msg.lat = 0.5242339383382;
    msg.lon = 0.45899007349631893;
    msg.z = 0.4333021692827127;
    msg.z_units = 244U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblModem #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblModem msg;
    msg.setTimeStamp(0.8092454500358339);
    msg.setSource(19117U);
    msg.setSourceEntity(98U);
    msg.setDestination(30506U);
    msg.setDestinationEntity(165U);
    msg.name.assign("IJYBVDSXKRSRXWYTASZGHBFBUGPNEIWEGNCJTAXIIHGOFDUAENRQBDFLJZRYRUEYUQLYEBUMOCPFRFJSJPPLIEYQYTBPMRBEDZQIYJJVGWMPLMUPFCRMGHWDGXXPHS");
    msg.lat = 0.01385362357803499;
    msg.lon = 0.8072832333486125;
    msg.z = 0.8667974758906938;
    msg.z_units = 105U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblModem #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblModem msg;
    msg.setTimeStamp(0.4550168151173174);
    msg.setSource(51095U);
    msg.setSourceEntity(30U);
    msg.setDestination(47885U);
    msg.setDestinationEntity(191U);
    msg.name.assign("GJDMNESGOSFUIAGBVNGVUKZGNLCCUBJIJCHBHNWUJISPYXAMQO");
    msg.lat = 0.39148357867459826;
    msg.lon = 0.14049877042755265;
    msg.z = 0.0056309166142370914;
    msg.z_units = 60U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblModem #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblConfig msg;
    msg.setTimeStamp(0.10333250433969454);
    msg.setSource(22609U);
    msg.setSourceEntity(174U);
    msg.setDestination(3824U);
    msg.setDestinationEntity(254U);
    msg.op = 23U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("HFTPQBGNLCRUOZADOGXZWJUYDSNALUJEZMEGOPYCLFQRSQEIEKHRPBWQSCIKIDTJWYGUCUQVBZXHFQJZWCUCMAYCLBKXPOFKEBLSVOBIPQSUAUQRELHXYZXRHYMDAIHDTXWTFDGMTRXSVCEXFZOBVDSQKGHJIIAMLLNYGODOYIAAJJFLWMDETUQHHTCSFGYPRIYMAKCRRNEVADRIBPNVTUSMPKJVWVJGVXN");
    tmp_msg_0.lat = 0.685454279238504;
    tmp_msg_0.lon = 0.40692171543778677;
    tmp_msg_0.z = 0.1277410874042303;
    tmp_msg_0.z_units = 88U;
    msg.modems.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblConfig #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblConfig msg;
    msg.setTimeStamp(0.597352955924742);
    msg.setSource(44763U);
    msg.setSourceEntity(131U);
    msg.setDestination(46521U);
    msg.setDestinationEntity(22U);
    msg.op = 162U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("JAWRDDQHJLSORMHGGHMJGROCYPCODLQDWVCJZLVXMBNNVIONGUFG");
    tmp_msg_0.lat = 0.38568126338494235;
    tmp_msg_0.lon = 0.8513389903703625;
    tmp_msg_0.z = 0.05493340463178209;
    tmp_msg_0.z_units = 252U;
    msg.modems.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblConfig #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblConfig msg;
    msg.setTimeStamp(0.09824783693682249);
    msg.setSource(4738U);
    msg.setSourceEntity(178U);
    msg.setDestination(5069U);
    msg.setDestinationEntity(24U);
    msg.op = 244U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("NQBWOPNUQJVKSJDGQRLUKRWHPQBGNNFTCCDQMNEJVOUZGRIFMYCLZA");
    tmp_msg_0.lat = 0.9207272800377605;
    tmp_msg_0.lon = 0.5172142545770354;
    tmp_msg_0.z = 0.8961782497601495;
    tmp_msg_0.z_units = 48U;
    msg.modems.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblConfig #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DissolvedOrganicMatter msg;
    msg.setTimeStamp(0.677496817187693);
    msg.setSource(29098U);
    msg.setSourceEntity(152U);
    msg.setDestination(33644U);
    msg.setDestinationEntity(169U);
    msg.value = 0.18133263559809887;
    msg.type = 98U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DissolvedOrganicMatter #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DissolvedOrganicMatter msg;
    msg.setTimeStamp(0.3022821230569587);
    msg.setSource(53735U);
    msg.setSourceEntity(0U);
    msg.setDestination(51879U);
    msg.setDestinationEntity(25U);
    msg.value = 0.547672665348972;
    msg.type = 60U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DissolvedOrganicMatter #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DissolvedOrganicMatter msg;
    msg.setTimeStamp(0.4992956027663459);
    msg.setSource(8766U);
    msg.setSourceEntity(150U);
    msg.setDestination(13088U);
    msg.setDestinationEntity(78U);
    msg.value = 0.7234688906047025;
    msg.type = 195U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DissolvedOrganicMatter #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::OpticalBackscatter msg;
    msg.setTimeStamp(0.5043311239793126);
    msg.setSource(32618U);
    msg.setSourceEntity(75U);
    msg.setDestination(64906U);
    msg.setDestinationEntity(104U);
    msg.value = 0.8654204105620792;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("OpticalBackscatter #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::OpticalBackscatter msg;
    msg.setTimeStamp(0.7197242700124705);
    msg.setSource(33720U);
    msg.setSourceEntity(5U);
    msg.setDestination(52407U);
    msg.setDestinationEntity(47U);
    msg.value = 0.6255685328883878;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("OpticalBackscatter #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::OpticalBackscatter msg;
    msg.setTimeStamp(0.7978387410327895);
    msg.setSource(26649U);
    msg.setSourceEntity(70U);
    msg.setDestination(12255U);
    msg.setDestinationEntity(19U);
    msg.value = 0.697605223178208;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("OpticalBackscatter #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Tachograph msg;
    msg.setTimeStamp(0.8463341883703557);
    msg.setSource(41668U);
    msg.setSourceEntity(203U);
    msg.setDestination(37156U);
    msg.setDestinationEntity(227U);
    msg.timestamp_last_service = 0.9268851262532264;
    msg.time_next_service = 0.8158570971915435;
    msg.time_motor_next_service = 0.3295461040955443;
    msg.time_idle_ground = 0.9188322888566812;
    msg.time_idle_air = 0.7005577542730791;
    msg.time_idle_water = 0.898924952132041;
    msg.time_idle_underwater = 0.2250059858095652;
    msg.time_idle_unknown = 0.8631418231211982;
    msg.time_motor_ground = 0.23395292584002392;
    msg.time_motor_air = 0.5379813266536386;
    msg.time_motor_water = 0.4526156230129744;
    msg.time_motor_underwater = 0.5375652737506164;
    msg.time_motor_unknown = 0.3621097006431261;
    msg.rpm_min = 26761;
    msg.rpm_max = -18825;
    msg.depth_max = 0.527687838606276;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Tachograph #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Tachograph msg;
    msg.setTimeStamp(0.22998857882791068);
    msg.setSource(51214U);
    msg.setSourceEntity(141U);
    msg.setDestination(14500U);
    msg.setDestinationEntity(70U);
    msg.timestamp_last_service = 0.5471825760013228;
    msg.time_next_service = 0.8815123484660475;
    msg.time_motor_next_service = 0.4382684447841728;
    msg.time_idle_ground = 0.34519222147405515;
    msg.time_idle_air = 0.9261950320999888;
    msg.time_idle_water = 0.813930263085819;
    msg.time_idle_underwater = 0.5700414748725857;
    msg.time_idle_unknown = 0.21018637192077427;
    msg.time_motor_ground = 0.5407680954624628;
    msg.time_motor_air = 0.932015375778424;
    msg.time_motor_water = 0.3605047928218287;
    msg.time_motor_underwater = 0.24519365320746322;
    msg.time_motor_unknown = 0.10569322912021906;
    msg.rpm_min = -2997;
    msg.rpm_max = 30477;
    msg.depth_max = 0.40663141434880523;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Tachograph #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Tachograph msg;
    msg.setTimeStamp(0.21300812828054327);
    msg.setSource(52384U);
    msg.setSourceEntity(243U);
    msg.setDestination(19848U);
    msg.setDestinationEntity(159U);
    msg.timestamp_last_service = 0.5455280587524283;
    msg.time_next_service = 0.2158803870609738;
    msg.time_motor_next_service = 0.31875200239352086;
    msg.time_idle_ground = 0.3907534892023671;
    msg.time_idle_air = 0.7692526245817285;
    msg.time_idle_water = 0.9415738542270834;
    msg.time_idle_underwater = 0.23294741692540477;
    msg.time_idle_unknown = 0.602359808589924;
    msg.time_motor_ground = 0.9118289133964732;
    msg.time_motor_air = 0.38000458821157523;
    msg.time_motor_water = 0.9165022598651316;
    msg.time_motor_underwater = 0.3699634292052112;
    msg.time_motor_unknown = 0.137585928811379;
    msg.rpm_min = 24296;
    msg.rpm_max = 25047;
    msg.depth_max = 0.9328216291917732;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Tachograph #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ApmStatus msg;
    msg.setTimeStamp(0.14745805953056657);
    msg.setSource(45945U);
    msg.setSourceEntity(75U);
    msg.setDestination(44998U);
    msg.setDestinationEntity(155U);
    msg.severity = 176U;
    msg.text.assign("JKMCVVECXCOQWFPEMWNQLTNJKPMPUQYTBVTHAAHCTKYZGEUYGIRTLWKYROPCRFZQJOMKJYXARXSEJLEGYJCSWDBPVFPIWFUIKFKXQSIRUZFZKTVIDQWBQUNRSLCCFVBJAMPNHOJHCBYNIGHOARISBIZEDXXVDXLKBOSZPZMTPGOHTVASOEMXGEURJNCBNDNHWHMTWSYLESLGQZGFDBTRLHYKFV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ApmStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ApmStatus msg;
    msg.setTimeStamp(0.9678671009198044);
    msg.setSource(41658U);
    msg.setSourceEntity(226U);
    msg.setDestination(8764U);
    msg.setDestinationEntity(133U);
    msg.severity = 22U;
    msg.text.assign("LWVXZBISYCURUOWRIJZBZUGLHXWKCLBDONARKVBDYTCAQBDICTBEIIUZGBANYEOFPNCDWPPSLMRDAXYYWIHBZJEELJQUFVESHFHMCDORCLJTWWJSSHVQFUNMFLGOJPHSZNRGYFSKJVWOPAVGM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ApmStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ApmStatus msg;
    msg.setTimeStamp(0.18941241010600873);
    msg.setSource(10602U);
    msg.setSourceEntity(104U);
    msg.setDestination(26791U);
    msg.setDestinationEntity(111U);
    msg.severity = 63U;
    msg.text.assign("WPNEWFRNKBRMJSKVZBYHETKVSDBGGUCMYOGAJSASILO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ApmStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SadcReadings msg;
    msg.setTimeStamp(0.1243116625610623);
    msg.setSource(14336U);
    msg.setSourceEntity(240U);
    msg.setDestination(8543U);
    msg.setDestinationEntity(216U);
    msg.channel = 68;
    msg.value = -418914980;
    msg.gain = 215U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SadcReadings #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SadcReadings msg;
    msg.setTimeStamp(0.7960824303852632);
    msg.setSource(50076U);
    msg.setSourceEntity(122U);
    msg.setDestination(32340U);
    msg.setDestinationEntity(80U);
    msg.channel = -71;
    msg.value = -1965445395;
    msg.gain = 96U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SadcReadings #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SadcReadings msg;
    msg.setTimeStamp(0.18384088541192056);
    msg.setSource(16013U);
    msg.setSourceEntity(55U);
    msg.setDestination(58327U);
    msg.setDestinationEntity(240U);
    msg.channel = 85;
    msg.value = -809012615;
    msg.gain = 189U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SadcReadings #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DmsDetection msg;
    msg.setTimeStamp(0.3607961784840489);
    msg.setSource(26039U);
    msg.setSourceEntity(115U);
    msg.setDestination(6473U);
    msg.setDestinationEntity(95U);
    msg.ch01 = 0.3277647597325848;
    msg.ch02 = 0.09083266237934273;
    msg.ch03 = 0.8685526624631021;
    msg.ch04 = 0.4830747426221641;
    msg.ch05 = 0.7088829132617263;
    msg.ch06 = 0.13252034193593998;
    msg.ch07 = 0.21504065414325857;
    msg.ch08 = 0.03551007356595215;
    msg.ch09 = 0.7646712210611212;
    msg.ch10 = 0.9081080038034276;
    msg.ch11 = 0.1826144531211209;
    msg.ch12 = 0.8585217542045582;
    msg.ch13 = 0.26389866537538187;
    msg.ch14 = 0.24505223476135463;
    msg.ch15 = 0.0163437596923387;
    msg.ch16 = 0.6439264642643405;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DmsDetection #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DmsDetection msg;
    msg.setTimeStamp(0.5819215897506593);
    msg.setSource(60247U);
    msg.setSourceEntity(61U);
    msg.setDestination(34109U);
    msg.setDestinationEntity(165U);
    msg.ch01 = 0.757077197351559;
    msg.ch02 = 0.7003275306069291;
    msg.ch03 = 0.04125023379916304;
    msg.ch04 = 0.27919587780616284;
    msg.ch05 = 0.6054984039880474;
    msg.ch06 = 0.6921412094389033;
    msg.ch07 = 0.7461764313945455;
    msg.ch08 = 0.1978451210085873;
    msg.ch09 = 0.4500110028074171;
    msg.ch10 = 0.9955791039310063;
    msg.ch11 = 0.03398363258597681;
    msg.ch12 = 0.14702891809083518;
    msg.ch13 = 0.6291222458373097;
    msg.ch14 = 0.9536289265198433;
    msg.ch15 = 0.32223950657718925;
    msg.ch16 = 0.32124559489251314;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DmsDetection #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DmsDetection msg;
    msg.setTimeStamp(0.4093527660130467);
    msg.setSource(11459U);
    msg.setSourceEntity(166U);
    msg.setDestination(35179U);
    msg.setDestinationEntity(231U);
    msg.ch01 = 0.8576202497905329;
    msg.ch02 = 0.3385946093318237;
    msg.ch03 = 0.016274387438508064;
    msg.ch04 = 0.36090300079723936;
    msg.ch05 = 0.4536938980853261;
    msg.ch06 = 0.6522363117045816;
    msg.ch07 = 0.9063100237858486;
    msg.ch08 = 0.5143942205713656;
    msg.ch09 = 0.650189148093906;
    msg.ch10 = 0.18497798143098243;
    msg.ch11 = 0.6885427799082491;
    msg.ch12 = 0.32405725793242135;
    msg.ch13 = 0.5375230489211524;
    msg.ch14 = 0.5240764774422998;
    msg.ch15 = 0.9050758540677926;
    msg.ch16 = 0.0812564440905702;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DmsDetection #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HomePosition msg;
    msg.setTimeStamp(0.12750841705335192);
    msg.setSource(54093U);
    msg.setSourceEntity(214U);
    msg.setDestination(30815U);
    msg.setDestinationEntity(206U);
    msg.op = 16U;
    msg.lat = 0.19970566966375236;
    msg.lon = 0.4487252316658965;
    msg.height = 0.9675586915043758;
    msg.depth = 0.32822139965590624;
    msg.alt = 0.3699623805207316;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HomePosition #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HomePosition msg;
    msg.setTimeStamp(0.9291635029793854);
    msg.setSource(57031U);
    msg.setSourceEntity(233U);
    msg.setDestination(50243U);
    msg.setDestinationEntity(65U);
    msg.op = 1U;
    msg.lat = 0.35848613689069875;
    msg.lon = 0.09744999870001536;
    msg.height = 0.1792082587772813;
    msg.depth = 0.38093545482586244;
    msg.alt = 0.9583195979656206;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HomePosition #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HomePosition msg;
    msg.setTimeStamp(0.9422433905644877);
    msg.setSource(21692U);
    msg.setSourceEntity(191U);
    msg.setDestination(3172U);
    msg.setDestinationEntity(128U);
    msg.op = 155U;
    msg.lat = 0.16979027174519523;
    msg.lon = 0.4194283433832382;
    msg.height = 0.8436846661658502;
    msg.depth = 0.16815876762822535;
    msg.alt = 0.07033730985665276;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HomePosition #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CurrentProfile msg;
    msg.setTimeStamp(0.24138423800086906);
    msg.setSource(59631U);
    msg.setSourceEntity(156U);
    msg.setDestination(12697U);
    msg.setDestinationEntity(130U);
    msg.nbeams = 183U;
    msg.ncells = 211U;
    msg.coord_sys = 237U;
    IMC::CurrentProfileCell tmp_msg_0;
    tmp_msg_0.cell_position = 0.9450826155375869;
    IMC::ADCPBeam tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.vel = 0.8499872522964004;
    tmp_tmp_msg_0_0.amp = 0.5084309485619078;
    tmp_tmp_msg_0_0.cor = 157U;
    tmp_msg_0.beams.push_back(tmp_tmp_msg_0_0);
    msg.profile.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CurrentProfile #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CurrentProfile msg;
    msg.setTimeStamp(0.06706110141622201);
    msg.setSource(8142U);
    msg.setSourceEntity(131U);
    msg.setDestination(40247U);
    msg.setDestinationEntity(138U);
    msg.nbeams = 154U;
    msg.ncells = 12U;
    msg.coord_sys = 64U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CurrentProfile #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CurrentProfile msg;
    msg.setTimeStamp(0.8477290035103706);
    msg.setSource(50946U);
    msg.setSourceEntity(143U);
    msg.setDestination(12858U);
    msg.setDestinationEntity(221U);
    msg.nbeams = 96U;
    msg.ncells = 202U;
    msg.coord_sys = 111U;
    IMC::CurrentProfileCell tmp_msg_0;
    tmp_msg_0.cell_position = 0.4293361344922312;
    IMC::ADCPBeam tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.vel = 0.6688318717330665;
    tmp_tmp_msg_0_0.amp = 0.7260629387805038;
    tmp_tmp_msg_0_0.cor = 200U;
    tmp_msg_0.beams.push_back(tmp_tmp_msg_0_0);
    msg.profile.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CurrentProfile #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CurrentProfileCell msg;
    msg.setTimeStamp(0.925246669336808);
    msg.setSource(57620U);
    msg.setSourceEntity(243U);
    msg.setDestination(56561U);
    msg.setDestinationEntity(107U);
    msg.cell_position = 0.8287789335598497;
    IMC::ADCPBeam tmp_msg_0;
    tmp_msg_0.vel = 0.4829505477558991;
    tmp_msg_0.amp = 0.8377884628940839;
    tmp_msg_0.cor = 59U;
    msg.beams.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CurrentProfileCell #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CurrentProfileCell msg;
    msg.setTimeStamp(0.5251596452201801);
    msg.setSource(3208U);
    msg.setSourceEntity(171U);
    msg.setDestination(38974U);
    msg.setDestinationEntity(172U);
    msg.cell_position = 0.7571919310343951;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CurrentProfileCell #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CurrentProfileCell msg;
    msg.setTimeStamp(0.6224183708658795);
    msg.setSource(31941U);
    msg.setSourceEntity(102U);
    msg.setDestination(26112U);
    msg.setDestinationEntity(40U);
    msg.cell_position = 0.21523060487909884;
    IMC::ADCPBeam tmp_msg_0;
    tmp_msg_0.vel = 0.11716206063585632;
    tmp_msg_0.amp = 0.03950403832539373;
    tmp_msg_0.cor = 104U;
    msg.beams.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CurrentProfileCell #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ADCPBeam msg;
    msg.setTimeStamp(0.7980312065146958);
    msg.setSource(7353U);
    msg.setSourceEntity(13U);
    msg.setDestination(50177U);
    msg.setDestinationEntity(246U);
    msg.vel = 0.04686418464758868;
    msg.amp = 0.5289249105623618;
    msg.cor = 247U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ADCPBeam #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ADCPBeam msg;
    msg.setTimeStamp(0.4806085354068559);
    msg.setSource(23911U);
    msg.setSourceEntity(22U);
    msg.setDestination(53300U);
    msg.setDestinationEntity(4U);
    msg.vel = 0.6910507567390385;
    msg.amp = 0.08722054122635992;
    msg.cor = 123U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ADCPBeam #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ADCPBeam msg;
    msg.setTimeStamp(0.3388445868480746);
    msg.setSource(64494U);
    msg.setSourceEntity(168U);
    msg.setDestination(31207U);
    msg.setDestinationEntity(119U);
    msg.vel = 0.11829076341712519;
    msg.amp = 0.337202254879972;
    msg.cor = 109U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ADCPBeam #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpioState msg;
    msg.setTimeStamp(0.41833118611055276);
    msg.setSource(16258U);
    msg.setSourceEntity(76U);
    msg.setDestination(45452U);
    msg.setDestinationEntity(25U);
    msg.name.assign("FPUNCZUGQFFMDUXFEWOGKTKRITCOWAKMYX");
    msg.value = 139U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpioState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpioState msg;
    msg.setTimeStamp(0.2925961005263099);
    msg.setSource(26468U);
    msg.setSourceEntity(34U);
    msg.setDestination(1309U);
    msg.setDestinationEntity(224U);
    msg.name.assign("YRFNDZZIVKAABVFMFOZGCUGGXCBJAMYYYZEACPRNQOKGVQCEOENJSWLKXOSHDZSZFXDJRQJIBEFTJYRNDLETKOJFVAEMCZWQRLZXWQISDKYHVGJMEKKKVQQSGZQPCMQUPCLXMUIKGQHBVSZWYLMTUAYJUNXTUIEMNXPNFWTCPNUPDXWGHFCOBGTJHTEWYHTBPAVWELRGUPBHAUROWIIDVWIRLULDMVNHBTYFANJIISCOBSODBFXXPPAHMLKDSL");
    msg.value = 192U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpioState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpioState msg;
    msg.setTimeStamp(0.09156406770604364);
    msg.setSource(31962U);
    msg.setSourceEntity(80U);
    msg.setDestination(3905U);
    msg.setDestinationEntity(59U);
    msg.name.assign("OJHKWFCTHRMTXKGLZQYHLEEVCUSMZGXZGRQRHOVWIHNRXCNLAGDPUDJPCNDXGKFEDOIKEJCCXFNENNZMVORZJHFTTDOLVOQHYBAWAXDUYBYBEDWUBPYXQJBGS");
    msg.value = 60U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpioState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpioStateGet msg;
    msg.setTimeStamp(0.7555119549721501);
    msg.setSource(32415U);
    msg.setSourceEntity(0U);
    msg.setDestination(6122U);
    msg.setDestinationEntity(185U);
    msg.name.assign("OWGMYGYJIHGCEOYDODWURQAYECNRKAJIPJUKDNTTVXRBSEFPKXDRXLEQHZKGCGGPUZVBVNWTVAYGXXYSTWFKUIESZOSPMTCKZMKOYLSVHOBBRTBQIIDPFLWZLXCCHDHQORFLBKDIIURSFONUGJQWPZCBWXAMULPHHTIDOKALTJZEKABJUQDHVTJXWDVFPLYMWVZOVZEJJFFEACQNXBNQVACSJLUFSUMIIGNQLHZPYXQMNMBRTAESMMNRYSAGWN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpioStateGet #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpioStateGet msg;
    msg.setTimeStamp(0.3266738264692952);
    msg.setSource(43088U);
    msg.setSourceEntity(142U);
    msg.setDestination(49223U);
    msg.setDestinationEntity(221U);
    msg.name.assign("UDVAQTYNWXJOILYAQKEGRNESXGWSTYXFAMDFPUNSJXGFPRXWZNHAENUFBJZCEELGRTKZBJDHLFYHRILIAIUBTARLLDEOZHOCHHIMZFXVYOYFWMRWPOJZHHGIMPMBCVKQEDRCDDVUXKVOQZSXZQCOJLUVWKSMME");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpioStateGet #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpioStateGet msg;
    msg.setTimeStamp(0.8995803437482307);
    msg.setSource(31124U);
    msg.setSourceEntity(107U);
    msg.setDestination(53426U);
    msg.setDestinationEntity(209U);
    msg.name.assign("SIFYKCVMRBOIWTUOFKHTHUNVDTBQPGLUVRNLFCRMIOTDNCIPSOTBDWWVBMJMVUUGCVJZIXASBSFJCQYGJTXRXISENRGZVDQIUQAMYAXSYVMZAZNKPKXPSVDNKKHHWUXOMFFMQLYYQJEACCGLOATDEDARFXZKEPQNRPALCHWGIRPAMEFJLCMGQTXLKDJWETZBV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpioStateGet #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpioStateSet msg;
    msg.setTimeStamp(0.6161729903086997);
    msg.setSource(9424U);
    msg.setSourceEntity(74U);
    msg.setDestination(8841U);
    msg.setDestinationEntity(52U);
    msg.name.assign("KLGBNJRFCDRTCPRGMMTEIUNDRMTFTJMFYWHZKYSXMPHXPUHMIKESBGEWUIUYGSWLDTGCHPNQ");
    msg.value = 10U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpioStateSet #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpioStateSet msg;
    msg.setTimeStamp(0.498189797170811);
    msg.setSource(32631U);
    msg.setSourceEntity(175U);
    msg.setDestination(44176U);
    msg.setDestinationEntity(79U);
    msg.name.assign("RPYEBKRBLQYLNQEYBUOIFXNDKBJYVOMCWIUHVDKSHGXDBOKNPAKUERTIEIOIQXNRFTVOWCYBAGCSPMGFNJMETJLLKVXQYESEVTSCWHAYPLACNUHSWPINZFFQLSVAYCZFWTJJD");
    msg.value = 0U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpioStateSet #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpioStateSet msg;
    msg.setTimeStamp(0.7244414835925437);
    msg.setSource(44823U);
    msg.setSourceEntity(16U);
    msg.setDestination(44379U);
    msg.setDestinationEntity(221U);
    msg.name.assign("MYCRTDNNDZEAISAVEVCQOFWJOZARVFQMPSBSBMDOVOCTBGSVEARQGCZEXWXKPIZEKGDXLHULMSEXWYUITKYBPSWMWAXIQUVZTLCRMFPJYPMTKGMOFXFAQKQHYGSWZGLTR");
    msg.value = 157U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpioStateSet #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ColoredDissolvedOrganicMatter msg;
    msg.setTimeStamp(0.24597471633838397);
    msg.setSource(64710U);
    msg.setSourceEntity(14U);
    msg.setDestination(324U);
    msg.setDestinationEntity(230U);
    msg.value = 0.21318436875923397;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ColoredDissolvedOrganicMatter #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ColoredDissolvedOrganicMatter msg;
    msg.setTimeStamp(0.6729694799399896);
    msg.setSource(29010U);
    msg.setSourceEntity(179U);
    msg.setDestination(13074U);
    msg.setDestinationEntity(164U);
    msg.value = 0.2589627123921062;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ColoredDissolvedOrganicMatter #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ColoredDissolvedOrganicMatter msg;
    msg.setTimeStamp(0.3726342602412912);
    msg.setSource(20037U);
    msg.setSourceEntity(157U);
    msg.setDestination(60344U);
    msg.setDestinationEntity(139U);
    msg.value = 0.9937899548420519;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ColoredDissolvedOrganicMatter #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FluorescentDissolvedOrganicMatter msg;
    msg.setTimeStamp(0.9511392234545938);
    msg.setSource(32749U);
    msg.setSourceEntity(143U);
    msg.setDestination(3575U);
    msg.setDestinationEntity(253U);
    msg.value = 0.8211537463808702;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FluorescentDissolvedOrganicMatter #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FluorescentDissolvedOrganicMatter msg;
    msg.setTimeStamp(0.6119797199120858);
    msg.setSource(46499U);
    msg.setSourceEntity(24U);
    msg.setDestination(33334U);
    msg.setDestinationEntity(10U);
    msg.value = 0.7038676119894489;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FluorescentDissolvedOrganicMatter #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FluorescentDissolvedOrganicMatter msg;
    msg.setTimeStamp(0.4559784589989778);
    msg.setSource(44975U);
    msg.setSourceEntity(7U);
    msg.setDestination(19882U);
    msg.setDestinationEntity(142U);
    msg.value = 0.829908193150275;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FluorescentDissolvedOrganicMatter #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TotalMagIntensity msg;
    msg.setTimeStamp(0.8116365317695969);
    msg.setSource(201U);
    msg.setSourceEntity(249U);
    msg.setDestination(40561U);
    msg.setDestinationEntity(74U);
    msg.value = 0.6722710929213563;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TotalMagIntensity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TotalMagIntensity msg;
    msg.setTimeStamp(0.8720945903045617);
    msg.setSource(42602U);
    msg.setSourceEntity(6U);
    msg.setDestination(59312U);
    msg.setDestinationEntity(181U);
    msg.value = 0.5115694627500232;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TotalMagIntensity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TotalMagIntensity msg;
    msg.setTimeStamp(0.9476526730347797);
    msg.setSource(55887U);
    msg.setSourceEntity(134U);
    msg.setDestination(36551U);
    msg.setDestinationEntity(221U);
    msg.value = 0.3943240312828824;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TotalMagIntensity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CommRestriction msg;
    msg.setTimeStamp(0.9375640843783389);
    msg.setSource(12181U);
    msg.setSourceEntity(109U);
    msg.setDestination(30016U);
    msg.setDestinationEntity(38U);
    msg.restriction = 133U;
    msg.reason.assign("DTADDQKVECRXMZTOTTAZOFQYCFGYJKCRBXBYMUSBZOGNMFBEOQZIDPPFUBNGJIZFFENAILAZUAIEMNZAGCLVGINSHKKTTQIVVYDNZSVBNGETMDPGWHWHWCPMXOJTDXGTSOJSTKEIXSVXMORHLUSCHLLIRYQPCPRLRFGXQWBVYDVFLRWMZXACLWXSHKAHCBPRNUKNJYLBOJMXQONEBQJY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CommRestriction #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CommRestriction msg;
    msg.setTimeStamp(0.6419140931326955);
    msg.setSource(43131U);
    msg.setSourceEntity(99U);
    msg.setDestination(16591U);
    msg.setDestinationEntity(77U);
    msg.restriction = 241U;
    msg.reason.assign("LIDVFJCIPZHFXXNYPQHEMBKALFIQMYSFHVWHTIJMXQYXCRQGOEORJVTCTKHNAWFCWWBJTUBBTHJFWASBCNOATNWIRQHOLHGEPZMZXEMYDPIBHNCOMKSGUVGEIABISROUNXYKIXPEJQVPYESADFQXRQZJTFDKQXRDKYLRWDUGCNKMZAGLCFZBMZHAGOSLZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CommRestriction #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CommRestriction msg;
    msg.setTimeStamp(0.7490585309464458);
    msg.setSource(64831U);
    msg.setSourceEntity(81U);
    msg.setDestination(41716U);
    msg.setDestinationEntity(40U);
    msg.restriction = 223U;
    msg.reason.assign("HGOLUNUAQSKXYKFQGRITHVFAWMDOBXEMVQRTELTQFKOURBWKOTYACISQGDJZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CommRestriction #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  return test.getReturnValue();
}
