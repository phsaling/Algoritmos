#include <stdio.h>
#include <stdlib.h>

int main()
{
    float dMaior, dMenor, aLozango;

    printf("Para calcular a area do lozango, informe:\n");
    printf("\nDiagonal maior:\n");
    scanf("%f",&dMaior);
    printf("\nDiagonal menor:\n");
    scanf("%f",&dMenor);


    aLozango = (dMaior * dMenor) / 2;

    printf("\nA area do lozango eh: %.2f unds2.\n",aLozango);
}
