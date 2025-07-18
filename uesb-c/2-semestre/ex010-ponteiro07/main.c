#include <stdio.h>

void calcularHoras(int, int*, int*);

int main() {
    int inMinutos = 0, horas = 0, minutos = 0;

    printf("Digite a quantidade de minutos: ");
    scanf("%d", &inMinutos);

    calcularHoras(inMinutos, &horas, &minutos);
    printf("%d minutos = %dh e %dmin", inMinutos, horas, minutos);

    return 0;
}

void calcularHoras(int inMins, int *horas, int *minutos) {
    *horas = inMins/60;
    *minutos = inMins%60;
}