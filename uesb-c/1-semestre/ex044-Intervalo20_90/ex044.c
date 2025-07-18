#include <stdio.h>

int main () {
	float n;
	
	printf("Digite um numero: ");
	scanf(" %f", &n);
	
	if(n>20 && n<90) {
		printf("20 < %.2f < 90", n);
	} else {
		printf("%.2f nao esta entre 20 e 90", n);
	}
	
	return 0;
}
