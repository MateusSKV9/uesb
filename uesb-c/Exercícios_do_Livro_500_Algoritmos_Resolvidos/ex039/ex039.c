#include <stdio.h>

main () {
	float num1, num2, media;
	
	printf("Ente com um numero: ");
	scanf(" %f", &num1);
	printf("Entre com outro numero: ");
	scanf(" %f", &num2);
	media = (num1+num2)/2;
	
	printf("Media: %.2f", media);
}
