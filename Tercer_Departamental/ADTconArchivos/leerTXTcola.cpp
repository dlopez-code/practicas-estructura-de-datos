#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){

    ifstream archivo("cola.txt");

    string linea;

    if(!archivo){
        cout<<"No se pudo abrir el archivo"<<endl;
        return 1;
    }

    cout<<"CONTENIDO DEL TXT\n\n";

    while(getline(archivo,linea)){
        cout<<linea<<endl;
    }

    archivo.close();

    return 0;
}