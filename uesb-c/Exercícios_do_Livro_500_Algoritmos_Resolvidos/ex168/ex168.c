#include <stdio.h>

int main () {
	int l, c;
	
	for(l=2; l<=10 ;l++) {
		for(c=1; c<=(l-1); c++) {
			printf("%d-%d \t", l, c);
		}
		printf("\n");
	}
	
	return 0;
}
