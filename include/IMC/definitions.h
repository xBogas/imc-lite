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
//***************************************************************************
// Automatically generated.                                                 *
//***************************************************************************
// IMC XML MD5: 0f425402b735f36a64d579da7bb4baf3                            *
//***************************************************************************

#ifndef DUNE_IMC_DEFINITIONS_HPP_INCLUDED_
#define DUNE_IMC_DEFINITIONS_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <ostream>
#include <string>
#include <vector>

#include "header.h"

typedef float fp32_t;
#include "types.def"


template<typename T>
class MessageList
{
public:
  MessageList()
  {};
  
  ~MessageList()
  {};
private:
  /* data */
};

//! Entity State.
class EntityState: public Message
{
public:
  //! State.
  enum StateEnum
  {
    //! Bootstrapping.
    ESTA_BOOT = 0,
    //! Normal Operation.
    ESTA_NORMAL = 1,
    //! Fault.
    ESTA_FAULT = 2,
    //! Error.
    ESTA_ERROR = 3,
    //! Failure.
    ESTA_FAILURE = 4
  };

  //! Flags.
  enum FlagsBits
  {
    //! Human Intervention Required.
    EFLA_HUMAN_INTERVENTION = 0x01
  };

  //! State.
  uint8_t state;
  //! Flags.
  uint8_t flags;
  //! Complementary description.
  std::string description;

  static uint16_t
  getIdStatic(void);

  EntityState(void)
  {};

  EntityState*
  clone(void) const;

  void
  clear(void);

  bool
  fieldsEqual(const Message& msg__) const;

  int
  validate(void) const;

  uint8_t*
  serializeFields(uint8_t* bfr__) const;

  uint16_t
  deserializeFields(const uint8_t* bfr__, uint16_t size__);

  uint16_t
  reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

  uint16_t
  getId(void) const;

  const char*
  getName(void) const;

  unsigned
  getFixedSerializationSize(void) const;

  unsigned
  getVariableSerializationSize(void) const;

  void
  fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
};

//! Query Entity State.
class QueryEntityState: public Message
{
public:

  static uint16_t
  getIdStatic(void);

  QueryEntityState(void)
  {};

  QueryEntityState*
  clone(void) const;

  void
  clear(void);

  int
  validate(void) const;

  uint8_t*
  serializeFields(uint8_t* bfr__) const;

  uint16_t
  deserializeFields(const uint8_t* bfr__, uint16_t size__);

  uint16_t
  reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

  uint16_t
  getId(void) const;

  const char*
  getName(void) const;

  unsigned
  getFixedSerializationSize(void) const;
};

//! Entity List.
class EntityList: public Message
{
public:
  //! operation.
  enum operationEnum
  {
    //! Report.
    OP_REPORT = 0,
    //! Query.
    OP_QUERY = 1
  };

  //! operation.
  uint8_t op;
  //! list.
  std::string list;

  static uint16_t
  getIdStatic(void);

  EntityList(void)
  {};

  EntityList*
  clone(void) const;

  void
  clear(void);

  bool
  fieldsEqual(const Message& msg__) const;

  int
  validate(void) const;

  uint8_t*
  serializeFields(uint8_t* bfr__) const;

  uint16_t
  deserializeFields(const uint8_t* bfr__, uint16_t size__);

  uint16_t
  reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

  uint16_t
  getId(void) const
  {
    return EntityList::getIdStatic();
  }

  const char*
  getName(void) const;

  unsigned
  getFixedSerializationSize(void) const;

  unsigned
  getVariableSerializationSize(void) const;

  void
  fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
};

//! Transport Bindings.
class TransportBindings: public Message
{
public:
  //! Consumer name.
  std::string consumer;
  //! Message Identifier.
  uint16_t message_id;

  static uint16_t
  getIdStatic(void);

  TransportBindings(void)
  {};

  TransportBindings*
  clone(void) const;

  void
  clear(void);

  bool
  fieldsEqual(const Message& msg__) const;

  int
  validate(void) const;

  uint8_t*
  serializeFields(uint8_t* bfr__) const;

  uint16_t
  deserializeFields(const uint8_t* bfr__, uint16_t size__);

  uint16_t
  reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

  uint16_t
  getId(void) const;

  const char*
  getName(void) const;

  unsigned
  getFixedSerializationSize(void) const;

  unsigned
  getVariableSerializationSize(void) const;

  void
  fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
};

//! Restart System.
class RestartSystem: public Message
{
public:
  //! Restart Type.
  enum RestartTypeEnum
  {
    //! Dune.
    RSTYPE_DUNE = 1,
    //! System.
    RSTYPE_SYSTEM = 2
  };

  //! Restart Type.
  uint8_t type;

  static uint16_t
  getIdStatic(void);

  RestartSystem(void)
  {};

  RestartSystem*
  clone(void) const;

  void
  clear(void);

  bool
  fieldsEqual(const Message& msg__) const;

  int
  validate(void) const;

  uint8_t*
  serializeFields(uint8_t* bfr__) const;

  uint16_t
  deserializeFields(const uint8_t* bfr__, uint16_t size__);

  uint16_t
  reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

  uint16_t
  getId(void) const
  {
    return RestartSystem::getIdStatic();
  }

  const char*
  getName(void) const
  {
    return "RestartSystem";
  }

