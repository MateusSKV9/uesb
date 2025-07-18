#include <stdio.h>
#include <math.h>

int main () {
	float ang, rang;
	
	printf("Digite um angulo em graus: ");
	scanf(" %f", &ang);
	rang = ang*M_PI/180;
	printf("seno: %.2f \n", sin(rang));
	printf("co-seno: %.2f \n", cos(rang));
	printf("tangente: %.2f \n", tan(rang));
	printf("co-secante: %.2f \n", 1/sin(rang));
	printf("secante: %.2f \n", 1/cos(rang));
	printf("cotangente: %.2f\n", 1/tan(rang));
}
