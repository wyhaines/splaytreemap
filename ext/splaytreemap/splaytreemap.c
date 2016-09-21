#include <ruby.h>
#include "splaytreemap.h"

static VALUE rb_sptm_alloc(VALUE klass)
{
    RSplayTreeMap *sptm = NULL;
    VALUE obj;
    obj = Data_Make_Struct(klass, RSplayTreeMap, rb_mark_sptm, rb_free_sptm, sptm);
    sptm->height = 0;
    sptm->size = 0;
    sptm->max_size = 0;
    sptm->root = NULL;

    return obj;
}

void Init_splaytreemap()
{
	rb_SplayTreeMapClass = rb_define_class("Splaytreemap", rb_cObject);

	rb_define_alloc_func (rb_SplayTreeMapClass, rb_sptm_alloc);
//	rb_define_method (SplayTreeMapClass, "initialize", (VALUE(*)(...))sptm_initialize,0);
	// ==
//	rb_define_method (SplayTreeMapClass, "[]", (VALUE(*)(...))sptm_at,1);
//	rb_define_method (SplayTreeMapClass, "[]=", (VALUE(*)(...))sptm_insert,2);
//	rb_define_method (SplayTreeMapClass, "at", (VALUE(*)(...))sptm_at,1);
//	rb_define_method (SplayTreeMapClass, "clear", (VALUE(*)(...))sptm_clear,0);
//	rb_define_method (SplayTreeMapClass, "clear_childfree", (VALUE(*)(...))sptm_erase_childfree,0);
//	rb_define_method (SplayTreeMapClass, "delete", (VALUE(*)(...))sptm_delete,1);
	// delete_if
	// delete_values
//	rb_define_method (SplayTreeMapClass, "each", (VALUE(*)(...))sptm_each,0);
	// each_key
//	rb_define_method (SplayTreeMapClass, "each_pair", (VALUE(*)(...))sptm_each,0);
	// each_value
//	rb_define_method (SplayTreeMapClass, "empty?", (VALUE(*)(...))sptm_empty,0);
//	rb_define_method (SplayTreeMapClass, "fetch", (VALUE(*)(...))sptm_at,1);
//	rb_define_method (SplayTreeMapClass, "first", (VALUE(*)(...))sptm_first,0);
//	rb_define_method (SplayTreeMapClass, "has_key?", (VALUE(*)(...))sptm_has_key,1);
	// has_value?
//	rb_define_method (SplayTreeMapClass, "include?", (VALUE(*)(...))sptm_has_key,1);
//	rb_define_method (SplayTreeMapClass, "index", (VALUE(*)(...))sptm_index,1);
//	// indices
//	rb_define_method (SplayTreeMapClass, "insert", (VALUE(*)(...))sptm_insert,2);
//	rb_define_method (SplayTreeMapClass, "inspect", (VALUE(*)(...))sptm_inspect,0);
	// invert
//	rb_define_method (SplayTreeMapClass, "key?", (VALUE(*)(...))sptm_has_key,1);
//	rb_define_method (SplayTreeMapClass, "keys", (VALUE(*)(...))sptm_keys,0);
//	rb_define_method (SplayTreeMapClass, "last", (VALUE(*)(...))sptm_last,0);
//	rb_define_method (SplayTreeMapClass, "length", (VALUE(*)(...))sptm_size,0);
//	rb_define_method (SplayTreeMapClass, "max_capacity", (VALUE(*)(...))sptm_max_capacity,0);
//	rb_define_method (SplayTreeMapClass, "max_size", (VALUE(*)(...))sptm_get_max_size,0);
//	rb_define_method (SplayTreeMapClass, "max_size=", (VALUE(*)(...))sptm_set_max_size,1);
//	rb_define_method (SplayTreeMapClass, "member?", (VALUE(*)(...))sptm_has_key,1);
//	rb_define_method (SplayTreeMapClass, "parent", (VALUE(*)(...))sptm_parent,0);
//	rb_define_method (SplayTreeMapClass, "pop", (VALUE(*)(...))sptm_pop_back,0);
//	rb_define_method (SplayTreeMapClass, "replace", (VALUE(*)(...))sptm_replace,1);
//	rb_define_method (SplayTreeMapClass, "shift", (VALUE(*)(...))sptm_pop_front,0);
//	rb_define_method (SplayTreeMapClass, "size", (VALUE(*)(...))sptm_size,0);
//	rb_define_method (SplayTreeMapClass, "to_a", (VALUE(*)(...))sptm_to_a,0);
//	rb_define_method (SplayTreeMapClass, "to_s", (VALUE(*)(...))sptm_to_s,0);
//	rb_define_method (SplayTreeMapClass, "values", (VALUE(*)(...))sptm_values,0);
	// values_at

//	rb_include_module (SplayTreeMapClass, rb_mEnumerable);
        rb_require("splaytreemap/version.rb");
}
