#include <stdio.h>
#include <stdlib.h>

int fatorial(int n) {
  if (n == 1 || n == 0)
    return 1;

  return n * fatorial(n - 1);
}

int main() {
  int number = 0;

  printf("Digite um numero: ");
  scanf("%d", &number);

  if (number < 0) {
    printf("Precisa ser maior ou igual a 0\n");
  } else {
    int fatorialNumber = fatorial(number);
    printf("O fatorial de %d e: %d", number, fatorialNumber);
  }

  return 0;
}