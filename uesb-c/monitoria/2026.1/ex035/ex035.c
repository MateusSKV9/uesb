// Leia uma matriz 2x2 e mostre a soma dos elementos.

#include <stdio.h>

int main() {
  float matriz[2][2];
  float soma = 0.0;

  printf("Inserindo numeros na matriz:\n");
  for(int i = 0; i < 2; i++) {
    for(int j = 0; j < 2; j++) {
      printf("matriz[%d][%d]: ", i, j);
      scanf("%f", &matriz[i][j]);
      soma += matriz[i][j];
    }
  }

  printf("A soma dos elementos da matriz e: %.2f", soma);

  return 0;
}