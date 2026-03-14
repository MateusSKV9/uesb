#include <stdio.h>

// Contar números pares

int main() {
  int n;
  int evenQtt = 0;

  printf("Digite um numero: ");
  scanf("%d", &n);

  for(int i = 1; i <= n; i++) {
    if(i % 2 == 0) evenQtt++;
  }

  printf("De 1 a %d existem %d numeros pares", n, evenQtt);

  return 0;
}