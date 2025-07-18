#include <stdio.h>

int main () {
	int freq;
	float nota;
	
	printf("Digite a frequencia: ");
	scanf("%d", &freq);
	printf("Digite o nota: ");
	scanf("%f", &nota);
	
	if(freq<=75) {
		printf("Reprovado");
	} else if(freq>75 && nota<=3) {
		printf("Reprovado");
	} else if(freq>75 && nota>3 && nota<=7) {
		printf("Exame");
	} else {
		printf("Aprovado");
	}
		
	return 0;
}
