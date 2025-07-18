#include <stdio.h>
#include <math.h>

int main () {
	float n, raizN;
	
	printf("Digite um numero: ");
	scanf(" %f", &n);
	
	raizN = sqrt(n);
	
	if(raizN > 0 || raizN==0) {
		printf("Raiz de %.2f: %.2f", n, raizN);
	} else {
		printf("Quadrado de %.2f: %.2f", n, pow(n, 2));
	}
	
	return 0;
}
