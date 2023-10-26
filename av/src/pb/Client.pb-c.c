/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: Client.proto */

/* Do not generate deprecated warnings for self */
#ifndef PROTOBUF_C__NO_DEPRECATED
#define PROTOBUF_C__NO_DEPRECATED
#endif

#include "Client.pb-c.h"
void   client__init
                     (Client         *message)
{
  static const Client init_value = CLIENT__INIT;
  *message = init_value;
}
size_t client__get_packed_size
                     (const Client *message)
{
  assert(message->base.descriptor == &client__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t client__pack
                     (const Client *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &client__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t client__pack_to_buffer
                     (const Client *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &client__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Client *
       client__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Client *)
     protobuf_c_message_unpack (&client__descriptor,
                                allocator, len, data);
}
void   client__free_unpacked
                     (Client *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &client__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   client_chat_message__init
                     (ClientChatMessage         *message)
{
  static const ClientChatMessage init_value = CLIENT_CHAT_MESSAGE__INIT;
  *message = init_value;
}
size_t client_chat_message__get_packed_size
                     (const ClientChatMessage *message)
{
  assert(message->base.descriptor == &client_chat_message__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t client_chat_message__pack
                     (const ClientChatMessage *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &client_chat_message__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t client_chat_message__pack_to_buffer
                     (const ClientChatMessage *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &client_chat_message__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
ClientChatMessage *
       client_chat_message__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (ClientChatMessage *)
     protobuf_c_message_unpack (&client_chat_message__descriptor,
                                allocator, len, data);
}
void   client_chat_message__free_unpacked
                     (ClientChatMessage *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &client_chat_message__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   client_message__init
                     (ClientMessage         *message)
{
  static const ClientMessage init_value = CLIENT_MESSAGE__INIT;
  *message = init_value;
}
size_t client_message__get_packed_size
                     (const ClientMessage *message)
{
  assert(message->base.descriptor == &client_message__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t client_message__pack
                     (const ClientMessage *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &client_message__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t client_message__pack_to_buffer
                     (const ClientMessage *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &client_message__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
ClientMessage *
       client_message__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (ClientMessage *)
     protobuf_c_message_unpack (&client_message__descriptor,
                                allocator, len, data);
}
void   client_message__free_unpacked
                     (ClientMessage *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &client_message__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
static const ProtobufCFieldDescriptor client__field_descriptors[4] =
{
  {
    "userId",
    1,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(Client, userid),
    NULL,
    &protobuf_c_empty_string,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "nickname",
    2,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(Client, nickname),
    NULL,
    &protobuf_c_empty_string,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "pointers",
    3,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    offsetof(Client, pointers),
    &pointer_collection__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "role",
    4,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_ENUM,
    0,   /* quantifier_offset */
    offsetof(Client, role),
    &client_role__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned client__field_indices_by_name[] = {
  1,   /* field[1] = nickname */
  2,   /* field[2] = pointers */
  3,   /* field[3] = role */
  0,   /* field[0] = userId */
};
static const ProtobufCIntRange client__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 4 }
};
const ProtobufCMessageDescriptor client__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "Client",
  "Client",
  "Client",
  "",
  sizeof(Client),
  4,
  client__field_descriptors,
  client__field_indices_by_name,
  1,  client__number_ranges,
  (ProtobufCMessageInit) client__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor client_chat_message__field_descriptors[1] =
{
  {
    "text",
    2,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(ClientChatMessage, text),
    NULL,
    &protobuf_c_empty_string,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned client_chat_message__field_indices_by_name[] = {
  0,   /* field[0] = text */
};
static const ProtobufCIntRange client_chat_message__number_ranges[1 + 1] =
{
  { 2, 0 },
  { 0, 1 }
};
const ProtobufCMessageDescriptor client_chat_message__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "ClientChatMessage",
  "ClientChatMessage",
  "ClientChatMessage",
  "",
  sizeof(ClientChatMessage),
  1,
  client_chat_message__field_descriptors,
  client_chat_message__field_indices_by_name,
  1,  client_chat_message__number_ranges,
  (ProtobufCMessageInit) client_chat_message__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor client_message__field_descriptors[6] =
{
  {
    "userId",
    1,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(ClientMessage, userid),
    NULL,
    &protobuf_c_empty_string,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "type",
    2,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_ENUM,
    0,   /* quantifier_offset */
    offsetof(ClientMessage, type),
    &client_message_type__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "nickname",
    3,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_STRING,
    offsetof(ClientMessage, data_case),
    offsetof(ClientMessage, nickname),
    NULL,
    &protobuf_c_empty_string,
    0 | PROTOBUF_C_FIELD_FLAG_ONEOF,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "pointers",
    4,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(ClientMessage, data_case),
    offsetof(ClientMessage, pointers),
    &pointer_collection__descriptor,
    NULL,
    0 | PROTOBUF_C_FIELD_FLAG_ONEOF,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "chatMessage",
    5,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(ClientMessage, data_case),
    offsetof(ClientMessage, chatmessage),
    &client_chat_message__descriptor,
    NULL,
    0 | PROTOBUF_C_FIELD_FLAG_ONEOF,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "timestamp",
    6,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    offsetof(ClientMessage, timestamp),
    &google__protobuf__timestamp__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned client_message__field_indices_by_name[] = {
  4,   /* field[4] = chatMessage */
  2,   /* field[2] = nickname */
  3,   /* field[3] = pointers */
  5,   /* field[5] = timestamp */
  1,   /* field[1] = type */
  0,   /* field[0] = userId */
};
static const ProtobufCIntRange client_message__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 6 }
};
const ProtobufCMessageDescriptor client_message__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "ClientMessage",
  "ClientMessage",
  "ClientMessage",
  "",
  sizeof(ClientMessage),
  6,
  client_message__field_descriptors,
  client_message__field_indices_by_name,
  1,  client_message__number_ranges,
  (ProtobufCMessageInit) client_message__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCEnumValue client_role__enum_values_by_number[4] =
{
  { "CLIENT_ROLE_UNSPECIFIED", "CLIENT_ROLE__CLIENT_ROLE_UNSPECIFIED", 0 },
  { "GUEST", "CLIENT_ROLE__GUEST", 1 },
  { "ROOM_OWNER", "CLIENT_ROLE__ROOM_OWNER", 2 },
  { "SERVER_ADMIN", "CLIENT_ROLE__SERVER_ADMIN", 3 },
};
static const ProtobufCIntRange client_role__value_ranges[] = {
{0, 0},{0, 4}
};
static const ProtobufCEnumValueIndex client_role__enum_values_by_name[4] =
{
  { "CLIENT_ROLE_UNSPECIFIED", 0 },
  { "GUEST", 1 },
  { "ROOM_OWNER", 2 },
  { "SERVER_ADMIN", 3 },
};
const ProtobufCEnumDescriptor client_role__descriptor =
{
  PROTOBUF_C__ENUM_DESCRIPTOR_MAGIC,
  "ClientRole",
  "ClientRole",
  "ClientRole",
  "",
  4,
  client_role__enum_values_by_number,
  4,
  client_role__enum_values_by_name,
  1,
  client_role__value_ranges,
  NULL,NULL,NULL,NULL   /* reserved[1234] */
};
static const ProtobufCEnumValue client_message_type__enum_values_by_number[4] =
{
  { "CLIENT_MESSAGE_TYPE_UNSPECIFIED", "CLIENT_MESSAGE_TYPE__CLIENT_MESSAGE_TYPE_UNSPECIFIED", 0 },
  { "UPDATE_NICKNAME", "CLIENT_MESSAGE_TYPE__UPDATE_NICKNAME", 1 },
  { "UPDATE_POINTERS", "CLIENT_MESSAGE_TYPE__UPDATE_POINTERS", 2 },
  { "CHAT_MESSAGE", "CLIENT_MESSAGE_TYPE__CHAT_MESSAGE", 3 },
};
static const ProtobufCIntRange client_message_type__value_ranges[] = {
{0, 0},{0, 4}
};
static const ProtobufCEnumValueIndex client_message_type__enum_values_by_name[4] =
{
  { "CHAT_MESSAGE", 3 },
  { "CLIENT_MESSAGE_TYPE_UNSPECIFIED", 0 },
  { "UPDATE_NICKNAME", 1 },
  { "UPDATE_POINTERS", 2 },
};
const ProtobufCEnumDescriptor client_message_type__descriptor =
{
  PROTOBUF_C__ENUM_DESCRIPTOR_MAGIC,
  "ClientMessageType",
  "ClientMessageType",
  "ClientMessageType",
  "",
  4,
  client_message_type__enum_values_by_number,
  4,
  client_message_type__enum_values_by_name,
  1,
  client_message_type__value_ranges,
  NULL,NULL,NULL,NULL   /* reserved[1234] */
};
