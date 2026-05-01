#include <iostream>
#include "QuickSort.h"
using namespace std;
#define MAX 100

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv){
    int n;

    //numeros enteros
    int numeros[MAX];
    int *pNum = numeros;

    cout<<"Ingrese la cantidad de numeros a ordenar: ";
    cin>>n;

    for(int i=0; i<n; i++){
        cout<<"Ingresa el numero "<<i + 1<<": ";
        cin>>*(pNum + i);
    }

    quickSortInt(pNum, 0, n - 1);

    cout<<"Los numeros ordenados son: ";
    for(int i=0; i<n; i++){
    	cout<<*(pNum + i)<<" ";	
	} 
    cout<<"\n\n";
    
    //caracteres
    char caracteres[MAX];
    char* pChar = caracteres;

    cout<<"Ingrese la cantidad de caracteres que desea ordenar: ";
    cin>>n;

    for(int i=0; i<n; i++){
        cout<<"Ingresa la letra "<<i + 1<<": ";
        cin>>*(pChar + i);
    }

    quickSortChar(pChar, 0, n - 1);

    cout<<"Los caracteres ordenados son: ";
    for(int i=0; i<n; i++){
    	cout<< *(pChar + i) <<" ";	
	} 
    cout<<"\n\n";


    //Estudiantes
    Estudiante alumnos[MAX];
    Estudiante *pAlumnos = alumnos;

    cout<<"Ingrese la cantidad de estudiantes que desea ordenar: ";
    cin>>n;

    for(int i=0; i<n; i++){
        cout<<"Nombre del estudiante " << i + 1 << ": ";
        cin>>(pAlumnos + i)->nombre;
        cout<<"Calificacion de "<< (pAlumnos + i)->nombre << ": ";
        cin>>(pAlumnos + i)->calificacion;
    }

    quickSortEst(pAlumnos, 0, n - 1);

    cout<<"\nLos estudiantes ordenados por calificacion son:\n";
    for(int i=0; i<n; i++){
        cout<<(pAlumnos + i)->nombre << " -> "<< (pAlumnos + i)->calificacion << endl;
    }

    return 0;
}