#include <stdio.h>

int main () {
	int qtd, op, resp=1;
	float valor, total=0;
	
	while(resp==1) {
		printf("Digite escolha o numero do pedido: ");
		printf("\n(1)Suco - 2,00\n(2)Refri - 3,00\n(3)Pastel - 2,50\n(4)HotDog - 2,50\n(5)Misto - 3,50\n> Pedido: ");
		scanf("%d", &op);
		printf("Digite a quantidade: ");
		scanf("%d", &qtd);
		
		switch(op) {
			case 1:
				valor = 2; break;
			case 2:
				valor = 3; break;
			case 3:
				valor = 2.50; break;
			case 4:
				valor = 2.50; break;
			case 5:
				valor = 3.50; break;
			default:
				printf("Opcao invalida. Tente novamente.\n");
		}
	
		if(op>=1 & op<=5) {
			total += qtd*valor;
		}
		
		printf("Deseja fazer mais algum pedido? (1)Sim ou (0)Nao");
		scanf("%d", &resp);
	}
	
	printf("\nTotal a pagar: %.2f\n", total);
	
	return 0;
}
