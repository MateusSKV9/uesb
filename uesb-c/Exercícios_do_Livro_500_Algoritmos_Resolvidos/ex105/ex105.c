#include <stdio.h>

int main () {
	char est[5];
	
	printf("Digite a sigla do Estado: ");
	scanf("%[^/\n]", est);
	
	if(est=="RJ" || est=="rj") {
		printf("Carioca");
	} else if(est=="SP" || est=="sp") {
		printf("Paulista");
	} else if(est=="MG" || est=="mg") {
		printf("Mineiro");
	} else {
		printf("Outros Estados");
	}
	
	return 0;
}
