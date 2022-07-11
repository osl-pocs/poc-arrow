#include <stdio.h>

#include <arrow-glib/arrow-glib.h>
#include <arrow-glib/scalar.h>

void test_float() {
  gfloat gf1 = (gfloat)1;
  gfloat gf2 = (gfloat)2;
  gfloat gf3 = gf1 + gf2;

  printf("gf1:%f\n", gf1);
  printf("gf2:%f\n", gf2);
  printf("gf3:%f\n", gf3);

  // GArrowFloatScalar * gafs1 = garrow_float_scalar_new(gf1);
}

int main(int argc) {
  test_float();
  printf("PoC Arrow C done!\n");
  return 0;
}
