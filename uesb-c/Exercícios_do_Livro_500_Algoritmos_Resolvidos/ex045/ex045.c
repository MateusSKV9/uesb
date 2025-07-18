#include <stdio.h>
#include <math.h>

int main () {
	float n, quad, raizQ;
	
	printf("Digite um numero: ");
	scanf(" %f", &n);
	
	quad = pow(n, 2);
	raizQ = sqrt(n);
	
	printf("Numero: %.2f \n", n);
	printf("Quadrado: %.2f \n", quad);
	printf("Raiz quadrada: %.2f", raizQ);
}
