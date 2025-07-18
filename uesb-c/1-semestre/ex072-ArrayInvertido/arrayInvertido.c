#include <stdio.h>

int main () {
	int array[10], valor;
	
	int i;
	for(i=0; i<10; i++) {
		printf("Digite o valor da pos[%d]: ", i);
		scanf("%d", &valor);
		array[i]=valor;
	}
	
	for(i=0; i<5; i++) {
		int aux = array[9-i];
		array[9-i] = array[i];
		array[i] = aux;
	}
	
	for(i=0; i<10; i++) {
		printf("%d ", array[i]);
	}
}
