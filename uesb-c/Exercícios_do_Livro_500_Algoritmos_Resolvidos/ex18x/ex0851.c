#include <stdio.h>

int main () {
	float a, b, c;
	
	printf("Digite o numero 1: ");
	scanf("%f", &a);
	printf("Digite o numero 2: ");
	scanf("%f", &b);
	printf("Digite o numero 3: ");
	scanf("%f", &c);
	
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
	
	printf("Maior: %.2f", c);
	
	return 0;
}
