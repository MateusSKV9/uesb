#include <stdio.h>

int main () {
	int mes, placa, numF, resp;
	
	printf("Digite o mes atual:\n(1)Jan\n(2)Fev\n(3)Mar\n(4)Abr\n(5)Mai\n(6)Jun\n(7)Jul\n(8)Ago\n(9)Set\n(0)Out\n>");
	scanf("%d", &mes);
	printf("Digite os numeros da placa: ");
	scanf("%d", &placa);
	
	numF = placa%10;
	
	printf("O IPVA ");
	switch(numF) {
		case 1:
			if(mes==1) {
				resp = 1;
			} else {
				resp = 0;
			}
			break;
		case 2:
			if(mes==2){
				resp = 1;
			} else {
				resp = 0;
			}
			break;
		case 3:
			if(mes==3){
				resp = 1;
			} else {
				resp = 0;
			}
			break;
		case 4:
			if(mes==4){
				resp = 1;
			} else {
				resp = 0;
			}
			break;
		case 5:
			if(mes==5){
				resp = 1;
			} else {
				resp = 0;
			}
			break;
		case 6:
			if(mes==6){
				resp = 1;
			} else {
				resp = 0;
			}
			break;
		case 7:
			if(mes==7){
				resp = 1;
			} else {
				resp = 0;
			}
			break;
		case 8:
			if(mes==8){
				resp = 1;
			} else {
				resp = 0;
			}
			break;
		case 9:
			if(mes==9){
				resp = 1;
			} else {
				resp = 0;
			}
			break;
		case 0:
			if(mes==0){
				resp = 1;
			} else {
				resp = 0;
			}
			break;
		default:
			printf("Mes invalido");
	}
	
	if(resp==1) {
		printf("vence neste mes");
	} else {
		printf("nao vence neste mes");
	}
	
	return 0;
}
