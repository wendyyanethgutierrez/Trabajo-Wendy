#include <iostream>
#include <cmath>

using namespace std;

int main() {
    float pies, pulgadas, yardas, cm, metros;
    const float pulgadas_por_pie = 12; // Definimos una constante con el valor de pulgadas por pie
    const float yardas_por_pie = 1.0/3.0; // Definimos otra constante con el valor de yardas por pie
    const float cm_por_pulgada = 2.54; // Definimos otra constante con el valor de centímetros por pulgada
    const float cm_por_metro = 100; // Definimos otra constante con el valor de centímetros por metro
    cout << "Ingrese el valor en pies: ";
    cin >> pies;
    pulgadas = pies * pulgadas_por_pie; // Convertir pies a pulgadas
    yardas = pies * yardas_por_pie; // Convertir pies a yardas
    cm = pulgadas * cm_por_pulgada; // Convertir pulgadas a centímetros
    metros = cm / cm_por_metro; // Convertir centímetros a metros
    cout << pies << " pies son equivalentes a:" << endl;
    cout << pulgadas << " pulgadas." << endl;
    cout << yardas << " yardas." << endl;
    cout << cm << " centímetros." << endl;
    cout << metros << " metros." << endl;
    return 0;
}