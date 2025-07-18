#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {
	int baldes[10][5][5], bolinha[10][5][5], distAndares[10], i, j, k;
	int xBuraco, yBuraco, dist, qtdMov=0, xBalde, yBalde, totalMov=0;
	srand(time(NULL));
	
	printf("\n+-------------------------+");
	printf("\n|                         |");
	printf("\n|     JOGO DA BOLINHA     |");
	printf("\n|                         |");
	printf("\n+-------------------------+");
	printf("\n\n");
	
	// PREENCHENDO MATRIZ BALDES
	for(i = 0; i<10; i++) {
		for(j = 0; j<5; j++) {
			for(k = 0; k<5; k++) {
				baldes[i][j][k] = 1;
			}
		}
	}
	
	// PREENCHENDO MATRIZ BOLINHA
	for(i = 0; i<10; i++) {
		for(j = 0; j<5; j++) {
			for(k = 0; k<5; k++) {
				bolinha[i][j][k] = 1;
			}
		}
	}
	
	// DEFININDO OS FUROS DOS BALDES
	for(i = 0; i<10; i++) {
		xBuraco = rand() % 5;
		yBuraco = rand() % 5;
		baldes[i][xBuraco][yBuraco] = 0;
	}
	
	// IMPRIMINDO BALDES COM FUROS
	for(i = 0; i<10; i++) {
		printf("ANDAR %d\n", (10-i));
		for(j = 0; j<5; j++) {
			for(k = 0; k<5; k++) {
				printf("%d ", baldes[i][j][k]);
			}
			printf("\n");
		}
		printf("\n");
	}
	
	// DEFININDO A POSIÇÃO INICIAL DA BOLINHA
	int xBolinha = rand() % 5;
	int yBolinha = rand() % 5;
	bolinha[0][xBolinha][yBolinha] = 5;
	
	int xback, yback, novaDist=0, x2back, y2back;	
	printf("----------- MOVIMENTOS -----------\n");
	// VERIFICANDO MOVIMENTOS
	for(i = 0; i<10; i++) {
		for(j = 0; j<5; j++) {
			for(k = 0; k<5; k++) {				
				if(baldes[i][j][k] == 0) {
					xBalde = j;
					yBalde = k;
					break;
				}
			}
		}
		
		printf("| Bolinha no andar %d em (%d, %d)\n", (10-i), xBolinha, yBolinha);
		printf("| Buraco no andar %d em (%d, %d)\n", (10-i), xBalde, yBalde);
		dist = abs(xBolinha - xBalde) + abs(yBolinha - yBalde);
		printf("> Distancia=%d\n", dist);
		
		// REINCIANDO VARIÁVEIS DE CONTROLE
		qtdMov=0;
		xback=0; 
		x2back=0; 
		yback=0; 
		y2back=0;
		while(dist!=0) {	
			// MOVIMENTAR PARA CIMA
			if(xBolinha!=0 && xback==0) {
				xBolinha--;
				printf("\t* Cima\n");
				qtdMov++;
				novaDist = abs(xBolinha - xBalde) + abs(yBolinha - yBalde);
				if(novaDist > dist) {
					printf("\t* Volta\n");
					xBolinha++;
					qtdMov++;
					xback++;
				} else if(novaDist<dist) {
					dist = novaDist;
					x2back++;
					continue;
				} else {
					xback=2;	
				}
			} else if (xback!=2){
				xback = 1;
			}
			
			// MOVIMENTAR PARA BAIXO
			if(xBolinha!=4 && xback==1 && x2back==0) {
				xBolinha++;
				printf("\t* Baixo\n");
				qtdMov++;
				novaDist = abs(xBolinha - xBalde) + abs(yBolinha - yBalde);
				if(novaDist > dist) {
					printf("\t* Volta\n");
					xBolinha--;
					qtdMov++;
					xback++;
				} else if(novaDist<dist) {
					dist = novaDist;	
					continue;
				} else {
					xback = 2;
				}
			}
			
			// MOVIMENTAR PARA ESQUERDA
			if(yBolinha!=0 && yback==0) {
				yBolinha--;
				printf("\t* Esquerda\n");
				qtdMov++;
				novaDist = abs(xBolinha - xBalde) + abs(yBolinha - yBalde);
				if(novaDist > dist) {
					printf("\t* Volta\n");
					yBolinha++;
					qtdMov++;
					yback++;
				} else if(novaDist<dist) {
					dist = novaDist;
					y2back++;			
					continue;
				} else {
					yback =1 ;
				}
			} else {
				yback = 1;
			}
			
			// MOVIMENTAR PARA DIREITA
			if(yBolinha!=4 && yback==1 && y2back==0) {
				yBolinha++;
				printf("\t* Direita\n");
				qtdMov++;
				novaDist = abs(xBolinha - xBalde) + abs(yBolinha - yBalde);
				if(novaDist > dist) {
					printf("\t* Volta\n");
					yBolinha--;
					qtdMov++;
					yback++;
				} else if(novaDist<dist) {
					dist = novaDist;
				} else {
					yback = 1;
				}
			}
		}
		totalMov+=qtdMov;
		distAndares[i] = qtdMov;
		printf("\n");
	}
	
	printf("----------- RESULTADOS -----------\n");
	printf("* Distancia total: %d\n", totalMov);
	printf("* Distancias: \n");
	for(i = 0; i<10; i++) {
		printf("\tAndar %d: %d\n", (10-i), distAndares[i]);
	}
	printf("* Distancia media dos andares: %.2f", (float)totalMov/10);
	
	return 0;
}

