#include <stdio.h>

// Média

int main() {
  float vetor[5] = {1.1, 2.1, 3.1, 4.1, 5.1};
  float soma = 0.0;

  for(int i = 0; i < 5; i++) {
    soma += vetor[i];
  }

  float media = (soma) / 5.0;

  printf("A media do vetor e: %.2f", media);

  return 0;
}