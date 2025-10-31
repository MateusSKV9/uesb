/* 2_preencher_matriz_recursivo.c */
#include <stdio.h>

#define R 5
#define C 5

// preenche a matriz recursivamente usando int **pp
void fill_matrix_recursive(int **pp, int rows, int cols, int idx, int *value) {
  if (idx >= rows * cols)
    return; // caso base
  int r = idx / cols;
  int c = idx % cols;
  pp[r][c] = (*value)++;
  fill_matrix_recursive(pp, rows, cols, idx + 1, value);
}

int main(void) {
  static int matrix[R][C]; // matriz estática
  int *rows[R];
  for (int i = 0; i < R; ++i)
    rows[i] = matrix[i]; // cada rows[i] aponta para matrix[i]

  int start = 1;
  fill_matrix_recursive((int **)rows, R, C, 0, &start);

  printf("2) Matriz 5x5 preenchida:\n");
  for (int i = 0; i < R; ++i) {
    for (int j = 0; j < C; ++j)
      printf("%4d", matrix[i][j]);
    printf("\n");
  }
  // comentário: pp (rows) facilita acesso como pp[r][c] = ... porque cada linha é um ponteiro
  return 0;
}
