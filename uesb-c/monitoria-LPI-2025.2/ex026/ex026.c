/* 4_max_matriz_recursiva.c */
#include <stdio.h>
#define N 4

// pp: ponteiro para ponteiros (linhas), n: tamanho (N)
// idx lineariza a matriz
void find_max_recursive(int **pp, int n, int idx, int *max_val, int *max_lin, int *max_col) {
  if (idx >= n * n)
    return;
  int r = idx / n;
  int c = idx % n;
  int current = *(pp[r] + c); // aritmética de ponteiros
  if (idx == 0 || current > *max_val) {
    *max_val = current;
    *max_lin = r;
    *max_col = c;
  }
  find_max_recursive(pp, n, idx + 1, max_val, max_lin, max_col);
}

int main(void) {
  static int matrix[N][N] = {{3, 5, 1, 7}, {10, -2, 15, 4}, {0, 20, 9, 2}, {8, 6, 11, 14}};
  int *rows[N];
  for (int i = 0; i < N; ++i)
    rows[i] = matrix[i];

  int max_val = 0, lin = 0, col = 0;
  find_max_recursive((int **)rows, N, 0, &max_val, &lin, &col);

  printf("4) max = %d at [%d][%d]\n", max_val, lin, col);
  return 0;
}
