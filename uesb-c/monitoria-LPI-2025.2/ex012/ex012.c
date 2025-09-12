#include <stdio.h>
// 0 1 2 3

void inverte(int vetor[], int inicio, int fim) {
  if (inicio >= fim)
    return;

  int aux = vetor[inicio];
  vetor[inicio] = vetor[fim];
  vetor[fim] = aux;

  inverte(vetor, inicio + 1, fim - 1);
}

int main() {
  int vetor[] = {1, 2, 3, 4, 5, 6};
  for (int i = 0; i < 6; i++) {
    printf("%d - ", vetor[i]);
  }

  inverte(vetor, 0, 5);
  printf("\n");
  for (int i = 0; i < 6; i++) {
    printf("%d - ", vetor[i]);
  }

  return 0;
}