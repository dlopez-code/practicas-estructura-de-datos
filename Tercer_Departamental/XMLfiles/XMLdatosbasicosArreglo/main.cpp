#include <iostream>
#include <fstream>
#include "Numeros.h"

using namespace std;

int main(int argc, char** argv){

    Numeros objeto;
    int numeros[5];

    cout<<"Teclee 5 numeros: ";

    for(int i=0; i<5; i++){
        cin>>numeros[i];
    }

    ofstream archivo("numeros.xml");

    archivo<<"<?xml version=\"1.0\" encoding=\"UTF-8\"?>"<<endl;
    archivo<<"<Numeros>"<<endl;

    for(int i=0; i<5; i++){
        archivo<<"    <Numero>"<<numeros[i]<<"</Numero>"<<endl;
    }

    archivo<<"    <Suma>"<<objeto.suma(numeros)<<"</Suma>"<<endl;
    archivo<<"    <Promedio>"<<objeto.promedio(numeros)<<"</Promedio>"<<endl;
    archivo<<"    <Maximo>"<<objeto.max(numeros)<<"</Maximo>"<<endl;
    archivo<<"    <Minimo>"<<objeto.min(numeros)<<"</Minimo>"<<endl;

    archivo<<"</Numeros>"<<endl;

    archivo.close();

    cout<<"\nDatos guardados en numeros.xml"<<endl;

    return 0;
}