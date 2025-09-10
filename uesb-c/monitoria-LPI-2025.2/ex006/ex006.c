#include <stdio.h>

int main() {
  int minutosTotais, horas, minutos;

  printf("Digite a quantidade de minutos totais: ");
  scanf("%d", &minutosTotais);

  horas = minutosTotais / 60;
  minutos = minutosTotais % 60;

  printf("Representa: %dh%dmin", horas, minutos);

  return 0;
}