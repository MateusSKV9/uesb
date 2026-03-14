#include <stdio.h>

// Fatorial com recursividade
// 3 x 2!
// 3 x 2 x 1!
// 3 x 2 x 1

int fatorialFn(int n) {
  if(n == 0 || n == 1) return 1;

  return n * fatorialFn(n - 1);
}

int main() {
  int number;
  int fatorial;

  printf("Digite um numero: ");
  scanf("%d", &number);

  if(number < 0) {
    printf("Apenax numeros maiores ou iguais a 0!");
    return 0;
  }

  fatorial = fatorialFn(number);

  printf("O fatorial de %d = %d", number, fatorial);

  return 0;
}