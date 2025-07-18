#include <stdio.h>
#include <stdlib.h>

int *uniao(int *x1, int *x2, int n1, int n2, int *qtd) {
    //VETOR X1
    printf("======> VETOR X1 <======\n");
    for(int i = 0; i<n1; i++) {
        printf("Digite o valor da pos[%d]: ", i);
        scanf("%d", &x1[i]);
    }

    // VETOR X2
    printf("\n\n======> VETOR X2 <======\n");
    for(int i = 0; i<n2; i++) {
        printf("Digite o valor de pos[%d]: ", i);
        scanf("%d", &x2[i]);
    }

    //VETOR X3
    int *x3 = malloc((n1+n2) * sizeof(int));

    for(int i = 0; i<n1; i++) {
        x3[i] = x1[i];
    }

    int k = n1;
    for(int i = 0; i<n2; i++) {
        int duplicado = 0;
        for(int j = 0; j<n1; j++) {
            if(x2[i] == x1[j]) {
                duplicado = 1;
                break;
            }
        }
        if(!duplicado) {
            x3[k] = x2[i];
            k++;
        }
    }

    *qtd = k;
    x3 = realloc(x3, k * sizeof(int));
    
    return x3;
}

int main() {
    int n1, n2, qtd;
    printf("Digite o tamanho do vetor x1: ");
    scanf("%d", &n1);
    printf("Digite o tamanho do vetor x2: ");
    scanf("%d", &n2);

    int *x1 = malloc(n1 * sizeof(int));
    int *x2 = malloc(n2 * sizeof(int));

    int *x3 = uniao(x1, x2, n1, n2, &qtd);
    printf("\n\n======> VETOR X3 <======");
    for(int i = 0; i<qtd; i++) {
        printf("\nPos[%d] = %d", i, x3[i]);
    }

    free(x1);
    free(x2);
    free(x3);
    return 0;
}