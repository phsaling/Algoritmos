#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dia, mes,diaI,mesI,diasF;

    printf("Calculadora de dias.\nPara comecar, digite o dia de hoje:\n");
    scanf("%d",&dia);
    printf("\nOtimo. Agora informe o mes:\n");
    scanf("%d",&mes);

    diaI = 1;
    mesI = 1;

    diasF = (dia - diaI) + ((mes - mesI)*30);

    printf("\nDesde o primeiro dia do ano, ja se passaram %d dias.",diasF);

}
