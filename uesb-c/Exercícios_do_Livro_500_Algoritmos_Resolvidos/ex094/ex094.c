#include <stdio.h>

int main () {
	int n;
	
	printf("Digite um numero: ");
	scanf("%d", &n);
	
	if(n%3==0) {
		printf("E multiplo de 3");
	} else {
		printf("Nao e multiplo de 3");
	}
	
	return 0;
}
