#include <stdio.h>
#include <stdlib.h>

// 3 2 1
// 2 3 1
// 2 1 3
// 1 2 3

int main() {
  int vetor[10] = {9, 3, 7, 1, 5, 0, 8, 2, 6, 4};
  int i = 0, ordened = -1;

  while (ordened != 0) {
    ordened = 0;

    for (int i = 0; i < 9; i++) {
      if (vetor[i] > vetor[i + 1]) {
        int aux = vetor[i];
        vetor[i] = vetor[i + 1];
        vetor[i + 1] = aux;
        ordened++;
      }
    }
  }

  for (i = 0; i < 10; i++) {
    printf("vetor[%d]: %d\n", i, vetor[i]);
  }

  return 0;
}