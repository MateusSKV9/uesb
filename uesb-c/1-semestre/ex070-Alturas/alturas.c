#include <stdio.h>
// A MELHORAR
int main () {
	int qtdH=0, i;
	float alt, maiorH=0, menorH=99999, alturasM=0;
	char sexo;
	
	for(i=1; i<=2; i++) {
		printf("%d- Digite a altura: ", i);
		scanf("%f", &alt);
		printf("Digite o sexo, feminino(f/F) ou masculino(m/M): ");
		scanf(" %c", &sexo);
				
		if(sexo=='m' || sexo=='M') {
			qtdH++;
		} else {
			alturasM += alt;
		}
	
		if(alt>maiorH) {
			maiorH = alt;
		}
		
		if(alt<menorH) {
			menorH = alt;
		}
	}
	
	printf(" \nMaior: %.2f\n", maiorH);
	printf("Menor: %.2f\n", menorH);
	printf("Media de altura - mulheres: %.2f\n", (alturasM/(2-qtdH)));
	printf("Numero de homens: %d", qtdH);
	
	return 0;
}
