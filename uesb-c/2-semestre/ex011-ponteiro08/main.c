#include <stdio.h>
#include <math.h>

int calcularRaizes(float, float, float, float *, float *);

int main() {
    float a, b, c, x1 = 0.0, x2 = 0.0;

    printf("Digite o valor de 'a': ");
    scanf("%f", &a);
    printf("Digite o valor de 'b': ");
    scanf("%f", &b);
    printf("Digite o valor de 'c': ");
    scanf("%f", &c);

    if(calcularRaizes(a, b, c, &x1, &x2) == 0) {
        printf("Nao existem raizes reais.");
    } else {
        if(x1 != x2) {
            printf("Raiz 1: %.2f", x1);
            printf("\nRazi 2: %.2f", x2);
        } else {
            printf("Existe apenas uma raiz real: %.2f", x1);
        }
    }

    return 0;
}

int calcularRaizes(float a, float b, float  c, float *x1, float *x2) {
    float delta = 0.0;

    delta = (b*b)-4*a*c;

    if(delta>0) {
        *x1 = (-b+sqrt(delta))/(2*a);
        *x2 = (-b-sqrt(delta))/(2*a);
    } else if(delta==0) {
        *x1 = (-b+sqrt(delta))/(2*a);
        *x2 = *x1;
    } else {
        return 0;
    }
    return 1;
}