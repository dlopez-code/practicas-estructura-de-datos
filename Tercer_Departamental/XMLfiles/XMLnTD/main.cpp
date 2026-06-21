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
        cin>>(pPersonas+i)->nombre;

        cout<<"Apellido paterno: ";
        cin>>(pPersonas+i)->ap;

        cout<<"Apellido materno: ";
        cin>>(pPersonas+i)->am;

        cout<<"Genero: ";
        cin>>(pPersonas+i)->genero;

        cout<<"Edad: ";
        cin>>(pPersonas+i)->edad;

        cout<<endl;
    }

    // Crear archivo XML
    ofstream archivo("personas.xml");

    archivo << "<?xml version=\"1.0\" encoding=\"UTF-8\"?>" << endl;
    archivo << "<Personas>" << endl;

    for(int i=0; i<3; i++){

        archivo << "    <Persona>" << endl;

        archivo << "        <Nombre>"
                << (pPersonas+i)->nombre
                << "</Nombre>" << endl;

        archivo << "        <ApellidoPaterno>"
                << (pPersonas+i)->ap
                << "</ApellidoPaterno>" << endl;

        archivo << "        <ApellidoMaterno>"
                << (pPersonas+i)->am
                << "</ApellidoMaterno>" << endl;

        archivo << "        <Genero>"
                << (pPersonas+i)->genero
                << "</Genero>" << endl;

        archivo << "        <Edad>"
                << (pPersonas+i)->edad
                << "</Edad>" << endl;

        archivo << "    </Persona>" << endl;
    }

    archivo << "</Personas>" << endl;

    archivo.close();

    cout << "\nDatos guardados en personas.xml" << endl;

    return 0;
}