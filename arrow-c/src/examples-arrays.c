#include <stdio.h>

#include <arrow-glib/arrow-glib.h>

#include "utils.h"

void example_boolean_array() {
  // GArrowBooleanArrayBuilder * arr_builder =
  // garrow_boolean_array_builder_new();
}

void example_i32_array_add() {
  // ref: https://github.com/apache/arrow/blob/main/c_glib/example/build.c
  GArrowArray* array;

  GArrowInt32ArrayBuilder* builder;
  gboolean success = TRUE;
  GError* error = NULL;

  builder = garrow_int32_array_builder_new();
  if (success) {
    success = garrow_int32_array_builder_append_value(builder, 29, &error);
  }
  if (success) {
    success = garrow_int32_array_builder_append_value(builder, 2929, &error);
  }
  if (success) {
    success = garrow_int32_array_builder_append_value(builder, 292929, &error);
  }
  if (!success) {
    g_print("failed to append: %s\n", error->message);
    g_error_free(error);
    g_object_unref(builder);
    return EXIT_FAILURE;
  }
  array = garrow_array_builder_finish(GARROW_ARRAY_BUILDER(builder), &error);
  if (!array) {
    g_print("failed to finish: %s\n", error->message);
    g_error_free(error);
    g_object_unref(builder);
    return EXIT_FAILURE;
  }
  g_object_unref(builder);

  gint64 i, n;

  n = garrow_array_get_length(array);
  g_print("length: %" G_GINT64_FORMAT "\n", n);
  for (i = 0; i < n; i++) {
    gint32 value;

    value = garrow_int32_array_get_value(GARROW_INT32_ARRAY(array), i);
    g_print("array[%" G_GINT64_FORMAT "] = %d\n", i, value);
  }

  g_object_unref(array);
}

void main_examples_arrays() {
  print_header("Arrays");

  printf("\nexample_boolean_array\n");
  example_boolean_array();
  printf("\nexample_i32_array_add\n");
  example_i32_array_add();

  printf("\n> examples arrays done!\n\n");
}
