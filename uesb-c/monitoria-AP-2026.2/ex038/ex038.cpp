#include <iostream>
#include <cstdlib>
using namespace std; 

/*
3. Desenvolva um programa que leia a quantidade de linhas e colunas de uma matriz de números inteiros
e faça sua alocação dinâmica utilizando um único ponteiro e malloc. 

A matriz deverá ocupar linhas *
colunas posições consecutivas na memória. Crie uma função que receba o ponteiro para a matriz, o
número de linhas e o número de colunas e determine qual linha possui a maior soma de seus elementos.

A função deverá utilizar aritmética de ponteiros para acessar os elementos e deverá disponibilizar ao
main, por meio de parâmetros ponteiros, o índice da linha encontrada e o valor da maior soma. 

Ao final,
libere corretamente a memória com free.
*/

/*
  alocar ------------ int *vet = (int*) malloc(n * sizeof(int));
  liberar ----------- free(ve)
  Desvincular ------- vet = nullptr
*/

// começa = colunas * nLinha
// termina = colunas * (nLinha+1)

// 0 1 2 3

// 1 1 1 1 
// 2 2 2 2
// 3 3 3 3
// 4 4 4 4

// 0  1  2  3 
// 4  5  6  7
// 8  9  10 11
// 12 13 14 15

// OPÇÃO 1

int calcLinha(int *ptr, int linha, int colunas) {
  int soma = 0;

  for (int i = (colunas*linha); i < (colunas * (linha+1)); i++) {
    soma += *(ptr+i);
  }

  return soma;
}

void encontraMaiorSomaLinha(int *ptrMatriz, int linhas, int colunas, int *ptrLinha, int *ptrMaiorSoma) {
  for (int i = 0; i < linhas; i++) {
    int soma = calcLinha(ptrMatriz, i, colunas);
    if(*(ptrMaiorSoma) < soma) {
      *ptrLinha = i;
      *ptrMaiorSoma = soma;
    }
  }
}

// OPÇÃO 2

void soma(int *ptr, int linha, int coluna, int *lin, int *maiorSoma){
	int i = 1;
	int j = 0;
	int soma = 0;

  for (i = (coluna*0); i < (coluna * (1)); i++) {
    soma += *(ptr+i);
  }
  
	for(i; i < linha; i++){
		for(j = 0; j < coluna; j++)
		{
			soma += *(ptr + i * coluna + j);
			printf("\n%d", j);
		}
		if(*maiorSoma < soma) {
			*lin = i;
			*maiorSoma = soma;
		}
        soma = 0;
	}
}

// ———————————————————————————————————————————————

int main() {
  int linhas;
  int colunas;

  cout << "Digite a quantidade de linhas: ";
  cin >> linhas;
  
  cout << "Digite a quantidade de colunas: ";
  cin >> colunas;

  int *matriz = (int *) malloc(linhas * colunas * sizeof(int));

  cout << "INSERINDO VALORES: " << endl;
  for (int i = 0; i < (linhas * colunas); i++) {
    cin >> *(matriz+i);    
  }

  cout << "\n------------------------" << endl;

  int melhorLinha = 0;
  int maiorSoma = 0;

  cout << "EXIBICAO: " << endl;
  for (int i = 0; i < (linhas * colunas); i++) {
    if(i % colunas == 0 ) cout << endl;
    cout << *(matriz+i) << " ";    
  }
  
  cout << "\n------------------------" << endl;

  encontraMaiorSomaLinha(matriz, linhas, colunas, &melhorLinha, &maiorSoma);

  cout << "Melhor linha: " << melhorLinha << endl;
  cout << "Soma da linha: " << maiorSoma << endl;

  return 0;
}
