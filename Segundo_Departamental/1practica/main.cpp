#include <iostream>
#include <string>
#include "Persona.h"
#include "Auto.h"
using namespace std;

int main(int argc, char** argv) {
    cout << "El tamanio de la clase Persona es: " << sizeof(Persona) << " bytes" << endl;
    cout << "El tamanio de la clase Auto es: " << sizeof(Auto) << " bytes" << endl;

    Persona personas[3];
    Persona *pPersonas = personas;

    Auto autos[3];
    Auto *pAutos = autos;

    // ===== CAPTURA PERSONAS =====
    cout << endl;
    for(int i = 0; i < 3; i++) {
        cout << "Persona " << i + 1 << endl;
        (pPersonas + i)->capturar();
        cout << endl;
    }

    // ===== CAPTURA AUTOS =====
    for(int i = 0; i < 3; i++) {
        cout << "Auto " << i + 1 << endl;
        (pAutos + i)->capturar();
        cout << endl;
    }

    // ===== ENLAZAR PERSONAS =====
    for(int i = 0; i < 2; i++) {
        (pPersonas + i)->siguiente = (pPersonas + i + 1);
    }
    (pPersonas + 2)->siguiente = NULL;

    // ===== ENLAZAR AUTOS =====
    for(int i = 0; i < 2; i++) {
        (pAutos + i)->siguiente = (pAutos + i + 1);
    }
    (pAutos + 2)->siguiente = NULL;

    // ===== MOSTRAR PERSONAS =====
    cout << endl << "LISTA DE PERSONAS" << endl;
    for(int i = 0; i < 3; i++) {
        cout << "Persona " << i + 1 << endl;
        (pPersonas + i)->mostrar();
        cout << endl;
    }

    // ===== MOSTRAR AUTOS =====
    cout << "LISTA DE AUTOS" << endl;
    for(int i = 0; i < 3; i++) {
        cout << "Auto " << i + 1 << endl;
        (pAutos + i)->mostrar();
        cout << endl;
    }

    // ===== RECORRIDO CON PUNTERO INTERNO PERSONAS =====
    cout << "RECORRIDO CON PUNTERO INTERNO - PERSONAS" << endl;
    Persona* actualP = pPersonas;
    while(actualP != NULL) {
        actualP->mostrar();
        cout << endl;
        actualP = actualP->siguiente;
    }

    // ===== RECORRIDO CON PUNTERO INTERNO AUTOS =====
    cout << "RECORRIDO CON PUNTERO INTERNO - AUTOS" << endl;
    Auto* actualA = pAutos;
    while(actualA != NULL) {
        actualA->mostrar();
        cout << endl;
        actualA = actualA->siguiente;
    }

    return 0;
}