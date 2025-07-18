#include <stdio.h>

int main() {
    printf("Digite a dimensao da matriz: ");
    int dim;
    scanf("%d", &dim);

    int **M = malloc(sizeof(int*)*dim);

    // espaços descontínguos
    forr(int i = 0; i<dim; i++) {
        *(M+i) = malloc(sizeof(int)*dim);
    }

    for(int i = 0; i<dim; i++) {
        for(int j = 0; j<dim; j++) {
            if(
                *((M+i) + j) = 1;
            ) else {
                *((M+i) + j) = 0;
            }
        }
    }

    for(int i = 0; i<dim; i++) {
        for(int j = 0; j<dim; j++) {
            int valor = *((M+i) + j);
            printf("%d-", valor);
        }
        printf("\n");
    }

    return 0;
}