#include <stdio.h>

main () {
	int num1, num2, prod;
	
	printf("Entre com um numero: ");
	scanf(" %d", &num1);
	printf("Entre com numero: ");
	scanf(" %d", &num2);
	prod = num1 * num2;
	printf("\nProduto: %d\n", prod);
}
