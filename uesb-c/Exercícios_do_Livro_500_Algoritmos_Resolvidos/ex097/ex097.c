#include <stdio.h>

int main () {
	int n;
	
	printf("Digite um numero: ");
	scanf("%d", &n);
	
	if(n%10==0) {
		printf("Divisivel por 10");
	} else if(n%5==0) {
		printf("Divisivel por 5");
	} else if(n%2==0) {
		printf("Divisivel por 2");
	} else {
		printf("Nao e divisivel por 10, 5 ou 2");
	}

	return 0;
}
