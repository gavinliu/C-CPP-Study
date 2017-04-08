
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  printf("%s\n", "Hello, World!");
  printf("int 占 %zu 个字节\n", sizeof(int));

  for (size_t i = 0; i < 10; i++) {
    printf("%zu,", i);
  }

  printf("\n");

  // int i;
  // scanf("%d", &i);
  // printf("%d\n", i);

  int i = 0;
  int* p = &i;

  printf("%d\n", *p);
  printf("%p\n", p);

  printf("%d\n", i);
  *p = 200;
  printf("%d\n", i);

  return 0;
}
