#include <stdio.h>
#include <stdlib.h>

int main()
{
    int qtdd, item;
    float vItem, vPedido;
    char nItem[50];

    printf("-------------------------------------------------------------------------\n");
    printf("Informe o codigo do produto:\n");
    printf("    1 - Cachorro Quente;\n");
    printf("    2 - Bauru;\n");
    printf("    3 - Misto Quente;\n");
    printf("    4 - Hamburguer;\n");
    printf("    5 - Cheeseburguer;\n");
    printf("    6 - Refrigerante;\n\n");

    scanf("%d",&item);

    printf("-------------------------------------------------------------------------\n");

    if (item < 1 || item > 6){
        printf("\nProduto nao encontrado, favor informar uma das opcoes.\n");

    }  else if (item >= 1 || item <= 6) {

        printf("\nAgora informe a quantidade desejada:\n");
    scanf("%d",&qtdd);

            if (item = 1){
                nItem[50] = 'Cachorro_Quente';
                vItem = 11.00;
            }
            if (item = 2){
                nItem[50] = 'Bauru';
                vItem = 8.50;
            }
            if (item = 3){
                nItem[50] = 'Misto_Quente';
                vItem = 8.00;
            }
            if (item = 4){
                nItem[50] = 'Hamburguer';
                vItem = 9.00;
            }
            if (item = 5){
                nItem[50] = 'Cheeseburguer';
                vItem = 10.00;
            }
            if (item = 6){
                nItem[50] = 'Refrigerante';
                vItem = 4.50;
            }

            vPedido = qtdd * vItem;

            printf("\nO pedido solicitado foi:\n");
            printf(" ----- Produto: %d - %c;\n",item,nItem[50]);
            printf(" ----- Valor Unitario: R$ %.2f;\n",vItem);
            printf(" ----- Quantidade Pedida: %d;\n",qtdd);
            printf(" ----- Valor Total: R$ %.2f;\n",vPedido);
            printf("-------------------------------------------------------------------------\n");
    }

// N�o consegui imprimir a string, o que fazer?

}
