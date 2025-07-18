#include <stdio.h>
#include <stdlib.h>

int** multiplicarMatrizes(int** a, int** b, int linhas, int colunas){
    int nSoma = colunas;

    int **matrizC = (int**) malloc(sizeof(int*) * colunas);

    for(int i = 0; i < linhas; i++){
        *(matrizC+i) = (int*) malloc(sizeof(int) * linhas);
    }

    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            *(*(matrizC + i) + j) = 0;
        }
    }

    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            for(int k = 0; k < nSoma; k++){
                /*
                    MatrizC na linha i coluna j incrementada pela multiplicação
                    de a na linha i coluna k, e b na linha k coluna j 
                */
                *(*(matrizC + i) + j) += *(*(a + i) + k) * *(*(b + k) + j);
            }
        }
    }

    return matrizC;
}

int main(){
    int linhas = 3;
    int colunas = 3;
    
    int **matrizA = (int**) malloc(sizeof(int*) * colunas);
    int **matrizB = (int**) malloc(sizeof(int*) * colunas);

    for(int i = 0; i < linhas; i++){
        *(matrizA+i) = (int*) malloc(sizeof(int) * linhas);
        *(matrizB+i) = (int*) malloc(sizeof(int) * linhas);
    }

    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            *(*(matrizA + i) + j) = i + j;
            *(*(matrizB + i) + j) = i - j;
        }
    }

    int **matrizC = multiplicarMatrizes(matrizA, matrizB, linhas, colunas);

    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            printf("%d ", *(*(matrizC + i) + j));
        }
        printf("\n");
    }

    return 0;
}