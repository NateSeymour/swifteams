/*
 * Generated by the protocol buffer compiler.  DO NOT EDIT! 
 */
/*
 * Generated from: Pointer.proto 
 */

/*
 * Do not generate deprecated warnings for self 
 */
#ifndef PROTOBUF_C__NO_DEPRECATED
#define PROTOBUF_C__NO_DEPRECATED
#endif

#include "Pointer.pb-c.h"
void pointer__init(Pointer *message)
{
	static const Pointer init_value = POINTER__INIT;
	*message = init_value;
}

size_t pointer__get_packed_size(const Pointer *message)
{
	assert(message->base.descriptor == &pointer__descriptor);
	return protobuf_c_message_get_packed_size((const ProtobufCMessage *)(message));
}

size_t pointer__pack(const Pointer *message, uint8_t *out)
{
	assert(message->base.descriptor == &pointer__descriptor);
	return protobuf_c_message_pack((const ProtobufCMessage *)message, out);
}

size_t pointer__pack_to_buffer(const Pointer *message, ProtobufCBuffer *buffer)
{
	assert(message->base.descriptor == &pointer__descriptor);
	return protobuf_c_message_pack_to_buffer((const ProtobufCMessage *)
						 message, buffer);
}

Pointer *pointer__unpack(ProtobufCAllocator *allocator, size_t len, const uint8_t *data)
{
	return (Pointer *)
	    protobuf_c_message_unpack(&pointer__descriptor, allocator, len, data);
}

void pointer__free_unpacked(Pointer *message, ProtobufCAllocator *allocator)
{
	if (!message)
		return;
	assert(message->base.descriptor == &pointer__descriptor);
	protobuf_c_message_free_unpacked((ProtobufCMessage *) message, allocator);
}

void pointer_collection__init(PointerCollection *message)
{
	static const PointerCollection init_value = POINTER_COLLECTION__INIT;
	*message = init_value;
}

size_t pointer_collection__get_packed_size(const PointerCollection *message)
{
	assert(message->base.descriptor == &pointer_collection__descriptor);
	return protobuf_c_message_get_packed_size((const ProtobufCMessage *)(message));
}

size_t pointer_collection__pack(const PointerCollection *message, uint8_t *out)
{
	assert(message->base.descriptor == &pointer_collection__descriptor);
	return protobuf_c_message_pack((const ProtobufCMessage *)message, out);
}

size_t pointer_collection__pack_to_buffer(const PointerCollection *message, ProtobufCBuffer *buffer)
{
	assert(message->base.descriptor == &pointer_collection__descriptor);
	return protobuf_c_message_pack_to_buffer((const ProtobufCMessage *)
						 message, buffer);
}

PointerCollection *pointer_collection__unpack(ProtobufCAllocator *allocator, size_t len, const uint8_t *data)
{
	return (PointerCollection *)
	    protobuf_c_message_unpack(&pointer_collection__descriptor, allocator, len, data);
}

void pointer_collection__free_unpacked(PointerCollection *message, ProtobufCAllocator *allocator)
{
	if (!message)
		return;
	assert(message->base.descriptor == &pointer_collection__descriptor);
	protobuf_c_message_free_unpacked((ProtobufCMessage *) message, allocator);
}

static const ProtobufCFieldDescriptor pointer__field_descriptors[2] = {
	{
	 "pointerType",
	 1,
	 PROTOBUF_C_LABEL_NONE,
	 PROTOBUF_C_TYPE_ENUM,
	 0,			/* quantifier_offset */
	 offsetof(Pointer, pointertype),
	 &pointer_type__descriptor,
	 NULL,
	 0,			/* flags */
	 0, NULL, NULL		/* reserved1,reserved2, etc */
	 },
	{
	 "coordinates",
	 2,
	 PROTOBUF_C_LABEL_NONE,
	 PROTOBUF_C_TYPE_MESSAGE,
	 0,			/* quantifier_offset */
	 offsetof(Pointer, coordinates),
	 &coordinates__descriptor,
	 NULL,
	 0,			/* flags */
	 0, NULL, NULL		/* reserved1,reserved2, etc */
	 },
};

static const unsigned pointer__field_indices_by_name[] = {
	1,			/* field[1] = coordinates */
	0,			/* field[0] = pointerType */
};

static const ProtobufCIntRange pointer__number_ranges[1 + 1] = {
	{1, 0},
	{0, 2}
};

const ProtobufCMessageDescriptor pointer__descriptor = {
	PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
	"Pointer",
	"Pointer",
	"Pointer",
	"",
	sizeof(Pointer),
	2,
	pointer__field_descriptors,
	pointer__field_indices_by_name,
	1, pointer__number_ranges,
	(ProtobufCMessageInit) pointer__init,
	NULL, NULL, NULL	/* reserved[123] */
};

static const ProtobufCFieldDescriptor pointer_collection__field_descriptors[1]
    = {
	{
	 "pointers",
	 1,
	 PROTOBUF_C_LABEL_REPEATED,
	 PROTOBUF_C_TYPE_MESSAGE,
	 offsetof(PointerCollection, n_pointers),
	 offsetof(PointerCollection, pointers),
	 &pointer__descriptor,
	 NULL,
	 0,			/* flags */
	 0, NULL, NULL		/* reserved1,reserved2, etc */
	 },
};

static const unsigned pointer_collection__field_indices_by_name[] = {
	0,			/* field[0] = pointers */
};

static const ProtobufCIntRange pointer_collection__number_ranges[1 + 1] = {
	{1, 0},
	{0, 1}
};

const ProtobufCMessageDescriptor pointer_collection__descriptor = {
	PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
	"PointerCollection",
	"PointerCollection",
	"PointerCollection",
	"",
	sizeof(PointerCollection),
	1,
	pointer_collection__field_descriptors,
	pointer_collection__field_indices_by_name,
	1, pointer_collection__number_ranges,
	(ProtobufCMessageInit) pointer_collection__init,
	NULL, NULL, NULL	/* reserved[123] */
};
