/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: Connection.proto */

/* Do not generate deprecated warnings for self */
#ifndef PROTOBUF_C__NO_DEPRECATED
#define PROTOBUF_C__NO_DEPRECATED
#endif

#include "Connection.pb-c.h"
static const ProtobufCEnumValue close_code__enum_values_by_number[6] =
{
  { "CLOSE_CODE_UNSPECIFIED", "CLOSE_CODE__CLOSE_CODE_UNSPECIFIED", 0 },
  { "CLOSE_CODE_NORMAL", "CLOSE_CODE__CLOSE_CODE_NORMAL", 1006 },
  { "CLOSE_CODE_ROOM_EXPIRED", "CLOSE_CODE__CLOSE_CODE_ROOM_EXPIRED", 4001 },
  { "CLOSE_CODE_CLIENT_USER_REQUESTED", "CLOSE_CODE__CLOSE_CODE_CLIENT_USER_REQUESTED", 4100 },
  { "CLOSE_CODE_UNAUTHORIZED", "CLOSE_CODE__CLOSE_CODE_UNAUTHORIZED", 4401 },
  { "CLOSE_CODE_NOTFOUND", "CLOSE_CODE__CLOSE_CODE_NOTFOUND", 4404 },
};
static const ProtobufCIntRange close_code__value_ranges[] = {
{0, 0},{1006, 1},{4001, 2},{4100, 3},{4401, 4},{4404, 5},{0, 6}
};
static const ProtobufCEnumValueIndex close_code__enum_values_by_name[6] =
{
  { "CLOSE_CODE_CLIENT_USER_REQUESTED", 3 },
  { "CLOSE_CODE_NORMAL", 1 },
  { "CLOSE_CODE_NOTFOUND", 5 },
  { "CLOSE_CODE_ROOM_EXPIRED", 2 },
  { "CLOSE_CODE_UNAUTHORIZED", 4 },
  { "CLOSE_CODE_UNSPECIFIED", 0 },
};
const ProtobufCEnumDescriptor close_code__descriptor =
{
  PROTOBUF_C__ENUM_DESCRIPTOR_MAGIC,
  "CloseCode",
  "CloseCode",
  "CloseCode",
  "",
  6,
  close_code__enum_values_by_number,
  6,
  close_code__enum_values_by_name,
  6,
  close_code__value_ranges,
  NULL,NULL,NULL,NULL   /* reserved[1234] */
};