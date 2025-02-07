/* cellrenderertextish.c generated by valac 0.18.1, the Vala compiler
 * generated from cellrenderertextish.vala, do not modify */

/* compile with  valac -c cellrenderertextish.vala --pkg gtk+-3.0 -C -H cellrenderertextish.h */

#include <glib.h>
#include <glib-object.h>
#include <gtk/gtk.h>
#include <stdlib.h>
#include <string.h>
#include <gdk/gdk.h>
#include <glib/gi18n-lib.h>


#define TYPE_CELL_RENDERER_TEXTISH (cell_renderer_textish_get_type ())
#define CELL_RENDERER_TEXTISH(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_CELL_RENDERER_TEXTISH, CellRendererTextish))
#define CELL_RENDERER_TEXTISH_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_CELL_RENDERER_TEXTISH, CellRendererTextishClass))
#define IS_CELL_RENDERER_TEXTISH(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_CELL_RENDERER_TEXTISH))
#define IS_CELL_RENDERER_TEXTISH_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_CELL_RENDERER_TEXTISH))
#define CELL_RENDERER_TEXTISH_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_CELL_RENDERER_TEXTISH, CellRendererTextishClass))

typedef struct _CellRendererTextish CellRendererTextish;
typedef struct _CellRendererTextishClass CellRendererTextishClass;
typedef struct _CellRendererTextishPrivate CellRendererTextishPrivate;

#define CELL_RENDERER_TEXTISH_TYPE_MODE (cell_renderer_textish_mode_get_type ())
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))

#define TYPE_CELL_EDITABLE_ACCEL (cell_editable_accel_get_type ())
#define CELL_EDITABLE_ACCEL(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_CELL_EDITABLE_ACCEL, CellEditableAccel))
#define CELL_EDITABLE_ACCEL_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_CELL_EDITABLE_ACCEL, CellEditableAccelClass))
#define IS_CELL_EDITABLE_ACCEL(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_CELL_EDITABLE_ACCEL))
#define IS_CELL_EDITABLE_ACCEL_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_CELL_EDITABLE_ACCEL))
#define CELL_EDITABLE_ACCEL_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_CELL_EDITABLE_ACCEL, CellEditableAccelClass))

typedef struct _CellEditableAccel CellEditableAccel;
typedef struct _CellEditableAccelClass CellEditableAccelClass;

#define TYPE_CELL_EDITABLE_COMBO (cell_editable_combo_get_type ())
#define CELL_EDITABLE_COMBO(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_CELL_EDITABLE_COMBO, CellEditableCombo))
#define CELL_EDITABLE_COMBO_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_CELL_EDITABLE_COMBO, CellEditableComboClass))
#define IS_CELL_EDITABLE_COMBO(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_CELL_EDITABLE_COMBO))
#define IS_CELL_EDITABLE_COMBO_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_CELL_EDITABLE_COMBO))
#define CELL_EDITABLE_COMBO_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_CELL_EDITABLE_COMBO, CellEditableComboClass))

typedef struct _CellEditableCombo CellEditableCombo;
typedef struct _CellEditableComboClass CellEditableComboClass;

#define TYPE_CELL_EDITABLE_DUMMY (cell_editable_dummy_get_type ())
#define CELL_EDITABLE_DUMMY(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_CELL_EDITABLE_DUMMY, CellEditableDummy))
#define CELL_EDITABLE_DUMMY_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_CELL_EDITABLE_DUMMY, CellEditableDummyClass))
#define IS_CELL_EDITABLE_DUMMY(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_CELL_EDITABLE_DUMMY))
#define IS_CELL_EDITABLE_DUMMY_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_CELL_EDITABLE_DUMMY))
#define CELL_EDITABLE_DUMMY_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_CELL_EDITABLE_DUMMY, CellEditableDummyClass))

typedef struct _CellEditableDummy CellEditableDummy;
typedef struct _CellEditableDummyClass CellEditableDummyClass;
typedef struct _CellEditableDummyPrivate CellEditableDummyPrivate;
typedef struct _CellEditableAccelPrivate CellEditableAccelPrivate;
#define _g_free0(var) (var = (g_free (var), NULL))
typedef struct _CellEditableComboPrivate CellEditableComboPrivate;
typedef struct _Block1Data Block1Data;

typedef enum  {
	CELL_RENDERER_TEXTISH_MODE_Text,
	CELL_RENDERER_TEXTISH_MODE_Key,
	CELL_RENDERER_TEXTISH_MODE_Popup,
	CELL_RENDERER_TEXTISH_MODE_Combo
} CellRendererTextishMode;

struct _CellRendererTextish {
	GtkCellRendererText parent_instance;
	CellRendererTextishPrivate * priv;
	CellRendererTextishMode mode;
	gchar** items;
	gint items_length1;
};

struct _CellRendererTextishClass {
	GtkCellRendererTextClass parent_class;
};

struct _CellRendererTextishPrivate {
	GtkCellEditable* cell;
};

struct _CellEditableDummy {
	GtkEventBox parent_instance;
	CellEditableDummyPrivate * priv;
};

struct _CellEditableDummyClass {
	GtkEventBoxClass parent_class;
	void (*start_editing) (CellEditableDummy* self, GdkEvent* event);
};

struct _CellEditableDummyPrivate {
	gboolean _editing_canceled;
};

struct _CellEditableAccel {
	GtkEventBox parent_instance;
	CellEditableAccelPrivate * priv;
};

struct _CellEditableAccelClass {
	GtkEventBoxClass parent_class;
	void (*start_editing) (CellEditableAccel* self, GdkEvent* event);
};

struct _CellEditableAccelPrivate {
	gboolean _editing_canceled;
	CellRendererTextish* parent;
	gchar* path;
};

struct _CellEditableCombo {
	GtkComboBoxText parent_instance;
	CellEditableComboPrivate * priv;
};

struct _CellEditableComboClass {
	GtkComboBoxTextClass parent_class;
};

struct _CellEditableComboPrivate {
	CellRendererTextish* parent;
	gchar* path;
};

