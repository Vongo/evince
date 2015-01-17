/*
 * Generated by gdbus-codegen 2.41.2. DO NOT EDIT.
 *
 * The license of this code is the same as for the source it was derived from.
 */

#ifndef __EV_GDBUS_GENERATED_H__
#define __EV_GDBUS_GENERATED_H__

#include <gio/gio.h>

G_BEGIN_DECLS


/* ------------------------------------------------------------------------ */
/* Declarations for org.gnome.evince.Application */

#define EV_TYPE_EVINCE_APPLICATION (ev_evince_application_get_type ())
#define EV_EVINCE_APPLICATION(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), EV_TYPE_EVINCE_APPLICATION, EvEvinceApplication))
#define EV_IS_EVINCE_APPLICATION(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), EV_TYPE_EVINCE_APPLICATION))
#define EV_EVINCE_APPLICATION_GET_IFACE(o) (G_TYPE_INSTANCE_GET_INTERFACE ((o), EV_TYPE_EVINCE_APPLICATION, EvEvinceApplicationIface))

struct _EvEvinceApplication;
typedef struct _EvEvinceApplication EvEvinceApplication;
typedef struct _EvEvinceApplicationIface EvEvinceApplicationIface;

struct _EvEvinceApplicationIface
{
  GTypeInterface parent_iface;

  gboolean (*handle_get_window_list) (
    EvEvinceApplication *object,
    GDBusMethodInvocation *invocation);

  gboolean (*handle_reload) (
    EvEvinceApplication *object,
    GDBusMethodInvocation *invocation,
    GVariant *arg_args,
    guint arg_timestamp);

};

GType ev_evince_application_get_type (void) G_GNUC_CONST;

GDBusInterfaceInfo *ev_evince_application_interface_info (void);
guint ev_evince_application_override_properties (GObjectClass *klass, guint property_id_begin);


/* D-Bus method call completion functions: */
void ev_evince_application_complete_reload (
    EvEvinceApplication *object,
    GDBusMethodInvocation *invocation);

void ev_evince_application_complete_get_window_list (
    EvEvinceApplication *object,
    GDBusMethodInvocation *invocation,
    const gchar *const *window_list);



