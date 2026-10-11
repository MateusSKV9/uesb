#include <iostream>
using namespace std; 

// tam = 4
// Pos. 0 1 2 3
// Val. 1 2 3 4

void incrementador(int vetor[], int tamanho, int k) {
  if(tamanho == 0) return;
  
  vetor[tamanho - 1] = vetor[tamanho - 1] + k;
  incrementador(vetor, tamanho - 1, k); 
}

int main() {
  int tamanho = 8;
  int vetor[tamanho];
  int k;

  cout << "=== INSERINDO VALORES === " << endl;
  for (int i = 0; i < tamanho; i++) {
    cout << "Posicao[" << i << "]" << ": ";
    cin >> vetor[i];
  }

  cout << "\nDigite o valor de K: ";
  cin >> k;

  cout << "\nVetor inicial: " << endl;
  for (int i = 0; i < tamanho; i++) {
    cout << "Posicao["<<i<<"]"<<": " << vetor[i] << endl;
  }

  incrementador(vetor, tamanho, k);

  cout << "\nVetor incrementado: \n";
  for (int i = 0; i < tamanho; i++) {
    cout << "Posicao[" << i << "]" << ": " << vetor[i] << endl;
  }

  return 0;
}