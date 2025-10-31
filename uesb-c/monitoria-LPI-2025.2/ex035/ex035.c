#include <stdio.h>

void maiorElemento(int n, int A[n][n], int *k, int *lin, int *col) {
  *k = A[0][0];
  *lin = 0;
  *col = 0;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (A[i][j] > *k) {
        *k = A[i][j];
        *lin = i;
        *col = j;
      }
    }
  }
}

int main() {
  int A[4][4] = {{1, 5, 9, 10}, {2, 50, 3, 12}, {7, 8, 6, 11}, {4, 13, 14, 15}};

  int k, lin, col;
  maiorElemento(4, A, &k, &lin, &col);

  printf("Maior: %d na posicao [%d][%d]\n", k, lin, col);

  return 0;
}
