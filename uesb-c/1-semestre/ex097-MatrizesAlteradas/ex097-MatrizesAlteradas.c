#include <stdio.h>

int main () {
	int matriz[10][10], aux;
	
	int i, k;
	for(i = 0; i<10; i++) {
		for(k =0; k<10; k++) {
			printf("Valor de pos[%d][%d]: ", i, k);
			scanf("%d", &matriz[i][k]);
		}
	}
	
	printf("\nMATRIZ ORIGINAL\n");
	for(i = 0; i < 10; i++) {
		for(k = 0; k < 10; k++) {
			printf("\t%d ", matriz[i][k]);
		}
		printf("\n");
	}
	
	printf("\n----------- L2 & L8 -----------\n");
	for(i = 0; i<10; i++) {
		for(k =0; k<10; k++) {
			if(i==1) {
				aux = matriz[i][k];
				matriz[i][k] = matriz[i+6][k];
				matriz[i+6][k] = aux;
			}
		}
	}
	printf("\nMATRIZ 01\n");
	for(i = 0; i < 10; i++) {
		for(k = 0; k < 10; k++) {
			printf("\t%d ", matriz[i][k]);
		}
		printf("\n");
	}
	
	printf("\n----------- C4 & C10 -----------\n");
	for(i = 0; i<10; i++) {
		for(k =0; k<10; k++) {
			if(k==3) {
				aux = matriz[i][k];
				matriz[i][k] = matriz[i][k+6];
				matriz[i][k+6] = aux;
			}
		}
	}
	printf("\nMATRIZ 02\n");
	for(i = 0; i < 10; i++) {
		for(k = 0; k < 10; k++) {
			printf("\t%d ", matriz[i][k]);
		}
		printf("\n");
	}
	
	printf("\n----------- DP & DS -----------\n");
	for(i = 0; i<10; i++) {
		for(k = 0; k<10; k++) {
			if(i==k) {
				aux = matriz[i][k];
				matriz[i][k] = matriz[(i)][(9-i)];
				matriz[(i)][(9-i)] = aux;
			}
		}
	}
	printf("\nMATRIZ 03\n");
	for(i = 0; i < 10; i++) {
		for(k = 0; k < 10; k++) {
			printf("\t%d ", matriz[i][k]);
		}
		printf("\n");
	}
	
	printf("\n----------- L5 & L10 -----------\n");
	for(i = 0; i<10; i++) {
		for(k = 0; k<10; k++) {
			if(i==4) {
				aux = matriz[i][k];
				matriz[i][k] = matriz[i+5][k];
				matriz[i+5][k] = aux;	
			}
		}
	}
	printf("\nMATRIZ 04\n");
	for(i = 0; i < 10; i++) {
		for(k = 0; k < 10; k++) {
			printf("\t%d ", matriz[i][k]);
		}
		printf("\n");
	}
	
	return 0;
}
