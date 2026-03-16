#include <stdio.h>

// Função maior número

float maiorNumero(float numeros[], int tamanho) {
  float maior = numeros[0];

  for(int i = 0; i < tamanho; i++) {
    if(numeros[i] > maior) maior = numeros[i];
  }

  return maior;
}

int main() {
  int tamanho;

  printf("Digite a quantidade numeros: ");
  scanf("%d", &tamanho);

  float numeros[tamanho];

  for(int i = 0; i < tamanho; i++) {
    printf("Digite um numero: ");
    scanf("%f", &numeros[i]);
  }

  float maior = maiorNumero(numeros, tamanho);
  printf("O maior numero e: %.2f", maior);

  return 0;
}