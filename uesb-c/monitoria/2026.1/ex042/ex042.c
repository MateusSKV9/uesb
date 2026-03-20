// Verifique se um vetor está em ordem crescente.

#include <stdio.h>

int main() {
  int tamanho;

  printf("Digite o tamanho do vetor: ");
  scanf("%d", &tamanho);

  int vetor[tamanho];

  printf("Inserindo numeros no vetor:\n");
  for(int i = 0; i < tamanho; i++) {
    printf("vetor[%d]: ", i);
    scanf("%d", &vetor[i]);
  }

  int ordemCrescente = 1;

  for(int i = 0; i < tamanho - 1; i++) {
    if(vetor[i] > vetor[i+1]) {
      ordemCrescente = 0;
      break;
    }
  }

  if(ordemCrescente == 1) printf("O vetor esta em ordem crescente");
  else printf("O vetor NAO esta em ordem crescente");

  return 0;
}