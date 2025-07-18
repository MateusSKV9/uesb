#include <stdio.h>

int main () {
	float a, b;
	
	printf("Digite o primeiro numero: ");
	scanf(" %f", &a);
	printf("Digite o segundo numero: ");
	scanf(" %f", &b);
	
	if(a+b > 20) {
		printf("Resultado: %.f", (a+b+8));
	} else if(a+b < 20) {
		printf("Resultado: %.2f", (a+b-5));
	} 
	
	return 0;
}
