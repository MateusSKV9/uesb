#include <stdio.h>
#include <stdlib.h>

int main() {
  int number = 0, total = 0;

  printf("Digite um numero: ");
  scanf("%d", &number);

  while (number > 0) {
    total += number % 10;
    number /= 10;
  }

  printf("---> Soma dos dígitos: %d", total);

  return 0;
}