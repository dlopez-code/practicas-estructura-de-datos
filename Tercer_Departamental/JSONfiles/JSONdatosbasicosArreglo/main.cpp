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

    ofstream archivo("numeros.json");

    archivo<<"{\n";

    archivo<<"  \"numeros\": [";
    for(int i=0; i<5; i++){
        archivo<<numeros[i];
        if(i<4){
            archivo<<", ";
        }
    }
    archivo<<"],\n";

    archivo<<"  \"suma\": "<<objeto.suma(numeros)<<",\n";
    archivo<<"  \"promedio\": "<<objeto.promedio(numeros)<<",\n";
    archivo<<"  \"maximo\": "<<objeto.max(numeros)<<",\n";
    archivo<<"  \"minimo\": "<<objeto.min(numeros)<<"\n";

    archivo<<"}\n";

    archivo.close();

    cout<<"\nDatos guardados en numeros.json"<<endl;

    return 0;
}