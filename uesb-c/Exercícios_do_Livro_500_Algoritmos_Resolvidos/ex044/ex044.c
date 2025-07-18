#include <stdio.h>
#include <math.h>

int main () {
	float num, base, logaritmo;
	
	printf("Entre com o logaritmando: ");
	scanf(" %f", &num);
	printf("Entre com a base: ");
	scanf(" %f", &base);
	logaritmo = log(num) / log(base);
	printf("Logaritmo de %.2f de base %.2f e %.2f", num, base, logaritmo);
}
