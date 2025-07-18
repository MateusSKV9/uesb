#include <stdio.h>
#include <math.h>

int main () {
	float peso, altu, imc;
	
	printf("Digite o peso: ");
	scanf("%f", &peso);
	printf("Digite a altura: ");
	scanf("%f", &altu);
	
	imc = peso/pow(altu, 2);
	
	if(imc<20) {
		printf("Abaixo do peso");
	} else if(imc>=20 && imc<=25) {
		printf("Peso normal");
	} else if(imc>25 && imc<=30) {
		printf("Sobre peso");
	} else if(imc>30 && imc<=40) {
		printf("Obeso");
	} else {
		printf("Obeso Mórbido");
	}
	
	return 0;
}
