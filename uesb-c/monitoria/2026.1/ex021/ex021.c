#include <stdio.h>

// Função que calcula média

float calculaMedia(float vetor[], int tamanho) {
  float soma = 0.0;

  for(int i = 0; i < tamanho; i++) {
    soma += vetor[i];
  }

  float media = ((float) soma)/(tamanho);
  return media;
}

int main() {
  int tamanho;

  printf("Digite a quantidade de notas: ");
  scanf("%d", &tamanho);

  float notas[tamanho];

  for(int i = 0; i < tamanho; i++) {
    printf("Nota %d: ", (i+1));
    scanf("%f", &notas[i]);
  }

  float media = calculaMedia(notas, tamanho);

  printf("A media das notas e: %.2f", media);

  return 0;
}