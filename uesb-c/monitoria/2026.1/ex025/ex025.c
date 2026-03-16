#include <stdio.h>

// Função que soma vetor

void somaVetores(int vetor1[], int vetor2[], int vetorSoma[], int tamanho) {
  for(int i = 0; i < tamanho; i++){
    vetorSoma[i] = vetor1[i] + vetor2[i];
  }
}

int main() {
  int tamanho;

  printf("Digite o tamanho dos vetores 1 e 2: ");
  scanf("%d", &tamanho);

  int vetor1[tamanho], vetor2[tamanho], vetorSoma[tamanho];

  printf("Inserindo numeros do vetor1\n");
  for(int i = 0; i < tamanho; i++) {
    printf("Digite um numero: ");
    scanf("%d", &vetor1[i]);
  }

  printf("Inserindo numeros do vetor2\n");
  for(int i = 0; i < tamanho; i++) {
    printf("Digite um numero: ");
    scanf("%d", &vetor2[i]);
  }

  somaVetores(vetor1, vetor2, vetorSoma, tamanho);

  printf("Vetor resultante: ");
  for(int i = 0; i < tamanho; i++){
    printf(" %d ", vetorSoma[i]);
  }

  return 0;
}