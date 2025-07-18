#include <stdio.h>

int main() {
	float deposito, valor, taxa, total;
	
	printf("Digite o valor: ");
	scanf(" %f", &deposito);
	printf("Digite a taxa: ");
	scanf(" %f", &taxa);
	
	valor = deposito*taxa/100;
	total = deposito+valor;
	
	printf("Rendimentos: %.2f \nTotal: %.2f", valor, total);
	
	return 0;
}
