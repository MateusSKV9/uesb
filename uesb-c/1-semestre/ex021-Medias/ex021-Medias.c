#include <stdio.h>

int main() {
	int i;
	float a, b, c, media;
	
	printf("Digite o valor de 'i': ");
	scanf(" %d", &i);
	printf("Digite o valor de 'a': ");
	scanf(" %f", &a);
	printf("Digite o valor de 'b': ");
	scanf(" %f", &b);
	printf("Digite o valor de 'c': ");
	scanf(" %f", &c);	
	
	if(i%2==0) {
		media = (a+b+c)/3;
		printf("Media aritmetica: %.2f \n", media);
	} else {
		media = (a*2 + b*3 + c*4)/(2+3+4);
		printf("Media ponderada: %.2f \n", media);
	}
	
	return 0;
}
