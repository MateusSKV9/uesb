#include <stdio.h>
#include <stdlib.h>

int fatorial(int n) {
  if (n == 1 || n == 0)
    return 1;

  return n * fatorial(n - 1);
}

int main() {
  int option = 0;
  int number;

  do {
    printf("Digite um numero: ");
    scanf("%d", &number);

    int fatorialNumber = fatorial(number);

    printf("O fatorial de %d e %d\n", number, fatorialNumber);

    printf("====== Menu de opcoes ======\n");
    printf("1. Novo numero\n");
    printf("2. Sair\n> ");
    scanf("%d", &option);
  } while (option != 2);

  return 0;
}