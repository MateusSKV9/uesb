#include <stdio.h>

// 1 2 3 4 (4)
// 1 2 3 (3)
// 1 2 (2)
// 1 (1)

int funcPares(int vetor[], int tamanho) {
  if (tamanho == 0) {
    return 0;
  }

  int totalPares = funcPares(vetor, tamanho - 1);

  if (vetor[tamanho - 1] % 2 == 0) {
    return ++totalPares;
  }

  return totalPares;
}

int main() {
  int vetorNum[] = {0, 2, 4, 8, 16, 32, 1, 3, 5, 7};

  int quantidadePares = funcPares(vetorNum, 10);

  printf("Quantidade de numeros pares: %d \n", quantidadePares);

  return 0;
}