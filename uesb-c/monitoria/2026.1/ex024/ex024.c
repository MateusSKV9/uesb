#include <stdio.h>

// Função fatorial

int fatorialFn(int n) {
  if(n == 0 || n == 1) return 1;
  return n * fatorialFn(n - 1);
}

int main() {
  int number;

  printf("Digite um numero: ");
  scanf("%d", &number);

  if(number < 0) {
    printf("Digite um numero maior ou igual a 0.");
    return 0;
  }

  int fatorial = fatorialFn(number);
  printf("O fatorial de %d resulta em %d", number, fatorial);
}