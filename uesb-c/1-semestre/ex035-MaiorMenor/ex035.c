#include <stdio.h> 

int main () {
	float a, b, c, d;
	
	printf("Digite o primeiro numero:");
	scanf(" %f", &a);
	printf("Digite o segundo numero: ");
	scanf(" %f", &b);
	printf("Digite o terceiro numero: ");
	scanf(" %f", &c);
	printf("Digite o quarto numero: ");
	scanf(" %f", &d);
	
	if (a>b) {
		float aux = a;
		a = b;
		b = aux;
	} if (a>c) {
		float aux = a;
		a = c;
		c = aux;
	} if (a>d) {
		float aux = a;
		a = d;
		d = aux;
	} if (b>c) {
		float aux = b;
		b = c;
		c = aux;
	} if (b>d) {
		float aux = b;
		b = d;
		d = aux;
	} if (c>d) {
		float aux = c;
		c = d;
		d = aux;
	}
	
	printf("O menor: %.2f \n", a);
	printf("O maior: %.2f", d);
	
	return 0;
}
