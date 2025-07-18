#include <stdio.h>

main () {
	char nome[50], endereco[50], telefone[50];
	printf("Entre com nome: ");
    fgets(nome, sizeof(nome), stdin);
	printf("Entre com endereco: ");
    fgets(endereco, sizeof(endereco), stdin);
	printf("Entre com telefone: ");
    fgets(telefone, sizeof(telefone), stdin);
	
	printf("\n");
	printf("\nNome: %s", nome);
	printf("\nEndereco: %s", endereco);
	printf("\nTelefone: %s", telefone);
}
