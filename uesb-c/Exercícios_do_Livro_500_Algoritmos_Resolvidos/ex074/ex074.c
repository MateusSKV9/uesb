#include <stdio.h>

int main() {
	float sal, salP, totalS;

	printf("Digite o salario minimo: ");
	scanf(" %f", &sal);
	printf("Digite o seu salario: ");
	scanf(" %f", &salP);

	totalS = salP/sal;
	
	printf("Voce recebe %.2f salarios minimos", totalS);
	
	return 0;
}
