#include <iostream>
#include "MergeSort.h"
using namespace std;
#define MAX 100

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv){
    int n;

    //NUMEROS
    int numeros[MAX];

    cout<<"Ingrese la cantidad de numeros que desea ordenar: ";
    cin>>n;

    for(int i=0; i<n; i++){
        cout<<"Ingresa el numero "<<i + 1<<": ";
        cin>>numeros[i];
    }

    mergeSortInt(numeros, 0, n-1);

    cout<<"Estos son los numeros ordenados: ";
    for(int i=0; i<n; i++){
    	cout<<numeros[i]<<" ";
	}
    cout<<"\n\n";


    //CARACTERES
    char caracteres[MAX];

    cout<<"Ingrese la cantidad de caracteres que desea ordenar: ";
    cin>>n;

    for(int i=0; i<n; i++){
        cout<<"Ingresa la letra "<<i + 1<<": ";
        cin>>caracteres[i];
    }

    mergeSortChar(caracteres, 0, n - 1);

    cout <<"Las letras ordenadas son: ";
    for(int i=0; i<n; i++){
    	 cout<<caracteres[i]<<" ";
	}
    cout<<"\n\n";


    //ESTUDIANTES
    Estudiante alumnos[MAX];

    cout<<"Ingrese el numero de estudaintes que desea ingresar: ";
    cin>>n;

    for(int i=0; i<n; i++){
        cout<<"Nombre del estudiante "<< i + 1<<": ";
        cin>>alumnos[i].nombre;
        cout<<"Calificacion: ";
        cin>>alumnos[i].calificacion;
    }

    mergeSortEst(alumnos, 0, n - 1);

    cout<<"\nEstudiantes ordenados por calificacion:\n";
    for(int i=0; i<n; i++){
        cout<< alumnos[i].nombre<<" -> "<<alumnos[i].calificacion<<endl;
    }

    return 0;
}