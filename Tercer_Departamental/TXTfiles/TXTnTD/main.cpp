#include <iostream>
#include <string>
#include <fstream>
#include "Persona.h"
#include "Auto.h"

using namespace std;

int main(int argc, char** argv) {

    cout<<"El tamanio de la clase Auto es: "<<sizeof(Auto)<<" bytes"<<endl;
    cout<<"El tamanio de la clase Persona es: "<<sizeof(Persona)<<" bytes"<<endl;

    Auto autos[3];
    Persona personas[3];

    Persona *pPersonas = personas;

    cout<<endl;

    for(int i=0; i<3; i++){
        cout<<"Persona "<<i+1<<endl;

        cout<<"Nombre: ";
        cin>>(pPersonas + i)->nombre;

        cout<<"Apellido paterno: ";
        cin>>(pPersonas + i)->ap;

        cout<<"Apellido materno: ";
        cin>>(pPersonas + i)->am;

        cout<<"Genero: ";
        cin>>(pPersonas + i)->genero;

        cout<<"Edad: ";
        cin>>(pPersonas + i)->edad;

        cout<<endl;
    }

    // Crear archivo TXT
    ofstream archivo("personas.txt");

    for(int i=0; i<3; i++){
        archivo
            << "Nombre: " << (pPersonas+i)->nombre << "\n"
            << "Apellido paterno: " << (pPersonas+i)->ap << "\n"
            << "Apellido materno: " << (pPersonas+i)->am << "\n"
            << "Genero: " << (pPersonas+i)->genero << "\n"
            << "Edad: " << (pPersonas+i)->edad << "\n"
            << "------------------------\n";
    }

    archivo.close();

    cout << "\nDatos guardados correctamente en personas.txt" << endl;

    return 0;
}