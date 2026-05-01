#include <iostream>
#include <string>
#include "Persona.h"
#include "Auto.h"
using namespace std;

int main(int argc, char** argv) {
    cout<<"El tamanio de la clase Auto es: "<<sizeof(Auto)<<" bytes"<<endl;
    cout<<"El tamanio de la clase Persona es: "<<sizeof(Persona)<<" bytes"<<endl;
    
    //Arreglos de nuevos tipos de datos
    Auto autos[3];
    Persona personas[3];

    //Puntero al arreglo de personas
    Persona *pPersonas = personas; 

    //Llenado usando acceso indirecto
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

    cout<<endl<<"LISTA DE PERSONAS"<<endl;
    // Mostrar usando punteros
    for(int i=0; i<3; i++){
        (pPersonas + i)->mostrar();
        cout<<endl;
    }

    return 0;
}