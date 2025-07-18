#include <stdio.h>

int main () {
	int vetor[10], vetorImpar[5], vetorPar[5], cont=0;
	
	int i;
	for(i = 0; i<10; i++) {
		printf("Valor da pos[%d]= ", i);
		scanf("%d", &vetor[i]);
	}
	
	for(i = 0; i<10; i+=2) {
		vetorPar[cont] = vetor[i];
		vetorImpar[cont] = vetor[i+1];
		cont++;
	}
	
	printf("\n\nVETOR PAR\n");
	for(i = 0; i<5; i++) {
		printf("%d ", vetorPar[i]);
	}
	
	printf("\n\nVETOR IMPAR\n");
	for(i = 0; i<5; i++) {
		printf("%d ", vetorImpar[i]);
	}
	
	return 0;
}
