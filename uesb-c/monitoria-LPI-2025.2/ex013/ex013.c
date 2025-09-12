#include <stdio.h>

int isOrdened(int vetor[], int tamanho) {
  if (tamanho <= 1)
    return 1;

  if (vetor[tamanho - 1] < vetor[tamanho - 2]) {
    return 0;
  }

  return isOrdened(vetor, tamanho - 1);
}

int main() {
  int vetor[] = {4, 5};
  int ordenado = isOrdened(vetor, 2);

  if (ordenado == 1) {
    printf("Ordenado\n");
  } else {
    printf("Desordenado\n");
  }

  return 0;
}