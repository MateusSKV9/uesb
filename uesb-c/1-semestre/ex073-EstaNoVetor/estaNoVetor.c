#include <stdio.h>

int main () {
	int num, array[10], qtd=0;
	
	int i;
	for(i=0; i<10; i++) {
		printf("Digite o valor da pos[%d]: ", i);
		scanf("%d", &array[i]);
	}
	
	printf("Digite um numero: ");
	scanf("%d", &num);
	
	for(i=0; i<10; i++) {
		if(num==array[i]) {
			qtd++;
			if(qtd==1) {
				printf("Esta no vetor!\n");
			}	
		}
	}
	printf("Quantidade: %d", qtd);
		
	return 0;
}
