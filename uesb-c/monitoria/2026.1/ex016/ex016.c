#include <stdio.h>

// Contar números pares

int main() {
  int vetor[10] = {1, 2, 3, 4, 5, 6, 7, 8, 16, 1};

  int eventQtt = 0;
  for(int i = 0; i < 10; i++) {
    if(vetor[i] % 2 == 0) eventQtt++;
  }

  printf("Quantidade de numeros pares: %d", eventQtt);

  return 0;
}