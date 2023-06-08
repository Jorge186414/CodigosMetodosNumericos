#include <stdio.h>
#include <string.h>

struct empleado
{
    char nombre[100];
    char sexo[50];
    int sueldo;
};

int main(void)
{
    struct empleado empleados[5];

    for (int i = 0; i < 5; i++)
    {
        printf("\n");
        printf("Empleado %d:\n", i + 1);
        printf("Ingrese el nombre del empleado: ");
        gets(empleados[i].nombre);
        printf("Ingrese el sexo del empleado: ");
        gets(empleados[i].sexo);
        printf("Ingrese el sueldo del empleado: ");
        scanf("%d", &empleados[i].sueldo);
        getchar();
    }

    printf("\n");
    struct empleado menor_sueldo = empleados[0];
    for (int i = 1; i < 5; i++)
    {
        if (empleados[i].sueldo < menor_sueldo.sueldo)
        {
            menor_sueldo = empleados[i];
        }
    }

    printf("\nEmpleado con el menor sueldo:\n");
    printf("Nombre: %s\n", menor_sueldo.nombre);
    printf("Sexo: %s\n", menor_sueldo.sexo);
    printf("Sueldo: %d\n", menor_sueldo.sueldo);

    getchar();

    return 0;
}
