#include <stdio.h>

// Ler número e dizer se é par ou ímpar

int main() {
  int number = 0;

  printf("Digite um numero: ");
  scanf("%d", &number);

  if (number % 2 == 0)
    printf("O numero %d e par", number);
  else
    printf("O numero %d e impar", number);

  return 0;
}