#include <stdio.h>
#include <stdlib.h>

int main()
{
    int pFrances , broa;

    float venda, poup;

    printf("Ola padaria Hotpao.\nQuantos paes franceses foram vendidos hoje:\n");
    scanf("%d",&pFrances);
    printf("\nAgora, informe o numero de broas:\n");
    scanf("%d",&broa);

    venda = (pFrances*0.12) + (broa*1.50);

    poup = venda*0.10;

    printf("\nPadaria Hotpao. Voce obteve R$ %.2f em vendas hoje, devera guardar R$ %.2f na sua poupanca.\n",venda,poup);
}
