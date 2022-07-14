#include <stdio.h>

#include <arrow-glib/arrow-glib.h>
#include <arrow-glib/scalar.h>

#include "utils.h"

void example_boolean_scalar_new() {
  GArrowBooleanScalar* v1 = garrow_boolean_scalar_new((gboolean)1);
}

void main_examples_scalars() {
  print_header("Scalars");

  // boolean
  example_boolean_scalar_new();

  // integer

  printf("\n> examples scalars done!\n\n");
}
