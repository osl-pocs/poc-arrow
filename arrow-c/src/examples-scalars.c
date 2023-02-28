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

void main_examples_scalars() {
  print_header("Scalars");

  // boolean
  example_boolean_scalar_new();
  example_i32_scalar_new();

  // integer

  printf("\n> examples scalars done!\n\n");
}
