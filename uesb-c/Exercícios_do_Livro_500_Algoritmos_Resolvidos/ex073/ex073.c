#include <stdio.h>
//incompleto
int main () {
	float num, numfrac;
	int numi, numa;
	
	printf("Digite o numero com parte  fracionaria: ");
	scanf(" %f", &num);
	numi = (int)(num-0.5);
	numfrac=num-numi;
	numa=(int)(num+0.00001);
	
	printf("Parte inteira: %d \n", numi);
	printf("Parte fracionaria %.2f \n", numfrac);
	printf("Numero arredondado: %f \n", numa);
	
	return 0;
}
