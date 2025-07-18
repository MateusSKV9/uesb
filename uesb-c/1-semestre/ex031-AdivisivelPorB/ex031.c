#include <stdio.h>

int main () {
	int a, b;
	
	printf("Digite um numero (A): ");
	scanf(" %d", &a);
	printf("Digite outro numero (B): ");
	scanf(" %d", &b);
	
	if(a%b == 0) {
		printf("%d e divisivel por %d", a, b);	
	} else {
		printf("%d nao e divisivel por %d", a, b);
	}
	
	return 0;
}
