#include <stdio.h>
#include <stdlib.h>

int main()
{
    float aChip, aAlim,vMfrango,nFrango;

    printf("Granja Frangotech.\nPara calcular o valor gasto para marcar os frangos com os aneis, com chip e de alimentação, informe o numero de frangos na granja:\n");
    scanf("%f",&nFrango);

    aChip = 4.00;
    aAlim = 3.50;

    vMfrango = nFrango *(aChip + (2.0*aAlim));

    printf("O valor para marcar todas as aves é: R$ %.2f.",vMfrango);

}
