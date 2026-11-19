#include <iostream>
using namespace std; 

/*
  1. Crie uma struct chamada Aluno contendo os campos nome, idade e nota. No programa principal,
  declare uma variável desse tipo, leia os dados de um aluno e, ao final, apresente todas as
  informações armazenadas.
*/

// ———————————————————————————————————————————————

struct Aluno {
  char nome[50];
  int idade;
  float nota;
};

// ———————————————————————————————————————————————

int main() {
  Aluno aluno;

  cout << "Digite o nome: ";
  // cin >> aluno.nome;
  cin.getline(aluno.nome, 50);

  cout << "Digite a idade: ";
  cin >> aluno.idade;

  cout << "Digite a nota: ";
  cin >> aluno.nota;

  cout << "\n===== Dados do Aluno =====" << endl;
  cout << "Nome: " << aluno.nome << endl;
  cout << "Idade: " << aluno.idade << endl;
  cout << "Nota: " << aluno.nota << endl;

  return 0;
}