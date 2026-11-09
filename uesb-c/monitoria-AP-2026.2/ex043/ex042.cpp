#include <iostream>
#include <cstdlib>
using namespace std; 

/*
  5. Desenvolva um programa que leia as dimensões de uma matriz de números inteiros e aloque
  dinamicamente sua memória utilizando malloc.
  
  Em seguida, crie uma função recursiva que percorra
  todos os elementos da matriz, sem utilizar estruturas de repetição, e determine simultaneamente o maior
  valor armazenado e a quantidade de vezes que esse maior valor aparece. A função deverá utilizar
  aritmética de ponteiros para acessar os elementos e parâmetros ponteiros para disponibilizar os dois
  resultados ao programa principal. 
  
  O caso-base deverá ocorrer quando todos os linhas *
  colunas elementos tiverem sido processados. Ao final, exiba o maior valor, sua quantidade de ocorrências
  e libere corretamente a memória com free.
*/

/*
  alocar ------------ int *vet = (int*) malloc(n * sizeof(int));
  liberar ----------- free(ve)
  Desvincular ------- vet = nullptr
*/


// ———————————————————————————————————————————————

void encontraMaiorEQtd(int *ptrMatriz, int linhas, int colunas, int passador, int *ptrMaior, int *ptrQtdMaiorValor) {
  if(passador == (linhas*colunas - 1)) {
    return;
  }

  if(*(ptrMatriz + passador) > *ptrMaior) {
    *ptrMaior = *(ptrMatriz + passador);
  }
  
  encontraMaiorEQtd(ptrMatriz, linhas, colunas, passador+1, ptrMaior, ptrQtdMaiorValor);
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
  for(int i = 0; i < linhas; i++){
		for(int j = 0; j < colunas; j++) {
      cout << "Posicao[" << i << "][" << j << "]: ";
      cin >> *(matriz + i * colunas + j);
		}
	}

  cout << "\n------------------------" << endl;

  cout << "EXIBICAO: " << endl;
  for(int i = 0; i < linhas; i++){
		for(int j = 0; j < colunas; j++) {
      cout << *(matriz + i * colunas + j) << " ";
		}

    cout << endl;
	}
  
  cout << "\n------------------------" << endl;

  int maiorValor = *(matriz+0);
  int qtdMaiorValor = 0;

  encontraMaiorEQtd(matriz, linhas, colunas, 0, &maiorValor, &qtdMaiorValor);

  cout << "Maior valor: " << maiorValor << endl;
  cout << "qtdMaiorValor: " << qtdMaiorValor;
  
  free(matriz);
  matriz = nullptr;

  return 0;
}
