#include <stdio.h>
#include <stdlib.h>

float addition(float total, float x) { return total + x; }
float subtration(float total, float x) { return total - x; }
float multiplication(float total, float x) { return total * x; }
float division(float total, float x) { return total / x; }

int main() {
  int option = 0;
  float total = 0, number = 0;

  do {
    char *operationName;

    printf("\n====== Menu de opcoes ======\n");
    printf("1. Soma\n");
    printf("2. Subtracao\n");
    printf("3. Multiplicacao\n");
    printf("4. Divisao\n");
    printf("5. Sair\n> ");
    scanf("%d", &option);

    if (option == 1)
      operationName = "somar";
    else if (option == 2)
      operationName = "subtrair";
    else if (option == 3)
      operationName = "multiplicar";
    else if (option == 4)
      operationName = "dividir";

    if (option == 5)
      break;

    printf("Digite o numero para %s\n>", operationName);
    scanf("%f", &number);

    if (option == 1) {
      total = addition(total, number);
    } else if (option == 2) {
      total = subtration(total, number);
    } else if (option == 3) {
      total = multiplication(total, number);
    } else if (option == 4) {
      total = division(total, number);
    }

    printf("Resultado: %.2f\n", total);
  } while (option != 5);

  return 0;
}