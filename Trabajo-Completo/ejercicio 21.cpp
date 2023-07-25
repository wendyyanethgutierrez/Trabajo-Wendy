#include <iostream>
#include <cmath>

using namespace std;

int main() {
    float G, m1, m2, d, f;
    cout << "Ingrese el valor de G en cm^3 / g * seg^2: ";
    cin >> G;
    G *= pow(10, -7); // Convert G to dyn * cm^2 / g^2
    cout << "Ingrese el valor de m1 en g: ";
    cin >> m1;
    cout << "Ingrese el valor de m2 en g: ";
    cin >> m2;
    cout << "Ingrese la distancia d en cm: ";
    cin >> d;
    f = G * m1 * m2 / pow(d, 2);
    f *= pow(10, 5); // Convert f to dyn
    cout << "La fuerza gravitacional es: " << f << " dyn" << endl;
    return 0;
}