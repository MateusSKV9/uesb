#include <stdio.h>

main () {
	int ano=0, mes=0, dia=0, totalDia=0;
	
	printf("Digite quantos anos voce tem: ");
	scanf(" %d", &ano);
	printf("Digite quantos meses voce tem (excluido os anos): ");
	scanf(" %d", &mes);
	printf("Digite quantos dias voce tem (excluidos os meses): ");
	scanf(" %d", &dia);
	
	totalDia = ano*365 + mes*30 + dia;
	printf("voce tem: %d dias de vida", totalDia);
	
	printf("\n");
	system("PAUSE");
}
