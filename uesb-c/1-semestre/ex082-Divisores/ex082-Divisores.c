#include <stdio.h>

int main () {
	int n, k, div=0;
	
	do {
		printf("Digite um numero: ");
		scanf("%d", &n);
		
		if(n!=999) {
			printf("Divisores: ");
			for(k=1; k<=n; k++) {
				if(n%k==0) {
					printf("%d ", k);
				}	
			}
			printf("\n\n");
		}
		
	} while (n!=999);
	
	printf("Fim do programa!");
	return 0;
}
