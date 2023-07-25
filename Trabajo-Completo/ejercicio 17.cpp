#include <iostream>
using namespace std;

int main() {
    int numero, invertido = 0, digito;
    cout << "Ingresa un número entero positivo: ";
    cin >> numero;

    while (numero > 0) {
        digito = numero % 10;
        invertido = invertido * 10 + digito;
        numero = numero / 10;
    }

    cout << "El número invertido es: " << invertido << endl;

    return 0;
}