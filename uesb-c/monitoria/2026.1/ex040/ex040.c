// Crie uma função que: recebe matriz 2x2. retorna soma total

#include <stdio.h>

float somaTotal(float matriz[][2], int linhas, int colunas) {
  float soma = 0.0;

  for(int i = 0; i < linhas; i++) {
    for(int j = 0; j < colunas; j++) {
      soma += matriz[i][j];
    }
  }

  return soma;
}

int main() {
  float matriz[2][2];

  printf("Inserindo dados na matriz: \n");
  for(int i = 0; i < 2; i++) {
    for(int j = 0; j < 2; j++) {
      printf("matriz[%d][%d]: ", i, j);
      scanf("%f", &matriz[i][j]);
    }
  }

  float soma = somaTotal(matriz, 2, 2);
  printf("Soma total: %.2f", soma);

  return 0;
}