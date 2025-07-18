#include <stdio.h>

int main () {
	float a, b, c, maior, inter, menor;
	
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
		a = b;
		b = aux;
	}
	if(b>c) {
		float aux = b;
		b = c;
		c = aux;
	}
	
	maior = c;
	inter = b;
	menor = a;
	
	printf("Maior=%.2f;\nInter=%.2f;\nmenor=%.2f.", maior, inter, menor);
	
	return 0;
}
