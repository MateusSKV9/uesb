#include <stdio.h>

int main() {
	int l, c, t;
	
	for(l=1; l<=10; l++) {
	
		printf("%d-%d \n", l, l);
		for(t=1; t<=l; t++) {
			printf("\t");
		}

	}
	
	return 0;
}
