#include <stdio.h>

// Fatorial

/*
1x2x3x4x5x....

*/

int main() {
  int number;
  int fatorial = 1;

  printf("Digite um numero: ");
  scanf("%d", &number);

  if(number == 0) printf("O fatorial de 0 = 1");

  for(int i = 1; i <= number; i++) {
    fatorial *= i;
  }

  printf("O fatorial de %d = %d", number, fatorial);

  return 0;
}