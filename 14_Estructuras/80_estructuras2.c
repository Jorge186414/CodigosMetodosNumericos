#include <stdio.h>

struct empleado
{
    char nombre[100];
    char sexo[50];
    int sueldo;
};

int main(void)
{
    struct empleado empleado;

    printf("Ingrese el nombre del empleado: ");
    scanf("%s", empleado.nombre);

    printf("Ingrese el sexo del empleado: ");
    scanf("%s", empleado.sexo);

    printf("Ingrese el sueldo del empleado: ");
    scanf("%d", &empleado.sueldo);

    printf("\nInformacion del empleado:\n");
    printf("Nombre: %s\n", empleado.nombre);
    printf("Sexo: %s\n", empleado.sexo);
    printf("Sueldo: %d\n", empleado.sueldo);

    getchar();

    return 0;
}