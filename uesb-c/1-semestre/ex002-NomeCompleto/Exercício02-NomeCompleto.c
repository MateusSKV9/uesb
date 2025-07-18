#include <stdio.h>
#include <stdlib.h>

main () {
	//Mateus Santos da Silva 
	//Letras: m, a, t, e, u, s, n, o, d, i, l, v
	char m, a, t, e, u, s, n, o, d, i, l, v;
	char upperM, upperS;
	
	printf("Abaixo, digite as letras do nome 'Mateus Santos da Silva'.\n");	
	printf("Digite a letra (m): ");
	scanf("%c", &m);
	printf("Digite a letra (a): ");	
	scanf(" %c", &a);
	printf("Digite a letra (t): ");
	scanf(" %c", &t);
	printf("Digite a letra (e): ");
	scanf(" %c", &e);
	printf("Digite a letra (u): ");
	scanf(" %c", &u);
	printf("Digite a letra (s): ");
	scanf(" %c", &s);
	printf("Digite a letra (n): ");
	scanf(" %c", &n);
	printf("Digite a letra (o): ");
	scanf(" %c", &o);
	printf("Digite a letra (d): ");
	scanf(" %c", &d);
	printf("Digite a letra (i): ");
	scanf(" %c", &i);
	printf("Digite a letra (l): ");
	scanf(" %c", &l);
	printf("Digite a letra (v): ");
	scanf(" %c", &v);
	
	//Letras maiúsculas
	upperM = toupper(m);
	upperS = toupper(s);
	
	printf("> Resultado: \n");
	printf("%c%c%c%c%c%c", upperM, a, t, e, u, s);
	printf(" ");
	printf("%c%c%c%c%c%c", upperS, a, n, t, o, s);
	printf(" ");
	printf("%c%c", d, a);
	printf(" ");
	printf("%c%c%c%c%c", upperS, i, l, v, a);
	printf("\n");
	system("PAUSE");	
}
