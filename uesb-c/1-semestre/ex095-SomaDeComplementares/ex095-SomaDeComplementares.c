#include <stdio.h>

int main () {
	int vetorA[05], vetorB[50];
	
	int i;
	printf("VETOR A\n");
	for(i = 0; i<50; i++) {
		printf("Valor da pos[%d]= ", i);
		scanf("%d", &vetorA[i]);
	}
	
	printf("VETOR B\n");
	for(i = 0; i<50; i++) {
		printf("Valor da pos[%d]= ", i);
		scanf("%d", &vetorB[i]);
	}
	
	int soma=0;
	for(i = 0; i<50; i++) {
		soma+=(vetorA[i] - vetorB[49-i]);
	}
	
	printf("\n\nSoma: %d", soma);
	return 0;
}
