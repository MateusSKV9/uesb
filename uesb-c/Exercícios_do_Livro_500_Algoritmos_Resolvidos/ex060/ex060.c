#include <stdio.h>

int main () {
	int termo1, razao, termo10;
	
	printf("Digite o primeiro termo: ");
	scanf(" %d", &termo1);
	printf("Digite a razao da PA: ");
	scanf(" %d", &razao);
	
	termo10 = termo1 + 9*razao;
	
	printf("0 10 termo da PA e: %d", termo10);
}
