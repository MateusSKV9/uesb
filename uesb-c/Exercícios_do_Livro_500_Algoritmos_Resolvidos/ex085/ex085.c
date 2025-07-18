#include <stdio.h>

int main () {
	float a, b, c, max;
	
	printf("Digite o numero 1: ");
	scanf("%f", &a);
	printf("Digite o numero 2: ");
	scanf("%f", &b);
	printf("Digite o numero 3: ");
	scanf("%f", &c);
	
	if(a>b) {
		if(a>c) {
			max = a;
		} else {
			max = c;
		}
	} else {
		if(b>c) {
			max = b;
		} else {
			max = c;
		}
	}
	
	printf("Maior: %.2f", max);
	
	return 0;
}
