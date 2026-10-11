#include <iostream>
using namespace std; 

/*
  1. Desenvolva uma função recursiva que receba um vetor de números inteiros, seu tamanho e uma
  posição inicial e retorne quantas vezes ocorre uma mudança de sinal entre dois elementos consecutivos.
  Considere que o vetor não possui elementos iguais a zero.
  Por exemplo, para:
  t = 6
       0   1   2  3   4   5
  v = {4, -2, -7, 5, -3, -8}
  ocorrem mudanças de sinal entre 4 e -2, entre -7 e 5 e entre 5 e -3. Portanto, a função deverá retornar 3.
*/

// ——————————————————————————————————————————————————————————————

int calcMudancasSinais(int vetor[], int tamanho, int inicio) {
  if(tamanho == inicio + 1) return 0;

  int count = 0;
  int sinal1 = vetor[tamanho - 1] > 0 ? 1 : -1;
  int sinal2 = vetor[tamanho - 2] > 0 ? 1 : -1;

  if(sinal1 != sinal2) count = 1;

  return count + calcMudancasSinais(vetor, tamanho - 1, inicio);
}

// ——————————————————————————————————————————————————————————————

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

  int qtdMudancasSinais = calcMudancasSinais(vetor, tamanho, 0);
  cout << "Quantidade de mudancas de sinais: " << qtdMudancasSinais;

  return 0;
}