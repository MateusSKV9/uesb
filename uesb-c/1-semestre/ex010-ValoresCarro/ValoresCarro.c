#include <stdio.h>

main () {
	float valorC, impF, impE, lic, impT, valorT;
	
	printf("Digite o valor do carro: ");
	scanf("%f", &valorC);
	
	impF = 0.36*valorC;
	impE = 0.19*valorC;
	impT = impF + impE;
	valorT = valorC + impT;
	lic = 0.04*valorT;
	
	printf("Valor total de impostos: %.2f + %.2f = %.2f \n", impF, impE, impT);
	printf("Valor total pago: %.2f \n", valorT);
	printf("Valor do licenciamento: %.2f \n", lic);
	
	system("PAUSE");
}
