#include <stdio.h>

int main () {
	float a, b;
	
	printf("Digite o primeiro numero: ");
	scanf("%f", &a);
	printf("Digite o segundo numero: ");
	scanf("%f", &b);
	
	if(a==b) {
		printf("Iguais");
	} else {
		printf("Diferentes");
	}
	
	return 0;
}
