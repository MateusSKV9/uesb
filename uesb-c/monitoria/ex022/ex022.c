#include <stdio.h>
#include <stdlib.h>

// 1 2 3 4 5

void reverseOrder(int array[], int length) {
  for (int i = 0; i < length / 2; i++) {
    int aux = array[i];
    array[i] = array[length - 1 - i];
    array[length - 1 - i] = aux;
  }
}

int main() {
  int length = 0;

  printf("Digite o tamanho do array: ");
  scanf("%d", &length);

  int array[length];

  for (int i = 0; i < length; i++) {
    printf("array[%d]: ", i);
    scanf("%d", &array[i]);
  }

  reverseOrder(array, length);

  printf("\n====== Array invertido ======\n");
  for (int i = 0; i < length; i++) {
    printf("array[%d]: %d\n", i, array[i]);
  }

  return 0;
}