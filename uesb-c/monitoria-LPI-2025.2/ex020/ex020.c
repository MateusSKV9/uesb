#include <stdio.h>

int main() {
  int numbers[] = {1, 2, 3};
  int *arr_ptr = numbers;

  for (int i = 0; i < 3; i++) {
    printf("numbers[%d] = %d\n", i, *(arr_ptr + i));
  }

  return 0;
}