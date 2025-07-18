#include <stdio.h>

int main () {
	int vetor1[10], vetor2[10], vetorUniao[20], vetorUniao2[100], vetorInter[20];
	int i, k, qtd=0, cont=0;
	
	printf("VETOR 1\n");
	for(i = 0; i<10; i++) {
		printf("Digite o %d numero: ", (i+1));
		scanf("%d", &vetor1[i]);
		
		for(k = 0; k < i; k++) {
			if(vetor1[i] == vetor1[k]) {
				printf("\tERRO! Numero ja existente.\n");
				i--;
			}
		}	
	}
	
	printf("VETOR 2\n");
	for(i = 0; i<10; i++) {
		printf("Digite o %d numero: ", (i+1));
		scanf("%d", &vetor2[i]);
		
		for(k = 0; k < i; k++) {
			if(vetor2[i] == vetor2[k]) {
				printf("\tERRO! Numero ja existente.\n");
				i--;
			}
		}
	}
	
	// VETOR UNIÃO
	for(i = 0; i < 10; i++) {
		vetorUniao[i] = vetor1[i];
		vetorUniao[i+10] = vetor2[i];				
	}
	for(i = 0; i < 20; i++) {
		for(k = 1; k < (20-i); k++) {
			if(vetorUniao[i]>vetorUniao[i+k]) {
				int aux = vetorUniao[i];
				vetorUniao[i] = vetorUniao[i+k];
				vetorUniao[i+k] = aux;
			}
		}				
	}
	for(i = 0; i<20; i++) {
		while(vetorUniao[i]==vetorUniao[i+1]) {
			i++;
		}
		vetorUniao2[qtd]=vetorUniao[i];
		qtd++;
	}
	
	// VETOR INTERCESSÃO
	for(i = 0; i<10; i++) {
		for(k = 0; k<10; k++) {
			if(vetor1[i]==vetor2[k]) {
				vetorInter[cont]=vetor1[i];
				cont++;
			}
		}
	}
	
	printf("------ VETORES ------\n");
	printf("VETOR 1: ");
	for(i = 0; i< 10; i++) {
		printf("%d ", vetor1[i]);
	}
	
	printf("\nVETOR 2: ");
	for(i = 0; i< 10; i++) {
		printf("%d ", vetor2[i]);
	}
	
	printf("\nVETOR UNIAO: ");
	for(i = 0; i<qtd; i++) {
		printf("%d ", vetorUniao2[i]);
	}
	
	printf("\nVETOR INTERCESSAO: ");
	if(cont==0) {
		printf("VAZIO");
	} else {
		for(i = 0; i<cont; i++) {
			printf("%d ", vetorInter[i]);
		}
	}
		
	return 0;
}
