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

    // Crear archivo JSON
    ofstream archivo("personas.json");

    archivo << "[\n";

    for(int i=0; i<3; i++){
        archivo << "  {\n";
        archivo << "    \"nombre\": \"" << (pPersonas+i)->nombre << "\",\n";
        archivo << "    \"apellidoPaterno\": \"" << (pPersonas+i)->ap << "\",\n";
        archivo << "    \"apellidoMaterno\": \"" << (pPersonas+i)->am << "\",\n";
        archivo << "    \"genero\": \"" << (pPersonas+i)->genero << "\",\n";
        archivo << "    \"edad\": " << (pPersonas+i)->edad << "\n";
        archivo << "  }";
        if(i < 2){
            archivo << ",";
        }
        archivo << "\n";
    }

    archivo << "]\n";

    archivo.close();

    cout << "\nDatos guardados correctamente en personas.json" << endl;

    return 0;
}
