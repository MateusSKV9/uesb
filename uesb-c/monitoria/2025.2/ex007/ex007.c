#include <stdio.h>
#include <stdlib.h>

int main() {
  int numbers[10];
  int evenNumbers = 0, oddNumbers = 0;

  for (int i = 0; i < 10; i++) {
    printf("Digite %d numero: ", i + 1);
    scanf("%d", &numbers[i]);

    if (numbers[i] % 2 == 0) {
      evenNumbers++;
    } else {
      oddNumbers++;
    }
  }

  printf("Quantidade de pares: %d\n", evenNumbers);
  printf("Quantidade impares: %d\n", oddNumbers);

  return 0;
}