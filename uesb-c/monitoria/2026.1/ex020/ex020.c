#include <stdio.h>

// Função que calcula média

float calculaMedia(float nota1, float nota2, float nota3) {
  float soma = nota1 + nota2 + nota3;
  float media = soma / 3.0;
  return media;
}

int main() {  
  float nota1, nota2, nota3;

  printf("Digite a nota1: ");
  scanf("%f", &nota1);
  printf("Digite a nota2: ");
  scanf("%f", &nota2);
  printf("Digite a nota3: ");
  scanf("%f", &nota3);

  float media = calculaMedia(nota1, nota2, nota3);
  printf("A media das notas e: %.2f", media);

  return 0;
}