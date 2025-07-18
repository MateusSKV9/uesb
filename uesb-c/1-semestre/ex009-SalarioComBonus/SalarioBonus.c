#include <stdio.h>

main () {
	float valorH=0, salMes=0, salAum=0;
	
	printf("Digite o valor por hora: ");
	scanf("%f", &valorH);
	
	salMes=valorH*(44);
	salAum=salMes + salMes*(0.12);
	printf("Total de horas trabalhadas por semana: 44\n");
	printf("> Salario normal: $%.2f \n", salMes);
	printf("> Salario com aumento de (12/100): $%.2f \n", salAum);
	
	system("PAUSE");
}
