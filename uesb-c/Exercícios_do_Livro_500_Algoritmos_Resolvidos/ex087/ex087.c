#include <stdio.h>

int main () {
	char resp[8];
	
	printf("Digite a capital do Brasil: ");
	fgets(resp, sizeof(resp), stdin);
	
	if(resp=="Brasilia" || resp=="BRASILIA" || resp=="brasilia" || resp=="BRAZILIA") {
		printf("Resposta correta!");
	} else {
		printf("ERRADO! Estude mais.");
	}
	
	return 0;
}
