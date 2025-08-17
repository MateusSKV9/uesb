#include <stdio.h>
#include <stdlib.h>

int main() {
  int matriz[4][4], total = 0;

  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      printf("matriz[%d][%d]: ", i, j);
      scanf("%d", &matriz[i][j]);

      if (i == j)
        total += matriz[i][j];
    }
  }

  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      printf(" %d ", matriz[i][j]);
    }
    printf("\n");
  }

  printf("Soma dos elementos da diagonal principal: %d", total);

  return 0;
}