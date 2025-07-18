#include <stdio.h>
#include <math.h>

int main () {
	float a, b;
	
	printf("Digite o numero 1: ");
	scanf("%f", &a);
	printf("Digite o numero 2: ");
	scanf("%f", &b);
	
	if(a>b) {
		float aux = a;
		a = b;
		b = aux;
	}
	
	printf("Quadrado do menor: %.2f\n", pow(a, 2));
	if(b>=0) {
		printf("Raiz do maior: %.2f\n", sqrt(b));
	} else {
		printf("Nao existe raiz real para %.2f", b);
	}
	
	return 0;
}
