#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {
	int matriz[5][3][3];
	srand(time(NULL));
	 
	int i, j, k;
	for(i = 0; i<5; i++) {
		for(j = 0; j<3; j++) {
			for(k = 0; k<3; k++) {
				matriz[i][j][k] = 0;
			}
		}
	}
	
	int posX = rand()%5;
	int posY = rand()%3;
	int posZ = rand()%3;
	
	matriz[posX][posY][posZ] = 1;
	
	int x, y, z;
	printf("+-----------------------+\n");
	printf("|                       |\n");
	printf("|  ENCONTRE O NUMERO 1  |\n");
	printf("|                       |\n");
	printf("+-----------------------+\n");
	
	do {
		do {
			printf("\nDigite a posicao no formato (X Y Z): ");
			printf("\nX: 0-4");
			printf("\nY: 0-2");
			printf("\nZ: 0-2\n> ");
			scanf("%d %d %d", &x, &y, &z);
				
			if((x<0 || x>4) || (y<0 || y>2) || (z<0 || z>2)) {
				printf("[ERRO]: Alguma dimensao esta invalida.\n");
			}	
		} while((x<0 || x>4) || (y<0 || y>2) || (z<0 || z>2));
		
		int dist = abs(posX - x) +abs(posY - y)+ abs(posZ - z);
		printf("\nAnalisando...");
		sleep(2);
		if(dist!=0) {
			printf("\nDistancia: %d\n", dist);
			sleep(1);
		}
	} while (matriz[x][y][z]!=matriz[posX][posY][posZ]);
	
	printf("\nParabens! Voce ganhou.");
	
	return 0;
}
