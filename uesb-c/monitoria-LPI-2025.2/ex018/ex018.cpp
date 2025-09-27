#include <iostream>

using namespace std;

void imprime(int n) {
  if(n == 0) return;

  imprime(n - 1);
  cout << n << " ";
}

void imprimeContrario(int n) {
  if(n == 1) return;

  cout << n - 1 << " ";
  imprimeContrario(n - 1);
}

int main() {
  imprime(1);
  imprimeContrario(1);

  return 0;
}

