#include <stdio.h>

// Calcular média de 3 notas

int main() {
  float nota1, nota2, nota3;
  float media = 0.0;

  printf("Digite a nota 1: ");
  scanf("%f", &nota1);
  printf("Digite a nota 2: ");
  scanf("%f", &nota2);
  printf("Digite a nota 3: ");
  scanf("%f", &nota3);

  media = ((float)(nota1 + nota2 + nota3)) / (3);

  printf("A media das notas e: %.2f", media);

  return 0;
}
