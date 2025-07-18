#include <stdio.h>

int main () {
	int l, c, t;
	
	for(l=2; l<=10; l++) {				
		for(t=(10-l); t>=1; t--) {
			printf("\t");
		}
		for(c=(12-l); c<=10; c++) {
	
			printf("%d-%d \t", l, c);
		}
		printf("\n");
	}
	
	return 0;
}
