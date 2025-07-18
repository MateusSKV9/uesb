#include <stdio.h>
#include <math.h>

int main () {
	int num, den, i, j=50;
	float frac=0;
	
	for(i=1; i<=50; i++) {
		printf("(2^%d/%d)", i, j);
			
		if(i%2==0) {
			frac-=(pow(2, i)/j);
			if(i!=50) {
				printf(" + ");	
			}
		} else {
			printf(" - ");
			frac+=(pow(2, i)/j);
		}	
		j--;	
	}
	
	printf("\n\nResultado: %.2f", frac);
	return 0;
}
