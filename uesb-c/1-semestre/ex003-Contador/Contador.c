#include <stdio.h>
#include <stdlib.h>

main () {
	//O nota 2 estava vindo com o valor 159. Por quê?
	int n=0, nota100=0, nota50=0, nota20=0, nota10=0, nota5, nota2=0, nota1=0;
	
	printf("Digite um valor: ");
	scanf(" %d", &n);
	
	if(n>=100) {
		nota100 = n/100;
		n-=nota100*100;
	} 
	if(n>=50) {
		nota50 = n/50;
		n-=nota50*50;
	}
	if(n>=20) {
		nota20 = n/20;
		n-=nota20*20;
	}
	if(n>=10) {
		nota10 = n/10;
		n-=nota10*10;
	}
	if(n>=5) {
		nota5 = n/5;
		n-=nota5*5;
	}
	if(n>=2) {
		nota2 = n/2;
		n-=nota2*2;
	}
	if(n>=1) {
		nota1 = n/1;
		n-=nota1*1;
	}
	
	printf("Quantidade de notas de 100: \t");
	printf(" %d", nota100);
	printf("\nQuantidade de notas de 50: \t");
	printf(" %d", nota50);
	printf("\nQuantidade de notas de 20: \t");
	printf(" %d", nota20);
	printf("\nQuantidade de notas de 10: \t");
	printf(" %d", nota10);
	printf("\nQuantidade de notas de 5: \t");
	printf(" %d", nota5);
	printf("\nQuantidade de notas de 2: \t");
	printf(" %d", nota2);
	printf("\nQuantidade de notas de 1: \t");
	printf(" %d \n", nota1);
	
	system("PAUSE");
}
