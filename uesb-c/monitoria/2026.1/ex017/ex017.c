#include <stdio.h>

// Contar números pares

int main() {
  int tamanho;

  printf("Digite o tamanho do vetor: ");
  scanf("%d", &tamanho);

  int vetor[tamanho];
  int qttPares = 0;

  printf("Inserindo numeros no vetor: \n");

  for(int i = 0; i < tamanho; i++) {
    printf("vetor[%d]: ", i);
    scanf("%d", &vetor[i]);

    if(vetor[i] % 2 == 0) qttPares++;
  }

  printf("Quantidade de numeros pares: %d", qttPares);

  return 0;
}