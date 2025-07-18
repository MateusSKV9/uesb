#include <stdio.h>

int main() {
	float prest, valor, taxa, temp;
	
	printf("Digite o valor da prestacao: ");
	scanf(" %f", &valor);
	printf("Digite a taxa: ");
	scanf(" %f", &taxa);
	printf("Digite o tempo: ");
	scanf(" %f", &temp);
	
	prest = valor + (valor*(taxa/100)*temp);
	
	printf("Valor de prestacao em atraso: %.2f \n", prest);
	
	return 0;
}
