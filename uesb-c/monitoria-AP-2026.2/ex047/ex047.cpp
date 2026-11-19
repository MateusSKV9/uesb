#include <iostream>
#include <cstdlib>
using namespace std; 

/*
  4) (valor 3,0). Considere uma matriz 4 x 5 de numeros inteiros. Desenvolva uma primeira funcao recursiva que receba a
  matriz, o indice de uma linha e as informacoes necessarias para percorrer seus elementos, retornando a quantidade de
  valores pares existentes nessa linha. 
  
  Em seguida, desenvolva uma segunda funcao recursiva responsavel por percorrer as
  linhas da matriz. Para cada linha, essa funcao devera chamar obrigatoriamente a primeira funcao recursiva e determinar qual
  linha possui a maior quantidade de valores pares. 
  
  Ao final, a segunda funcao devera disponibilizar ao programa principal, por
  meio de parametros ponteiros, o indice da linha encontrada e a quantidade de valores pares dessa linha. Em caso de
  empate, considere a primeira linha encontrada. A leitura da matriz e a apresentacao dos resultados deverao ser realizadas
  na funcao main.
*/

// ———————————————————————————————————————————————

int calcQtdPares(int matriz[][3], int colunas, int indiceLinha, int posAtual) {
  if(posAtual == colunas) return 0;

  int count = matriz[indiceLinha][posAtual] % 2 == 0 ? 1 : 0;

  return count + calcQtdPares(matriz, colunas, indiceLinha, posAtual+1);
}

// ———————————————————————————————————————————————


void percorreLinhas(int matriz[][3], int linhas, int colunas, int posAtual, int *ptrIndiceLinha, int *ptrQtdPares) {
  if(posAtual == linhas) return;

  int qtdAtualPares = calcQtdPares(matriz, colunas, posAtual, 0);

  cout << qtdAtualPares << " "  << endl;

  if(qtdAtualPares > *(ptrQtdPares)) {
    *(ptrIndiceLinha) = posAtual;
    *ptrQtdPares = qtdAtualPares;
  }

  percorreLinhas(matriz, linhas, colunas, posAtual+1, ptrIndiceLinha, ptrQtdPares);  
}

// ———————————————————————————————————————————————


int main() {
  int linhas = 3;
  int colunas = 3;

  int matriz[3][3];

  int *ptrMatriz = &matriz[0][0];

  cout << "INSERINDO VALORES: " << endl;
  for (int i = 0; i < linhas; i++) {
    for (int j = 0; j < colunas; j++) {
      cout << "Posicao[" << i << "][" << j << "]: ";
      cin >> *(ptrMatriz + i * colunas + j);
    }
  }

  cout << "------------------------" << endl;

  cout << "EXIBINDO MATRIZ: " << endl;
  for (int i = 0; i < linhas; i++) {
    for (int j = 0; j < colunas; j++) {
      cout << *(ptrMatriz + i * colunas + j) << " ";
    }
    
    cout << endl;
  }

  cout << "------------------------" << endl;

  int indiceLinha = 0;
  int qtdPares = 0;

  percorreLinhas(matriz, linhas, colunas, 0, &indiceLinha, &qtdPares);

  cout << "Indice da linha com maior quantidade de valores pares: " << indiceLinha << endl;
  cout << "Quantidade de pares da linha: " << qtdPares;

  return 0;
}
