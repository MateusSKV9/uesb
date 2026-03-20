/*
  Faça uma função que: 
    - recebe vetor
    - inverte ele (sem criar outro vetor)

  1 2 3 4

  1 2 3 4 5
*/

#include <stdio.h>

void inverteVetor(int vetor[], int tamanho) {
 for(int i = 0; i < (tamanho / 2); i++) {
    int aux = vetor[i];
    vetor[i] = vetor[tamanho - 1 - i];
    vetor[tamanho - 1 - i] = aux;
  }
}

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

  inverteVetor(vetor, tamanho);
  printf("Imprimindo vetor invertido: \n");
  for(int i = 0; i < tamanho; i++) {
    printf("vetor[%d]: %d\n", i, vetor[i]);
  }

  return 0;
}