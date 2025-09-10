#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  float nota1, nota2, peso1, peso2;

  // Nota 1
  
  cout << "Digite a nota 1: ";
  cin >> nota1;

  cout << "Digite o peso da nota 1: ";
  cin >> peso1;

  // Nota 2

  cout << "Digite a nota 2: ";
  cin >> nota2;

  cout << "Digite o peso da nota 2: ";
  cin >> peso2;

  // Media

  float media = (nota1*peso1 + nota2*peso2) / (peso1 + peso2);

  cout << fixed << setprecision(2);
  cout << "A media das notas e: " << media << endl;

  return  0;
}
