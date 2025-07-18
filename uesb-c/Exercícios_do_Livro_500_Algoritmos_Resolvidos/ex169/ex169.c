#include <stdio.h>

int main () {
	int l, c;
	
	for(l=1; l<=9; l++) {
		for(c=1; c<=(10-l); c++) {
			printf("%d-%d \t", l, c);
		}
		printf("\n");
	}
	
	return 0;
}
