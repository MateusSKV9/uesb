#include <stdio.h>
#include <math.h>

int main () {
	float c1, c2, hip;
	
	printf("Digite o primeiro cateto: ");
	scanf(" %f", &c1);
	printf("Digite o segundo cateto: ");
	scanf(" %f", &c2);
	
	hip = sqrt(pow(c1, 2) + pow(c2, 2));
	printf("Hipotenusa: %.2f", hip);
}
