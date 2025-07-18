#include <stdio.h>

int main () {
	int data, dia, mes, ano;
	
	printf("Digite a data no formato ddmmaa: ");
	scanf(" %d", &data);
	
	dia = data/10000;
	mes = (data%10000)/100;
	ano = (data%100);
	
	printf("DIA: %d \n", dia);
	printf("MES: %d\n", mes);
	printf("ANO: %d\n", ano);
	printf("\nDATA NO FORMATO MMDDAA: %d%d%d", mes, dia, ano);
}
