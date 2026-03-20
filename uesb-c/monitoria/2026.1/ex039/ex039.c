// Crie uma função que: recebe vetor. retorna o maior valor

#include <stdio.h>

float maiorValor(float vetor[], int tamanho) {
  float maior = vetor[0];

  for(int i = 0; i < tamanho; i++) {
    if(vetor[i] > maior) maior = vetor[i];
  }

  return maior;
}

int main() {
  int tamanho;

  printf("Digite o tamanho do vetor: ");
  scanf("%d", &tamanho);

  float numeros[tamanho];

  printf("Inserindo numeros no vetor: \n");
  for(int i = 0; i < tamanho; i++) {
    printf("vetor[%d]: ", i);
    scanf("%f", &numeros[i]);
  }

  float maiorNumero = maiorValor(numeros, tamanho);
  printf("O maior valor do vetor e: %.2f", maiorNumero);

  return 0;
}