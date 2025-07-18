#include <stdio.h>
//123
main () {
	int a, d, t;
	printf("Digite um numero de 3 casas: ");
	scanf(" %d", &a);
	d = (a/10)%10;
	printf("Algarismo da casa das dezenas: %d", d);
}
