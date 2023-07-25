#include <iostream>

int main() {
    int m = 30;
    int suma = 0;
    int contador = 0;
    int numero = 2;

    while (contador < m) {
        suma += numero;
        numero += 2;
        contador++;
    }

    std::cout << "La suma de los primeros " << m << " números pares es: " << suma << std::endl;

    return 0;
}