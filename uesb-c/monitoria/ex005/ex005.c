#include <stdio.h>
#include <stdlib.h>

int main() {
  int number;

  printf("Digite o numero da tabuada: ");
  scanf("%d", &number);

  printf("Tabuada de %d\n", number);
  for (int i = 1; i <= 10; i++) {
    printf("%d x %d = %d \n", number, i, (number * i));
  }

  return 0;
}