#include <stdio.h>

int main () {
	float n;
	
	printf("Digite um numero: ");
	scanf("%f", &n);
	
	if(n>20) {
		printf("%.2f", n);
	}
	
	return 0;
}
