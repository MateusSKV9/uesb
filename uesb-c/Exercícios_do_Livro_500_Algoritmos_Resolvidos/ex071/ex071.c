#include <stdio.h>

int main() {
	int horas, min, minT;
	
	printf("Digite a hora atual: ");
	scanf(" %d", &horas);
	printf("Digite os minutos atuais: ");
	scanf(" %d", &min);
	
	minT = horas*60 + min;
	
	printf("Total de minutos: %d", minT);
	return 0;
}
