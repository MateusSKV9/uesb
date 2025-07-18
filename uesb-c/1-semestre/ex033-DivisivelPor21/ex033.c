#include <stdio.h> 

int main () {
	int n;
	
	printf("Digite um numero: ");
	scanf(" %d", &n);
	
	if(n%3==0 && n%7==0) {
		printf("%d e divisivel por 3 e 7", n);
	}
	
	return 0;
}
