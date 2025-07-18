#include <stdio.h>

int main () {
	float n;
	
	printf("Digite um numero: ");
	scanf("%f", &n);
	
	if(n>20) {
		printf("Maior que 20");
	} else if(n<20) {
		printf("Menor que 20");
	} else {
		printf("Igual a 20");
	}
	
	return 0;
}
