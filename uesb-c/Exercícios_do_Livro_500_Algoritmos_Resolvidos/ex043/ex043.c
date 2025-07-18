#include <stdio.h>
#include <math.h>

main () {
	float n;
	
	printf("Digite um número: ");
	scanf(" %f", &n);
	printf("O log de %.2f é %.2f", n, log10(n));
}

