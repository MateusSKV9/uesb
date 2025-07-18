#include <stdio.h>

int main () {
	int n, pas=1, div=0;;
	
	printf("Digite um numero: ");
	scanf("%d", &n);
	
	while(pas<=n) {
		if(n%pas==0) {
			div++;
		}
		pas++;
	}
	
	if(div==2) {
		printf("%d e primo", n);
	} else {
		printf("%d nao e primo", n);
	}
	
	return 0;
}
