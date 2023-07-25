#include <iostream>

using namespace std;

int main() {
    float a, b, c, d, e, f, x, y, det;
    cout << "Ingrese los coeficientes a, b, c, d, e, f: ";
    cin >> a >> b >> c >> d >> e >> f;
    det = a*d - b*c; // determinant of the coefficient matrix
    if (det == 0) {
        cout << "El sistema no tiene solución única\n";
    } else {
        x = (d*c - b*f) / det;
        y = (a*f - c*e) / det;
        cout << "La solución es: x=" << x << ", y=" << y << endl;
    }
    return 0;
}