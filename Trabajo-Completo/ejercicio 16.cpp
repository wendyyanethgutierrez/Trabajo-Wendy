#include <iostream>
#include <cmath>

int main() {
    double x;
    double resultado;

    for (x = 0.0; x <= 5.0; x += 0.5) {
        resultado = cos(3 * x) - 2 * x;
        std::cout << "Para x = " << x << ", el resultado es: " << resultado << std::endl;
    }

    return 0;
}