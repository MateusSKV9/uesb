#include <stdio.h>

// Soma de 1 a N

int main() {
  int n;
  int soma = 0;

  printf("Digite um numero: ");
  scanf("%d", &n);

  if(n <= 0) {
    printf("O numero precisa ser maior ou igual a 1\n");
    return 0;
  }

  for(int i = 1; i <= n; i++) {
    soma += i;
  }

  printf("A soma de 1 a %d resulta em: %d", n, soma);

  return 0;
}