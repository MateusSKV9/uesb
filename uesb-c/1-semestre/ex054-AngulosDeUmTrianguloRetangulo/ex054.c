#include <stdio.h>
#include <math.h>

int main () {
	float a, b, c, angA, angB, angC;
	
	printf("Digite o lado 1: ");
	scanf("%f", &a);
	printf("Digite o lado 2: ");
	scanf("%f", &b);
	printf("Digite o lado 3: ");
	scanf("%f", &c);
	
	if(a>b) {
		float aux = a;
		a = b;
		b = aux;
	}
	if(a>c) {
		float aux = a;
		a = c;
		c = aux;
	}
	if(b>c) {
		float aux = b;
		b = c;
		c = aux;
	}
	
	if((a+b>c) && (a+c>b) && (b+c>a)) {
		if(pow(c,2)==pow(a, 2)+pow(b, 2)) {
			angC = 90;
			angA = asin(a/c)*(180/M_PI);
			angB = 90 - angA;
		}	
	} else {
		printf("Estes lados nao formam um triangulo");
	}
	
	printf("Angulos: %.2f, %.2f e %.2f", angA, angB, angC);
	
	return 0;
}
