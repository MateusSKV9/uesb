#include <stdio.h>

// Ponteiro para vetor

void imprimeVetores(int vetor[], int tamanho) {
  for(int i = 0; i < tamanho; i++) {
    printf("[%d]: %d\n", i, vetor[i]);
  }
}

void imprimeVetoresViaPonteiros(int *ptr, int tamanho) {
  for(int i = 0; i < tamanho; i++) {
    printf("[%d]: %d\n", i, *(ptr+i));
  }
}

int main() {
  int numerosPares[4] = {0, 2, 4, 6};
  int *ptrPar = numerosPares;

  int numerosImpares[4] = {1, 3, 5, 7};
  int *ptrImpar = numerosImpares;

  printf("Imprimindo pares:\n");
  imprimeVetores(numerosPares, 4);

  printf("Imprimindo impares:\n");
  imprimeVetores(numerosImpares, 4);

  printf("Imprimindo pares com Ponteiro:\n");
  imprimeVetoresViaPonteiros(ptrPar, 4);

  printf("Imprimindo impares com Ponteiro:\n");
  imprimeVetoresViaPonteiros(ptrImpar, 4);

  return 0;
}