struct _Block1Data {
	int _ref_count_;
	CellEditableCombo * self;
	CellRendererTextish* parent;
	gchar* path;
};


static gpointer cell_renderer_textish_parent_class = NULL;
static gpointer cell_editable_dummy_parent_class = NULL;
static GtkCellEditableIface* cell_editable_dummy_gtk_cell_editable_parent_iface = NULL;
static gpointer cell_editable_accel_parent_class = NULL;
static GtkCellEditableIface* cell_editable_accel_gtk_cell_editable_parent_iface = NULL;
static gpointer cell_editable_combo_parent_class = NULL;

GType cell_renderer_textish_get_type (void) G_GNUC_CONST;
GType cell_renderer_textish_mode_get_type (void) G_GNUC_CONST;
#define CELL_RENDERER_TEXTISH_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), TYPE_CELL_RENDERER_TEXTISH, CellRendererTextishPrivate))
enum  {
	CELL_RENDERER_TEXTISH_DUMMY_PROPERTY
};
CellRendererTextish* cell_renderer_textish_new (void);
CellRendererTextish* cell_renderer_textish_construct (GType object_type);
CellRendererTextish* cell_renderer_textish_new_with_items (gchar** items, int items_length1);
CellRendererTextish* cell_renderer_textish_construct_with_items (GType object_type, gchar** items, int items_length1);
static gchar** _vala_array_dup1 (gchar** self, int length);
static GtkCellEditable* cell_renderer_textish_real_start_editing (GtkCellRenderer* base, GdkEvent* event, GtkWidget* widget, const gchar* path, const GdkRectangle* background_area, const GdkRectangle* cell_area, GtkCellRendererState flags);
CellEditableAccel* cell_editable_accel_new (CellRendererTextish* parent, const gchar* path, GtkWidget* widget);
CellEditableAccel* cell_editable_accel_construct (GType object_type, CellRendererTextish* parent, const gchar* path, GtkWidget* widget);
GType cell_editable_accel_get_type (void) G_GNUC_CONST;
CellEditableCombo* cell_editable_combo_new (CellRendererTextish* parent, const gchar* path, GtkWidget* widget, gchar** items, int items_length1);
CellEditableCombo* cell_editable_combo_construct (GType object_type, CellRendererTextish* parent, const gchar* path, GtkWidget* widget, gchar** items, int items_length1);
GType cell_editable_combo_get_type (void) G_GNUC_CONST;
CellEditableDummy* cell_editable_dummy_new (void);
CellEditableDummy* cell_editable_dummy_construct (GType object_type);
GType cell_editable_dummy_get_type (void) G_GNUC_CONST;
static void g_cclosure_user_marshal_VOID__STRING_FLAGS_UINT (GClosure * closure, GValue * return_value, guint n_param_values, const GValue * param_values, gpointer invocation_hint, gpointer marshal_data);
static void g_cclosure_user_marshal_VOID__STRING_UINT (GClosure * closure, GValue * return_value, guint n_param_values, const GValue * param_values, gpointer invocation_hint, gpointer marshal_data);
static void cell_renderer_textish_finalize (GObject* obj);
#define CELL_EDITABLE_DUMMY_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), TYPE_CELL_EDITABLE_DUMMY, CellEditableDummyPrivate))
enum  {
	CELL_EDITABLE_DUMMY_DUMMY_PROPERTY,
	CELL_EDITABLE_DUMMY_EDITING_CANCELED
};
void cell_editable_dummy_start_editing (CellEditableDummy* self, GdkEvent* event);
static void cell_editable_dummy_real_start_editing (CellEditableDummy* self, GdkEvent* event);
gboolean cell_editable_dummy_get_editing_canceled (CellEditableDummy* self);
void cell_editable_dummy_set_editing_canceled (CellEditableDummy* self, gboolean value);
static void cell_editable_dummy_finalize (GObject* obj);
static void _vala_cell_editable_dummy_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec);
static void _vala_cell_editable_dummy_set_property (GObject * object, guint property_id, const GValue * value, GParamSpec * pspec);
#define CELL_EDITABLE_ACCEL_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), TYPE_CELL_EDITABLE_ACCEL, CellEditableAccelPrivate))
enum  {
	CELL_EDITABLE_ACCEL_DUMMY_PROPERTY,
	CELL_EDITABLE_ACCEL_EDITING_CANCELED
};
static void cell_editable_accel_on_editing_done (CellEditableAccel* self);
static void _cell_editable_accel_on_editing_done_gtk_cell_editable_editing_done (GtkCellEditable* _sender, gpointer self);
void cell_editable_accel_start_editing (CellEditableAccel* self, GdkEvent* event);
static void cell_editable_accel_real_start_editing (CellEditableAccel* self, GdkEvent* event);
static gboolean cell_editable_accel_on_key (CellEditableAccel* self, GdkEventKey* event);
static gboolean _cell_editable_accel_on_key_gtk_widget_key_press_event (GtkWidget* _sender, GdkEventKey* event, gpointer self);
gboolean cell_editable_accel_get_editing_canceled (CellEditableAccel* self);
void cell_editable_accel_set_editing_canceled (CellEditableAccel* self, gboolean value);
static void cell_editable_accel_finalize (GObject* obj);
static void _vala_cell_editable_accel_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec);
static void _vala_cell_editable_accel_set_property (GObject * object, guint property_id, const GValue * value, GParamSpec * pspec);
#define CELL_EDITABLE_COMBO_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), TYPE_CELL_EDITABLE_COMBO, CellEditableComboPrivate))
enum  {
	CELL_EDITABLE_COMBO_DUMMY_PROPERTY
};
static Block1Data* block1_data_ref (Block1Data* _data1_);
static void block1_data_unref (void * _userdata_);
static void __lambda2_ (Block1Data* _data1_);
static void ___lambda2__gtk_combo_box_changed (GtkComboBox* _sender, gpointer self);
static void cell_editable_combo_finalize (GObject* obj);
static void _vala_array_destroy (gpointer array, gint array_length, GDestroyNotify destroy_func);
static void _vala_array_free (gpointer array, gint array_length, GDestroyNotify destroy_func);


