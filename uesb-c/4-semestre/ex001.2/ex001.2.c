#include <math.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct {
  float a, b, c;
  float x1, x2;
} QuadraticEquation;

QuadraticEquation construtor(float a, float b, float c) {
  QuadraticEquation quadraticEquation;
  quadraticEquation.a = a;
  quadraticEquation.b = b;
  quadraticEquation.c = c;

  return quadraticEquation;
}

int calcBhaskara(QuadraticEquation *quadraticEquation) {
  float discriminant = pow(quadraticEquation->b, 2) - 4 * quadraticEquation->a * quadraticEquation->c;

  if (discriminant < 0) {
    return 0;
  } else if (discriminant == 0) {
    quadraticEquation->x1 = (-1 * (quadraticEquation->b) + sqrt(discriminant)) / (2 * quadraticEquation->a);
    return 1;
  } else {
    quadraticEquation->x1 = (-1 * (quadraticEquation->b) + sqrt(discriminant)) / (2 * quadraticEquation->a);
    quadraticEquation->x2 = (-1 * (quadraticEquation->b) - sqrt(discriminant)) / (2 * quadraticEquation->a);
    return 2;
  }
}

void showMessage(QuadraticEquation *quadraticEquation, int rootQuantity) {

  if (rootQuantity == 0) {
    printf("Sem raizes reais\n");
  } else if (rootQuantity == 1) {
    printf("Apenas uma raiz real\n");
    printf("-> x1 = x2 = %.2f \n", quadraticEquation->x1);
  } else {
    printf("Existem duas raizes reais\n");
    printf("-> x1 = %.2f\n", quadraticEquation->x1);
    printf("-> x2 = %.2f\n", quadraticEquation->x2);
  }
}

int main() {
  float a = 0, b = 0, c = 0;
  int rootQuantity = 0, option = 0;

  do {
    printf("Digite o coeficiente a: ");
    scanf("%f", &a);
    printf("Digite o coeficiente b: ");
    scanf("%f", &b);
    printf("Digite o coeficiente c: ");
    scanf("%f", &c);

    if (a == 0) {
      printf("[ERRO]: Nao e uma equacao quadratica\n");
    } else {
      QuadraticEquation quadraticEquation = construtor(a, b, c);
      rootQuantity = calcBhaskara(&quadraticEquation);
      showMessage(&quadraticEquation, rootQuantity);
    }

    printf("\n====== Menu de opcoes ======\n");
    printf("1. Tentar novamente \n");
    printf("2. Sair\n> ");
    scanf("%d", &option);

    if (option == 2)
      printf("FIM DO PROGRAMA\n");

  } while (option != 2);

  return 0;
}