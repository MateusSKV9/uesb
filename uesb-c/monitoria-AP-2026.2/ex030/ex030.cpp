#include <iostream>
using namespace std; 

/*
 3. Desenvolva um programa que leia uma matriz 4 x 4 de números inteiros e o índice de uma coluna. Crie
  uma função que determine e retorne o maior elemento existente nessa coluna. A função deverá utilizar
  aritmética de ponteiros para acessar os elementos, considerando o deslocamento necessário entre uma
  linha e outra.
*/

// 0 1 2  3

// 0 1 2  3
// 4 5 6  7
// 8 9 10 11

int encontraMaiorNaColuna(int *ptrMatriz, int colunaSelecionada) {
  int maior = *(ptrMatriz+colunaSelecionada);

  for (int i = colunaSelecionada+4; i < 4*4; i+=4) {
    if(*(ptrMatriz+i) > maior) {
      maior = *(ptrMatriz+i);
    }
  }

  return maior; 
}

// ———————————————————————————————————————————————

int main() {
  int linhas = 4;
  int colunas = 4;

  int matriz[linhas][colunas];

  cout << "INSERINDO VALORES: " << endl;
  for (int i = 0; i < linhas; i++) {
    for (int j = 0; j < colunas; j++) {
      cout << "Posicao[" << i << "][" << j << "]: ";
      cin >> matriz[i][j];
    }
  }

  cout << "\n------------------------" << endl;
  int *ptrMatriz = &matriz[0][0];

  cout << "EXIBICAO: " << endl;
  for (int i = 0; i < (linhas * colunas); i++) {
    if(i % colunas == 0 ) cout << endl;
    cout << *(ptrMatriz+i) << " ";    
  }

  cout << "\n------------------------" << endl;

  int colunaSelecionada;
  cout << "Digite o indice de uma coluna: ";
  cin >> colunaSelecionada;

  cout << "\n------------------------" << endl;

  int maiorElemento = encontraMaiorNaColuna(ptrMatriz, colunaSelecionada);
  cout << "\nO maior valor da coluna " << colunaSelecionada << " e: " << maiorElemento << endl;
  
  return 0;
}
