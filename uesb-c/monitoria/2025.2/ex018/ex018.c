#include <stdio.h>
#include <stdlib.h>

int main() {
  int number = 0;

  printf("Digite um numero binario: ");
  scanf("%d", &number);

    int decimal = 0;
  int pot2 = 1;
  while (number > 0) {
    int alg = number % 10;
    number = number / 10;
    
    decimal += alg * pot2;
    pot2 *= 2;
  }

  printf("Decimla: %d", decimal);

  return 0;
}