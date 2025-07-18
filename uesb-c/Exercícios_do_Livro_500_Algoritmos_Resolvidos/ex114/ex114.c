#include <stdio.h>

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
	
	printf("%.2f, %.2f", b, a);
	
	return 0;
}
