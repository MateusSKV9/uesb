#include <stdio.h>
#include <stdlib.h>

main () {
	int num1, num2;
	
	printf("Entre com o dividendo: ");
	scanf(" %d", &num1);
	printf("Entre com o divisor: ");
	scanf(" %d", &num2);
	
	div_t divisao = div(num1, num2);
	
	printf("Dividendo: %d", num1);
	printf("\nDivisor: %d", num2);
	printf("\nQuociente: %d", divisao.quot);
	printf("\nResto: %d", divisao.rem);
}
