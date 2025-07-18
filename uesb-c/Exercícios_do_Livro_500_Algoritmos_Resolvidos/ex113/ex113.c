#include <stdio.h>

int main () {
	float a, b;
	
	printf("Digite o 1 numero: ");
	scanf("%f", &a);
	printf("Digite o 2 numero: ");
	scanf("%f", &b);
	
	if(a>b) {
		float aux = a;
		a = b;
		b = aux;
	}
	
	printf("%.2f<=%.2f", a, b);
	
	return 0;
}
