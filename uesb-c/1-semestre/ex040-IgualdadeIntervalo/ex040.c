#include <stdio.h>

int main () {
	float n;
	
	printf("Digite um numero: ");
	scanf(" %f", &n);
	
	if(n == 5) {
		printf("E igual a 5");
	} else if(n == 200) {
		printf("E igual a 200");
	} else if(n == 400) {
		printf("E igual a 400");
	}
	
	if(n>=500 && n<=1000) {
		printf("\n500 <= %.2f <= 1000", n);
	} else {
		printf("\n%.2f nao esta no intervalo [500, 1000]", n);
	}
	
	return 0;
}
