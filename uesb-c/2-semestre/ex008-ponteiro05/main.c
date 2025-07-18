#include <stdio.h>

void troca(int *i, int *j) {
    int temp;
    temp = *i;
    *i = *j;
    *j = temp;
}

int main () {
    int a = 8; 
    int b = 3;

    troca(&a, &b);
    printf("Valor a: %d\n", a);
    printf("Valor b: %d", b);

    return 0;
}