#include <stdio.h>
//Questão 02
int main () {
	float numI, nota1, nota2, nota3, mediaE, mediaA;
	
	printf("Digite o numero de idenficacao");
	scanf(" %f", &numI);
	printf("Digite a nota 1: ");
	scanf(" %f", &nota1);
	printf("Digite a nota 2: ");
	scanf(" %f", &nota2);
	printf("Digite a nota 3: ");
	scanf(" %f", &nota3);
	printf("Digite a media dos exercicios: ");
	scanf(" %f", &mediaE);

	mediaA = (nota1 + nota2*2 + nota3*3 + mediaE)/7.0;
	
	if(mediaA < 4.0) {
		printf("Conceito: E\n");
	} else if(mediaA < 6.0) {
		printf("Conceito: D\n");
	} else if(mediaA < 7.5) {
		printf("Conceito: C\n");
	} else if(mediaA < 9.0) {
		printf("Conceito: B\n");
	} else {
		printf("Conceito: A\n");
	}
	system("PAUSE");
	return 0;
}
