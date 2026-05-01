#include "Burbuja.h"

//ordenamiento de enteros
void burbujaInt(int *arr, int n){
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            if(*(arr + j) > *(arr + j + 1)){
                int temp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = temp;
            }
        }
    }
}

//ordenamiento de caracteres
void burbujaChar(char *arr, int n){
    for(int i=0; i<n-1; i++) {
        for(int j=0; j<n-i-1; j++){
            if(*(arr +j) > *(arr+j+1)){
                char temp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = temp;
            }
        }
    }
}

//ordenamiento de estudiantes
void burbujaEst(Estudiante *arr, int n) {
    for(int i=0; i<n-1; i++) {
        for(int j=0; j<n-i-1; j++){
            if((arr + j)->calificacion > (arr + j + 1)->calificacion){
                Estudiante temp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = temp;
            }
        }
    }
}