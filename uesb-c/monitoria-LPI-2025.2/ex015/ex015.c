#include <stdio.h>
// 0 1 2 3 4 => tam = 5
// 0 == 4, 1 == 3
// 1 2 3 2 1

// 0 1 2
// 1 2 1

int isPalindromo(int vetor[], int tamanho, int inicio) {
  if (tamanho == 1) {
    return 1;
  }

  if (inicio >= tamanho) {
    return 1;
  }

  if (vetor[inicio] != vetor[tamanho - 1]) {
    return 0;
  }

  isPalindromo(vetor, tamanho - 1, inicio + 1);

  return 1;
}

int main() {
  int vet[] = {1};

  if (isPalindromo(vet, 1, 0) == 1) {
    printf("PALINDROMO\n");
  } else {
    printf("NAO PALINDROMO\n");
  }

  return 0;
}