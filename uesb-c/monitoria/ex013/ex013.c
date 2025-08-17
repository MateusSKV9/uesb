#include <stdio.h>
#include <stdlib.h>

int main() {
  int length = 0;

  printf("Digite o tamanho do array: ");
  scanf("%d", &length);

  int vetor1[length], vetor2[length], vetor3[length];

  printf("\n====== Vetor1 ======\n");
  for (int i = 0; i < length; i++) {
    printf("vetor1[%d]: ", i);
    scanf("%d", &vetor1[i]);
  }

  printf("\n====== Vetor2 ======\n");
  for (int i = 0; i < length; i++) {
    printf("vetor2[%d]: ", i);
    scanf("%d", &vetor2[i]);
  }

  printf("\n====== VetorResultante ======\n");
  for (int i = 0; i < length; i++) {
    vetor3[i] = vetor1[i] + vetor2[i];
    printf("vetor3[%d]: %d\n", i, vetor3[i]);
  }

  return 0;
}