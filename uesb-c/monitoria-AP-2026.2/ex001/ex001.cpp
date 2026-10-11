#include <iostream>
using namespace std; 

// 5824 => 5824 % 10 = 4; 

int somaAlgarismos(int numero) {
  if(numero < 10) return numero;

  return numero % 10 + somaAlgarismos(numero / 10);
}

int main() {
  int numero;

  cout << "Digite um numero: ";
  cin >> numero;

  int resultado = somaAlgarismos(numero);
  
  cout << "A soma dos algarismo de " << numero << " e " << resultado;
 
 return 0;
}