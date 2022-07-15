#include <stdio.h>
#include <stdlib.h>

int main()
{
    float pGas , din , tAbast;

    printf("Informe quantos reais voce deseja abastecer:\n");
    scanf("%f",&din);
    printf("\nInforme o preco por litro de gasolina:\n");
    scanf("%f",&pGas);

    tAbast = din*pGas;

    printf("Com R$ %.2f, foi possivel abastecer %.2f litros de gasolina.",din,tAbast);
}
