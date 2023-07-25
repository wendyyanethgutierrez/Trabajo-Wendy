#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double radio;
    const double pi = 3.14159; // Valor de pi
    cout << "Ingresa el radio de la esfera: ";
    cin >> radio;
    double area = 4.0 * pi * pow(radio, 2.0); // Cálculo del área de la esfera
    double volumen = (4.0 / 3.0) * pi * pow(radio, 3.0); // Cálculo del volumen de la esfera
    cout << "El área de la esfera es " << area << endl;
    cout << "El volumen de la esfera es " << volumen << endl;
    return 0;
}