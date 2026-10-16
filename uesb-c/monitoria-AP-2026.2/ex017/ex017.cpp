#include <iostream>
using namespace std; 

/*
  5. Considere um vetor de números inteiros que representa valores observados ao longo do tempo. Uma
  sequência é considerada alternada quando, a partir de um determinado ponto, os valores passam a
  alternar entre crescimento e diminuição. Por exemplo, na sequência 4, 9, 3, 8, 2, ocorre aumento de 4
  para 9, diminuição de 9 para 3, aumento de 3 para 8 e diminuição de 8 para 2.
  Desenvolva uma solução recursiva que determine o tamanho da maior sequência consecutiva que
  apresenta esse comportamento alternado. A função deverá percorrer o vetor sem utilizar laços e deverá
  manter as informações necessárias entre as chamadas recursivas para saber qual foi o comportamento
  anterior, o tamanho da sequência atual e o maior tamanho encontrado até o momento.
  
  Por exemplo, para:
  5 8 3 7 2 6 9 4
  
  a sequência 5, 8, 3, 7, 2, 6 possui alternância válida e tamanho 6. Depois disso, 6, 9 mantém crescimento
  em duas transições consecutivas e quebra a alternância. Portanto, o maior tamanho deverá ser 6.
*/

int maiorAlternada(int v[], int n, int pos, int direcaoAnterior, int tamanhoAtual, int maior) {
  if (pos == n) {
    return maior;
  }

  int direcao;

  if (v[pos] > v[pos - 1]) {
    direcao = 1;
  } else if (v[pos] < v[pos - 1]) {
    direcao = -1;
  } else {
    direcao = 0;
  }

  int novoTamanho;
  int novaDirecao;

  if (direcao == 0) {
    novoTamanho = 1;
    novaDirecao = 0;
  } else if (direcaoAnterior == 0) {
    novoTamanho = 2;
    novaDirecao = direcao;
  } else if (direcao != direcaoAnterior) {
    novoTamanho = tamanhoAtual + 1;
    novaDirecao = direcao;
  } else {
    novoTamanho = 2;
    novaDirecao = direcao;
  }

  if (novoTamanho > maior) {
    maior = novoTamanho;
  }

  return maiorAlternada(v, n, pos + 1, novaDirecao, novoTamanho, maior);
}

int main() {
  int tamanho;

  cout << "Digite o tamanho do vetor: ";
  cin >> tamanho;

  int vetor[tamanho];

  cout << "INSERINDO VALORES: " << endl;
  for (int i = 0; i < tamanho; i++) {
    cout << "Posicao[" << i << "]: ";
    cin >> vetor[i];
  }

  if (tamanho == 0) {
    cout << "Maior sequencia alternada: 0" << endl;
  } else if (tamanho == 1) {
    cout << "Maior sequencia alternada: 1" << endl;
  } else {
    cout << "Maior sequencia alternada: " << maiorAlternada(vetor, tamanho, 1, 0, 1, 1) << endl;
  }

  return 0;
}
