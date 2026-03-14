#include <stdio.h>
#include <stdlib.h>

int main() {
  int length = 0;
  printf("Digite o tamanho do vetor: ");
  scanf("%d", &length);

  int vetor[length], i = 0;

  for (i = 0; i < length; i++) {
    printf("vetor[%d]: ", i);
    scanf("%d", &vetor[i]);
  }

  int cont = 0, newlength = 0, result = -1;

  i = 0;
  while (result != 0) {
    result = 0;

    for (i = 0; i < length - 1; i++) {
      if (vetor[i] > vetor[i + 1]) {
        int aux = vetor[i];
        vetor[i] = vetor[i + 1];
        vetor[i + 1] = aux;
        result++;
      }
    }
  }

  printf("\n");

  i = 0;
  while (i < length - 1) {
    if (vetor[i] != vetor[i + 1]) {
      newlength++;
    }
    i++;
  }

  newlength++;

  int newVetor[newlength];
  i = 0;

  while (i < length - 1) {
    if (vetor[i] != vetor[i + 1]) {
      newVetor[cont] = vetor[i];
      cont++;
    }
    i++;
  }
  newVetor[cont] = vetor[i];

  printf("Vetor: \n");
  for (i = 0; i < length; i++) {
    printf(" %d ", vetor[i]);
  }

  printf("\n");

  printf("Newvetor: \n");
  for (i = 0; i < newlength; i++) {
    printf(" %d ", newVetor[i]);
  }

  return 0;
}