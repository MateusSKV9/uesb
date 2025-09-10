#include <stdio.h>

int main() {
  float nota1, nota2, peso1, peso2;

  // Nota 1

  printf("Digite a nota 1: ");
  scanf("%f", &nota1);

  printf("Digite o peso da nota 1: ");
  scanf("%f", &peso1);

  // Nota 2

  printf("Digite a nota 2: ");
  scanf("%f", &nota2);

  printf("Digite o peso da nota 2: ");
  scanf("%f", &peso2);

  // Media

  float media = (nota1 * peso1 + nota2 * peso2) / (peso1 + peso2);

  printf("A media das notas e: %.2f", media);

  return 0;
}