#include <stdio.h>

int main() {
	int peso, pesoG, pesoNG;
	
	printf("Digite o seu peso: ");
	scanf(" %d", &peso);
	
	pesoG = peso * 1000;
	pesoNG = pesoG + peso*0.12;
	
	printf("Peso em gramas: %d \n", pesoG);
	printf("Peso em gramas com acrecimo: %d", pesoNG);
	
	return 0;
}
