#include <stdio.h>

int main() {
	int array[10], newArray[11], i, cont = 1, cont1 = 0;
	
	for(i = 0; i < 10; i++){
		printf("Digite o numero da pos[%d]: ", i);
		scanf("%d", &array[i]);
		
		if(array[i]!=0 && array[i]!=1) {
			do {
				printf("[ERRO] - Digite um valor valido para pos[%d] 0 ou 1: ", i);
				scanf("%d", &array[i]);
			} while(array[i]!=0 && array[i]!=1);	
		} 
	}
	
	if(array[0] == 0){
		for(i = 0; i < 10; i++){
			while(array[i] == array[i+1]){
				cont++;
				i++;
			}
			newArray[cont1] = cont;
			if(array[i] != array[i+1]){
				cont1++;
				cont = 1;
			}
		}
	} else {
		newArray[0] = 0;
		cont1 = 1;
		for(i = 0; i < 10; i++){
			while(array[i] == array[i+1]){
				cont++;
				i++;
			}
			newArray[cont1] = cont;
			if(array[i] != array[i+1]){
				cont1++;
				cont = 1;
			}
		}		
	}
	printf("Campactacao: ");
	for(i = 0; i < cont1; i++){
		printf("%d ", newArray[i]);		
	}
	
	printf("\n\n");
	
	printf("Descompactacao: ");
	int m;
	if(array[0]==0) {
		for(i=0; i<cont1; i++) {
			if(i%2!=0) {
				for(m=1; m<=newArray[i]; m++) {
					printf("1");
				}
			} else {
				for(m=1; m<=newArray[i]; m++) {
					printf("0");
				}
			}
		}
	} else {
		for(i=0; i<cont1; i++) {
			if(i%2!=0) {
				for(m=1; m<=newArray[i]; m++) {
					printf("1");
				}
			} else {
				for(m=1; m<=newArray[i]; m++) {
					printf("0");
				}
			}
		}
	}
	
	return 0;
}
