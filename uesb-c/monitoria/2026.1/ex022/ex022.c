#include <stdio.h>

// Função que verifica par

void ePar(int number) {
  if(number % 2 == 0) return printf("Numero par");
  else return printf("Numero impar");
}

int main() {
  int number;

  printf("Digite um numero: ");
  scanf("%d", &number);

  ePar(number);

  return 0;
}