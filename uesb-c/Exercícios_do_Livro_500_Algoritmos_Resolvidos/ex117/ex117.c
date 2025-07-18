#include <stdio.h>

int main () {
	float a, b, c, maior, menor;
	
	printf("Digite o numero 1: ");
	scanf("%f", &a);
	printf("Digite o numero 2: ");
	scanf("%f", &b);
	printf("Digite o numero 3: ");
	scanf("%f", &c);
	
	maior = a;
	if(b>maior) {
		maior = b;
	}
	if(c>maior) {
		maior = c;
	}
	printf("Maior: %.2f", maior);
	
	return 0;
}
