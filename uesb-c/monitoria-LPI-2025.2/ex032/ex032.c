#include <stdio.h>

int main() {
  int matrix[100][100];
  int *p = &matrix[0][0]; // Ponteiro para o primeiro elemento
  int i;

  // Inicializa com zeros usando ponteiro
  for (i = 0; i < 10000; i++) {
    *(p + i) = 0;
  }

  // Preenche com 1 a 10000 usando ponteiro
  for (i = 0; i < 10000; i++) {
    *(p + i) = i + 1;
  }

  // Apenas exemplo de impressão de alguns elementos
  printf("%d %d %d\n", matrix[0][0], matrix[0][1], matrix[99][99]);

  return 0;
}
