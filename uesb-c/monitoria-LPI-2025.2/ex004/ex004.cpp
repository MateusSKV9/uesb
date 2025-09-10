#include <iostream>
using namespace std;

int main() {
  int numero;

  cout << "Digite um numero de 3 algarismos: ";
  cin >> numero;

  int unidade = numero % 10;
  numero /= 10;
  int dezena = numero % 10;
  numero /= 10;
  int centena = numero % 10;

  cout << "Unidade: " << unidade << "\n";
  cout << "Dezena: " << dezena << "\n";
  cout << "Centena: " << centena << endl;

  return 0;
}