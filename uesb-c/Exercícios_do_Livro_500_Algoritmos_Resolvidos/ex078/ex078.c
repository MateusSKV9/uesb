#include <stdio.h>

int main() {
	int n, nd;
	
	printf("Digite o numero de lados do diagonal: ");
	scanf(" %d", &n);
	
	nd = n*(n-3)/2;
	
	printf("Total de diagonais do poligono de %d lados: %d", n, nd);
	
	return 0;
}
