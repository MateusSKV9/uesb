#include <iostream>
using namespace std; 

/*
  2. Crie uma struct chamada Produto contendo código, descrição, preço e quantidade em estoque.
  Declare um vetor com 5 produtos e leia seus dados. Depois, leia o código de um produto e uma
  quantidade vendida. Localize o produto no vetor e, se houver estoque suficiente, atualize sua quantidade.
  Ao final, apresente os dados atualizados do produto.
*/

// ———————————————————————————————————————————————

struct Produto {
  int codigo;
  float preco;
  int qtdEstoque;
};

// ———————————————————————————————————————————————

int main() {
  int qtdProdutos = 5;
  Produto produtos[qtdProdutos];

  cout << "===== INSERINDO DADOS =====" << endl;
  for (int i = 0; i < qtdProdutos; i++) {
    cout << "=> Produto [" << i + 1 << "]" << endl;
    cout << "Digite o codigo: ";
    cin >> produtos[i].codigo;

    cout << "Digite o preco: ";
    cin >> produtos[i].preco;

    cout << "Digite a quantidade em estoque: ";
    cin >> produtos[i].qtdEstoque;
  }

  cout << "\n===== EXIBINDO DADOS =====" << endl;
  for (int i = 0; i < qtdProdutos; i++) {
    cout << "Cod." << produtos[i].codigo << " - Valor " << produtos[i].preco << " - Qtd. " << produtos[i].qtdEstoque << endl;
  }

  cout << "--------------------------" << endl;

  int codigo;
  cout << "Digite o codigo de um produto a ser comprado: ";
  cin >> codigo;
  
  int quantidade;
  cout << "Digite a quantidade a ser comprada: ";
  cin >> quantidade;

  cout << "--------------------------" << endl;

  for (int i = 0; i < qtdProdutos; i++) {
    if(produtos[i].codigo == codigo) {
      produtos[i].qtdEstoque -= quantidade;
      cout << "Quantidade atualizada no estoque: Cod." << produtos[i].codigo << " - Qtd. " << produtos[i].qtdEstoque;
      return 0;
    }
  }

  cout << "Produto nao encontrado";

  return 0;
}