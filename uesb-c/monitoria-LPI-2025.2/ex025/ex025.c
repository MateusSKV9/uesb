/* 3_pointer_to_recursive_factorial.c */
#include <stdio.h>

int factorial(int n) {
  if (n <= 1)
    return 1;
  return n * factorial(n - 1); // recursão direta
}

int main(void) {
  // declarar e inicializar o ponteiro para função
  int (*fact_ptr)(int) = factorial;

  // uso: chamar através do ponteiro
  int n = 6;
  printf("3) factorial(%d) via pointer = %d\n", n, fact_ptr(n));

  // explicação: fact_ptr pode ser passada como argumento a outra função,
  // permitindo que essa função "chame de volta" a função recursiva
  return 0;
}
