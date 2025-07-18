#include <stdio.h>

main () {
	int x=0, potencia;
	
	printf("Digite um numero: ");
	scanf("%d", &x);
	
	potencia=x*x*x*x*x;
	printf("Resultado: %d^5=%d \n", x, potencia);
	system("PAUSE");
}
