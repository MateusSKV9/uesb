#include <iostream>
using namespace std; 

/*
  4. Desenvolva uma função recursiva que receba um vetor de números inteiros, seu tamanho, uma posição
  inicial e um valor a ser procurado. A função deverá retornar true caso o valor esteja presente no vetor e
  false caso contrário.
  Por exemplo, para:
  v = {4, 7, 2, 9, 5}
  valor = 9
  a função deverá retornar true.
*/

bool busca(int vetor[], int tamanho, int inicio, int valorProcurado) {
  if(tamanho == inicio) {
    if(vetor[0] == valorProcurado) return true;
    else return false;
  }

  if(vetor[tamanho - 1] == valorProcurado) return true;

  return busca(vetor, tamanho - 1, inicio, valorProcurado);
}

int main() {
  int tamanho;
  int valorProcurado;

  cout << "Digite o tamanho do vetor: ";
  cin >> tamanho;

  int vetor[tamanho];

  cout << "INSERINDO VALORES: " << endl;
  for (int i = 0; i < tamanho; i++) {
    cout << "Posicao[" << i << "]: ";
    cin >> vetor[i];
  }
   
  cout << "Digite o valor a ser procurado: ";
  cin >> valorProcurado;
  
  bool valorPresente = busca(vetor, tamanho, 0, valorProcurado);

  if(valorPresente) cout << "Valor esta presente! Retorno: " << valorPresente;
  else cout << "Valor NAO esta presente! Retorno: " << valorPresente;

  return 0;
}