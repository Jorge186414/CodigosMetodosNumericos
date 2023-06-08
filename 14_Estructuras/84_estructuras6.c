#include <stdio.h>

struct fraccion
{
    int num;
    int den;
};

int main(void)
{
    struct fraccion frac1;
    struct fraccion frac2;
    frac1.den = 3;
    frac1.num = 4;
    frac2.den = 6;
    frac2.num = 2;
    suma(frac1, frac2);
    resta(frac1, frac2);
    multipli(frac1, frac2);
    division(frac1, frac2);

    return 0;
}

int multipli(struct fraccion mul1, struct fraccion mul2)
{
    int den = mul1.den * mul2.den;
    int num = mul1.num * mul2.num;

    printf("Multiplicacion: ");
    printf("%d / %d\n", num, den);

    return 0;
}

int suma(struct fraccion suma1, struct fraccion suma2)
{
    int num = (suma2.den * suma1.num) + (suma1.den * suma2.num);
    int den = suma1.den * suma2.den;

    printf("Suma: ");
    printf("%d / %d\n", num, den);

    return 0;
}

int resta(struct fraccion resta1, struct fraccion resta2)
{
    int num = (resta1.num * resta2.den) - (resta2.num * resta1.den);
    int den = resta1.den * resta2.den;
    printf("Resta: ");
    printf("%d / %d\n", num, den);
}

int division(struct fraccion div1, struct fraccion div2)
{
    int num = div1.num * div2.den;
    int den = div1.den * div2.num;

    printf("Division: ");
    printf("%d / %d\n", num, den);

    return 0;
}