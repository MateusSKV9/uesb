#include <stdio.h>
#include <math.h>

int main () {
	float a, b, c, diag;
	
	printf("Digite o lado 1: ");
	scanf(" %f", &a);
	printf("Digite o lado 2: ");
	scanf(" %f", &b);
	printf("Digite o lado 3: ");
	scanf(" %f", &c);
	
	diag = sqrt(pow(a, 2) + pow(b, 2) + pow(c, 2));
	printf("Diagonal: %.2f", diag);
}
