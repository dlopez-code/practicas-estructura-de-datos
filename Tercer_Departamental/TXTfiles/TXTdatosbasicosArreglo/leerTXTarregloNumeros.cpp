#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){

    ifstream archivo("numeros.txt");

    string linea;

    if(!archivo){
        cout<<"No se pudo abrir el archivo"<<endl;
        return 1;
    }

    cout<<"CONTENIDO DEL ARCHIVO TXT\n\n";

    while(getline(archivo,linea)){
        cout<<linea<<endl;
    }

    archivo.close();

    return 0;
}