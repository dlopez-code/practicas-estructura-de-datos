#include "Auto.h"
#include <iostream>
using namespace std;

void Auto::capturar() {
    cout << "Precio: ";
    cin >> precio;

    cout << "Anio: ";
    cin >> anio;

    siguiente = NULL; // inicializar el puntero en NULL
}

void Auto::mostrar() {
    cout << "Precio: $" << precio << endl;
    cout << "Anio: " << anio << endl;

    // Mostrar al auto que apunta si no es NULL
    if(siguiente != NULL) {
        cout << "Siguiente auto - Precio: $" << siguiente->precio
             << " Anio: " << siguiente->anio << endl;
    }
}