#include <stdio.h>
#include <stdlib.h>

int main()
{
    float l1, l2, aQuadrado;

    printf("Para calcular a area do quadrado, informe:\n");
    printf("\nLado 01:\n");
    scanf("%f",&l1);
    printf("\nLado 02:\n");
    scanf("%f",&l2);


    aQuadrado = (l1 * l2) ;

    printf("\nA area do quadrado eh: %.2f unds2.\n",aQuadrado);


}
