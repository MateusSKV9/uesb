#include <stdio.h>

int main () {
	int n;
	
	printf("Digite um numero: ");
	scanf("%d", &n);
	
	if(n%5==0) {
		printf("E multiplo de 5");
	} else {
		printf("Nao e multiplo de 5");
	}
	
	return 0;
}
