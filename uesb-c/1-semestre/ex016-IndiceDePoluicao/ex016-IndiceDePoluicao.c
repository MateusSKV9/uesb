#include <stdio.h>
#include <math.h>
//Questão 03
int main() {
	float indP;
	printf("Digite o indice de poluicao: ");
	scanf(" %f", &indP);
	
	if(indP>=5/100 && indP<=25/100) {
		printf("Indice aceitavel.\n");	
	} else if(fabs(indP-0.3) < 0.0001) {
		printf("Grupo 1 intimado a suspensao.\n");
	} else if(fabs(indP-0.4) < 0.0001) {
		printf("Grupos 1 e 2 intimados a suspensao.\n");
	} else {
		printf("Todos os 3 grupos intimados a suspensao.\n");
	}
	
	return 0;
}
