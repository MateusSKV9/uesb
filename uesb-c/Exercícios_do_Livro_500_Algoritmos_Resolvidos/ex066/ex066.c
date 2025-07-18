#include <stdio.h>

int main() {
	float litros, velM, temp, dis;
	
	printf("Digite a velocidade do carro: ");
	scanf(" %f", &velM);
	printf("Digite o tempo gasto: ");
	scanf(" %f", &temp);
	
	dis = temp * velM;
	litros = dis/12;
	
	printf("Velocidade: %.2f \n", velM);
	printf("Tempo: %.2f \n", temp);
	printf("Distancia: : %.2f \n", dis);
	printf("Litros: %.2f \n", litros);
	
	return 0;
}
