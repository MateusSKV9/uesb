#include <stdio.h>
// 2- Dizer a quantidade de números repetidos.
// 1 2 3 1
// 1 2 1 2
int main () {
	int n, vetor1[4], qtd=0, i;
	
	for(i=0; i<4; i++) {
		printf("Digite o valor da pos[%d]: ", i);
		scanf("%d", &vetor1[i]);
	}
	
	int k;
	for(i=0; i<4; i++) {
		for(k=1; k<(4-i); k++) {
			if(vetor1[i]==vetor1[i+k]) {
				qtd++;
			}
		}
	}
	
	printf("Quantidade de numeros repetidos: %d", qtd);

	return 0;
}
