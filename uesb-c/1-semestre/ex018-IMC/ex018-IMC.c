#include <stdio.h>

int main () {
	float peso, altu, imc;
	
	printf("Digite seu peso: ");
	scanf(" %f", &peso);
	printf("Digite sua altura: ");
	scanf(" %f", &altu);
	
	imc = peso/(altu*altu);
	
	if(imc < 18.5) {
		printf("Abaixo do peso\n");		
	} else if (imc>18.6 && imc<24.9) {
		printf("Peso ideal (parabens)\n");
	} else if (imc>25.0 && imc<29.9) {
		printf("Levemente acima do peso\n");
	} else if (imc>30.0 && imc<34.9) {
		printf("Obesidade grau I\n");
	} else if (imc>35.0 && imc<39.9) {
		printf("Obesidade grau II (severa)\n");
	} else {
		printf("Obesidade III (morbida)\n");
	}
	
	system("PAUSE");
	return 0;
}
