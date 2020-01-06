/*
 * Copyright (c) Tony Bybell 2010
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 */

#ifndef WAVE_TREESEARCH_H
#define WAVE_TREESEARCH_H

/* Callback for insert/replace/append buttions.
   This call-back is called for every signal selected.  */
enum cb_action { ACTION_INSERT, ACTION_REPLACE, ACTION_APPEND, ACTION_PREPEND };

void treebox(char *title, GtkSignalFunc func, GtkWidget *old_window);
GtkWidget* treeboxframe(char *title, GtkSignalFunc func);
void mkmenu_treesearch_cleanup(GtkWidget *widget, gpointer data);
void dump_open_tree_nodes(FILE *wave, xl_Tree *t);
int force_open_tree_node(char *name, int keep_path_nodes_open, struct tree **t_pnt);
void select_tree_node(char *name);
void dnd_setup(GtkWidget *src, GtkWidget *widget, int enable_receive); /* dnd from gtk2 tree to signalwindow */
void treeview_select_all_callback(void); /* gtk2 */
void treeview_unselect_all_callback(void); /* gtk2 */
struct tree *fetchlow(struct tree *t);
struct tree *fetchhigh(struct tree *t);
void fetchvex(struct tree *t, char direction);
int treebox_is_active(void);
void action_callback(enum cb_action action);

#if WAVE_USE_GTK2
void DND_helper_quartz(char *data);
#endif

#endif

