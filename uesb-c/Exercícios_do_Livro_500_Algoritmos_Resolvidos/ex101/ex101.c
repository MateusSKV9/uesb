#include <stdio.h>

int main () {
	float n;
	
	printf("Digite um numero: ");
	scanf("%f", &n);
	
	if(n>20 && n<90) {
		printf("Esta no intervalo ]20, 90[");
	} else {
		printf("Nao esta no intervalo ]20, 90[");
	}
		
	return 0;
}
