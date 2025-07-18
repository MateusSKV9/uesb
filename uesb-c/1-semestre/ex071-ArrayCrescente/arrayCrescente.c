#include <stdio.h>

int main () {
	int arrayA[1000], valor;
	
	int i, k;
	for(i=0; i<1000; i++) {
		printf("Digite o valor [%d]: ", i);
		scanf("%d", &valor);
		arrayA[i]=valor;
	}
	
	for(i=0; i<1000; i++) {
		for(k=1; k<=(999-i); k++) {
			if(arrayA[i]>arrayA[i+k]) {
				int aux = arrayA[i];
				arrayA[i] = arrayA[i+k];
				arrayA[i+k] = aux;
			}
		}
	}

	for(i=0; i<1000; i++) {
		printf("%d ", arrayA[i]);
	}
	
	return 0;
}
