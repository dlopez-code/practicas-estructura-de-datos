#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){

    ifstream archivo("cola.csv");

    string linea;

    if(!archivo){
        cout<<"No se pudo abrir el archivo"<<endl;
        return 1;
    }

    cout<<"CONTENIDO DEL CSV\n\n";

    while(getline(archivo,linea)){
        cout<<linea<<endl;
    }

    archivo.close();

    return 0;
}