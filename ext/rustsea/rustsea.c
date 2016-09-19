#include <ruby.h>

static VALUE hello_world(VALUE mod) {
  return rb_str_new2("Hello World");
}

void Init_rustsea() {
  VALUE mRustsea = rb_define_module("Rustsea");
  rb_define_singleton_method(mRustsea, "hello_world", hello_world, 0);
}