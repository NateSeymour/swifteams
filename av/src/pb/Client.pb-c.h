/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: Client.proto */

#ifndef PROTOBUF_C_Client_2eproto__INCLUDED
#define PROTOBUF_C_Client_2eproto__INCLUDED

#include <protobuf-c/protobuf-c.h>

PROTOBUF_C__BEGIN_DECLS

#if PROTOBUF_C_VERSION_NUMBER < 1003000
# error This file was generated by a newer version of protoc-c which is incompatible with your libprotobuf-c headers. Please update your headers.
#elif 1004001 < PROTOBUF_C_MIN_COMPILER_VERSION
# error This file was generated by an older version of protoc-c which is incompatible with your libprotobuf-c headers. Please regenerate this file with a newer version of protoc-c.
#endif

#include "Pointer.pb-c.h"
#include "google/protobuf/timestamp.pb-c.h"

typedef struct Client Client;
typedef struct ClientChatMessage ClientChatMessage;
typedef struct ClientMessage ClientMessage;


/* --- enums --- */

typedef enum _ClientRole {
  CLIENT_ROLE__CLIENT_ROLE_UNSPECIFIED = 0,
  CLIENT_ROLE__GUEST = 1,
  CLIENT_ROLE__ROOM_OWNER = 2,
  CLIENT_ROLE__SERVER_ADMIN = 3
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(CLIENT_ROLE)
} ClientRole;
typedef enum _ClientMessageType {
  CLIENT_MESSAGE_TYPE__CLIENT_MESSAGE_TYPE_UNSPECIFIED = 0,
  CLIENT_MESSAGE_TYPE__UPDATE_NICKNAME = 1,
  CLIENT_MESSAGE_TYPE__UPDATE_POINTERS = 2,
  CLIENT_MESSAGE_TYPE__CHAT_MESSAGE = 3
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(CLIENT_MESSAGE_TYPE)
} ClientMessageType;

/* --- messages --- */

struct  Client
{
  ProtobufCMessage base;
  char *userid;
  ClientRole role;
  char *nickname;
  PointerCollection *pointers;
};
#define CLIENT__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&client__descriptor) \
, (char *)protobuf_c_empty_string, CLIENT_ROLE__CLIENT_ROLE_UNSPECIFIED, (char *)protobuf_c_empty_string, NULL }


struct  ClientChatMessage
{
  ProtobufCMessage base;
  char *text;
};
#define CLIENT_CHAT_MESSAGE__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&client_chat_message__descriptor) \
, (char *)protobuf_c_empty_string }


typedef enum {
  CLIENT_MESSAGE__DATA__NOT_SET = 0,
  CLIENT_MESSAGE__DATA_NICKNAME = 3,
  CLIENT_MESSAGE__DATA_POINTERS = 4,
  CLIENT_MESSAGE__DATA_CHAT_MESSAGE = 5
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(CLIENT_MESSAGE__DATA__CASE)
} ClientMessage__DataCase;

struct  ClientMessage
{
  ProtobufCMessage base;
  char *userid;
  ClientMessageType type;
  Google__Protobuf__Timestamp *timestamp;
  ClientMessage__DataCase data_case;
  union {
    char *nickname;
    PointerCollection *pointers;
    ClientChatMessage *chatmessage;
  };
};
#define CLIENT_MESSAGE__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&client_message__descriptor) \
, (char *)protobuf_c_empty_string, CLIENT_MESSAGE_TYPE__CLIENT_MESSAGE_TYPE_UNSPECIFIED, NULL, CLIENT_MESSAGE__DATA__NOT_SET, {0} }


/* Client methods */
void   client__init
                     (Client         *message);
size_t client__get_packed_size
                     (const Client   *message);
size_t client__pack
                     (const Client   *message,
                      uint8_t             *out);
size_t client__pack_to_buffer
                     (const Client   *message,
                      ProtobufCBuffer     *buffer);
Client *
       client__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   client__free_unpacked
                     (Client *message,
                      ProtobufCAllocator *allocator);
/* ClientChatMessage methods */
void   client_chat_message__init
                     (ClientChatMessage         *message);
size_t client_chat_message__get_packed_size
                     (const ClientChatMessage   *message);
size_t client_chat_message__pack
                     (const ClientChatMessage   *message,
                      uint8_t             *out);
size_t client_chat_message__pack_to_buffer
                     (const ClientChatMessage   *message,
                      ProtobufCBuffer     *buffer);
ClientChatMessage *
       client_chat_message__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   client_chat_message__free_unpacked
                     (ClientChatMessage *message,
                      ProtobufCAllocator *allocator);
/* ClientMessage methods */
void   client_message__init
                     (ClientMessage         *message);
size_t client_message__get_packed_size
                     (const ClientMessage   *message);
size_t client_message__pack
                     (const ClientMessage   *message,
                      uint8_t             *out);
size_t client_message__pack_to_buffer
                     (const ClientMessage   *message,
                      ProtobufCBuffer     *buffer);
ClientMessage *
       client_message__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   client_message__free_unpacked
                     (ClientMessage *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*Client_Closure)
                 (const Client *message,
                  void *closure_data);
typedef void (*ClientChatMessage_Closure)
                 (const ClientChatMessage *message,
                  void *closure_data);
typedef void (*ClientMessage_Closure)
                 (const ClientMessage *message,
                  void *closure_data);

/* --- services --- */


/* --- descriptors --- */

extern const ProtobufCEnumDescriptor    client_role__descriptor;
extern const ProtobufCEnumDescriptor    client_message_type__descriptor;
extern const ProtobufCMessageDescriptor client__descriptor;
extern const ProtobufCMessageDescriptor client_chat_message__descriptor;
extern const ProtobufCMessageDescriptor client_message__descriptor;

PROTOBUF_C__END_DECLS


#endif  /* PROTOBUF_C_Client_2eproto__INCLUDED */
