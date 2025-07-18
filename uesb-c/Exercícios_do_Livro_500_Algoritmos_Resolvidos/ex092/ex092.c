#include <stdio.h>

int main () {
	float a, b;
	
	printf("Digite o numero 1: ");
	scanf("%f", &a);
	printf("Digite o numero 2: ");
	scanf("%f", &b);
	
	if(a+b > 20) {
		printf("%.2f", (a+b+8));
	} else {
		printf("%.2f", (a+b-5));
	}
	
	return 0;
}
