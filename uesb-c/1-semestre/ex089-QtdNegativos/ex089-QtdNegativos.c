#include <stdio.h>

int main () {
	int vetor[5], cont=0;
	
	int i;
	for(i = 0; i<5; i++) {
		printf("Digite o %d numero: ", (i+1));
		scanf("%d", &vetor[i]);
	}
	
	printf("\nNUMEROS DIGITADOS: ");
	for(i = 0; i<5; i++) {
		printf("%d ", vetor[i]);
	}
	
	for(i = 0; i<5; i++) {
		if(vetor[i] < 0) {
			cont++;
		}
	}
	
	printf("\nQUANTIDADE DE NEGATIVOS: %d", cont);
	
	return 0;
}
