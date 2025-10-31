#include <stdio.h>

void multiplicar(int *A, int *B, int *C, int linA, int colA, int colB) {
  int i, j, k;

  for (i = 0; i < linA; i++) {
    for (j = 0; j < colB; j++) {
      *(C + i * colB + j) = 0;
      for (k = 0; k < colA; k++) {
        *(C + i * colB + j) += *(A + i * colA + k) * *(B + k * colB + j);
      }
    }
  }
}

void imprimir(int *M, int lin, int col) {
  int i, j;
  for (i = 0; i < lin; i++) {
    for (j = 0; j < col; j++) {
      printf("%4d ", *(M + i * col + j));
    }
    printf("\n");
  }
}

int main() {
  int A[2][2] = {{1, 2}, {3, 4}};
  int B[2][2] = {{5, 6}, {7, 8}};
  int C[2][2];

  multiplicar(&A[0][0], &B[0][0], &C[0][0], 2, 2, 2);

  printf("A:\n");
  imprimir(&A[0][0], 2, 2);

  printf("B:\n");
  imprimir(&B[0][0], 2, 2);

  printf("C = AxB:\n");
  imprimir(&C[0][0], 2, 2);

  return 0;
}
