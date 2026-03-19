// Crie uma função que recebe um número e retorna seu quadrado

#include <stdio.h>

float quadrado(float n) {
  return n * n;
}

int main() {
  float numero;

  printf("Digite um numero: ");
  scanf("%f", &numero);

  float numeroQuadrado = quadradoFn(numero);
  printf("O quadrado de %.2f e: %.2f", numero, numeroQuadrado);

  return 0;
}
