#include <stdio.h>

int main() {
  float grausCelsius, grausFahrenheit;

  printf("Temperatura em graus Celsius: ");
  scanf("%f", &grausCelsius);

  grausFahrenheit = (grausCelsius * 9 / 5) + 32;

  printf("Temperatura em Fahrenheit: %.2f \n", grausFahrenheit);

  return 0;
}