#include <stdio.h>

int main () {
	int idade;
	
	printf("Digite a sua idade: ");
	scanf("%d", &idade);
	
	printf("Valor a pagar: ");
	if(idade<=10) {
		printf("R$ 30,00");
	} else if(idade>10 && idade<=29) {
		printf("R$ 60,00");
	} else if(idade>29 && idade<=45) {
		printf("R$ 120,00");
	} else if(idade>45 && idade<=59) {
		printf("R$ 150,00");
	} else if(idade>59 && idade<=65) {
		printf("R$ 250,00");
	} else {
		printf("R$ 400,00");
	}
	
	return 0;
}
