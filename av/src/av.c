#include <glib.h>
#include <libsoup/soup-server.h>
#include <libsoup/soup.h>
#include <gst/gst.h>
#include "plugins/gstspectaclesink.h"
#include "collaborate_room_manager.h"
#include "routes/info.h"
#include "routes/stream.h"

int main(int argc, char *argv[])
{
	// Initialization
	g_log_set_debug_enabled(TRUE);

	CollaborateRoomManager *manager = collaborate_room_manager_new();

	GError *error = NULL;
	gboolean res = FALSE;

	// Set up the main loop
	GMainLoop *main_loop = g_main_loop_new(NULL, FALSE);

	// Init GStreamer
	gst_init(&argc, &argv);

	GST_PLUGIN_STATIC_REGISTER(spectaclesink);

	// Create and setup server
	SoupServer *server = soup_server_new(NULL);
	if (server == NULL) {
		g_error("Failed to create server!\n");
		return 1;
	}

	soup_server_add_handler(server, "/info", server_GET_info, NULL, NULL);
	soup_server_add_handler(server, "/stream", server_GET_stream, manager, NULL);

	res = soup_server_listen_local(server, 5005, NULL, &error);
	if (!res) {
		g_error("%s\n", error->message);
		return 1;
	}
	// Run application
	g_main_loop_run(main_loop);

	g_object_unref(server);
	g_object_unref(main_loop);
	return 0;
}
