#include <stdio.h>

int main () {
	char nome[20], sexo;
	int idade;
	
	printf("Digite seu nome: ");
	scanf("%[^/\n]", nome);
	printf("Digite seu sexo (m ou f): ");
	scanf(" %c", &sexo);
	printf("Digite sua idade: ");
	scanf(" %d", &idade);
	
	if(sexo=='f' && idade<25) {
		printf("%s - ACEITA", nome);
	} else {
		printf("%s - NAO ACEITA", nome);
	}
	
	return 0;
}
