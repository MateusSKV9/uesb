#include <stdio.h>

float dobrar(float *a, float *b) {
    *a = 2 * *a;
    *b = 2 * *b;
    return (*a + *b);
}

int main () {
    float a, b;
    printf("Digite o primeiro numero: ");
    scanf("%f", &a);
    printf("Digite o segundo numero: ");
    scanf("%f", &b);

    printf("O dobro de %.2f + %.2f = %.2f", a, b, dobrar(&a, &b));

    return 0;
}