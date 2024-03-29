#pragma once

#include <glib-object.h>
#include <gst/gst.h>
#include "collaborate_client.h"

G_BEGIN_DECLS
#define COLLABORATE_TYPE_ROOM collaborate_room_get_type()
G_DECLARE_FINAL_TYPE(CollaborateRoom, collaborate_room, COLLABORATE, ROOM, GObject)

CollaborateRoom *collaborate_room_new(void);
void collaborate_room_steal_client(CollaborateRoom *self, CollaborateClient *client);

G_END_DECLS
