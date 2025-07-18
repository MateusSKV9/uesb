#include <stdio.h>

int main () {
	float x, y;
	
	printf("Digite um valor: ");
	scanf("%f", &x);
	
	if(x!=2) {
		y = 8/(2-x);
		printf("f(%.2f) = %.2f", x, y);
	} else {
		printf("Resultado invalido. Impossivel dividir por 0");
	}
	
	return 0;
}
