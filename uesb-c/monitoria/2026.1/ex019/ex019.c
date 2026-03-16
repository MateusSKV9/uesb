#include <stdio.h>

// Inverter vetor, inserindo numeros no vetor

int main() {
  int tamanho;

  printf("Digite o tamanho do vetor: ");
  scanf("%d", &tamanho);

  int vetor[tamanho];

  printf("Inserindo numeros no vetor: \n");

  for(int i = 0; i < tamanho; i++) {
    printf("vetor[%d]: ", i);
    scanf("%d", &vetor[i]);
  }

  for(int i = 0; i < tamanho/2; i++) {
    int aux = vetor[i];
    vetor[i] = vetor[tamanho - 1 - i];
    vetor[tamanho - 1 - i] = aux;
  }

  printf("Vetor invertido: ");
  for(int i = 0; i<tamanho; i++) {
    printf(" %d ", vetor[i]);
  }

}