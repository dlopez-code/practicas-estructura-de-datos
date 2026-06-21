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

    // Crear archivo CSV
    ofstream archivo("personas.csv");

    // Encabezados
    archivo << "Nombre,ApellidoPaterno,ApellidoMaterno,Genero,Edad\n";

    // Datos
    for(int i=0; i<3; i++){
        archivo
            << (pPersonas+i)->nombre << ","
            << (pPersonas+i)->ap << ","
            << (pPersonas+i)->am << ","
            << (pPersonas+i)->genero << ","
            << (pPersonas+i)->edad << "\n";
    }

    archivo.close();

    cout << "\nDatos guardados correctamente en personas.csv" << endl;

    return 0;
}