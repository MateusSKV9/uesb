#include <stdio.h>

// INCOMPLETO

int *concatena(int *a, int sizeA, int *b, int sizeB) {
    int sizeC = sizeA+sizeB;
    int *c = (int*) malloc(sizeof(int) * sizeC);

    for(int i = 0; i<sizeC; i++) {
        if(i<sizeA) {
            *(c+i) = *(a+i);
        } else {
            *(c+i) = *(b+i);
        }
    }
}

int main() {
    int sizeA, sizeB;
    printf("Digite o tamanho do primeiro vetor: ");
    scanf("%d", &sizeA);
    int* vetorA = (int*) malloc(sizeof(int) * sizeA);

    printf("VETOR 01\n");
    for(int i = 0; i<sizeA; i++) {
        printf("Pos[%d] = ", i);
        scanf("%d", (vetorA+i));
    }

    printf("\nDigite o tamanho do segundo vetor: ");
    scanf("%d", &sizeB);
    printf("VETOR 2\n");

    int* vetorB = (int*) malloc(sizeof(int) * sizeB);
    for(int i = 0; i<sizeB; i++) {
        printf("Pos[%d] = ", i);
        scanf("%d", (vetorB+i));
    }    

    int *c = concatena(*vetorA, sizeA, int *vetorB, sizeB);

    /* Usando for para percorrer todos, diretamente, todos os endereços de array
    for(int* p=a; p!=(a+sizeA); p++) {
        printf("%d", *p);
    }

    &a[i] == (a+3)
    *(a+3) == a[3]
    */

    return 0;
}