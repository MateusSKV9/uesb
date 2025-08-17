#include <stdio.h>
#include <stdlib.h>

int main() {
  int matriz[3][3], matrizTransport[3][3];

  printf("\nMatriz normal\n");
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      printf("Digite o termo [%d][%d]: ", i + 1, j + 1);
      scanf("%d", &matriz[i][j]);
    }
  }

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      printf(" %d ", matriz[i][j]);
    }
    printf("\n");
  }

  printf("\nMatriz transposta\n");

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      matrizTransport[i][j] = matriz[j][i];
    }
  }

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      printf(" %d ", matrizTransport[i][j]);
    }
    printf("\n");
  }

  return 0;
}