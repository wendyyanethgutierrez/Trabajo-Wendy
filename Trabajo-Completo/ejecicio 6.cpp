#include <iostream>
using namespace std;

int main() {
    int n, numero, mayor, menor, suma = 0;
    double media;
    cout << "Ingresa la cantidad de números a ingresar: ";
    cin >> n;
    cout << "Ingresa " << n << " números: ";
    cin >> numero;
    mayor = numero;
    menor = numero;
    suma += numero;

    for (int i = 1; i < n; i++) {
        cin >> numero;
        suma += numero;
        if (numero > mayor) {
            mayor = numero;
        }
        if (numero < menor) {
            menor = numero;
        }
    }

    media = (double) suma / n;
    cout << "El número más grande es: " << mayor << endl;
    cout << "El número más pequeño es: " << menor << endl;
    cout << "La media es: " << media << endl;
    return 0;
}