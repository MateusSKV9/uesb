#include <stdio.h>

int main () {
	int calP, calS, calB, calT, opP, opS, opB;
	
	printf("Digite o numero do prato: \n(1)Vegetariano\n(2)Peixe\n(3)Frango\n(4)Carne\n>");
	scanf("%d", &opP);
	printf("Digite o numero da sobremesa: \n(1)Abacaxi\n(2)Sorvete diet\n(3)Mouse diet\n(4)Mouse chocolate\n>");
	scanf("%d", &opS);
	printf("Digite o numero da bebida: \n(1)Cha\n(2)Suco de laranja\n(3)Suco de melao\n(4)Refrigerante diet\n>");
	scanf("%d", &opB);
	
	switch(opP) {
		case 1: 
			calP = 180;
			break;
		case 2:
			calP = 230;
			break;
		case 3:
			calP = 250;
			break;
		case 4:
			calP = 350;
			break;
		default:
			printf("Opcao invalida");
			calP = 0;
	}
	
	switch(opS) {
		case 1: 
			calS = 75;
			break;
		case 2:
			calS = 110;
			break;
		case 3:
			calS = 170;
			break;
		case 4:
			calS = 200;
			break;
		default:
			printf("Opcao invalida");
			calS = 0;
	}
	
	switch(opB) {
		case 1:
			calB = 20;
			break;
		case 2:
			calB = 70;
			break;
		case 3:
			calB = 100;
			break;
		case 4: 
			calB = 65;
			break;
		default:
			printf("Opcao invalida");
			calB = 0;
	}
	
	calT = calP + calS + calB;
	printf("Total de calorias: %d", calT);
	
	return 0;
}
