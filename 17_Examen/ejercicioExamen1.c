#include <stdio.h>
#include <stdlib.h>

int main() {
    int numero;
    int *tabla = (int *)malloc(10 * sizeof(int));
    int *puntero;

    printf("Ingrese un número: ");
    scanf("%d", &numero);

    puntero = tabla;
    for (int i = 0; i < 10; i++) {
        *(puntero + i) = numero * (i + 1);
    }

    puntero = tabla;
    printf("Tabla de multiplicar de %d:\n", numero);
    for (int i = 0; i < 10; i++) {
        printf("%d x %d = %d\n", numero, i + 1, *(puntero + i));
    }

    free(tabla);
    return 0;
}
