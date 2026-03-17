#include <stdio.h>

// Imprimir endereço de variável

int main() {
  int number = 10;
  printf("number: %d\n", number);
  printf("&number: %p\n", &number);

  int *ptr = &number;
  printf("ptr: %p\n", ptr);
  printf("*ptr: %d\n", *ptr);
  printf("&ptr: %d\n", &ptr);

  *ptr = 15;
  printf("Alterando number com ptr: %d\n", number);

  return 0;
}