#include <stdio.h>

void boasVindas () {
	printf("Ola!\n");
	printf("Bem-vindo! boa tarde! \n");
}

int digitaValor() {
	printf("Digite o primeiro valor: ");
	int valor;
	scanf("%d", &valor);
	return valor;
}

int soma(int a, int b) {
	int result = a+b;
	return result;
}

int multiplicacao(int a, int b) {
	int multiplicacao = a*b;
	return multiplicacao;
}

/*----------------- MAIN -----------------*/

int main() {	
	boasVindas();
	int var1, var2, var3;
	
	var1 = digitaValor();
	var2 = digitaValor();
	var3 = digitaValor();
	
	int var4 = soma(var1, var2);
	int var5 = multiplicacao(var2, var3);
	
	printf("Variaveis \n");
	printf("Valor 1: %d \n", var1);
	printf("Valor 2: %d \n", var2);
	printf("Valor 3: %d \n", var3);
	printf("Valor 4: %d \n", var4);
	printf("Valor 5: %d", var5);	

	return 0;
}