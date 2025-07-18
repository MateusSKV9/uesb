#include <stdio.h>
#include <math.h>

// Assinatura
void calcularRaizes(float, float, float);

int main() {
    float a, b, c;

    printf("Digite 'a': ");
    scanf("%f", &a);
    printf("Digite 'b': ");
    scanf("%f", &b);
    printf("Digite 'c': ");
    scanf("%f", &c);

    calcularRaizes(a, b, c);

    return 0;
}

void calcularRaizes(float a, float b, float c) {
    float raiz1, raiz2;

    float delta = (b*b)-4*a*c;
    raiz1 = (-b + sqrt(delta))/(2.0*a);
    raiz2 = (-b - sqrt(delta))/(2.0*a);

    printf("Raiz 1: %.2f", raiz1);
    printf("\nRaiz 2: %.2f", raiz2);
}