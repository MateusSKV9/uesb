#include <stdio.h>

int main() {
	int l, c, t;
	
	printf("TODOS: \n");
	for(l=1; l<=10; l++) {
		for(c=(l+1); c<=10; c++) {
			printf("%d-%d \t", l, c);
		
		}
		printf("\n");
		for(t=1; t<=l; t++) {
			printf("\t");
		}
	}
	
	return 0;
}
