#include <stdio.h>

// Soma usando ponteiros

int main() {
  int a = 1;
  int b = 2;

  int *ptr = &a;
  *ptr = *ptr * 10;

  ptr = &b;
  *ptr *= 10;

  int c;
  ptr = &c;

  *ptr = a + b;

  printf("a: %d\n", a);
  printf("b: %d\n", b);
  printf("c: %d\n", c);

  return 0;
}