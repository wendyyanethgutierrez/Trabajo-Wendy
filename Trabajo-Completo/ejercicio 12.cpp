#include <iostream>
using namespace std;

int main() {
  int n;
  
  // Pedir al usuario que ingrese un número
  do {
    cout << "Ingresa un valor no negativo: ";
    cin >> n;
  } while (n < 0);
  
  // Imprimir las primeras n líneas
  for (int i = n; i >= 1; i--) {
    for (int j = 1; j <= i; j++) {
      cout << j;
    }
    cout << endl;
  }
  
  // Imprimir la penúltima línea
  for (int i = 1; i <= 2; i++) {
    for (int j = 1; j <= i+1; j++) {
      cout << j << " ";
    }
    cout << endl;
  }
  
  // Imprimir la última línea
  cout << "1" << endl;
  
  return 0;
}