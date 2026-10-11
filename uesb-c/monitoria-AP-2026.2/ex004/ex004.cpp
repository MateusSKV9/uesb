#include <iostream>
using namespace std; 

// ————————————————————————————————————————

int potencia(int base, int expoente) {
  if(expoente == 0) return 1;

  return base * potencia(base, expoente - 1);
}

// ————————————————————————————————————————



int somaCubos(int vetor[], int tamanho, int inicio) {
  if(tamanho == inicio) return 0;
  
  return 
  potencia(vetor[tamanho - 1], 3) + somaCubos(vetor, tamanho - 1, inicio);
}

// ————————————————————————————————————————

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

  int somaResultante = somaCubos(vetor, tamanho, 0);

  cout << "Soma resultante: " << somaResultante << endl;

  return 0;
}