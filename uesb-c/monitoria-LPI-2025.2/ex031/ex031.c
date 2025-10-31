#include <stdio.h>

// Função que incrementa o valor apontado por x
void incrementa(int *x) { (*x)++; }

// Aplica f a cada elemento do vetor v

void aplica(int *v, int n, void (*f)(int *)) {
  for (int i = 0; i < n; i++) {
    f(&v[i]); // Passa o endereço do elemento
  }
}

int main() {
  int vetor[] = {1, 2, 3, 4, 5};
  int n = 5;

  aplica(vetor, n, incrementa);

  printf("Vetor apos incremento:\n");
  for (int i = 0; i < n; i++) {
    printf("%d ", vetor[i]);
  }
  printf("\n");

  return 0;
}