GType cell_renderer_textish_mode_get_type (void) {
	static volatile gsize cell_renderer_textish_mode_type_id__volatile = 0;
	if (g_once_init_enter (&cell_renderer_textish_mode_type_id__volatile)) {
		static const GEnumValue values[] = {{CELL_RENDERER_TEXTISH_MODE_Text, "CELL_RENDERER_TEXTISH_MODE_Text", "text"}, {CELL_RENDERER_TEXTISH_MODE_Key, "CELL_RENDERER_TEXTISH_MODE_Key", "key"}, {CELL_RENDERER_TEXTISH_MODE_Popup, "CELL_RENDERER_TEXTISH_MODE_Popup", "popup"}, {CELL_RENDERER_TEXTISH_MODE_Combo, "CELL_RENDERER_TEXTISH_MODE_Combo", "combo"}, {0, NULL, NULL}};
		GType cell_renderer_textish_mode_type_id;
		cell_renderer_textish_mode_type_id = g_enum_register_static ("CellRendererTextishMode", values);
		g_once_init_leave (&cell_renderer_textish_mode_type_id__volatile, cell_renderer_textish_mode_type_id);
	}
	return cell_renderer_textish_mode_type_id__volatile;
}


CellRendererTextish* cell_renderer_textish_construct (GType object_type) {
	CellRendererTextish * self = NULL;
	self = (CellRendererTextish*) g_object_new (object_type, NULL);
	self->mode = CELL_RENDERER_TEXTISH_MODE_Text;
	_g_object_unref0 (self->priv->cell);
	self->priv->cell = NULL;
	self->items = (_vala_array_free (self->items, self->items_length1, (GDestroyNotify) g_free), NULL);
	self->items = NULL;
	self->items_length1 = 0;
	return self;
}


CellRendererTextish* cell_renderer_textish_new (void) {
	return cell_renderer_textish_construct (TYPE_CELL_RENDERER_TEXTISH);
}


static gchar** _vala_array_dup1 (gchar** self, int length) {
	gchar** result;
	int i;
	result = g_new0 (gchar*, length + 1);
	for (i = 0; i < length; i++) {
		gchar* _tmp0_;
		_tmp0_ = g_strdup (self[i]);
		result[i] = _tmp0_;
	}
	return result;
}


CellRendererTextish* cell_renderer_textish_construct_with_items (GType object_type, gchar** items, int items_length1) {
	CellRendererTextish * self = NULL;
	gchar** _tmp0_;
	gint _tmp0__length1;
	gchar** _tmp1_;
	gint _tmp1__length1;
	self = (CellRendererTextish*) g_object_new (object_type, NULL);
	self->mode = CELL_RENDERER_TEXTISH_MODE_Text;
	_g_object_unref0 (self->priv->cell);
	self->priv->cell = NULL;
	_tmp0_ = items;
	_tmp0__length1 = items_length1;
	_tmp1_ = (_tmp0_ != NULL) ? _vala_array_dup1 (_tmp0_, _tmp0__length1) : ((gpointer) _tmp0_);
	_tmp1__length1 = _tmp0__length1;
	self->items = (_vala_array_free (self->items, self->items_length1, (GDestroyNotify) g_free), NULL);
	self->items = _tmp1_;
	self->items_length1 = _tmp1__length1;
	return self;
}


CellRendererTextish* cell_renderer_textish_new_with_items (gchar** items, int items_length1) {
	return cell_renderer_textish_construct_with_items (TYPE_CELL_RENDERER_TEXTISH, items, items_length1);
}


static gpointer _g_object_ref0 (gpointer self) {
	return self ? g_object_ref (self) : NULL;
}



static GtkCellEditable* cell_renderer_textish_real_start_editing (GtkCellRenderer* base, GdkEvent* event, GtkWidget* widget, const gchar* path, const GdkRectangle* background_area, const GdkRectangle* cell_area, GtkCellRendererState flags) {
	CellRendererTextish * self;
	GtkCellEditable* result = NULL;
	gboolean _tmp0_ = FALSE;
	gboolean _tmp1_;
	CellRendererTextishMode _tmp3_;
	GtkCellEditable* _tmp20_;
	self = (CellRendererTextish*) base;
	g_return_val_if_fail (widget != NULL, NULL);
	g_return_val_if_fail (path != NULL, NULL);
	g_return_val_if_fail (background_area != NULL, NULL);
	g_return_val_if_fail (cell_area != NULL, NULL);
	_g_object_unref0 (self->priv->cell);
	self->priv->cell = NULL;
	g_object_get ((GtkCellRendererText*) self, "editable", &_tmp0_, NULL);
	_tmp1_ = _tmp0_;
	if (!_tmp1_) {
		GtkCellEditable* _tmp2_;
		_tmp2_ = self->priv->cell;
		result = _tmp2_;
		return result;
	}
	_tmp3_ = self->mode;
	switch (_tmp3_) {
		case CELL_RENDERER_TEXTISH_MODE_Text:
		{
			GdkEvent* _tmp4_;
			GtkWidget* _tmp5_;
			const gchar* _tmp6_;
			GdkRectangle _tmp7_;
			GdkRectangle _tmp8_;
			GtkCellRendererState _tmp9_;
			GtkCellEditable* _tmp10_ = NULL;
			GtkCellEditable* _tmp11_;
			_tmp4_ = event;
			_tmp5_ = widget;
			_tmp6_ = path;
			_tmp7_ = *background_area;
			_tmp8_ = *cell_area;
			_tmp9_ = flags;
			_tmp10_ = GTK_CELL_RENDERER_CLASS (cell_renderer_textish_parent_class)->start_editing ((GtkCellRenderer*) G_TYPE_CHECK_INSTANCE_CAST (self, GTK_TYPE_CELL_RENDERER_TEXT, GtkCellRendererText), _tmp4_, _tmp5_, _tmp6_, &_tmp7_, &_tmp8_, _tmp9_);
			_tmp11_ = _g_object_ref0 (_tmp10_);
			_g_object_unref0 (self->priv->cell);
			self->priv->cell = _tmp11_;
			break;
		}
		case CELL_RENDERER_TEXTISH_MODE_Key:
		{
			const gchar* _tmp12_;
			GtkWidget* _tmp13_;
			CellEditableAccel* _tmp14_;
			_tmp12_ = path;
			_tmp13_ = widget;
			_tmp14_ = cell_editable_accel_new (self, _tmp12_, _tmp13_);
			g_object_ref_sink (_tmp14_);
			_g_object_unref0 (self->priv->cell);
			self->priv->cell = (GtkCellEditable*) _tmp14_;
			break;
		}
		case CELL_RENDERER_TEXTISH_MODE_Combo:
		{
			const gchar* _tmp15_;
			GtkWidget* _tmp16_;
			gchar** _tmp17_;
			gint _tmp17__length1;
			CellEditableCombo* _tmp18_;
			_tmp15_ = path;
			_tmp16_ = widget;
			_tmp17_ = self->items;
			_tmp17__length1 = self->items_length1;
			_tmp18_ = cell_editable_combo_new (self, _tmp15_, _tmp16_, _tmp17_, _tmp17__length1);
			g_object_ref_sink (_tmp18_);
			_g_object_unref0 (self->priv->cell);
			self->priv->cell = (GtkCellEditable*) _tmp18_;
			break;
		}
		case CELL_RENDERER_TEXTISH_MODE_Popup:
		{
			CellEditableDummy* _tmp19_;
			_tmp19_ = cell_editable_dummy_new ();
			g_object_ref_sink (_tmp19_);
			_g_object_unref0 (self->priv->cell);
			self->priv->cell = (GtkCellEditable*) _tmp19_;
			break;
		}
		default:
		break;
	}
	_tmp20_ = self->priv->cell;
	result = _tmp20_;
	return result;
}


