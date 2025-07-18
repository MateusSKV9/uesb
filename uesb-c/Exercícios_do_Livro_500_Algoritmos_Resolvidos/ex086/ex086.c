#include <stdio.h>

int main () {
	float n;
	
	printf("Digite um numero: ");
	scanf("%f", &n);
	
	if(n>0) {
		printf("POSITIVO");
	} else if(n<0) {
		printf("NEGATIVO");
	} else {
		printf("NULO");
	}
	
	return 0;
}
