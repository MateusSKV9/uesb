#include <stdio.h>
#include <math.h>
//delta=(-b)^2 -4ac
//X1=[-b+sqrt(delta)]/2a
//X2=[-b-sqrt(delta)]/2a
main () {
	float a, b, c, r1, r2, delta;
	
	printf("Digite o valor de 'a': ");
	scanf(" %f", &a);
	printf("Digite o valor de 'b': ");
	scanf(" %f", &b);
	printf("Digite o valor de 'c': ");
	scanf(" %f", &c);
	printf("Equacao: %.1fx^2 + %.1fx + c = 0 \n", a, b, c);
	
	delta = (-b)*(-b) - (4*a*c);
	r1=(-b + sqrt(delta))/(2*a);
	r2=(-b - sqrt(delta))/(2*a);
	
	printf("Raiz 1: %.2f \n", r1);
	printf("Raiz 2: %.2f \n", r2);
	
	system("PAUSE");
}
