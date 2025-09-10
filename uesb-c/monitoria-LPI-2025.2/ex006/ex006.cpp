#include <iostream>
using namespace std;

int main() {
  int minutosTotais, horas, minutos;

  cout << "Digite a quantidade de minutos totais: ";
  cin >> minutosTotais;

  horas = minutosTotais / 60;
  minutos = minutosTotais % 60;

  cout << "Representa " << horas << "h" << minutos << "min" << endl; 

  return 0;
}
