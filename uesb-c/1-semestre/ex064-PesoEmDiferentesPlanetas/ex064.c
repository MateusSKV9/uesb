#include <stdio.h>

int main () {
	float peso, massa;
	int numP;
	
	printf("Digite seu peso: ");
	scanf("%f", &peso);
	printf("Digite o numero de um planeta:\n(1)Mercurio\n(2)Venus\n(3)Marte\n(4)Jupiter\n(5)Saturno\n(6)Urano\n>");
	scanf("%d", &numP);
	
	massa = peso/10;
	
	switch(numP) {
		case 1:
			peso = massa*0.37; break;
		case 2:
			peso = massa*0.88; break;
		case 3:
			peso = massa*0.38; break;
		case 4:
			peso = massa*2.64; break;
		case 5:
			peso = massa*1.15; break;
		case 6:
			peso = massa*1.17; break;
		default:
			printf("Opcao invalida");		 
	}
	
	if(numP>=1 && numP<=6) {
		printf("Seu peso no planeta escolhido: %.2f", peso);	
	} 
	
	return 0;
}
