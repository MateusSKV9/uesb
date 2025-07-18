#include <stdio.h>

int main () {
	int n;
	
	printf("Digite um numero: ");
	scanf("%d", &n);
	
	if(n%21==0) {
		printf("E divisivel por 3 e 7");
	} else {
		printf("Nao e divisivel por 3 e 7");
	} 
	
	return 0;
}
