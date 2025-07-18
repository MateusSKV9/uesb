#include <stdio.h>

int main () {
	int matriz[5][5], somaP=0, somaS=0;
	
	int i, k;
	for(i = 0; i<5; i++) {
		for(k = 0; k<5; k++) {
			printf("Entre  com o valor da pos [%d][%d]", i, k);
			scanf("%d", &matriz[i][k]);
		}
	}
	
	for(i = 0; i<5; i++) {
		for(k = 0; k<5; k++) {
			if(i>k) {
				somaP+=matriz[i][k];
			}
			if(i+k <= 3) {
				somaS+=matriz[i][k];
			}
		}
	}
	
	printf("O resultado: %d", ((somaP-somaS)/10));
	
	return 0;
}
