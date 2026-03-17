#include <stdio.h>

// Trocar valores usando ponteiro

int main() {
  int number1 = 3;
  int number2 = 5;

  int *ptr;
  ptr = &number1;
  *ptr = 6;

  ptr = &number2;
  *ptr = 10;

  printf("number1: %d\n", number1);
  printf("number2: %d\n", number2);

  return 0;  
}