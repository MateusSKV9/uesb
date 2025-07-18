#include <stdio.h>

int main () {
	char resp;
	float a, b;
	printf("\t\t**************\n");
	printf("\t\t*Calculadores*\n");
	printf("\t\t**************\n");
	printf("\n\t\t+ Para somar\n");
	printf("\t\t- para subtrair\n");
	printf("\t\t* para multiplicar\n");
	printf("\t\t/ para dividir\n\t\t>");
	scanf(" %c", &resp);
	
		
	printf("\t\tDigite o primeiro numero: ");
	scanf("%f", &a);
	printf("\t\tDigite o segundo numero: ");
	scanf("%f", &b);
	
	printf("\nResultado: ");
	switch(resp) {
		case '+':
			printf("%.2f", (a+b)); break;
		case '-':
			printf("%.2f", (a-b)); break;
		case '*': 
			printf("%.2f", (a*b)); break;
		case '/':
			printf("%.2f", (a/b)); break;
		default:
			printf("Opcao invalida.");
	}
	
	return 0;
}
