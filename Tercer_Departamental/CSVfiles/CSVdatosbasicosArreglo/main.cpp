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

    ofstream archivo("numeros.csv");

    archivo<<"N1,N2,N3,N4,N5,Suma,Promedio,Maximo,Minimo\n";

    for(int i=0; i<5; i++){
        archivo<<numeros[i];

        if(i<4){
            archivo<<",";
        }
    }

    archivo<<","
           <<objeto.suma(numeros)<<","
           <<objeto.promedio(numeros)<<","
           <<objeto.max(numeros)<<","
           <<objeto.min(numeros)
           <<"\n";

    archivo.close();

    cout<<"\nDatos guardados en numeros.csv"<<endl;

    return 0;
}