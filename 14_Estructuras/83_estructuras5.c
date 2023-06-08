#include <stdio.h>
#include <string.h>

struct atleta
{
    char deporte[50];
    char nombreAtleta[50];
    char pais[50];
    int nMedallas;
};

int main(void)
{
    struct atleta atletaDiez[10];
    int maxMedallas = 0;
    int indiceMaximo = 0;

    for (int i = 0; i < 10; i++)
    {
        printf("\n");
        printf("Nombre del atleta %d: ", (i + 1));
        scanf("%s", atletaDiez[i].nombreAtleta);
        printf("Deporte del atleta: ");
        scanf("%s", atletaDiez[i].deporte);
        printf("Ingresa el país de origen: ");
        scanf("%s", atletaDiez[i].pais);
        printf("Ingresa el número de medallas: ");
        scanf("%d", &atletaDiez[i].nMedallas);
        getchar();
    }

    for (int i = 0; i < 10; i++)
    {
        if (atletaDiez[i].nMedallas > maxMedallas)
        {
            maxMedallas = atletaDiez[i].nMedallas;
            indiceMaximo = i;
        }
    }

    // Mostrar la información del atleta con más medallas
    printf("\nInformación del atleta con más medallas:\n");
    printf("Deporte: %s\n", atletaDiez[indiceMaximo].deporte);
    printf("Nombre: %s\n", atletaDiez[indiceMaximo].nombreAtleta);
    printf("País: %s\n", atletaDiez[indiceMaximo].pais);
    printf("Número de medallas: %d\n", atletaDiez[indiceMaximo].nMedallas);

    return 0;
}
