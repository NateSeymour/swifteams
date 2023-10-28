/*
 * Generated by the protocol buffer compiler.  DO NOT EDIT! 
 */
/*
 * Generated from: CommonTypes.proto 
 */

/*
 * Do not generate deprecated warnings for self 
 */
#ifndef PROTOBUF_C__NO_DEPRECATED
#define PROTOBUF_C__NO_DEPRECATED
#endif

#include "CommonTypes.pb-c.h"
void coordinates__init(Coordinates *message)
{
	static const Coordinates init_value = COORDINATES__INIT;
	*message = init_value;
}

size_t coordinates__get_packed_size(const Coordinates *message)
{
	assert(message->base.descriptor == &coordinates__descriptor);
	return protobuf_c_message_get_packed_size((const ProtobufCMessage *)(message));
}

size_t coordinates__pack(const Coordinates *message, uint8_t *out)
{
	assert(message->base.descriptor == &coordinates__descriptor);
	return protobuf_c_message_pack((const ProtobufCMessage *)message, out);
}

size_t coordinates__pack_to_buffer(const Coordinates *message, ProtobufCBuffer *buffer)
{
	assert(message->base.descriptor == &coordinates__descriptor);
	return protobuf_c_message_pack_to_buffer((const ProtobufCMessage *)
						 message, buffer);
}

Coordinates *coordinates__unpack(ProtobufCAllocator *allocator, size_t len, const uint8_t *data)
{
	return (Coordinates *)
	    protobuf_c_message_unpack(&coordinates__descriptor, allocator, len, data);
}

void coordinates__free_unpacked(Coordinates *message, ProtobufCAllocator *allocator)
{
	if (!message)
		return;
	assert(message->base.descriptor == &coordinates__descriptor);
	protobuf_c_message_free_unpacked((ProtobufCMessage *) message, allocator);
}

static const ProtobufCFieldDescriptor coordinates__field_descriptors[2] = {
	{
	 "x",
	 1,
	 PROTOBUF_C_LABEL_NONE,
	 PROTOBUF_C_TYPE_DOUBLE,
	 0,			/* quantifier_offset */
	 offsetof(Coordinates, x),
	 NULL,
	 NULL,
	 0,			/* flags */
	 0, NULL, NULL		/* reserved1,reserved2, etc */
	 },
	{
	 "y",
	 2,
	 PROTOBUF_C_LABEL_NONE,
	 PROTOBUF_C_TYPE_DOUBLE,
	 0,			/* quantifier_offset */
	 offsetof(Coordinates, y),
	 NULL,
	 NULL,
	 0,			/* flags */
	 0, NULL, NULL		/* reserved1,reserved2, etc */
	 },
};

static const unsigned coordinates__field_indices_by_name[] = {
	0,			/* field[0] = x */
	1,			/* field[1] = y */
};

static const ProtobufCIntRange coordinates__number_ranges[1 + 1] = {
	{1, 0},
	{0, 2}
};

const ProtobufCMessageDescriptor coordinates__descriptor = {
	PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
	"Coordinates",
	"Coordinates",
	"Coordinates",
	"",
	sizeof(Coordinates),
	2,
	coordinates__field_descriptors,
	coordinates__field_indices_by_name,
	1, coordinates__number_ranges,
	(ProtobufCMessageInit) coordinates__init,
	NULL, NULL, NULL	/* reserved[123] */
};

static const ProtobufCEnumValue pointer_type__enum_values_by_number[4] = {
	{"POINTER_TYPE_UNSPECIFIED", "POINTER_TYPE__POINTER_TYPE_UNSPECIFIED",
	 0},
	{"POINTER_TYPE_POINTER", "POINTER_TYPE__POINTER_TYPE_POINTER", 1},
	{"POINTER_TYPE_CURSOR", "POINTER_TYPE__POINTER_TYPE_CURSOR", 2},
	{"POINTER_TYPE_TOUCH", "POINTER_TYPE__POINTER_TYPE_TOUCH", 3},
};

static const ProtobufCIntRange pointer_type__value_ranges[] = {
	{0, 0}, {0, 4}
};

static const ProtobufCEnumValueIndex pointer_type__enum_values_by_name[4] = {
	{"POINTER_TYPE_CURSOR", 2},
	{"POINTER_TYPE_POINTER", 1},
	{"POINTER_TYPE_TOUCH", 3},
	{"POINTER_TYPE_UNSPECIFIED", 0},
};

const ProtobufCEnumDescriptor pointer_type__descriptor = {
	PROTOBUF_C__ENUM_DESCRIPTOR_MAGIC,
	"PointerType",
	"PointerType",
	"PointerType",
	"",
	4,
	pointer_type__enum_values_by_number,
	4,
	pointer_type__enum_values_by_name,
	1,
	pointer_type__value_ranges,
	NULL, NULL, NULL, NULL	/* reserved[1234] */
};
