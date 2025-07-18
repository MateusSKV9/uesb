#include <stdio.h>
// 100KWats = 1/7 salario
main () {
	float sal, watts, vGasto, vWatts, nValor;
	
	printf("Digite o salario minimo : ");
	scanf(" %f", &sal);
	printf("Digite o total de Kwatts: ");
	scanf(" %f", &watts);
	
	vGasto = (watts/100.0)*(1.0/7)*sal;
	vWatts = vGasto/watts;
	nValor = vGasto - 0.10*vGasto;
	
	printf("Valor em reais de cada quilowatt: %.2f \n", vWatts);
	printf("Valor total a ser pago: %.2f \n", vGasto);
	printf("Novo valor a ser pago: %.2f", nValor);
}
