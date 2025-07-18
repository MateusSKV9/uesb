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
		if(a!=b && a!=c && b!=c) {
			printf("Eis um triangulo escaleno");
		} else if((a==b && b==c)) {
			printf("Eis um triangulo equilatero");
		} else {
			printf("Eis um triangulo isosceles");
		}
	} else {
		printf("Estes lados nao formam um triangulo");
	}
	
	return 0;
}
