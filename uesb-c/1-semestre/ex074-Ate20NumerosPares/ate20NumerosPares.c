#include <stdio.h>

int main () {
	int num, vetor[20];
	
	int i = 0;
	while(i<=19) {
		printf("Digite um numero: ");
		scanf("%d", &num);
		
		if(num%2==0) {
			vetor[i] = num;
			printf("\tPosicao[%d]=%d \n", i, num);
			i++;
		}
	}
	
	return 0;
}
