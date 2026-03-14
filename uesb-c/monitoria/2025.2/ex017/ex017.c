#include <stdio.h>
#include <stdlib.h>

int main() {
  int number = 0;

  printf("Digite um numero: ");
  scanf("%d", &number);

  if (number > 0) {
    printf("Positivo\n");
  } else if (number < 0) {
    printf("Negativo\n");
  } else {
    printf("Zero\n");
  }

  return 0;
}