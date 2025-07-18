#include <stdio.h>

int main () {
	int idade;
	char nome[30];
	
	printf("Digite o seu nome: ");
	scanf("%[^/\n]", nome);
	printf("Digite sua idade: ");
	scanf(" %d", &idade);
	
	printf("\nNome: %s \n", nome);
	printf("Idade: %d", idade);
}
