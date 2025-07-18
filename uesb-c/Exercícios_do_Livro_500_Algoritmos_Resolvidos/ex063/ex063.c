#include <stdio.h>

int main () {
	float valorH, percDes, salB, salL;
	int tAulas;
	
	printf("Digite o valor da aula: ");
	scanf(" %f", &valorH);
	printf("Digite as horas trabalhadas: ");
	scanf(" %d", &tAulas);
	printf("Digite o percentual de desconto: ");
	scanf(" %f", &percDes);
	
	salB = valorH*tAulas;
	salL = salB - (percDes/100)*salB;
	
	printf("Salario bruto: %.2f \n", salB);
	printf("Salario líquido: %.2f", salL);
}
