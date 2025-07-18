#include <stdio.h>
#include <math.h>

int main () {
	int termo1, razao, termo5;
	
	printf("Digite o primeiro termo: ");
	scanf(" %d", &termo1);
	printf("Digite a razao: ");
	scanf(" %d", &razao);
	
	termo5 = termo1*pow(razao, 5);
	
	printf("o 5 termo e: %d", termo5);
}