static void g_cclosure_user_marshal_VOID__STRING_FLAGS_UINT (GClosure * closure, GValue * return_value, guint n_param_values, const GValue * param_values, gpointer invocation_hint, gpointer marshal_data) {
	typedef void (*GMarshalFunc_VOID__STRING_FLAGS_UINT) (gpointer data1, const char* arg_1, gint arg_2, guint arg_3, gpointer data2);
	register GMarshalFunc_VOID__STRING_FLAGS_UINT callback;
	register GCClosure * cc;
	register gpointer data1;
	register gpointer data2;
	cc = (GCClosure *) closure;
	g_return_if_fail (n_param_values == 4);
	if (G_CCLOSURE_SWAP_DATA (closure)) {
		data1 = closure->data;
		data2 = param_values->data[0].v_pointer;
	} else {
		data1 = param_values->data[0].v_pointer;
		data2 = closure->data;
	}
	callback = (GMarshalFunc_VOID__STRING_FLAGS_UINT) (marshal_data ? marshal_data : cc->callback);
	callback (data1, g_value_get_string (param_values + 1), g_value_get_flags (param_values + 2), g_value_get_uint (param_values + 3), data2);
}


static void g_cclosure_user_marshal_VOID__STRING_UINT (GClosure * closure, GValue * return_value, guint n_param_values, const GValue * param_values, gpointer invocation_hint, gpointer marshal_data) {
	typedef void (*GMarshalFunc_VOID__STRING_UINT) (gpointer data1, const char* arg_1, guint arg_2, gpointer data2);
	register GMarshalFunc_VOID__STRING_UINT callback;
	register GCClosure * cc;
	register gpointer data1;
	register gpointer data2;
	cc = (GCClosure *) closure;
	g_return_if_fail (n_param_values == 3);
	if (G_CCLOSURE_SWAP_DATA (closure)) {
		data1 = closure->data;
		data2 = param_values->data[0].v_pointer;
	} else {
		data1 = param_values->data[0].v_pointer;
		data2 = closure->data;
	}
	callback = (GMarshalFunc_VOID__STRING_UINT) (marshal_data ? marshal_data : cc->callback);
	callback (data1, g_value_get_string (param_values + 1), g_value_get_uint (param_values + 2), data2);
}


static void cell_renderer_textish_class_init (CellRendererTextishClass * klass) {
	cell_renderer_textish_parent_class = g_type_class_peek_parent (klass);
	g_type_class_add_private (klass, sizeof (CellRendererTextishPrivate));
	GTK_CELL_RENDERER_CLASS (klass)->start_editing = cell_renderer_textish_real_start_editing;
	G_OBJECT_CLASS (klass)->finalize = cell_renderer_textish_finalize;
	g_signal_new ("key_edited", TYPE_CELL_RENDERER_TEXTISH, G_SIGNAL_RUN_LAST, 0, NULL, NULL, g_cclosure_user_marshal_VOID__STRING_FLAGS_UINT, G_TYPE_NONE, 3, G_TYPE_STRING, gdk_modifier_type_get_type (), G_TYPE_UINT);
	g_signal_new ("combo_edited", TYPE_CELL_RENDERER_TEXTISH, G_SIGNAL_RUN_LAST, 0, NULL, NULL, g_cclosure_user_marshal_VOID__STRING_UINT, G_TYPE_NONE, 2, G_TYPE_STRING, G_TYPE_UINT);
}


static void cell_renderer_textish_instance_init (CellRendererTextish * self) {
	self->priv = CELL_RENDERER_TEXTISH_GET_PRIVATE (self);
}


static void cell_renderer_textish_finalize (GObject* obj) {
	CellRendererTextish * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, TYPE_CELL_RENDERER_TEXTISH, CellRendererTextish);
	self->items = (_vala_array_free (self->items, self->items_length1, (GDestroyNotify) g_free), NULL);
	_g_object_unref0 (self->priv->cell);
	G_OBJECT_CLASS (cell_renderer_textish_parent_class)->finalize (obj);
}


