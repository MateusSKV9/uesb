#include <stdio.h>
#include <stdlib.h>

int isPrime(int n) {
  if (n == 2) {
    return 1;
  }

  if (n % 2 == 0 || n < 2)
    return 0;

  for (int i = 3; i * i <= n; i += 2) {
    if (n % i == 0) {
      return 0;
    }
  }

  return 1;
}

int main() {
  int number = 0, option = 0;

  do {
    printf("Digite um numero: ");
    scanf("%d", &number);

    int isPrimeNumber = isPrime(number);
    if (isPrimeNumber)
      printf("PRIMO\n");
    else
      printf("NAO PRIMO");

    printf("\n====== Menu de opcoes ======\n");
    printf("1. Tentar novamente\n");
    printf("2. Sair\n> ");
    scanf("%d", &option);
  } while (option != 2);

  return 0;
}