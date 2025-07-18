#include <stdio.h>
// 1- Dizer se existe algum valor repetido no vetor.
// 1 2 3 1
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
	
	if(qtd>0) {
		printf("Existe valor repetido!");
	}
	
	return 0;
}
