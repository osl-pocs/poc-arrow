#include <stdio.h>
#include "examples-arrays.h"
#include "examples-scalars.h"
#include "examples-values.h"

#define PROJECT_NAME "arrow-c"

int main(int argc) {
  main_examples_values();
  main_examples_scalars();
  main_examples_arrays();

  printf("PoC Arrow C done!\n");
  return 0;
}
