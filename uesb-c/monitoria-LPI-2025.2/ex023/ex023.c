/* 1_fatorial_indireto.c */
#include <stdio.h>

typedef int (*rec_t)(int, rec_t); // ponteiro para função que recebe (int, rec_t) e retorna int

// função auxiliar que usa o ponteiro rec para chamar-se indiretamente
int fatorialAux(int n, rec_t rec) {
  // comentário: rec pode ser usado para invocar recursão indiretamente
  if (n <= 1)
    return 1;
  return n * rec(n - 1, rec); // chama "rec" que normalmente será fatorialAux
}

// wrapper que inicia a recursão
int fatorial(int n) {
  return fatorialAux(n, fatorialAux); // passa o ponteiro para fatorialAux
}

int main(void) {
  int res = fatorial(5);                // fatorial de 5
  printf("1) fatorial(5) = %d\n", res); // deve imprimir 120
  return 0;
}
