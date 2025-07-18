#include <stdio.h>
#include <math.h>

int main () {
	float r, perim, area;
	
	printf("Digite o raio do circulo: ");
	scanf(" %f", &r);
	
	perim = 2*M_PI*r;
	area = M_PI*pow(r, 2);
	
	printf("Perimetro: %.2f \n", perim);
	printf("Area: %.2f", area);
}
