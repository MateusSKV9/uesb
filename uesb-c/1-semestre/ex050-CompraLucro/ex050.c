#include <stdio.h>

int main () {
	float valorC, valorV;
	
	printf("Digite o valor de compra: ");
	scanf("%f", &valorC);
	
	if(valorC<10) {
		valorV = 1.70*valorC;
	} else if(valorC>=10 && valorC<30) {
		valorV = 1.50*valorC;
	} else if(valorC>=30 && valorC<50) {
		valorV = 1.40*valorC;
	} else {
		valorV = 1.30*valorC;
	}
	
	printf("Valor da venda: %.2f", valorV);
	return 0;
}
