#include <stdio.h>

int main() {
	float num, den;
	
	printf("Digite o numerador: ");
	scanf(" %f", &num);
	printf("Digite o denomiador: ");
	scanf(" %f", &den);
	
	printf("Resultado: %.2f", (num/den));
	
	return 0;
}
