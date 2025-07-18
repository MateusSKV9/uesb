#include <stdio.h>
#include <stdlib.h>

int main () {
	int level, totalVida=600, totalAP=0, itemAP, itemVida, qtd, extraVida=0, extraAP=0, opcao;
	
	do {
		printf("+-----------------------+\n");
		printf("|                       |\n");
		printf("|    JOGO DO VLADMIR    |\n");
		printf("|                       |\n");
		printf("+-----------------------+\n");
		printf("\n\n");
		
		printf("Digite o level (1-18): ");
		scanf("%d", &level);
		printf("Digite a quantidade de itens (0-6): ");
		scanf("%d", &qtd);
		
		if(level>=1 && level<=18 && qtd>=0 && qtd<=6) {
			totalVida += (level-1)*48;
			
				int i;
				for(i=1; i<=qtd; i++) {
					printf("Digite os atributos do item %d \n", i);
					printf("\t Vida:");
					scanf("%d", &itemVida);
					printf("\t AP: ");
					scanf("%d", &itemAP);
					
					extraVida += itemVida;
					extraAP += itemAP;
				}
				
				if(qtd==0) {
					extraVida = totalVida;
				} else {
					totalVida += extraVida;
					extraVida += (600+(level-1)*48);
				}
				
				int contWhile = 1;
				// FUNCIONAMENTO DA PASSIVA
				while(extraVida>=50 && extraAP!=1) {
					if(contWhile==1) {
						totalAP += ((extraVida)/50 + extraAP);
						extraAP = ((extraVida)/50 + extraAP);
					} else {
						totalAP += ((extraVida)/50);
						extraAP = ((extraVida)/50) + (extraAP%2);
					}
		
					if(extraAP>=2) {
						totalVida += (extraAP)/2;
						extraVida = (extraAP)/2 + (extraVida%50);
					}	
					contWhile++;
				}
				
				printf("> Total de vida: %d \n", totalVida);
				printf("> Total AP: %d\n", totalAP);
		} else {
			printf("\t#[ERRO]: Level e/ou quantidade de itens envalido(s)!\n");
		}
		
		printf("\nTentar novamente - Sim (1 ou qualquer numero) Nao(0): ");
		scanf("%d", &opcao);
		printf("\n");
		system("cls");
		
		totalVida = 600; totalAP = 0; extraVida = 0; extraAP = 0;
	} while(opcao!=0);
	
	return 0;
}
