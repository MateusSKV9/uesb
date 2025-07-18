#include <stdio.h>

int main () {
	float a, b, c, maior, inter, menor;
	
	printf("Digite o numero 1: ");
	scanf("%f", &a);
	printf("Digite o numero 2: ");
	scanf("%f", &b);
	printf("Digite o numero 3: ");
	scanf("%f", &c);
	
	if(a>b)
	
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
	maior = c;
	inter = b;
	menor = a;
	
	printf("Maior: %.2f\n", maior);
	printf("Intermediario: %.2f\n", inter);
	printf("Menor: %.2f", menor);
	
	return 0;
}
