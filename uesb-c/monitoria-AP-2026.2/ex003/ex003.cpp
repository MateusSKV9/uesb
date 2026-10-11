#include <iostream>
using namespace std; 

int potencia(int base, int expoente) {
  if(expoente == 0) return 1;

  return base * potencia(base, expoente - 1);
}

void substituicao(int vetor[], int tamanho) {
  if(tamanho == 0) return;

  if(vetor[tamanho - 1] % 2 == 0) {
    vetor[tamanho - 1] = potencia(vetor[tamanho - 1], 2);
  }

  substituicao(vetor, tamanho - 1);
}

int main() {
  int tamanho;
  cout << "Digite o tamanho do vetor: ";
  cin >> tamanho;

  int vetor[tamanho];

  cout << "=== INSERINDO VALORES === " << endl;
  for (int i = 0; i < tamanho; i++) {
    cout << "Posicao[" << i << "]" << ": ";
    cin >> vetor[i];
  }

  cout << "\nVetor inicial: " << endl;
  for (int i = 0; i < tamanho; i++) {
    cout << "Posicao["<<i<<"]"<<": " << vetor[i] << endl;
  }

  substituicao(vetor, tamanho);

  cout << "\nVetor depois: \n";
  for (int i = 0; i < tamanho; i++) {
    cout << "Posicao[" << i << "]" << ": " << vetor[i] << endl;
  }

  return 0;
}