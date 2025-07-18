#include <stdio.h>
#include <math.h>

int main () {
	float a, b;
	
	printf("Digite o primeiro numero: ");
	scanf(" %f", &a);
	printf("Digite o segundo numero: ");
	scanf(" %f", &b);
	
	if(a>b) {
		float aux = a;
		a = b;
		b = aux;
	} 
	
	if(a != b) {
		printf("Quadrado do menor: %.2f\n", pow(a, 2));
		if(b>=0) {
			printf("Raiz quadrada do maior: %.2f", sqrt(b));
		} else {
			printf("Nao existe raiz de %.2f", b);
		}
	}
	
	return 0;
}
