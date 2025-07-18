#include <stdio.h>

int main () {
	int a, b, i, j, div;
	
	printf("Digite o inicio do intervalo: ");
	scanf("%d", &a);
	printf("Digite o final do intervalo: ");
	scanf("%d", &b);
	
	printf("Numeros primos ENTRE %d e %d: ", a, b);
	for(i=(a+1); i<b; i++) {
		div=0;
		for(j=1; j<=i; j++) {
			if(i%j==0) {
				div++;
			}
		}
		
		if(div==2) {
			printf("%d ", i);
		}
	}
	
	return 0;
}
