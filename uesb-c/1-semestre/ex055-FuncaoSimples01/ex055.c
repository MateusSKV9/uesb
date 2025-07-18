#include <stdio.h>

int main () {
	float x, y;
	
	printf("Digite o valor de x: ");
	scanf("%f", &x);
	
	if(x<=1) {
		y = 1; 
	} else if(x>1 && x<=2) {
		y = 2;
	} else if(x>2 && x<=3) {
		y = x*x;
	} else {
		y = x*x*x;
	}
	
	printf("f(%.2f) = %.2f", x, y);
	
	return 0;
}
