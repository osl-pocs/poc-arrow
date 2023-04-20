#include <stdio.h>

#include <arrow-glib/arrow-glib.h>
#include <arrow-glib/scalar.h>

#include "utils.h"

void example_boolean_scalar_new() {
  GArrowBooleanScalar* v1 = garrow_boolean_scalar_new((gboolean)1);
}

void example_i32_scalar_new() {
  gint32 myIntValue = 42;
  GArrowInt32Scalar* myIntScalar = garrow_int32_scalar_new(myIntValue);
  gint32 myIntResult = garrow_int32_scalar_get_value(myIntScalar);
  printf("The scalar integer value is: %d\n", myIntResult);
}

void example_i32_scalar_add() {
  // Create two float scalars
  GArrowFloatScalar* scalar1 = garrow_float_scalar_new(1.23);
  GArrowFloatScalar* scalar2 = garrow_float_scalar_new(4.56);

  // Get the values of the scalars
  gfloat value1 = garrow_float_scalar_get_value(scalar1);
  gfloat value2 = garrow_float_scalar_get_value(scalar2);

  // Add the two float values together
  gfloat sum = value1 + value2;

  // Create a new float scalar with the sum value
  GArrowFloatScalar* sum_scalar = garrow_float_scalar_new(sum);

  // Print the sum scalar value
  g_print("Sum scalar value: %f\n", garrow_float_scalar_get_value(sum_scalar));

  // Free memory
  g_object_unref(scalar1);
  g_object_unref(scalar2);
  g_object_unref(sum_scalar);
}

void main_examples_scalars() {
  print_header("Scalars");

  // boolean
  example_boolean_scalar_new();
  example_i32_scalar_new();
  example_i32_scalar_add();

  // integer

  printf("\n> examples scalars done!\n\n");
}
