#include <stdio.h>

int main () {
	int matriz[6][6], i, k;
	
	for(i = 0; i<6; i++) {
		for(k = 0; k<6; k++) {
			if(i==0 || i==5 || k==0 || k==5) {
				matriz[i][k] = 1;
			}
			if((i>= 1 && i<=4) && (k>=1 && k<=4)) {
				matriz[i][k] = 2;
			}
			if((i>= 2 && i<=3) && (k>=2 && k<=3)) {
				matriz[i][k] = 3;
			}
		}
	}
	
	for(i = 0; i<6; i++) {
		for(k = 0; k<6; k++) {
			printf("%d ", matriz[i][k]);
		}
		printf("\n");
	}	

	return 0;
}
