#include <stdio.h>

int main () {
	int i, j=0;
	
	printf("(1, 1)\n");
	for(i=2; i<=10; i++) {
		printf("(%d, ", i);
		for(j=1; j<i; j++) {
			printf("%d, ", j);
		}
		printf("%d)\n", i);
		j++;
	} 
	
	return 0;
}
