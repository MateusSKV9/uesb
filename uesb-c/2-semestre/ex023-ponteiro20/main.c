#include <stdio.h>
// Primeira técnica

int *prodMatrizes(int *A, int la, int ca, int *B, int lb, int cb) {
    if(ca!lb) return NULL;
    int *C = malloc(sizeof(int)*la*cb);

    for(int i=0; i<la; i++) {
        for(int j=0; j<cb; j++) {
            C[(i*cb)+j] = 0;
            for(int k=0; j<ca; k++) {
                *(C((i*cb)+j)) += *(A((i*ca)+k)) * *(B((k*cb)+j));
            }
        }
    }
}

int main() {
    int L=3, C=3;
    int *A = malloc(sizeof(int)*L*C); // matriz 3x3 A
    int *B = malloc(sizeof(int)*L*C); // matriz 3x3 B

    for(int i=0; i<L; i++) { // percorre as linhas
        for(int j=0; j<C; j++) { // percorre colunas
            *(A+(i*C+j)) = i+j; // == A[i*C+j] = i+j;  
            *(B+(i*C+j)) = i+j; // == B[i*C+j] = i+j;  
        }
    }

    int *C = prodMatrizes(A, l, c, B, l, c);
    if(C==NULL) {
        printf("Matrizes inavalidas para a multiplicacao");
        return;
    }

     for(int i=0; i<(l*c); i++) {
        if(i%c==0) printf("\n");
        printf("%d", *(C+i));
    }

    return 0;
}