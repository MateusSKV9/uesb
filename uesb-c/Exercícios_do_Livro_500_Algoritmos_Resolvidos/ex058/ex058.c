#include <stdio.h>
#include <math.h>

int main () {
	float xnum1, xnum2, xnum3, x;
	
	printf("Digite o 1 valor: ");
	scanf(" %f", &xnum1);
	printf("Digite o 2 valor: ");
	scanf(" %f", &xnum2);
	printf("Digite o 3 valor: ");
	scanf(" %f", &xnum3);
	
	x = xnum1 + (xnum2/(xnum3+xnum1)) + 2*(xnum1-xnum2) + log2(64);
	
	printf("Valor de X: %.2f", x);
}

