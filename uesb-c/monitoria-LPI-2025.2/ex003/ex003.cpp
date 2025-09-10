#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  float valorCompra, valorPago;

  cout << "Digite o valor da compra: ";
  cin >> valorCompra;

  cout << "Digite o valor pago: ";
  cin >> valorPago;

  float troco = valorPago - valorCompra;

  cout << fixed << setprecision(2) << "Troco: " << troco << endl;

  return 0;
}