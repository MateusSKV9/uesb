// Leia uma matriz 3x3 e: mostre a soma da diagonal principal

int main() {
  float matriz[3][3];
  float soma = 0.0;

  printf("Inserindo numeros na matriz: \n");
  for(int i = 0; i < 3; i++) {
    for(int j = 0; j < 3; j++) {
      printf("matriz[%d][%d]: ", i, j);
      scanf("%f", &matriz[i][j]);

      if(i == j) soma += matriz[i][j];
    }
  }

  printf("Soma da diagonal principal: %.2f", soma);

  return 0;
}