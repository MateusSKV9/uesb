#include <stdio.h>

int main() {
  int num;
  int divisores = 0;

  printf("Digite um numero: ");
  scanf("%d", &num);

  for (int i = 1; i <= num; i++) {
    if (num % i == 0) {
      divisores++;
    }
  }

  if (divisores != 2) {
    printf("Numero nao e primo.\n");
  } else {
    printf("Numero e primo.");
  }

  return 0;
}