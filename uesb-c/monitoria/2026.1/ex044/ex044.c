// Leia matriz 3x3 e: conte quantos números são maiores que 10

#include <stdio.h>

int main() {
  int matriz[3][3];
  int maioresQue10 = 0;

  printf("Inserindo numeros na matriz: \n");
  for(int i = 0; i < 3; i++) {
    for(int j = 0; j < 3; j++) {
      printf("matriz[%d][%d]: ", i, j);
      scanf("%d", &matriz[i][j]);

      if(matriz[i][j] > 10) maioresQue10++;
    }
  }

  printf("Quantidade de numeros maiores que 10: %d", maioresQue10);

  return 0;
}