#include <stdio.h>

int main () {
	int matriz[3][3];
	
	int i, k;
	for(i = 0; i < 3; i++) {
		for(k = 0; k <3; k++) {
			printf("Entre com o valor da pos [%d][%d]", i, k);
			scanf("%d", &matriz[i][k]);
		}
	}
	
	printf("\nMATRIZ \n");
	for(i = 0; i < 3; i++) {
		for(k = 0; k <3; k++) {
			printf("Posicao: [%d][%d] = %d \n", i, k, matriz[i][k]);
		}
	}
	
	printf("\nELEMENTOS DA DIAGONAL PRINCIPAL\n");
	for(i = 0; i < 3; i++) {
		for(k = 0; k <3; k++) {
			if(i == k) {
				printf("Posicao: [%d][%d] = %d \n", i, k, matriz[i][k]);
			}	
		}
	}
	
	int cont = 0;
	for(i = 0; i < 3; i++) {
		for(k = 0; k <3; k++) {
			if(i>k && matriz[i][k] == 0) {
				cont++;
			}
		}
	}
	
	if(cont==3) {
		printf("\nMATRIZ TRIANGULAR INFERIOR");
	}
		
	printf("\nELEMENTOS DA DIAGONAL SECUNDARIA\n");
	for(i = 0; i < 3; i++) {
		for(k = 0; k <3; k++) {
			if(i+k == 2) {
				printf("Posicao: [%d][%d] = %d \n", i, k, matriz[i][k]);
			}
		}
	}
	
	return 0;
}
