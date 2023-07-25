#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int base, limite;
    cout << "Ingresa un límite máximo entero positivo: ";
    cin >> limite;
    cout << "Ingresa una base entera positiva: ";
    cin >> base;
    for (int i = 0; pow(base, i) < limite; i++) {
        cout << pow(base, i) << endl;
    }
    return 0;
}