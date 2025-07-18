#include <stdio.h>
//Questao 4
int main() {
	float a, b, c, d, e, f, x, y;
	
	printf("Digite a: ");
	scanf(" %f", &a);
	printf("Digite b: ");
	scanf(" %f", &b);
	printf("Digite c: ");
	scanf(" %f", &c);
	printf("Digite d: ");
	scanf(" %f", &d);
	printf("Digite e: ");
	scanf(" %f", &e);
	printf("Digite f: ");
	scanf(" %f", &f);
	
	x = (c*e-b*f)/(a*e-b*d);
	y = (a*f-c*d)/(a*e-b*d);
	
	printf("X = %.2f \n", x);
	printf("Y = %.2f \n", y);
	
	system("PAUSE");
	return 0;
}
