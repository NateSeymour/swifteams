/*
 * Generated by the protocol buffer compiler.  DO NOT EDIT! 
 */
/*
 * Generated from: Server.proto 
 */

#ifndef PROTOBUF_C_Server_2eproto__INCLUDED
#define PROTOBUF_C_Server_2eproto__INCLUDED

#include <protobuf-c/protobuf-c.h>

PROTOBUF_C__BEGIN_DECLS
#if PROTOBUF_C_VERSION_NUMBER < 1003000
#error This file was generated by a newer version of protoc-c which is incompatible with your libprotobuf-c headers. Please update your headers.
#elif 1004001 < PROTOBUF_C_MIN_COMPILER_VERSION
#error This file was generated by an older version of protoc-c which is incompatible with your libprotobuf-c headers. Please regenerate this file with a newer version of protoc-c.
#endif
#include "Client.pb-c.h"
typedef struct ServerMessage ServerMessage;

/*
 * --- enums --- 
 */

typedef enum _ServerMessageType {
	SERVER_MESSAGE_TYPE__SERVER_MESSAGE_UNSPECIFIED = 0,
	SERVER_MESSAGE_TYPE__RELAY = 1 PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(SERVER_MESSAGE_TYPE)
} ServerMessageType;

/*
 * --- messages --- 
 */

typedef enum {
	SERVER_MESSAGE__MESSAGE__NOT_SET = 0,
	SERVER_MESSAGE__MESSAGE_RELAY = 2 PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(SERVER_MESSAGE__MESSAGE__CASE)
} ServerMessage__MessageCase;

struct ServerMessage {
	ProtobufCMessage base;
	ServerMessageType type;
	ServerMessage__MessageCase message_case;
	union {
		ClientMessage *relay;
	};
};
#define SERVER_MESSAGE__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&server_message__descriptor) \
, SERVER_MESSAGE_TYPE__SERVER_MESSAGE_UNSPECIFIED, SERVER_MESSAGE__MESSAGE__NOT_SET, {0} }

/*
 * ServerMessage methods 
 */
void server_message__init(ServerMessage * message);
size_t server_message__get_packed_size(const ServerMessage * message);
size_t server_message__pack(const ServerMessage * message, uint8_t * out);
size_t server_message__pack_to_buffer(const ServerMessage * message, ProtobufCBuffer * buffer);
ServerMessage *server_message__unpack(ProtobufCAllocator * allocator, size_t len, const uint8_t * data);
void server_message__free_unpacked(ServerMessage * message, ProtobufCAllocator * allocator);
/*
 * --- per-message closures --- 
 */

typedef void (*ServerMessage_Closure)
 (const ServerMessage * message, void *closure_data);

/*
 * --- services --- 
 */

/*
 * --- descriptors --- 
 */

extern const ProtobufCEnumDescriptor server_message_type__descriptor;
extern const ProtobufCMessageDescriptor server_message__descriptor;

PROTOBUF_C__END_DECLS
#endif				/* PROTOBUF_C_Server_2eproto__INCLUDED */
