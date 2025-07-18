#include <stdio.h>

int main () {
	float a, b, c;
	
	printf("Digite o 1 numero: ");
	scanf("%f", &a);
	printf("Digite o 2 numero: ");
	scanf("%f", &b);
	printf("Digite o 3 numero: ");
	scanf("%f", &c);
	
	if(a>b && a>c) {
		printf("Maior: %.2f", a);
	} else {
		if(b>c) {
			printf("Maior: %.2f", b);
		} else {
			printf("Maior: %.2f", c);
		}
	}
	
	return 0;
}
