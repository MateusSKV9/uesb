#include <stdio.h>
#include <math.h>

int main () {
	float n;
	
	printf("Digite um numero: ");
	scanf("%f", &n);
	
	if(n>=0) {
		printf("Raiz: %.2f", sqrt(n));
	} else {
		printf("Quadrado: %.2f", pow(n, 2));
	}
	
	return 0;
}
