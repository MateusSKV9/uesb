#include <stdio.h>
//100000
//  1000  
//    10

main () {
	int data, dia, mes, ano;
	printf("Digite data no formato ddmmaa: ");
	scanf(" %d", &data);
	
	dia = data/10000;
	mes = (data%10000)/100;
	ano = (data%100);
	printf("DIA: %d \n", dia);
	printf("MES: %d \n", mes);
	printf("ANO: %d \n", ano);
}
