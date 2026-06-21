#include "QuickSort.h"

// NUMEROS ENTEROS
int particionInt(int arr[], int inicio, int fin) {
    int pivote = arr[fin];
    int i = inicio - 1;

    for (int j = inicio; j < fin; j++) {
        if (arr[j] <= pivote) {
            i++;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    int temp = arr[i + 1];
    arr[i + 1] = arr[fin];
    arr[fin] = temp;

    return i + 1;
}

void quickSortInt(int arr[], int inicio, int fin) {
    if (inicio < fin) {
        int pivote = particionInt(arr, inicio, fin);
        quickSortInt(arr, inicio, pivote - 1);
        quickSortInt(arr, pivote + 1, fin);
    }
}

// CARACTERES
int particionChar(char arr[], int inicio, int fin) {
    char pivote = arr[fin];
    int i = inicio - 1;

    for (int j = inicio; j < fin; j++) {
        if (arr[j] <= pivote) {
            i++;
            char temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    char temp = arr[i + 1];
    arr[i + 1] = arr[fin];
    arr[fin] = temp;

    return i + 1;
}

void quickSortChar(char arr[], int inicio, int fin) {
    if (inicio < fin) {
        int pivote = particionChar(arr, inicio, fin);
        quickSortChar(arr, inicio, pivote - 1);
        quickSortChar(arr, pivote + 1, fin);
    }
}

// ESTUDIANTES
int particionEst(Estudiante arr[], int inicio, int fin) {
    int pivote = arr[fin].calificacion;
    int i = inicio - 1;

    for (int j = inicio; j < fin; j++) {
        if (arr[j].calificacion <= pivote) {
            i++;
            Estudiante temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    Estudiante temp = arr[i + 1];
    arr[i + 1] = arr[fin];
    arr[fin] = temp;

    return i + 1;
}

void quickSortEst(Estudiante arr[], int inicio, int fin) {
    if (inicio < fin) {
        int pivote = particionEst(arr, inicio, fin);
        quickSortEst(arr, inicio, pivote - 1);
        quickSortEst(arr, pivote + 1, fin);
    }
}