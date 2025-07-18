#include <stdio.h>
// 3- Dizer se os conteúdos de dois vetores são iguais, independente das posições.
// VETOR A: 1 3 0 2
// VETOR B: 0 2 1 3
int main () {
	int vetorA1[4], vetorA2[4], vetorB1[4], vetorB2[4], i, k, aux, qtd=0;
	
	printf("VETOR A2 \n");
	for(i=0; i<4; i++) {
		printf("Digite o valor da pos[%d]: ", i);
		scanf("%d", &vetorA1[i]);		
		vetorA2[i] = vetorA1[i];
	}
	
	printf("\nVETOR B1 \n");
	for(i=0; i<4; i++) {
		printf("Digite o valor da pos[%d]: ", i);
		scanf("%d", &vetorB1[i]);
		vetorB2[i] = vetorB1[i];
	}
	
	for(i=0; i<4; i++) {
		for(k=1; k<(4-i); k++) {
			if(vetorA2[i]>vetorA2[i+k]) {
				aux = vetorA2[i];
				vetorA2[i] = vetorA2[i+k];
				vetorA2[i+k] = aux;
			}
		}		
	}
	
	for(i=0; i<4; i++) {
		for(k=1; k<(4-i); k++) {
			if(vetorB2[i]>vetorB2[i+k]) {
				aux = vetorB2[i];
				vetorB2[i] = vetorB2[i+k];
				vetorB2[i+k] = aux;
			}
		}
	}
	
	for(i=0; i<4; i++) {
		if(vetorA2[i]==vetorB2[i]) {
			qtd++;
		}
	}
	
	if(qtd==4) {
		printf("\nVetores iguais!");
	} else {
		printf("\nVetores diferentes!");
	}
	
	return 0;
}
