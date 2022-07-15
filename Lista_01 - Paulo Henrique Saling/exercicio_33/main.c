#include <stdio.h>
#include <stdlib.h>

int main()
{
    float bMaior, bMenor, altura, aTrapezio;

    printf("Para calcular a area do trapezio, informe:\n");
    printf("\nBase maior:\n");
    scanf("%f",&bMaior);
    printf("\nBase menor:\n");
    scanf("%f",&bMenor);
    printf("\nAltura:\n");
    scanf("%f",&altura);

    aTrapezio = ((bMaior + bMenor) * altura) / 2;

    printf("\nA area do trapezio eh: %.2f unds2.\n",aTrapezio);

}
