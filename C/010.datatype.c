
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char const *argv[]) {
  printf("%s\n", "Hello, World!");
  printf("int 占 %zu 个字节\n", sizeof(int));

  for (size_t i = 0; i < 10; i++) {
    printf("%zu,", i);
  }

  printf("\n");


  printf("char 占 %zu 个字节\n", sizeof(char));
  printf("short 占 %zu 个字节\n", sizeof(short));
  printf("int 占 %zu 个字节\n", sizeof(int));
  printf("long 占 %zu 个字节\n", sizeof(long));
  printf("float 占 %zu 个字节\n", sizeof(float));
  printf("double 占 %zu 个字节\n", sizeof(double));

  char c = -1;
  printf("%d\n", c);

  int i = 012;
  int j = 0x12;

  printf("i=0%o,j=%x\n", i, j);

  float f = 1.123f;
  float ff = 2.123f;
  float sum = f + ff;
  double offset = fabs(sum - 3.246f);
  printf("offset = %.10lf\n", offset);

  if (fabs(sum - 3.246f) < 1e-8) {
      printf("相等\n");
  } else {
      printf("不相等 sum=%.10f, sum=%f\n", sum, sum);
  }

  return 0;
}
