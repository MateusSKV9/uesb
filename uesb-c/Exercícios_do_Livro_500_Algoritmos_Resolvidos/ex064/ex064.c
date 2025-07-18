#include <stdio.h>

int main() {
	float tempC, tempF;
	
	printf("Digite a temperatura em graus: ");
	scanf(" %f", &tempC);
	
	tempF=(9*tempC+160)/5;
	
	printf("O valor da temperatura em graus fahrenheit e = %.2f", tempF);
	
	return 0;
}
