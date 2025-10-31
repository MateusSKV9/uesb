#include <stdio.h>

// Verifica se número é par
int ehPar(int x) { return (x % 2 == 0); }

// Verifica se número é positivo
int ehPositivo(int x) { return (x > 0); }

// Conta quantos valores satisfazem a condição apontada por cond
int filtra(int *v, int n, int (*cond)(int)) {
  int count = 0;
  for (int i = 0; i < n; i++) {
    if (cond(v[i])) {
      count++;
    }
  }
  return count;
}

int main() {
  int vetor[] = {1, -2, 3, 4, -5, 6};
  int n = 6;

  printf("Quantidade de pares: %d\n", filtra(vetor, n, ehPar));
  printf("Quantidade de positivos: %d\n", filtra(vetor, n, ehPositivo));

  return 0;
}
