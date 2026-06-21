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

    ofstream archivo("numeros.txt");

    archivo<<"Numeros: ";
    for(int i=0; i<5; i++){
        archivo<<numeros[i]<<" ";
    }
    archivo<<"\n";

    archivo<<"Suma: "<<objeto.suma(numeros)<<"\n";
    archivo<<"Promedio: "<<objeto.promedio(numeros)<<"\n";
    archivo<<"Maximo: "<<objeto.max(numeros)<<"\n";
    archivo<<"Minimo: "<<objeto.min(numeros)<<"\n";

    archivo.close();

    cout<<"\nDatos guardados en numeros.txt"<<endl;

    return 0;
}