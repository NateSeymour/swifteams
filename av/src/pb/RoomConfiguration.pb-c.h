/*
 * Generated by the protocol buffer compiler.  DO NOT EDIT! 
 */
/*
 * Generated from: RoomConfiguration.proto 
 */

#ifndef PROTOBUF_C_RoomConfiguration_2eproto__INCLUDED
#define PROTOBUF_C_RoomConfiguration_2eproto__INCLUDED

#include <protobuf-c/protobuf-c.h>

PROTOBUF_C__BEGIN_DECLS
#if PROTOBUF_C_VERSION_NUMBER < 1003000
#error This file was generated by a newer version of protoc-c which is incompatible with your libprotobuf-c headers. Please update your headers.
#elif 1004001 < PROTOBUF_C_MIN_COMPILER_VERSION
#error This file was generated by an older version of protoc-c which is incompatible with your libprotobuf-c headers. Please regenerate this file with a newer version of protoc-c.
#endif
typedef struct RoomConfiguration RoomConfiguration;

/*
 * --- enums --- 
 */

typedef enum _RoomType {
	ROOM_TYPE__ROOM_TYPE_UNSPECIFIED = 0,
	ROOM_TYPE__STANDARD = 1,
	ROOM_TYPE__FREE = 2 PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(ROOM_TYPE)
} RoomType;

/*
 * --- messages --- 
 */

struct RoomConfiguration {
	ProtobufCMessage base;
	RoomType type;
	char *id;
	char *name;
	uint64_t expiry;
	size_t n_plugins;
	char **plugins;
};
#define ROOM_CONFIGURATION__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&room_configuration__descriptor) \
, ROOM_TYPE__ROOM_TYPE_UNSPECIFIED, (char *)protobuf_c_empty_string, (char *)protobuf_c_empty_string, 0, 0,NULL }

/*
 * RoomConfiguration methods 
 */
void room_configuration__init(RoomConfiguration * message);
size_t room_configuration__get_packed_size(const RoomConfiguration * message);
size_t room_configuration__pack(const RoomConfiguration * message, uint8_t * out);
size_t room_configuration__pack_to_buffer(const RoomConfiguration * message, ProtobufCBuffer * buffer);
RoomConfiguration *room_configuration__unpack(ProtobufCAllocator * allocator, size_t len, const uint8_t * data);
void room_configuration__free_unpacked(RoomConfiguration * message, ProtobufCAllocator * allocator);
/*
 * --- per-message closures --- 
 */

typedef void (*RoomConfiguration_Closure)
 (const RoomConfiguration * message, void *closure_data);

/*
 * --- services --- 
 */

/*
 * --- descriptors --- 
 */

extern const ProtobufCEnumDescriptor room_type__descriptor;
extern const ProtobufCMessageDescriptor room_configuration__descriptor;

PROTOBUF_C__END_DECLS
#endif				/* PROTOBUF_C_RoomConfiguration_2eproto__INCLUDED 
				 */
