#include <iostream>
using namespace std; 

/*
  5. Crie uma struct chamada Funcionario contendo nome e salário. Desenvolva uma função que
  receba uma variável desse tipo e apresente seus dados. No programa principal, leia as informações
  de um funcionário e chame a função para exibi-las.
*/

// ———————————————————————————————————————————————

struct Funcionario {
  char nome[50];
  float salario;
};

// ———————————————————————————————————————————————

void exibeDados(Funcionario funcionario) {  
  cout << "\n===== Dados do Funcionario =====" << endl;
  cout << "Nome: " << funcionario.nome << endl;
  cout << "Salario: R$" << funcionario.salario << endl;
}

// ———————————————————————————————————————————————

int main() {
  Funcionario funcionario;

  cout << "Digite o nome do funcionario: ";
  cin.getline(funcionario.nome, 50);

  cout << "Digite o salario do funcionario: ";
  cin >> funcionario.salario;

  exibeDados(funcionario);

  return 0;
}