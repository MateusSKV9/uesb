#include <stdio.h>

int main() {
  char xc[4];
  int xi[4];
  float xf[4];
  double xd[4];

  printf("char:\n");
  printf("%p %p %p\n", (void *)(xc + 1), (void *)(xc + 2), (void *)(xc + 3));

  printf("int:\n");
  printf("%p %p %p\n", (void *)(xi + 1), (void *)(xi + 2), (void *)(xi + 3));

  printf("float:\n");
  printf("%p %p %p\n", (void *)(xf + 1), (void *)(xf + 2), (void *)(xf + 3));

  printf("double:\n");
  printf("%p %p %p\n", (void *)(xd + 1), (void *)(xd + 2), (void *)(xd + 3));

  return 0;
}
