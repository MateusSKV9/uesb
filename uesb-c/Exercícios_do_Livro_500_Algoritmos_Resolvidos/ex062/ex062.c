#include <stdio.h>

int main () {
	float valor, novoValor;
	
	printf("Digite o valor inicial: ");
	scanf(" %f", &valor);
	novoValor = valor - (9.0/100)*valor;
	
	printf("Valor com desconto: %.2f \n", novoValor);
}
