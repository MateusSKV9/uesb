#include <stdio.h>
#include <math.h>

int main () {
	int num, c, d, u;
	
	printf("Digite um numero: ");
	scanf(" %d", &num);
	
	c = num / 100;
	d = (num / 10) % 10;
	u = num % 10; 
	
	printf("Resultado: \n");
	printf("%d%d%d \n", c, d, u);
	printf("%d%d%d \n", u, d, c);
}
