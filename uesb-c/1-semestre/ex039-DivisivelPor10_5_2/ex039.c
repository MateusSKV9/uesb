#include <stdio.h>

int main () {
	int n;
	
	printf("Digite um numero: ");
	scanf(" %d", &n);
	
	if(n%10 == 0) {
		printf("%d e divisivel por 10", n);
	} else if (n%5 == 0){
		printf("%d e divisivel por 5", n);
	} else if (n%2 == 0) {
		printf("%d e divisivel por 2", n);
	} else {
		printf("%d nao e divisivel por 10, 5 ou 2");
	}
	
	return 0;
}
