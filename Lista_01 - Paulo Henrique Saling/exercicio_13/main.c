#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nInt,cen,dez,und;

    printf("Informe o valor de um numero inteiro de ate 3 digitos:\n");
    scanf("%d",&nInt);

    cen = nInt/100;
    dez = (nInt-(cen*100))/10;
    und = nInt-(cen*100+dez*10);

    printf("\nNumero digitado: %d",nInt);
    printf("\nNumero de CENTENAS: %d",cen);
    printf("\nNumero de DEZENAS: %d",dez);
    printf("\nNumero de UNIDADES: %d",und);

}
