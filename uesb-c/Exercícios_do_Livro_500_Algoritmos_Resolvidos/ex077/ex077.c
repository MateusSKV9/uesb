#include <stdio.h>
#include <math.h>

int main() {
	float n1, n2, difQ, difF;
	
	printf("Digite o primeiro numero: ");
	scanf(" %f", &n1);
	printf("Digite o segundo numero: ");
	scanf(" %f", &n2);
	
	difQ = pow((n1-n2), 2);
	difF = pow(n1, 2) - pow(n2, 2);
	
	printf("Quadrado da diferenca: (%.2f - %.2f)^2 = %.2f \n", n1, n2, difQ);
	printf("Diferenca dos quadrados: %.2f^2 - %.2f^2 = %.2f", n1, n2, difF);
	
	return 0;
}
