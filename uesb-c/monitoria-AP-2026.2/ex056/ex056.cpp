#include <iostream>
using namespace std; 

/*
  4. Crie uma struct chamada Produto contendo código, nome e preço. Declare um vetor com 5 produtos e
  leia seus dados. Em seguida, ordene o vetor em ordem crescente de preço, realizando as trocas
  diretamente entre os elementos do vetor de estruturas. Ao final, apresente os produtos na nova ordem.
*/

// ———————————————————————————————————————————————

struct Produto {
  int codigo;
  string nome;
  float preco;
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
    cin.ignore();

    cout << "Digite o nome: ";
    getline(cin, produtos[i].nome);

    cout << "Digite o preco: ";
    cin >> produtos[i].preco;
  }

  cout << "\n===== EXIBINDO DADOS =====" << endl;
  for (int i = 0; i < qtdProdutos; i++) {
    cout << "Cod." << produtos[i].codigo << " - " << produtos[i].nome << " - Valor " << produtos[i].preco << endl;
  }

  cout << "--------------------------" << endl;

  for (int i = 0; i < qtdProdutos; i++) {
    for (int j = 0; j < qtdProdutos - 1 - i; j++) {
      if(produtos[j].preco > produtos[j+1].preco) {
        Produto produto = produtos[j];
        produtos[j] = produtos[j+1];
        produtos[j+1] = produto;
      }
    }
  }

   cout << "\n===== PRODUTOS ORDENADOS POR VALOR =====" << endl;
  for (int i = 0; i < qtdProdutos; i++) {
    cout << "Cod." << produtos[i].codigo << " - " << produtos[i].nome << " - Valor " << produtos[i].preco << endl;
  }

  return 0;
}