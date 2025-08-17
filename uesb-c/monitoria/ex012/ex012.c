#include <stdio.h>
#include <stdlib.h>
// 1-1 2-1 3-2 4-3

int fibonacci(int pos) {
  if (pos == 1 || pos == 2)
    return 1;

  return fibonacci(pos - 1) + fibonacci(pos - 2);
}

int main() {
  int pos = 0, option = 0;

  do {
    printf("Digite qual numero de fibonacci voce quer: ");
    scanf("%d", &pos);
    int result = fibonacci(pos);

    printf("O numero de posicao %d e: %d", pos, result);

    printf("\n====== Menu de opcoes ======\n");
    printf("1. Nova pesquisa\n");
    printf("2. Sair\n> ");
    scanf("%d", &option);
  } while (option != 2);

  return 0;
}