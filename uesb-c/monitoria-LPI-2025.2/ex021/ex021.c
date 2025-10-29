#include <stdio.h>

double areaCirculo(double raio) { return 3.14 * raio * raio; }

double areaQuadrado(double lado) { return lado * lado; }

int main() {
  double (*calArea)(double);

  calArea = areaCirculo;
  printf("Area Circulo: %.2f\n", calArea(5));
  printf("Area Circulo: %.2f\n\n", (*calArea)(5));

  calArea = areaQuadrado;
  printf("Area Quadrado: %.2f\n", calArea(5));
  printf("Area Quadrado: %.2f\n", (*calArea)(5));

  return 0;
}