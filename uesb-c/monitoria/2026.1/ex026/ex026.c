#include <stdio.h>
#include <stdlib.h>

// Função que soma vetor

int* somaVetores(int *vetor1, int *vetor2, int tamanho) {
  int * vetorResultante = (int*) malloc(tamanho * sizeof(int));

  for(int i = 0; i < tamanho; i++) {
    vetorResultante[i] = vetor1[i] + vetor2[i];
  }

  return vetorResultante;
} 

int main() {
  int tamanho;

  printf("Digite o tamanho dos vetores: ");
  scanf("%d", &tamanho);

  int vetor1[tamanho], vetor2[tamanho];
  int *ptr1 = vetor1;
  int *ptr2 = vetor2;

  printf("Inserindo numeros do vetor 1:\n");
  for(int i = 0; i < tamanho; i++) {
    printf("Digite um numero: ");
    scanf("%d", &vetor1[i]);
  }
  
  printf("Inserindo numeros do vetor 2:\n");
  for(int i = 0; i < tamanho; i++) {
    printf("Digite um numero: ");
    scanf("%d", &vetor2[i]);
  }

  int * vetorResultante = somaVetores(ptr1, ptr2, tamanho);

  printf("Numeros do vetor resultante: \n");
  for(int i = 0; i < tamanho; i++) {
    printf(" %d ", vetorResultante[i]);
  }

  free(vetorResultante);

  return 0;
}