/* D-Bus method calls: */
void ev_evince_application_call_reload (
    EvEvinceApplication *proxy,
    GVariant *arg_args,
    guint arg_timestamp,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean ev_evince_application_call_reload_finish (
    EvEvinceApplication *proxy,
    GAsyncResult *res,
    GError **error);

gboolean ev_evince_application_call_reload_sync (
    EvEvinceApplication *proxy,
    GVariant *arg_args,
    guint arg_timestamp,
    GCancellable *cancellable,
    GError **error);

void ev_evince_application_call_get_window_list (
    EvEvinceApplication *proxy,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean ev_evince_application_call_get_window_list_finish (
    EvEvinceApplication *proxy,
    gchar ***out_window_list,
    GAsyncResult *res,
    GError **error);

gboolean ev_evince_application_call_get_window_list_sync (
    EvEvinceApplication *proxy,
    gchar ***out_window_list,
    GCancellable *cancellable,
    GError **error);



/* ---- */

#define EV_TYPE_EVINCE_APPLICATION_PROXY (ev_evince_application_proxy_get_type ())
#define EV_EVINCE_APPLICATION_PROXY(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), EV_TYPE_EVINCE_APPLICATION_PROXY, EvEvinceApplicationProxy))
#define EV_EVINCE_APPLICATION_PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), EV_TYPE_EVINCE_APPLICATION_PROXY, EvEvinceApplicationProxyClass))
#define EV_EVINCE_APPLICATION_PROXY_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), EV_TYPE_EVINCE_APPLICATION_PROXY, EvEvinceApplicationProxyClass))
#define EV_IS_EVINCE_APPLICATION_PROXY(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), EV_TYPE_EVINCE_APPLICATION_PROXY))
#define EV_IS_EVINCE_APPLICATION_PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), EV_TYPE_EVINCE_APPLICATION_PROXY))

typedef struct _EvEvinceApplicationProxy EvEvinceApplicationProxy;
typedef struct _EvEvinceApplicationProxyClass EvEvinceApplicationProxyClass;
typedef struct _EvEvinceApplicationProxyPrivate EvEvinceApplicationProxyPrivate;

struct _EvEvinceApplicationProxy
{
  /*< private >*/
  GDBusProxy parent_instance;
  EvEvinceApplicationProxyPrivate *priv;
};

struct _EvEvinceApplicationProxyClass
{
  GDBusProxyClass parent_class;
};

GType ev_evince_application_proxy_get_type (void) G_GNUC_CONST;

void ev_evince_application_proxy_new (
    GDBusConnection     *connection,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GAsyncReadyCallback  callback,
    gpointer             user_data);
EvEvinceApplication *ev_evince_application_proxy_new_finish (
    GAsyncResult        *res,
    GError             **error);
EvEvinceApplication *ev_evince_application_proxy_new_sync (
    GDBusConnection     *connection,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GError             **error);

void ev_evince_application_proxy_new_for_bus (
    GBusType             bus_type,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GAsyncReadyCallback  callback,
    gpointer             user_data);
EvEvinceApplication *ev_evince_application_proxy_new_for_bus_finish (
    GAsyncResult        *res,
    GError             **error);
EvEvinceApplication *ev_evince_application_proxy_new_for_bus_sync (
    GBusType             bus_type,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GError             **error);


/* ---- */

#define EV_TYPE_EVINCE_APPLICATION_SKELETON (ev_evince_application_skeleton_get_type ())
#define EV_EVINCE_APPLICATION_SKELETON(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), EV_TYPE_EVINCE_APPLICATION_SKELETON, EvEvinceApplicationSkeleton))
#define EV_EVINCE_APPLICATION_SKELETON_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), EV_TYPE_EVINCE_APPLICATION_SKELETON, EvEvinceApplicationSkeletonClass))
#define EV_EVINCE_APPLICATION_SKELETON_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), EV_TYPE_EVINCE_APPLICATION_SKELETON, EvEvinceApplicationSkeletonClass))
#define EV_IS_EVINCE_APPLICATION_SKELETON(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), EV_TYPE_EVINCE_APPLICATION_SKELETON))
#define EV_IS_EVINCE_APPLICATION_SKELETON_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), EV_TYPE_EVINCE_APPLICATION_SKELETON))

typedef struct _EvEvinceApplicationSkeleton EvEvinceApplicationSkeleton;
typedef struct _EvEvinceApplicationSkeletonClass EvEvinceApplicationSkeletonClass;
typedef struct _EvEvinceApplicationSkeletonPrivate EvEvinceApplicationSkeletonPrivate;

struct _EvEvinceApplicationSkeleton
{
  /*< private >*/
  GDBusInterfaceSkeleton parent_instance;
  EvEvinceApplicationSkeletonPrivate *priv;
};

struct _EvEvinceApplicationSkeletonClass
{
  GDBusInterfaceSkeletonClass parent_class;
};

GType ev_evince_application_skeleton_get_type (void) G_GNUC_CONST;

EvEvinceApplication *ev_evince_application_skeleton_new (void);


/* ------------------------------------------------------------------------ */
/* Declarations for org.gnome.evince.Window */

#define EV_TYPE_EVINCE_WINDOW (ev_evince_window_get_type ())
#define EV_EVINCE_WINDOW(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), EV_TYPE_EVINCE_WINDOW, EvEvinceWindow))
#define EV_IS_EVINCE_WINDOW(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), EV_TYPE_EVINCE_WINDOW))
#define EV_EVINCE_WINDOW_GET_IFACE(o) (G_TYPE_INSTANCE_GET_INTERFACE ((o), EV_TYPE_EVINCE_WINDOW, EvEvinceWindowIface))

struct _EvEvinceWindow;
typedef struct _EvEvinceWindow EvEvinceWindow;
typedef struct _EvEvinceWindowIface EvEvinceWindowIface;

struct _EvEvinceWindowIface
{
  GTypeInterface parent_iface;


  gboolean (*handle_sync_view) (
    EvEvinceWindow *object,
    GDBusMethodInvocation *invocation,
    const gchar *arg_source_file,
    GVariant *arg_source_point,
    guint arg_timestamp);

  void (*closed) (
    EvEvinceWindow *object);

  void (*document_loaded) (
    EvEvinceWindow *object,
    const gchar *arg_uri);

  void (*sync_source) (
    EvEvinceWindow *object,
    const gchar *arg_source_file,
    GVariant *arg_source_point,
    guint arg_timestamp);

};

GType ev_evince_window_get_type (void) G_GNUC_CONST;

GDBusInterfaceInfo *ev_evince_window_interface_info (void);
guint ev_evince_window_override_properties (GObjectClass *klass, guint property_id_begin);


/* D-Bus method call completion functions: */
void ev_evince_window_complete_sync_view (
    EvEvinceWindow *object,
    GDBusMethodInvocation *invocation);



/* D-Bus signal emissions functions: */
void ev_evince_window_emit_sync_source (
    EvEvinceWindow *object,
    const gchar *arg_source_file,
    GVariant *arg_source_point,
    guint arg_timestamp);

void ev_evince_window_emit_closed (
    EvEvinceWindow *object);

void ev_evince_window_emit_document_loaded (
    EvEvinceWindow *object,
    const gchar *arg_uri);



/* D-Bus method calls: */
void ev_evince_window_call_sync_view (
    EvEvinceWindow *proxy,
    const gchar *arg_source_file,
    GVariant *arg_source_point,
    guint arg_timestamp,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean ev_evince_window_call_sync_view_finish (
    EvEvinceWindow *proxy,
    GAsyncResult *res,
    GError **error);

gboolean ev_evince_window_call_sync_view_sync (
    EvEvinceWindow *proxy,
    const gchar *arg_source_file,
    GVariant *arg_source_point,
    guint arg_timestamp,
    GCancellable *cancellable,
    GError **error);



/* ---- */

#define EV_TYPE_EVINCE_WINDOW_PROXY (ev_evince_window_proxy_get_type ())
#define EV_EVINCE_WINDOW_PROXY(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), EV_TYPE_EVINCE_WINDOW_PROXY, EvEvinceWindowProxy))
#define EV_EVINCE_WINDOW_PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), EV_TYPE_EVINCE_WINDOW_PROXY, EvEvinceWindowProxyClass))
#define EV_EVINCE_WINDOW_PROXY_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), EV_TYPE_EVINCE_WINDOW_PROXY, EvEvinceWindowProxyClass))
#define EV_IS_EVINCE_WINDOW_PROXY(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), EV_TYPE_EVINCE_WINDOW_PROXY))
#define EV_IS_EVINCE_WINDOW_PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), EV_TYPE_EVINCE_WINDOW_PROXY))

typedef struct _EvEvinceWindowProxy EvEvinceWindowProxy;
typedef struct _EvEvinceWindowProxyClass EvEvinceWindowProxyClass;
typedef struct _EvEvinceWindowProxyPrivate EvEvinceWindowProxyPrivate;

struct _EvEvinceWindowProxy
{
  /*< private >*/
  GDBusProxy parent_instance;
  EvEvinceWindowProxyPrivate *priv;
};

struct _EvEvinceWindowProxyClass
{
  GDBusProxyClass parent_class;
};

GType ev_evince_window_proxy_get_type (void) G_GNUC_CONST;

void ev_evince_window_proxy_new (
    GDBusConnection     *connection,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GAsyncReadyCallback  callback,
    gpointer             user_data);
EvEvinceWindow *ev_evince_window_proxy_new_finish (
    GAsyncResult        *res,
    GError             **error);
EvEvinceWindow *ev_evince_window_proxy_new_sync (
    GDBusConnection     *connection,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GError             **error);

void ev_evince_window_proxy_new_for_bus (
    GBusType             bus_type,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GAsyncReadyCallback  callback,
    gpointer             user_data);
EvEvinceWindow *ev_evince_window_proxy_new_for_bus_finish (
    GAsyncResult        *res,
    GError             **error);
EvEvinceWindow *ev_evince_window_proxy_new_for_bus_sync (
    GBusType             bus_type,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GError             **error);


/* ---- */

#define EV_TYPE_EVINCE_WINDOW_SKELETON (ev_evince_window_skeleton_get_type ())
#define EV_EVINCE_WINDOW_SKELETON(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), EV_TYPE_EVINCE_WINDOW_SKELETON, EvEvinceWindowSkeleton))
#define EV_EVINCE_WINDOW_SKELETON_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), EV_TYPE_EVINCE_WINDOW_SKELETON, EvEvinceWindowSkeletonClass))
#define EV_EVINCE_WINDOW_SKELETON_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), EV_TYPE_EVINCE_WINDOW_SKELETON, EvEvinceWindowSkeletonClass))
#define EV_IS_EVINCE_WINDOW_SKELETON(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), EV_TYPE_EVINCE_WINDOW_SKELETON))
#define EV_IS_EVINCE_WINDOW_SKELETON_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), EV_TYPE_EVINCE_WINDOW_SKELETON))

typedef struct _EvEvinceWindowSkeleton EvEvinceWindowSkeleton;
typedef struct _EvEvinceWindowSkeletonClass EvEvinceWindowSkeletonClass;
typedef struct _EvEvinceWindowSkeletonPrivate EvEvinceWindowSkeletonPrivate;

struct _EvEvinceWindowSkeleton
{
  /*< private >*/
  GDBusInterfaceSkeleton parent_instance;
  EvEvinceWindowSkeletonPrivate *priv;
};

struct _EvEvinceWindowSkeletonClass
{
  GDBusInterfaceSkeletonClass parent_class;
};

GType ev_evince_window_skeleton_get_type (void) G_GNUC_CONST;

EvEvinceWindow *ev_evince_window_skeleton_new (void);


/* ---- */

#define EV_TYPE_OBJECT (ev_object_get_type ())
#define EV_OBJECT(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), EV_TYPE_OBJECT, EvObject))
#define EV_IS_OBJECT(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), EV_TYPE_OBJECT))
#define EV_OBJECT_GET_IFACE(o) (G_TYPE_INSTANCE_GET_INTERFACE ((o), EV_TYPE_OBJECT, EvObject))

struct _EvObject;
typedef struct _EvObject EvObject;
typedef struct _EvObjectIface EvObjectIface;

struct _EvObjectIface
{
  GTypeInterface parent_iface;
};

GType ev_object_get_type (void) G_GNUC_CONST;

EvEvinceApplication *ev_object_get_evince_application (EvObject *object);
EvEvinceWindow *ev_object_get_evince_window (EvObject *object);
EvEvinceApplication *ev_object_peek_evince_application (EvObject *object);
EvEvinceWindow *ev_object_peek_evince_window (EvObject *object);

#define EV_TYPE_OBJECT_PROXY (ev_object_proxy_get_type ())
#define EV_OBJECT_PROXY(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), EV_TYPE_OBJECT_PROXY, EvObjectProxy))
#define EV_OBJECT_PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), EV_TYPE_OBJECT_PROXY, EvObjectProxyClass))
#define EV_OBJECT_PROXY_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), EV_TYPE_OBJECT_PROXY, EvObjectProxyClass))
#define EV_IS_OBJECT_PROXY(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), EV_TYPE_OBJECT_PROXY))
#define EV_IS_OBJECT_PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), EV_TYPE_OBJECT_PROXY))

typedef struct _EvObjectProxy EvObjectProxy;
typedef struct _EvObjectProxyClass EvObjectProxyClass;
typedef struct _EvObjectProxyPrivate EvObjectProxyPrivate;

struct _EvObjectProxy
{
  /*< private >*/
  GDBusObjectProxy parent_instance;
  EvObjectProxyPrivate *priv;
};

struct _EvObjectProxyClass
{
  GDBusObjectProxyClass parent_class;
};

GType ev_object_proxy_get_type (void) G_GNUC_CONST;
EvObjectProxy *ev_object_proxy_new (GDBusConnection *connection, const gchar *object_path);

#define EV_TYPE_OBJECT_SKELETON (ev_object_skeleton_get_type ())
#define EV_OBJECT_SKELETON(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), EV_TYPE_OBJECT_SKELETON, EvObjectSkeleton))
#define EV_OBJECT_SKELETON_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), EV_TYPE_OBJECT_SKELETON, EvObjectSkeletonClass))
#define EV_OBJECT_SKELETON_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), EV_TYPE_OBJECT_SKELETON, EvObjectSkeletonClass))
#define EV_IS_OBJECT_SKELETON(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), EV_TYPE_OBJECT_SKELETON))
#define EV_IS_OBJECT_SKELETON_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), EV_TYPE_OBJECT_SKELETON))

typedef struct _EvObjectSkeleton EvObjectSkeleton;
typedef struct _EvObjectSkeletonClass EvObjectSkeletonClass;
typedef struct _EvObjectSkeletonPrivate EvObjectSkeletonPrivate;

struct _EvObjectSkeleton
{
  /*< private >*/
  GDBusObjectSkeleton parent_instance;
  EvObjectSkeletonPrivate *priv;
};

struct _EvObjectSkeletonClass
{
  GDBusObjectSkeletonClass parent_class;
};

GType ev_object_skeleton_get_type (void) G_GNUC_CONST;
EvObjectSkeleton *ev_object_skeleton_new (const gchar *object_path);
void ev_object_skeleton_set_evince_application (EvObjectSkeleton *object, EvEvinceApplication *interface_);
void ev_object_skeleton_set_evince_window (EvObjectSkeleton *object, EvEvinceWindow *interface_);

/* ---- */

#define EV_TYPE_OBJECT_MANAGER_CLIENT (ev_object_manager_client_get_type ())
#define EV_OBJECT_MANAGER_CLIENT(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), EV_TYPE_OBJECT_MANAGER_CLIENT, EvObjectManagerClient))
#define EV_OBJECT_MANAGER_CLIENT_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), EV_TYPE_OBJECT_MANAGER_CLIENT, EvObjectManagerClientClass))
#define EV_OBJECT_MANAGER_CLIENT_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), EV_TYPE_OBJECT_MANAGER_CLIENT, EvObjectManagerClientClass))
#define EV_IS_OBJECT_MANAGER_CLIENT(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), EV_TYPE_OBJECT_MANAGER_CLIENT))
#define EV_IS_OBJECT_MANAGER_CLIENT_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), EV_TYPE_OBJECT_MANAGER_CLIENT))

typedef struct _EvObjectManagerClient EvObjectManagerClient;
typedef struct _EvObjectManagerClientClass EvObjectManagerClientClass;
typedef struct _EvObjectManagerClientPrivate EvObjectManagerClientPrivate;

struct _EvObjectManagerClient
{
  /*< private >*/
  GDBusObjectManagerClient parent_instance;
  EvObjectManagerClientPrivate *priv;
};

struct _EvObjectManagerClientClass
{
  GDBusObjectManagerClientClass parent_class;
};

GType ev_object_manager_client_get_type (void) G_GNUC_CONST;

GType ev_object_manager_client_get_proxy_type (GDBusObjectManagerClient *manager, const gchar *object_path, const gchar *interface_name, gpointer user_data);

void ev_object_manager_client_new (
    GDBusConnection        *connection,
    GDBusObjectManagerClientFlags  flags,
    const gchar            *name,
    const gchar            *object_path,
    GCancellable           *cancellable,
    GAsyncReadyCallback     callback,
    gpointer                user_data);
GDBusObjectManager *ev_object_manager_client_new_finish (
    GAsyncResult        *res,
    GError             **error);
GDBusObjectManager *ev_object_manager_client_new_sync (
    GDBusConnection        *connection,
    GDBusObjectManagerClientFlags  flags,
    const gchar            *name,
    const gchar            *object_path,
    GCancellable           *cancellable,
    GError                **error);

void ev_object_manager_client_new_for_bus (
    GBusType                bus_type,
    GDBusObjectManagerClientFlags  flags,
    const gchar            *name,
    const gchar            *object_path,
    GCancellable           *cancellable,
    GAsyncReadyCallback     callback,
    gpointer                user_data);
GDBusObjectManager *ev_object_manager_client_new_for_bus_finish (
    GAsyncResult        *res,
    GError             **error);
GDBusObjectManager *ev_object_manager_client_new_for_bus_sync (
    GBusType                bus_type,
    GDBusObjectManagerClientFlags  flags,
    const gchar            *name,
    const gchar            *object_path,
    GCancellable           *cancellable,
    GError                **error);


G_END_DECLS

#endif /* __EV_GDBUS_GENERATED_H__ */
