#include <stdio.h>
#include <math.h>

int main () {
	float sald, novoS;
	
	printf("Digite o saldo: ");
	scanf(" %f", &sald);
	
	novoS = sald + 0.01*sald;
	printf("Saldo com reajuste: %.2f", novoS);
}
