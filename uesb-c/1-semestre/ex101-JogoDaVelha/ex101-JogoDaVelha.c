#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// Mateus Santos & Alisson Lívio

int main () {
	char jogadas[3][3], registros[9], charU, charJogada;
	int i, k, intU=1, vitoria=0, vez, jogada, a, cont, casoV;
	
	printf("+-----------------------+\n");
	printf("|                       |\n");
	printf("|     JOGO DA VELHA     |\n");
	printf("|                       |\n");
	printf("+-----------------------+\n");
	printf("\n\n");
	
	//PREENCHENDO MATRIZ
	for(i = 0; i<3; i++) {
		for(k = 0; k<3; k++) {
			//CONVERTENDO PARA CHAR
			charU = intU + '0';
			jogadas[i][k] = charU;
			intU++;
		}
	}
	
	//IMPRESSÃO DA MATRIZ ORIGINAL
	printf("-- INICIO --\n");
	for(i = 0; i<3; i++) {
		for(k = 0; k<3; k++) {
			if(k<2) {
				printf(" %c |", jogadas[i][k]);
			} else {
				printf(" %c ", jogadas[i][k]);
			}
		}
		printf("\n");
	}
	printf("\n");
	
	//PREENCHENDO VETOR DE REGISTRO DE JOGADAS PARA NÃO OBTER VALOR LIXO
	for(i=0; i<9; i++) {
		registros[i]= 'a';
	}
	
	printf("> Escolha a posicao <\n");
	
	//LOOP DE JOGADAS
	for(vez = 0; vez<9; vez++) {
		if(vez%2==0) {
			//VEZ DO JOGADOR 1
			printf("Jogador 01 (X): ", vez);
			scanf("%d", &jogada);
			charJogada = jogada + '0';
			
			//VERIFICANDO SE A POSIÇÃO JÁ FOI ESCOLHIDA
			cont=0;
			for(a = 0; a<9; a++) {
				if(charJogada==registros[a]) {
					cont++;
				} 
			}
			
			//REGISTRANDO JOGADAS
			if(cont==0) {
				registros[vez] = charJogada;
			}
			
			//VERIFICANDO JOGADA
			if(cont>0) {
				sleep(1);
				printf("[ERRO] Posicao ja ocupada. Tente novamente.\n");
				vez--;
			} else {
				sleep(1);
				switch(charJogada) {
					case '1': 
						jogadas[0][0] = 'X';
						break;
					case '2': 
						jogadas[0][1] = 'X';
						break;
					case '3': 
						jogadas[0][2] = 'X';
						break;
					case '4': 
						jogadas[1][0] = 'X';
						break;
					case '5': 
						jogadas[1][1] = 'X';
						break;
					case '6': 
						jogadas[1][2] = 'X';
						break;
					case '7': 
						jogadas[2][0] = 'X';
						break;
					case '8': 
						jogadas[2][1] = 'X';
						break;
					case '9': 
						jogadas[2][2] = 'X';
						break;
					default:
						printf("Opcao invalida.\n");
						vez--;
				}
			}			
		} else {
			//VEZ DO JOGADOR 2
			printf("Jogador 02 (O): ", vez);
			scanf("%d", &jogada);
			charJogada = jogada + '0';
			
			cont=0;
			for(a = 0; a<9; a++) {
				if(charJogada==registros[a]) {
					cont++;
				}
			}
			
			if(cont==0) {
				registros[vez] = charJogada;
			}
			
			if(cont>0) {
				sleep(1);
				printf("[ERRO] Posicao ja ocupada. Tente novamente.\n");
				vez--;
			} else {
				sleep(1);
				switch(charJogada) {
					case '1': 
						jogadas[0][0] = 'O';
						break;
					case '2': 
						jogadas[0][1] = 'O';
						break;
					case '3': 
						jogadas[0][2] = 'O';
						break;
					case '4': 
						jogadas[1][0] = 'O';
						break;
					case '5': 
						jogadas[1][1] = 'O';
						break;
					case '6': 
						jogadas[1][2] = 'O';
						break;
					case '7': 
						jogadas[2][0] = 'O';
						break;
					case '8': 
						jogadas[2][1] = 'O';
						break;
					case '9': 
						jogadas[2][2] = 'O';
						break;
					default:
						printf("Opcao invalida.\n");
						vez--;
				}
			}
		}
		
		for(i = 0; i<3; i++) {
			for(k = 0; k<3; k++) {
				if(k<2) {
					printf(" %c |", jogadas[i][k]);
				} else {
					printf(" %c ", jogadas[i][k]);
				}
			}
			printf("\n");
		}
		printf("\n");

		//CASOS DE VITÓRIA
		for(i = 0; i<3; i++) {
			for(k = 0; k<3; k++) {
				if(jogadas[i][0] == jogadas[i][1] && jogadas[i][0] == jogadas[i][2] && jogadas[i][1]==jogadas[i][2]) {
					casoV=1;
					vitoria = 1;
				}
				if(jogadas[0][k] == jogadas[1][k] && jogadas[0][k] == jogadas[2][k] && jogadas[1][k]==jogadas[2][k]) {
					casoV=2;
					vitoria = 1;	
				}
				if(jogadas[0][0] == jogadas[1][1] && jogadas[0][0] == jogadas[2][2] && jogadas[1][1]==jogadas[2][2]) {
					casoV=3;
					vitoria = 1;
				}
				if(jogadas[0][2] == jogadas[1][1] && jogadas[0][2] == jogadas[2][0] && jogadas[1][1]==jogadas[2][0]) {
					casoV=4;
					vitoria = 1;
				}
			}
		}
		
		if(casoV==1) {
			printf("\nFechou uma linha.");
		} else if (casoV==2) {
			printf("\nFechou uma coluna.");
		} else if (casoV==3) {
			printf("\nFechou a diagonal principal.");
		} else if (casoV==4) {
			printf("\nFechou a diagonal secundaria.");
		}
		
		if(vitoria==1) {
			printf("\n--> GANHOU!");
			break;
		}
	}
	//CASO DE EMPATE
	if(vez==9 && vitoria==0) {
		printf("Deu velha!");
	}

	return 0;
}
