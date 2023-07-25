#include <iostream>

int main() {
    std::cout << "Números de tres cifras donde la suma de los cuadrados de sus dígitos es igual al cociente de la división entre 3:" << std::endl;

    for (int num = 100; num <= 999; num++) {
        int digito1 = num / 100;  // Primer dígito
        int digito2 = (num / 10) % 10;  // Segundo dígito
        int digito3 = num % 10;  // Tercer dígito

        int sumaCubos = digito1 * digito1 + digito2 * digito2 + digito3 * digito3;
        int cociente = num / 3;

        if (sumaCubos == cociente) {
            std::cout << num << std::endl;
        }
    }

    return 0;
}