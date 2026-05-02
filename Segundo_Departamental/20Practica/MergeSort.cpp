#include "MergeSort.h"

// NUMEROS ENTEROS
void mezclarInt(int *arr, int inicio, int mitad, int fin) {
    int izq[MAX], der[MAX];
    int n1 = mitad - inicio + 1;
    int n2 = fin - mitad;

    for (int i = 0; i < n1; i++)
        izq[i] = *(arr + inicio + i);

    for (int j = 0; j < n2; j++)
        der[j] = *(arr + mitad + 1 + j);

    int i = 0, j = 0, k = inicio;
    while (i < n1 && j < n2) {
        if (izq[i] <= der[j])
            *(arr + k++) = izq[i++];
        else
            *(arr + k++) = der[j++];
    }
    while (i < n1)
        *(arr + k++) = izq[i++];
    while (j < n2)
        *(arr + k++) = der[j++];
}

void mergeSortInt(int *arr, int inicio, int fin) {
    if (inicio < fin) {
        int mitad = (inicio + fin) / 2;
        mergeSortInt(arr, inicio, mitad);
        mergeSortInt(arr, mitad + 1, fin);
        mezclarInt(arr, inicio, mitad, fin);
    }
}

// CARACTERES
void mezclarChar(char *arr, int inicio, int mitad, int fin) {
    char izq[MAX], der[MAX];
    int n1 = mitad - inicio + 1;
    int n2 = fin - mitad;

    for (int i = 0; i < n1; i++)
        izq[i] = *(arr + inicio + i);

    for (int j = 0; j < n2; j++)
        der[j] = *(arr + mitad + 1 + j);

    int i = 0, j = 0, k = inicio;
    while (i < n1 && j < n2) {
        if (izq[i] <= der[j])
            *(arr + k++) = izq[i++];
        else
            *(arr + k++) = der[j++];
    }
    while (i < n1)
        *(arr + k++) = izq[i++];
    while (j < n2)
        *(arr + k++) = der[j++];
}

void mergeSortChar(char *arr, int inicio, int fin) {
    if (inicio < fin) {
        int mitad = (inicio + fin) / 2;
        mergeSortChar(arr, inicio, mitad);
        mergeSortChar(arr, mitad + 1, fin);
        mezclarChar(arr, inicio, mitad, fin);
    }
}

// ESTUDIANTES
void mezclarEst(Estudiante *arr, int inicio, int mitad, int fin) {
    Estudiante izq[MAX], der[MAX];
    int n1 = mitad - inicio + 1;
    int n2 = fin - mitad;

    for (int i = 0; i < n1; i++)
        izq[i] = *(arr + inicio + i);

    for (int j = 0; j < n2; j++)
        der[j] = *(arr + mitad + 1 + j);

    int i = 0, j = 0, k = inicio;
    while (i < n1 && j < n2) {
        if (izq[i].calificacion <= der[j].calificacion)
            *(arr + k++) = izq[i++];
        else
            *(arr + k++) = der[j++];
    }
    while (i < n1)
        *(arr + k++) = izq[i++];
    while (j < n2)
        *(arr + k++) = der[j++];
}

void mergeSortEst(Estudiante *arr, int inicio, int fin) {
    if (inicio < fin) {
        int mitad = (inicio + fin) / 2;
        mergeSortEst(arr, inicio, mitad);
        mergeSortEst(arr, mitad + 1, fin);
        mezclarEst(arr, inicio, mitad, fin);
    }
}