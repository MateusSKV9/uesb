#include <stdio.h>

int findMax(int vetor[], int n) {
    int maior = vetor[0];
    for(int i = 1; i<n; i++) {
        if(vetor[i] > maior) {
            maior = vetor[i];
        }
    }

    return maior;
}

int main() {
    int tamanho;
    int maior = 0;
    
    printf("Diggite o tamanho do vetor: ");
    scanf("%d", &tamanho);
    int vetor[tamanho];

    for(int i = 0; i<tamanho; i++) {
        printf("Digite o valor de pos[%d]: ", i);
        scanf("%d", &vetor[i]);
    }

    maior = findMax(vetor, tamanho);
    printf("\nO maior numero do vetor: %d", maior);

    return 0;
}