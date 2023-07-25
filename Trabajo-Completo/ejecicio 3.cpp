#include <iostream>
using namespace std;

int main() {
  int n, suma = 0;
  
  cout << "Ingresa un valor de n: ";
  cin >> n;
  
  for (int i = 1; i <= n; i++) {
    suma += i;
  }
  
  cout << "La suma de 1 a " << n << " es " << suma << endl;
  
  return 0;
}