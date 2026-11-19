#include <iostream>
using namespace std; 

/*
  4. Crie uma struct chamada Pessoa contendo nome e idade. Declare um vetor capaz de armazenar
  os dados de 3 pessoas, leia as informações e apresente o nome e a idade da pessoa mais velha.
  Considere que não haverá empate entre as idades.
*/

// ———————————————————————————————————————————————

struct Pessoa {
  char nome[50];
  int idade;
};

// ———————————————————————————————————————————————

int main() {
  int qtdPessoas = 3;
  Pessoa pessoas[qtdPessoas];

  cout << "===== INSERINDO DADOS =====" << endl;
  for (int i = 0; i < qtdPessoas; i++) {
    cout << "=> Pessoa [" << i+1 << "]" << endl;
    cout << "Digite o nome: ";
    cin.getline(pessoas[i].nome, 50);

    cout << "Digite a idade: ";
    cin >> pessoas[i].idade;
    cin.ignore();
  }
  
  int indicePessoaMaisVelha = 0;

  cout << "===== EXIBINDO DADOS =====" << endl;
  for (int i = 0; i < qtdPessoas; i++) {
    if(pessoas[i].idade > pessoas[indicePessoaMaisVelha].idade) {
      indicePessoaMaisVelha = i;
    }

    cout << "=> Pessoa [" << i+1 << "]: " << pessoas[i].nome << " - " << pessoas[i].idade << endl;
  }

  Pessoa pessoaMaisVelha = pessoas[indicePessoaMaisVelha];
  cout << "=> Pessoa mais velha: " << pessoaMaisVelha.nome << " - " << pessoaMaisVelha.idade << endl;

  return 0;
}