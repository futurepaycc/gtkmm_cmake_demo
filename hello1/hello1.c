#include <gtk/gtk.h>

int main(int argc, char** argv)
{
	gtk_init(&argc, &argv);

    GtkWidget* window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    g_signal_connect(window, "destroy", G_CALLBACK(gtk_main_quit), NULL);

    gtk_window_set_default_size(window,800,600);

    gtk_widget_show(window);
    gtk_main();

    return 0;
}