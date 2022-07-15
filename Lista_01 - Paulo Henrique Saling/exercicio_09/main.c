#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cPeq,cMed,cGnd;
    float vPeq,vMed,vGnd,vTot;

    vPeq = 10.00;
    vMed = 12.00;
    vGnd = 15.00;

    printf("Informe o numero de camisas tamanho pequena que foram vendidas:\n");
    scanf("%d",&cPeq);
    printf("Informe o numero de camisas tamanho medio que foram vendidas:\n");
    scanf("%d",&cMed);
    printf("Informe o numero de camisas tamanho grande que foram vendidas:\n");
    scanf("%d",&cGnd);

    vTot = (cPeq*vPeq)+(cMed*vMed)+(cGnd*vGnd);

    printf("\nO valor total arrecadado foi de R$ %.2f.",vTot);




}
