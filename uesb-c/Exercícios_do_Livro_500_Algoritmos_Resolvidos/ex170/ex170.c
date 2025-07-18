#include <stdio.h>

int main () {
	int l, c, t;
	
	for(l=1; l<=10; l++) {
		for(t=(10-l); t>=1; t--) {
			printf("\t");
		}
		printf("%d-%d", l, (11-1));
		printf("\n");
	}
	
	return 0;
}
