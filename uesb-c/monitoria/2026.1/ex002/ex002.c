#include <stdio.h>

// Verificar maior entre 3 números

int main() {
  int a, b, c;
  int max;

  printf("Digite o primeiro numero: ");
  scanf("%d", &a);
  printf("Digite o segundo numero: ");
  scanf("%d", &b);
  printf("Digite o terceiro numero: ");
  scanf("%d", &c);

  max = a;
  if (b > max)
    max = b;
  if (c > max)
    max = c;

  printf("O maior numero e: %d", max);

  return 0;
}