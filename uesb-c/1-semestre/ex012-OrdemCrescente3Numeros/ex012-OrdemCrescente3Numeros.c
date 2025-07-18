#include <stdio.h>

main () {
	int a, b, c;
	
	printf("Digite o numero 1: ");
	scanf(" %d", &a);
	printf("Digite o numero 2: ");
	scanf(" %d", &b);
	printf("Digite o numero 3: ");
	scanf(" %d", &c);
	
	if(a>b && a>c) {
		if(b>c) {
			printf("%d < %d < %d", c, b, a);
		} else {
			printf("%d < %d < %d", b, c, a);
		}
	} else if (b>a && b>c) {
		if(a>c) {
			printf("%d < %d < %d", c, a, b);
		} else {
			printf("%d < %d < %d", a, c, b);
		}
	} else {
		if(a>b) {
			printf("%d < %d < %d", b, a, c);
		} else {
			printf("%d < %d < %d", a, b, c);
		}
	}
}
