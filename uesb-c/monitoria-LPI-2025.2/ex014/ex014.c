#include <stdio.h>

int sum(int vetor[], int tamanho) {
  if (tamanho == 0)
    return vetor[0];

  int total = sum(vetor, tamanho - 1);

  if (tamanho % 2 == 0) {
    total += vetor[tamanho];
  }

  return total;
}

int main() {
  int vet[] = {10, 20, 30, 40, 50};

  int soma = 0;
  soma = sum(vet, 5);
  printf("Soma: %d", soma);

  return 0;
}