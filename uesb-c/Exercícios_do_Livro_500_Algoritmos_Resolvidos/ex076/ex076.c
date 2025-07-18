#include <stdio.h>

int main() {
	int num;
	
	printf("Digite um numero de um 0 a 60: ");
	scanf(" %d", &num);
	
	printf("Sucessor de %d", (num+1)%61);
	
	return 0;
}
