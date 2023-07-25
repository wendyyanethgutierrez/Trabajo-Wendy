#include <iostream>

int main() {
    int ubicacion;
    int cantidad;
    float total = 0.0;
    bool esVIP = false;
    int bebida;

    std::cout << "Bienvenido al sistema de venta de entradas\n";
    std::cout << "Por favor, seleccione la ubicación de las entradas:\n";
    std::cout << "1. Ubicación General ($50.00)\n";
    std::cout << "2. Preferencial ($80.00)\n";
    std::cout << "3. Platea ($120.00)\n";
    std::cout << "4. VIP ($160.00)\n";
    std::cout << "Ingrese el número de opción: ";
    std::cin >> ubicacion;

    switch (ubicacion) {
        case 1:
            total += 50.00;
            break;
        case 2:
            total += 80.00;
            break;
        case 3:
            total += 120.00;
            break;
        case 4:
            total += 160.00;
            esVIP = true;
            break;
        default:
            std::cout << "Opción inválida. Saliendo del programa.\n";
            return 0;
    }

    std::cout << "Ingrese la cantidad de entradas que desea comprar: ";
    std::cin >> cantidad;

    total *= cantidad;

    if (esVIP) {
        std::cout << "Por favor, seleccione su bebida preferida:\n";
        std::cout << "1. Gaseosa\n";
        std::cout << "2. Cerveza\n";
        std::cout << "3. Agua\n";
        std::cout << "Ingrese el número de opción: ";
        std::cin >> bebida;

        switch (bebida) {
            case 1:
                total += 10.00;
                break;
            case 2:
                total += 15.00;
                break;
            case 3:
                total += 5.00;
                break;
            default:
                std::cout << "Opción inválida. No se agregará ninguna bebida.\n";
        }
    }

    std::cout << "El total a pagar es: $" << total << std::endl;

    return 0;
}