GType cell_renderer_textish_get_type (void) {
	static volatile gsize cell_renderer_textish_type_id__volatile = 0;
	if (g_once_init_enter (&cell_renderer_textish_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (CellRendererTextishClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) cell_renderer_textish_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (CellRendererTextish), 0, (GInstanceInitFunc) cell_renderer_textish_instance_init, NULL };
		GType cell_renderer_textish_type_id;
		cell_renderer_textish_type_id = g_type_register_static (GTK_TYPE_CELL_RENDERER_TEXT, "CellRendererTextish", &g_define_type_info, 0);
		g_once_init_leave (&cell_renderer_textish_type_id__volatile, cell_renderer_textish_type_id);
	}
	return cell_renderer_textish_type_id__volatile;
}


static void cell_editable_dummy_real_start_editing (CellEditableDummy* self, GdkEvent* event) {
	gtk_cell_editable_editing_done ((GtkCellEditable*) self);
	gtk_cell_editable_remove_widget ((GtkCellEditable*) self);
}


void cell_editable_dummy_start_editing (CellEditableDummy* self, GdkEvent* event) {
	g_return_if_fail (self != NULL);
	CELL_EDITABLE_DUMMY_GET_CLASS (self)->start_editing (self, event);
}


CellEditableDummy* cell_editable_dummy_construct (GType object_type) {
	CellEditableDummy * self = NULL;
	self = (CellEditableDummy*) g_object_new (object_type, NULL);
	return self;
}


CellEditableDummy* cell_editable_dummy_new (void) {
	return cell_editable_dummy_construct (TYPE_CELL_EDITABLE_DUMMY);
}


gboolean cell_editable_dummy_get_editing_canceled (CellEditableDummy* self) {
	gboolean result;
	gboolean _tmp0_;
	g_return_val_if_fail (self != NULL, FALSE);
	_tmp0_ = self->priv->_editing_canceled;
	result = _tmp0_;
	return result;
}


void cell_editable_dummy_set_editing_canceled (CellEditableDummy* self, gboolean value) {
	gboolean _tmp0_;
	g_return_if_fail (self != NULL);
	_tmp0_ = value;
	self->priv->_editing_canceled = _tmp0_;
	g_object_notify ((GObject *) self, "editing-canceled");
}


static void cell_editable_dummy_class_init (CellEditableDummyClass * klass) {
	cell_editable_dummy_parent_class = g_type_class_peek_parent (klass);
	g_type_class_add_private (klass, sizeof (CellEditableDummyPrivate));
	CELL_EDITABLE_DUMMY_CLASS (klass)->start_editing = cell_editable_dummy_real_start_editing;
	G_OBJECT_CLASS (klass)->get_property = _vala_cell_editable_dummy_get_property;
	G_OBJECT_CLASS (klass)->set_property = _vala_cell_editable_dummy_set_property;
	G_OBJECT_CLASS (klass)->finalize = cell_editable_dummy_finalize;
	g_object_class_install_property (G_OBJECT_CLASS (klass), CELL_EDITABLE_DUMMY_EDITING_CANCELED, g_param_spec_boolean ("editing-canceled", "editing-canceled", "editing-canceled", FALSE, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
}


static void cell_editable_dummy_gtk_cell_editable_interface_init (GtkCellEditableIface * iface) {
	cell_editable_dummy_gtk_cell_editable_parent_iface = g_type_interface_peek_parent (iface);
	iface->start_editing = (void (*)(GtkCellEditable*, GdkEvent*)) cell_editable_dummy_start_editing;
}


static void cell_editable_dummy_instance_init (CellEditableDummy * self) {
	self->priv = CELL_EDITABLE_DUMMY_GET_PRIVATE (self);
}


static void cell_editable_dummy_finalize (GObject* obj) {
	CellEditableDummy * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, TYPE_CELL_EDITABLE_DUMMY, CellEditableDummy);
	G_OBJECT_CLASS (cell_editable_dummy_parent_class)->finalize (obj);
}


GType cell_editable_dummy_get_type (void) {
	static volatile gsize cell_editable_dummy_type_id__volatile = 0;
	if (g_once_init_enter (&cell_editable_dummy_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (CellEditableDummyClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) cell_editable_dummy_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (CellEditableDummy), 0, (GInstanceInitFunc) cell_editable_dummy_instance_init, NULL };
		static const GInterfaceInfo gtk_cell_editable_info = { (GInterfaceInitFunc) cell_editable_dummy_gtk_cell_editable_interface_init, (GInterfaceFinalizeFunc) NULL, NULL};
		GType cell_editable_dummy_type_id;
		cell_editable_dummy_type_id = g_type_register_static (GTK_TYPE_EVENT_BOX, "CellEditableDummy", &g_define_type_info, 0);
		g_type_add_interface_static (cell_editable_dummy_type_id, GTK_TYPE_CELL_EDITABLE, &gtk_cell_editable_info);
		g_once_init_leave (&cell_editable_dummy_type_id__volatile, cell_editable_dummy_type_id);
	}
	return cell_editable_dummy_type_id__volatile;
}


static void _vala_cell_editable_dummy_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec) {
	CellEditableDummy * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, TYPE_CELL_EDITABLE_DUMMY, CellEditableDummy);
	switch (property_id) {
		case CELL_EDITABLE_DUMMY_EDITING_CANCELED:
		g_value_set_boolean (value, cell_editable_dummy_get_editing_canceled (self));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}


static void _vala_cell_editable_dummy_set_property (GObject * object, guint property_id, const GValue * value, GParamSpec * pspec) {
	CellEditableDummy * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, TYPE_CELL_EDITABLE_DUMMY, CellEditableDummy);
	switch (property_id) {
		case CELL_EDITABLE_DUMMY_EDITING_CANCELED:
		cell_editable_dummy_set_editing_canceled (self, g_value_get_boolean (value));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}


