#include <stdio.h>
// 0 1 2 3

// 2 3 1 (3)
// 2 3 (2)
// 2 (1)

// m = 2

int contador(int vetor[], int tamanho) {

  if (tamanho == 1)
    return vetor[0];

  int maiorNumero = contador(vetor, tamanho - 1);

  if (vetor[tamanho - 1] > maiorNumero) {
    return vetor[tamanho - 1];
  } else {
    return maiorNumero;
  }
}

int main() {
  int vetorA[] = {1, 2, 3, 3, 5, 3, 4, 6, 23};

  printf("Maior numero: %d", contador(vetorA, 9));

  return 0;
}