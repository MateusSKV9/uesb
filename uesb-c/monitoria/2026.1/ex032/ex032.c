#include <stdio.h>

/*
ler vetor
calcular média
mostrar maior valor
usar função
*/

float maiorValor(float vetor[], int tamanho){
  float maior = vetor[0];

  for(int i = 0; i < tamanho; i++) {
    if(vetor[i] > maior) maior = vetor[i];
  }

  return maior;
}

float mediaFn(float vetor[], int tamanho) {
  float soma = 0.0;

  for(int i = 0; i < tamanho; i++) {
    soma += vetor[i];
  }

  float media = ((float) soma) / (tamanho);
  return media;
}

int main() {
  int tamanho;

  printf("Digite o tamanho do vetor: ");
  scanf("%d", &tamanho);

  float vetor[tamanho];

  printf("Inserindo numeros no vetor: \n");
  for(int i = 0; i < tamanho; i++) {
    printf("Digite um numero: ");
    scanf("%f", &vetor[i]);
  }

  float maior = maiorValor(vetor, tamanho);
  float media = mediaFn(vetor, tamanho);

  printf("O maior valor: %.2f\n", maior);
  printf("A media dos valores: %.2f", media);

  return 0;
}