static void _cell_editable_accel_on_editing_done_gtk_cell_editable_editing_done (GtkCellEditable* _sender, gpointer self) {
	cell_editable_accel_on_editing_done (self);
}


CellEditableAccel* cell_editable_accel_construct (GType object_type, CellRendererTextish* parent, const gchar* path, GtkWidget* widget) {
	CellEditableAccel * self = NULL;
	CellRendererTextish* _tmp0_;
	CellRendererTextish* _tmp1_;
	const gchar* _tmp2_;
	gchar* _tmp3_;
	const gchar* _tmp4_ = NULL;
	GtkLabel* _tmp5_;
	GtkLabel* label;
	GtkWidget* _tmp6_;
	GtkStyleContext* _tmp7_ = NULL;
	GdkRGBA _tmp8_ = {0};
	GtkWidget* _tmp9_;
	GtkStyleContext* _tmp10_ = NULL;
	GdkRGBA _tmp11_ = {0};
	g_return_val_if_fail (parent != NULL, NULL);
	g_return_val_if_fail (path != NULL, NULL);
	g_return_val_if_fail (widget != NULL, NULL);
	self = (CellEditableAccel*) g_object_new (object_type, NULL);
	_tmp0_ = parent;
	_tmp1_ = _g_object_ref0 (_tmp0_);
	_g_object_unref0 (self->priv->parent);
	self->priv->parent = _tmp1_;
	_tmp2_ = path;
	_tmp3_ = g_strdup (_tmp2_);
	_g_free0 (self->priv->path);
	self->priv->path = _tmp3_;
	g_signal_connect_object ((GtkCellEditable*) self, "editing-done", (GCallback) _cell_editable_accel_on_editing_done_gtk_cell_editable_editing_done, self, 0);
	_tmp4_ = _ ("Key combination...");
	_tmp5_ = (GtkLabel*) gtk_label_new (_tmp4_);
	g_object_ref_sink (_tmp5_);
	label = _tmp5_;
	gtk_misc_set_alignment ((GtkMisc*) label, 0.0f, 0.5f);
	gtk_container_add ((GtkContainer*) self, (GtkWidget*) label);
	_tmp6_ = widget;
	_tmp7_ = gtk_widget_get_style_context (_tmp6_);
	gtk_style_context_get_background_color (_tmp7_, GTK_STATE_FLAG_SELECTED, &_tmp8_);
	gtk_widget_override_background_color ((GtkWidget*) self, GTK_STATE_FLAG_NORMAL, &_tmp8_);
	_tmp9_ = widget;
	_tmp10_ = gtk_widget_get_style_context (_tmp9_);
	gtk_style_context_get_color (_tmp10_, GTK_STATE_FLAG_SELECTED, &_tmp11_);
	gtk_widget_override_color ((GtkWidget*) label, GTK_STATE_FLAG_NORMAL, &_tmp11_);
	gtk_widget_show_all ((GtkWidget*) self);
	_g_object_unref0 (label);
	return self;
}


CellEditableAccel* cell_editable_accel_new (CellRendererTextish* parent, const gchar* path, GtkWidget* widget) {
	return cell_editable_accel_construct (TYPE_CELL_EDITABLE_ACCEL, parent, path, widget);
}


static gboolean _cell_editable_accel_on_key_gtk_widget_key_press_event (GtkWidget* _sender, GdkEventKey* event, gpointer self) {
	gboolean result;
	result = cell_editable_accel_on_key (self, event);
	return result;
}


static void cell_editable_accel_real_start_editing (CellEditableAccel* self, GdkEvent* event) {
	guint32 _tmp0_ = 0U;
	GdkEvent* _tmp1_;
	GdkWindow* _tmp4_ = NULL;
	guint32 _tmp5_;
	gtk_grab_add ((GtkWidget*) self);
	_tmp1_ = event;
	if (_tmp1_ != NULL) {
		GdkEvent* _tmp2_;
		guint32 _tmp3_ = 0U;
		_tmp2_ = event;
		_tmp3_ = gdk_event_get_time (_tmp2_);
		_tmp0_ = _tmp3_;
	} else {
		_tmp0_ = (guint32) GDK_CURRENT_TIME;
	}
	_tmp4_ = gtk_widget_get_window ((GtkWidget*) self);
	_tmp5_ = _tmp0_;
	gdk_keyboard_grab (_tmp4_, FALSE, _tmp5_);
	g_signal_connect_object ((GtkWidget*) self, "key-press-event", (GCallback) _cell_editable_accel_on_key_gtk_widget_key_press_event, self, 0);
}


void cell_editable_accel_start_editing (CellEditableAccel* self, GdkEvent* event) {
	g_return_if_fail (self != NULL);
	CELL_EDITABLE_ACCEL_GET_CLASS (self)->start_editing (self, event);
}


static gboolean cell_editable_accel_on_key (CellEditableAccel* self, GdkEventKey* event) {
	gboolean result = FALSE;
	GdkEventKey _tmp0_;
	guint _tmp1_;
	GdkEventKey _tmp2_;
	guint _tmp3_;
	GdkEventKey _tmp4_;
	GdkModifierType _tmp5_;
	GdkModifierType _tmp6_ = 0;
	GdkModifierType mods;
	CellRendererTextish* _tmp7_;
	const gchar* _tmp8_;
	GdkModifierType _tmp9_;
	GdkEventKey _tmp10_;
	guint16 _tmp11_;
	g_return_val_if_fail (self != NULL, FALSE);
	g_return_val_if_fail (event != NULL, FALSE);
	_tmp0_ = *event;
	_tmp1_ = _tmp0_.is_modifier;
	if (_tmp1_ != ((guint) 0)) {
		result = TRUE;
		return result;
	}
	_tmp2_ = *event;
	_tmp3_ = _tmp2_.keyval;
	switch (_tmp3_) {
		case GDK_KEY_Super_L:
		case GDK_KEY_Super_R:
		case GDK_KEY_Hyper_L:
		case GDK_KEY_Hyper_R:
		{
			result = TRUE;
			return result;
		}
		default:
		break;
	}
	_tmp4_ = *event;
	_tmp5_ = _tmp4_.state;
	_tmp6_ = gtk_accelerator_get_default_mod_mask ();
	mods = _tmp5_ & _tmp6_;
	gtk_cell_editable_editing_done ((GtkCellEditable*) self);
	gtk_cell_editable_remove_widget ((GtkCellEditable*) self);
	_tmp7_ = self->priv->parent;
	_tmp8_ = self->priv->path;
	_tmp9_ = mods;
	_tmp10_ = *event;
	_tmp11_ = _tmp10_.hardware_keycode;
	g_signal_emit_by_name (_tmp7_, "key-edited", _tmp8_, _tmp9_, (guint) _tmp11_);
	result = TRUE;
	return result;
}


