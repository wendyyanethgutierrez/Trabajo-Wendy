#include <iostream>

int main() {
    int limite;
    int suma = 0;
    int n = 0;

    std::cout << "Ingrese el límite de la suma: ";
    std::cin >> limite;

    while (suma <= limite) {
        n++;
        suma += n * n - n - 2;
    }

    std::cout << "El número natural más pequeño 'n' es: " << n << std::endl;

    return 0;
}