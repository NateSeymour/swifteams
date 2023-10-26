/*
 * Generated by the protocol buffer compiler.  DO NOT EDIT! 
 */
/*
 * Generated from: User.proto 
 */

#ifndef PROTOBUF_C_User_2eproto__INCLUDED
#define PROTOBUF_C_User_2eproto__INCLUDED

#include <protobuf-c/protobuf-c.h>

PROTOBUF_C__BEGIN_DECLS
#if PROTOBUF_C_VERSION_NUMBER < 1003000
#error This file was generated by a newer version of protoc-c which is incompatible with your libprotobuf-c headers. Please update your headers.
#elif 1004001 < PROTOBUF_C_MIN_COMPILER_VERSION
#error This file was generated by an older version of protoc-c which is incompatible with your libprotobuf-c headers. Please regenerate this file with a newer version of protoc-c.
#endif
typedef struct User User;

/*
 * --- enums --- 
 */

typedef enum _UserSubscriptionType {
	USER_SUBSCRIPTION_TYPE__USER_SUBSCRIPTION_UNSPECIFIED = 0,
	USER_SUBSCRIPTION_TYPE__USER_SUBSCRIPTION_FREE = 1,
	USER_SUBSCRIPTION_TYPE__USER_SUBSCRIPTION_PREMIUM = 2
	    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(USER_SUBSCRIPTION_TYPE)
} UserSubscriptionType;

/*
 * --- messages --- 
 */

struct User {
	ProtobufCMessage base;
	UserSubscriptionType subscriptiontype;
	char *id;
	char *preferrednickname;
	char *email;
	char *username;
	char *firstname;
	char *lastname;
};
#define USER__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&user__descriptor) \
, USER_SUBSCRIPTION_TYPE__USER_SUBSCRIPTION_UNSPECIFIED, (char *)protobuf_c_empty_string, (char *)protobuf_c_empty_string, (char *)protobuf_c_empty_string, (char *)protobuf_c_empty_string, (char *)protobuf_c_empty_string, (char *)protobuf_c_empty_string }

/*
 * User methods 
 */
void user__init(User * message);
size_t user__get_packed_size(const User * message);
size_t user__pack(const User * message, uint8_t * out);
size_t user__pack_to_buffer(const User * message, ProtobufCBuffer * buffer);
User *user__unpack(ProtobufCAllocator * allocator, size_t len,
		   const uint8_t * data);
void user__free_unpacked(User * message, ProtobufCAllocator * allocator);
/*
 * --- per-message closures --- 
 */

typedef void (*User_Closure)(const User * message, void *closure_data);

/*
 * --- services --- 
 */

/*
 * --- descriptors --- 
 */

extern const ProtobufCEnumDescriptor user_subscription_type__descriptor;
extern const ProtobufCMessageDescriptor user__descriptor;

PROTOBUF_C__END_DECLS
#endif				/* PROTOBUF_C_User_2eproto__INCLUDED */
