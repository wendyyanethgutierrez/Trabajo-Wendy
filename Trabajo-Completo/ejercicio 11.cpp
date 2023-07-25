#include <iostream>
using namespace std;

int main() {
  int numeros[10], positivos = 0, negativos = 0, cero = 0;
  
  // Leer los 10 números
  for (int i = 0; i < 10; i++) {
    cout << "Ingresa el valor numero " << i+1 << ": ";
    cin >> numeros[i];
    
    // Clasificar el número
    if (numeros[i] > 0) {
      positivos++;
    }
    else if (numeros[i] < 0) {
      negativos++;
    }
    else {
      cero++;
    }
  }
  
  // Imprimir los resultados
  cout << "De los 10 numeros ingresados, " << positivos << " son positivos, " << negativos << " son negativos, y " << cero << " son cero." << endl;

  return 0;
}