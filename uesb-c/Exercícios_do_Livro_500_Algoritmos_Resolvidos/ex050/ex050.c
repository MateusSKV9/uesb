#include <stdio.h>
#include <math.h>

main () {
	float base, alt, perim, area, diag;
	
	printf("Digite a base: ");
	scanf(" %f", &base);
	printf("Digite a altura: ");
	scanf(" %f", &alt);
	
	perim = 2*(base+alt);
	area = base * alt;
	diag = sqrt(pow(base, 2) + pow(alt, 2));
	
	printf("Perimetro: %.2f \n", perim);
	printf("Area: %.2f \n", area);
	printf("Diagonal: %.2f", diag);
}
