#include <stdio.h>

int main() {
	float valor;
	
	printf("Digite o valor a ser pago: ");
	scanf(" %f", &valor);
	
	valor+=(10.0/100)*valor;
	
	printf("Valor total a pagar: %.2f", valor);
	
	return 0;
}
