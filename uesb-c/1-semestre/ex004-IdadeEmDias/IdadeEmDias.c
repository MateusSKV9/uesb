#include <stdio.h>

main () {
	int dias=0, ano=0, mes=0, dia=0;
	
	printf("Digite quantos dias de vida voce tem: ");
	scanf(" %d", &dias);
	
	if(dias>=365) {
		ano = dias/365;
		dias-=ano*365;
	}
	if(dias>=30) {
		mes = dias/30;
		dias-=mes*30;
	}
	dia = dias;
	
	printf("Voce tem: \n");
	printf("* %d ano(s)\n", ano);
	printf("* %d mes(es)\n", mes);
	printf("* %d dia(s)\n", dia);
	
	system("PAUSE");
}
