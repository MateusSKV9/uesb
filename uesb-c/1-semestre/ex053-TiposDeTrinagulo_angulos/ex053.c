#include <stdio.h>

int main () {
	float a, b, c;
	
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
		if(c*c>a*a+b*b) {
			printf("Triangulo obtusangulo");
		} else if(c*c<a*a+b*b) {
			printf("Trinagulo acutangulo");
		} else {
			printf("Triangulo retangulo");
		}
	}
	
	return 0;
}
