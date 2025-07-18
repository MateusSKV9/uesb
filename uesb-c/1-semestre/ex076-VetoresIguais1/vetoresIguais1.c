#include <stdio.h>

int main () {
	int num, vetor1[10], vetor2[10], qtd=0;
	
	int i = 0;
	printf("VETOR 1\n");
	for(i = 0; i<10; i++) {
		printf("Insira o valor da pos[%d]", i);
		scanf("%d", &vetor1[i]);
	}
	
	printf("\nVETOR 2\n");
	for(i = 0; i<10; i++) {
		printf("Insira o valor da pos[%d]", i);
		scanf("%d", &vetor2[i]);
	}
	
	for(i = 0; i<10; i++) {
		if(vetor1[i] == vetor2[i]) {
			qtd++;
		}
	}
	
	if(qtd==10) {
		printf("Vetores iguais");
	} else {
		printf("Vetores  diferentes");
	}
	
	return 0;
}
