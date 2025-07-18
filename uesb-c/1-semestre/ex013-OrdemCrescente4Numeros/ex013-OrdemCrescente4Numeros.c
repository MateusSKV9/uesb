#include <stdio.h>

main () {
	int a, b, c, d;
	
	printf("Digite o numero 1: ");
	scanf(" %d", &a);
	printf("Digite o numero 2: ");
	scanf(" %d", &b);
	printf("Digite o numero 3: ");
	scanf(" %d", &c);
	printf("Digite o numero 4: ");
	scanf(" %d", &d);

	if(a>b) {
		int temp = a;
		a = b;
		b = temp;
	}
	if(a>c){
		int temp = c;
		a = c;
		c = temp;
	}
	if(a>d){
		int temp = a;
		a = d;
		d = temp;
	}
	if(b>c) {
		int temp = b;
		b = c;
		c = temp;
	}
	if(b>d) {
		int temp = b;
		b = d;
		d = temp;
	}
	if(c>d) {
		int temp = c;
		c = d;
		d = temp;
	}
	
	printf("%d < %d < %d < %d", a, b, c, d);
}