  unsigned
  getFixedSerializationSize(void) const
  {
    return 1;
  }

  void
  fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
};

//! Vehicle Operational Limits.
class VehicleOperationalLimits: public Message
{
public:
  //! Action on the vehicle operational limits.
  enum ActiononthevehicleoperationallimitsEnum
  {
    //! Request.
    OP_REQUEST = 0,
    //! Set.
    OP_SET = 1,
    //! Report.
    OP_REPORT = 2
  };

  //! Action on the vehicle operational limits.
  uint8_t op;
  //! Minimum speed.
  fp32_t speed_min;
  //! Maximum speed.
  fp32_t speed_max;
  //! Longitudinal maximum acceleration.
  fp32_t long_accel;
  //! Maximum MSL altitude.
  fp32_t alt_max_msl;
  //! Maximum Dive Rate Speed Fraction.
  fp32_t dive_fraction_max;
  //! Maximum Climb Rate Speed Fraction.
  fp32_t climb_fraction_max;
  //! Bank limit.
  fp32_t bank_max;
  //! Bank rate limit.
  fp32_t p_max;
  //! Minimum pitch angle.
  fp32_t pitch_min;
  //! Maximum pitch angle.
  fp32_t pitch_max;
  //! Maximum pitch rate.
  fp32_t q_max;
  //! Minimum load factor.
  fp32_t g_min;
  //! Maximum load factor.
  fp32_t g_max;
  //! Maximum lateral load factor.
  fp32_t g_lat_max;
  //! Minimum RPMs.
  fp32_t rpm_min;
  //! Maximum RPMs.
  fp32_t rpm_max;
  //! Maximum RPM rate.
  fp32_t rpm_rate_max;

  static uint16_t
  getIdStatic(void);

  VehicleOperationalLimits(void)
  {};

  VehicleOperationalLimits*
  clone(void) const;

  void
  clear(void);

  bool
  fieldsEqual(const Message& msg__) const;

  int
  validate(void) const;

  uint8_t*
  serializeFields(uint8_t* bfr__) const;

  uint16_t
  deserializeFields(const uint8_t* bfr__, uint16_t size__);

  uint16_t
  reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

  uint16_t
  getId(void) const;

  const char*
  getName(void) const;

  unsigned
  getFixedSerializationSize(void) const;

  void
  fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
};

//! Message List.
class MsgList: public Message
{
public:
  //! Messages.
  MessageList<Message> msgs;

  static uint16_t
  getIdStatic(void);

  MsgList(void)
  {};

  MsgList*
  clone(void) const;

  void
  clear(void);

  bool
  fieldsEqual(const Message& msg__) const;

  int
  validate(void) const;

  uint8_t*
  serializeFields(uint8_t* bfr__) const;

  uint16_t
  deserializeFields(const uint8_t* bfr__, uint16_t size__);

  uint16_t
  reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

  uint16_t
  getId(void) const;

  const char*
  getName(void) const;

  unsigned
  getFixedSerializationSize(void) const;

  unsigned
  getVariableSerializationSize(void) const;

  void
  fieldsToJSON(std::ostream& os__, unsigned nindent__) const;

protected:
  void
  setTimeStampNested(double value__);

  void
  setSourceNested(uint16_t value__);

  void
  setSourceEntityNested(uint8_t value__);

  void
  setDestinationNested(uint16_t value__);

  void
  setDestinationEntityNested(uint8_t value__);
};

//! Simulated State.
class SimulatedState: public Message
{
public:
  //! Latitude (WGS-84).
  fp64_t lat;
  //! Longitude (WGS-84).
  fp64_t lon;
  //! Height (WGS-84).
  fp32_t height;
  //! Offset north (m).
  fp32_t x;
  //! Offset east (m).
  fp32_t y;
  //! Offset down (m).
  fp32_t z;
  //! Rotation over x axis.
  fp32_t phi;
  //! Rotation over y axis.
  fp32_t theta;
  //! Rotation over z axis.
  fp32_t psi;
  //! Body-Fixed xx Linear Velocity.
  fp32_t u;
  //! Body-Fixed yy Linear Velocity.
  fp32_t v;
  //! Body-Fixed zz Linear Velocity.
  fp32_t w;
  //! Angular Velocity in x.
  fp32_t p;
  //! Angular Velocity in y.
  fp32_t q;
  //! Angular Velocity in z.
  fp32_t r;
  //! Stream Velocity X (North).
  fp32_t svx;
  //! Stream Velocity Y (East).
  fp32_t svy;
  //! Stream Velocity Z (Down).
  fp32_t svz;

  static uint16_t
  getIdStatic(void);

  SimulatedState(void)
  {};

  SimulatedState*
  clone(void) const;

  void
  clear(void);

  bool
  fieldsEqual(const Message& msg__) const;

  int
  validate(void) const;

  uint8_t*
  serializeFields(uint8_t* bfr__) const;

  uint16_t
  deserializeFields(const uint8_t* bfr__, uint16_t size__);

  uint16_t
  reverseDeserializeFields(const uint8_t* bfr__, uint16_t size__);

  uint16_t
  getId(void) const;

  const char*
  getName(void) const;

  unsigned
  getFixedSerializationSize(void) const;

  void
  fieldsToJSON(std::ostream& os__, unsigned nindent__) const;
};

#endif