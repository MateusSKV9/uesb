#include <stdio.h>

int main() {
  int numero1, numero2;

  printf("Digite o primeiro numero: ");
  scanf("%d", &numero1);

  printf("Digite o segundo numero: ");
  scanf("%d", &numero2);

  int aux = numero1;

  numero1 = numero2;
  numero2 = aux;

  printf("=== Valore trocados ===\n");
  printf("-> Numero 1 = %d \n", numero1);
  printf("-> Numero 2 = %d", numero2);

  return 0;
}