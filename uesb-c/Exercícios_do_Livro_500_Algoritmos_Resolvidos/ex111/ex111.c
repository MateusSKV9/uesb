#include <stdio.h>

int main () {
	float a, b;
	
	printf("Digite o primeiro numero: ");
	scanf("%f", &a);
	printf("Digite o segundo numero: ");
	scanf("%f", &b);
	
	if(a>b) {
		printf("%.2f", a);
	} else {
		printf("%.2f", b);
	}
	
	return 0;
}
