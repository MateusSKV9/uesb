#include <stdio.h>

int main () {
	int idade;
	
	printf("Digite sua idade: ");
	scanf("%d", &idade);
	
	if(idade<16) {
		printf("Nao leitor");
	} else if(idade>=18 && idade<65) {
		printf("Eleitor obrigatório");
	} else {
		printf("Eleitor facultativo");
	}
	
	return 0;
}
