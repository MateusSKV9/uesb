#include <stdio.h>

int main () {
	float a, b, c;
	
	printf("Digite o primeiro numero: ");
	scanf(" %f", &a);
	printf("Digite o segundo numero: ");
	scanf(" %f", &b);
	printf("Digite o terceiro numero: ");
	scanf(" %f", &c);
	
	if(a>b) {
		float aux = a;
		a = b;
		b = aux;
	} 
	if(a>c) {
		float aux = a;
		a = c;
		c = aux;
	}
	if(b>c) {
		float aux = b;
		b = c;
		c = aux;
	}
	
	printf("Ordem ascendente: %.2f, %.2f, %.2f", a, b, c);
	
	return 0;
}
