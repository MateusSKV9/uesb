#include <stdio.h>

void calcularIRPF(float *salPtr, float *impostoPtr) {
    if(*salPtr<=2259.20) {
        *impostoPtr = 0.0;
    } else if(*salPtr<=2826.65) {
        *impostoPtr = (*salPtr * 0.075)-169.44;
    } else if(*salPtr<=3751.05) {
        *impostoPtr = (*impostoPtr * 0.15)-381.44;
    } else if(*salPtr<=4664.68) {
        *impostoPtr = (*salPtr * 0.225)-662.77;
    } else {
        *impostoPtr = (*salPtr * 0.275)-896.00;
    }
}

int main() {
    float sal = 0.0;
    float imposto = 0.0;

    printf("Digite seu salario: ");
    scanf("%f", &sal);

    calcularIRPF(&sal, &imposto);

    printf("\nSalario: %.2f", sal);
    printf("\nImposto de renda: %.2f", imposto);

    return 0;
}