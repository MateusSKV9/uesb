/*
  A sequencia de Collatz diz o seguinte:

  Se o número for PAR, então divida-o por 2, ou seja, N/2
  Se o número for ÍMPAR, ENTÃO multiplique-o por 3 e some 1, ou seja, 3N + 1

            (6)/2   3*(3)+1  (10)/2   3(5)+1  (16)/2  (8)/2   (4)/2   (2)/2
  Ex.: 6  ->  3   ->  10  ->   5   ->   16  ->  8  ->   4  ->   2   ->  1
*/

#include <stdio.h>

void sequenciaCollatz(int num) {
  // Caso base: sempre que chegar no número 1 (toda sequencia de Collatz termina quando no 1)
  if (num == 1) {
    // Imprime o número 1 antes de parar a função
    printf("%d", num);
    return;
  }

  // Imprime o número da sequencia
  printf("%d -> ", num);

  // Verifica se o número da sequencia é PAR
  if (num % 2 == 0) {
    // Como é PAR, recursivamente, chama a função passando a metade do número (N/2)
    sequenciaCollatz((num / 2));
  } else {
    // Caso em que o número da sequencia é ÍMPAR
    // Chama, recursivamente, a função passando o triplo do número somado a 1 (3N + 1)
    sequenciaCollatz((3 * (num) + 1));
  }
}

int main() {
  // Declara o número
  int numero;

  // Ler o número digitado pelo usuário
  printf("Digite um numero: ");
  scanf("%d", &numero);

  printf("==> Sequencia de Collatz: \n");
  // Chama a função da sequencia de Collatz passando o número lido
  sequenciaCollatz(numero);

  return 0;
}