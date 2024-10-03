
#include <stdio.h>
#include <stdlib.h>
#include "operaciones.h"

// main.c

int main() {
    
    int num1 = 12, num2 = 3, num3 = 1, num4 = -7;
    float tem;
    
    float (*operaciones[])(int, int, int, int) = {suma, resta, multiplicacion};
    const char *nombres[] = {"suma", "resta", "multiplicación"};

    for (int i = 0; i < 3; i++) {
        tem = operaciones[i](num1, num2, num3, num4);
        printf("La %s de %d, %d, %d y %d es: %.0f\n", nombres[i], num1, num2, num3, num4, tem);
        printf("Y es ");
        identificarSigno(tem);
    }
    
    tem = division((float)num1, (float)num2, (float)num3, (float)num4);
    printf("La división de %d, %d, %d y %d es: %.4f\n", num1, num2, num3, num4, tem);
    printf("Y es ");
    identificarSigno(tem);

    return 0;
}
