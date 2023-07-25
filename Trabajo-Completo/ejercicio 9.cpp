#include <iostream>

int main() {
    int n;
    double suma = 0.0;

    std::cout << "Ingrese el valor de 'n': ";
    std::cin >> n;

    for (int i = 1; i <= n; i++) {
        double termino = 1.0 / (i * i * i);
        suma += termino;
    }

    std::cout << "La suma de la serie es: " << suma << std::endl;

    return 0;
}