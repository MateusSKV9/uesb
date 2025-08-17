#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int isPrimo(int num) {
  if (num == 2)
    return 1;

  if (num == 1 || num % 2 == 0 || num <= 0)
    return 0;

  for (int i = 3; i <= sqrt(num); i += 2) {
    if (num % i == 0)
      return 0;
  }

  return 1;
}

int main() {
  int num = 0, option = 0;

  do {
    printf("Digite um numero: ");
    scanf("%d", &num);

    if (!isPrimo(num))
      printf("Nao e primo\n");
    else
      printf("Primo\n");

    printf("\n====== Menu de opcoes ======\n");
    printf("1. Inserir novo numero\n");
    printf("2. Sair\n> ");
    scanf("%d", &option);
  } while (option != 2);

  return 0;
}