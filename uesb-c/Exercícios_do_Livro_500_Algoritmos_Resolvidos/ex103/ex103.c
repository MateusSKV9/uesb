#include <stdio.h>

int main () {
	int anoN, anoA, idade;
	
	printf("Digite o seu ano de nascimento: ");
	scanf("%d", &anoN);
	printf("Digite o ano atual: ");
	scanf("%d", &anoA);
	
	if(anoA>anoN) {
		idade = anoA-anoN;
		printf("Idade: %d", idade);
	} else {
		printf("Ano de nascimento invalido");
	}
	
	return 0;
}
