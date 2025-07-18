#include <stdio.h>

int main () {
	int n, prod=0;
	printf("Digite o tamanho dos vetores: ");
	scanf("%d", &n);
	
	int vetor1[n], vetor2[n], i;
	
	printf("VETOR 1: \n");
	for(i = 0; i < n; i++) {
		printf("Digite o %d valor: ", (i+1));
		scanf("%d", &vetor1[i]);
	}
	
	printf("VETOR 2: \n");
	for(i = 0; i < n; i++) {
		printf("Digite o %d valor: ", (i+1));
		scanf("%d", &vetor2[i]);
	}
	
	for(i = 0; i < n; i++) {
		prod+=(vetor1[i]*vetor2[i]);
	}
	
	printf("Produto: %d", prod);
	return 0;
}
