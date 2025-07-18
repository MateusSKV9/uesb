#include <stdio.h>

int main() {
	float a, b, aux;
	
	printf("Digite o valor de A: ");
	scanf(" %f", &a);
	printf("Digite o valor de B: ");
	scanf(" %f", &b);
	
	aux = a;
	a = b;
	b = aux;
	
	printf("Valor de A: %.2f \n", a);
	printf("Valor de B: %.2f", b);
	
	return 0;
}
