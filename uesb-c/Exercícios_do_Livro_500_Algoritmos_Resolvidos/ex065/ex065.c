#include <stdio.h>
#include <math.h>

int main() {
	float vol, alt, raio;
	
	printf("Digite a altura da lata: ");
	scanf(" %f", &alt);
	printf("Digite o raio da lata: ");
	scanf(" %f", &raio);
	
	vol = M_PI*pow(raio, 2)*alt;
	
	printf("Volume da lata = %.2f", vol);
	
	return 0;
}
