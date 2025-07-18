#include <stdio.h>

int main () {
	float a, b;
	
	printf("Digite um numero (a): ");
	scanf(" %f", &a);
	printf("Digite outro numero (b): ");
	scanf(" %f", &b);
	
	if(a>b) {
		printf("%.2f e o maior", a);
	} else if(a<b) {
		printf("%.2f e o maior", b);
	}
	
	return 0;
}
