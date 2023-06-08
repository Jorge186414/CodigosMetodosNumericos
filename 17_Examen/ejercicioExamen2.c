#include <stdio.h>
#include <stdlib.h>

#define FILAS 10
#define COLUMNAS 10

int main() {
    int tabla[FILAS][COLUMNAS];
    int *puntero_filas;
    int *puntero_columnas;

    puntero_filas = &tabla[0][0];
    for (int fila = 0; fila < FILAS; fila++) {
        puntero_columnas = &tabla[fila][0];
        for (int columna = 0; columna < COLUMNAS; columna++) {
            *puntero_columnas = (fila + 1) * (columna + 1);
            puntero_columnas++;
        }
        puntero_filas += COLUMNAS;
    }

    puntero_filas = &tabla[0][0];
    for (int fila = 0; fila < FILAS; fila++) {
        puntero_columnas = &tabla[fila][0];
        for (int columna = 0; columna < COLUMNAS; columna++) {
            printf("%d\t", *puntero_columnas);
            puntero_columnas++;
        }
        printf("\n");
        puntero_filas += COLUMNAS;
    }

    return 0;
}