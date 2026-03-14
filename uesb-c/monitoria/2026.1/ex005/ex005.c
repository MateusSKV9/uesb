#include <stdio.h>

// Verificar se aluno foi aprovado

int main() {
  float nota1, nota2, nota3;

  printf("Digite a nota 1: ");
  scanf("%f", &nota1);
  printf("Digite a nota 2: ");
  scanf("%f", &nota2);
  printf("Digite a nota 3: ");
  scanf("%f", &nota3);

  float media = ((float)(nota1 + nota2 + nota3)) / (3);

  if (media >= 7.0)
    printf("O aluno foi aprovado com media %.2f!", media);
  else if (media >= 5.0)
    printf("O aluno esta em recuperacao com media %.2f!", media);
  else
    printf("O aluno foi reprovado com media %.2f!", media);

  return 0;
}