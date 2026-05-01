#include "Persona.h"
#include <iostream>
using namespace std;

void Persona::capturar(){
    cout<<"Nombre: ";
    cin>>nombre;

    cout<<"Apellido paterno: ";
    cin>>ap;

    cout<<"Apellido materno: ";
    cin>>am;

    cout<<"Genero: ";
    cin>>genero;

    cout<<"Edad: ";
    cin>>edad;
}

void Persona::mostrar(){
    cout<<nombre<<" "<<ap<<" "<<am<<endl;
    cout<<"Genero: "<<genero<<endl;
    cout<<"Edad: "<<edad <<endl;
}