static void cell_editable_accel_on_editing_done (CellEditableAccel* self) {
	g_return_if_fail (self != NULL);
	gtk_grab_remove ((GtkWidget*) self);
	gdk_keyboard_ungrab ((guint32) GDK_CURRENT_TIME);
}


gboolean cell_editable_accel_get_editing_canceled (CellEditableAccel* self) {
	gboolean result;
	gboolean _tmp0_;
	g_return_val_if_fail (self != NULL, FALSE);
	_tmp0_ = self->priv->_editing_canceled;
	result = _tmp0_;
	return result;
}


void cell_editable_accel_set_editing_canceled (CellEditableAccel* self, gboolean value) {
	gboolean _tmp0_;
	g_return_if_fail (self != NULL);
	_tmp0_ = value;
	self->priv->_editing_canceled = _tmp0_;
	g_object_notify ((GObject *) self, "editing-canceled");
}


static void cell_editable_accel_class_init (CellEditableAccelClass * klass) {
	cell_editable_accel_parent_class = g_type_class_peek_parent (klass);
	g_type_class_add_private (klass, sizeof (CellEditableAccelPrivate));
	CELL_EDITABLE_ACCEL_CLASS (klass)->start_editing = cell_editable_accel_real_start_editing;
	G_OBJECT_CLASS (klass)->get_property = _vala_cell_editable_accel_get_property;
	G_OBJECT_CLASS (klass)->set_property = _vala_cell_editable_accel_set_property;
	G_OBJECT_CLASS (klass)->finalize = cell_editable_accel_finalize;
	g_object_class_install_property (G_OBJECT_CLASS (klass), CELL_EDITABLE_ACCEL_EDITING_CANCELED, g_param_spec_boolean ("editing-canceled", "editing-canceled", "editing-canceled", FALSE, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
}


static void cell_editable_accel_gtk_cell_editable_interface_init (GtkCellEditableIface * iface) {
	cell_editable_accel_gtk_cell_editable_parent_iface = g_type_interface_peek_parent (iface);
	iface->start_editing = (void (*)(GtkCellEditable*, GdkEvent*)) cell_editable_accel_start_editing;
}


static void cell_editable_accel_instance_init (CellEditableAccel * self) {
	self->priv = CELL_EDITABLE_ACCEL_GET_PRIVATE (self);
}


static void cell_editable_accel_finalize (GObject* obj) {
	CellEditableAccel * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, TYPE_CELL_EDITABLE_ACCEL, CellEditableAccel);
	_g_object_unref0 (self->priv->parent);
	_g_free0 (self->priv->path);
	G_OBJECT_CLASS (cell_editable_accel_parent_class)->finalize (obj);
}


GType cell_editable_accel_get_type (void) {
	static volatile gsize cell_editable_accel_type_id__volatile = 0;
	if (g_once_init_enter (&cell_editable_accel_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (CellEditableAccelClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) cell_editable_accel_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (CellEditableAccel), 0, (GInstanceInitFunc) cell_editable_accel_instance_init, NULL };
		static const GInterfaceInfo gtk_cell_editable_info = { (GInterfaceInitFunc) cell_editable_accel_gtk_cell_editable_interface_init, (GInterfaceFinalizeFunc) NULL, NULL};
		GType cell_editable_accel_type_id;
		cell_editable_accel_type_id = g_type_register_static (GTK_TYPE_EVENT_BOX, "CellEditableAccel", &g_define_type_info, 0);
		g_type_add_interface_static (cell_editable_accel_type_id, GTK_TYPE_CELL_EDITABLE, &gtk_cell_editable_info);
		g_once_init_leave (&cell_editable_accel_type_id__volatile, cell_editable_accel_type_id);
	}
	return cell_editable_accel_type_id__volatile;
}


static void _vala_cell_editable_accel_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec) {
	CellEditableAccel * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, TYPE_CELL_EDITABLE_ACCEL, CellEditableAccel);
	switch (property_id) {
		case CELL_EDITABLE_ACCEL_EDITING_CANCELED:
		g_value_set_boolean (value, cell_editable_accel_get_editing_canceled (self));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}


static void _vala_cell_editable_accel_set_property (GObject * object, guint property_id, const GValue * value, GParamSpec * pspec) {
	CellEditableAccel * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, TYPE_CELL_EDITABLE_ACCEL, CellEditableAccel);
	switch (property_id) {
		case CELL_EDITABLE_ACCEL_EDITING_CANCELED:
		cell_editable_accel_set_editing_canceled (self, g_value_get_boolean (value));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}


static Block1Data* block1_data_ref (Block1Data* _data1_) {
	g_atomic_int_inc (&_data1_->_ref_count_);
	return _data1_;
}


static void block1_data_unref (void * _userdata_) {
	Block1Data* _data1_;
	_data1_ = (Block1Data*) _userdata_;
	if (g_atomic_int_dec_and_test (&_data1_->_ref_count_)) {
		CellEditableCombo * self;
		self = _data1_->self;
		_g_object_unref0 (_data1_->parent);
		_g_free0 (_data1_->path);
		_g_object_unref0 (self);
		g_slice_free (Block1Data, _data1_);
	}
}


