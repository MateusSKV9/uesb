#include <iostream>
using namespace std; 

/*
  2. Desenvolva uma função que receba uma matriz 4 x 5 de números inteiros e determine simultaneamente
  o maior e o menor valor armazenados, bem como a linha e a coluna em que cada um deles ocorre pela
  primeira vez.
  
  A matriz deverá ser percorrida utilizando aritmética de ponteiros. A função não deverá
  retornar esses resultados por return; utilize parâmetros ponteiros para disponibilizar ao main o maior
  valor, o menor valor e as respectivas posições.
  Ao final, o programa deverá apresentar os dois valores e suas coordenadas na matriz.
*/

// 13 / 5 = 2

// 0  1  2  3  4 (linha=0)
// 5  6  7  8  9 
// 10 11 12 13 14 
// 15 16 17 18 19

// inicioLinha = 5x(indiceLinha)
// finalLinha = 5x(indiceLinha + 1) - 1

// 0  1  2  3  4 5  6  7  8  9 10 11 12 13 14 15 16 17 18 19

void maiorEMenor(int *ptrMatriz, int linhas, int colunas, int *ptrMaior, int *ptrLinhaMaior, int *ptrColunaMaior, int *ptrMenor, int *ptrLinhaMenor, int *ptrColunaMenor) {
  for (int i = 0; i < (linhas * colunas); i++) {
    if(*(ptrMatriz+i) > *(ptrMaior)) {
      *(ptrMaior) = *(ptrMatriz+i);
      *(ptrLinhaMaior) = i / colunas;
      *(ptrColunaMaior) = i - (colunas*(*(ptrLinhaMaior)));
    }

    if(*(ptrMatriz+i) <= *(ptrMenor)) {
      *(ptrMenor) = *(ptrMatriz+i);
      *(ptrLinhaMenor) = i / colunas;
      *(ptrColunaMenor) = i - (colunas*(*(ptrLinhaMenor)));
    }
  }
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

  cout << "\n------------------------" << endl;

  int *ptrMatriz = &matriz[0][0];

  cout << "EXIBICAO: " << endl;
  for (int i = 0; i < (linhas * colunas); i++) {
    if(i % colunas == 0 ) cout << endl;
    cout << *(ptrMatriz+i) << " ";    
  }

  cout << "\n------------------------" << endl;

  int maiorValor = matriz[0][0], linhaMaiorValor, colunaMaiorValor;

  int menorValor = matriz[0][0], linhaMenorValor, colunaMenorValor;


  maiorEMenor(ptrMatriz, linhas, colunas, 
             &maiorValor, &linhaMaiorValor, &colunaMaiorValor,
             &menorValor, &linhaMenorValor, &colunaMenorValor);

  cout << "Maior Valor: " << maiorValor << endl;
  cout << "Linha do Maior Valor: " << linhaMaiorValor << endl;
  cout << "Coluna do Maior Valor: " << colunaMaiorValor << endl;
  
  cout <<  "\n--------------\n";

  cout << "Menor Valor: " << menorValor << endl;
  cout << "Linha do Menor Valor: " << linhaMenorValor << endl;
  cout << "Coluna do Menor Valor: " << colunaMenorValor << endl;

  return 0;
}
