#include <stdio.h>

int main () {
	int x, y, res;
	
	printf("Digite a base: ");
	scanf("%d", &x);
	printf("Digite o expoente: ");
	scanf("%d", &y);
	
	res = x;
	while(y>1) {
		res*=x;
		y--;
	}
	
	if(y==0) {
		res = 1;
	}
	
	printf("Resultado: %d", res);
	return 0;
}
