#include <iostream>
using namespace std; 

/*
  3. Desenvolva uma solução recursiva que determine se um número inteiro positivo possui a mesma
  sequência de algarismos quando lido da esquerda para a direita e da direita para a esquerda. Por exemplo,
  12 21 deverá ser considerado palíndromo, enquanto 12 31 não deverá.
  Não utilize string, vetor ou funções prontas de conversão. Caso considere necessário, poderão ser
  criadas funções auxiliares para determinar potência de 10 ou quantidade de algarismos.
  Exemplos:
  Entrada: 1221
  Saída: Palíndromo
  Entrada: 1231
  Saída: Não é palíndromo
*/


// CRIAR CÓDIGO UTILIZANDO ESSA LÓGICA   
// 1*10^3 + 1*10^0 (4-1) (4-4) 
// 2*10^2 + 2*10^1 (4-2) (4-3) 

// 1221 ==> 1*10^3 + 2*10^2 + 2*10^1 + 1*10^0

// 1000 => 1*10^3
//  200 => 2*10^2
//   20 => 2*10^1
//    1 => 1*10^0

// 1221 / 1000 = 1
// 1221 % 10   = 1

// 1221 / 100 = 21

// 1 2 2 1

// / 10

// 1221
// 122
// 12
// 1



bool ePalindromo1(int numero, int tamanho, int original) {
  if() {
    return true;
  }

  const final = numero % 10;
  const inicio = numero / 10^3;

  if(final != inicio) return false;

  ePalindromo1(numero, tamanho - 1, original);
}

int calcAlgarismos(int n) {
  int qtd = 0;

  while(n >= 10) {
    qtd++;
    n = n / 10;
  }

  return qtd;
}

int main() {
  int numero;

  cout << "Digite um numero inteiro: ";
  cin >> numero;

  int qtdAlgarismos = calcAlgarismos(numero);

  // cout << "Quantidade de algarismos: " << qtdAlgarismos << endl;
  
  return 0;
}


// #include <iostream>
// using namespace std;

// bool verificarPalindromo(int numeroOriginal, int numeroInvertido);
// int inverterNumero(int X, int resultado);

// int main()
// {
//     int X;
//     int numeroInvertido;

//     cout << "Digite um numero inteiro: ";
//     cin >> X;

//     numeroInvertido = inverterNumero(X, 0);
    
//     if(verificarPalindromo(X, numeroInvertido)){
//         cout << "E palindromo";
//     }else{
//         cout << "Nao e palindromo";
//     }
// }
// 1221

// 1221 0
// 122  1
// 12   12
// 1    122
// 0    1221
// int inverterNumero(int X, int resultado){

//     int algarismo;
//     int restoNum;

//     if(X == 0){
//       return resultado;
//     }

//     algarismo = X % 10; // 1
//     restoNum = X / 10; // 0

//     int novoResultado = resultado * 10 + algarismo;
    
//     return inverterNumero(restoNum, novoResultado);
// }

// bool verificarPalindromo(int numeroOriginal, int numeroInvertido){

//     if(numeroOriginal == numeroInvertido){
//         return true;
//     }else{
//         return false;
//     }
// }