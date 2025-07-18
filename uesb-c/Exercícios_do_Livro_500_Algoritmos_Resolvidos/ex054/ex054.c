#include <stdio.h>

main () {
	float h, b;
	
	printf("Digite a altura do trinagulo: ");
	scanf(" %f", &h);
	printf("Digite a base do triangulo: ");
	scanf(" %f", &b);
	
	printf("Area de tringulo: %.2f", (h*b)/2);
}
