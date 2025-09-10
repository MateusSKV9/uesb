#include <iostream> 

using namespace std;

 int main() {

 
 //variaveis
 int num;
 int total=0;
 int quantc=0;
 int quantr=0;
 int quants=0;
 int soma=0;
 //variaveis

  
    for(int i = 0; i < num; i++){
        int quantidade=0;
        char tipo;
      cin >> quantidade >> tipo;

      if(tipo == 'C') {
        quantc += quantidade; 
      } else if (tipo == 'R') {
        quantr += quantidade; 
      } else {
        quants += quantidade;
      }
}

return 0;

 }