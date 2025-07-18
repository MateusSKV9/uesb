#include <stdio.h>
#include <stdlib.h>

void adicionarNum(int *array, int *size, int *cont) {
    if(*cont<8) {
        printf("==> Digite o valor que deseja adicionar: ");
        scanf("%d", (array+(*cont)));
        (*cont)++;
    } else {
        printf("[AVISO]: o array-list esta cheio.\n");
    }
}

void removerNum(int *array, int *size, int *cont) {
    int posicao;
    if(*cont>0) {
        printf("Digite a posicao do numero que deseja remover: ");
        scanf("%d", &posicao);
        if(posicao>=0 && posicao<*cont) {
            (*cont)--;
            for(int i = posicao; i<(*size); i++) {
                *(array+i) = *(array+i+1);
            }   
        } else {
            printf("[ERRO]: posicao invalida.\n");
        }
    } else {
        printf("[ERRO]: o array esta vazio.\n");
    }    
}

void exibirArray(int *array, int *size, int *cont) {
    printf("===> Array-list = [ ");
    for(int i = 0; i<(*cont); i++) {
        if(i!=(*cont)-1) {
            printf("[%d]=%d , ", i, *(array+i));
        } else {
            printf("[%d]=%d ", i, *(array+i));
        }
    }
    printf("]\n\n");
}

int main() {
    int size = 8;
    int cont = 0;
    int opcao = 0;
    int *arrayList = (int*) malloc(sizeof(int) * size);

    do {
        printf("+======================================================+\n");
        printf("|                    MENU DE OPCOES                    |\n");
        printf("|------------------------------------------------------|\n");
        printf("|        1. Digite (1) para adicionar um numero        |\n");
        printf("|        2. Digite (2) para remover um numero          |\n");
        printf("|        3. Digite (3) para sair                       |\n");
        printf("|                                                      |\n");
        printf("+======================================================+\n");
        printf("=> Opcao: ");
        scanf("%d", &opcao);

        switch(opcao) {
        case 1: 
            adicionarNum(arrayList, &size, &cont);
            exibirArray(arrayList, &size, &cont);
            break;
        case 2:
            removerNum(arrayList, &size, &cont);
            exibirArray(arrayList, &size, &cont);
            break;
        case 3:
            printf("Fim do programa!");
            break;
        default:
            printf("[ERRO]: opcao invalida. Tente novamente.\n\n");
        }
    } while(opcao!=3);

    free(arrayList);

    return 0;
}