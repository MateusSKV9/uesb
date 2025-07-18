#include <stdio.h>

int main () {
	float saldoM, credito;
	
	printf("Digite o saldo medio: ");
	scanf("%f", &saldoM);
	
	if(saldoM>=0 && saldoM<=500) {
		credito = 0.02*saldoM + 0;
	} else if(saldoM>=501 && saldoM<=1000) {
		credito = 0.30*(1.02*saldoM);
	} else if(saldoM>=1001 && saldoM<=3000) {
		credito = 0.40*(1.02*saldoM);
	} else {
		credito = 0.50*(1.02*saldoM);
	}
	
	printf("Saldo medio: %.2f \n", saldoM);
	printf("Credito: %.2f", credito);
	
	return 0;
}
