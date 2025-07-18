#include <stdio.h>

int main () {
	int num, vetor[20], i=0, m=0, n=1;
	
	while(i<20) {
		printf("Digite um valor: ");
		scanf("%d", &num);
	
		if(num%2==0) {
			if(m<=18) {
				vetor[m] = num;
				printf("\tInserido na Pos[%d] \n", m);
				m+=2;
				i++;
			}
		} else {
			if(n<=19) {
				vetor[n] = num;
				printf("\tInserido na Pos[%d] \n", n);
				n+=2;
				i++;
			}
		}			
	}
	
	return 0;
}
