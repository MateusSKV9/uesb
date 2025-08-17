#include <stdio.h>
#include <stdlib.h>

int main() {
  int numbers[10] = {-192, 1, 2, 3, 455, 5, 6, 7, 8, 99};
  int menor = numbers[0];
  int maior = numbers[0];

  for (int i = 1; i < 10; i++) {
    if (numbers[i] > maior)
      maior = numbers[i];
    if (numbers[i] < menor)
      menor = numbers[i];
  }

  printf("Maior: %d\n", maior);
  printf("Menor: %d", menor);

  return 0;
}