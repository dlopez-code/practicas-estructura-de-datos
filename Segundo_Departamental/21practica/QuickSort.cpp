#include "QuickSort.h"

//numeros enteros
int particionInt(int* arr, int low, int high){
    int pivote = *(arr + high);
    int i = low - 1;

    for(int j = low; j < high; j++){
        if(*(arr + j) < pivote){
            i++;
            int temp = *(arr + i);
            *(arr + i) = *(arr + j);
            *(arr + j) = temp;
        }
    }

    int temp = *(arr + i + 1);
    *(arr + i + 1) = *(arr + high);
    *(arr + high) = temp;

    return i + 1;
}

void quickSortInt(int* arr, int low, int high){
    if(low < high){
        int pi = particionInt(arr, low, high);

        quickSortInt(arr, low, pi - 1);
        quickSortInt(arr, pi + 1, high);
    }
}

//caracteres
int particionChar(char* arr, int low, int high){
    char pivote = *(arr + high);
    int i = low - 1;

    for(int j = low; j < high; j++){
        if(*(arr + j) < pivote) {
            i++;
            char temp = *(arr + i);
            *(arr + i) = *(arr + j);
            *(arr + j) = temp;
        }
    }

    char temp = *(arr + i + 1);
    *(arr + i + 1) = *(arr + high);
    *(arr + high) = temp;

    return i + 1;
}

void quickSortChar(char* arr, int low, int high){
    if(low < high){
        int pi = particionChar(arr, low, high);

        quickSortChar(arr, low, pi - 1);
        quickSortChar(arr, pi + 1, high);
    }
}

//estudiantes
int particionEst(Estudiante* arr, int low, int high){
    int pivote = (arr + high)->calificacion;
    int i = low - 1;

    for(int j = low; j < high; j++){
        if((arr + j)->calificacion < pivote){
            i++;
            Estudiante temp = *(arr + i);
            *(arr + i) = *(arr + j);
            *(arr + j) = temp;
        }
    }

    Estudiante temp = *(arr + i + 1);
    *(arr + i + 1) = *(arr + high);
    *(arr + high) = temp;

    return i + 1;
}

void quickSortEst(Estudiante* arr, int low, int high){
    if(low < high){
        int pi = particionEst(arr, low, high);

        quickSortEst(arr, low, pi - 1);
        quickSortEst(arr, pi + 1, high); //faltaba punto y coma
    }
}