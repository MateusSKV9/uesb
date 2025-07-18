#include <stdio.h>

int main () {
	int matriz[8][8], maior=0;
	
	int i, k;
	for(i = 0; i<8; i++) {
		for(k = 0; k<8; k++) {
			printf("Valor da pos[%d][%d]: ", i, k);
			scanf("%d", &matriz[i][k]);
		}
	}
	
	printf("\nMATRIZ\n");
	for(i = 0; i<8; i++) {
		for(k = 0; k<8; k++) {
			printf("\t%d ", matriz[i][k]);
		}
		printf("\n");
	}
	
	for(i = 0; i<8; i++) {
		for(k = 0; k<8; k++) {
			if(i+k<=6) {
				if(maior<matriz[i][k]) {
					maior = matriz[i][k];
				}
			}
		}
	}
	
	printf("\nMaior: %d", maior);
	return 0;
}
