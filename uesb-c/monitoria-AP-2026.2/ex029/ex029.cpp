#include <iostream>
using namespace std; 

/*
  2. Desenvolva um programa que leia uma matriz 4 x 5 de números inteiros e, em seguida, leia o índice de
  uma linha. Crie uma função que receba a matriz e o índice da linha e retorne a soma dos elementos dessa
  linha utilizando aritmética de ponteiros para localizar e percorrer os elementos correspondentes.
*/

// 0 1 2 3 4

// 1 2 3 4  5
// 6 7 8 9 10


int calcLinha(int *ptrMatriz, int linhaSelecionada) {
  int soma = 0;

  for (int i = 5*linhaSelecionada; i < 5*(linhaSelecionada+1); i++) {
    soma += *(ptrMatriz+i);
  }

  return soma; 
}

// ———————————————————————————————————————————————

int main() {
  int linhas = 4;
  int colunas = 5;

  int matriz[linhas][colunas];

  cout << "INSERINDO VALORES: " << endl;
  for (int i = 0; i < linhas; i++) {
    for (int j = 0; j < colunas; j++) {
      cout << "Posicao[" << i << "][" << j << "]: ";
      cin >> matriz[i][j];
    }
  }

  cout << "------------------------" << endl;

  int *ptrMatriz = &matriz[0][0];
  int linhaSelecionada;
  cout << "Digite o indice de uma linha: ";
  cin >> linhaSelecionada;

  cout << "\n------------------------" << endl;

  cout << "EXIBICAO: " << endl;
  for (int i = 0; i < (linhas * colunas); i++) {
    if(i % colunas == 0 ) cout << endl;
    cout << *(ptrMatriz+i) << " ";    
  }

  cout << "\n------------------------" << endl;

  int soma = calcLinha(ptrMatriz, linhaSelecionada);
  cout << "\nA soma dos elementos da linha de indice " << linhaSelecionada << " resulta em: " << soma << endl;
  
  return 0;
}
