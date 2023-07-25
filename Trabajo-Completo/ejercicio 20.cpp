#include
#include

using namespace std;

int main() {
// Precios para cada ubicación.
double price_general = 50.00;
double price_preferencia = 80.00;
double price_platea = 120.00;
double price_vip = 160.00;

// Variables para almacenar la ubicación elegida y el número de entradas
string location;
int num_tickets;

// Preguntar al usuario por la ubicación y número de entradas
cout << "Ingrese la ubicacion (general, preferencia, platea o vip): ";
cin >> location;
cout << "Ingrese la cantidad de entradas: ";
cin >> num_tickets;

// Calcule el costo total en función de la ubicación elegida y la cantidad de boletos
double total_cost;
if (location == "general") {
    total_cost = num_tickets * price_general;
} else if (location == "preferencia") {
    total_cost = num_tickets * price_preferencia;
} else if (location == "platea") {
    total_cost = num_tickets * price_platea;
} else if (location == "vip") {
    total_cost = num_tickets * price_vip;
    // Si la ubicación es VIP, solicite a la usuaria que elija una bebida.
    string drink;
    cout << "Elija su bebida (gaseosa, cerveza o agua): ";
    cin >> drink;
    // Agregue el costo de la bebida al costo total
    if (drink == "gaseosa" || drink == "cerveza") {
        total_cost += 10.00;
    } else if (drink == "agua") {
        total_cost += 5.00;
    }
} else {
    //Si la ubicación no es válida, imprime un mensaje de error
    cout << "Ubicacion no valida" << endl;
    return 0;
}

// Imprimir el costo total
cout << "Total a pagar: $" << total_cost << endl;

return 0;
}