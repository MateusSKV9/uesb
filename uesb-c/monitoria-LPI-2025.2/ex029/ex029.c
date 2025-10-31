#include <stdio.h>

// Retorna o maior número
int maior(int a, int b) { return (a > b) ? a : b; }

// Retorna o menor número
int menor(int a, int b) { return (a < b) ? a : b; }

// Função que recebe o ponteiro p/ função como parâmetro
int operacao(int (*f)(int, int), int x, int y) { return f(x, y); }

int main() {
  int x, y;

  printf("Digite dois valores: ");
  scanf("%d %d", &x, &y);

  printf("Maior: %d\n", operacao(maior, x, y));
  printf("Menor: %d\n", operacao(menor, x, y));

  return 0;
}
