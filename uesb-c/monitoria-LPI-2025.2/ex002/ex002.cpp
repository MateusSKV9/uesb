#include <iostream> 
using namespace std;

int main() {
  int numero1 , numero2;

  cout << "Digite o primeiro numero: ";
  cin >> numero1;

  cout << "Digite o segundo numero: ";
  cin >> numero2;

  int aux = numero1;

  numero1 = numero2;
  numero2 = aux;

  cout << "**** Valores trocados **** \n";
  cout << "-> Numero 1: " << numero1;
  cout << "\n-> Numero 2: " << numero2 << endl;

  return 0;
}