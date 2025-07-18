#include <stdio.h>

int main () {
	float a, b, c;
	
	printf("Digite o lado 1: ");
	scanf("%f", &a);
	printf("Digite o lado 2: ");
	scanf("%f", &b);
	printf("Digite o lado 3: ");
	scanf("%f", &c);
	
	if((a+b>c) && (a+c>b) && (b+c>a)) {
		printf("Estes lados formam um triangulo");
	} else {
		printf("Estes lados nao podem formar um triangulo");
	}
	
	return 0;
}
