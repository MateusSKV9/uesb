#include <stdio.h>

int main () {
	int a, b;
	
	printf("Digite o primeiro valor: ");
	scanf(" %d", &a);
	printf("Digite o segundo valor: ");
	scanf(" %d", &b);
	
	if(a+b > 10) {
		printf("Soma dos valores:  %d", (a+b));
	}
	
	return 0;
}
