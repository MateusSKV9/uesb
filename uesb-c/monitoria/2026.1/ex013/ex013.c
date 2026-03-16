#include <stdio.h>

// Maior número do vetor

int main() {
  int length;

  printf("Digite o tamanho do vetor: ");
  scanf("%d", &length);

  float vetor[length];

  printf("inserindo numeros no vetor.\n");

  for(int i = 0; i < length; i++) {
    printf("vetor[%d]: ", i);
    scanf("%f", &vetor[i]);
  }

  printf("Os numeros dos vetor sao: ");
  float max = vetor[0];

  for(int i = 0; i < length; i++) {
    printf(" %.2f ", vetor[i]);

    if(vetor[i] > max) max = vetor[i];
  }

  printf("\nO maior valor e: %.2f", max);

  return 0;
}