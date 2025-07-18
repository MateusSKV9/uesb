#include <stdio.h>
#include <math.h>

int main () {
	float a, b, c, delta, r1, r2;
	
	printf("Digite o valor de a: ");
	scanf("%f", &a);
	printf("Digite o valor de b: ");
	scanf("%f", &b);
	printf("Digite o valor de c: ");
	scanf("%f", &c);
	
	delta = (b*b) - 4*a*c;
	
	if(delta >= 0) {
		r1 = (-b + sqrt(delta))/(2*a);
		r2 = (-b - sqrt(delta))/(2*a);
		
		printf("Raiz da equacao: %.2f e %.2f", r1, r2);	
	} else {
		printf("nao existem raizes reais");
	}
	
	return 0;
}
