#include <stdio.h>
// INCOMPLETO
int main() {
    int dim;
    printf("Digite a dimensao da matriz: ");
    scanf("%d", &dim);

    // alocar a matriz de dimensão dim

    int *M = malloc(sizeof(int)*(dim*dim));

    for(int i = 0; i<(dim*dim); i++) {
        *(M+i) = 0;
    }
    for(int i=0; i<dim; i++) {
        for(int j=0; j<dim; j++) {
            if(i==j) {
                *(M(i*dim + j)) = 1;
            }
        }
    }

    for(int i = 0; i<(dim); i++) {
        for(int j = 0; j<(dim); j++) {
            int valor = *(M(i*dim + j)) = 1;
            printf("%d-", valor);
        }
        printf("\n");
    }

    return 0;
}