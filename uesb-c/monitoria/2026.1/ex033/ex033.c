// Leia um número e informe: par ou ímpar

#include <stdio.h>

int main() {
  int numero;

  printf("Digite um numero: ");
  scanf("%d", &numero);

  if(numero % 2 == 0) printf("Numero %d e par\n", numero);
  else printf("Numero %d e impar\n", numero);

  return 0;
}