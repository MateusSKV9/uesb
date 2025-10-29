#include <stdio.h>

int main() {
  const int VALOR = 42;
  const int *ptrConst = &VALOR;

  // *ptrConst = 4;
  // printf("%d", *ptrConst);

  // const int * ptrToConst = &VALOR;
  int mutavel = 10;
  int *ptr = &mutavel;
  *ptr = 20;

  printf("Valor const: %d\n", *ptrConst);
  printf("Mutavel alterado: %d", *ptr);

  return 0;
}