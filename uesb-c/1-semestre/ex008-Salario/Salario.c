#include <stdio.h>
// 8, 8, 8, 8, 8, 4
// Compilado diz a linha errada
main () {
	float valorH=0, salMes=0;
	
	printf("Digite o valor por hora: ");
	scanf("%f", &valorH);
	
	salMes=valorH*(44);
	printf("Total de horas trabalhadas por semana: 44\n");
	printf("Salario: $%.2f \n", salMes);
	
	system("PAUSE");
}
