#include <stdio.h>

int main () {
	int n, m, cont;
	
	printf("Digite a primeira dimensao: ");
	scanf("%d", &n);
	printf("Digite a segunda dimensao: ");
	scanf("%d", &m);
	
	int array[n][m], vetorNum[m*n], vetorQtd[m*n], i, k, q, r, l, t, repet, w=0;
	
	for(i = 0; i < n; i++) {
		for(k = 0; k < m; k++) {
			printf("Valor de pos[%d][%d] = ", i, k);
			scanf("%d", &array[i][k]);
		}
	}
	
	for(i = 0; i < n; i++) {
		for(k = 0; k < m; k++) {
			cont=0;
			repet=1;
			for(q = 0; q < (n-i); q++) {
				for(r = 0; r < (m-k); r++) {
					if(array[i][k] == array[i+q][k+r]) {
						cont++;
					}
				}
			}	
	
			t = 1;
			while(array[i][m-1] == array[i+t][0]) {
				t++;
				cont++;
			}		
					
			for(l = 0; l<=w; l++) {
				if((vetorNum[l] == array[i][k])) {
					repet++;	
				}
			}
			if(repet==1) {
				vetorNum[w] = array[i][k];
				vetorQtd[w] = cont;
				w++;
			}		 	
		}
	}
	
	for(i = 0; i < w; i++) {
		if(vetorQtd[i]>=2) {
			printf("Numero %d se repete %d vezes\n", vetorNum[i], (vetorQtd[i]-1));
		}
	}
	
	return 0;
}
