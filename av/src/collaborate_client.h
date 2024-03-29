#pragma once

#include <glib-object.h>
#include <gst/gst.h>
#include <libsoup/soup.h>

G_BEGIN_DECLS
#define COLLABORATE_TYPE_CLIENT collaborate_client_get_type()
G_DECLARE_FINAL_TYPE(CollaborateClient, collaborate_client, COLLABORATE, CLIENT, GObject)

CollaborateClient *collaborate_client_new(SoupWebsocketConnection *conn);
SoupWebsocketConnection *collaborate_client_get_connection(CollaborateClient *self);

G_END_DECLS
