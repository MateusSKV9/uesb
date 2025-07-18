#include <stdio.h>

int main() {
	int ano;
	
	printf("Digite o ano: ");
	scanf(" %d", &ano);
	if(ano>1582) {
		if(ano%400==0 || (ano%4==0 && ano%100!=0)) {
			printf("SIM, e bissexto\n");
		} else {
			printf("NAO e bissexto\n");
		}	
	}

	system("PAUSE");
	return 0;
}
