#include <stdio.h>

// Verificar se número é positivo ou negativo

int main() {
  int number;

  printf("Digite um numero: ");
  scanf("%d", &number);

  if (number > 0)
    printf("O numero %d e positivo", number);
  else if (number < 0)
    printf("O numero %d e negativo", number);
  else
    printf("O numero %d e neutro", number);

  return 0;
}