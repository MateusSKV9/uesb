#include <stdio.h>
// 1
// 1 3 3 2 3
// 1 3 3 2
// 1 3 3
// 1 3 (2)
// 1 (1)

int contador(int vetor[], int tamanho, int valor) {
  if (tamanho == 1) {
    if (vetor[0] == valor) {
      return 1;
    } else {
      return 0;
    }
  }

  int cont = contador(vetor, tamanho - 1, valor);

  if (vetor[tamanho - 1] == valor) {
    return ++cont;
  } else {
    return cont;
  }
}

int main() {
  int vetorA[] = {3, 2, 3, 3, 5, 3, 9, 3, 3, 3};

  int number = 3;

  printf("Quantas vezes o %d aparece: %d", number, contador(vetorA, 10, number));

  return 0;
}