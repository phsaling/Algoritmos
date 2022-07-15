#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float dPizza, aPizza, pi;

    printf("Informe o diametro da pizza:\n");
    scanf("%f",&dPizza);

    pi = 3.14;

    aPizza = pi*pow(dPizza,2)/4;

    printf("\nA area da pizza que possui %.2f unidades de diametro eh de: %.2f unidades^2.",dPizza,aPizza);
}
