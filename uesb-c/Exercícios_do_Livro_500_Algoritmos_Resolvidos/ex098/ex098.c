#include <stdio.h>

int main () {
	float salarioB, prest;
	
	printf("Digite o salario bruto: ");
	scanf("%d", &salarioB);
	printf("Digite a prestacao: ");
	scanf("%d", &prest);
	
	if(prest <= 0.30*salarioB) {
		printf("Prestacao concedida");
	} else {
		printf("Prestacao nao concedida");
	}
	
	return 0;
}
