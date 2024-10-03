#include "operaciones.h"

// operaciones.c

float suma(int a, int b, int c, int d){
    return a + b + c + d;
}

float resta(int a, int b, int c, int d){
    return a - b - c - d;
}

float multiplicacion(int a, int b, int c, int d){
    return a * b * c * d;
}

float division(float a, float b, float c, float d){
    return a / b / c / d;
}

void identificarSigno(float a){
    printf(a > 0 ? "POSITIVO\n" : a < 0 ? "NEGATIVO\n" : "NEUTRO\n");
}