#include <iostream>
using namespace std; 

/*
  5. Crie uma struct chamada Funcionario contendo matrícula, nome e salário. Declare um vetor com 5
  funcionários. Desenvolva uma função que receba o vetor de estruturas e sua quantidade de elementos e
  aplique um reajuste de 10% apenas aos funcionários cujo salário seja inferior a R$ 2.000,00. Após a
  chamada da função, apresente todos os funcionários com seus salários atualizados.
*/

// ———————————————————————————————————————————————

struct Funcionario {
  int matricula;
  string nome;
  float salario;
};

// ———————————————————————————————————————————————

void reajuste(Funcionario funcionarios[], int qtdFuncionarios) {
  for (int i = 0; i < qtdFuncionarios; i++) {
    if(funcionarios[i].salario < 2000) {
      funcionarios[i].salario *= 1.10;
    }
  }
}

// ———————————————————————————————————————————————

int main() {
  int qtdFuncionarios = 5;
  Funcionario funcionarios[qtdFuncionarios];

  cout << "===== INSERINDO DADOS =====" << endl;
  for (int i = 0; i < qtdFuncionarios; i++) {
    cout << "=> Produto [" << i + 1 << "]" << endl;
    cout << "Digite o codigo: ";
    cin >> funcionarios[i].matricula;
    cin.ignore();

    cout << "Digite o nome: ";
    getline(cin, funcionarios[i].nome);

    cout << "Digite o salario: ";
    cin >> funcionarios[i].salario;
  }

  reajuste(funcionarios, qtdFuncionarios);

  cout << "\n===== EXIBINDO DADOS =====" << endl;
  for (int i = 0; i < qtdFuncionarios; i++) {
    cout << "Mat." << funcionarios[i].matricula << " - " << funcionarios[i].nome << " - Sal. " << funcionarios[i].salario << endl;
  }

  return 0;
}