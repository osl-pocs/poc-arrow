#include <stdio.h>

#include <arrow-glib/arrow-glib.h>

#include "utils.h"

void example_boolean() {
  gboolean v1 = (gboolean)1;
  gboolean v2 = (gboolean)0;

  printf("\nexample_boolean\n");
  printf("v1    : %i\n", v1);
  printf("v2    : %i\n", v2);
  printf("v1||v2: %i\n", v1 || v2);
  printf("v1&&v2: %i\n", v1 && v2);
}

void example_int8() {
  gint8 v1 = (gint8)1;
  gint8 v2 = (gint8)2;

  printf("\nexample_int8\n");
  printf("v1   : %i\n", v1);
  printf("v2   : %i\n", v2);
  printf("v1+v2: %i\n", v1 + v2);
  printf("v1-v2: %i\n", v1 - v2);
  printf("v1*v2: %i\n", v1 * v2);
  printf("v2/v1: %i\n", v2 / v1);
}

void example_uint8() {
  guint8 v1 = (guint8)1;
  guint8 v2 = (guint8)2;

  printf("\nexample_uint8\n");
  printf("v1   : %u\n", v1);
  printf("v2   : %u\n", v2);
  printf("v1+v2: %u\n", v1 + v2);
  printf("v2-v1: %u\n", v2 - v1);
  printf("v1*v2: %u\n", v1 * v2);
  printf("v2/v1: %u\n", v2 / v1);
}

void example_int16() {
  gint16 v1 = (gint16)1;
  gint16 v2 = (gint16)2;

  printf("\nexample_int16\n");
  printf("v1   : %i\n", v1);
  printf("v2   : %i\n", v2);
  printf("v1+v2: %i\n", v1 + v2);
  printf("v1-v2: %i\n", v1 - v2);
  printf("v1*v2: %i\n", v1 * v2);
  printf("v2/v1: %i\n", v2 / v1);
}

void example_uint16() {
  guint16 v1 = (guint16)1;
  guint16 v2 = (guint16)2;

  printf("\nexample_uint16\n");
  printf("v1   : %u\n", v1);
  printf("v2   : %u\n", v2);
  printf("v1+v2: %u\n", v1 + v2);
  printf("v2-v1: %u\n", v2 - v1);
  printf("v1*v2: %u\n", v1 * v2);
  printf("v2/v1: %u\n", v2 / v1);
}

void example_int32() {
  gint32 v1 = (gint32)1;
  gint32 v2 = (gint32)2;

  printf("\nexample_int32\n");
  printf("v1   : %i\n", v1);
  printf("v2   : %i\n", v2);
  printf("v1+v2: %i\n", v1 + v2);
  printf("v1-v2: %i\n", v1 - v2);
  printf("v1*v2: %i\n", v1 * v2);
  printf("v2/v1: %i\n", v2 / v1);
}

void example_uint32() {
  guint32 v1 = (guint32)1;
  guint32 v2 = (guint32)2;

  printf("\nexample_uint32\n");
  printf("v1   : %u\n", v1);
  printf("v2   : %u\n", v2);
  printf("v1+v2: %u\n", v1 + v2);
  printf("v2-v1: %u\n", v2 - v1);
  printf("v1*v2: %u\n", v1 * v2);
  printf("v2/v1: %u\n", v2 / v1);
}

void example_int64() {
  gint64 v1 = (gint64)1;
  gint64 v2 = (gint64)2;

  printf("\nexample_int64\n");
  printf("v1   : %i\n", v1);
  printf("v2   : %i\n", v2);
  printf("v1+v2: %i\n", v1 + v2);
  printf("v1-v2: %i\n", v1 - v2);
  printf("v1*v2: %i\n", v1 * v2);
  printf("v2/v1: %i\n", v2 / v1);
}

void example_uint64() {
  guint64 v1 = (guint64)1;
  guint64 v2 = (guint64)2;

  printf("\nexample_uint64\n");
  printf("v1   : %u\n", v1);
  printf("v2   : %u\n", v2);
  printf("v1+v2: %u\n", v1 + v2);
  printf("v2-v1: %u\n", v2 - v1);
  printf("v1*v2: %u\n", v1 * v2);
  printf("v2/v1: %u\n", v2 / v1);
}

void example_float() {
  gfloat v1 = (gfloat)1;
  gfloat v2 = (gfloat)2;

  printf("\nexample_float\n");
  printf("v1   : %f\n", v1);
  printf("v2   : %f\n", v2);
  printf("v1+v2: %f\n", v1 + v2);
  printf("v1-v2: %f\n", v1 - v2);
  printf("v1*v2: %f\n", v1 * v2);
  printf("v2/v1: %f\n", v2 / v1);
}

void example_double() {
  gdouble v1 = (gdouble)1;
  gdouble v2 = (gdouble)2;

  printf("\nexample_double\n");
  printf("v1   : %f\n", v1);
  printf("v2   : %f\n", v2);
  printf("v1+v2: %f\n", v1 + v2);
  printf("v1-v2: %f\n", v1 - v2);
  printf("v1*v2: %f\n", v1 * v2);
  printf("v2/v1: %f\n", v2 / v1);
}

void main_examples_values() {
  print_header("Values");

  // bool
  example_boolean();

  // integer
  example_int8();
  example_uint8();
  example_int16();
  example_uint16();
  example_int32();
  example_uint32();
  example_int64();
  example_uint64();

  // float
  example_float();
  example_double();

  printf("\n> examples values done!\n\n");
}
