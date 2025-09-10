#include <stdio.h>

int main() {
  int numero;

  printf("Digite um numero de 3 algarismos: ");
  scanf("%d", &numero);

  int unidade = numero % 10;
  numero /= 10;
  int dezena = numero % 10;
  numero /= 10;
  int centena = numero % 10;

  printf("Unidade: %d\n", unidade);
  printf("Dezena: %d\n", dezena);
  printf("Centena: %d\n", centena);

  return 0;
}