#include "Auto.h"
#include <iostream>
using namespace std;

void Auto::capturar(){
    cout<<"Precio: ";
    cin>>precio;

    cout<<"Anio: ";
    cin>>anio;
}

void Auto::mostrar(){
    cout<<"Precio: $"<<precio<<endl;
    cout<<"Anio: "<<anio<<endl;
}