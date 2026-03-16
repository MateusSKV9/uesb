#include <stdio.h>

// 0 - length - 1
// 1 - length - 2

// Inverter vetorInverter vetor
//  0  1  2 (3 -> 1,5)
// [1, 2, 3] => [3, 2, 1]
// [1, 2] => [2, 1]

int main() {
  int vetor[4] = {1, 2, 3, 4};

  printf("Vetor digitado: ");
  for(int i = 0; i < 4; i++) {
    printf(" %d ", vetor[i]);
  }
  
  printf("\n");

  for(int i = 0; i<= 4/2; i++) {
    int aux = vetor[i];
    vetor[i] = vetor[4 - 1 - i];
    vetor[4 - 1 - i] = aux;
  }

  printf("Vetor invertido: ");
  for(int i = 0; i < 4; i++) {
    printf(" %d ", vetor[i]);
  }

  return 0;
}