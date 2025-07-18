#include <stdio.h>

main () {
	float n1, n2, n3, n4, mediaP;
	
	printf("Digite o primeiro numero: ");
	scanf(" %f", &n1);
	printf("Digite o segundo numero: ");
	scanf(" %f", &n2);
	printf("Digite o terceiro numero: ");
	scanf(" %f", &n3);
	printf("Digite o quarto numero: ");
	scanf(" %f", &n4);

	mediaP = (n1*1 + n2*2 + n3*3 + n4*4)/(1+2+3+4);
	printf("Media ponderada: %.2f", mediaP);
}
