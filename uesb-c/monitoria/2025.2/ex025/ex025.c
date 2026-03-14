#include <stdio.h>
#include <stdlib.h>

int main() {
  int matrix1[3][3], matrix2[3][3], matrixSum[3][3];

  printf("\nMatriz 1 - Prenchimento\n");
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      printf("matrix1[%d][%d]: ", i, j);
      scanf("%d", &matrix1[i][j]);
    }
  }

  printf("\nMatriz 2 - Prenchimento\n");
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      printf("matrix2[%d][%d]: ", i, j);
      scanf("%d", &matrix2[i][j]);
    }
  }

  printf("\n====== Matriz 1 ======\n");
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      printf(" %d ", matrix1[i][j]);
    }
    printf("\n");
  }
  printf("\n====== Matriz 2 ======\n");
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      printf(" %d ", matrix2[i][j]);
    }
    printf("\n");
  }

  printf("\n====== Matriz Soma ======\n");
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      matrixSum[i][j] = matrix1[i][j] + matrix2[i][j];
      printf(" %d ", matrixSum[i][j]);
    }
    printf("\n");
  }

  return 0;
}