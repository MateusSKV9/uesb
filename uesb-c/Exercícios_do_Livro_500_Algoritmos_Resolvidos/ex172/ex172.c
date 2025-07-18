#include <stdio.h>

int main () {
	int l, c;
	
	for(l=0; l<=9; l++) {
		for(c=0; c<=9; c++) {
			printf("%d-%d \t", l, c);
		}
		printf("\n");
	}
	
	return 0;	
}