static void __lambda2_ (Block1Data* _data1_) {
	CellEditableCombo * self;
	CellRendererTextish* _tmp0_;
	const gchar* _tmp1_;
	gint _tmp2_;
	gint _tmp3_;
	self = _data1_->self;
	_tmp0_ = _data1_->parent;
	_tmp1_ = _data1_->path;
	_tmp2_ = gtk_combo_box_get_active ((GtkComboBox*) self);
	_tmp3_ = _tmp2_;
	g_signal_emit_by_name (_tmp0_, "combo-edited", _tmp1_, (guint) _tmp3_);
}


static void ___lambda2__gtk_combo_box_changed (GtkComboBox* _sender, gpointer self) {
	__lambda2_ (self);
}


CellEditableCombo* cell_editable_combo_construct (GType object_type, CellRendererTextish* parent, const gchar* path, GtkWidget* widget, gchar** items, int items_length1) {
	CellEditableCombo * self = NULL;
	Block1Data* _data1_;
	CellRendererTextish* _tmp0_;
	CellRendererTextish* _tmp1_;
	const gchar* _tmp2_;
	gchar* _tmp3_;
	CellRendererTextish* _tmp4_;
	CellRendererTextish* _tmp5_;
	const gchar* _tmp6_;
	gchar* _tmp7_;
	gchar** _tmp8_;
	gint _tmp8__length1;
	g_return_val_if_fail (parent != NULL, NULL);
	g_return_val_if_fail (path != NULL, NULL);
	g_return_val_if_fail (widget != NULL, NULL);
	_data1_ = g_slice_new0 (Block1Data);
	_data1_->_ref_count_ = 1;
	_tmp0_ = parent;
	_tmp1_ = _g_object_ref0 (_tmp0_);
	_g_object_unref0 (_data1_->parent);
	_data1_->parent = _tmp1_;
	_tmp2_ = path;
	_tmp3_ = g_strdup (_tmp2_);
	_g_free0 (_data1_->path);
	_data1_->path = _tmp3_;
	self = (CellEditableCombo*) g_object_new (object_type, NULL);
	_data1_->self = g_object_ref (self);
	_tmp4_ = _data1_->parent;
	_tmp5_ = _g_object_ref0 (_tmp4_);
	_g_object_unref0 (self->priv->parent);
	self->priv->parent = _tmp5_;
	_tmp6_ = _data1_->path;
	_tmp7_ = g_strdup (_tmp6_);
	_g_free0 (self->priv->path);
	self->priv->path = _tmp7_;
	_tmp8_ = items;
	_tmp8__length1 = items_length1;
	{
		gchar** item_collection = NULL;
		gint item_collection_length1 = 0;
		gint _item_collection_size_ = 0;
		gint item_it = 0;
		item_collection = _tmp8_;
		item_collection_length1 = _tmp8__length1;
		for (item_it = 0; item_it < _tmp8__length1; item_it = item_it + 1) {
			gchar* _tmp9_;
			gchar* item = NULL;
			_tmp9_ = g_strdup (item_collection[item_it]);
			item = _tmp9_;
			{
				const gchar* _tmp10_;
				const gchar* _tmp11_ = NULL;
				_tmp10_ = item;
				_tmp11_ = _ (_tmp10_);
				gtk_combo_box_text_append_text ((GtkComboBoxText*) self, _tmp11_);
				_g_free0 (item);
			}
		}
	}
	g_signal_connect_data ((GtkComboBox*) self, "changed", (GCallback) ___lambda2__gtk_combo_box_changed, block1_data_ref (_data1_), (GClosureNotify) block1_data_unref, 0);
	block1_data_unref (_data1_);
	_data1_ = NULL;
	return self;
}


CellEditableCombo* cell_editable_combo_new (CellRendererTextish* parent, const gchar* path, GtkWidget* widget, gchar** items, int items_length1) {
	return cell_editable_combo_construct (TYPE_CELL_EDITABLE_COMBO, parent, path, widget, items, items_length1);
}


static void cell_editable_combo_class_init (CellEditableComboClass * klass) {
	cell_editable_combo_parent_class = g_type_class_peek_parent (klass);
	g_type_class_add_private (klass, sizeof (CellEditableComboPrivate));
	G_OBJECT_CLASS (klass)->finalize = cell_editable_combo_finalize;
}


static void cell_editable_combo_instance_init (CellEditableCombo * self) {
	self->priv = CELL_EDITABLE_COMBO_GET_PRIVATE (self);
}


static void cell_editable_combo_finalize (GObject* obj) {
	CellEditableCombo * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, TYPE_CELL_EDITABLE_COMBO, CellEditableCombo);
	_g_object_unref0 (self->priv->parent);
	_g_free0 (self->priv->path);
	G_OBJECT_CLASS (cell_editable_combo_parent_class)->finalize (obj);
}


GType cell_editable_combo_get_type (void) {
	static volatile gsize cell_editable_combo_type_id__volatile = 0;
	if (g_once_init_enter (&cell_editable_combo_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (CellEditableComboClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) cell_editable_combo_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (CellEditableCombo), 0, (GInstanceInitFunc) cell_editable_combo_instance_init, NULL };
		GType cell_editable_combo_type_id;
		cell_editable_combo_type_id = g_type_register_static (GTK_TYPE_COMBO_BOX_TEXT, "CellEditableCombo", &g_define_type_info, 0);
		g_once_init_leave (&cell_editable_combo_type_id__volatile, cell_editable_combo_type_id);
	}
	return cell_editable_combo_type_id__volatile;
}


static void _vala_array_destroy (gpointer array, gint array_length, GDestroyNotify destroy_func) {
	if ((array != NULL) && (destroy_func != NULL)) {
		int i;
		for (i = 0; i < array_length; i = i + 1) {
			if (((gpointer*) array)[i] != NULL) {
				destroy_func (((gpointer*) array)[i]);
			}
		}
	}
}


static void _vala_array_free (gpointer array, gint array_length, GDestroyNotify destroy_func) {
	_vala_array_destroy (array, array_length, destroy_func);
	g_free (array);
}



