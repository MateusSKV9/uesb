#include <stdio.h>

int main() {
	float sal, vendas;
	
	printf("Digite o salrio: ");
	scanf(" %f", &sal);
	printf("Digites o valor de vendas efetuadas: ");
	scanf(" %f", &vendas);
	
	if(vendas<=1500) {
		sal+=0.03*vendas;
	} else {
		sal += (0.03*1500 + 0.05*(vendas-1500));
	}
	printf("Salario: %.2f", sal);
	
	return 0;
}
