#include <stdio.h>

int main () {
	int n;
	
	printf("Digite um numero: ");
	scanf(" %d", &n);
	
	if(n%2==0) {
		printf("PAR");	
	} else {
		printf("IMPAR");
	}
	
	return 0;
}
