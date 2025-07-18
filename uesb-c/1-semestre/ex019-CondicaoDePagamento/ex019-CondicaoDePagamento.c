#include <stdio.h>

int main() {
	float valorP, op;
	
	printf("Digite o valor do produto: ");
	scanf(" %f", &valorP);
	
	printf("Digite o numero da operaçao: \n1-A vista em dinheiro ou cheque \n2-A vista no cartao de credito \n3-Em 2 vezes \n4-Em 3 vezes \n>");
	scanf(" %f", &op);
	if(op==1) {
		valorP-=0.15*valorP;
	} else if(op==2) {
		valorP-=0.10*valorP;
	} else if(op==3) {
		valorP=valorP;
	} else if (op==4){
		valorP+=0.05*valorP;
	} else {
		printf("Opçao invalida.");
	}
	
	printf("Valor a pagar: %.2f \n", valorP);
	
	return 0;
}
