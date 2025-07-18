#include <stdio.h>
#include <stdio.h>
//INCOMPLETO
int main () {
	char nome[30];
	
	printf("Digite seu nome completo: ");
	scanf("%[^/\n]", nome);
	
	printf("Todo nome: %s \n", nome);
	printf("Primeiro caractere: %c \n", nome[0]);
	printf("Ultimo caractere: %c \n", nome[]);
	printf("Primeiro ate o terceiro caractere: \n");
	printf("Quarto caractere: \n");
	printf("Todos, menos o primeiro: \n");
	printf("Os dois ultimos: \n");
}
