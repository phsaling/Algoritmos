#include <stdio.h>
#include <stdlib.h>

int main()
{
    float sBruto,sLiquido,hNormal,hExtra,nHextra;

    hNormal = 10.00;
    hExtra = 15.00;

    printf("Para calcular o salario bruto e liquido do funcionario, informe quantas horas extras ele exectuta. \nConsiderando que ele normalmente trabalha 40 horas por semana, por 4 semanas por mes.\n");
    printf("Horas extras trabalhadas no mes:");
    scanf("%f",&nHextra);


    sBruto=(40.0*hNormal*4)+(nHextra*hExtra);

    sLiquido= sBruto-(sBruto*0.1);

    printf("\nO salario liquido deste funcionario eh: R$ %.2f.",sLiquido);


}
