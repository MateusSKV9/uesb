#include <stdio.h>

// Alterar valor usando ponteiro

int main() {
  int number = 1;

  int *ptr = &number;

  *ptr = 5;
  printf("number: %d\n", number);

  return 0;
}