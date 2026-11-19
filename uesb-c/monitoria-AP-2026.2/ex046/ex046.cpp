#include <iostream>
#include <cstdlib>
using namespace std; 

/*
  3) (valor 2,5). Considere uma matriz 4 x 4 de numeros inteiros. Desenvolva uma funcao que percorra a matriz utilizando
  aritmetica de ponteiros e calcule a soma dos elementos de cada coluna. As quatro somas deverao ser armazenadas em um
  vetor recebido pela funcao. 
  
  Durante o processamento da matriz, nao utilize a notacao m[i][j]; os elementos deverao ser
  acessados por deslocamentos a partir de um ponteiro para o primeiro elemento da matriz. Ao final, a funcao main devera
  exibir o vetor de somas e informar qual coluna possui a maior soma. Em caso de empate, considere a primeira coluna
  encontrada.
*/


// 0 1 2 3
// 0 1 2 3
// 0 1 2 3
// 0 1 2 3


// ———————————————————————————————————————————————

void somaColunas(int *ptrMatriz, int linhas, int colunas, int *ptrVetor) {
  for (int i = 0; i < linhas; i++) {
    for (int j = 0; j < colunas; j++) {
      *(ptrVetor+j) +=  *(ptrMatriz + i * colunas + j);
    }
  }
}

// ———————————————————————————————————————————————

int main() {
  int linhas = 4;
  int colunas = 4;

  int matriz[linhas][colunas];
  int vetor[colunas];

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

  // Remover valores lixos do vetor
  for (int i = 0; i < colunas; i++) { 
    vetor[i] = 0;
  }

  somaColunas(ptrMatriz, linhas, colunas, vetor);
  int colunaComMaiorSoma = 0;

  for (int i = 0; i < colunas; i++) {
    if(vetor[i] > colunaComMaiorSoma) {
      colunaComMaiorSoma = i;
    }

    cout << "Soma coluna[" << i << "]: " << vetor[i] << endl;
  }

  cout << "Indice da coluna com maior soma: " << colunaComMaiorSoma;

  return 0;
}
