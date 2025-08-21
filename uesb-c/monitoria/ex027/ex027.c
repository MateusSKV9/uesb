#include <stdio.h>
#include <stdlib.h>

int main() {
  float nota1 = 0, nota2 = 0, nota3 = 0;

  printf("Digite a nota 1: ");
  scanf("%f", &nota1);
  printf("Digite a nota 2: ");
  scanf("%f", &nota2);
  printf("Digite a nota 3: ");
  scanf("%f", &nota3);

  float media = (nota1 * 2 + nota2 * 3 + nota3 * 5) / (2 + 3 + 5);

  printf("\n====== RESULTADO ======\n");
  if (media >= 7) {
    printf("Aprovado - %.2f", media);
  } else if (media >= 5) {
    printf("Rcuperação - %.2f", media);
  } else {
    printf("Reprovado - %.2f", media);
  }

  return 0;
}