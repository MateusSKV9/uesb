#include <iostream>
using namespace std; 

/*
  3. Crie uma struct chamada Retangulo contendo os campos base e altura. Leia os valores desses
  campos e calcule a área e o perímetro do retângulo. Ao final, apresente os dados armazenados na
  estrutura, a área e o perímetro calculados.
*/

// ———————————————————————————————————————————————

struct Retangulo {
  float base;
  float altura;
};

// ———————————————————————————————————————————————

int main() {
  Retangulo retangulo;

  cout << "Digite a base do retangulo: ";
  cin >> retangulo.base;

  cout << "Digite a altura do retangulo: ";
  cin >> retangulo.altura;

  float area = retangulo.base * retangulo.altura;
  float perimetro = 2 * (retangulo.base + retangulo.altura);

  cout << "\n===== Dados do retangulo =====" << endl;
  cout << "Base: " << retangulo.base << endl;
  cout << "Altura: " << retangulo.altura << endl;
  cout << "Area: " << area << endl;
  cout << "Perimetro: " << perimetro << endl;

  return 0;
}