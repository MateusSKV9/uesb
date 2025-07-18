#include <stdio.h>

int main () {
	int a, b;
	
	printf("Digite o primeiro numero: ");
	scanf("%d", &a);
	printf("Digite o segundo numero: ");
	scanf("%d", &b);
	
	if(a+b > 10) {
		printf("%d", (a+b));
	}	
	
	return 0;
}
