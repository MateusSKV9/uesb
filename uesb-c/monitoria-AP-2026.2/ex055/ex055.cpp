#include <iostream>
using namespace std; 

/*
  3. Crie uma struct chamada Livro contendo código, título e ano de publicação. Declare um vetor com 6
  livros. Após a leitura dos dados, leia um ano e apresente somente os livros publicados a partir desse ano.
  Ao final, informe também quantos livros atenderam ao critério.
*/

// ———————————————————————————————————————————————

struct Livro {
  int codigo;
  string titulo;
  int anoPublicacao;
};

// ———————————————————————————————————————————————

int main() {
  int qtdLivros = 6;
  Livro livros[qtdLivros];

  cout << "===== INSERINDO DADOS =====" << endl;
  for (int i = 0; i < qtdLivros; i++) {
    cout << "=> Livro [" << i + 1 << "]" << endl;
    cout << "Digite o codigo: ";
    cin >> livros[i].codigo;
    cin.ignore();

    cout << "Digite o titulo: ";
    getline(cin, livros[i].titulo);

    cout << "Digite o ano de publicacao: ";
    cin >> livros[i].anoPublicacao;

    cout << endl;
  }


  cout << "\n===== EXIBINDO DADOS =====" << endl;
  for (int i = 0; i < qtdLivros; i++) {
    cout << "Cod." << livros[i].codigo  << " - " << livros[i].titulo << " - Ano " << livros[i].anoPublicacao << endl;
  }

  cout << "--------------------------" << endl;

  int qtdLivrosEncontrados = 0;
  int anoBuscado;
  cout << "Digite o ano a ser buscado: ";
  cin >> anoBuscado;

  cout << "--------------------------" << endl;
  
  cout << "Livros encontrados: " << endl;
  for (int i = 0; i < qtdLivros; i++) {
    if(livros[i].anoPublicacao >= anoBuscado) {
      qtdLivrosEncontrados++;
      cout << "Cod." << livros[i].codigo << livros[i].titulo << " - Ano " << livros[i].anoPublicacao <<  endl;
    }
  }

  if(qtdLivrosEncontrados == 0) cout << "\nNenhum livro encontrado.";
  else cout << "\nQuantidade de livros encontrados: " << qtdLivrosEncontrados;  

  return 0;
}