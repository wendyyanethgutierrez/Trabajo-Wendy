#include <iostream>
using namespace std;

int main() {
    int x, y, resto;
    cout << "Ingresa dos números enteros positivos: ";
    cin >> x >> y;

    // Algoritmo de Euclides
    while (y != 0) {
        resto = x % y;
        x = y;
        y = resto;
    }

    cout << "El máximo común divisor es: " << x << endl;

    return 0;
}