/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: CommonTypes.proto */

#ifndef PROTOBUF_C_CommonTypes_2eproto__INCLUDED
#define PROTOBUF_C_CommonTypes_2eproto__INCLUDED

#include <protobuf-c/protobuf-c.h>

PROTOBUF_C__BEGIN_DECLS

#if PROTOBUF_C_VERSION_NUMBER < 1003000
# error This file was generated by a newer version of protoc-c which is incompatible with your libprotobuf-c headers. Please update your headers.
#elif 1004001 < PROTOBUF_C_MIN_COMPILER_VERSION
# error This file was generated by an older version of protoc-c which is incompatible with your libprotobuf-c headers. Please regenerate this file with a newer version of protoc-c.
#endif


typedef struct Coordinates Coordinates;


/* --- enums --- */

typedef enum _PointerType {
  POINTER_TYPE__POINTER_TYPE_UNSPECIFIED = 0,
  POINTER_TYPE__POINTER_TYPE_POINTER = 1,
  POINTER_TYPE__POINTER_TYPE_CURSOR = 2,
  POINTER_TYPE__POINTER_TYPE_TOUCH = 3
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(POINTER_TYPE)
} PointerType;

/* --- messages --- */

struct  Coordinates
{
  ProtobufCMessage base;
  double x;
  double y;
};
#define COORDINATES__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&coordinates__descriptor) \
, 0, 0 }


/* Coordinates methods */
void   coordinates__init
                     (Coordinates         *message);
size_t coordinates__get_packed_size
                     (const Coordinates   *message);
size_t coordinates__pack
                     (const Coordinates   *message,
                      uint8_t             *out);
size_t coordinates__pack_to_buffer
                     (const Coordinates   *message,
                      ProtobufCBuffer     *buffer);
Coordinates *
       coordinates__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   coordinates__free_unpacked
                     (Coordinates *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*Coordinates_Closure)
                 (const Coordinates *message,
                  void *closure_data);

/* --- services --- */


/* --- descriptors --- */

extern const ProtobufCEnumDescriptor    pointer_type__descriptor;
extern const ProtobufCMessageDescriptor coordinates__descriptor;

PROTOBUF_C__END_DECLS


#endif  /* PROTOBUF_C_CommonTypes_2eproto__INCLUDED */