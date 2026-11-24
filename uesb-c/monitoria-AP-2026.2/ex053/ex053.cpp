#include <iostream>
using namespace std; 

/*
  1. Crie uma struct chamada Aluno contendo matrícula, nome e nota. Declare um vetor com 6 alunos e leia
  seus dados. Em seguida, leia uma matrícula e percorra o vetor para localizar o aluno correspondente.
  Caso seja encontrado, apresente seu nome e sua nota; caso contrário, informe que a matrícula não está
  cadastrada.
*/

// ———————————————————————————————————————————————

struct Aluno {
  int matricula;
  string nome;
  float nota;
};

// ———————————————————————————————————————————————

int main() {
  int qtdAlunos = 2;
  Aluno alunos[qtdAlunos];
  
  cout << "===== INSERINDO DADOS =====" << endl;
  for (int i = 0; i < qtdAlunos; i++) {
    cout << "=> Aluno [" << i + 1 << "]" << endl;
    cout << "Digite a matricula: ";
    cin >> (alunos + i)->matricula;
    cin.ignore();

    cout << "Digite o nome: ";
    getline(cin, (alunos + i)->nome);
   
    cout << "Digite a nota: ";
    cin >> (alunos + i)->nota;
  }


  cout << "--------------------------" << endl;

  int matriculaBusca;
  cout << "Digite a matricula do aluno que deseja buscar: ";
  cin >> matriculaBusca;

  bool encontrou = false;
  Aluno alunoEncontrado;

  for (int i = 0; i < qtdAlunos; i++) {
    if(alunos[i].matricula == matriculaBusca) {
      encontrou = true;
      alunoEncontrado = alunos[i];
      break;
    }
  }
  
  cout << "--------------------------" << endl;
  
  if(encontrou) {
    cout << "Aluno encontrado: " << alunoEncontrado.nome << " - " << alunoEncontrado.nota;
  } else {
    cout << "Matricula não cadastrada";
  }

  return 0;
}