#include <iostream>
using namespace std; 

/*
  3. Desenvolva uma função recursiva que receba um vetor de números inteiros, seu tamanho e uma
  posição inicial e retorne a quantidade de elementos internos que são maiores que seus dois vizinhos.
  Um elemento v[pos] será considerado um pico quando:
  v[pos] > v[pos - 1] && v[pos] > v[pos + 1]

  Por exemplo:
  t = 7
       0  1  2  3  4  5  6
  v = {2, 7, 3, 8, 4, 6, 1}
  Os valores 7, 8 e 6 são picos. Portanto, a função deverá retornar 3.
  Os elementos das posições 0 e n - 1 não deverão ser analisados como picos.
  A chamada inicial poderá começar em:
  contarPicos(v, n, 1);
*/

// ——————————————————————————————————————————————————————————————

int calcMaiores(int vetor[], int tamanho, int inicio) {
  if(tamanho == inicio) return 0;

  int count = 0;
  bool maiorQueAntecessor = vetor[tamanho-2] > vetor[tamanho - 3];
  bool maiorQueSucessor = vetor[tamanho-2] > vetor[tamanho - 1];

  if(maiorQueAntecessor && maiorQueSucessor) count++;

  return count + calcMaiores(vetor, tamanho - 1, inicio);
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

  int qtdMaiores = calcMaiores(vetor, tamanho, 0);
  cout << "Quantidade de numeros maiores que os seus vizinhos: " << qtdMaiores;

  return 0;
}