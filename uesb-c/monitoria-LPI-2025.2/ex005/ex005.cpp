#include <iostream>
#include <iomanip>
using namespace std;

int main() {
 float grausCelsius, grauFahrenheit;

 cout << "Temperatura em graus Celsius: ";
 cin >> grausCelsius;

 grauFahrenheit = (grausCelsius * 9 /  5) + 32;

 cout << fixed << setprecision(2) << "Temperatura em Fahrenheit: " << grauFahrenheit << endl;

  return 0;
}