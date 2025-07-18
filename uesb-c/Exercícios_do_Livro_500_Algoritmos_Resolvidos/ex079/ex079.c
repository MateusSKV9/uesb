#include <stdio.h>
#include <math.h>

int main() {
	float p, i, valorA;
	int n;
	
	printf("Digite a aplicacao mensal: ");
	scanf(" %f", &p);
	printf("Digite a taxa (0 a 1): ");
	scanf(" %f", &i);
	printf("Digite o numero de meses: ");
	scanf(" %d", &n);
	
	valorA = p*(pow((1+i), n)-1)/i;
	
	printf("Valor acumulado: %.2f", valorA);
	
	return 0;
}
