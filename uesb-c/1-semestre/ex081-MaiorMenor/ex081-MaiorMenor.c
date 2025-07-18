#include <stdio.h>

int main () {
	int qtd, i;
	float n, maior=0, menor;
	
	printf("Digite a quantidade de numero: ");
	scanf("%d", &qtd);
	
	if(qtd>0) {
		printf("Digite o primeiro numero: ");
		scanf("%f", &menor);
		
		if(menor<0) {
			printf("\nPrograma Encerrado!\n");
			return 0;
		}
	
		if(qtd==1) {
			maior = menor;
		}	
	}
	
	for(i=0; i<(qtd-1); i++) {
		printf("Digite um numero: ");
		scanf("%f", &n);
	
		if(n>maior) {
			maior = n;
		}
	
		if(menor>maior) {
			maior = menor;
		}
	
		if(n<0) {
			break;
		}
		
		if(n<menor) {
			menor = n;
		}
	}
	
	printf("\nPrograma Encerrado!\n");
	if(qtd>0) {
		printf("Maior: %.2f \n", maior);
		printf("Menor: %.2f", menor);	
	}

	return 0;
}
