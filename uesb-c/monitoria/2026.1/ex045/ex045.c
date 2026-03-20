// Leia vetor de 5 posições e: crie outro vetor com os valores ao quadrado

#include <stdio.h>

int main() {
  int vetor[5];
  int vetorQuadrado[5];

  printf("Inserindo dados no vetor: \n");
  for(int i = 0; i < 5; i++) {
    printf("vetor[%d]: ", i);
    scanf("%d", &vetor[i]);
  }

  printf("Vetor Quadrado: \n");
  for(int i = 0; i < 5; i++) {
    vetorQuadrado[i] = vetor[i] * vetor[i];
    printf("vetorQuadrado[%d]: %d\n", i, vetorQuadrado[i]);
  }

  return 0;
}