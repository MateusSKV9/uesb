#include <stdio.h>

int main () {
	float salarioB, valorP;
	
	printf("Digite o salario bruto: ");
	scanf(" %f", &salarioB);
	printf("Digite o valor da prestacao: ");
	scanf(" %f", &valorP);
	
	if(valorP <= 0.30*salarioB) {
		printf("Emprestimo concedido");
	} else {
		printf("Emprestimo nao concedido");
	}
	
	return 0;
}
