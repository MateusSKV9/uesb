#include <stdio.h>
#include <math.h>

main () {
	printf("raiz: %.1f", sqrt(64));
	printf("\nraiz com exp e log e realint: %d", (int)(exp(1/2*log(64))));
	printf("\nraiz com exp e log sem realint: %.2f", exp(1/2*log(64)));
	printf("\n%.2f", sin(45*M_PI/180)+0.0001);
	printf("\npotencia com exp e log e formatar: %.2f", exp(3*log(8))+0.001);
	printf("\npotencia com exp e log sem formatar: %.2f", exp(3*log(8)));
	printf("\npotencia com operador ** e formatar: %.2f", pow(8,3));
	printf("\nraiz cubica: %f", exp(1/3*log(8)));
	printf("\nabsoluto: %d", abs(-8));
	printf("\nabsoluto: %d", abs(8));
	printf("\nconvertendo para inteiro 5.5: %d", (int)5.5);
	printf("\nConvertendo para inteiro 6.5: %d", (int)6.5);
	printf("\nconvertendo para inteiro 6.1 + 0.0001: %d", (int)(6.5+0.0001));
	printf("\nconvertendo para inteiro 5.45: %d", (int)5.45);
	printf("\nconvertendo para inteiro 5.51: %d", (int)5.51);
	printf("\nconvertendo para real 87: %.2f", (float)87);
	printf("\nconvertendo para int 3/4: %d\n", (int)3.0/4);
}
