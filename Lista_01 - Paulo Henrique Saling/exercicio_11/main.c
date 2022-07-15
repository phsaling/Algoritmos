#include <stdio.h>
#include <stdlib.h>

int main()
{

    int ano,mes,dia,dAScd;

    printf("Informe o numero de dias sem acidentes registrados:\n");
    scanf("%d",&dAScd);

    ano=dAScd/360;
    mes=(dAScd-(ano*360))/30;
    dia=dAScd-(ano*360+mes*30);

    printf("\n----------------------------------------------------");
    printf("\n|                   ESTAMOS A:                     ");
    printf("\n|        %d ANOS, %d MESES E %d DIAS                ",ano,mes,dia);
    printf("\n|                SEM ACIDENTES!!!                  ");
    printf("\n----------------------------------------------------");
}
