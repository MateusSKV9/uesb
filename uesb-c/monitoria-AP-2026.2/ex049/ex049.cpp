#include <iostream>
using namespace std; 

/*
  2. Crie uma struct chamada Produto contendo código, preço e quantidade em estoque. Leia os
  dados de um produto e calcule o valor total correspondente às unidades disponíveis em estoque.
  Apresente o código do produto e o valor total calculado.
*/

// ———————————————————————————————————————————————

struct Produto {
  int codigo;
  float preco;
  int quantidade;
};

// ——————————————————————————————————————————————

int main() {
  Produto produto;

  cout << "Digite o codigo do produto: ";
  cin >> produto.codigo;

  cout << "Digite o preco do produto: ";
  cin >> produto.preco;

  cout << "Digite a quantidade em estoque: ";
  cin >> produto.quantidade;

  float valorTotalEstoque = produto.preco * produto.quantidade;

  cout << "\n===== Dados do Produto =====" << endl;
  cout << "Codigo: " << produto.codigo << endl;
  cout << "Preco: " << produto.preco << endl;
  cout << "Quantidade: " << produto.quantidade << endl;
  cout << "Valor total em estoque: " << valorTotalEstoque << endl;

  return 0;
}