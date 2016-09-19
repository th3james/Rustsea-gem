#include <ruby.h>

extern char *get_cell_value();

VALUE cget_cell_value(VALUE mod) {
  const char * val = get_cell_value();

  return rb_str_new_cstr(val);
};

static VALUE hello_world(VALUE mod) {
  return rb_str_new2("Hello World");
}

void Init_rustsea() {
  VALUE mRustsea = rb_define_module("Rustsea");
  rb_define_singleton_method(mRustsea, "hello_world", cget_cell_value, 0);
}
