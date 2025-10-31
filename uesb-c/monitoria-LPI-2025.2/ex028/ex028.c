#include <stdio.h>

float toCelsius(float f) { return (f - 32) * 5.0 / 9.0; }

float toFahrenheit(float c) { return (c * 9.0 / 5.0) + 32; }

int main() {
  int opcao;
  float temp, resultado;

  // Ponteiro para função que recebe float e retorna float
  float (*operacao)(float);

  printf("1 - Converter Fahrenheit => Celsius\n");

  printf("2 - Converter Celsius => Fahrenheit\n");
  printf("Escolha: ");
  scanf("%d", &opcao);

  printf("Digite a temperatura: ");
  scanf("%f", &temp);

  // Ponteiro recebe a função de acordo com o menu
  if (opcao == 1) {
    operacao = toCelsius;
  } else if (opcao == 2) {
    operacao = toFahrenheit;
  } else {
    printf("Opcao invalida!\n");
    return 0;
  }

  resultado = operacao(temp);
  printf("Resultado: %.2f\n", resultado);

  return 0;
}
