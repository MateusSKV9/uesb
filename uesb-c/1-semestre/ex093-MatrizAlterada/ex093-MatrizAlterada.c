#include <stdio.h>
int main () {
	int matriz[10][10];
	
	int i, k;
	for(i = 0; i < 10; i++) {
		for(k = 0; k < 10; k++) {
			printf("Valor de pos[%d][%d] = ", i, k);
			scanf("%d", &matriz[i][k]);
		}
	}
	
	printf("\nMATRIZ ORIGINAL\n");
	for(i = 0; i < 10; i++) {
		for(k = 0; k < 10; k++) {
			printf("%d ", matriz[i][k]);
		}
		printf("\n");
	}
	
	int aux;
	for(i = 0; i < 10; i++) {
		for(k = 0; k < 10; k++) {
			if(i > k) {
				aux = matriz[i][k];
				matriz[i][k] = matriz[k][i];
				matriz[k][i] = aux;
			}
		}
	}
	
	printf("\nMATRIZ ALTERADA\n");
	for(i = 0; i < 10; i++) {
		for(k = 0; k < 10; k++) {
			printf("%d ", matriz[i][k]);
		}
		printf("\n");
	}
	
	return 0;
}
