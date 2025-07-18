#include <stdio.h>
#include <stdlib.h>

int main () {
	int baldes[10][5][5], bolinha[10][5][5], distAndares[10], i, j, k;
	int xBuraco, yBuraco, dist, qtdMov=0, xBalde, yBalde, movAndar=0;
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
	
	printf("BALDES FURADOS\n\n");
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
	
	printf("--------- SPAWN BOLINHA ----------\n");
	printf("Bolinha: 5\n");
	for(i = 0; i<1; i++) {
		for(j = 0; j<5; j++) {
			for(k = 0; k<5; k++) {
				printf("%d ", bolinha[i][j][k]);
			}
			printf("\n");
		}
		printf("\n");
	}
	
	printf("----------- MOVIMENTOS -----------\n");
	for(i = 0; i<10; i++) {
		for(j = 0; j<5; j++) {
			for(k = 0; k<5; k++) {	
				// IDENTIFICANDO A COORDENADA DO FURO			
				if(baldes[i][j][k] == 0) {
					xBalde = j;
					yBalde = k;
					break;
				}
			}
		}
		
		printf("- Bolinha no andar %d em (%d, %d)\n", (10-i), xBolinha, yBolinha);
		printf("- Buraco no andar %d em (%d, %d)\n", (10-i), xBalde, yBalde);
		dist = abs(xBolinha - xBalde) + abs(yBolinha - yBalde);
		printf("\tDistancia da bolinha-buraco: %d\n", dist);
		
		movAndar=0;
		while((abs(xBolinha - xBalde) + abs(yBolinha - yBalde)) != 0) {
			if (xBolinha > xBalde) {
				xBolinha--;
				printf("\tPara cima.\n");
			} else if (xBolinha < xBalde) {
				xBolinha++;
				printf("\tPara baixo.\n");
			} else if (yBolinha > yBalde) {
				yBolinha--;
				printf("\tPara esquerda.\n");
			} else if (yBolinha < yBalde) {
				yBolinha++;
				printf("\tPara direita.\n");
			}
			qtdMov++;
			movAndar++;
		}
		distAndares[i]=movAndar;
		printf("\n");
	}
	
	printf("----------- RESULTADOS -----------\n");
	printf("* Distancia total: %d\n", qtdMov);
	printf("* Distancias: \n");
	for(i = 0; i<10; i++) {
		printf("\tAndar %d: %d\n", (10-i), distAndares[i]);
	}
	printf("* Distancia media dos andares: %.2f", (float)qtdMov/10);
	
	return 0;
}

