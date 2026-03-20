// Leia 8 números e: substitua negativos por 0

#include <stdio.h>

int main() {
  float vetor[8];

  printf("Inserindo numeros no vetor: \n");
  for(int i = 0; i < 8; i++) {
    printf("vetor[%d]: ", i);
    scanf("%f", &vetor[i]);

    if(vetor[i] < 0) vetor[i] = 0;
  }

  printf("Imprimindo valores: \n");
  for(int i = 0; i < 8; i++) {
    printf("vetor[%d]: %.2f\n", i, vetor[i]);
  }

  return 0;
}