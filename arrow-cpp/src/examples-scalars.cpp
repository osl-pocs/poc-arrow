#include <arrow/scalar.h>
#include "utils.h"

void example_scalar_bool() {
  arrow::BooleanScalar v1 = arrow::BooleanScalar(1);
  arrow::BooleanScalar v2 = arrow::BooleanScalar(0);

  printf("\nexample_boolean\n");
  printf("v1    : %i\n", v1.value);
  printf("v2    : %i\n", v2.value);
  printf("v1||v2: %i\n", v1.value || v2.value);
  printf("v1&&v2: %i\n", v1.value && v2.value);
}

int example_scalars() {
  print_header((char*)"CPP-SCALARS");

  example_scalar_bool();
  return 0;
}
