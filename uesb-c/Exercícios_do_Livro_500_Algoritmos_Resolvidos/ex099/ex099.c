#include <stdio.h>

int main () {
	int n, casaC;
	
	printf("Digite um numero de 3 casas de decimais: ");
	scanf("%d", &n);
	
	casaC = (n%100)/10;
	
	if(casaC%2==0) {
		printf("A dezena e par");
	} else {
		printf("A dezena e impar");
	}
	
	return 0;
}
