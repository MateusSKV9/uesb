#include <stdio.h>

int main () {
	int dest, opV, valor;
	
	printf("Digite o numero do destino:\n(1)Regiao Norte\n(2)Regiao Nordeste\n(3)Regiao Centro-Oeste\n(4)Regiao Sul\n>");
	scanf("%d", &dest);
	printf("Escolha o numero da opcao: \n(1)Ida\n(2)Ida e Volta\n>");
	scanf("%d", &opV);
	
	switch(dest) {
		case 1:
			if(opV==1) {
				valor = 500;
			} else {
				valor = 900;
			}
			break;
		case 2:
			if(opV==1) {
				valor = 350;
			} else {
				valor = 650;
			}
			break;
		case 3:
			if(opV==1) {
				valor = 350;
			} else {
				valor = 600;
			}
			break;
		case 4:
			if(opV==1) {
				valor = 300;
			} else {
				valor = 550;
			}
			break;
		default:
			printf("Opcao invalida");
			valor = 0;
	}
	
	printf("Preco da passagem: %d", valor);
	
	return 0;
}
