#include <stdio.h>

int main () {
	int i, soma=0;
	
	for(i=1; i<=100; i++) {
		printf("%d ", i);
		soma+=i;
	}
	
	printf("\nSoma dos numeros: %d", soma);
	return 0;
}
