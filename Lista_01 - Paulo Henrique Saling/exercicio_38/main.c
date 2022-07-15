#include <stdio.h>
#include <stdlib.h>

int main()
{
    int aNasc, aAtual, aDif, anos, meses, semanas,dias;

    printf("Informe o ano de nascimento:\n");
    scanf("%d",&aNasc);

    printf("\nInforme o ano atual:\n");
    scanf("%d",&aAtual);

    aDif = aAtual - aNasc;

    anos = aDif;
    meses = aDif * 12;
    semanas = aDif * 52;
    dias = aDif * 365;

    printf("\na) A pessoa tem: %d anos de vida.",anos);
    printf("\nb) A pessoa tem: %d meses de vida.",meses);
    printf("\nc) A pessoa tem: %d semanas de vida.",semanas);
    printf("\nd) A pessoa tem: %d dias de vida.\n",dias);
}
