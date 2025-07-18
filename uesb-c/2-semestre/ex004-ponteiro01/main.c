#include <stdio.h>

int main () {
    float valor;

    printf("Ola!\n");    
    printf("Digite o valor: ");
    scanf("%f", &valor);

    int desconto = 10;
    float* valorPtr = NULL;
    valorPtr = &valor;

    float descontado = *valorPtr - (*valorPtr*desconto/100.0);
    printf("Valor final (com desconto de 10 porcento) = %.2f", descontado);

    printf("\nO endereco de 'valor' = %p\n E o valor de 'valorPtr' = %p", &valor, valorPtr);

    return 0;
}