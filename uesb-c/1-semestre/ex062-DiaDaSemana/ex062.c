#include <stdio.h>

int main () {
	int dia;
	
	printf("Digite o numero do dia:\n(1)Domingo\n(2)Segunda\n(3)Terca\n(4)Quarta\n(5)Quinta\n(6)Sexta\n(7)Sabado\n>");
	scanf("%d", &dia);
	
	switch(dia) {
		case 1:
			printf("Domingo"); break;
		case 2:
			printf("Segunda"); break;
		case 3:
			printf("Terca"); break;
		case 4: 
			printf("Quarta"); break;
		case 5:
			printf("Quinta"); break;
		case 6:
			printf("Sexta"); break;
		case 7:
			printf("Sabado"); break;
		default:
			printf("Dia invalido");
	}
	
	return 0;
}
