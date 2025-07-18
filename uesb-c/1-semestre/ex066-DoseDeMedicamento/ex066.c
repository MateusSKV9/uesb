#include <stdio.h>

int main () {
	int idade, dose, gotas;
	float peso;
	
	printf("Digite sua idade: ");
	scanf("%d", &idade);
	printf("Digite seu peso: ");
	scanf("%f", &peso);
	
	if(idade>=12) {
		if(peso>=60) {
			dose = 1000;
		} else {
			dose = 875;
		}
	} else {
		if(peso>=5 && peso<=9) {
			dose = 125;
		} else if(peso>=9.1 && peso<=16) {
			dose = 250;
		} else if(peso>=26.1 && peso<=24) {
			dose = 375;
		} else if(peso>=24.1 && peso<=30) {
			dose = 500;
		} else if(peso>30) {
			dose = 750;
		}
	}
	
	gotas = dose*20;
	
	printf("Dosagem: %d \nGotas: %d", dose, gotas);
	return 0;
}
