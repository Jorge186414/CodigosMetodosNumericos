#include <stdio.h>

struct atleta
{
    char deporte[100];
    char nombre[100];
    char pais[100];
    int noMedallas;
};

int main(void)
{
    struct atleta atleta;

    printf("Ingrese el deporte del atleta: ");
    scanf("%s", atleta.deporte);

    printf("Ingrese el nombre del atleta: ");
    scanf("%s", atleta.nombre);

    printf("Ingrese el pais del atleta: ");
    scanf("%s", atleta.pais);

    printf("Ingrese el numero de medallas del atleta: ");
    scanf("%d", &atleta.noMedallas);

    printf("\nInformacion del atleta:\n");
    printf("Deporte: %s\n", atleta.deporte);
    printf("Nombre: %s\n", atleta.nombre);
    printf("Pais: %s\n", atleta.pais);
    printf("Numero de medallas: %d\n", atleta.noMedallas);

    getchar();

    return 0;
}
