#include <stdio.h>
#include <math.h>

int main () {
	float x, y;
	
	printf("Digite um valor: ");
	scanf("%f", &x);
	
	if(x!=4 && x!=-4) {
		y = (5*x+3)/(sqrt(x*x-16));
		if(sqrt(x*x-16) > 0) {
			printf("f(%.2f) = %.2f", x, y);	
		} else {
			printf("Resultado invalido");
		}
	} else {
		printf("Imposssivel dividir por 0");
	}
	
	return 0;
}
