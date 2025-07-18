#include <stdio.h>

int main () {
	int n, novoN;
	
	printf("Digite um numero de 4 decimais: ");
	scanf("%d", &n);
	
	novoN = n/100;
	
	if(novoN%4==0) {
		printf("%d e divisivel por 4", novoN);
	} else {
		printf("%d nao e divisivel por 4", novoN);
	}
	
	return 0;
}
