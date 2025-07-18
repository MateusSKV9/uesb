#include <stdio.h>
#include <math.h>

int main () {
	float l, perim, area, diag;
	
	printf("Digite o lado do quadrado: ");
	scanf(" %f", &l);
	
	perim = 4*l;
	area = pow(l, 2);
	diag = sqrt(2*pow(l, 2));
	
	printf("Perimetro: %.2f \n", perim);
	printf("Area: %.2f \n", area);
	printf("Diagonal: %.2f", diag);
}
